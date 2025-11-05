import string
import os
import sys

# Define the set of characters considered 'good' (printable ASCII plus essential whitespace)
# string.printable includes digits, letters, punctuation, whitespace (' \t\n\r\x0b\x0c')
# The filter will remove non-ASCII bytes and control characters outside of the standard whitespace.
PRINTABLE_AND_WHITESPACE = set(string.printable)

def clean_verilog_file(input_filepath, output_filepath):
    """
    Reads an input file, removes all non-printable characters (except standard
    whitespace like newline, tab, and carriage return), and writes the result
    to an output file.
    """
    if not os.path.exists(input_filepath):
        print(f"Error: Input file not found at '{input_filepath}'")
        return

    try:
        print(f"Reading content from: {input_filepath}")
        
        # Open in binary mode ('rb') to handle potential non-ASCII characters without decoding errors
        with open(input_filepath, 'rb') as f:
            content_bytes = f.read()
        
        # Attempt to decode the bytes to a string, replacing unrecognised characters
        # This step helps deal with character set issues
        content_str = content_bytes.decode('utf-8', errors='replace')
        
        cleaned_content = []
        for char in content_str:
            # Filter the characters based on the defined printable set
            if char in PRINTABLE_AND_WHITESPACE:
                # Also explicitly check for NULL byte which can cause issues
                if char != '\x00':
                    cleaned_content.append(char)
            # Optional: Log which non-printable characters were found and removed
            # else:
            #     print(f"Removed non-printable character: {repr(char)}")

        final_content = "".join(cleaned_content)

        # Write the cleaned content to the new file
        with open(output_filepath, 'w', encoding='utf-8') as f:
            f.write(final_content)

        print("-" * 50)
        print(f"Successfully cleaned the file.")
        print(f"Original file size: {len(content_bytes)} bytes")
        print(f"Cleaned file saved to: {output_filepath}")
        print(f"Cleaned file size: {len(final_content.encode('utf-8'))} bytes")
        print("Please review the contents of the new file before using it.")
        print("-" * 50)

    except IOError as e:
        print(f"An I/O error occurred: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    if len(sys.argv) < 2 or len(sys.argv) > 3:
        print("Usage: python clean_verilog.py <input_verilog_file> [output_file_name]")
        print("\nIf output_file_name is not provided, it defaults to '<input_file>_cleaned.v'")
        sys.exit(1)

    input_file = sys.argv[1]

    if len(sys.argv) == 3:
        output_file = sys.argv[2]
    else:
        # Default output file name: append _cleaned.v before the extension or at the end
        if '.' in input_file:
            base, ext = os.path.splitext(input_file)
            output_file = f"{base}_cleaned{ext}"
        else:
            output_file = f"{input_file}_cleaned.v"

    clean_verilog_file(input_file, output_file)