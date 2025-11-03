#ifndef CORALNPU_PARAMETERS_H_
#define CORALNPU_PARAMETERS_H_

#include <stdbool.h>

#define KP_hartId  0
#define KP_vectorBits  256
#define KP_core  1
#define KP_programCounterBits  32
#define KP_instructionBits  32
#define KP_instructionLanes  4
#define KP_vectorCountBits  8
#define KP_enableVector  false
#define KP_vectorAluCount  2
#define KP_vectorReadPorts  7
#define KP_vectorWritePorts  6
#define KP_vectorWhintPorts  4
#define KP_vectorScalarPorts  2
#define KP_vectorFifoDepth  16
#define KP_enableVerification  false
#define KP_enableRvv  false
#define KP_rvvVlen  128
#define KP_enableDispatchV2  false
#define KP_enableFloat  true
#define KP_floatPulpDivsqrt  0
#define KP_floatRegfileBaseAddr  32
#define KP_rvvRegfileBaseAddr  64
#define KP_rvvRegCount  32
#define KP_retirementBufferSize  8
#define KP_enableFetchL0  false
#define KP_fetchCacheBytes  1024
#define KP_fetchAddrBits  32
#define KP_fetchDataBits  128
#define KP_lsuAddrBits  32
#define KP_lsuDataBits  128
#define KP_lsuDelayPipelineLen  1
#define KP_enableDebug  false
#define KP_tcmHighmem  false
#define KP_axiSysIdBits  7
#define KP_axiSysAddrBits  32
#define KP_l1islots  256
#define KP_l1iassoc  4
#define KP_axi0IdBits  4
#define KP_axi0AddrBits  32
#define KP_l1dslots  256
#define KP_axi1IdBits  4
#define KP_axi1AddrBits  32
#define KP_axi2IdBits  6
#define KP_axi2AddrBits  32
#define KP_csrInCount  13
#define KP_csrOutCount  8
#define KP_dbusSize 5
#define KP_useDispatchV2 false
#define KP_useRetirementBuffer false
#define KP_retirementBufferIdxWidth 7
#define KP_useDebugModule false
#endif
