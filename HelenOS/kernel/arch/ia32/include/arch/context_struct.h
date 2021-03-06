
/***************************************************************************** 
 * AUTO-GENERATED FILE, DO NOT EDIT!!!
 * Generated by: tools/autogen.py
 * Generated from: arch/ia32/include/arch/context_struct.ag
 *****************************************************************************/

#ifndef AUTOGEN_CONTEXT_H
#define AUTOGEN_CONTEXT_H

#ifndef __ASM__
#include <typedefs.h>
#endif

#define CONTEXT_OFFSET_SP 0
#define CONTEXT_SIZE_SP 4
#define CONTEXT_OFFSET_PC 4
#define CONTEXT_SIZE_PC 4
#define CONTEXT_OFFSET_EBX 8
#define CONTEXT_SIZE_EBX 4
#define CONTEXT_OFFSET_ESI 12
#define CONTEXT_SIZE_ESI 4
#define CONTEXT_OFFSET_EDI 16
#define CONTEXT_SIZE_EDI 4
#define CONTEXT_OFFSET_EBP 20
#define CONTEXT_SIZE_EBP 4
#define CONTEXT_OFFSET_TP 24
#define CONTEXT_SIZE_TP 4
#define CONTEXT_OFFSET_IPL 28
#define CONTEXT_SIZE_IPL 4
#define CONTEXT_SIZE 32

#ifndef __ASM__
typedef struct context {
	uint32_t sp;
	uint32_t pc;
	uint32_t ebx;
	uint32_t esi;
	uint32_t edi;
	uint32_t ebp;
	uint32_t tp;
	ipl_t ipl;
} context_t;
#endif

#endif
	
