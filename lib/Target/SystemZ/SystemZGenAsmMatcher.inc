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
enum SubtargetFeatureFlag : uint16_t {
  Feature_FeatureDistinctOps = (1ULL << 0),
  Feature_FeatureLoadStoreOnCond = (1ULL << 5),
  Feature_FeatureHighWord = (1ULL << 3),
  Feature_FeatureFPExtension = (1ULL << 1),
  Feature_FeaturePopulationCount = (1ULL << 7),
  Feature_FeatureFastSerialization = (1ULL << 2),
  Feature_FeatureInterlockedAccess1 = (1ULL << 4),
  Feature_FeatureMiscellaneousExtensions = (1ULL << 6),
  Feature_FeatureTransactionalExecution = (1ULL << 9),
  Feature_FeatureProcessorAssist = (1ULL << 8),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeatureHighWord: return "high-word";
  case Feature_FeatureFPExtension: return "fp-extension";
  case Feature_FeaturePopulationCount: return "population-count";
  case Feature_FeatureFastSerialization: return "fast-serialization";
  case Feature_FeatureInterlockedAccess1: return "interlocked-access1";
  case Feature_FeatureMiscellaneousExtensions: return "miscellaneous-extensions";
  case Feature_FeatureTransactionalExecution: return "transactional-execution";
  case Feature_FeatureProcessorAssist: return "processor-assist";
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
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0__S32Imm1_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR641_0__GR641_1__Tie0__Tie1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__GR321_0,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__BDAddr64Disp122_0,
  Convert_NoOperands,
  Convert__GRH321_0__U16Imm1_1,
  Convert__GR321_0__U16Imm1_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand&>(*Operands[*(p + 1)]).addAccessRegOperands(Inst, 1);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addAccessRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ADDR128' class
  if (Kind == MCK_ADDR128) {
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR32' class
  if (Kind == MCK_ADDR32) {
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR64' class
  if (Kind == MCK_ADDR64) {
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AccessReg' class
  if (Kind == MCK_AccessReg) {
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp12' class
  if (Kind == MCK_BDAddr32Disp12) {
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp20' class
  if (Kind == MCK_BDAddr32Disp20) {
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp12' class
  if (Kind == MCK_BDAddr64Disp12) {
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp20' class
  if (Kind == MCK_BDAddr64Disp20) {
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDLAddr64Disp12Len8' class
  if (Kind == MCK_BDLAddr64Disp12Len8) {
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp12' class
  if (Kind == MCK_BDXAddr64Disp12) {
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp20' class
  if (Kind == MCK_BDXAddr64Disp20) {
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP128' class
  if (Kind == MCK_FP128) {
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP32' class
  if (Kind == MCK_FP32) {
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP64' class
  if (Kind == MCK_FP64) {
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR128' class
  if (Kind == MCK_GR128) {
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR32' class
  if (Kind == MCK_GR32) {
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR64' class
  if (Kind == MCK_GR64) {
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GRH32' class
  if (Kind == MCK_GRH32) {
    if (Operand.isGRH32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GRX32' class
  if (Kind == MCK_GRX32) {
    if (Operand.isGRX32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel16' class
  if (Kind == MCK_PCRel16) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel32' class
  if (Kind == MCK_PCRel32) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRelTLS16' class
  if (Kind == MCK_PCRelTLS16) {
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRelTLS32' class
  if (Kind == MCK_PCRelTLS32) {
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S32Imm' class
  if (Kind == MCK_S32Imm) {
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S8Imm' class
  if (Kind == MCK_S8Imm) {
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U32Imm' class
  if (Kind == MCK_U32Imm) {
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U8Imm' class
  if (Kind == MCK_U8Imm) {
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SystemZAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  if (((FB & SystemZ::FeatureDistinctOps) != 0))
    Features |= Feature_FeatureDistinctOps;
  if (((FB & SystemZ::FeatureLoadStoreOnCond) != 0))
    Features |= Feature_FeatureLoadStoreOnCond;
  if (((FB & SystemZ::FeatureHighWord) != 0))
    Features |= Feature_FeatureHighWord;
  if (((FB & SystemZ::FeatureFPExtension) != 0))
    Features |= Feature_FeatureFPExtension;
  if (((FB & SystemZ::FeaturePopulationCount) != 0))
    Features |= Feature_FeaturePopulationCount;
  if (((FB & SystemZ::FeatureFastSerialization) != 0))
    Features |= Feature_FeatureFastSerialization;
  if (((FB & SystemZ::FeatureInterlockedAccess1) != 0))
    Features |= Feature_FeatureInterlockedAccess1;
  if (((FB & SystemZ::FeatureMiscellaneousExtensions) != 0))
    Features |= Feature_FeatureMiscellaneousExtensions;
  if (((FB & SystemZ::FeatureTransactionalExecution) != 0))
    Features |= Feature_FeatureTransactionalExecution;
  if (((FB & SystemZ::FeatureProcessorAssist) != 0))
    Features |= Feature_FeatureProcessorAssist;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\005aghik\003agr\004agrk\004agsi\002ah\003ahi\004ahik\003ahy\003"
    "aih\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005alg"
    "fi\005algfr\007alghsik\004algr\005algrk\006alhsik\003alr\004alrk\003aly"
    "\002ar\003ark\003asi\004axbr\002ay\004basr\003bcr\003ber\004bher\003bhr"
    "\004bler\004blhr\003blr\004bner\005bnher\004bnhr\005bnler\005bnlhr\004b"
    "nlr\004bnor\003bor\002br\004bras\005brasl\003brc\004brcl\004brct\005brc"
    "tg\001c\003cdb\004cdbr\005cdfbr\005cdgbr\006cdlfbr\006cdlgbr\003ceb\004"
    "cebr\005cefbr\005cegbr\006celfbr\006celgbr\005cfdbr\005cfebr\003cfi\005"
    "cfxbr\002cg\005cgdbr\005cgebr\003cgf\004cgfi\004cgfr\005cgfrl\003cgh\004"
    "cghi\005cghrl\005cghsi\004cgij\005cgije\005cgijh\006cgijhe\005cgijl\006"
    "cgijle\006cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgijnl\007cgijnle\007"
    "cgijnlh\003cgr\004cgrj\005cgrje\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006"
    "cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004"
    "cgrl\005cgxbr\002ch\003chf\005chhsi\003chi\004chrl\004chsi\003chy\003ci"
    "h\003cij\004cije\004cijh\005cijhe\004cijl\005cijle\005cijlh\005cijne\005"
    "cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh\002cl\003clc\006clfdbr\006"
    "clfebr\006clfhsi\004clfi\006clfxbr\003clg\006clgdbr\006clgebr\004clgf\005"
    "clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgij\006clgije\006clgi"
    "jh\007clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010"
    "clgijnhe\007clgijnl\010clgijnle\010clgijnlh\004clgr\005clgrj\006clgrje\006"
    "clgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh"
    "\010clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\006clgxbr\004c"
    "lhf\006clhhsi\005clhrl\003cli\004clih\004clij\005clije\005clijh\006clij"
    "he\005clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijn"
    "l\007clijnle\007clijnlh\004cliy\003clr\004clrj\005clrje\005clrjh\006clr"
    "jhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clrj"
    "nl\007clrjnle\007clrjnlh\004clrl\004clst\003cly\005cpsdr\002cr\003crj\004"
    "crje\004crjh\005crjhe\004crjl\005crjle\005crjlh\005crjne\005crjnh\006cr"
    "jnhe\005crjnl\006crjnle\006crjnlh\003crl\002cs\003csg\003csy\004cxbr\005"
    "cxfbr\005cxgbr\006cxlfbr\006cxlgbr\002cy\003ddb\004ddbr\003deb\004debr\002"
    "dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005dsgfr\004dsgr\004dxbr\003ear"
    "\004etnd\005fidbr\006fidbra\005fiebr\006fiebra\005fixbr\006fixbra\005fl"
    "ogr\002ic\003icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipm"
    "\001j\002je\002jg\003jge\003jgh\004jghe\003jgl\004jgle\004jglh\004jgne\004"
    "jgnh\005jgnhe\004jgnl\005jgnle\005jgnlh\004jgno\003jgo\002jh\003jhe\002"
    "jl\003jle\003jlh\003jne\003jnh\004jnhe\003jnl\004jnle\004jnlh\003jno\002"
    "jo\001l\002la\003laa\004laag\004laal\005laalg\003lan\004lang\003lao\004"
    "laog\004larl\003lax\004laxg\003lay\002lb\003lbh\003lbr\005lcdbr\005lceb"
    "r\005lcgfr\004lcgr\003lcr\005lcxbr\002ld\004ldeb\005ldebr\004ldgr\003ld"
    "r\005ldxbr\006ldxbra\003ldy\002le\005ledbr\006ledbra\003ler\005lexbr\006"
    "lexbra\003ley\003lfh\002lg\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004lgf"
    "r\005lgfrl\003lgh\004lghi\004lghr\005lghrl\003lgr\004lgrl\002lh\003lhh\003"
    "lhi\003lhr\004lhrl\003lhy\003llc\004llch\004llcr\004llgc\005llgcr\004ll"
    "gf\005llgfr\006llgfrl\004llgh\005llghr\006llghrl\003llh\004llhh\004llhr"
    "\005llhrl\005llihf\005llihh\005llihl\005llilf\005llilh\005llill\003lmg\005"
    "lndbr\005lnebr\005lngfr\004lngr\003lnr\005lnxbr\003loc\004loce\004locg\005"
    "locge\005locgh\006locghe\005locgl\006locgle\006locglh\006locgne\006locg"
    "nh\007locgnhe\006locgnl\007locgnle\007locgnlh\006locgno\005locgo\005loc"
    "gr\006locgre\006locgrh\007locgrhe\006locgrl\007locgrle\007locgrlh\007lo"
    "cgrne\007locgrnh\010locgrnhe\007locgrnl\010locgrnle\010locgrnlh\007locg"
    "rno\006locgro\004loch\005loche\004locl\005locle\005loclh\005locne\005lo"
    "cnh\006locnhe\005locnl\006locnle\006locnlh\005locno\004loco\004locr\005"
    "locre\005locrh\006locrhe\005locrl\006locrle\006locrlh\006locrne\006locr"
    "nh\007locrnhe\006locrnl\007locrnle\007locrnlh\006locrno\005locro\005lpd"
    "br\005lpebr\005lpgfr\004lpgr\003lpr\005lpxbr\002lr\003lrl\003lrv\004lrv"
    "g\005lrvgr\004lrvr\002lt\005ltdbr\005ltebr\003ltg\004ltgf\005ltgfr\004l"
    "tgr\003ltr\005ltxbr\004lxdb\005lxdbr\004lxeb\005lxebr\003lxr\002ly\004l"
    "zdr\004lzer\004lzxr\004madb\005madbr\004maeb\005maebr\003mdb\004mdbr\004"
    "mdeb\005mdebr\004meeb\005meebr\004mghi\002mh\003mhi\003mhy\003mlg\004ml"
    "gr\002ms\004msdb\005msdbr\004mseb\005msebr\004msfi\003msg\004msgf\005ms"
    "gfi\005msgfr\004msgr\003msr\003msy\003mvc\005mvghi\005mvhhi\004mvhi\003"
    "mvi\004mviy\004mvst\004mxbr\004mxdb\005mxdbr\001n\002nc\002ng\003ngr\004"
    "ngrk\002ni\004nihf\004nihh\004nihl\004nilf\004nilh\004nill\003niy\002nr"
    "\003nrk\005ntstg\002ny\001o\002oc\002og\003ogr\004ogrk\002oi\004oihf\004"
    "oihh\004oihl\004oilf\004oilh\004oill\003oiy\002or\003ork\002oy\003pfd\005"
    "pfdrl\006popcnt\003ppa\005risbg\006risbgn\006risbhg\006risblg\003rll\004"
    "rllg\005rnsbg\005rosbg\005rxsbg\001s\003sdb\004sdbr\003seb\004sebr\002s"
    "g\003sgf\004sgfr\003sgr\004sgrk\002sh\003shy\002sl\003slb\004slbg\005sl"
    "bgr\004slbr\004slfi\003slg\004slgf\005slgfi\005slgfr\004slgr\005slgrk\003"
    "sll\004sllg\004sllk\003slr\004slrk\003sly\004sqdb\005sqdbr\004sqeb\005s"
    "qebr\005sqxbr\002sr\003sra\004srag\004srak\003srk\003srl\004srlg\004srl"
    "k\004srst\002st\003stc\004stch\004stcy\003std\004stdy\003ste\004stey\004"
    "stfh\003stg\005stgrl\003sth\004sthh\005sthrl\004sthy\004stmg\004stoc\005"
    "stoce\005stocg\006stocge\006stocgh\007stocghe\006stocgl\007stocgle\007s"
    "tocglh\007stocgne\007stocgnh\010stocgnhe\007stocgnl\010stocgnle\010stoc"
    "gnlh\007stocgno\006stocgo\005stoch\006stoche\005stocl\006stocle\006stoc"
    "lh\006stocne\006stocnh\007stocnhe\006stocnl\007stocnle\007stocnlh\006st"
    "ocno\005stoco\004strl\004strv\005strvg\003sty\004sxbr\002sy\006tabort\006"
    "tbegin\007tbeginc\004tend\002tm\004tmhh\004tmhl\004tmlh\004tmll\003tmy\001"
    "x\002xc\002xg\003xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\002"
    "xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint16_t RequiredFeatures;
    uint8_t Classes[5];
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
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 46 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 52 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 56 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 61 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 66 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 69 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 73 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 78 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 82 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 86 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 89 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 93 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 98 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 104 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 109 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 114 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 118 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 123 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 129 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 135 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 143 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 148 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 154 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 161 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 165 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 170 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 174 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 177 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 181 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 185 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 190 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 193 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 198 /* bcr */, SystemZ::AsmBCR, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 202 /* ber */, SystemZ::AsmEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 206 /* bher */, SystemZ::AsmHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 211 /* bhr */, SystemZ::AsmHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 215 /* bler */, SystemZ::AsmLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 220 /* blhr */, SystemZ::AsmLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 225 /* blr */, SystemZ::AsmLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 229 /* bner */, SystemZ::AsmNEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 234 /* bnher */, SystemZ::AsmNHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 240 /* bnhr */, SystemZ::AsmNHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 245 /* bnler */, SystemZ::AsmNLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 251 /* bnlhr */, SystemZ::AsmNLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 257 /* bnlr */, SystemZ::AsmNLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 262 /* bnor */, SystemZ::AsmNOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 267 /* bor */, SystemZ::AsmOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 271 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 274 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, 0, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 279 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, 0, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 285 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 289 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 294 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 299 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 305 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 307 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 311 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 316 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 322 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 328 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 335 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 342 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 346 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 351 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 357 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 363 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 370 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 377 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 383 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 389 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 393 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 399 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 402 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 408 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 414 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 418 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 423 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 428 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 434 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 438 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 443 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 449 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 455 /* cgij */, SystemZ::AsmCGIJ, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 460 /* cgije */, SystemZ::AsmJECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 466 /* cgijh */, SystemZ::AsmJHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 472 /* cgijhe */, SystemZ::AsmJHECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 479 /* cgijl */, SystemZ::AsmJLCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 485 /* cgijle */, SystemZ::AsmJLECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 492 /* cgijlh */, SystemZ::AsmJLHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 499 /* cgijne */, SystemZ::AsmJLHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 506 /* cgijnh */, SystemZ::AsmJLEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 513 /* cgijnhe */, SystemZ::AsmJLAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 521 /* cgijnl */, SystemZ::AsmJHEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 528 /* cgijnle */, SystemZ::AsmJHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 536 /* cgijnlh */, SystemZ::AsmJEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 544 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 548 /* cgrj */, SystemZ::AsmCGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 553 /* cgrje */, SystemZ::AsmJECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 559 /* cgrjh */, SystemZ::AsmJHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 565 /* cgrjhe */, SystemZ::AsmJHECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 572 /* cgrjl */, SystemZ::AsmJLCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 578 /* cgrjle */, SystemZ::AsmJLECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 585 /* cgrjlh */, SystemZ::AsmJLHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 592 /* cgrjne */, SystemZ::AsmJLHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 599 /* cgrjnh */, SystemZ::AsmJLEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 606 /* cgrjnhe */, SystemZ::AsmJLAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 614 /* cgrjnl */, SystemZ::AsmJHEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 621 /* cgrjnle */, SystemZ::AsmJHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 629 /* cgrjnlh */, SystemZ::AsmJEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 637 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 642 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 648 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 651 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 655 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 661 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 665 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 670 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 675 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 679 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 683 /* cij */, SystemZ::AsmCIJ, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 687 /* cije */, SystemZ::AsmJECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 692 /* cijh */, SystemZ::AsmJHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 697 /* cijhe */, SystemZ::AsmJHECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 703 /* cijl */, SystemZ::AsmJLCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 708 /* cijle */, SystemZ::AsmJLECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 714 /* cijlh */, SystemZ::AsmJLHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 720 /* cijne */, SystemZ::AsmJLHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 726 /* cijnh */, SystemZ::AsmJLEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 732 /* cijnhe */, SystemZ::AsmJLAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 739 /* cijnl */, SystemZ::AsmJHEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 745 /* cijnle */, SystemZ::AsmJHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 752 /* cijnlh */, SystemZ::AsmJEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 759 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 762 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 766 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 773 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 780 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 787 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 792 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 799 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 803 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 810 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 817 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 822 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 828 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 834 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 841 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 848 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 855 /* clgij */, SystemZ::AsmCLGIJ, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 861 /* clgije */, SystemZ::AsmJECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 868 /* clgijh */, SystemZ::AsmJHCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 875 /* clgijhe */, SystemZ::AsmJHECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 883 /* clgijl */, SystemZ::AsmJLCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 890 /* clgijle */, SystemZ::AsmJLECLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 898 /* clgijlh */, SystemZ::AsmJLHCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 906 /* clgijne */, SystemZ::AsmJLHAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 914 /* clgijnh */, SystemZ::AsmJLEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 922 /* clgijnhe */, SystemZ::AsmJLAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 931 /* clgijnl */, SystemZ::AsmJHEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 939 /* clgijnle */, SystemZ::AsmJHAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 948 /* clgijnlh */, SystemZ::AsmJEAltCLGI, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 957 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 962 /* clgrj */, SystemZ::AsmCLGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 968 /* clgrje */, SystemZ::AsmJECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 975 /* clgrjh */, SystemZ::AsmJHCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 982 /* clgrjhe */, SystemZ::AsmJHECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 990 /* clgrjl */, SystemZ::AsmJLCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 997 /* clgrjle */, SystemZ::AsmJLECLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1005 /* clgrjlh */, SystemZ::AsmJLHCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1013 /* clgrjne */, SystemZ::AsmJLHAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1021 /* clgrjnh */, SystemZ::AsmJLEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1029 /* clgrjnhe */, SystemZ::AsmJLAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1038 /* clgrjnl */, SystemZ::AsmJHEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1046 /* clgrjnle */, SystemZ::AsmJHAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1055 /* clgrjnlh */, SystemZ::AsmJEAltCLGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1064 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1070 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1077 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1082 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1089 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1095 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 1099 /* clih */, SystemZ::CLIH, Convert__GR321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GR32, MCK_U32Imm }, },
  { 1104 /* clij */, SystemZ::AsmCLIJ, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1109 /* clije */, SystemZ::AsmJECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1115 /* clijh */, SystemZ::AsmJHCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1121 /* clijhe */, SystemZ::AsmJHECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1128 /* clijl */, SystemZ::AsmJLCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1134 /* clijle */, SystemZ::AsmJLECLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1141 /* clijlh */, SystemZ::AsmJLHCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1148 /* clijne */, SystemZ::AsmJLHAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1155 /* clijnh */, SystemZ::AsmJLEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1162 /* clijnhe */, SystemZ::AsmJLAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1170 /* clijnl */, SystemZ::AsmJHEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1177 /* clijnle */, SystemZ::AsmJHAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1185 /* clijnlh */, SystemZ::AsmJEAltCLI, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 1193 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 1198 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1202 /* clrj */, SystemZ::AsmCLRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 1207 /* clrje */, SystemZ::AsmJECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1213 /* clrjh */, SystemZ::AsmJHCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1219 /* clrjhe */, SystemZ::AsmJHECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1226 /* clrjl */, SystemZ::AsmJLCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1232 /* clrjle */, SystemZ::AsmJLECLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1239 /* clrjlh */, SystemZ::AsmJLHCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1246 /* clrjne */, SystemZ::AsmJLHAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1253 /* clrjnh */, SystemZ::AsmJLEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1260 /* clrjnhe */, SystemZ::AsmJLAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1268 /* clrjnl */, SystemZ::AsmJHEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1275 /* clrjnle */, SystemZ::AsmJHAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1283 /* clrjnlh */, SystemZ::AsmJEAltCLR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1291 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1296 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1301 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1305 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 1311 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1314 /* crj */, SystemZ::AsmCRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 1318 /* crje */, SystemZ::AsmJECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1323 /* crjh */, SystemZ::AsmJHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1328 /* crjhe */, SystemZ::AsmJHECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1334 /* crjl */, SystemZ::AsmJLCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1339 /* crjle */, SystemZ::AsmJLECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1345 /* crjlh */, SystemZ::AsmJLHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1351 /* crjne */, SystemZ::AsmJLHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1357 /* crjnh */, SystemZ::AsmJLEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1363 /* crjnhe */, SystemZ::AsmJLAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1370 /* crjnl */, SystemZ::AsmJHEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1376 /* crjnle */, SystemZ::AsmJHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1383 /* crjnlh */, SystemZ::AsmJEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 1390 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1394 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 1397 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1401 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1405 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1410 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 1416 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 1422 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 1429 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 1436 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1439 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1443 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1448 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1452 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1457 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1460 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1464 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1469 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 1473 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1477 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 1482 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 1488 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1493 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1498 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, },
  { 1502 /* etnd */, SystemZ::ETND, Convert__GR321_0, Feature_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 1507 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 1513 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1520 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 1526 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1533 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 1539 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1546 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 1552 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1555 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1559 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 1564 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 1569 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 1574 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 1579 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1584 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1589 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 1593 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1595 /* je */, SystemZ::AsmEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1598 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1601 /* jge */, SystemZ::AsmEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1605 /* jgh */, SystemZ::AsmHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1609 /* jghe */, SystemZ::AsmHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1614 /* jgl */, SystemZ::AsmLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1618 /* jgle */, SystemZ::AsmLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1623 /* jglh */, SystemZ::AsmLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1628 /* jgne */, SystemZ::AsmNEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1633 /* jgnh */, SystemZ::AsmNHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1638 /* jgnhe */, SystemZ::AsmNHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1644 /* jgnl */, SystemZ::AsmNLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1649 /* jgnle */, SystemZ::AsmNLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1655 /* jgnlh */, SystemZ::AsmNLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1661 /* jgno */, SystemZ::AsmNOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1666 /* jgo */, SystemZ::AsmOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1670 /* jh */, SystemZ::AsmHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1673 /* jhe */, SystemZ::AsmHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1677 /* jl */, SystemZ::AsmLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1680 /* jle */, SystemZ::AsmLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1684 /* jlh */, SystemZ::AsmLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1688 /* jne */, SystemZ::AsmNEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1692 /* jnh */, SystemZ::AsmNHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1696 /* jnhe */, SystemZ::AsmNHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1701 /* jnl */, SystemZ::AsmNLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1705 /* jnle */, SystemZ::AsmNLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1710 /* jnlh */, SystemZ::AsmNLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1715 /* jno */, SystemZ::AsmNOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1719 /* jo */, SystemZ::AsmOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1722 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1724 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1727 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1731 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1736 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1741 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1747 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1751 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1756 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1760 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1765 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1770 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1774 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1779 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1783 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1786 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1790 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1794 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1800 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1806 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1812 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1817 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1821 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1827 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1830 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1835 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 1841 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 1846 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1850 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1856 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1863 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 1867 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1870 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 1876 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1883 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1887 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1893 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1900 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 1904 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1908 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1911 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1915 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1920 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 1925 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1929 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 1934 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1939 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1945 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1949 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1954 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1959 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1965 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1969 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1974 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1977 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1981 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1985 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1989 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1994 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1998 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2002 /* llch */, SystemZ::LLCH, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2007 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2012 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2017 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2023 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2028 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2034 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2041 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2046 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2052 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2059 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2063 /* llhh */, SystemZ::LLHH, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2068 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2073 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2079 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2085 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2091 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2097 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2103 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2109 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2115 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2119 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2125 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2131 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2137 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2142 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2146 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2152 /* loc */, SystemZ::AsmLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2156 /* loce */, SystemZ::AsmELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2161 /* locg */, SystemZ::AsmLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2166 /* locge */, SystemZ::AsmELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2172 /* locgh */, SystemZ::AsmHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2178 /* locghe */, SystemZ::AsmHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2185 /* locgl */, SystemZ::AsmLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2191 /* locgle */, SystemZ::AsmLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2198 /* locglh */, SystemZ::AsmLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2205 /* locgne */, SystemZ::AsmNELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2212 /* locgnh */, SystemZ::AsmNHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2219 /* locgnhe */, SystemZ::AsmNHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2227 /* locgnl */, SystemZ::AsmNLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2234 /* locgnle */, SystemZ::AsmNLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2242 /* locgnlh */, SystemZ::AsmNLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2250 /* locgno */, SystemZ::AsmNOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2257 /* locgo */, SystemZ::AsmOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2263 /* locgr */, SystemZ::AsmLOCGR, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2269 /* locgre */, SystemZ::AsmELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2276 /* locgrh */, SystemZ::AsmHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2283 /* locgrhe */, SystemZ::AsmHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2291 /* locgrl */, SystemZ::AsmLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2298 /* locgrle */, SystemZ::AsmLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2306 /* locgrlh */, SystemZ::AsmLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2314 /* locgrne */, SystemZ::AsmNELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2322 /* locgrnh */, SystemZ::AsmNHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2330 /* locgrnhe */, SystemZ::AsmNHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2339 /* locgrnl */, SystemZ::AsmNLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2347 /* locgrnle */, SystemZ::AsmNLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2356 /* locgrnlh */, SystemZ::AsmNLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2365 /* locgrno */, SystemZ::AsmNOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2373 /* locgro */, SystemZ::AsmOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 2380 /* loch */, SystemZ::AsmHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2385 /* loche */, SystemZ::AsmHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2391 /* locl */, SystemZ::AsmLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2396 /* locle */, SystemZ::AsmLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2402 /* loclh */, SystemZ::AsmLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2408 /* locne */, SystemZ::AsmNELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2414 /* locnh */, SystemZ::AsmNHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2420 /* locnhe */, SystemZ::AsmNHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2427 /* locnl */, SystemZ::AsmNLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2433 /* locnle */, SystemZ::AsmNLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2440 /* locnlh */, SystemZ::AsmNLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2447 /* locno */, SystemZ::AsmNOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2453 /* loco */, SystemZ::AsmOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2458 /* locr */, SystemZ::AsmLOCR, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 2463 /* locre */, SystemZ::AsmELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2469 /* locrh */, SystemZ::AsmHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2475 /* locrhe */, SystemZ::AsmHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2482 /* locrl */, SystemZ::AsmLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2488 /* locrle */, SystemZ::AsmLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2495 /* locrlh */, SystemZ::AsmLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2502 /* locrne */, SystemZ::AsmNELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2509 /* locrnh */, SystemZ::AsmNHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2516 /* locrnhe */, SystemZ::AsmNHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2524 /* locrnl */, SystemZ::AsmNLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2531 /* locrnle */, SystemZ::AsmNLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2539 /* locrnlh */, SystemZ::AsmNLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2547 /* locrno */, SystemZ::AsmNOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2554 /* locro */, SystemZ::AsmOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 2560 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2566 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2572 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2578 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2583 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2587 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2593 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2596 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2600 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2604 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2609 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2615 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2620 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2623 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2629 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2635 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2639 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2644 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2650 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2655 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2659 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2665 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2670 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2676 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2681 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 2687 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2691 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2694 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 2699 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 2704 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 2709 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2714 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2720 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2725 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2731 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2735 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2740 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2745 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 2751 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2756 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2762 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 2767 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2770 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 2774 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2778 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2782 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 2787 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2790 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2795 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2801 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2806 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2812 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 2817 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2821 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2826 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 2832 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2838 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2843 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2847 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2851 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2855 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2861 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2867 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2872 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2876 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2881 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2886 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2891 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2896 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2902 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2904 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2907 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2910 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2914 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2919 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2922 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 2927 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2932 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 2937 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 2942 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2947 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 2952 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2956 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2959 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2963 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2969 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2972 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2974 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2977 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2980 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2984 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2989 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2992 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 2997 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3002 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3007 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3012 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3017 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3022 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3026 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3029 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3033 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3036 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 3040 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 3046 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, Feature_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 3053 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, Feature_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 3057 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3063 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3070 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3077 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3084 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3088 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3093 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3099 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3105 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 3111 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3113 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3117 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3122 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3126 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3131 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3134 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3138 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3143 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3147 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3152 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3155 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3159 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3162 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3166 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3171 /* slbgr */, SystemZ::SLGBR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3177 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3182 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3187 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3191 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3196 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 3202 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3208 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3213 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3219 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3223 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3228 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3233 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3237 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3242 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3246 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3251 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3257 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3262 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3268 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3274 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3277 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3281 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3286 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3291 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3295 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 3299 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3304 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 3309 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3314 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3317 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3321 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3326 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3331 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3335 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 3340 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3344 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 3349 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3354 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3358 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3364 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3368 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3373 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3379 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3384 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3389 /* stoc */, SystemZ::AsmSTOC, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3394 /* stoce */, SystemZ::AsmESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3400 /* stocg */, SystemZ::AsmSTOCG, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3406 /* stocge */, SystemZ::AsmESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3413 /* stocgh */, SystemZ::AsmHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3420 /* stocghe */, SystemZ::AsmHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3428 /* stocgl */, SystemZ::AsmLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3435 /* stocgle */, SystemZ::AsmLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3443 /* stocglh */, SystemZ::AsmLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3451 /* stocgne */, SystemZ::AsmNESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3459 /* stocgnh */, SystemZ::AsmNHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3467 /* stocgnhe */, SystemZ::AsmNHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3476 /* stocgnl */, SystemZ::AsmNLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3484 /* stocgnle */, SystemZ::AsmNLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3493 /* stocgnlh */, SystemZ::AsmNLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3502 /* stocgno */, SystemZ::AsmNOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3510 /* stocgo */, SystemZ::AsmOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3517 /* stoch */, SystemZ::AsmHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3523 /* stoche */, SystemZ::AsmHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3530 /* stocl */, SystemZ::AsmLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3536 /* stocle */, SystemZ::AsmLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3543 /* stoclh */, SystemZ::AsmLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3550 /* stocne */, SystemZ::AsmNESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3557 /* stocnh */, SystemZ::AsmNHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3564 /* stocnhe */, SystemZ::AsmNHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3572 /* stocnl */, SystemZ::AsmNLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3579 /* stocnle */, SystemZ::AsmNLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3587 /* stocnlh */, SystemZ::AsmNLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3595 /* stocno */, SystemZ::AsmNOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3602 /* stoco */, SystemZ::AsmOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3608 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3613 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3618 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3624 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3628 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3633 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3636 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 3643 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 3650 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 3658 /* tend */, SystemZ::TEND, Convert_NoOperands, Feature_FeatureTransactionalExecution, {  }, },
  { 3663 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 3666 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3671 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3676 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3681 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3686 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3690 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3692 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 3695 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3698 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3702 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 3707 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 3710 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 3715 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3720 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3724 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3727 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 3731 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
};

bool SystemZAsmParser::
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

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

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
    for (unsigned i = 0; i != 5; ++i) {
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
    uint16_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[1092] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 46 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 52 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 56 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 61 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 66 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 73 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 78 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 78 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 82 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 86 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 86 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 89 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 89 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 93 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 93 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 104 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 109 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 114 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 118 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 118 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 123 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 129 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 129 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 135 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 143 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 148 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDistinctOps, 154 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 161 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 165 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 170 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 170 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 174 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 177 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 181 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 185 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 190 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 190 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 193 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 193 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 198 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 202 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 206 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 211 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 215 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 220 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 225 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 229 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 234 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 240 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 245 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 251 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 257 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 262 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 267 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 271 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 274 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 274 /* bras */, MCK_PCRelTLS16, 2 /* 1 */ },
  { 0, 279 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 279 /* brasl */, MCK_PCRelTLS32, 2 /* 1 */ },
  { 0, 285 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 289 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 294 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 294 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 299 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 299 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 305 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 305 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 307 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 307 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 311 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 316 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 316 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 322 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 322 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 328 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 328 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 335 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 335 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 342 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 342 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 346 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 351 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 351 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 357 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 357 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 363 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 363 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 370 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 370 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 377 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 377 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 383 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 383 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 389 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 393 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 393 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 399 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 399 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 402 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 402 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 408 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 408 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 414 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 414 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 418 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 423 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 423 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 434 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 434 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 438 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 443 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 443 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 449 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 455 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 455 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 460 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 460 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 466 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 466 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 472 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 472 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 479 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 479 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 485 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 485 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 492 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 492 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 499 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 499 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 506 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 506 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 513 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 513 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 521 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 521 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 528 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 528 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 536 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 536 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 544 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 548 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 548 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 553 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 553 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 559 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 559 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 565 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 565 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 572 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 572 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 578 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 578 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 585 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 585 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 592 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 592 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 599 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 599 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 606 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 606 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 614 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 614 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 621 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 621 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 629 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 629 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 637 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 637 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 642 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 642 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 648 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 648 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 651 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 651 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 655 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 661 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 670 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 675 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 675 /* chy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 679 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 683 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 683 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 687 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 687 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 692 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 692 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 697 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 697 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 703 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 703 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 708 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 708 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 714 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 714 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 720 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 720 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 726 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 726 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 732 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 732 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 739 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 739 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 745 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 745 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 752 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 752 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 759 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 759 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 762 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 762 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 766 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 766 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 773 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 773 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 780 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 787 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 792 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 792 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 799 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 799 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 803 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 803 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 810 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 810 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 817 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 817 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 822 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 828 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 828 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 834 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 834 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 841 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 841 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 848 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 855 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 855 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 861 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 861 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 868 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 868 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 875 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 875 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 883 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 883 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 890 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 890 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 898 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 898 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 906 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 906 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 914 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 914 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 922 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 922 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 931 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 931 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 939 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 939 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 948 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 948 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 957 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 962 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 962 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 968 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 968 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 975 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 975 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 982 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 982 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 990 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 990 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 997 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 997 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1005 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1005 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1013 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1013 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1021 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1021 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1029 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1029 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1038 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1038 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1046 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1046 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1055 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1055 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1064 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1064 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1070 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1070 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1077 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1077 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1082 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1089 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1089 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1095 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1099 /* clih */, MCK_GR32, 1 /* 0 */ },
  { 0, 1104 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1104 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1109 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1109 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1115 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1115 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1121 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1121 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1128 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1128 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1134 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1134 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1141 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1141 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1148 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1148 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1155 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1155 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1162 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1162 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1170 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1170 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1177 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1177 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1185 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1185 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1193 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1198 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1202 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1202 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1207 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1207 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1213 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1213 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1219 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1219 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1226 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1226 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1232 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1232 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1239 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1239 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1246 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1246 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1253 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1253 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1260 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1260 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1268 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1268 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1275 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1275 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1283 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1283 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1291 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1291 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1296 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1301 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1301 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1305 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1311 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1314 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1314 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1318 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1318 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1323 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1323 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1328 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1328 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1334 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1334 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1339 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1339 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1345 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1345 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1351 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1351 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1357 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1357 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1363 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1363 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1370 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1370 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1376 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1376 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1383 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1383 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1390 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1390 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1394 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1394 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1397 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1397 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1401 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1401 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1405 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1410 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1410 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1416 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1416 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1422 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1422 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1429 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1429 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 1436 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1436 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1439 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1439 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1443 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1448 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1448 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1452 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1457 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1457 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 1460 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1460 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1464 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1464 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1469 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1469 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1473 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1473 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1477 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1477 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 1482 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1482 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1488 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1488 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1493 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1498 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 1498 /* ear */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 1502 /* etnd */, MCK_GR32, 1 /* 0 */ },
  { 0, 1507 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1513 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 1520 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1526 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 1533 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 1539 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1546 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1546 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1552 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1552 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 1555 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1555 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 1559 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1564 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1569 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1574 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 1579 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1584 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 1589 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 1593 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1595 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1598 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1601 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1605 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1609 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1614 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1618 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1623 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1628 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1633 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1638 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1644 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1649 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1655 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1661 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1666 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1670 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1673 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1677 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1680 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1684 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1688 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1692 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1696 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1701 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1705 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1710 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1715 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1719 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1722 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1722 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 1724 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1724 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 1727 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1727 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1731 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1731 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1736 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1736 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1741 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1741 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1747 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1747 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1751 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1751 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1756 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1756 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1760 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1760 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1765 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1765 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureInterlockedAccess1, 1770 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1770 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 1774 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 1774 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1779 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1779 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 1783 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1783 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1786 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1786 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1790 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1794 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1800 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1806 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1806 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1812 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1817 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1821 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1827 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1827 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 1830 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1830 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1835 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1835 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1841 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1841 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1846 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1850 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1856 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1863 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1863 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1867 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1867 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 1870 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 1870 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 1876 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1876 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 1883 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1887 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1893 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 1900 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1900 /* ley */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1904 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1904 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1908 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1908 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1911 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1911 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 1915 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1920 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1920 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1925 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1925 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1929 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1934 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1934 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1939 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1939 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1945 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1945 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1949 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1954 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1959 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1959 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1965 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1969 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1969 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1974 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1974 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1977 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1977 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1981 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1985 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1989 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1989 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1994 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1994 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1998 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1998 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2002 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2002 /* llch */, MCK_GR32, 1 /* 0 */ },
  { 0, 2007 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2012 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2012 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 2017 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2023 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2023 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2028 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2028 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2034 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2034 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2041 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2041 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2046 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2052 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2052 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2059 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2059 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2063 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2063 /* llhh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2068 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2073 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2073 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2079 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2085 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2091 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2097 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2103 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2109 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 2115 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2115 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2119 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2125 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2131 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2131 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2137 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2142 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2146 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2152 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2152 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2156 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2156 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2161 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2161 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2166 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2166 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2172 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2172 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2178 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2178 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2185 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2185 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2191 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2191 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2198 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2198 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2205 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2205 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2212 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2212 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2219 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2219 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2227 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2227 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2234 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2234 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2242 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2242 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2250 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2250 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2257 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2257 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2263 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2269 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2276 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2283 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2291 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2298 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2306 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2314 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2322 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2330 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2339 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2347 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2356 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2365 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2373 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2380 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2380 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2385 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2385 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2391 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2391 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2396 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2396 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2402 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2402 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2408 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2408 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2414 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2414 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2420 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2420 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2427 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2427 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2433 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2433 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2440 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2440 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2447 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2447 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2453 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2453 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2458 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2463 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2469 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2475 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2482 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2488 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2495 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2502 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2509 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2516 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2524 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2531 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2539 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2547 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2554 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2560 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2566 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2572 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2572 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2578 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2583 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2587 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2593 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2596 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2596 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2600 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2600 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 2604 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2604 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2609 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2615 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2620 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2620 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 2623 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2629 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2635 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2635 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2639 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2639 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2644 /* ltgfr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2650 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2655 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2659 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2665 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2665 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2670 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2670 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2676 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2676 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2681 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2681 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2687 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2691 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2691 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 2694 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2699 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 2704 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2709 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2709 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2714 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2720 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2720 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2725 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2731 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2731 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2735 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2740 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2740 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2745 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2745 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2751 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2751 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2756 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2762 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2767 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2767 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2770 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2774 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2774 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2778 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2778 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 2782 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2782 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 2787 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2787 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 2790 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2790 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2795 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2801 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2801 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2806 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2812 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2817 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2817 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2821 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2821 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2826 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2832 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2832 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2838 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2843 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2847 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2847 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2851 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2851 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2855 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2861 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2867 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2872 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2876 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2881 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2886 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2891 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2891 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2896 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2896 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2902 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2902 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 2904 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2904 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2907 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2907 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 2910 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2914 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2919 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2922 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2927 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2932 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2937 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 2942 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2947 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 2952 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2956 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2959 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureTransactionalExecution, 2963 /* ntstg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureTransactionalExecution, 2963 /* ntstg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2969 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2969 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 2972 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2972 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 2974 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2974 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2977 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2977 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 2980 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2984 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2989 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2992 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2997 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3002 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3007 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3012 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3017 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 3022 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3026 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3029 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3033 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3033 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3036 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3040 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeaturePopulationCount, 3046 /* popcnt */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureProcessorAssist, 3053 /* ppa */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3057 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3063 /* risbgn */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 3070 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3070 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3077 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3077 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 3084 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3084 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3088 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3088 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3093 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3099 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3105 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3111 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3111 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 3113 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3113 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3117 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3122 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3122 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3126 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3131 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3131 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3134 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3134 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3138 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3138 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3143 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3147 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3152 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3152 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3155 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3155 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3159 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3159 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3162 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3162 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3166 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3166 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3171 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3177 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3182 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 3187 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3187 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3191 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3191 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3196 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 3202 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3202 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3208 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3213 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3219 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3219 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 3223 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3223 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3228 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3228 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3233 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3237 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3242 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3242 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 3246 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3246 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3251 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3257 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3257 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3262 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3268 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3274 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3277 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3277 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 3281 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3281 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3286 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3286 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3291 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3295 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 3295 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3299 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3299 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3304 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 3304 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3309 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3314 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3314 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 3317 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3317 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3321 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3321 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3326 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3326 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3331 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3331 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 3335 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3335 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 3340 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3340 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 3344 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3344 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3349 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3349 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3354 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3354 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3358 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3358 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3364 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3364 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3368 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3368 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3373 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3373 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3379 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3379 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3384 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3384 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3389 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3389 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3394 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3394 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3400 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3400 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3406 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3406 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3413 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3413 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3420 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3420 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3428 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3428 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3435 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3435 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3443 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3443 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3451 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3451 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3459 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3459 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3467 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3467 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3476 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3476 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3484 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3484 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3493 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3493 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3502 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3502 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3510 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3510 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3517 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3517 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3523 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3523 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3530 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3530 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3536 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3536 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3543 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3543 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3550 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3550 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3557 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3557 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3564 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3564 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3572 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3572 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3579 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3579 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3587 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3587 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3595 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3595 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3602 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3602 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { 0, 3608 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3608 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3613 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3613 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 3618 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3618 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3624 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3624 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 3628 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3633 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3633 /* sy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3636 /* tabort */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3643 /* tbegin */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3650 /* tbeginc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3663 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3666 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3671 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3676 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3681 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 3686 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3690 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3690 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 3692 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 3692 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 3695 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3695 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3698 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3702 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 3707 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3710 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3715 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3720 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 3724 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 3727 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 3731 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3731 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+1092, Mnemonic,
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

