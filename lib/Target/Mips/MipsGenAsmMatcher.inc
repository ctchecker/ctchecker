/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint32_t {
  Feature_HasMips2 = (1ULL << 4),
  Feature_HasMips3_32 = (1ULL << 9),
  Feature_HasMips3_32r2 = (1ULL << 10),
  Feature_HasMips3 = (1ULL << 5),
  Feature_HasMips4_32 = (1ULL << 11),
  Feature_NotMips4_32 = (1ULL << 28),
  Feature_HasMips4_32r2 = (1ULL << 12),
  Feature_HasMips5_32r2 = (1ULL << 13),
  Feature_HasMips32 = (1ULL << 6),
  Feature_HasMips32r2 = (1ULL << 7),
  Feature_HasMips32r6 = (1ULL << 8),
  Feature_NotMips32r6 = (1ULL << 27),
  Feature_IsGP64bit = (1ULL << 22),
  Feature_IsGP32bit = (1ULL << 21),
  Feature_HasMips64 = (1ULL << 14),
  Feature_HasMips64r2 = (1ULL << 15),
  Feature_HasMips64r6 = (1ULL << 16),
  Feature_NotMips64r6 = (1ULL << 29),
  Feature_InMips16Mode = (1ULL << 19),
  Feature_HasCnMips = (1ULL << 0),
  Feature_HasStdEnc = (1ULL << 17),
  Feature_InMicroMips = (1ULL << 18),
  Feature_NotInMicroMips = (1ULL << 26),
  Feature_IsFP64bit = (1ULL << 20),
  Feature_NotFP64bit = (1ULL << 25),
  Feature_IsSingleFloat = (1ULL << 24),
  Feature_IsNotSingleFloat = (1ULL << 23),
  Feature_HasDSP = (1ULL << 1),
  Feature_HasDSPR2 = (1ULL << 2),
  Feature_HasMSA = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasMips2: return "";
  case Feature_HasMips3_32: return "";
  case Feature_HasMips3_32r2: return "";
  case Feature_HasMips3: return "";
  case Feature_HasMips4_32: return "";
  case Feature_NotMips4_32: return "";
  case Feature_HasMips4_32r2: return "";
  case Feature_HasMips5_32r2: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips32r6: return "";
  case Feature_NotMips32r6: return "";
  case Feature_IsGP64bit: return "";
  case Feature_IsGP32bit: return "";
  case Feature_HasMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_HasMips64r6: return "";
  case Feature_NotMips64r6: return "";
  case Feature_InMips16Mode: return "";
  case Feature_HasCnMips: return "";
  case Feature_HasStdEnc: return "";
  case Feature_InMicroMips: return "";
  case Feature_NotInMicroMips: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  case Feature_HasMSA: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addAFGR64AsmRegOperands,
  CVT_95_addFGR64AsmRegOperands,
  CVT_95_addFGR32AsmRegOperands,
  CVT_95_addGPR32AsmRegOperands,
  CVT_95_addImmOperands,
  CVT_95_addMSA128AsmRegOperands,
  CVT_95_Reg,
  CVT_95_addGPRMM16AsmRegOperands,
  CVT_regZERO,
  CVT_95_addGPR64AsmRegOperands,
  CVT_regFCC0,
  CVT_95_addFCCAsmRegOperands,
  CVT_95_addCOP2AsmRegOperands,
  CVT_imm_95_0,
  CVT_95_addMemOperands,
  CVT_95_addCCRAsmRegOperands,
  CVT_95_addMSACtrlAsmRegOperands,
  CVT_95_addACC64DSPAsmRegOperands,
  CVT_regRA,
  CVT_regZERO_64,
  CVT_95_addMicroMipsMemOperands,
  CVT_95_addCOP3AsmRegOperands,
  CVT_95_addRegListOperands,
  CVT_95_addRegPairOperands,
  CVT_95_addMovePRegPairOperands,
  CVT_95_addGPRMM16AsmRegMovePOperands,
  CVT_95_addHI32DSPAsmRegOperands,
  CVT_95_addLO32DSPAsmRegOperands,
  CVT_95_addHWRegsAsmRegOperands,
  CVT_95_addGPRMM16AsmRegZeroOperands,
  CVT_imm_95_2,
  CVT_imm_95_6,
  CVT_imm_95_4,
  CVT_imm_95_5,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__GPR32AsmReg1_0__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__Imm1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__Imm1_1,
  Convert__Imm1_0,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3,
  Convert__GPR32AsmReg1_0__Imm1_1,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0,
  Convert__JumpTarget1_0,
  Convert__regZERO__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2,
  Convert__FGR64AsmReg1_0__JumpTarget1_1,
  Convert__regFCC0__JumpTarget1_0,
  Convert__FCCAsmReg1_0__JumpTarget1_1,
  Convert__COP2AsmReg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2,
  Convert__Reg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__JumpTarget1_1,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2,
  Convert__MSA128AsmReg1_0__JumpTarget1_1,
  Convert__imm_95_0__imm_95_0,
  Convert_NoOperands,
  Convert__Imm1_0__imm_95_0,
  Convert__Imm1_0__Imm1_1,
  Convert__Mem2_1__Imm1_0,
  Convert__FGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__CCRAsmReg1_1,
  Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3,
  Convert__Reg1_0__Reg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__CCRAsmReg1_1__GPR32AsmReg1_0,
  Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__Tie0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO,
  Convert__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR64AsmReg1_1__GPR64AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6,
  Convert__regRA__GPR32AsmReg1_0,
  Convert__Reg1_0,
  Convert__regZERO__GPR32AsmReg1_0,
  Convert__regZERO_64__GPR64AsmReg1_0,
  Convert__GPR32AsmReg1_0__Mem2_1,
  Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Mem2_1,
  Convert__AFGR64AsmReg1_0__Mem2_1,
  Convert__FGR64AsmReg1_0__Mem2_1,
  Convert__COP2AsmReg1_0__MemOffsetSimm112_1,
  Convert__COP2AsmReg1_0__Mem2_1,
  Convert__COP3AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__Mem2_1__Tie0,
  Convert__GPR64AsmReg1_0__JumpTarget1_1,
  Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3,
  Convert__Reg1_0__Imm1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1,
  Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__FGR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__Mem2_1__Tie0,
  Convert__RegList1_0__Mem2_1,
  Convert__RegList161_0__MemOffsetUimm42_1,
  Convert__RegPair2_0__Mem2_1,
  Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3,
  Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64,
  Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_1__GPR32AsmReg1_0,
  Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0,
  Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0,
  Convert__regZERO__regZERO__imm_95_0,
  Convert__regZERO__regZERO,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__Tie0__Mem2_1,
  Convert__GPR64AsmReg1_0__Tie0__Mem2_1,
  Convert__imm_95_0,
  Convert__Reg1_0__Tie0,
  Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2,
  Convert__MemOffsetSimm162_0,
  Convert__imm_95_2,
  Convert__imm_95_6,
  Convert__imm_95_4,
  Convert__imm_95_5,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Imm1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addGPRMM16AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__JumpTarget1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regFCC0__JumpTarget1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCAsmReg1_0__JumpTarget1_1
  { CVT_95_addFCCAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__JumpTarget1_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__JumpTarget1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__JumpTarget1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Mem2_1__Imm1_0
  { CVT_95_addMemOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__CCRAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCCRAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSACtrlAsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__CCRAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addCCRAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSACtrlAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO
  { CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_1__GPR64AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR64AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__regRA__GPR32AsmReg1_0
  { CVT_regRA, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__regZERO__GPR32AsmReg1_0
  { CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO_64__GPR64AsmReg1_0
  { CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Mem2_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__Mem2_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__Mem2_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__MemOffsetSimm112_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__Mem2_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP3AsmReg1_0__Mem2_1
  { CVT_95_addCOP3AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Imm1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Imm1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__Mem2_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__RegList1_0__Mem2_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegList161_0__MemOffsetUimm42_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegPair2_0__Mem2_1
  { CVT_95_addRegPairOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_95_addFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2
  { CVT_95_addMovePRegPairOperands, 1, CVT_95_addGPRMM16AsmRegMovePOperands, 2, CVT_95_addGPRMM16AsmRegMovePOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addAFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addHI32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addLO32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__imm_95_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regZERO__regZERO
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegZeroOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MemOffsetSimm162_0
  { CVT_95_addMemOperands, 1, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__imm_95_6
  { CVT_imm_95_6, 0, CVT_Done },
  // Convert__imm_95_4
  { CVT_imm_95_4, 0, CVT_Done },
  // Convert__imm_95_5
  { CVT_imm_95_5, 0, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addAFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addMSA128AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSA128AsmRegOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegOperands(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      break;
    case CVT_95_addGPR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR64AsmRegOperands(Inst, 1);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::CreateReg(Mips::FCC0));
      break;
    case CVT_95_addFCCAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFCCAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addCOP2AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP2AsmRegOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMemOperands(Inst, 2);
      break;
    case CVT_95_addCCRAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCCRAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSACtrlAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addACC64DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::CreateReg(Mips::RA));
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO_64));
      break;
    case CVT_95_addMicroMipsMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMicroMipsMemOperands(Inst, 2);
      break;
    case CVT_95_addCOP3AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP3AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addRegListOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegListOperands(Inst, 1);
      break;
    case CVT_95_addRegPairOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegPairOperands(Inst, 2);
      break;
    case CVT_95_addMovePRegPairOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMovePRegPairOperands(Inst, 2);
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegMovePOperands(Inst, 1);
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHI32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addLO32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHWRegsAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegZeroOperands(Inst, 1);
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::CreateImm(6));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSA128AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addGPR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addFCCAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP2AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCCRAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMicroMipsMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCOP3AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMovePRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_ZERO, // register class 'ZERO'
  MCK_Reg9, // derived register class
  MCK_Reg4, // derived register class
  MCK_Reg7, // derived register class
  MCK_Reg8, // derived register class
  MCK_CPU16Regs, // register class 'CPU16Regs,GPRMM16'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_GPRMM16MoveP, // register class 'GPRMM16MoveP'
  MCK_GPRMM16Zero, // register class 'GPRMM16Zero'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_DSPR, // register class 'DSPR,GPR32'
  MCK_Reg20, // derived register class
  MCK_Reg15, // derived register class
  MCK_Reg18, // derived register class
  MCK_Reg13, // derived register class
  MCK_Reg19, // derived register class
  MCK_Reg14, // derived register class
  MCK_Reg16, // derived register class
  MCK_Reg21, // derived register class
  MCK_Reg17, // derived register class
  MCK_Reg22, // derived register class
  MCK_GPR64, // register class 'GPR64'
  MCK_Reg24, // derived register class
  MCK_FGR32, // register class 'FGR32,FGRCC'
  MCK_Reg27, // derived register class
  MCK_FGRH32, // register class 'FGRH32'
  MCK_Reg29, // derived register class
  MCK_AFGR64, // register class 'AFGR64'
  MCK_Reg32, // derived register class
  MCK_Reg30, // derived register class
  MCK_FGR64, // register class 'FGR64'
  MCK_OddSP, // register class 'OddSP'
  MCK_MSA128WEvens, // register class 'MSA128WEvens'
  MCK_Reg35, // derived register class
  MCK_MSA128B, // register class 'MSA128B,MSA128D,MSA128H,MSA128W'
  MCK_HI32, // register class 'HI32'
  MCK_HI32DSP, // register class 'HI32DSP'
  MCK_LO32, // register class 'LO32'
  MCK_LO32DSP, // register class 'LO32DSP'
  MCK_HI64, // register class 'HI64'
  MCK_LO64, // register class 'LO64'
  MCK_CCR, // register class 'CCR'
  MCK_FCC, // register class 'FCC'
  MCK_COP2, // register class 'COP2'
  MCK_COP3, // register class 'COP3'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_ACC64, // register class 'ACC64'
  MCK_ACC64DSP, // register class 'ACC64DSP'
  MCK_ACC128, // register class 'ACC128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_MSACtrl, // register class 'MSACtrl'
  MCK_OCTEON_MPL, // register class 'OCTEON_MPL'
  MCK_OCTEON_P, // register class 'OCTEON_P'
  MCK_ACC64DSPAsmReg, // user defined class 'ACC64DSPAsmOperand'
  MCK_AFGR64AsmReg, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsmReg, // user defined class 'CCRAsmOperand'
  MCK_COP2AsmReg, // user defined class 'COP2AsmOperand'
  MCK_COP3AsmReg, // user defined class 'COP3AsmOperand'
  MCK_FCCAsmReg, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32AsmReg, // user defined class 'FGR32AsmOperand'
  MCK_FGR64AsmReg, // user defined class 'FGR64AsmOperand'
  MCK_FGRH32AsmReg, // user defined class 'FGRH32AsmOperand'
  MCK_GPR32AsmReg, // user defined class 'GPR32AsmOperand'
  MCK_GPR64AsmReg, // user defined class 'GPR64AsmOperand'
  MCK_GPRMM16AsmReg, // user defined class 'GPRMM16AsmOperand'
  MCK_GPRMM16AsmRegMoveP, // user defined class 'GPRMM16AsmOperandMoveP'
  MCK_GPRMM16AsmRegZero, // user defined class 'GPRMM16AsmOperandZero'
  MCK_HI32DSPAsmReg, // user defined class 'HI32DSPAsmOperand'
  MCK_HWRegsAsmReg, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_LO32DSPAsmReg, // user defined class 'LO32DSPAsmOperand'
  MCK_MSA128AsmReg, // user defined class 'MSA128AsmOperand'
  MCK_MSACtrlAsmReg, // user defined class 'MSACtrlAsmOperand'
  MCK_MicroMipsMem, // user defined class 'MicroMipsMemGPRMM16AsmOperand'
  MCK_MicroMipsMemSP, // user defined class 'MicroMipsMemSPAsmOperand'
  MCK_InvNum, // user defined class 'MipsInvertedImmoperand'
  MCK_JumpTarget, // user defined class 'MipsJumpTargetAsmOperand'
  MCK_MemOffsetSimm11, // user defined class 'MipsMemSimm11AsmOperand'
  MCK_MemOffsetSimm16, // user defined class 'MipsMemSimm16AsmOperand'
  MCK_MemOffsetUimm4, // user defined class 'MipsMemUimm4AsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  MCK_MovePRegPair, // user defined class 'MovePRegPairAsmOperand'
  MCK_RegList16, // user defined class 'RegList16AsmOperand'
  MCK_RegList, // user defined class 'RegListAsmOperand'
  MCK_RegPair, // user defined class 'RegPairAsmOperand'
  MCK_LSAImm, // user defined class 'uimm2LSAAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ZERO:
    switch (B) {
    default: return false;
    case MCK_Reg4: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg4: return true;
    case MCK_Reg7: return true;
    case MCK_Reg8: return true;
    case MCK_CPU16Regs: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg4:
    switch (B) {
    default: return false;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPR;

  case MCK_GPRMM16MoveP:
    return B == MCK_DSPR;

  case MCK_GPRMM16Zero:
    return B == MCK_DSPR;

  case MCK_CPURAReg:
    return B == MCK_DSPR;

  case MCK_Reg20:
    switch (B) {
    default: return false;
    case MCK_Reg15: return true;
    case MCK_Reg18: return true;
    case MCK_Reg13: return true;
    case MCK_Reg19: return true;
    case MCK_Reg14: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg15:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_Reg14: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg18:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg13:
    return B == MCK_GPR64;

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_Reg14: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg14:
    return B == MCK_GPR64;

  case MCK_Reg16:
    switch (B) {
    default: return false;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg21:
    switch (B) {
    default: return false;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg17:
    return B == MCK_GPR64;

  case MCK_Reg22:
    return B == MCK_GPR64;

  case MCK_Reg24:
    switch (B) {
    default: return false;
    case MCK_FGR32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg27:
    switch (B) {
    default: return false;
    case MCK_FGRH32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg29:
    switch (B) {
    default: return false;
    case MCK_AFGR64: return true;
    case MCK_Reg30: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg32:
    switch (B) {
    default: return false;
    case MCK_Reg30: return true;
    case MCK_FGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg30:
    return B == MCK_OddSP;

  case MCK_MSA128WEvens:
    return B == MCK_MSA128B;

  case MCK_Reg35:
    return B == MCK_MSA128B;

  case MCK_HI32:
    return B == MCK_HI32DSP;

  case MCK_LO32:
    return B == MCK_LO32DSP;

  case MCK_ACC64:
    return B == MCK_ACC64DSP;

  case MCK_MemOffsetSimm11:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm16:
    return B == MCK_Mem;

  case MCK_MemOffsetUimm4:
    return B == MCK_Mem;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  MipsOperand &Operand = (MipsOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ACC64DSPAsmReg' class
  if (Kind == MCK_ACC64DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AFGR64AsmReg' class
  if (Kind == MCK_AFGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCRAsmReg' class
  if (Kind == MCK_CCRAsmReg) {
    if (Operand.isCCRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP2AsmReg' class
  if (Kind == MCK_COP2AsmReg) {
    if (Operand.isCOP2AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP3AsmReg' class
  if (Kind == MCK_COP3AsmReg) {
    if (Operand.isCOP3AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FCCAsmReg' class
  if (Kind == MCK_FCCAsmReg) {
    if (Operand.isFCCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR32AsmReg' class
  if (Kind == MCK_FGR32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR64AsmReg' class
  if (Kind == MCK_FGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGRH32AsmReg' class
  if (Kind == MCK_FGRH32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR32AsmReg' class
  if (Kind == MCK_GPR32AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64AsmReg' class
  if (Kind == MCK_GPR64AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmReg' class
  if (Kind == MCK_GPRMM16AsmReg) {
    if (Operand.isMM16AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmRegMoveP' class
  if (Kind == MCK_GPRMM16AsmRegMoveP) {
    if (Operand.isMM16AsmRegMoveP())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmRegZero' class
  if (Kind == MCK_GPRMM16AsmRegZero) {
    if (Operand.isMM16AsmRegZero())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HI32DSPAsmReg' class
  if (Kind == MCK_HI32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsmReg' class
  if (Kind == MCK_HWRegsAsmReg) {
    if (Operand.isHWRegsAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LO32DSPAsmReg' class
  if (Kind == MCK_LO32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSA128AsmReg' class
  if (Kind == MCK_MSA128AsmReg) {
    if (Operand.isMSA128AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSACtrlAsmReg' class
  if (Kind == MCK_MSACtrlAsmReg) {
    if (Operand.isMSACtrlAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MicroMipsMem' class
  if (Kind == MCK_MicroMipsMem) {
    if (Operand.isMemWithGRPMM16Base())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MicroMipsMemSP' class
  if (Kind == MCK_MicroMipsMemSP) {
    if (Operand.isMemWithUimmWordAlignedOffsetSP<7>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'InvNum' class
  if (Kind == MCK_InvNum) {
    if (Operand.isInvNum())
      return MCTargetAsmParser::Match_Success;
  }

  // 'JumpTarget' class
  if (Kind == MCK_JumpTarget) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm11' class
  if (Kind == MCK_MemOffsetSimm11) {
    if (Operand.isMemWithSimmOffset<11>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm16' class
  if (Kind == MCK_MemOffsetSimm16) {
    if (Operand.isMemWithSimmOffset<16>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetUimm4' class
  if (Kind == MCK_MemOffsetUimm4) {
    if (Operand.isMemWithUimmOffsetSP<6>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MovePRegPair' class
  if (Kind == MCK_MovePRegPair) {
    if (Operand.isMovePRegPair())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList16' class
  if (Kind == MCK_RegList16) {
    if (Operand.isRegList16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList' class
  if (Kind == MCK_RegList) {
    if (Operand.isRegList())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegPair' class
  if (Kind == MCK_RegPair) {
    if (Operand.isRegPair())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LSAImm' class
  if (Kind == MCK_LSAImm) {
    if (Operand.isLSAImm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPR; break;
    case Mips::V0: OpKind = MCK_Reg9; break;
    case Mips::V1: OpKind = MCK_Reg9; break;
    case Mips::A0: OpKind = MCK_Reg7; break;
    case Mips::A1: OpKind = MCK_Reg7; break;
    case Mips::A2: OpKind = MCK_Reg7; break;
    case Mips::A3: OpKind = MCK_Reg7; break;
    case Mips::T0: OpKind = MCK_DSPR; break;
    case Mips::T1: OpKind = MCK_DSPR; break;
    case Mips::T2: OpKind = MCK_DSPR; break;
    case Mips::T3: OpKind = MCK_DSPR; break;
    case Mips::T4: OpKind = MCK_DSPR; break;
    case Mips::T5: OpKind = MCK_DSPR; break;
    case Mips::T6: OpKind = MCK_DSPR; break;
    case Mips::T7: OpKind = MCK_DSPR; break;
    case Mips::S0: OpKind = MCK_Reg8; break;
    case Mips::S1: OpKind = MCK_Reg9; break;
    case Mips::S2: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S3: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S4: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S5: OpKind = MCK_DSPR; break;
    case Mips::S6: OpKind = MCK_DSPR; break;
    case Mips::S7: OpKind = MCK_DSPR; break;
    case Mips::T8: OpKind = MCK_DSPR; break;
    case Mips::T9: OpKind = MCK_DSPR; break;
    case Mips::K0: OpKind = MCK_DSPR; break;
    case Mips::K1: OpKind = MCK_DSPR; break;
    case Mips::GP: OpKind = MCK_DSPR; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPR; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_Reg15; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg20; break;
    case Mips::V1_64: OpKind = MCK_Reg20; break;
    case Mips::A0_64: OpKind = MCK_Reg18; break;
    case Mips::A1_64: OpKind = MCK_Reg18; break;
    case Mips::A2_64: OpKind = MCK_Reg18; break;
    case Mips::A3_64: OpKind = MCK_Reg18; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg19; break;
    case Mips::S1_64: OpKind = MCK_Reg20; break;
    case Mips::S2_64: OpKind = MCK_Reg14; break;
    case Mips::S3_64: OpKind = MCK_Reg14; break;
    case Mips::S4_64: OpKind = MCK_Reg14; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GPR64; break;
    case Mips::SP_64: OpKind = MCK_Reg21; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg22; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_Reg24; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_Reg24; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_Reg24; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_Reg24; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_Reg24; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_Reg24; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_Reg24; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_Reg24; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_Reg24; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_Reg24; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_Reg24; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_Reg24; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_Reg24; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_Reg24; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_Reg24; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_Reg24; break;
    case Mips::F_HI0: OpKind = MCK_FGRH32; break;
    case Mips::F_HI1: OpKind = MCK_Reg27; break;
    case Mips::F_HI2: OpKind = MCK_FGRH32; break;
    case Mips::F_HI3: OpKind = MCK_Reg27; break;
    case Mips::F_HI4: OpKind = MCK_FGRH32; break;
    case Mips::F_HI5: OpKind = MCK_Reg27; break;
    case Mips::F_HI6: OpKind = MCK_FGRH32; break;
    case Mips::F_HI7: OpKind = MCK_Reg27; break;
    case Mips::F_HI8: OpKind = MCK_FGRH32; break;
    case Mips::F_HI9: OpKind = MCK_Reg27; break;
    case Mips::F_HI10: OpKind = MCK_FGRH32; break;
    case Mips::F_HI11: OpKind = MCK_Reg27; break;
    case Mips::F_HI12: OpKind = MCK_FGRH32; break;
    case Mips::F_HI13: OpKind = MCK_Reg27; break;
    case Mips::F_HI14: OpKind = MCK_FGRH32; break;
    case Mips::F_HI15: OpKind = MCK_Reg27; break;
    case Mips::F_HI16: OpKind = MCK_FGRH32; break;
    case Mips::F_HI17: OpKind = MCK_Reg27; break;
    case Mips::F_HI18: OpKind = MCK_FGRH32; break;
    case Mips::F_HI19: OpKind = MCK_Reg27; break;
    case Mips::F_HI20: OpKind = MCK_FGRH32; break;
    case Mips::F_HI21: OpKind = MCK_Reg27; break;
    case Mips::F_HI22: OpKind = MCK_FGRH32; break;
    case Mips::F_HI23: OpKind = MCK_Reg27; break;
    case Mips::F_HI24: OpKind = MCK_FGRH32; break;
    case Mips::F_HI25: OpKind = MCK_Reg27; break;
    case Mips::F_HI26: OpKind = MCK_FGRH32; break;
    case Mips::F_HI27: OpKind = MCK_Reg27; break;
    case Mips::F_HI28: OpKind = MCK_FGRH32; break;
    case Mips::F_HI29: OpKind = MCK_Reg27; break;
    case Mips::F_HI30: OpKind = MCK_FGRH32; break;
    case Mips::F_HI31: OpKind = MCK_Reg27; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_Reg29; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_Reg29; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_Reg29; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_Reg29; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_Reg29; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_Reg29; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_Reg29; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_Reg29; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_Reg32; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_Reg32; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_Reg32; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_Reg32; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_Reg32; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_Reg32; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_Reg32; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_Reg32; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_Reg32; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_Reg32; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_Reg32; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_Reg32; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_Reg32; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_Reg32; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_Reg32; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_Reg32; break;
    case Mips::W0: OpKind = MCK_MSA128WEvens; break;
    case Mips::W1: OpKind = MCK_Reg35; break;
    case Mips::W2: OpKind = MCK_MSA128WEvens; break;
    case Mips::W3: OpKind = MCK_Reg35; break;
    case Mips::W4: OpKind = MCK_MSA128WEvens; break;
    case Mips::W5: OpKind = MCK_Reg35; break;
    case Mips::W6: OpKind = MCK_MSA128WEvens; break;
    case Mips::W7: OpKind = MCK_Reg35; break;
    case Mips::W8: OpKind = MCK_MSA128WEvens; break;
    case Mips::W9: OpKind = MCK_Reg35; break;
    case Mips::W10: OpKind = MCK_MSA128WEvens; break;
    case Mips::W11: OpKind = MCK_Reg35; break;
    case Mips::W12: OpKind = MCK_MSA128WEvens; break;
    case Mips::W13: OpKind = MCK_Reg35; break;
    case Mips::W14: OpKind = MCK_MSA128WEvens; break;
    case Mips::W15: OpKind = MCK_Reg35; break;
    case Mips::W16: OpKind = MCK_MSA128WEvens; break;
    case Mips::W17: OpKind = MCK_Reg35; break;
    case Mips::W18: OpKind = MCK_MSA128WEvens; break;
    case Mips::W19: OpKind = MCK_Reg35; break;
    case Mips::W20: OpKind = MCK_MSA128WEvens; break;
    case Mips::W21: OpKind = MCK_Reg35; break;
    case Mips::W22: OpKind = MCK_MSA128WEvens; break;
    case Mips::W23: OpKind = MCK_Reg35; break;
    case Mips::W24: OpKind = MCK_MSA128WEvens; break;
    case Mips::W25: OpKind = MCK_Reg35; break;
    case Mips::W26: OpKind = MCK_MSA128WEvens; break;
    case Mips::W27: OpKind = MCK_Reg35; break;
    case Mips::W28: OpKind = MCK_MSA128WEvens; break;
    case Mips::W29: OpKind = MCK_Reg35; break;
    case Mips::W30: OpKind = MCK_MSA128WEvens; break;
    case Mips::W31: OpKind = MCK_Reg35; break;
    case Mips::HI0: OpKind = MCK_HI32; break;
    case Mips::HI1: OpKind = MCK_HI32DSP; break;
    case Mips::HI2: OpKind = MCK_HI32DSP; break;
    case Mips::HI3: OpKind = MCK_HI32DSP; break;
    case Mips::LO0: OpKind = MCK_LO32; break;
    case Mips::LO1: OpKind = MCK_LO32DSP; break;
    case Mips::LO2: OpKind = MCK_LO32DSP; break;
    case Mips::LO3: OpKind = MCK_LO32DSP; break;
    case Mips::HI0_64: OpKind = MCK_HI64; break;
    case Mips::LO0_64: OpKind = MCK_LO64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::COP20: OpKind = MCK_COP2; break;
    case Mips::COP21: OpKind = MCK_COP2; break;
    case Mips::COP22: OpKind = MCK_COP2; break;
    case Mips::COP23: OpKind = MCK_COP2; break;
    case Mips::COP24: OpKind = MCK_COP2; break;
    case Mips::COP25: OpKind = MCK_COP2; break;
    case Mips::COP26: OpKind = MCK_COP2; break;
    case Mips::COP27: OpKind = MCK_COP2; break;
    case Mips::COP28: OpKind = MCK_COP2; break;
    case Mips::COP29: OpKind = MCK_COP2; break;
    case Mips::COP210: OpKind = MCK_COP2; break;
    case Mips::COP211: OpKind = MCK_COP2; break;
    case Mips::COP212: OpKind = MCK_COP2; break;
    case Mips::COP213: OpKind = MCK_COP2; break;
    case Mips::COP214: OpKind = MCK_COP2; break;
    case Mips::COP215: OpKind = MCK_COP2; break;
    case Mips::COP216: OpKind = MCK_COP2; break;
    case Mips::COP217: OpKind = MCK_COP2; break;
    case Mips::COP218: OpKind = MCK_COP2; break;
    case Mips::COP219: OpKind = MCK_COP2; break;
    case Mips::COP220: OpKind = MCK_COP2; break;
    case Mips::COP221: OpKind = MCK_COP2; break;
    case Mips::COP222: OpKind = MCK_COP2; break;
    case Mips::COP223: OpKind = MCK_COP2; break;
    case Mips::COP224: OpKind = MCK_COP2; break;
    case Mips::COP225: OpKind = MCK_COP2; break;
    case Mips::COP226: OpKind = MCK_COP2; break;
    case Mips::COP227: OpKind = MCK_COP2; break;
    case Mips::COP228: OpKind = MCK_COP2; break;
    case Mips::COP229: OpKind = MCK_COP2; break;
    case Mips::COP230: OpKind = MCK_COP2; break;
    case Mips::COP231: OpKind = MCK_COP2; break;
    case Mips::COP30: OpKind = MCK_COP3; break;
    case Mips::COP31: OpKind = MCK_COP3; break;
    case Mips::COP32: OpKind = MCK_COP3; break;
    case Mips::COP33: OpKind = MCK_COP3; break;
    case Mips::COP34: OpKind = MCK_COP3; break;
    case Mips::COP35: OpKind = MCK_COP3; break;
    case Mips::COP36: OpKind = MCK_COP3; break;
    case Mips::COP37: OpKind = MCK_COP3; break;
    case Mips::COP38: OpKind = MCK_COP3; break;
    case Mips::COP39: OpKind = MCK_COP3; break;
    case Mips::COP310: OpKind = MCK_COP3; break;
    case Mips::COP311: OpKind = MCK_COP3; break;
    case Mips::COP312: OpKind = MCK_COP3; break;
    case Mips::COP313: OpKind = MCK_COP3; break;
    case Mips::COP314: OpKind = MCK_COP3; break;
    case Mips::COP315: OpKind = MCK_COP3; break;
    case Mips::COP316: OpKind = MCK_COP3; break;
    case Mips::COP317: OpKind = MCK_COP3; break;
    case Mips::COP318: OpKind = MCK_COP3; break;
    case Mips::COP319: OpKind = MCK_COP3; break;
    case Mips::COP320: OpKind = MCK_COP3; break;
    case Mips::COP321: OpKind = MCK_COP3; break;
    case Mips::COP322: OpKind = MCK_COP3; break;
    case Mips::COP323: OpKind = MCK_COP3; break;
    case Mips::COP324: OpKind = MCK_COP3; break;
    case Mips::COP325: OpKind = MCK_COP3; break;
    case Mips::COP326: OpKind = MCK_COP3; break;
    case Mips::COP327: OpKind = MCK_COP3; break;
    case Mips::COP328: OpKind = MCK_COP3; break;
    case Mips::COP329: OpKind = MCK_COP3; break;
    case Mips::COP330: OpKind = MCK_COP3; break;
    case Mips::COP331: OpKind = MCK_COP3; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR0: OpKind = MCK_HWRegs; break;
    case Mips::HWR1: OpKind = MCK_HWRegs; break;
    case Mips::HWR2: OpKind = MCK_HWRegs; break;
    case Mips::HWR3: OpKind = MCK_HWRegs; break;
    case Mips::HWR4: OpKind = MCK_HWRegs; break;
    case Mips::HWR5: OpKind = MCK_HWRegs; break;
    case Mips::HWR6: OpKind = MCK_HWRegs; break;
    case Mips::HWR7: OpKind = MCK_HWRegs; break;
    case Mips::HWR8: OpKind = MCK_HWRegs; break;
    case Mips::HWR9: OpKind = MCK_HWRegs; break;
    case Mips::HWR10: OpKind = MCK_HWRegs; break;
    case Mips::HWR11: OpKind = MCK_HWRegs; break;
    case Mips::HWR12: OpKind = MCK_HWRegs; break;
    case Mips::HWR13: OpKind = MCK_HWRegs; break;
    case Mips::HWR14: OpKind = MCK_HWRegs; break;
    case Mips::HWR15: OpKind = MCK_HWRegs; break;
    case Mips::HWR16: OpKind = MCK_HWRegs; break;
    case Mips::HWR17: OpKind = MCK_HWRegs; break;
    case Mips::HWR18: OpKind = MCK_HWRegs; break;
    case Mips::HWR19: OpKind = MCK_HWRegs; break;
    case Mips::HWR20: OpKind = MCK_HWRegs; break;
    case Mips::HWR21: OpKind = MCK_HWRegs; break;
    case Mips::HWR22: OpKind = MCK_HWRegs; break;
    case Mips::HWR23: OpKind = MCK_HWRegs; break;
    case Mips::HWR24: OpKind = MCK_HWRegs; break;
    case Mips::HWR25: OpKind = MCK_HWRegs; break;
    case Mips::HWR26: OpKind = MCK_HWRegs; break;
    case Mips::HWR27: OpKind = MCK_HWRegs; break;
    case Mips::HWR28: OpKind = MCK_HWRegs; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR30: OpKind = MCK_HWRegs; break;
    case Mips::HWR31: OpKind = MCK_HWRegs; break;
    case Mips::AC0: OpKind = MCK_ACC64; break;
    case Mips::AC1: OpKind = MCK_ACC64DSP; break;
    case Mips::AC2: OpKind = MCK_ACC64DSP; break;
    case Mips::AC3: OpKind = MCK_ACC64DSP; break;
    case Mips::AC0_64: OpKind = MCK_ACC128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    case Mips::MSAIR: OpKind = MCK_MSACtrl; break;
    case Mips::MSACSR: OpKind = MCK_MSACtrl; break;
    case Mips::MSAAccess: OpKind = MCK_MSACtrl; break;
    case Mips::MSASave: OpKind = MCK_MSACtrl; break;
    case Mips::MSAModify: OpKind = MCK_MSACtrl; break;
    case Mips::MSARequest: OpKind = MCK_MSACtrl; break;
    case Mips::MSAMap: OpKind = MCK_MSACtrl; break;
    case Mips::MSAUnmap: OpKind = MCK_MSACtrl; break;
    case Mips::MPL0: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL1: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL2: OpKind = MCK_OCTEON_MPL; break;
    case Mips::P0: OpKind = MCK_OCTEON_P; break;
    case Mips::P1: OpKind = MCK_OCTEON_P; break;
    case Mips::P2: OpKind = MCK_OCTEON_P; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t MipsAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  if (((FB & Mips::FeatureMips2) != 0))
    Features |= Feature_HasMips2;
  if (((FB & Mips::FeatureMips3_32) != 0))
    Features |= Feature_HasMips3_32;
  if (((FB & Mips::FeatureMips3_32r2) != 0))
    Features |= Feature_HasMips3_32r2;
  if (((FB & Mips::FeatureMips3) != 0))
    Features |= Feature_HasMips3;
  if (((FB & Mips::FeatureMips4_32) != 0))
    Features |= Feature_HasMips4_32;
  if (((FB & Mips::FeatureMips4_32) != 0))
    Features |= Feature_NotMips4_32;
  if (((FB & Mips::FeatureMips4_32r2) != 0))
    Features |= Feature_HasMips4_32r2;
  if (((FB & Mips::FeatureMips5_32r2) != 0))
    Features |= Feature_HasMips5_32r2;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_HasMips32;
  if (((FB & Mips::FeatureMips32r2) != 0))
    Features |= Feature_HasMips32r2;
  if (((FB & Mips::FeatureMips32r6) != 0))
    Features |= Feature_HasMips32r6;
  if (((FB & Mips::FeatureMips32r6) == 0))
    Features |= Feature_NotMips32r6;
  if (((FB & Mips::FeatureGP64Bit) != 0))
    Features |= Feature_IsGP64bit;
  if (((FB & Mips::FeatureGP64Bit) == 0))
    Features |= Feature_IsGP32bit;
  if (((FB & Mips::FeatureMips64) != 0))
    Features |= Feature_HasMips64;
  if (((FB & Mips::FeatureMips64r2) != 0))
    Features |= Feature_HasMips64r2;
  if (((FB & Mips::FeatureMips64r6) != 0))
    Features |= Feature_HasMips64r6;
  if (((FB & Mips::FeatureMips64r6) == 0))
    Features |= Feature_NotMips64r6;
  if (((FB & Mips::FeatureMips16) != 0))
    Features |= Feature_InMips16Mode;
  if (((FB & Mips::FeatureCnMips) != 0))
    Features |= Feature_HasCnMips;
  if (((FB & Mips::FeatureMips16) == 0))
    Features |= Feature_HasStdEnc;
  if (((FB & Mips::FeatureMicroMips) != 0))
    Features |= Feature_InMicroMips;
  if (((FB & Mips::FeatureMicroMips) == 0))
    Features |= Feature_NotInMicroMips;
  if (((FB & Mips::FeatureFP64Bit) != 0))
    Features |= Feature_IsFP64bit;
  if (((FB & Mips::FeatureFP64Bit) == 0))
    Features |= Feature_NotFP64bit;
  if (((FB & Mips::FeatureSingleFloat) != 0))
    Features |= Feature_IsSingleFloat;
  if (((FB & Mips::FeatureSingleFloat) == 0))
    Features |= Feature_IsNotSingleFloat;
  if (((FB & Mips::FeatureDSP) != 0))
    Features |= Feature_HasDSP;
  if (((FB & Mips::FeatureDSPR2) != 0))
    Features |= Feature_HasDSPR2;
  if (((FB & Mips::FeatureMSA) != 0))
    Features |= Feature_HasMSA;
  return Features;
}

static const char *const MnemonicTable =
    "\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005add.d\005"
    "add.s\007add_a.b\007add_a.d\007add_a.h\007add_a.w\004addi\005addiu\007a"
    "ddiupc\taddiur1sp\007addiur2\007addius5\007addiusp\007addq.ph\taddq_s.p"
    "h\010addq_s.w\010addqh.ph\007addqh.w\naddqh_r.ph\taddqh_r.w\010adds_a.b"
    "\010adds_a.d\010adds_a.h\010adds_a.w\010adds_s.b\010adds_s.d\010adds_s."
    "h\010adds_s.w\010adds_u.b\010adds_u.d\010adds_u.h\010adds_u.w\005addsc\004"
    "addu\007addu.ph\007addu.qb\006addu16\taddu_s.ph\taddu_s.qb\010adduh.qb\n"
    "adduh_r.qb\006addv.b\006addv.d\006addv.h\006addv.w\007addvi.b\007addvi."
    "d\007addvi.h\007addvi.w\005addwc\005align\006aluipc\003and\005and.v\005"
    "and16\004andi\006andi.b\006andi16\006append\010asub_s.b\010asub_s.d\010"
    "asub_s.h\010asub_s.w\010asub_u.b\010asub_u.d\010asub_u.h\010asub_u.w\003"
    "aui\005auipc\007ave_s.b\007ave_s.d\007ave_s.h\007ave_s.w\007ave_u.b\007"
    "ave_u.d\007ave_u.h\007ave_u.w\010aver_s.b\010aver_s.d\010aver_s.h\010av"
    "er_s.w\010aver_u.b\010aver_u.d\010aver_u.h\010aver_u.w\001b\003b16\005b"
    "addu\003bal\004balc\006balign\005bbit0\007bbit032\005bbit1\007bbit132\002"
    "bc\006bc1eqz\004bc1f\005bc1fl\006bc1nez\004bc1t\005bc1tl\006bc2eqz\006b"
    "c2nez\006bclr.b\006bclr.d\006bclr.h\006bclr.w\007bclri.b\007bclri.d\007"
    "bclri.h\007bclri.w\003beq\004beqc\004beql\004beqz\006beqz16\007beqzalc\005"
    "beqzc\005beqzl\004bgec\005bgeuc\004bgez\006bgezal\007bgezalc\007bgezall"
    "\007bgezals\005bgezc\005bgezl\004bgtz\007bgtzalc\005bgtzc\005bgtzl\007b"
    "insl.b\007binsl.d\007binsl.h\007binsl.w\010binsli.b\010binsli.d\010bins"
    "li.h\010binsli.w\007binsr.b\007binsr.d\007binsr.h\007binsr.w\010binsri."
    "b\010binsri.d\010binsri.h\010binsri.w\006bitrev\007bitswap\004blez\007b"
    "lezalc\005blezc\005blezl\004bltc\005bltuc\004bltz\006bltzal\007bltzalc\007"
    "bltzall\007bltzals\005bltzc\005bltzl\006bmnz.v\007bmnzi.b\005bmz.v\006b"
    "mzi.b\003bne\004bnec\006bneg.b\006bneg.d\006bneg.h\006bneg.w\007bnegi.b"
    "\007bnegi.d\007bnegi.h\007bnegi.w\004bnel\004bnez\006bnez16\007bnezalc\005"
    "bnezc\005bnezl\004bnvc\005bnz.b\005bnz.d\005bnz.h\005bnz.v\005bnz.w\004"
    "bovc\010bposge32\005break\007break16\006bsel.v\007bseli.b\006bset.b\006"
    "bset.d\006bset.h\006bset.w\007bseti.b\007bseti.d\007bseti.h\007bseti.w\005"
    "bteqz\005btnez\004bz.b\004bz.d\004bz.h\004bz.v\004bz.w\006c.eq.d\006c.e"
    "q.s\005c.f.d\005c.f.s\006c.le.d\006c.le.s\006c.lt.d\006c.lt.s\007c.nge."
    "d\007c.nge.s\007c.ngl.d\007c.ngl.s\010c.ngle.d\010c.ngle.s\007c.ngt.d\007"
    "c.ngt.s\007c.ole.d\007c.ole.s\007c.olt.d\007c.olt.s\007c.seq.d\007c.seq"
    ".s\006c.sf.d\006c.sf.s\007c.ueq.d\007c.ueq.s\007c.ule.d\007c.ule.s\007c"
    ".ult.d\007c.ult.s\006c.un.d\006c.un.s\005cache\010ceil.l.d\010ceil.l.s\010"
    "ceil.w.d\010ceil.w.s\005ceq.b\005ceq.d\005ceq.h\005ceq.w\006ceqi.b\006c"
    "eqi.d\006ceqi.h\006ceqi.w\004cfc1\006cfcmsa\004cins\006cins32\007class."
    "d\007class.s\007cle_s.b\007cle_s.d\007cle_s.h\007cle_s.w\007cle_u.b\007"
    "cle_u.d\007cle_u.h\007cle_u.w\010clei_s.b\010clei_s.d\010clei_s.h\010cl"
    "ei_s.w\010clei_u.b\010clei_u.d\010clei_u.h\010clei_u.w\003clo\007clt_s."
    "b\007clt_s.d\007clt_s.h\007clt_s.w\007clt_u.b\007clt_u.d\007clt_u.h\007"
    "clt_u.w\010clti_s.b\010clti_s.d\010clti_s.h\010clti_s.w\010clti_u.b\010"
    "clti_u.d\010clti_u.h\010clti_u.w\003clz\003cmp\010cmp.af.d\010cmp.af.s\010"
    "cmp.eq.d\tcmp.eq.ph\010cmp.eq.s\010cmp.le.d\tcmp.le.ph\010cmp.le.s\010c"
    "mp.lt.d\tcmp.lt.ph\010cmp.lt.s\tcmp.saf.d\tcmp.saf.s\tcmp.seq.d\tcmp.se"
    "q.s\tcmp.sle.d\tcmp.sle.s\tcmp.slt.d\tcmp.slt.s\ncmp.sueq.d\ncmp.sueq.s"
    "\ncmp.sule.d\ncmp.sule.s\ncmp.sult.d\ncmp.sult.s\tcmp.sun.d\tcmp.sun.s\t"
    "cmp.ueq.d\tcmp.ueq.s\tcmp.ule.d\tcmp.ule.s\tcmp.ult.d\tcmp.ult.s\010cmp"
    ".un.d\010cmp.un.s\014cmpgdu.eq.qb\014cmpgdu.le.qb\014cmpgdu.lt.qb\013cm"
    "pgu.eq.qb\013cmpgu.le.qb\013cmpgu.lt.qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb"
    "\ncmpu.lt.qb\010copy_s.b\010copy_s.d\010copy_s.h\010copy_s.w\010copy_u."
    "b\010copy_u.d\010copy_u.h\010copy_u.w\004ctc1\006ctcmsa\007cvt.d.l\007c"
    "vt.d.s\007cvt.d.w\007cvt.l.d\007cvt.l.s\007cvt.s.d\007cvt.s.l\007cvt.s."
    "w\007cvt.w.d\007cvt.w.s\004dadd\005daddi\006daddiu\005daddu\004dahi\006"
    "dalign\004dati\004daui\010dbitswap\004dclo\004dclz\004ddiv\005ddivu\005"
    "deret\004dext\005dextm\005dextu\002di\004dins\005dinsm\005dinsu\003div\005"
    "div.d\005div.s\007div_s.b\007div_s.d\007div_s.h\007div_s.w\007div_u.b\007"
    "div_u.d\007div_u.h\007div_u.w\004divu\003dli\004dlsa\005dmfc0\005dmfc1\005"
    "dmfc2\004dmod\005dmodu\005dmtc0\005dmtc1\005dmtc2\004dmuh\005dmuhu\004d"
    "mul\005dmult\006dmultu\005dmulu\010dotp_s.d\010dotp_s.h\010dotp_s.w\010"
    "dotp_u.d\010dotp_u.h\010dotp_u.w\010dpa.w.ph\tdpadd_s.d\tdpadd_s.h\tdpa"
    "dd_s.w\tdpadd_u.d\tdpadd_u.h\tdpadd_u.w\013dpaq_s.w.ph\013dpaq_sa.l.w\014"
    "dpaqx_s.w.ph\015dpaqx_sa.w.ph\ndpau.h.qbl\ndpau.h.qbr\tdpax.w.ph\004dpo"
    "p\010dps.w.ph\013dpsq_s.w.ph\013dpsq_sa.l.w\014dpsqx_s.w.ph\015dpsqx_sa"
    ".w.ph\ndpsu.h.qbl\ndpsu.h.qbr\tdpsub_s.d\tdpsub_s.h\tdpsub_s.w\tdpsub_u"
    ".d\tdpsub_u.h\tdpsub_u.w\tdpsx.w.ph\005drotr\007drotr32\006drotrv\004ds"
    "bh\004dshd\004dsll\006dsll32\005dsllv\004dsra\006dsra32\005dsrav\004dsr"
    "l\006dsrl32\005dsrlv\004dsub\005dsubi\005dsubu\003ehb\002ei\004eret\003"
    "ext\004extp\006extpdp\007extpdpv\005extpv\006extr.w\010extr_r.w\textr_r"
    "s.w\010extr_s.h\007extrv.w\textrv_r.w\nextrv_rs.w\textrv_s.h\004exts\006"
    "exts32\006fadd.d\006fadd.w\006fcaf.d\006fcaf.w\006fceq.d\006fceq.w\010f"
    "class.d\010fclass.w\006fcle.d\006fcle.w\006fclt.d\006fclt.w\006fcne.d\006"
    "fcne.w\006fcor.d\006fcor.w\007fcueq.d\007fcueq.w\007fcule.d\007fcule.w\007"
    "fcult.d\007fcult.w\006fcun.d\006fcun.w\007fcune.d\007fcune.w\006fdiv.d\006"
    "fdiv.w\007fexdo.h\007fexdo.w\007fexp2.d\007fexp2.w\010fexupl.d\010fexup"
    "l.w\010fexupr.d\010fexupr.w\tffint_s.d\tffint_s.w\tffint_u.d\tffint_u.w"
    "\006ffql.d\006ffql.w\006ffqr.d\006ffqr.w\006fill.b\006fill.d\006fill.h\006"
    "fill.w\007flog2.d\007flog2.w\tfloor.l.d\tfloor.l.s\tfloor.w.d\tfloor.w."
    "s\007fmadd.d\007fmadd.w\006fmax.d\006fmax.w\010fmax_a.d\010fmax_a.w\006"
    "fmin.d\006fmin.w\010fmin_a.d\010fmin_a.w\007fmsub.d\007fmsub.w\006fmul."
    "d\006fmul.w\006frcp.d\006frcp.w\007frint.d\007frint.w\010frsqrt.d\010fr"
    "sqrt.w\006fsaf.d\006fsaf.w\006fseq.d\006fseq.w\006fsle.d\006fsle.w\006f"
    "slt.d\006fslt.w\006fsne.d\006fsne.w\006fsor.d\006fsor.w\007fsqrt.d\007f"
    "sqrt.w\006fsub.d\006fsub.w\007fsueq.d\007fsueq.w\007fsule.d\007fsule.w\007"
    "fsult.d\007fsult.w\006fsun.d\006fsun.w\007fsune.d\007fsune.w\tftint_s.d"
    "\tftint_s.w\tftint_u.d\tftint_u.w\005ftq.h\005ftq.w\nftrunc_s.d\nftrunc"
    "_s.w\nftrunc_u.d\nftrunc_u.w\010hadd_s.d\010hadd_s.h\010hadd_s.w\010had"
    "d_u.d\010hadd_u.h\010hadd_u.w\010hsub_s.d\010hsub_s.h\010hsub_s.w\010hs"
    "ub_u.d\010hsub_u.h\010hsub_u.w\007ilvev.b\007ilvev.d\007ilvev.h\007ilve"
    "v.w\006ilvl.b\006ilvl.d\006ilvl.h\006ilvl.w\007ilvod.b\007ilvod.d\007il"
    "vod.h\007ilvod.w\006ilvr.b\006ilvr.d\006ilvr.h\006ilvr.w\003ins\010inse"
    "rt.b\010insert.d\010insert.h\010insert.w\004insv\007insve.b\007insve.d\007"
    "insve.h\007insve.w\001j\003jal\004jalr\007jalr.hb\005jalrc\005jalrs\007"
    "jalrs16\004jals\004jalx\005jialc\003jic\002jr\005jr.hb\004jr16\tjraddiu"
    "sp\003jrc\002la\002lb\003lbu\005lbu16\004lbux\002ld\004ld.b\004ld.d\004"
    "ld.h\004ld.w\004ldc1\004ldc2\004ldc3\005ldi.b\005ldi.d\005ldi.h\005ldi."
    "w\003ldl\004ldpc\003ldr\005ldxc1\002lh\003lhu\005lhu16\003lhx\002li\004"
    "li16\002ll\003lld\003lsa\003lui\005luxc1\002lw\004lw16\004lwc1\004lwc2\004"
    "lwc3\003lwl\003lwm\005lwm16\005lwm32\003lwp\004lwpc\003lwr\003lwu\005lw"
    "upc\003lwx\005lwxc1\004lwxs\004madd\006madd.d\006madd.s\010madd_q.h\010"
    "madd_q.w\007maddf.d\007maddf.s\tmaddr_q.h\tmaddr_q.w\005maddu\007maddv."
    "b\007maddv.d\007maddv.h\007maddv.w\013maq_s.w.phl\013maq_s.w.phr\014maq"
    "_sa.w.phl\014maq_sa.w.phr\005max.d\005max.s\007max_a.b\007max_a.d\007ma"
    "x_a.h\007max_a.w\007max_s.b\007max_s.d\007max_s.h\007max_s.w\007max_u.b"
    "\007max_u.d\007max_u.h\007max_u.w\006maxa.d\006maxa.s\010maxi_s.b\010ma"
    "xi_s.d\010maxi_s.h\010maxi_s.w\010maxi_u.b\010maxi_u.d\010maxi_u.h\010m"
    "axi_u.w\004mfc0\004mfc1\004mfc2\005mfhc1\004mfhi\004mflo\005min.d\005mi"
    "n.s\007min_a.b\007min_a.d\007min_a.h\007min_a.w\007min_s.b\007min_s.d\007"
    "min_s.h\007min_s.w\007min_u.b\007min_u.d\007min_u.h\007min_u.w\006mina."
    "d\006mina.s\010mini_s.b\010mini_s.d\010mini_s.h\010mini_s.w\010mini_u.b"
    "\010mini_u.d\010mini_u.h\010mini_u.w\003mod\007mod_s.b\007mod_s.d\007mo"
    "d_s.h\007mod_s.w\007mod_u.b\007mod_u.d\007mod_u.h\007mod_u.w\006modsub\004"
    "modu\005mov.d\005mov.s\004move\006move.v\005movep\004movf\006movf.d\006"
    "movf.s\004movn\006movn.d\006movn.s\004movt\006movt.d\006movt.s\004movz\006"
    "movz.d\006movz.s\004msub\006msub.d\006msub.s\010msub_q.h\010msub_q.w\007"
    "msubf.d\007msubf.s\tmsubr_q.h\tmsubr_q.w\005msubu\007msubv.b\007msubv.d"
    "\007msubv.h\007msubv.w\004mtc0\004mtc1\004mtc2\005mthc1\004mthi\006mthl"
    "ip\004mtlo\004mtm0\004mtm1\004mtm2\004mtp0\004mtp1\004mtp2\003muh\004mu"
    "hu\003mul\005mul.d\006mul.ph\005mul.s\007mul_q.h\007mul_q.w\010mul_s.ph"
    "\015muleq_s.w.phl\015muleq_s.w.phr\016muleu_s.ph.qbl\016muleu_s.ph.qbr\n"
    "mulq_rs.ph\tmulq_rs.w\tmulq_s.ph\010mulq_s.w\010mulr_q.h\010mulr_q.w\nm"
    "ulsa.w.ph\015mulsaq_s.w.ph\004mult\005multu\004mulu\006mulv.b\006mulv.d"
    "\006mulv.h\006mulv.w\003neg\005neg.d\005neg.s\004negu\006nloc.b\006nloc"
    ".d\006nloc.h\006nloc.w\006nlzc.b\006nlzc.d\006nlzc.h\006nlzc.w\007nmadd"
    ".d\007nmadd.s\007nmsub.d\007nmsub.s\003nop\003nor\005nor.v\006nori.b\003"
    "not\005not16\002or\004or.v\004or16\003ori\005ori.b\tpackrl.ph\005pause\007"
    "pckev.b\007pckev.d\007pckev.h\007pckev.w\007pckod.b\007pckod.d\007pckod"
    ".h\007pckod.w\006pcnt.b\006pcnt.d\006pcnt.h\006pcnt.w\007pick.ph\007pic"
    "k.qb\003pop\014preceq.w.phl\014preceq.w.phr\016precequ.ph.qbl\017preceq"
    "u.ph.qbla\016precequ.ph.qbr\017precequ.ph.qbra\015preceu.ph.qbl\016prec"
    "eu.ph.qbla\015preceu.ph.qbr\016preceu.ph.qbra\013precr.qb.ph\016precr_s"
    "ra.ph.w\020precr_sra_r.ph.w\013precrq.ph.w\014precrq.qb.ph\016precrq_rs"
    ".ph.w\017precrqu_s.qb.ph\004pref\007prepend\nraddu.w.qb\005rddsp\005rdh"
    "wr\007repl.ph\007repl.qb\010replv.ph\010replv.qb\006rint.d\006rint.s\004"
    "rotr\005rotrv\tround.l.d\tround.l.s\tround.w.d\tround.w.s\007sat_s.b\007"
    "sat_s.d\007sat_s.h\007sat_s.w\007sat_u.b\007sat_u.d\007sat_u.h\007sat_u"
    ".w\002sb\004sb16\002sc\003scd\002sd\005sdbbp\007sdbbp16\004sdc1\004sdc2"
    "\004sdc3\003sdl\003sdr\005sdxc1\003seb\003seh\005sel.d\005sel.s\006sele"
    "qz\010seleqz.d\010seleqz.s\006selnez\010selnez.d\010selnez.s\003seq\004"
    "seqi\002sh\004sh16\005shf.b\005shf.h\005shf.w\005shilo\006shilov\007shl"
    "l.ph\007shll.qb\tshll_s.ph\010shll_s.w\010shllv.ph\010shllv.qb\nshllv_s"
    ".ph\tshllv_s.w\007shra.ph\007shra.qb\tshra_r.ph\tshra_r.qb\010shra_r.w\010"
    "shrav.ph\010shrav.qb\nshrav_r.ph\nshrav_r.qb\tshrav_r.w\007shrl.ph\007s"
    "hrl.qb\010shrlv.ph\010shrlv.qb\005sld.b\005sld.d\005sld.h\005sld.w\006s"
    "ldi.b\006sldi.d\006sldi.h\006sldi.w\003sll\005sll.b\005sll.d\005sll.h\005"
    "sll.w\005sll16\006slli.b\006slli.d\006slli.h\006slli.w\004sllv\003slt\004"
    "slti\005sltiu\004sltu\003sne\004snei\007splat.b\007splat.d\007splat.h\007"
    "splat.w\010splati.b\010splati.d\010splati.h\010splati.w\006sqrt.d\006sq"
    "rt.s\003sra\005sra.b\005sra.d\005sra.h\005sra.w\006srai.b\006srai.d\006"
    "srai.h\006srai.w\006srar.b\006srar.d\006srar.h\006srar.w\007srari.b\007"
    "srari.d\007srari.h\007srari.w\004srav\003srl\005srl.b\005srl.d\005srl.h"
    "\005srl.w\005srl16\006srli.b\006srli.d\006srli.h\006srli.w\006srlr.b\006"
    "srlr.d\006srlr.h\006srlr.w\007srlri.b\007srlri.d\007srlri.h\007srlri.w\004"
    "srlv\005ssnop\004st.b\004st.d\004st.h\004st.w\003sub\005sub.d\005sub.s\007"
    "subq.ph\tsubq_s.ph\010subq_s.w\010subqh.ph\007subqh.w\nsubqh_r.ph\tsubq"
    "h_r.w\010subs_s.b\010subs_s.d\010subs_s.h\010subs_s.w\010subs_u.b\010su"
    "bs_u.d\010subs_u.h\010subs_u.w\nsubsus_u.b\nsubsus_u.d\nsubsus_u.h\nsub"
    "sus_u.w\nsubsuu_s.b\nsubsuu_s.d\nsubsuu_s.h\nsubsuu_s.w\004subu\007subu"
    ".ph\007subu.qb\006subu16\tsubu_s.ph\tsubu_s.qb\010subuh.qb\nsubuh_r.qb\006"
    "subv.b\006subv.d\006subv.h\006subv.w\007subvi.b\007subvi.d\007subvi.h\007"
    "subvi.w\005suxc1\002sw\004sw16\004swc1\004swc2\004swc3\003swl\003swm\005"
    "swm16\005swm32\003swp\003swr\005swxc1\004sync\005synci\nsynciobdma\005s"
    "yncs\005syncw\006syncws\007syscall\003teq\004teqi\003tge\004tgei\005tge"
    "iu\004tgeu\004tlbp\004tlbr\005tlbwi\005tlbwr\003tlt\004tlti\005tltiu\004"
    "tltu\003tne\004tnei\ttrunc.l.d\ttrunc.l.s\ttrunc.w.d\ttrunc.w.s\006v3mu"
    "lu\004vmm0\005vmulu\006vshf.b\006vshf.d\006vshf.h\006vshf.w\004wait\005"
    "wrdsp\004wsbh\003xor\005xor.v\005xor16\004xori\006xori.b";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[8];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* abs.d */, Mips::FABS_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 0 /* abs.d */, Mips::FABS_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6 /* abs.s */, Mips::FABS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 45 /* add.d */, Mips::FADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 45 /* add.d */, Mips::FADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 51 /* add.s */, Mips::FADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 57 /* add_a.b */, Mips::ADD_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 65 /* add_a.d */, Mips::ADD_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 73 /* add_a.h */, Mips::ADD_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 81 /* add_a.w */, Mips::ADD_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 94 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 100 /* addiupc */, Mips::ADDIUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 100 /* addiupc */, Mips::ADDIUPC_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 108 /* addiur1sp */, Mips::ADDIUR1SP_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 118 /* addiur2 */, Mips::ADDIUR2_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 126 /* addius5 */, Mips::ADDIUS5_MM, Convert__GPR32AsmReg1_0__Tie0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 134 /* addiusp */, Mips::ADDIUSP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 142 /* addq.ph */, Mips::ADDQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 150 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 160 /* addq_s.w */, Mips::ADDQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 169 /* addqh.ph */, Mips::ADDQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 178 /* addqh.w */, Mips::ADDQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 186 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 197 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 207 /* adds_a.b */, Mips::ADDS_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 216 /* adds_a.d */, Mips::ADDS_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 225 /* adds_a.h */, Mips::ADDS_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 234 /* adds_a.w */, Mips::ADDS_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 243 /* adds_s.b */, Mips::ADDS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 252 /* adds_s.d */, Mips::ADDS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 261 /* adds_s.h */, Mips::ADDS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 270 /* adds_s.w */, Mips::ADDS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 279 /* adds_u.b */, Mips::ADDS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 288 /* adds_u.d */, Mips::ADDS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 297 /* adds_u.h */, Mips::ADDS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 306 /* adds_u.w */, Mips::ADDS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 315 /* addsc */, Mips::ADDSC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 321 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 326 /* addu.ph */, Mips::ADDU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 334 /* addu.qb */, Mips::ADDU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 342 /* addu16 */, Mips::ADDU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 349 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 359 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 369 /* adduh.qb */, Mips::ADDUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 378 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 389 /* addv.b */, Mips::ADDV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 396 /* addv.d */, Mips::ADDV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 403 /* addv.h */, Mips::ADDV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 410 /* addv.w */, Mips::ADDV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 417 /* addvi.b */, Mips::ADDVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 425 /* addvi.d */, Mips::ADDVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 433 /* addvi.h */, Mips::ADDVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 441 /* addvi.w */, Mips::ADDVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 449 /* addwc */, Mips::ADDWC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 455 /* align */, Mips::ALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 461 /* aluipc */, Mips::ALUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 472 /* and.v */, Mips::AND_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 478 /* and16 */, Mips::AND16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 489 /* andi.b */, Mips::ANDI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 496 /* andi16 */, Mips::ANDI16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 503 /* append */, Mips::APPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 510 /* asub_s.b */, Mips::ASUB_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 519 /* asub_s.d */, Mips::ASUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 528 /* asub_s.h */, Mips::ASUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 537 /* asub_s.w */, Mips::ASUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 546 /* asub_u.b */, Mips::ASUB_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 555 /* asub_u.d */, Mips::ASUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 564 /* asub_u.h */, Mips::ASUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 573 /* asub_u.w */, Mips::ASUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 582 /* aui */, Mips::AUI, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 586 /* auipc */, Mips::AUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 592 /* ave_s.b */, Mips::AVE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 600 /* ave_s.d */, Mips::AVE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 608 /* ave_s.h */, Mips::AVE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 616 /* ave_s.w */, Mips::AVE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 624 /* ave_u.b */, Mips::AVE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 632 /* ave_u.d */, Mips::AVE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 640 /* ave_u.h */, Mips::AVE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 648 /* ave_u.w */, Mips::AVE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 656 /* aver_s.b */, Mips::AVER_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 665 /* aver_s.d */, Mips::AVER_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 674 /* aver_s.h */, Mips::AVER_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 683 /* aver_s.w */, Mips::AVER_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 692 /* aver_u.b */, Mips::AVER_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 701 /* aver_u.d */, Mips::AVER_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 710 /* aver_u.h */, Mips::AVER_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 719 /* aver_u.w */, Mips::AVER_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 728 /* b */, Mips::B_MM_Pseudo, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::BimmX16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::BEQ, Convert__regZERO__regZERO__JumpTarget1_0, Feature_NotInMicroMips, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::Bimm16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 730 /* b16 */, Mips::B16_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 734 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 734 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 740 /* bal */, Mips::BAL, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 740 /* bal */, Mips::BGEZAL, Convert__regZERO__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 744 /* balc */, Mips::BALC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 749 /* balign */, Mips::BALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 756 /* bbit0 */, Mips::BBIT0, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 762 /* bbit032 */, Mips::BBIT032, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 770 /* bbit1 */, Mips::BBIT1, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 776 /* bbit132 */, Mips::BBIT132, Convert__GPR64AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 784 /* bc */, Mips::BC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 787 /* bc1eqz */, Mips::BC1EQZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 794 /* bc1f */, Mips::BC1F, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 794 /* bc1f */, Mips::BC1F, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 799 /* bc1fl */, Mips::BC1FL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 799 /* bc1fl */, Mips::BC1FL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 805 /* bc1nez */, Mips::BC1NEZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 812 /* bc1t */, Mips::BC1T, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 812 /* bc1t */, Mips::BC1T, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 817 /* bc1tl */, Mips::BC1TL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 817 /* bc1tl */, Mips::BC1TL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 823 /* bc2eqz */, Mips::BC2EQZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 830 /* bc2nez */, Mips::BC2NEZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 837 /* bclr.b */, Mips::BCLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 844 /* bclr.d */, Mips::BCLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 851 /* bclr.h */, Mips::BCLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 858 /* bclr.w */, Mips::BCLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 865 /* bclri.b */, Mips::BCLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 873 /* bclri.d */, Mips::BCLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 881 /* bclri.h */, Mips::BCLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 889 /* bclri.w */, Mips::BCLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 897 /* beq */, Mips::BEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 897 /* beq */, Mips::BEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 901 /* beqc */, Mips::BEQC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 906 /* beql */, Mips::BEQL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 911 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 911 /* beqz */, Mips::BEQ, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 911 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 916 /* beqz16 */, Mips::BEQZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 923 /* beqzalc */, Mips::BEQZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 931 /* beqzc */, Mips::BEQZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 931 /* beqzc */, Mips::BEQZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 937 /* beqzl */, Mips::BEQL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 943 /* bgec */, Mips::BGEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 948 /* bgeuc */, Mips::BGEUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 954 /* bgez */, Mips::BGEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 954 /* bgez */, Mips::BGEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 959 /* bgezal */, Mips::BGEZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 959 /* bgezal */, Mips::BGEZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 966 /* bgezalc */, Mips::BGEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 974 /* bgezall */, Mips::BGEZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 982 /* bgezals */, Mips::BGEZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 990 /* bgezc */, Mips::BGEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 996 /* bgezl */, Mips::BGEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1002 /* bgtz */, Mips::BGTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1002 /* bgtz */, Mips::BGTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1007 /* bgtzalc */, Mips::BGTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1015 /* bgtzc */, Mips::BGTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1021 /* bgtzl */, Mips::BGTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1027 /* binsl.b */, Mips::BINSL_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1035 /* binsl.d */, Mips::BINSL_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1043 /* binsl.h */, Mips::BINSL_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1051 /* binsl.w */, Mips::BINSL_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1059 /* binsli.b */, Mips::BINSLI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1068 /* binsli.d */, Mips::BINSLI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1077 /* binsli.h */, Mips::BINSLI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1086 /* binsli.w */, Mips::BINSLI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1095 /* binsr.b */, Mips::BINSR_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1103 /* binsr.d */, Mips::BINSR_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1111 /* binsr.h */, Mips::BINSR_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1119 /* binsr.w */, Mips::BINSR_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1127 /* binsri.b */, Mips::BINSRI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1136 /* binsri.d */, Mips::BINSRI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1145 /* binsri.h */, Mips::BINSRI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1154 /* binsri.w */, Mips::BINSRI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1163 /* bitrev */, Mips::BITREV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1170 /* bitswap */, Mips::BITSWAP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1178 /* blez */, Mips::BLEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1178 /* blez */, Mips::BLEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1183 /* blezalc */, Mips::BLEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1191 /* blezc */, Mips::BLEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1197 /* blezl */, Mips::BLEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1203 /* bltc */, Mips::BLTC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1208 /* bltuc */, Mips::BLTUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1214 /* bltz */, Mips::BLTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1214 /* bltz */, Mips::BLTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1219 /* bltzal */, Mips::BLTZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1219 /* bltzal */, Mips::BLTZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1226 /* bltzalc */, Mips::BLTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1234 /* bltzall */, Mips::BLTZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1242 /* bltzals */, Mips::BLTZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1250 /* bltzc */, Mips::BLTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1256 /* bltzl */, Mips::BLTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1262 /* bmnz.v */, Mips::BMNZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1269 /* bmnzi.b */, Mips::BMNZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1277 /* bmz.v */, Mips::BMZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1283 /* bmzi.b */, Mips::BMZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1290 /* bne */, Mips::BNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1290 /* bne */, Mips::BNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1294 /* bnec */, Mips::BNEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1299 /* bneg.b */, Mips::BNEG_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1306 /* bneg.d */, Mips::BNEG_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1313 /* bneg.h */, Mips::BNEG_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1320 /* bneg.w */, Mips::BNEG_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1327 /* bnegi.b */, Mips::BNEGI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1335 /* bnegi.d */, Mips::BNEGI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1343 /* bnegi.h */, Mips::BNEGI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1351 /* bnegi.w */, Mips::BNEGI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1359 /* bnel */, Mips::BNEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1364 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 1364 /* bnez */, Mips::BNE, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1364 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1369 /* bnez16 */, Mips::BNEZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 1376 /* bnezalc */, Mips::BNEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1384 /* bnezc */, Mips::BNEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1384 /* bnezc */, Mips::BNEZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1390 /* bnezl */, Mips::BNEL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1396 /* bnvc */, Mips::BNVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1401 /* bnz.b */, Mips::BNZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1407 /* bnz.d */, Mips::BNZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1413 /* bnz.h */, Mips::BNZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1419 /* bnz.v */, Mips::BNZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1425 /* bnz.w */, Mips::BNZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1431 /* bovc */, Mips::BOVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1436 /* bposge32 */, Mips::BPOSGE32, Convert__JumpTarget1_0, Feature_HasDSP, { MCK_JumpTarget }, },
  { 1445 /* break */, Mips::BREAK, Convert__imm_95_0__imm_95_0, 0, {  }, },
  { 1445 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 1445 /* break */, Mips::BREAK, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 1445 /* break */, Mips::BREAK, Convert__Imm1_0__Imm1_1, Feature_HasStdEnc, { MCK_Imm, MCK_Imm }, },
  { 1445 /* break */, Mips::BREAK_MM, Convert__Imm1_0__Imm1_1, Feature_InMicroMips, { MCK_Imm, MCK_Imm }, },
  { 1451 /* break16 */, Mips::BREAK16_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 1459 /* bsel.v */, Mips::BSEL_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1466 /* bseli.b */, Mips::BSELI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1474 /* bset.b */, Mips::BSET_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1481 /* bset.d */, Mips::BSET_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1488 /* bset.h */, Mips::BSET_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1495 /* bset.w */, Mips::BSET_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1502 /* bseti.b */, Mips::BSETI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1510 /* bseti.d */, Mips::BSETI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1518 /* bseti.h */, Mips::BSETI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1526 /* bseti.w */, Mips::BSETI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1534 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1534 /* bteqz */, Mips::Bteqz16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1540 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1540 /* btnez */, Mips::Btnez16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1546 /* bz.b */, Mips::BZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1551 /* bz.d */, Mips::BZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1556 /* bz.h */, Mips::BZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1561 /* bz.v */, Mips::BZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1566 /* bz.w */, Mips::BZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1571 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1571 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1578 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1585 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1585 /* c.f.d */, Mips::C_F_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1591 /* c.f.s */, Mips::C_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1597 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1597 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1604 /* c.le.s */, Mips::C_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1611 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1611 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1618 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1625 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1625 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1633 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1641 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1641 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1649 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1657 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1657 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1666 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1675 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1675 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1683 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1691 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1691 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1699 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1707 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1707 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1715 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1723 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1723 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1731 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1739 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1739 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1746 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1753 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1753 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1761 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1769 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1769 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1777 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1785 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1785 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1793 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1801 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1801 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1808 /* c.un.s */, Mips::C_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1815 /* cache */, Mips::CACHE, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm, MCK_Mem }, },
  { 1815 /* cache */, Mips::CACHE_R6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm, MCK_Mem }, },
  { 1815 /* cache */, Mips::CACHE_MM, Convert__Mem2_1__Imm1_0, Feature_InMicroMips, { MCK_Imm, MCK_Mem }, },
  { 1821 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1830 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1839 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1839 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 1848 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1857 /* ceq.b */, Mips::CEQ_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1863 /* ceq.d */, Mips::CEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1869 /* ceq.h */, Mips::CEQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1875 /* ceq.w */, Mips::CEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1881 /* ceqi.b */, Mips::CEQI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1888 /* ceqi.d */, Mips::CEQI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1895 /* ceqi.h */, Mips::CEQI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1902 /* ceqi.w */, Mips::CEQI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1909 /* cfc1 */, Mips::CFC1, Convert__GPR32AsmReg1_0__CCRAsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 1914 /* cfcmsa */, Mips::CFCMSA, Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSACtrlAsmReg }, },
  { 1921 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1921 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1926 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1926 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 1933 /* class.d */, Mips::CLASS_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1941 /* class.s */, Mips::CLASS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1949 /* cle_s.b */, Mips::CLE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1957 /* cle_s.d */, Mips::CLE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1965 /* cle_s.h */, Mips::CLE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1973 /* cle_s.w */, Mips::CLE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1981 /* cle_u.b */, Mips::CLE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1989 /* cle_u.d */, Mips::CLE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1997 /* cle_u.h */, Mips::CLE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2005 /* cle_u.w */, Mips::CLE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2013 /* clei_s.b */, Mips::CLEI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2022 /* clei_s.d */, Mips::CLEI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2031 /* clei_s.h */, Mips::CLEI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2040 /* clei_s.w */, Mips::CLEI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2049 /* clei_u.b */, Mips::CLEI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2058 /* clei_u.d */, Mips::CLEI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2067 /* clei_u.h */, Mips::CLEI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2076 /* clei_u.w */, Mips::CLEI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2085 /* clo */, Mips::CLO, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2085 /* clo */, Mips::CLO_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2085 /* clo */, Mips::CLO_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2089 /* clt_s.b */, Mips::CLT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2097 /* clt_s.d */, Mips::CLT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2105 /* clt_s.h */, Mips::CLT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2113 /* clt_s.w */, Mips::CLT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2121 /* clt_u.b */, Mips::CLT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2129 /* clt_u.d */, Mips::CLT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2137 /* clt_u.h */, Mips::CLT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2145 /* clt_u.w */, Mips::CLT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2153 /* clti_s.b */, Mips::CLTI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2162 /* clti_s.d */, Mips::CLTI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2171 /* clti_s.h */, Mips::CLTI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2180 /* clti_s.w */, Mips::CLTI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2189 /* clti_u.b */, Mips::CLTI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2198 /* clti_u.d */, Mips::CLTI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2207 /* clti_u.h */, Mips::CLTI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2216 /* clti_u.w */, Mips::CLTI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2225 /* clz */, Mips::CLZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2225 /* clz */, Mips::CLZ_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2225 /* clz */, Mips::CLZ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2229 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2233 /* cmp.af.d */, Mips::CMP_F_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2242 /* cmp.af.s */, Mips::CMP_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2251 /* cmp.eq.d */, Mips::CMP_EQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2260 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2270 /* cmp.eq.s */, Mips::CMP_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2279 /* cmp.le.d */, Mips::CMP_LE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2288 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2298 /* cmp.le.s */, Mips::CMP_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2307 /* cmp.lt.d */, Mips::CMP_LT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2316 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2326 /* cmp.lt.s */, Mips::CMP_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2335 /* cmp.saf.d */, Mips::CMP_SAF_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2345 /* cmp.saf.s */, Mips::CMP_SAF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2355 /* cmp.seq.d */, Mips::CMP_SEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2365 /* cmp.seq.s */, Mips::CMP_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2375 /* cmp.sle.d */, Mips::CMP_SLE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2385 /* cmp.sle.s */, Mips::CMP_SLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2395 /* cmp.slt.d */, Mips::CMP_SLT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2405 /* cmp.slt.s */, Mips::CMP_SLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2415 /* cmp.sueq.d */, Mips::CMP_SUEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2426 /* cmp.sueq.s */, Mips::CMP_SUEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2437 /* cmp.sule.d */, Mips::CMP_SULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2448 /* cmp.sule.s */, Mips::CMP_SULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2459 /* cmp.sult.d */, Mips::CMP_SULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2470 /* cmp.sult.s */, Mips::CMP_SULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2481 /* cmp.sun.d */, Mips::CMP_SUN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2491 /* cmp.sun.s */, Mips::CMP_SUN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2501 /* cmp.ueq.d */, Mips::CMP_UEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2511 /* cmp.ueq.s */, Mips::CMP_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2521 /* cmp.ule.d */, Mips::CMP_ULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2531 /* cmp.ule.s */, Mips::CMP_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2541 /* cmp.ult.d */, Mips::CMP_ULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2551 /* cmp.ult.s */, Mips::CMP_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2561 /* cmp.un.d */, Mips::CMP_UN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2570 /* cmp.un.s */, Mips::CMP_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2579 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2592 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2605 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2618 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2630 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2642 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2654 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2654 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2659 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2670 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2681 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2692 /* copy_s.b */, Mips::COPY_S_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2701 /* copy_s.d */, Mips::COPY_S_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2710 /* copy_s.h */, Mips::COPY_S_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2719 /* copy_s.w */, Mips::COPY_S_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2728 /* copy_u.b */, Mips::COPY_U_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2737 /* copy_u.d */, Mips::COPY_U_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2746 /* copy_u.h */, Mips::COPY_U_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2755 /* copy_u.w */, Mips::COPY_U_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2764 /* ctc1 */, Mips::CTC1, Convert__CCRAsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2769 /* ctcmsa */, Mips::CTCMSA, Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSACtrlAsmReg, MCK_GPR32AsmReg }, },
  { 2776 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2784 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2784 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2792 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2792 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2800 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2808 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2816 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2816 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2824 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2832 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2840 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2840 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2848 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2856 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2856 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2856 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2856 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2861 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2861 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2867 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2867 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2874 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2874 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2874 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2874 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2880 /* dahi */, Mips::DAHI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2885 /* dalign */, Mips::DALIGN, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2892 /* dati */, Mips::DATI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2897 /* daui */, Mips::DAUI, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2902 /* dbitswap */, Mips::DBITSWAP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2911 /* dclo */, Mips::DCLO, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2911 /* dclo */, Mips::DCLO_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2916 /* dclz */, Mips::DCLZ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2916 /* dclz */, Mips::DCLZ_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2921 /* ddiv */, Mips::DSDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2921 /* ddiv */, Mips::DDIV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2926 /* ddivu */, Mips::DUDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2926 /* ddivu */, Mips::DDIVU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2932 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32, {  }, },
  { 2932 /* deret */, Mips::DERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 2938 /* dext */, Mips::DEXT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2943 /* dextm */, Mips::DEXTM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2949 /* dextu */, Mips::DEXTU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2955 /* di */, Mips::DI, Convert__regZERO, Feature_HasMips32r2, {  }, },
  { 2955 /* di */, Mips::DI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg }, },
  { 2955 /* di */, Mips::DI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 2958 /* dins */, Mips::DINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2963 /* dinsm */, Mips::DINSM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2969 /* dinsu */, Mips::DINSU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 2975 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2975 /* div */, Mips::SDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2975 /* div */, Mips::SDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2975 /* div */, Mips::DIV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2979 /* div.d */, Mips::FDIV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 2979 /* div.d */, Mips::FDIV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2985 /* div.s */, Mips::FDIV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2991 /* div_s.b */, Mips::DIV_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2999 /* div_s.d */, Mips::DIV_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3007 /* div_s.h */, Mips::DIV_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3015 /* div_s.w */, Mips::DIV_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3023 /* div_u.b */, Mips::DIV_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3031 /* div_u.d */, Mips::DIV_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3039 /* div_u.h */, Mips::DIV_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3047 /* div_u.w */, Mips::DIV_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3055 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3055 /* divu */, Mips::UDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3055 /* divu */, Mips::UDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3055 /* divu */, Mips::DIVU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3060 /* dli */, Mips::LoadImm64, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3064 /* dlsa */, Mips::DLSA_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3064 /* dlsa */, Mips::DLSA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__LSAImm1_3, Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_LSAImm }, },
  { 3069 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3069 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3075 /* dmfc1 */, Mips::DMFC1, Convert__GPR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3081 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3081 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3087 /* dmod */, Mips::DMOD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3092 /* dmodu */, Mips::DMODU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3098 /* dmtc0 */, Mips::DMTC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3098 /* dmtc0 */, Mips::DMTC0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3104 /* dmtc1 */, Mips::DMTC1, Convert__FGR64AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3110 /* dmtc2 */, Mips::DMTC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3110 /* dmtc2 */, Mips::DMTC2, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3116 /* dmuh */, Mips::DMUH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3121 /* dmuhu */, Mips::DMUHU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3127 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3127 /* dmul */, Mips::DMUL_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3127 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3132 /* dmult */, Mips::DMULT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3138 /* dmultu */, Mips::DMULTu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3145 /* dmulu */, Mips::DMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3151 /* dotp_s.d */, Mips::DOTP_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3160 /* dotp_s.h */, Mips::DOTP_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3169 /* dotp_s.w */, Mips::DOTP_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3178 /* dotp_u.d */, Mips::DOTP_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3187 /* dotp_u.h */, Mips::DOTP_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3196 /* dotp_u.w */, Mips::DOTP_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3205 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3214 /* dpadd_s.d */, Mips::DPADD_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3224 /* dpadd_s.h */, Mips::DPADD_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3234 /* dpadd_s.w */, Mips::DPADD_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3244 /* dpadd_u.d */, Mips::DPADD_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3254 /* dpadd_u.h */, Mips::DPADD_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3264 /* dpadd_u.w */, Mips::DPADD_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3274 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3286 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3298 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3311 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3325 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3336 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3347 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3357 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 3357 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3362 /* dps.w.ph */, Mips::DPS_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3371 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3383 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3395 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3408 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3422 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3433 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3444 /* dpsub_s.d */, Mips::DPSUB_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3454 /* dpsub_s.h */, Mips::DPSUB_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3464 /* dpsub_s.w */, Mips::DPSUB_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3474 /* dpsub_u.d */, Mips::DPSUB_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3484 /* dpsub_u.h */, Mips::DPSUB_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3494 /* dpsub_u.w */, Mips::DPSUB_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3504 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3514 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3514 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3520 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3520 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3528 /* drotrv */, Mips::DROTRV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3535 /* dsbh */, Mips::DSBH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3540 /* dshd */, Mips::DSHD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3545 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3545 /* dsll */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3545 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3550 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3550 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3557 /* dsllv */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3563 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3563 /* dsra */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3563 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3568 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3568 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3575 /* dsrav */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3581 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3581 /* dsrl */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3581 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3586 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3586 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3593 /* dsrlv */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3599 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3599 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3599 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3599 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3604 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3604 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3610 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3610 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3610 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3610 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3616 /* ehb */, Mips::EHB, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 3616 /* ehb */, Mips::EHB_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3620 /* ei */, Mips::EI, Convert__regZERO, Feature_HasMips32r2, {  }, },
  { 3620 /* ei */, Mips::EI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg }, },
  { 3620 /* ei */, Mips::EI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3623 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips3_32, {  }, },
  { 3623 /* eret */, Mips::ERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3628 /* ext */, Mips::EXT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 3628 /* ext */, Mips::EXT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 3632 /* extp */, Mips::EXTP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3637 /* extpdp */, Mips::EXTPDP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3644 /* extpdpv */, Mips::EXTPDPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3652 /* extpv */, Mips::EXTPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3658 /* extr.w */, Mips::EXTR_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3665 /* extr_r.w */, Mips::EXTR_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3674 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3684 /* extr_s.h */, Mips::EXTR_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3693 /* extrv.w */, Mips::EXTRV_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3701 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3711 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3722 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3732 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3732 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3737 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3737 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2__Imm1_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm, MCK_Imm }, },
  { 3744 /* fadd.d */, Mips::FADD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3751 /* fadd.w */, Mips::FADD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3758 /* fcaf.d */, Mips::FCAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3765 /* fcaf.w */, Mips::FCAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3772 /* fceq.d */, Mips::FCEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3779 /* fceq.w */, Mips::FCEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3786 /* fclass.d */, Mips::FCLASS_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3795 /* fclass.w */, Mips::FCLASS_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3804 /* fcle.d */, Mips::FCLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3811 /* fcle.w */, Mips::FCLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3818 /* fclt.d */, Mips::FCLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3825 /* fclt.w */, Mips::FCLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3832 /* fcne.d */, Mips::FCNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3839 /* fcne.w */, Mips::FCNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3846 /* fcor.d */, Mips::FCOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3853 /* fcor.w */, Mips::FCOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3860 /* fcueq.d */, Mips::FCUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3868 /* fcueq.w */, Mips::FCUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3876 /* fcule.d */, Mips::FCULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3884 /* fcule.w */, Mips::FCULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3892 /* fcult.d */, Mips::FCULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3900 /* fcult.w */, Mips::FCULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3908 /* fcun.d */, Mips::FCUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3915 /* fcun.w */, Mips::FCUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3922 /* fcune.d */, Mips::FCUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3930 /* fcune.w */, Mips::FCUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3938 /* fdiv.d */, Mips::FDIV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3945 /* fdiv.w */, Mips::FDIV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3952 /* fexdo.h */, Mips::FEXDO_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3960 /* fexdo.w */, Mips::FEXDO_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3968 /* fexp2.d */, Mips::FEXP2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3976 /* fexp2.w */, Mips::FEXP2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3984 /* fexupl.d */, Mips::FEXUPL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3993 /* fexupl.w */, Mips::FEXUPL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4002 /* fexupr.d */, Mips::FEXUPR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4011 /* fexupr.w */, Mips::FEXUPR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4020 /* ffint_s.d */, Mips::FFINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4030 /* ffint_s.w */, Mips::FFINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4040 /* ffint_u.d */, Mips::FFINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4050 /* ffint_u.w */, Mips::FFINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4060 /* ffql.d */, Mips::FFQL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4067 /* ffql.w */, Mips::FFQL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4074 /* ffqr.d */, Mips::FFQR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4081 /* ffqr.w */, Mips::FFQR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4088 /* fill.b */, Mips::FILL_B, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4095 /* fill.d */, Mips::FILL_D, Convert__MSA128AsmReg1_0__GPR64AsmReg1_1, Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK_GPR64AsmReg }, },
  { 4102 /* fill.h */, Mips::FILL_H, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4109 /* fill.w */, Mips::FILL_W, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4116 /* flog2.d */, Mips::FLOG2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4124 /* flog2.w */, Mips::FLOG2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4132 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4142 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4152 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4152 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 4162 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4172 /* fmadd.d */, Mips::FMADD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4180 /* fmadd.w */, Mips::FMADD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4188 /* fmax.d */, Mips::FMAX_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4195 /* fmax.w */, Mips::FMAX_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4202 /* fmax_a.d */, Mips::FMAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4211 /* fmax_a.w */, Mips::FMAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4220 /* fmin.d */, Mips::FMIN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4227 /* fmin.w */, Mips::FMIN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4234 /* fmin_a.d */, Mips::FMIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4243 /* fmin_a.w */, Mips::FMIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4252 /* fmsub.d */, Mips::FMSUB_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4260 /* fmsub.w */, Mips::FMSUB_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4268 /* fmul.d */, Mips::FMUL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4275 /* fmul.w */, Mips::FMUL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4282 /* frcp.d */, Mips::FRCP_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4289 /* frcp.w */, Mips::FRCP_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4296 /* frint.d */, Mips::FRINT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4304 /* frint.w */, Mips::FRINT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4312 /* frsqrt.d */, Mips::FRSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4321 /* frsqrt.w */, Mips::FRSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4330 /* fsaf.d */, Mips::FSAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4337 /* fsaf.w */, Mips::FSAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4344 /* fseq.d */, Mips::FSEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4351 /* fseq.w */, Mips::FSEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4358 /* fsle.d */, Mips::FSLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4365 /* fsle.w */, Mips::FSLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4372 /* fslt.d */, Mips::FSLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4379 /* fslt.w */, Mips::FSLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4386 /* fsne.d */, Mips::FSNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4393 /* fsne.w */, Mips::FSNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4400 /* fsor.d */, Mips::FSOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4407 /* fsor.w */, Mips::FSOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4414 /* fsqrt.d */, Mips::FSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4422 /* fsqrt.w */, Mips::FSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4430 /* fsub.d */, Mips::FSUB_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4437 /* fsub.w */, Mips::FSUB_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4444 /* fsueq.d */, Mips::FSUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4452 /* fsueq.w */, Mips::FSUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4460 /* fsule.d */, Mips::FSULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4468 /* fsule.w */, Mips::FSULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4476 /* fsult.d */, Mips::FSULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4484 /* fsult.w */, Mips::FSULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4492 /* fsun.d */, Mips::FSUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4499 /* fsun.w */, Mips::FSUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4506 /* fsune.d */, Mips::FSUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4514 /* fsune.w */, Mips::FSUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4522 /* ftint_s.d */, Mips::FTINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4532 /* ftint_s.w */, Mips::FTINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4542 /* ftint_u.d */, Mips::FTINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4552 /* ftint_u.w */, Mips::FTINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4562 /* ftq.h */, Mips::FTQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4568 /* ftq.w */, Mips::FTQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4574 /* ftrunc_s.d */, Mips::FTRUNC_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4585 /* ftrunc_s.w */, Mips::FTRUNC_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4596 /* ftrunc_u.d */, Mips::FTRUNC_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4607 /* ftrunc_u.w */, Mips::FTRUNC_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4618 /* hadd_s.d */, Mips::HADD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4627 /* hadd_s.h */, Mips::HADD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4636 /* hadd_s.w */, Mips::HADD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4645 /* hadd_u.d */, Mips::HADD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4654 /* hadd_u.h */, Mips::HADD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4663 /* hadd_u.w */, Mips::HADD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4672 /* hsub_s.d */, Mips::HSUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4681 /* hsub_s.h */, Mips::HSUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4690 /* hsub_s.w */, Mips::HSUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4699 /* hsub_u.d */, Mips::HSUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4708 /* hsub_u.h */, Mips::HSUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4717 /* hsub_u.w */, Mips::HSUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4726 /* ilvev.b */, Mips::ILVEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4734 /* ilvev.d */, Mips::ILVEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4742 /* ilvev.h */, Mips::ILVEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4750 /* ilvev.w */, Mips::ILVEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4758 /* ilvl.b */, Mips::ILVL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4765 /* ilvl.d */, Mips::ILVL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4772 /* ilvl.h */, Mips::ILVL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4779 /* ilvl.w */, Mips::ILVL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4786 /* ilvod.b */, Mips::ILVOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4794 /* ilvod.d */, Mips::ILVOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4802 /* ilvod.h */, Mips::ILVOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4810 /* ilvod.w */, Mips::ILVOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4818 /* ilvr.b */, Mips::ILVR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4825 /* ilvr.d */, Mips::ILVR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4832 /* ilvr.h */, Mips::ILVR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4839 /* ilvr.w */, Mips::ILVR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4846 /* ins */, Mips::INS, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 4846 /* ins */, Mips::INS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Imm1_3__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm, MCK_Imm }, },
  { 4850 /* insert.b */, Mips::INSERT_B, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4859 /* insert.d */, Mips::INSERT_D, Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2, Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR64AsmReg }, },
  { 4868 /* insert.h */, Mips::INSERT_H, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4877 /* insert.w */, Mips::INSERT_W, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4886 /* insv */, Mips::INSV, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4891 /* insve.b */, Mips::INSVE_B, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4899 /* insve.d */, Mips::INSVE_D, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4907 /* insve.h */, Mips::INSVE_H, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4915 /* insve.w */, Mips::INSVE_W, Convert__MSA128AsmReg1_0__Tie0__Imm1_2__MSA128AsmReg1_4__Imm1_6, Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 4923 /* j */, Mips::JR, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 4923 /* j */, Mips::J_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4923 /* j */, Mips::J, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 4925 /* jal */, Mips::JalOneReg, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 4925 /* jal */, Mips::JAL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4925 /* jal */, Mips::JAL, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 4925 /* jal */, Mips::JalTwoReg, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4929 /* jalr */, Mips::JALR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4929 /* jalr */, Mips::JALR, Convert__regRA__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 4929 /* jalr */, Mips::JALR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4929 /* jalr */, Mips::JALR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4934 /* jalr.hb */, Mips::JALR_HB, Convert__regRA__GPR32AsmReg1_0, Feature_HasMips32, { MCK_GPR32AsmReg }, },
  { 4934 /* jalr.hb */, Mips::JALR_HB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4942 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 4948 /* jalrs */, Mips::JALRS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4954 /* jalrs16 */, Mips::JALRS16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4962 /* jals */, Mips::JALS_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 4967 /* jalx */, Mips::JALX, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 4967 /* jalx */, Mips::JALX_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 4972 /* jialc */, Mips::JIALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 4978 /* jic */, Mips::JIC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 4982 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 4982 /* jr */, Mips::JR, Convert__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg }, },
  { 4982 /* jr */, Mips::JR_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4982 /* jr */, Mips::JALR, Convert__regZERO__GPR32AsmReg1_0, Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 4982 /* jr */, Mips::JALR64, Convert__regZERO_64__GPR64AsmReg1_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 4985 /* jr.hb */, Mips::JR_HB, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 4985 /* jr.hb */, Mips::JR_HB_R6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 4991 /* jr16 */, Mips::JR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 4996 /* jraddiusp */, Mips::JRADDIUSP, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5006 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5006 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5006 /* jrc */, Mips::JRC16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5010 /* la */, Mips::LoadAddrImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5010 /* la */, Mips::LoadAddrReg32, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5013 /* lb */, Mips::LB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5013 /* lb */, Mips::LB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5016 /* lbu */, Mips::LBu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5016 /* lbu */, Mips::LBu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5020 /* lbu16 */, Mips::LBU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5026 /* lbux */, Mips::LBUX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5031 /* ld */, Mips::LD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5034 /* ld.b */, Mips::LD_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5039 /* ld.d */, Mips::LD_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5044 /* ld.h */, Mips::LD_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5049 /* ld.w */, Mips::LD_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5054 /* ldc1 */, Mips::LDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 5054 /* ldc1 */, Mips::LDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 5059 /* ldc2 */, Mips::LDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5059 /* ldc2 */, Mips::LDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5064 /* ldc3 */, Mips::LDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5069 /* ldi.b */, Mips::LDI_B, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5075 /* ldi.d */, Mips::LDI_D, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5081 /* ldi.h */, Mips::LDI_H, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5087 /* ldi.w */, Mips::LDI_W, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5093 /* ldl */, Mips::LDL, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5097 /* ldpc */, Mips::LDPC, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5102 /* ldr */, Mips::LDR, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5106 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5106 /* ldxc1 */, Mips::LDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5112 /* lh */, Mips::LH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5112 /* lh */, Mips::LH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5115 /* lhu */, Mips::LHu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5115 /* lhu */, Mips::LHu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5119 /* lhu16 */, Mips::LHU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5125 /* lhx */, Mips::LHX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5129 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5129 /* li */, Mips::LoadImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5129 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5132 /* li16 */, Mips::LI16_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 5137 /* ll */, Mips::LL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5137 /* ll */, Mips::LL_R6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5137 /* ll */, Mips::LL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5140 /* lld */, Mips::LLD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5140 /* lld */, Mips::LLD_R6, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5144 /* lsa */, Mips::LSA_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Imm1_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5144 /* lsa */, Mips::LSA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__LSAImm1_3, Feature_HasMSA, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_LSAImm }, },
  { 5148 /* lui */, Mips::LUi, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5148 /* lui */, Mips::LUi_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5152 /* luxc1 */, Mips::LUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5152 /* luxc1 */, Mips::LUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5158 /* lw */, Mips::LwRxPcTcpX16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5158 /* lw */, Mips::LWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 5158 /* lw */, Mips::LW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5158 /* lw */, Mips::LW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5158 /* lw */, Mips::LWGP_MM, Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_CPU16Regs, MCK_Imm }, },
  { 5158 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 5158 /* lw */, Mips::LwRxPcTcp16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5161 /* lw16 */, Mips::LW16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5166 /* lwc1 */, Mips::LWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 5171 /* lwc2 */, Mips::LWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5171 /* lwc2 */, Mips::LWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5176 /* lwc3 */, Mips::LWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5181 /* lwl */, Mips::LWL, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5181 /* lwl */, Mips::LWL_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5185 /* lwm */, Mips::LWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5189 /* lwm16 */, Mips::LWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 5195 /* lwm32 */, Mips::LWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5201 /* lwp */, Mips::LWP_MM, Convert__RegPair2_0__Mem2_1, Feature_InMicroMips, { MCK_RegPair, MCK_Mem }, },
  { 5205 /* lwpc */, Mips::LWPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5210 /* lwr */, Mips::LWR, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5210 /* lwr */, Mips::LWR_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5214 /* lwu */, Mips::LWU_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5214 /* lwu */, Mips::LWu, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5218 /* lwupc */, Mips::LWUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5224 /* lwx */, Mips::LWX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5228 /* lwxc1 */, Mips::LWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5234 /* lwxs */, Mips::LWXS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5239 /* madd */, Mips::MADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5239 /* madd */, Mips::MADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5239 /* madd */, Mips::MADD_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5244 /* madd.d */, Mips::MADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5244 /* madd.d */, Mips::MADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5251 /* madd.s */, Mips::MADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5258 /* madd_q.h */, Mips::MADD_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5267 /* madd_q.w */, Mips::MADD_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5276 /* maddf.d */, Mips::MADDF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5284 /* maddf.s */, Mips::MADDF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5292 /* maddr_q.h */, Mips::MADDR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5302 /* maddr_q.w */, Mips::MADDR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5312 /* maddu */, Mips::MADDU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5312 /* maddu */, Mips::MADDU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5312 /* maddu */, Mips::MADDU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5318 /* maddv.b */, Mips::MADDV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5326 /* maddv.d */, Mips::MADDV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5334 /* maddv.h */, Mips::MADDV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5342 /* maddv.w */, Mips::MADDV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5350 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5362 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5374 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5387 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5400 /* max.d */, Mips::MAX_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5406 /* max.s */, Mips::MAX_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5412 /* max_a.b */, Mips::MAX_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5420 /* max_a.d */, Mips::MAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5428 /* max_a.h */, Mips::MAX_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5436 /* max_a.w */, Mips::MAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5444 /* max_s.b */, Mips::MAX_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5452 /* max_s.d */, Mips::MAX_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5460 /* max_s.h */, Mips::MAX_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5468 /* max_s.w */, Mips::MAX_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5476 /* max_u.b */, Mips::MAX_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5484 /* max_u.d */, Mips::MAX_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5492 /* max_u.h */, Mips::MAX_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5500 /* max_u.w */, Mips::MAX_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5508 /* maxa.d */, Mips::MAXA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5515 /* maxa.s */, Mips::MAXA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5522 /* maxi_s.b */, Mips::MAXI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5531 /* maxi_s.d */, Mips::MAXI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5540 /* maxi_s.h */, Mips::MAXI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5549 /* maxi_s.w */, Mips::MAXI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5558 /* maxi_u.b */, Mips::MAXI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5567 /* maxi_u.d */, Mips::MAXI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5576 /* maxi_u.h */, Mips::MAXI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5585 /* maxi_u.w */, Mips::MAXI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5594 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5594 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5599 /* mfc1 */, Mips::MFC1, Convert__GPR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 5604 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5604 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 5609 /* mfhc1 */, Mips::MFHC1_D32, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5609 /* mfhc1 */, Mips::MFHC1_D64, Convert__GPR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 5615 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5615 /* mfhi */, Mips::MFHI, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5615 /* mfhi */, Mips::MFHI16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5615 /* mfhi */, Mips::MFHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5615 /* mfhi */, Mips::MFHI_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5620 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5620 /* mflo */, Mips::MFLO, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5620 /* mflo */, Mips::MFLO16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5620 /* mflo */, Mips::MFLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5620 /* mflo */, Mips::MFLO_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5625 /* min.d */, Mips::MIN_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5631 /* min.s */, Mips::MIN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5637 /* min_a.b */, Mips::MIN_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5645 /* min_a.d */, Mips::MIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5653 /* min_a.h */, Mips::MIN_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5661 /* min_a.w */, Mips::MIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5669 /* min_s.b */, Mips::MIN_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5677 /* min_s.d */, Mips::MIN_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5685 /* min_s.h */, Mips::MIN_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5693 /* min_s.w */, Mips::MIN_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5701 /* min_u.b */, Mips::MIN_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5709 /* min_u.d */, Mips::MIN_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5717 /* min_u.h */, Mips::MIN_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5725 /* min_u.w */, Mips::MIN_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5733 /* mina.d */, Mips::MINA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5740 /* mina.s */, Mips::MINA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5747 /* mini_s.b */, Mips::MINI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5756 /* mini_s.d */, Mips::MINI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5765 /* mini_s.h */, Mips::MINI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5774 /* mini_s.w */, Mips::MINI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5783 /* mini_u.b */, Mips::MINI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5792 /* mini_u.d */, Mips::MINI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5801 /* mini_u.h */, Mips::MINI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5810 /* mini_u.w */, Mips::MINI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5819 /* mod */, Mips::MOD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5823 /* mod_s.b */, Mips::MOD_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5831 /* mod_s.d */, Mips::MOD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5839 /* mod_s.h */, Mips::MOD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5847 /* mod_s.w */, Mips::MOD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5855 /* mod_u.b */, Mips::MOD_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5863 /* mod_u.d */, Mips::MOD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5871 /* mod_u.h */, Mips::MOD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5879 /* mod_u.w */, Mips::MOD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5887 /* modsub */, Mips::MODSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5894 /* modu */, Mips::MODU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5899 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5899 /* mov.d */, Mips::FMOV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5905 /* mov.s */, Mips::FMOV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5911 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPR }, },
  { 5911 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPR, MCK_CPU16Regs }, },
  { 5911 /* move */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5911 /* move */, Mips::MOVE16_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5911 /* move */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 5916 /* move.v */, Mips::MOVE_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5923 /* movep */, Mips::MOVEP_MM, Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2, Feature_InMicroMips, { MCK_MovePRegPair, MCK_GPRMM16AsmRegMoveP, MCK_GPRMM16AsmRegMoveP }, },
  { 5929 /* movf */, Mips::MOVF_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5929 /* movf */, Mips::MOVF_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5934 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 5934 /* movf.d */, Mips::MOVF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 5941 /* movf.s */, Mips::MOVF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 5948 /* movn */, Mips::MOVN_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5948 /* movn */, Mips::MOVN_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5953 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5953 /* movn.d */, Mips::MOVN_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5960 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 5967 /* movt */, Mips::MOVT_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5967 /* movt */, Mips::MOVT_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 5972 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 5972 /* movt.d */, Mips::MOVT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 5979 /* movt.s */, Mips::MOVT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 5986 /* movz */, Mips::MOVZ_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5986 /* movz */, Mips::MOVZ_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5991 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5991 /* movz.d */, Mips::MOVZ_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 5998 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6005 /* msub */, Mips::MSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6005 /* msub */, Mips::MSUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6005 /* msub */, Mips::MSUB_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6010 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6010 /* msub.d */, Mips::MSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6017 /* msub.s */, Mips::MSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6024 /* msub_q.h */, Mips::MSUB_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6033 /* msub_q.w */, Mips::MSUB_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6042 /* msubf.d */, Mips::MSUBF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6050 /* msubf.s */, Mips::MSUBF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6058 /* msubr_q.h */, Mips::MSUBR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6068 /* msubr_q.w */, Mips::MSUBR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6078 /* msubu */, Mips::MSUBU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6078 /* msubu */, Mips::MSUBU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6078 /* msubu */, Mips::MSUBU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6084 /* msubv.b */, Mips::MSUBV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6092 /* msubv.d */, Mips::MSUBV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6100 /* msubv.h */, Mips::MSUBV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6108 /* msubv.w */, Mips::MSUBV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6116 /* mtc0 */, Mips::MTC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6116 /* mtc0 */, Mips::MTC0, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6121 /* mtc1 */, Mips::MTC1, Convert__FGR32AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 6126 /* mtc2 */, Mips::MTC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6126 /* mtc2 */, Mips::MTC2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6131 /* mthc1 */, Mips::MTHC1_D32, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6131 /* mthc1 */, Mips::MTHC1_D64, Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 6137 /* mthi */, Mips::MTHI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6137 /* mthi */, Mips::MTHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6137 /* mthi */, Mips::MTHI_DSP, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6142 /* mthlip */, Mips::MTHLIP, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6149 /* mtlo */, Mips::MTLO, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6149 /* mtlo */, Mips::MTLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6149 /* mtlo */, Mips::MTLO_DSP, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6154 /* mtm0 */, Mips::MTM0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6159 /* mtm1 */, Mips::MTM1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6164 /* mtm2 */, Mips::MTM2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6169 /* mtp0 */, Mips::MTP0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6174 /* mtp1 */, Mips::MTP1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6179 /* mtp2 */, Mips::MTP2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6184 /* muh */, Mips::MUH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6188 /* muhu */, Mips::MUHU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6193 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6193 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6193 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6193 /* mul */, Mips::MUL_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6193 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6197 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6197 /* mul.d */, Mips::FMUL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6203 /* mul.ph */, Mips::MUL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6210 /* mul.s */, Mips::FMUL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6216 /* mul_q.h */, Mips::MUL_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6224 /* mul_q.w */, Mips::MUL_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6232 /* mul_s.ph */, Mips::MUL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6241 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6255 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6269 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6284 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6299 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6310 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6320 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6330 /* mulq_s.w */, Mips::MULQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6339 /* mulr_q.h */, Mips::MULR_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6348 /* mulr_q.w */, Mips::MULR_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6357 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6368 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6382 /* mult */, Mips::MULT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6382 /* mult */, Mips::MULT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6382 /* mult */, Mips::MULT_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6387 /* multu */, Mips::MULTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6387 /* multu */, Mips::MULTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6387 /* multu */, Mips::MULTU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6393 /* mulu */, Mips::MULU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6398 /* mulv.b */, Mips::MULV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6405 /* mulv.d */, Mips::MULV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6412 /* mulv.h */, Mips::MULV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6419 /* mulv.w */, Mips::MULV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6426 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6426 /* neg */, Mips::SUB, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6430 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6430 /* neg.d */, Mips::FNEG_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6436 /* neg.s */, Mips::FNEG_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6442 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 6442 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6447 /* nloc.b */, Mips::NLOC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6454 /* nloc.d */, Mips::NLOC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6461 /* nloc.h */, Mips::NLOC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6468 /* nloc.w */, Mips::NLOC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6475 /* nlzc.b */, Mips::NLZC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6482 /* nlzc.d */, Mips::NLZC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6489 /* nlzc.h */, Mips::NLZC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6496 /* nlzc.w */, Mips::NLZC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6503 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6503 /* nmadd.d */, Mips::NMADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6511 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6519 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6519 /* nmsub.d */, Mips::NMSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6527 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6535 /* nop */, Mips::SLL_MM, Convert__regZERO__regZERO__imm_95_0, Feature_InMicroMips, {  }, },
  { 6535 /* nop */, Mips::MOVE16_MM, Convert__regZERO__regZERO, Feature_InMicroMips, {  }, },
  { 6535 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_95_0, 0, {  }, },
  { 6539 /* nor */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6539 /* nor */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6543 /* nor.v */, Mips::NOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6549 /* nori.b */, Mips::NORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6556 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6556 /* not */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6560 /* not16 */, Mips::NOT16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6566 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6566 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6566 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6566 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6566 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6566 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6566 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6569 /* or.v */, Mips::OR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6574 /* or16 */, Mips::OR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6579 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6579 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6579 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6579 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6583 /* ori.b */, Mips::ORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6589 /* packrl.ph */, Mips::PACKRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6599 /* pause */, Mips::PAUSE, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r2, {  }, },
  { 6599 /* pause */, Mips::PAUSE_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 6605 /* pckev.b */, Mips::PCKEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6613 /* pckev.d */, Mips::PCKEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6621 /* pckev.h */, Mips::PCKEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6629 /* pckev.w */, Mips::PCKEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6637 /* pckod.b */, Mips::PCKOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6645 /* pckod.d */, Mips::PCKOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6653 /* pckod.h */, Mips::PCKOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6661 /* pckod.w */, Mips::PCKOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6669 /* pcnt.b */, Mips::PCNT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6676 /* pcnt.d */, Mips::PCNT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6683 /* pcnt.h */, Mips::PCNT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6690 /* pcnt.w */, Mips::PCNT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6697 /* pick.ph */, Mips::PICK_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6705 /* pick.qb */, Mips::PICK_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6713 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasCnMips, { MCK_GPR32AsmReg }, },
  { 6713 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6717 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6730 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6743 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6758 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6774 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6789 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6805 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6819 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6834 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6848 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6863 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6875 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6890 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6907 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6919 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6932 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6947 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6963 /* pref */, Mips::PREF, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm, MCK_Mem }, },
  { 6963 /* pref */, Mips::PREF_R6, Convert__Mem2_1__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm, MCK_Mem }, },
  { 6963 /* pref */, Mips::PREF_MM, Convert__Mem2_1__Imm1_0, Feature_InMicroMips, { MCK_Imm, MCK_Mem }, },
  { 6968 /* prepend */, Mips::PREPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6976 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6987 /* rddsp */, Mips::RDDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6993 /* rdhwr */, Mips::RDHWR, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 6993 /* rdhwr */, Mips::RDHWR_MM, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 6999 /* repl.ph */, Mips::REPL_PH, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7007 /* repl.qb */, Mips::REPL_QB, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7015 /* replv.ph */, Mips::REPLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7024 /* replv.qb */, Mips::REPLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7033 /* rint.d */, Mips::RINT_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7040 /* rint.s */, Mips::RINT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7047 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7047 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7047 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7047 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7052 /* rotrv */, Mips::ROTRV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7052 /* rotrv */, Mips::ROTRV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7058 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7068 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 7078 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 7078 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 7088 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7098 /* sat_s.b */, Mips::SAT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7106 /* sat_s.d */, Mips::SAT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7114 /* sat_s.h */, Mips::SAT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7122 /* sat_s.w */, Mips::SAT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7130 /* sat_u.b */, Mips::SAT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7138 /* sat_u.d */, Mips::SAT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7146 /* sat_u.h */, Mips::SAT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7154 /* sat_u.w */, Mips::SAT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7162 /* sb */, Mips::SB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7162 /* sb */, Mips::SB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7162 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7165 /* sb16 */, Mips::SB16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7170 /* sc */, Mips::SC, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7170 /* sc */, Mips::SC_R6, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7170 /* sc */, Mips::SC_MM, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7173 /* scd */, Mips::SCD, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7173 /* scd */, Mips::SCD_R6, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7177 /* sd */, Mips::SD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7180 /* sdbbp */, Mips::SDBBP, Convert__imm_95_0, Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, {  }, },
  { 7180 /* sdbbp */, Mips::SDBBP_R6, Convert__imm_95_0, Feature_HasMips32r6, {  }, },
  { 7180 /* sdbbp */, Mips::SDBBP, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm }, },
  { 7180 /* sdbbp */, Mips::SDBBP_R6, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_Imm }, },
  { 7180 /* sdbbp */, Mips::SDBBP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 7186 /* sdbbp16 */, Mips::SDBBP16_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 7194 /* sdc1 */, Mips::SDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 7194 /* sdc1 */, Mips::SDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 7199 /* sdc2 */, Mips::SDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 7199 /* sdc2 */, Mips::SDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 7204 /* sdc3 */, Mips::SDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 7209 /* sdl */, Mips::SDL, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7213 /* sdr */, Mips::SDR, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7217 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7217 /* sdxc1 */, Mips::SDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7223 /* seb */, Mips::SebRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7223 /* seb */, Mips::SEB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7223 /* seb */, Mips::SEB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7227 /* seh */, Mips::SehRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7227 /* seh */, Mips::SEH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7227 /* seh */, Mips::SEH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7231 /* sel.d */, Mips::SEL_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7237 /* sel.s */, Mips::SEL_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7243 /* seleqz */, Mips::SELEQZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7243 /* seleqz */, Mips::SELEQZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7250 /* seleqz.d */, Mips::SELEQZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7259 /* seleqz.s */, Mips::SELEQZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7268 /* selnez */, Mips::SELNEZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7268 /* selnez */, Mips::SELNEZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7275 /* selnez.d */, Mips::SELNEZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7284 /* selnez.s */, Mips::SELNEZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7293 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7293 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7297 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7297 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7302 /* sh */, Mips::SH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7302 /* sh */, Mips::SH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7302 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7305 /* sh16 */, Mips::SH16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7310 /* shf.b */, Mips::SHF_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7316 /* shf.h */, Mips::SHF_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7322 /* shf.w */, Mips::SHF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7328 /* shilo */, Mips::SHILO, Convert__ACC64DSPAsmReg1_0__Imm1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 7334 /* shilov */, Mips::SHILOV, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7341 /* shll.ph */, Mips::SHLL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7349 /* shll.qb */, Mips::SHLL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7357 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7367 /* shll_s.w */, Mips::SHLL_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7376 /* shllv.ph */, Mips::SHLLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7385 /* shllv.qb */, Mips::SHLLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7394 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7405 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7415 /* shra.ph */, Mips::SHRA_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7423 /* shra.qb */, Mips::SHRA_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7431 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7441 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7451 /* shra_r.w */, Mips::SHRA_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7460 /* shrav.ph */, Mips::SHRAV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7469 /* shrav.qb */, Mips::SHRAV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7478 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7489 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7500 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7510 /* shrl.ph */, Mips::SHRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7518 /* shrl.qb */, Mips::SHRL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7526 /* shrlv.ph */, Mips::SHRLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7535 /* shrlv.qb */, Mips::SHRLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7544 /* sld.b */, Mips::SLD_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7550 /* sld.d */, Mips::SLD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7556 /* sld.h */, Mips::SLD_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7562 /* sld.w */, Mips::SLD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7568 /* sldi.b */, Mips::SLDI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7575 /* sldi.d */, Mips::SLDI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7582 /* sldi.h */, Mips::SLDI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7589 /* sldi.w */, Mips::SLDI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7596 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7596 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7596 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7596 /* sll */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7596 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7596 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7600 /* sll.b */, Mips::SLL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7606 /* sll.d */, Mips::SLL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7612 /* sll.h */, Mips::SLL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7618 /* sll.w */, Mips::SLL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7624 /* sll16 */, Mips::SLL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7630 /* slli.b */, Mips::SLLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7637 /* slli.d */, Mips::SLLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7644 /* slli.h */, Mips::SLLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7651 /* slli.w */, Mips::SLLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7658 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7658 /* sllv */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7658 /* sllv */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7663 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7663 /* slt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7663 /* slt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7663 /* slt */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7667 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7667 /* slti */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7667 /* slti */, Mips::SLTi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7667 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7672 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7672 /* sltiu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7672 /* sltiu */, Mips::SLTiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7672 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7678 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7678 /* sltu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7678 /* sltu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7678 /* sltu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7683 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7683 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7687 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7687 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7692 /* splat.b */, Mips::SPLAT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7700 /* splat.d */, Mips::SPLAT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7708 /* splat.h */, Mips::SPLAT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7716 /* splat.w */, Mips::SPLAT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7724 /* splati.b */, Mips::SPLATI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7733 /* splati.d */, Mips::SPLATI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7742 /* splati.h */, Mips::SPLATI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7751 /* splati.w */, Mips::SPLATI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7760 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 7760 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7767 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7774 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7774 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7774 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7774 /* sra */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7774 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7774 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7778 /* sra.b */, Mips::SRA_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7784 /* sra.d */, Mips::SRA_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7790 /* sra.h */, Mips::SRA_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7796 /* sra.w */, Mips::SRA_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7802 /* srai.b */, Mips::SRAI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7809 /* srai.d */, Mips::SRAI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7816 /* srai.h */, Mips::SRAI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7823 /* srai.w */, Mips::SRAI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7830 /* srar.b */, Mips::SRAR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7837 /* srar.d */, Mips::SRAR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7844 /* srar.h */, Mips::SRAR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7851 /* srar.w */, Mips::SRAR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7858 /* srari.b */, Mips::SRARI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7866 /* srari.d */, Mips::SRARI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7874 /* srari.h */, Mips::SRARI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7882 /* srari.w */, Mips::SRARI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7890 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7890 /* srav */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7890 /* srav */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7895 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7895 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7895 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 7895 /* srl */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7895 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7895 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7899 /* srl.b */, Mips::SRL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7905 /* srl.d */, Mips::SRL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7911 /* srl.h */, Mips::SRL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7917 /* srl.w */, Mips::SRL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7923 /* srl16 */, Mips::SRL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7929 /* srli.b */, Mips::SRLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7936 /* srli.d */, Mips::SRLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7943 /* srli.h */, Mips::SRLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7950 /* srli.w */, Mips::SRLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7957 /* srlr.b */, Mips::SRLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7964 /* srlr.d */, Mips::SRLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7971 /* srlr.h */, Mips::SRLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7978 /* srlr.w */, Mips::SRLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7985 /* srlri.b */, Mips::SRLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7993 /* srlri.d */, Mips::SRLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8001 /* srlri.h */, Mips::SRLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8009 /* srlri.w */, Mips::SRLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8017 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8017 /* srlv */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8017 /* srlv */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8022 /* ssnop */, Mips::SSNOP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8022 /* ssnop */, Mips::SSNOP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8028 /* st.b */, Mips::ST_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8033 /* st.d */, Mips::ST_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8038 /* st.h */, Mips::ST_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8043 /* st.w */, Mips::ST_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8048 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8048 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8048 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8048 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8048 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8048 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8052 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8052 /* sub.d */, Mips::FSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8058 /* sub.s */, Mips::FSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8064 /* subq.ph */, Mips::SUBQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8072 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8082 /* subq_s.w */, Mips::SUBQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8091 /* subqh.ph */, Mips::SUBQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8100 /* subqh.w */, Mips::SUBQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8108 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8119 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8129 /* subs_s.b */, Mips::SUBS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8138 /* subs_s.d */, Mips::SUBS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8147 /* subs_s.h */, Mips::SUBS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8156 /* subs_s.w */, Mips::SUBS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8165 /* subs_u.b */, Mips::SUBS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8174 /* subs_u.d */, Mips::SUBS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8183 /* subs_u.h */, Mips::SUBS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8192 /* subs_u.w */, Mips::SUBS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8201 /* subsus_u.b */, Mips::SUBSUS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8212 /* subsus_u.d */, Mips::SUBSUS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8223 /* subsus_u.h */, Mips::SUBSUS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8234 /* subsus_u.w */, Mips::SUBSUS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8245 /* subsuu_s.b */, Mips::SUBSUU_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8256 /* subsuu_s.d */, Mips::SUBSUU_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8267 /* subsuu_s.h */, Mips::SUBSUU_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8278 /* subsuu_s.w */, Mips::SUBSUU_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8289 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8289 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8289 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, 0, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8289 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8289 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8289 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8289 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8294 /* subu.ph */, Mips::SUBU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8302 /* subu.qb */, Mips::SUBU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* subu16 */, Mips::SUBU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8317 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8327 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8337 /* subuh.qb */, Mips::SUBUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8346 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8357 /* subv.b */, Mips::SUBV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8364 /* subv.d */, Mips::SUBV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8371 /* subv.h */, Mips::SUBV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8378 /* subv.w */, Mips::SUBV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8385 /* subvi.b */, Mips::SUBVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8393 /* subvi.d */, Mips::SUBVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8401 /* subvi.h */, Mips::SUBVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8409 /* subvi.w */, Mips::SUBVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8417 /* suxc1 */, Mips::SUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8417 /* suxc1 */, Mips::SUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8423 /* sw */, Mips::SWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 8423 /* sw */, Mips::SW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8423 /* sw */, Mips::SW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8423 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 8423 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 8426 /* sw16 */, Mips::SW16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 8431 /* swc1 */, Mips::SWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 8436 /* swc2 */, Mips::SWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 8436 /* swc2 */, Mips::SWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 8441 /* swc3 */, Mips::SWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 8446 /* swl */, Mips::SWL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8446 /* swl */, Mips::SWL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8450 /* swm */, Mips::SWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8454 /* swm16 */, Mips::SWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 8460 /* swm32 */, Mips::SWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8466 /* swp */, Mips::SWP_MM, Convert__RegPair2_0__Mem2_1, Feature_InMicroMips, { MCK_RegPair, MCK_Mem }, },
  { 8470 /* swr */, Mips::SWR, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8470 /* swr */, Mips::SWR_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8474 /* swxc1 */, Mips::SWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8480 /* sync */, Mips::SYNC, Convert__imm_95_0, Feature_HasMips2, {  }, },
  { 8480 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32, { MCK_Imm }, },
  { 8480 /* sync */, Mips::SYNC_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8485 /* synci */, Mips::SYNCI, Convert__MemOffsetSimm162_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_MemOffsetSimm16 }, },
  { 8491 /* synciobdma */, Mips::SYNC, Convert__imm_95_2, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8502 /* syncs */, Mips::SYNC, Convert__imm_95_6, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8508 /* syncw */, Mips::SYNC, Convert__imm_95_4, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8514 /* syncws */, Mips::SYNC, Convert__imm_95_5, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8521 /* syscall */, Mips::SYSCALL, Convert__imm_95_0, 0, {  }, },
  { 8521 /* syscall */, Mips::SYSCALL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 8521 /* syscall */, Mips::SYSCALL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8529 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8529 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8529 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8533 /* teqi */, Mips::TEQI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8533 /* teqi */, Mips::TEQI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8538 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8538 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8538 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8542 /* tgei */, Mips::TGEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8542 /* tgei */, Mips::TGEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8547 /* tgeiu */, Mips::TGEIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8547 /* tgeiu */, Mips::TGEIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8553 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8553 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8553 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8558 /* tlbp */, Mips::TLBP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8558 /* tlbp */, Mips::TLBP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8563 /* tlbr */, Mips::TLBR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8563 /* tlbr */, Mips::TLBR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8568 /* tlbwi */, Mips::TLBWI, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8568 /* tlbwi */, Mips::TLBWI_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8574 /* tlbwr */, Mips::TLBWR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8574 /* tlbwr */, Mips::TLBWR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8580 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8580 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8580 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8584 /* tlti */, Mips::TLTI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8584 /* tlti */, Mips::TLTI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8589 /* tltiu */, Mips::TTLTIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8589 /* tltiu */, Mips::TLTIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8595 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8595 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8595 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8600 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8600 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8600 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8604 /* tnei */, Mips::TNEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8604 /* tnei */, Mips::TNEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8609 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8619 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 8629 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 8629 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 8639 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8649 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8649 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8656 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8656 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8661 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8661 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8667 /* vshf.b */, Mips::VSHF_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8674 /* vshf.d */, Mips::VSHF_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8681 /* vshf.h */, Mips::VSHF_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8688 /* vshf.w */, Mips::VSHF_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8695 /* wait */, Mips::WAIT, Convert_NoOperands, Feature_NotInMicroMips, {  }, },
  { 8695 /* wait */, Mips::WAIT_MM, Convert__imm_95_0, Feature_InMicroMips, {  }, },
  { 8695 /* wait */, Mips::WAIT_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8700 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8706 /* wsbh */, Mips::WSBH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8706 /* wsbh */, Mips::WSBH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8711 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8711 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8715 /* xor.v */, Mips::XOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8721 /* xor16 */, Mips::XOR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8727 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8727 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8727 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8727 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8732 /* xori.b */, Mips::XORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 9) {
    ErrorInfo = 9;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 8; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[1791] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_HasStdEnc|Feature_NotFP64bit, 0 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 0 /* abs.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 12 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 22 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 32 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 45 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 45 /* add.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 51 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 57 /* add_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 65 /* add_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 73 /* add_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 81 /* add_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 100 /* addiupc */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 108 /* addiur1sp */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 118 /* addiur2 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 126 /* addius5 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 142 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 150 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 160 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 169 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 178 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 186 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 197 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 207 /* adds_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 216 /* adds_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 225 /* adds_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 234 /* adds_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 243 /* adds_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 252 /* adds_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 261 /* adds_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 270 /* adds_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 279 /* adds_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 288 /* adds_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 297 /* adds_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 306 /* adds_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 315 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 326 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 334 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 342 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 349 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 359 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 369 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 378 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 389 /* addv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 396 /* addv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 403 /* addv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 410 /* addv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 417 /* addvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 425 /* addvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 433 /* addvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 441 /* addvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 449 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 455 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 461 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 472 /* and.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 478 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 489 /* andi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 496 /* andi16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 503 /* append */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 510 /* asub_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 519 /* asub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 528 /* asub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 537 /* asub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 546 /* asub_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 555 /* asub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 564 /* asub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 573 /* asub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 582 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 586 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 592 /* ave_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 600 /* ave_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 608 /* ave_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 616 /* ave_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 624 /* ave_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 632 /* ave_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 640 /* ave_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 648 /* ave_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 656 /* aver_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 665 /* aver_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 674 /* aver_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 683 /* aver_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 692 /* aver_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 701 /* aver_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 710 /* aver_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 719 /* aver_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotInMicroMips, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 730 /* b16 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasCnMips, 734 /* baddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 734 /* baddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 740 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 740 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 744 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSPR2, 749 /* balign */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 762 /* bbit032 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 762 /* bbit032 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 776 /* bbit132 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 776 /* bbit132 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 784 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 787 /* bc1eqz */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 787 /* bc1eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 794 /* bc1f */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 794 /* bc1f */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 794 /* bc1f */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 799 /* bc1fl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 799 /* bc1fl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 799 /* bc1fl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 805 /* bc1nez */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 805 /* bc1nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 812 /* bc1t */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 812 /* bc1t */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 812 /* bc1t */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 817 /* bc1tl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 817 /* bc1tl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 817 /* bc1tl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 823 /* bc2eqz */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 823 /* bc2eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 830 /* bc2nez */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 830 /* bc2nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 837 /* bclr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 844 /* bclr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 851 /* bclr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 858 /* bclr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 865 /* bclri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 873 /* bclri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 881 /* bclri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 889 /* bclri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 897 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 897 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 897 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 897 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 901 /* beqc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 901 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 906 /* beql */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 906 /* beql */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 911 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 911 /* beqz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 911 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 911 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 916 /* beqz16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 916 /* beqz16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 923 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 923 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 931 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 931 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 931 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 931 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 937 /* beqzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 937 /* beqzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 943 /* bgec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 943 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 948 /* bgeuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 948 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 954 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 954 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 954 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 954 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 959 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 959 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 959 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 959 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 966 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 966 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 974 /* bgezall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 974 /* bgezall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 982 /* bgezals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 982 /* bgezals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 990 /* bgezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 990 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 996 /* bgezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 996 /* bgezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc, 1002 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1002 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1002 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1002 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1007 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1007 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1015 /* bgtzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1015 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1021 /* bgtzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1021 /* bgtzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1027 /* binsl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1035 /* binsl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1043 /* binsl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1051 /* binsl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1059 /* binsli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1068 /* binsli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1077 /* binsli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1086 /* binsli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1095 /* binsr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1103 /* binsr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1111 /* binsr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1119 /* binsr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1127 /* binsri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1136 /* binsri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1145 /* binsri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1154 /* binsri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1163 /* bitrev */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1170 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1178 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1178 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1178 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1178 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1183 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1183 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1191 /* blezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1191 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1197 /* blezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1197 /* blezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1203 /* bltc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1203 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1208 /* bltuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1208 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1214 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1214 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1214 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1214 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1219 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1219 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1219 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1219 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1226 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1226 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1234 /* bltzall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1234 /* bltzall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1242 /* bltzals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1242 /* bltzals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1250 /* bltzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1250 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1256 /* bltzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1256 /* bltzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1262 /* bmnz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1269 /* bmnzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1277 /* bmz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1283 /* bmzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1290 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1290 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 1290 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1290 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1294 /* bnec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1294 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMSA, 1299 /* bneg.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1306 /* bneg.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1313 /* bneg.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1320 /* bneg.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1327 /* bnegi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1335 /* bnegi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1343 /* bnegi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1351 /* bnegi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1359 /* bnel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1359 /* bnel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 1364 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1364 /* bnez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1364 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 1364 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1369 /* bnez16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1369 /* bnez16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1376 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1376 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1384 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1384 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1384 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1384 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1390 /* bnezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1390 /* bnezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1396 /* bnvc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1396 /* bnvc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMSA, 1401 /* bnz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1401 /* bnz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1407 /* bnz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1407 /* bnz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1413 /* bnz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1413 /* bnz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1419 /* bnz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1419 /* bnz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1425 /* bnz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1425 /* bnz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1431 /* bovc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1431 /* bovc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasDSP, 1436 /* bposge32 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasMSA, 1459 /* bsel.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1466 /* bseli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1474 /* bset.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1481 /* bset.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1488 /* bset.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1495 /* bset.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1502 /* bseti.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1510 /* bseti.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1518 /* bseti.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1526 /* bseti.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1546 /* bz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1546 /* bz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1551 /* bz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1551 /* bz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1556 /* bz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1556 /* bz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1561 /* bz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1561 /* bz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMSA, 1566 /* bz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1566 /* bz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1571 /* c.eq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1571 /* c.eq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1578 /* c.eq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1585 /* c.f.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1585 /* c.f.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1591 /* c.f.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1597 /* c.le.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1597 /* c.le.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1604 /* c.le.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1611 /* c.lt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1611 /* c.lt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1618 /* c.lt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1625 /* c.nge.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1625 /* c.nge.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1633 /* c.nge.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1641 /* c.ngl.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1641 /* c.ngl.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1649 /* c.ngl.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1657 /* c.ngle.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1657 /* c.ngle.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1666 /* c.ngle.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1675 /* c.ngt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1675 /* c.ngt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1683 /* c.ngt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1691 /* c.ole.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1691 /* c.ole.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1699 /* c.ole.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1707 /* c.olt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1707 /* c.olt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1715 /* c.olt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1723 /* c.seq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1723 /* c.seq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1731 /* c.seq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1739 /* c.sf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1739 /* c.sf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1746 /* c.sf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1753 /* c.ueq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1753 /* c.ueq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1761 /* c.ueq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1769 /* c.ule.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1769 /* c.ule.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1777 /* c.ule.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1785 /* c.ult.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1785 /* c.ult.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1793 /* c.ult.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotFP64bit, 1801 /* c.un.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsFP64bit, 1801 /* c.un.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1808 /* c.un.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 1815 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1815 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1815 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 1821 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 1830 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 1830 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 1839 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 1839 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 1839 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 1839 /* ceil.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 1848 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1857 /* ceq.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1863 /* ceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1869 /* ceq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1875 /* ceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1881 /* ceqi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1888 /* ceqi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1895 /* ceqi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1902 /* ceqi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1909 /* cfc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 1909 /* cfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1914 /* cfcmsa */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 1914 /* cfcmsa */, MCK_MSACtrlAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 1921 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 1921 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 1926 /* cins32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 1926 /* cins32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1933 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1941 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 1949 /* cle_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1957 /* cle_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1965 /* cle_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1973 /* cle_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1981 /* cle_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1989 /* cle_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 1997 /* cle_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2005 /* cle_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2013 /* clei_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2022 /* clei_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2031 /* clei_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2040 /* clei_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2049 /* clei_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2058 /* clei_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2067 /* clei_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2076 /* clei_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2085 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2085 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2085 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2089 /* clt_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2097 /* clt_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2105 /* clt_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2113 /* clt_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2121 /* clt_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2129 /* clt_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2137 /* clt_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2145 /* clt_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2153 /* clti_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2162 /* clti_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2171 /* clti_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2180 /* clti_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2189 /* clti_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2198 /* clti_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2207 /* clti_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2216 /* clti_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2225 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2225 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2225 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2233 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2233 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2242 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2251 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2251 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2260 /* cmp.eq.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2270 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2279 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2279 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2288 /* cmp.le.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2298 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2307 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2307 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2316 /* cmp.lt.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2326 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2335 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2335 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2345 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2355 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2355 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2365 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2375 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2375 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2385 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2395 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2395 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2405 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2415 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2415 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2426 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2437 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2437 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2448 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2459 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2459 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2470 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2481 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2481 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2491 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2501 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2501 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2511 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2521 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2521 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2531 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2541 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2541 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2551 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2561 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2561 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2570 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2579 /* cmpgdu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2592 /* cmpgdu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2605 /* cmpgdu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2618 /* cmpgu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2630 /* cmpgu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2642 /* cmpgu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2659 /* cmpu.eq.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2670 /* cmpu.le.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2681 /* cmpu.lt.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 2692 /* copy_s.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2692 /* copy_s.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 2701 /* copy_s.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 2701 /* copy_s.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2710 /* copy_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2710 /* copy_s.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2719 /* copy_s.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2719 /* copy_s.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2728 /* copy_u.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2728 /* copy_u.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 2737 /* copy_u.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 2737 /* copy_u.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2746 /* copy_u.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2746 /* copy_u.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2755 /* copy_u.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2755 /* copy_u.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2764 /* ctc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2764 /* ctc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 2769 /* ctcmsa */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 2769 /* ctcmsa */, MCK_MSACtrlAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2776 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2784 /* cvt.d.s */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2784 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2784 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2784 /* cvt.d.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2792 /* cvt.d.w */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2792 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2792 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2792 /* cvt.d.w */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2, 2800 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2, 2808 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2, 2808 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2816 /* cvt.s.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2816 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2816 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2816 /* cvt.s.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2824 /* cvt.s.l */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2824 /* cvt.s.l */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2832 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2840 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2840 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2840 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2840 /* cvt.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 2848 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2856 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2856 /* dadd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2856 /* dadd */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2856 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2861 /* daddi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2861 /* daddi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2867 /* daddiu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2867 /* daddiu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2874 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 2874 /* daddu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2874 /* daddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 2874 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2880 /* dahi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2885 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2892 /* dati */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2897 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2902 /* dbitswap */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 2911 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2911 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 2916 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2916 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2921 /* ddiv */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2921 /* ddiv */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2926 /* ddivu */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 2926 /* ddivu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2938 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2943 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2949 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2955 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 2955 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2958 /* dins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2963 /* dinsm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 2969 /* dinsu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 2975 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 2975 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2975 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 2979 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 2979 /* div.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2985 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2991 /* div_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2999 /* div_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3007 /* div_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3015 /* div_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3023 /* div_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3031 /* div_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3039 /* div_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3047 /* div_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 3055 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3055 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3055 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3060 /* dli */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3064 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA|Feature_HasMips64, 3064 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA|Feature_HasMips64, 3064 /* dlsa */, MCK_LSAImm, 8 /* 3 */ },
  { 0, 3069 /* dmfc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3069 /* dmfc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3075 /* dmfc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3075 /* dmfc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3081 /* dmfc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3081 /* dmfc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3087 /* dmod */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3092 /* dmodu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3098 /* dmtc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3098 /* dmtc0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3104 /* dmtc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3104 /* dmtc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3110 /* dmtc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3110 /* dmtc2 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3116 /* dmuh */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3121 /* dmuhu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3127 /* dmul */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3127 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3127 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3132 /* dmult */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3138 /* dmultu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3145 /* dmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3151 /* dotp_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3160 /* dotp_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3169 /* dotp_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3178 /* dotp_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3187 /* dotp_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3196 /* dotp_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 3205 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3205 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 3214 /* dpadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3224 /* dpadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3234 /* dpadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3244 /* dpadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3254 /* dpadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3264 /* dpadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 3274 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3274 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3286 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3286 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3298 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3298 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3311 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3311 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3325 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3325 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3336 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3336 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3347 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3347 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasCnMips, 3357 /* dpop */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3357 /* dpop */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 3362 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3362 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3371 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3371 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3383 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3383 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3395 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3395 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3408 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3408 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3422 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3422 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3433 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3433 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 3444 /* dpsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3454 /* dpsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3464 /* dpsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3474 /* dpsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3484 /* dpsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3494 /* dpsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 3504 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3504 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3514 /* drotr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3514 /* drotr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3520 /* drotr32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3520 /* drotr32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3528 /* drotrv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3528 /* drotrv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3535 /* dsbh */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3540 /* dshd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3545 /* dsll */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3545 /* dsll */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3545 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3545 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3550 /* dsll32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3550 /* dsll32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3557 /* dsllv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3557 /* dsllv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3563 /* dsra */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3563 /* dsra */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3563 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3563 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3568 /* dsra32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3568 /* dsra32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3575 /* dsrav */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3575 /* dsrav */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3581 /* dsrl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3581 /* dsrl */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3581 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3581 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3586 /* dsrl32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3586 /* dsrl32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3593 /* dsrlv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3593 /* dsrlv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3599 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3599 /* dsub */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3599 /* dsub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3599 /* dsub */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3599 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3599 /* dsub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3604 /* dsubi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3604 /* dsubi */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3604 /* dsubi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3604 /* dsubi */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3610 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3610 /* dsubu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3610 /* dsubu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3610 /* dsubu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 3610 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3610 /* dsubu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3620 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3620 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3628 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 3628 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 3632 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3632 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3637 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3637 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3644 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3644 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3652 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3652 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3658 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3658 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3665 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3665 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3674 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3674 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3684 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3684 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3693 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3693 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3701 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3701 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3711 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3711 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3722 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3722 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasCnMips, 3732 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3732 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3737 /* exts32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3737 /* exts32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3744 /* fadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3751 /* fadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3758 /* fcaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3765 /* fcaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3772 /* fceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3779 /* fceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3786 /* fclass.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3795 /* fclass.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3804 /* fcle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3811 /* fcle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3818 /* fclt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3825 /* fclt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3832 /* fcne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3839 /* fcne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3846 /* fcor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3853 /* fcor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3860 /* fcueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3868 /* fcueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3876 /* fcule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3884 /* fcule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3892 /* fcult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3900 /* fcult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3908 /* fcun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3915 /* fcun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3922 /* fcune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3930 /* fcune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3938 /* fdiv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3945 /* fdiv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3952 /* fexdo.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3960 /* fexdo.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3968 /* fexp2.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3976 /* fexp2.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 3984 /* fexupl.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 3993 /* fexupl.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4002 /* fexupr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4011 /* fexupr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4020 /* ffint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4030 /* ffint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4040 /* ffint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4050 /* ffint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4060 /* ffql.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4067 /* ffql.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4074 /* ffqr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4081 /* ffqr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4088 /* fill.b */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4088 /* fill.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 4095 /* fill.d */, MCK_GPR64AsmReg, 2 /* 1 */ },
  { Feature_HasMSA|Feature_HasMips64, 4095 /* fill.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4102 /* fill.h */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4102 /* fill.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4109 /* fill.w */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasMSA, 4109 /* fill.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4116 /* flog2.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4124 /* flog2.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 4132 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 4142 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 4142 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 4152 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 4152 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 4152 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 4152 /* floor.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 4162 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4172 /* fmadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4180 /* fmadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4188 /* fmax.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4195 /* fmax.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4202 /* fmax_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4211 /* fmax_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4220 /* fmin.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4227 /* fmin.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4234 /* fmin_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4243 /* fmin_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4252 /* fmsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4260 /* fmsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4268 /* fmul.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4275 /* fmul.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4282 /* frcp.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4289 /* frcp.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4296 /* frint.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4304 /* frint.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4312 /* frsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4321 /* frsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4330 /* fsaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4337 /* fsaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4344 /* fseq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4351 /* fseq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4358 /* fsle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4365 /* fsle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4372 /* fslt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4379 /* fslt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4386 /* fsne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4393 /* fsne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4400 /* fsor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4407 /* fsor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4414 /* fsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4422 /* fsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4430 /* fsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4437 /* fsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4444 /* fsueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4452 /* fsueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4460 /* fsule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4468 /* fsule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4476 /* fsult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4484 /* fsult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4492 /* fsun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4499 /* fsun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4506 /* fsune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4514 /* fsune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4522 /* ftint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4532 /* ftint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4542 /* ftint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4552 /* ftint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4562 /* ftq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4568 /* ftq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4574 /* ftrunc_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4585 /* ftrunc_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4596 /* ftrunc_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4607 /* ftrunc_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4618 /* hadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4627 /* hadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4636 /* hadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4645 /* hadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4654 /* hadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4663 /* hadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4672 /* hsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4681 /* hsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4690 /* hsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4699 /* hsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4708 /* hsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4717 /* hsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4726 /* ilvev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4734 /* ilvev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4742 /* ilvev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4750 /* ilvev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4758 /* ilvl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4765 /* ilvl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4772 /* ilvl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4779 /* ilvl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4786 /* ilvod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4794 /* ilvod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4802 /* ilvod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4810 /* ilvod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4818 /* ilvr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4825 /* ilvr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4832 /* ilvr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 4839 /* ilvr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 4846 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4846 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4850 /* insert.b */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4850 /* insert.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA|Feature_HasMips64, 4859 /* insert.d */, MCK_GPR64AsmReg, 16 /* 4 */ },
  { Feature_HasMSA|Feature_HasMips64, 4859 /* insert.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4868 /* insert.h */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4868 /* insert.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 4877 /* insert.w */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasMSA, 4877 /* insert.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 4886 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 4891 /* insve.b */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4899 /* insve.d */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4907 /* insve.h */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasMSA, 4915 /* insve.w */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { 0, 4923 /* j */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4923 /* j */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 4925 /* jal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 4925 /* jal */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 4925 /* jal */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4929 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 4929 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 4929 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4929 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips32, 4934 /* jalr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 4934 /* jalr.hb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4948 /* jalrs */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4954 /* jalrs16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 4967 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 4967 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4972 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4972 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4978 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4978 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc, 4982 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4982 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips32r6, 4982 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 4982 /* jr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 4985 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 4985 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 4991 /* jr16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5006 /* jrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5010 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5010 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5010 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5013 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5013 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5013 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5013 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5016 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5016 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5016 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5016 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5020 /* lbu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5020 /* lbu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasDSP, 5026 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5031 /* ld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5031 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5034 /* ld.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5034 /* ld.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5039 /* ld.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5039 /* ld.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5044 /* ld.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5044 /* ld.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5049 /* ld.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5049 /* ld.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 5054 /* ldc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 5054 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 5054 /* ldc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 5054 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5059 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5059 /* ldc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5059 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5059 /* ldc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5064 /* ldc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5064 /* ldc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 5069 /* ldi.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5075 /* ldi.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5081 /* ldi.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 5087 /* ldi.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5093 /* ldl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5093 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5097 /* ldpc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5097 /* ldpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5102 /* ldr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5102 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5106 /* ldxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5106 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5106 /* ldxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5106 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 5112 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5112 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5112 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5112 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5115 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5115 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5115 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5115 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5119 /* lhu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5119 /* lhu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasDSP, 5125 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { 0, 5129 /* li */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5132 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5137 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5137 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5137 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5137 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5137 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5137 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5140 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5140 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5140 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5140 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5144 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5144 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5144 /* lsa */, MCK_LSAImm, 8 /* 3 */ },
  { Feature_HasStdEnc, 5148 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5148 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5152 /* luxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5152 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5152 /* luxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5152 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5158 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5158 /* lw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5158 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5158 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5158 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5158 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5158 /* lw */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5161 /* lw16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5161 /* lw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5166 /* lwc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5166 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5171 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5171 /* lwc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5171 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5171 /* lwc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5176 /* lwc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5176 /* lwc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5181 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5181 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5181 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5181 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5185 /* lwm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5185 /* lwm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 5189 /* lwm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips, 5189 /* lwm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 5195 /* lwm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5195 /* lwm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 5201 /* lwp */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5201 /* lwp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5205 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5205 /* lwpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5210 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5210 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5210 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5210 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5214 /* lwu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5214 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5214 /* lwu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5214 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5218 /* lwupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5218 /* lwupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasDSP, 5224 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5228 /* lwxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5228 /* lwxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5234 /* lwxs */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5239 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5239 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5239 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5239 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5244 /* madd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5244 /* madd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 5251 /* madd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMSA, 5258 /* madd_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5267 /* madd_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5276 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5284 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5292 /* maddr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5302 /* maddr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5312 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5312 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5312 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5312 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 5318 /* maddv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5326 /* maddv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5334 /* maddv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5342 /* maddv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 5350 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5350 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5362 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5362 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5374 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5374 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5387 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5387 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5400 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5406 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5412 /* max_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5420 /* max_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5428 /* max_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5436 /* max_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5444 /* max_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5452 /* max_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5460 /* max_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5468 /* max_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5476 /* max_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5484 /* max_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5492 /* max_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5500 /* max_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5508 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5515 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5522 /* maxi_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5531 /* maxi_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5540 /* maxi_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5549 /* maxi_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5558 /* maxi_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5567 /* maxi_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5576 /* maxi_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5585 /* maxi_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 5594 /* mfc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5594 /* mfc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5599 /* mfc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 5599 /* mfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5604 /* mfc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5604 /* mfc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 5609 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 5609 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 5609 /* mfhc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 5609 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5615 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5615 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5615 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5615 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5615 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5620 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5620 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5620 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5620 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5620 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5625 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5631 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5637 /* min_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5645 /* min_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5653 /* min_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5661 /* min_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5669 /* min_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5677 /* min_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5685 /* min_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5693 /* min_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5701 /* min_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5709 /* min_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5717 /* min_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5725 /* min_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5733 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5740 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5747 /* mini_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5756 /* mini_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5765 /* mini_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5774 /* mini_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5783 /* mini_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5792 /* mini_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5801 /* mini_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5810 /* mini_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5819 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5823 /* mod_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5831 /* mod_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5839 /* mod_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5847 /* mod_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5855 /* mod_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5863 /* mod_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5871 /* mod_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 5879 /* mod_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 5887 /* modsub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5894 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 5899 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 5899 /* mov.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5905 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 5911 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5911 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit, 5911 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 5916 /* move.v */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5923 /* movep */, MCK_GPRMM16AsmRegMoveP, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 5923 /* movep */, MCK_MovePRegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5929 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5929 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5929 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 5929 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5934 /* movf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5934 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5934 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5934 /* movf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5941 /* movf.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5941 /* movf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5948 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 5948 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5953 /* movn.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5953 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5953 /* movn.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5953 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5960 /* movn.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5960 /* movn.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5967 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5967 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5967 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 5967 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5972 /* movt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5972 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5972 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5972 /* movt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5979 /* movt.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5979 /* movt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5986 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 5986 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5991 /* movz.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5991 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5991 /* movz.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5991 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5998 /* movz.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 5998 /* movz.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6005 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6005 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6005 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6005 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6010 /* msub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6010 /* msub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6017 /* msub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMSA, 6024 /* msub_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6033 /* msub_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6042 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6050 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6058 /* msubr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6068 /* msubr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6078 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6078 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6078 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6078 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMSA, 6084 /* msubv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6092 /* msubv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6100 /* msubv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6108 /* msubv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6116 /* mtc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 6116 /* mtc0 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6121 /* mtc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 6121 /* mtc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6126 /* mtc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6126 /* mtc2 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 6131 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotFP64bit, 6131 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 6131 /* mthc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_IsFP64bit, 6131 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6137 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6137 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6137 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6137 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6142 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6142 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6149 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6149 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6149 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6149 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 6154 /* mtm0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6159 /* mtm1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6164 /* mtm2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6169 /* mtp0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6174 /* mtp1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6179 /* mtp2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6184 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6188 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6193 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6193 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6193 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6193 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6193 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 6197 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6197 /* mul.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6203 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 6210 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6216 /* mul_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6224 /* mul_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6232 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6241 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6255 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6269 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6284 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6299 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6310 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6320 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6330 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6339 /* mulr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6348 /* mulr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6357 /* mulsa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 6357 /* mulsa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6368 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6368 /* mulsaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6382 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6382 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6382 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6382 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6387 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6387 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6387 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6387 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6393 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6398 /* mulv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6405 /* mulv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6412 /* mulv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6419 /* mulv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6426 /* neg */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 6430 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 6430 /* neg.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6436 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6442 /* negu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6442 /* negu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6447 /* nloc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6454 /* nloc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6461 /* nloc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6468 /* nloc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6475 /* nlzc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6482 /* nlzc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6489 /* nlzc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6496 /* nlzc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6503 /* nmadd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6503 /* nmadd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6511 /* nmadd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6519 /* nmsub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6519 /* nmsub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 6527 /* nmsub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 6539 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6539 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6543 /* nor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6549 /* nori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 6556 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6560 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6566 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6566 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6566 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6566 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6566 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6566 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6569 /* or.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6574 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6579 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6579 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6579 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6579 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6583 /* ori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6589 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6605 /* pckev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6613 /* pckev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6621 /* pckev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6629 /* pckev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6637 /* pckod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6645 /* pckod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6653 /* pckod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6661 /* pckod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 6669 /* pcnt.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6676 /* pcnt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6683 /* pcnt.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 6690 /* pcnt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6697 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6705 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 6713 /* pop */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6713 /* pop */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6717 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6730 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6743 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6758 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6774 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6789 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6805 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6819 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6834 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6848 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 6863 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6875 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 6890 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6907 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6919 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6932 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6947 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 6963 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6963 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 6963 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSPR2, 6968 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6976 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6987 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6993 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6993 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_InMicroMips, 6993 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6993 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6999 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7007 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7015 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7024 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7033 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7040 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7047 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7047 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7047 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7047 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7052 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7052 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 7058 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 7068 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 7068 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 7078 /* round.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 7078 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 7078 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 7078 /* round.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 7088 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7098 /* sat_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7106 /* sat_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7114 /* sat_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7122 /* sat_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7130 /* sat_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7138 /* sat_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7146 /* sat_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7154 /* sat_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7162 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7162 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7162 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7162 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7165 /* sb16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7165 /* sb16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7170 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7170 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7170 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7170 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7170 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7170 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7173 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7173 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7173 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7173 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7177 /* sd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7177 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 7194 /* sdc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2, 7194 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 7194 /* sdc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2, 7194 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7199 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7199 /* sdc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7199 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7199 /* sdc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7204 /* sdc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7204 /* sdc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7209 /* sdl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7209 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7213 /* sdr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7213 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7217 /* sdxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7217 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 7217 /* sdxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 7217 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7223 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7223 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7227 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7227 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7231 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7237 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7243 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7243 /* seleqz */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7250 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7259 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7268 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7268 /* selnez */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7275 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7284 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7293 /* seq */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7293 /* seq */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7297 /* seqi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7297 /* seqi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7302 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7302 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7302 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7302 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7305 /* sh16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7305 /* sh16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMSA, 7310 /* shf.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7316 /* shf.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7322 /* shf.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7328 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7334 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7334 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 7341 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7349 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7357 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7367 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7376 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7385 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7394 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7405 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7415 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7423 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7431 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7441 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7451 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7460 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7469 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7478 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7489 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7500 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7510 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7518 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7526 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7535 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7544 /* sld.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7544 /* sld.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7550 /* sld.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7550 /* sld.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7556 /* sld.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7556 /* sld.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7562 /* sld.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7562 /* sld.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7568 /* sldi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7575 /* sldi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7582 /* sldi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7589 /* sldi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7596 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7596 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7596 /* sll */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7596 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7596 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7600 /* sll.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7606 /* sll.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7612 /* sll.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7618 /* sll.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7624 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7630 /* slli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7637 /* slli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7644 /* slli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7651 /* slli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7658 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7658 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7663 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7663 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7663 /* slt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7667 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7667 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7672 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7672 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7678 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7678 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7678 /* sltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7683 /* sne */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7683 /* sne */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7687 /* snei */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7687 /* snei */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7692 /* splat.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7692 /* splat.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7700 /* splat.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7700 /* splat.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7708 /* splat.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7708 /* splat.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7716 /* splat.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasMSA, 7716 /* splat.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7724 /* splati.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7733 /* splati.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7742 /* splati.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7751 /* splati.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 7760 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 7760 /* sqrt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 7767 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7774 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7774 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7774 /* sra */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7774 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7774 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7778 /* sra.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7784 /* sra.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7790 /* sra.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7796 /* sra.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7802 /* srai.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7809 /* srai.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7816 /* srai.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7823 /* srai.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7830 /* srar.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7837 /* srar.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7844 /* srar.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7851 /* srar.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7858 /* srari.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7866 /* srari.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7874 /* srari.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7882 /* srari.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7890 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7890 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7895 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7895 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7895 /* srl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7895 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7895 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7899 /* srl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7905 /* srl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7911 /* srl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7917 /* srl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7923 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7929 /* srli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7936 /* srli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7943 /* srli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7950 /* srli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7957 /* srlr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7964 /* srlr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7971 /* srlr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7978 /* srlr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 7985 /* srlri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 7993 /* srlri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8001 /* srlri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8009 /* srlri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8017 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8017 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8028 /* st.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8028 /* st.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 8033 /* st.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8033 /* st.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 8038 /* st.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8038 /* st.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 8043 /* st.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasMSA, 8043 /* st.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 8048 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8048 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8048 /* sub */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8048 /* sub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc, 8048 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8048 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8048 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8048 /* sub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit, 8052 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8052 /* sub.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 8058 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8064 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8072 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8082 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8091 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8100 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8108 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8119 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8129 /* subs_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8138 /* subs_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8147 /* subs_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8156 /* subs_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8165 /* subs_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8174 /* subs_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8183 /* subs_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8192 /* subs_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8201 /* subsus_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8212 /* subsus_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8223 /* subsus_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8234 /* subsus_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8245 /* subsuu_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8256 /* subsuu_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8267 /* subsuu_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8278 /* subsuu_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8289 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8289 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8289 /* subu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8289 /* subu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8289 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8289 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8289 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8289 /* subu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasDSPR2, 8294 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8302 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8310 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8317 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8327 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8337 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8346 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8357 /* subv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8364 /* subv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8371 /* subv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8378 /* subv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8385 /* subvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8393 /* subvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8401 /* subvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8409 /* subvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8417 /* suxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8417 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8417 /* suxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8417 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 8423 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8423 /* sw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8423 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8423 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8423 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8423 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8426 /* sw16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 8426 /* sw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc, 8431 /* swc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8431 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8436 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8436 /* swc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8436 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8436 /* swc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8441 /* swc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8441 /* swc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8446 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8446 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8446 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8446 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8450 /* swm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8450 /* swm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 8454 /* swm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips, 8454 /* swm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 8460 /* swm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8460 /* swm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 8466 /* swp */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8466 /* swp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8470 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8470 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8470 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8470 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8474 /* swxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6, 8474 /* swxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 8485 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_HasMips2, 8529 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8529 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8529 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8533 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8533 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8538 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8538 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8538 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8542 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8542 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8547 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8547 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8553 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8553 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8553 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2, 8580 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8580 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8580 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8584 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8584 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8589 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8589 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2, 8595 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8595 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8595 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2, 8600 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8600 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8600 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8604 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8604 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8609 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8619 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit, 8619 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 8629 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotFP64bit, 8629 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 8629 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsFP64bit, 8629 /* trunc.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2, 8639 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8649 /* v3mulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8649 /* v3mulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8656 /* vmm0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8656 /* vmm0 */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8661 /* vmulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8661 /* vmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8667 /* vshf.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8674 /* vshf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8681 /* vshf.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 8688 /* vshf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8700 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 8706 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8706 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8711 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8711 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8711 /* xor */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8711 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8711 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8711 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8715 /* xor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8721 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8727 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8727 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8727 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8727 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMSA, 8732 /* xori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACC64DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_AFGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_CCRAsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP2AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP3AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FCCAsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGRH32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegMoveP:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegZero:
    return parseAnyRegister(Operands);
  case MCK_HI32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_HWRegsAsmReg:
    return parseAnyRegister(Operands);
  case MCK_LO32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSA128AsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSACtrlAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MicroMipsMem:
    return parseMemOperand(Operands);
  case MCK_MicroMipsMemSP:
    return parseMemOperand(Operands);
  case MCK_InvNum:
    return parseInvNum(Operands);
  case MCK_JumpTarget:
    return parseJumpTarget(Operands);
  case MCK_MemOffsetSimm11:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm16:
    return parseMemOperand(Operands);
  case MCK_MemOffsetUimm4:
    return parseMemOperand(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  case MCK_MovePRegPair:
    return parseMovePRegPair(Operands);
  case MCK_RegList16:
    return parseRegisterList(Operands);
  case MCK_RegList:
    return parseRegisterList(Operands);
  case MCK_RegPair:
    return parseRegisterPair(Operands);
  case MCK_LSAImm:
    return parseLSAImm(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+1791, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

