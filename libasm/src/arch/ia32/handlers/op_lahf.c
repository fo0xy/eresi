/**
 * @file op_lahf.c
 * $Id: op_lahf.c,v 1.2 2007-04-13 06:56:34 heroine Exp $
 *
 */
#include <libasm.h>
#include <libasm-int.h>

/**
 * Handler for lahf instruction opcode 0x9f
 *
  <instruction func="op_lahf" opcode="0x9f"/>
*/

int op_lahf(asm_instr *new, u_char *opcode, u_int len, asm_processor *proc) {
  new->ptr_instr = opcode;
  new->len += 1;
  new->instr = ASM_LAHF;
#if LIBASM_USE_OPERAND_VECTOR
#endif
  return (new->len);
}
