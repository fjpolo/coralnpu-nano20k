// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_sc.h"


void VCoreMiniAxi___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"RNE", "RTZ", "RDN", "RUP", "RMM", "ROD", 
                                "DYN"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "111"};
        tracep->declDTypeEnum(1, "fpnew_pkg::roundmode_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FMADD", "FNMSUB", "ADD", "MUL", "DIV", 
                                "SQRT", "SGNJ", "MINMAX", 
                                "CMP", "CLASSIFY", 
                                "F2F", "F2I", "I2F", 
                                "CPKAB", "CPKCD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110"};
        tracep->declDTypeEnum(2, "fpnew_pkg::operation_e", 15, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FP32", "FP64", "FP16", "FP8", "FP16ALT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(3, "fpnew_pkg::fp_format_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"INT8", "INT16", "INT32", "INT64"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(4, "fpnew_pkg::int_format_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADDMUL", "DIVSQRT", "NONCOMP", "CONV"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "fpnew_pkg::opgroup_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BEFORE", "AFTER", "INSIDE", "DISTRIBUTED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(6, "fpnew_pkg::pipe_config_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "BUSY", "HOLD", "UNREACHABLE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(7, "fpnew_divsqrt_th_32.fsm_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NEGINF", "NEGNORM", "NEGSUBNORM", "NEGZERO", 
                                "POSZERO", "POSSUBNORM", 
                                "POSNORM", "POSINF", 
                                "SNAN", "QNAN"};
        const char* __VenumItemValues[]
        = {"1", "10", "100", "1000", "10000", "100000", 
                                "1000000", "10000000", 
                                "100000000", "1000000000"};
        tracep->declDTypeEnum(8, "fpnew_pkg::classmask_e", 10, 10, __VenumItemNames, __VenumItemValues);
    }
}

void VCoreMiniAxi___024root__trace_decl_types(VerilatedFst* tracep) {
    VCoreMiniAxi___024root__traceDeclTypesSub0(tracep);
}
