# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCoreMiniAxi.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCoreMiniAxi \
	VCoreMiniAxi___024root__DepSet_h807dea6f__0 \
	VCoreMiniAxi___024root__DepSet_hb728c00c__0 \
	VCoreMiniAxi___024root__DepSet_hb728c00c__1 \
	VCoreMiniAxi___024root__DepSet_hb728c00c__2 \
	VCoreMiniAxi___024root__DepSet_hb728c00c__3 \
	VCoreMiniAxi___024root__DepSet_hb728c00c__4 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCoreMiniAxi__ConstPool_0 \
	VCoreMiniAxi___024root__Slow \
	VCoreMiniAxi___024root__DepSet_h807dea6f__0__Slow \
	VCoreMiniAxi___024root__DepSet_hb728c00c__0__Slow \
	VCoreMiniAxi___024root__DepSet_hb728c00c__1__Slow \
	VCoreMiniAxi___024root__DepSet_hb728c00c__2__Slow \
	VCoreMiniAxi___024unit__Slow \
	VCoreMiniAxi___024unit__DepSet_hc91605d5__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCoreMiniAxi__Trace__0 \
	VCoreMiniAxi__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCoreMiniAxi__Syms \
	VCoreMiniAxi__Trace__0__Slow \
	VCoreMiniAxi__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
