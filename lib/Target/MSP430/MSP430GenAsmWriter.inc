/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Writer Source Fragment                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void MSP430InstPrinter::printInstruction(const MCInst *MI, raw_ostream &O) {
  static const uint32_t OpInfo[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// CFI_INSTRUCTION
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    370U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    363U,	// BUNDLE
    536U,	// LIFETIME_START
    350U,	// LIFETIME_END
    0U,	// STACKMAP
    0U,	// PATCHPOINT
    0U,	// LOAD_STACK_GUARD
    0U,	// STATEPOINT
    0U,	// FRAME_ALLOC
    1186U,	// ADC16mi
    18594U,	// ADC16mm
    1186U,	// ADC16mr
    66722U,	// ADC16ri
    34978U,	// ADC16rm
    66722U,	// ADC16rr
    1054U,	// ADC8mi
    18462U,	// ADC8mm
    1054U,	// ADC8mr
    66590U,	// ADC8ri
    34846U,	// ADC8rm
    66590U,	// ADC8rr
    1214U,	// ADD16mi
    18622U,	// ADD16mm
    1214U,	// ADD16mr
    66750U,	// ADD16ri
    35006U,	// ADD16rm
    3382U,	// ADD16rm_POST
    66750U,	// ADD16rr
    1082U,	// ADD8mi
    18490U,	// ADD8mm
    1082U,	// ADD8mr
    66618U,	// ADD8ri
    34874U,	// ADD8rm
    3334U,	// ADD8rm_POST
    66618U,	// ADD8rr
    380U,	// ADJCALLSTACKDOWN
    520U,	// ADJCALLSTACKUP
    1221U,	// AND16mi
    18629U,	// AND16mm
    1221U,	// AND16mr
    66757U,	// AND16ri
    35013U,	// AND16rm
    3390U,	// AND16rm_POST
    66757U,	// AND16rr
    1089U,	// AND8mi
    18497U,	// AND8mm
    1089U,	// AND8mr
    66625U,	// AND8ri
    34881U,	// AND8rm
    3342U,	// AND8rm_POST
    66625U,	// AND8rr
    18602U,	// BIC16mm
    1194U,	// BIC16mr
    34986U,	// BIC16rm
    66730U,	// BIC16rr
    18470U,	// BIC8mm
    1062U,	// BIC8mr
    34854U,	// BIC8rm
    66598U,	// BIC8rr
    1264U,	// BIT16mi
    18672U,	// BIT16mm
    1264U,	// BIT16mr
    4336U,	// BIT16ri
    5360U,	// BIT16rm
    4336U,	// BIT16rr
    1117U,	// BIT8mi
    18525U,	// BIT8mm
    1117U,	// BIT8mr
    4189U,	// BIT8ri
    5213U,	// BIT8rm
    4189U,	// BIT8rr
    6268U,	// Bi
    7292U,	// Bm
    6268U,	// Br
    6257U,	// CALLi
    8305U,	// CALLm
    6257U,	// CALLr
    1236U,	// CMP16mi
    1236U,	// CMP16mr
    4308U,	// CMP16ri
    5332U,	// CMP16rm
    4308U,	// CMP16rr
    1096U,	// CMP8mi
    1096U,	// CMP8mr
    4168U,	// CMP8ri
    5192U,	// CMP8rm
    4168U,	// CMP8rr
    9772U,	// JCC
    10359U,	// JMP
    1271U,	// MOV16mi
    18679U,	// MOV16mm
    1271U,	// MOV16mr
    4343U,	// MOV16ri
    5367U,	// MOV16rm
    50518U,	// MOV16rm_POST
    4343U,	// MOV16rr
    1124U,	// MOV8mi
    18532U,	// MOV8mm
    1124U,	// MOV8mr
    4196U,	// MOV8ri
    5220U,	// MOV8rm
    50470U,	// MOV8rm_POST
    4196U,	// MOV8rr
    5220U,	// MOVZX16rm8
    4196U,	// MOVZX16rr8
    558U,	// NOP
    1257U,	// OR16mi
    18665U,	// OR16mm
    1257U,	// OR16mr
    66793U,	// OR16ri
    35049U,	// OR16rm
    3406U,	// OR16rm_POST
    66793U,	// OR16rr
    1110U,	// OR8mi
    18518U,	// OR8mm
    1110U,	// OR8mr
    66646U,	// OR8ri
    34902U,	// OR8rm
    3358U,	// OR8rm_POST
    66646U,	// OR8rr
    6363U,	// POP16r
    6348U,	// PUSH16r
    562U,	// RET
    551U,	// RETI
    6284U,	// SAR16r1
    6321U,	// SAR16r1c
    6152U,	// SAR8r1
    6189U,	// SAR8r1c
    1178U,	// SBC16mi
    18586U,	// SBC16mm
    1178U,	// SBC16mr
    66714U,	// SBC16ri
    34970U,	// SBC16rm
    66714U,	// SBC16rr
    1046U,	// SBC8mi
    18454U,	// SBC8mm
    1046U,	// SBC8mr
    66582U,	// SBC8ri
    34838U,	// SBC8rm
    66582U,	// SBC8rr
    6272U,	// SEXT16r
    6277U,	// SHL16r1
    6145U,	// SHL8r1
    1171U,	// SUB16mi
    18579U,	// SUB16mm
    1171U,	// SUB16mr
    66707U,	// SUB16ri
    34963U,	// SUB16rm
    3374U,	// SUB16rm_POST
    66707U,	// SUB16rr
    1039U,	// SUB8mi
    18447U,	// SUB8mm
    1039U,	// SUB8mr
    66575U,	// SUB8ri
    34831U,	// SUB8rm
    3326U,	// SUB8rm_POST
    66575U,	// SUB8rr
    6251U,	// SWPB16r
    443U,	// Select16
    503U,	// Select8
    413U,	// Shl16
    475U,	// Shl8
    398U,	// Sra16
    461U,	// Sra8
    428U,	// Srl16
    489U,	// Srl8
    1250U,	// XOR16mi
    18658U,	// XOR16mm
    1250U,	// XOR16mr
    66786U,	// XOR16ri
    35042U,	// XOR16rm
    3398U,	// XOR16rm_POST
    66786U,	// XOR16rr
    1103U,	// XOR8mi
    18511U,	// XOR8mm
    1103U,	// XOR8mr
    66639U,	// XOR8ri
    34895U,	// XOR8rm
    3350U,	// XOR8rm_POST
    66639U,	// XOR8rr
    4196U,	// ZEXT16r
    0U
  };

  static const char AsmStrs[] = {
  /* 0 */ 'r', 'l', 'a', '.', 'b', 9, 0,
  /* 7 */ 'r', 'r', 'a', '.', 'b', 9, 0,
  /* 14 */ 's', 'u', 'b', '.', 'b', 9, 0,
  /* 21 */ 's', 'u', 'b', 'c', '.', 'b', 9, 0,
  /* 29 */ 'a', 'd', 'd', 'c', '.', 'b', 9, 0,
  /* 37 */ 'b', 'i', 'c', '.', 'b', 9, 0,
  /* 44 */ 'c', 'l', 'r', 'c', 10, 9, 'r', 'r', 'c', '.', 'b', 9, 0,
  /* 57 */ 'a', 'd', 'd', '.', 'b', 9, 0,
  /* 64 */ 'a', 'n', 'd', '.', 'b', 9, 0,
  /* 71 */ 'c', 'm', 'p', '.', 'b', 9, 0,
  /* 78 */ 'x', 'o', 'r', '.', 'b', 9, 0,
  /* 85 */ 'b', 'i', 's', '.', 'b', 9, 0,
  /* 92 */ 'b', 'i', 't', '.', 'b', 9, 0,
  /* 99 */ 'm', 'o', 'v', '.', 'b', 9, 0,
  /* 106 */ 's', 'w', 'p', 'b', 9, 0,
  /* 112 */ 'c', 'a', 'l', 'l', 9, 0,
  /* 118 */ 'j', 'm', 'p', 9, 0,
  /* 123 */ 'b', 'r', 9, 0,
  /* 127 */ 's', 'x', 't', 9, 0,
  /* 132 */ 'r', 'l', 'a', '.', 'w', 9, 0,
  /* 139 */ 'r', 'r', 'a', '.', 'w', 9, 0,
  /* 146 */ 's', 'u', 'b', '.', 'w', 9, 0,
  /* 153 */ 's', 'u', 'b', 'c', '.', 'w', 9, 0,
  /* 161 */ 'a', 'd', 'd', 'c', '.', 'w', 9, 0,
  /* 169 */ 'b', 'i', 'c', '.', 'w', 9, 0,
  /* 176 */ 'c', 'l', 'r', 'c', 10, 9, 'r', 'r', 'c', '.', 'w', 9, 0,
  /* 189 */ 'a', 'd', 'd', '.', 'w', 9, 0,
  /* 196 */ 'a', 'n', 'd', '.', 'w', 9, 0,
  /* 203 */ 'p', 'u', 's', 'h', '.', 'w', 9, 0,
  /* 211 */ 'c', 'm', 'p', '.', 'w', 9, 0,
  /* 218 */ 'p', 'o', 'p', '.', 'w', 9, 0,
  /* 225 */ 'x', 'o', 'r', '.', 'w', 9, 0,
  /* 232 */ 'b', 'i', 's', '.', 'w', 9, 0,
  /* 239 */ 'b', 'i', 't', '.', 'w', 9, 0,
  /* 246 */ 'm', 'o', 'v', '.', 'w', 9, 0,
  /* 253 */ 's', 'u', 'b', '.', 'b', 9, '@', 0,
  /* 261 */ 'a', 'd', 'd', '.', 'b', 9, '@', 0,
  /* 269 */ 'a', 'n', 'd', '.', 'b', 9, '@', 0,
  /* 277 */ 'x', 'o', 'r', '.', 'b', 9, '@', 0,
  /* 285 */ 'b', 'i', 's', '.', 'b', 9, '@', 0,
  /* 293 */ 'm', 'o', 'v', '.', 'b', 9, '@', 0,
  /* 301 */ 's', 'u', 'b', '.', 'w', 9, '@', 0,
  /* 309 */ 'a', 'd', 'd', '.', 'w', 9, '@', 0,
  /* 317 */ 'a', 'n', 'd', '.', 'w', 9, '@', 0,
  /* 325 */ 'x', 'o', 'r', '.', 'w', 9, '@', 0,
  /* 333 */ 'b', 'i', 's', '.', 'w', 9, '@', 0,
  /* 341 */ 'm', 'o', 'v', '.', 'w', 9, '@', 0,
  /* 349 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 362 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 369 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 379 */ '#', 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 397 */ '#', 32, 'S', 'r', 'a', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 412 */ '#', 32, 'S', 'h', 'l', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 427 */ '#', 32, 'S', 'r', 'l', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 442 */ '#', 32, 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 460 */ '#', 32, 'S', 'r', 'a', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 474 */ '#', 32, 'S', 'h', 'l', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 488 */ '#', 32, 'S', 'r', 'l', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 502 */ '#', 32, 'S', 'e', 'l', 'e', 'c', 't', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 519 */ '#', 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 535 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 550 */ 'r', 'e', 't', 'i', 0,
  /* 555 */ 'j', 0,
  /* 557 */ 'n', 'o', 'p', 0,
  /* 561 */ 'r', 'e', 't', 0,
  };

  O << "\t";

  // Emit the opcode for the instruction.
  uint32_t Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 1023)-1;


  // Fragment 0 encoded into 4 bits for 11 unique commands.
  switch ((Bits >> 10) & 15) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // DBG_VALUE, BUNDLE, LIFETIME_START, LIFETIME_END, ADJCALLSTACKDOWN, ADJ...
    return;
    break;
  case 1:
    // ADC16mi, ADC16mr, ADC16ri, ADC16rr, ADC8mi, ADC8mr, ADC8ri, ADC8rr, AD...
    printOperand(MI, 2, O); 
    break;
  case 2:
    // ADC16mm, ADC16rm, ADC8mm, ADC8rm, ADD16mm, ADD16rm, ADD8mm, ADD8rm, AN...
    printSrcMemOperand(MI, 2, O); 
    O << ", "; 
    break;
  case 3:
    // ADD16rm_POST, ADD8rm_POST, AND16rm_POST, AND8rm_POST, OR16rm_POST, OR8...
    printOperand(MI, 3, O); 
    O << "+, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 4:
    // BIT16ri, BIT16rr, BIT8ri, BIT8rr, CMP16ri, CMP16rr, CMP8ri, CMP8rr, MO...
    printOperand(MI, 1, O); 
    O << ", "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 5:
    // BIT16rm, BIT8rm, CMP16rm, CMP8rm, MOV16rm, MOV8rm, MOVZX16rm8
    printSrcMemOperand(MI, 1, O); 
    O << ", "; 
    printOperand(MI, 0, O); 
    return;
    break;
  case 6:
    // Bi, Br, CALLi, CALLr, POP16r, PUSH16r, SAR16r1, SAR16r1c, SAR8r1, SAR8...
    printOperand(MI, 0, O); 
    return;
    break;
  case 7:
    // Bm
    printSrcMemOperand(MI, 0, O); 
    return;
    break;
  case 8:
    // CALLm
    printSrcMemOperand(MI, 0, O, "mem"); 
    return;
    break;
  case 9:
    // JCC
    printCCOperand(MI, 1, O); 
    O << "\t"; 
    printPCRelImmOperand(MI, 0, O); 
    return;
    break;
  case 10:
    // JMP
    printPCRelImmOperand(MI, 0, O); 
    return;
    break;
  }


  // Fragment 1 encoded into 2 bits for 4 unique commands.
  switch ((Bits >> 14) & 3) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // ADC16mi, ADC16mr, ADC16ri, ADC16rr, ADC8mi, ADC8mr, ADC8ri, ADC8rr, AD...
    O << ", "; 
    break;
  case 1:
    // ADC16mm, ADC8mm, ADD16mm, ADD8mm, AND16mm, AND8mm, BIC16mm, BIC8mm, BI...
    printSrcMemOperand(MI, 0, O); 
    return;
    break;
  case 2:
    // ADC16rm, ADC8rm, ADD16rm, ADD8rm, AND16rm, AND8rm, BIC16rm, BIC8rm, OR...
    printOperand(MI, 0, O); 
    return;
    break;
  case 3:
    // MOV16rm_POST, MOV8rm_POST
    O << "+, "; 
    printOperand(MI, 0, O); 
    return;
    break;
  }


  // Fragment 2 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 16) & 1) {
    // ADC16ri, ADC16rr, ADC8ri, ADC8rr, ADD16ri, ADD16rr, ADD8ri, ADD8rr, AN...
    printOperand(MI, 0, O); 
    return;
  } else {
    // ADC16mi, ADC16mr, ADC8mi, ADC8mr, ADD16mi, ADD16mr, ADD8mi, ADD8mr, AN...
    printSrcMemOperand(MI, 0, O); 
    return;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *MSP430InstPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 33 && "Invalid register number!");

  static const char AsmStrs[] = {
  /* 0 */ 'r', '1', '0', 0,
  /* 4 */ 'r', '0', 0,
  /* 7 */ 'r', '1', '1', 0,
  /* 11 */ 'r', '1', 0,
  /* 14 */ 'r', '1', '2', 0,
  /* 18 */ 'r', '2', 0,
  /* 21 */ 'r', '1', '3', 0,
  /* 25 */ 'r', '3', 0,
  /* 28 */ 'r', '1', '4', 0,
  /* 32 */ 'r', '4', 0,
  /* 35 */ 'r', '1', '5', 0,
  /* 39 */ 'r', '5', 0,
  /* 42 */ 'r', '6', 0,
  /* 45 */ 'r', '7', 0,
  /* 48 */ 'r', '8', 0,
  /* 51 */ 'r', '9', 0,
  };

  static const uint8_t RegAsmOffset[] = {
    25, 25, 32, 32, 4, 4, 11, 11, 18, 18, 39, 42, 45, 48, 
    51, 0, 7, 14, 21, 28, 35, 39, 42, 45, 48, 51, 0, 7, 
    14, 21, 28, 35, 
  };

  assert (*(AsmStrs+RegAsmOffset[RegNo-1]) &&
          "Invalid alt name index for register!");
  return AsmStrs+RegAsmOffset[RegNo-1];
}

#ifdef PRINT_ALIAS_INSTR
#undef PRINT_ALIAS_INSTR

bool MSP430InstPrinter::printAliasInstr(const MCInst *MI, raw_ostream &OS) {
  return false;
}

#endif // PRINT_ALIAS_INSTR