docker run -it -v "%cd%/bazel":/bazel coralnpu /bin/bash
@echo off
REM --- SET VARIABLES ---
SET IMAGE_NAME=coralnpu
SET BAZEL_BIN_PATH=/home/builder/coralnpu/bazel-bin/
SET HOST_MOUNT_PATH=%%cd%%\bazel
SET CONTAINER_MOUNT_PATH=/bazel

REM docker run -it -v "%cd%/bazel":/bazel coralnpu /bin/bash

REM --- EXECUTE DOCKER COMMAND ---
dir bazel
dir bazel
dir bazel/bazel-out
dir bazel/bazel-out/coralnpu_hw
dir bazel/bazel-out/coralnpu_hw/hdl
docker run -v "%HOST_MOUNT_PATH%":%CONTAINER_MOUNT_PATH% %IMAGE_NAME% /bin/bash -c " ^
    cd /home/builder/coralnpu/ && ^
    echo Starting extensive build and simulation process... && ^
    bazel run //tests/cocotb:core_mini_axi_sim_cocotb && ^
    bazel build //examples:coralnpu_v2_hello_world_add_floats && ^
    bazel build //tests/verilator_sim:core_mini_axi_sim && ^
    %BAZEL_BIN_PATH%tests/verilator_sim/core_mini_axi_sim ^
        --binary %BAZEL_BIN_PATH%examples/coralnpu_v2_hello_world_add_floats.elf && ^
    bazel build //hdl/chisel/src/coralnpu:core_mini_axi_cc_library_emit_verilog && ^
    bazel build //hdl/chisel/src/coralnpu:rvv_core_mini_axi_cc_library_emit_verilog && ^
    bazel build //hdl/chisel/src/sofc:coralnpu_chisel_subsystem_cc_library_emit_verilog && ^
    echo Archiving Bazel cache... && ^
    cp /home/builder/.cache/bazel/_bazel_builder/fedd0a2345caef863e0ac9a4e4ddb5f6/external %CONTAINER_MOUNT_PATH% && ^
    cp /home/builder/.cache/bazel/_bazel_builder/fedd0a2345caef863e0ac9a4e4ddb5f6/execroot/coralnpu_hw/bazel-out/k8-fastbuild/bin/hdl/chisel/ bazel/bazel-out/coralnpu_hw/hdl && ^
    echo Build and archive complete. Output available in bazel/
"
