/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the SystemZ target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*119 cases */, 94|128,63/*8158*/, TARGET_VAL(ISD::STORE),// ->8163
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'st' chained node
/*7*/         OPC_Scope, 120|128,56/*7288*/, /*->7298*/ // 2 children in Scope
/*10*/          OPC_MoveChild, 1,
/*12*/          OPC_SwitchOpcode /*7 cases */, 81|128,13/*1745*/, TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->1762
/*17*/            OPC_CaptureGlueInput,
/*18*/            OPC_Scope, 78, /*->98*/ // 22 children in Scope
/*20*/              OPC_RecordChild0, // #1 = $new
/*21*/              OPC_MoveChild, 1,
/*23*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*26*/              OPC_RecordMemRef,
/*27*/              OPC_RecordNode, // #2 = 'ld' chained node
/*28*/              OPC_CheckFoldableChainNode,
/*29*/              OPC_RecordChild1, // #3 = $addr
/*30*/              OPC_CheckChild1Type, MVT::i64,
/*32*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*34*/              OPC_CheckPredicate, 1, // Predicate_anyextload
/*36*/              OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*38*/              OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*40*/              OPC_MoveParent,
/*41*/              OPC_RecordChild2, // #4 = $valid
/*42*/              OPC_MoveChild, 2,
/*44*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*47*/              OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*49*/              OPC_MoveParent,
/*50*/              OPC_RecordChild3, // #5 = $cc
/*51*/              OPC_MoveChild, 3,
/*53*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*56*/              OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*58*/              OPC_MoveParent,
/*59*/              OPC_CheckType, MVT::i32,
/*61*/              OPC_MoveParent,
/*62*/              OPC_CheckChild2Same, 3,
/*64*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*66*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*68*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*70*/              OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*72*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*74*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*77*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*81*/              OPC_EmitConvertToTarget, 4,
/*83*/              OPC_EmitConvertToTarget, 5,
/*85*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8Mux), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 GRX32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                    // Dst: (CondStore8Mux:i32 GRX32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*98*/            /*Scope*/ 78, /*->177*/
/*99*/              OPC_MoveChild, 0,
/*101*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*104*/             OPC_RecordMemRef,
/*105*/             OPC_RecordNode, // #1 = 'ld' chained node
/*106*/             OPC_CheckFoldableChainNode,
/*107*/             OPC_RecordChild1, // #2 = $addr
/*108*/             OPC_CheckChild1Type, MVT::i64,
/*110*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*112*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*114*/             OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*116*/             OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*118*/             OPC_MoveParent,
/*119*/             OPC_RecordChild1, // #3 = $new
/*120*/             OPC_RecordChild2, // #4 = $valid
/*121*/             OPC_MoveChild, 2,
/*123*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*126*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*128*/             OPC_MoveParent,
/*129*/             OPC_RecordChild3, // #5 = $cc
/*130*/             OPC_MoveChild, 3,
/*132*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*135*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*137*/             OPC_MoveParent,
/*138*/             OPC_CheckType, MVT::i32,
/*140*/             OPC_MoveParent,
/*141*/             OPC_CheckChild2Same, 2,
/*143*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*145*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*147*/             OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*149*/             OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*151*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*153*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*156*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*160*/             OPC_EmitConvertToTarget, 4,
/*162*/             OPC_EmitConvertToTarget, 5,
/*164*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8MuxInv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GRX32:i32:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                    // Dst: (CondStore8MuxInv:i32 GRX32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*177*/           /*Scope*/ 78, /*->256*/
/*178*/             OPC_RecordChild0, // #1 = $new
/*179*/             OPC_MoveChild, 1,
/*181*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*184*/             OPC_RecordMemRef,
/*185*/             OPC_RecordNode, // #2 = 'ld' chained node
/*186*/             OPC_CheckFoldableChainNode,
/*187*/             OPC_RecordChild1, // #3 = $addr
/*188*/             OPC_CheckChild1Type, MVT::i64,
/*190*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*192*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*194*/             OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*196*/             OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*198*/             OPC_MoveParent,
/*199*/             OPC_RecordChild2, // #4 = $valid
/*200*/             OPC_MoveChild, 2,
/*202*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*205*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*207*/             OPC_MoveParent,
/*208*/             OPC_RecordChild3, // #5 = $cc
/*209*/             OPC_MoveChild, 3,
/*211*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*214*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*216*/             OPC_MoveParent,
/*217*/             OPC_CheckType, MVT::i32,
/*219*/             OPC_MoveParent,
/*220*/             OPC_CheckChild2Same, 3,
/*222*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*224*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*226*/             OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*228*/             OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*230*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*232*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*235*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*239*/             OPC_EmitConvertToTarget, 4,
/*241*/             OPC_EmitConvertToTarget, 5,
/*243*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16Mux), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 GRX32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                    // Dst: (CondStore16Mux:i32 GRX32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*256*/           /*Scope*/ 78, /*->335*/
/*257*/             OPC_MoveChild, 0,
/*259*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*262*/             OPC_RecordMemRef,
/*263*/             OPC_RecordNode, // #1 = 'ld' chained node
/*264*/             OPC_CheckFoldableChainNode,
/*265*/             OPC_RecordChild1, // #2 = $addr
/*266*/             OPC_CheckChild1Type, MVT::i64,
/*268*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*270*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*272*/             OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*274*/             OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*276*/             OPC_MoveParent,
/*277*/             OPC_RecordChild1, // #3 = $new
/*278*/             OPC_RecordChild2, // #4 = $valid
/*279*/             OPC_MoveChild, 2,
/*281*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*284*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*286*/             OPC_MoveParent,
/*287*/             OPC_RecordChild3, // #5 = $cc
/*288*/             OPC_MoveChild, 3,
/*290*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*293*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*295*/             OPC_MoveParent,
/*296*/             OPC_CheckType, MVT::i32,
/*298*/             OPC_MoveParent,
/*299*/             OPC_CheckChild2Same, 2,
/*301*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*303*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*305*/             OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*307*/             OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*309*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*311*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*314*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*318*/             OPC_EmitConvertToTarget, 4,
/*320*/             OPC_EmitConvertToTarget, 5,
/*322*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16MuxInv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GRX32:i32:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                    // Dst: (CondStore16MuxInv:i32 GRX32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*335*/           /*Scope*/ 76, /*->412*/
/*336*/             OPC_RecordChild0, // #1 = $new
/*337*/             OPC_MoveChild, 1,
/*339*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*342*/             OPC_RecordMemRef,
/*343*/             OPC_RecordNode, // #2 = 'ld' chained node
/*344*/             OPC_CheckFoldableChainNode,
/*345*/             OPC_RecordChild1, // #3 = $addr
/*346*/             OPC_CheckChild1Type, MVT::i64,
/*348*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*350*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*352*/             OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*354*/             OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*356*/             OPC_MoveParent,
/*357*/             OPC_RecordChild2, // #4 = $valid
/*358*/             OPC_MoveChild, 2,
/*360*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*363*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*365*/             OPC_MoveParent,
/*366*/             OPC_RecordChild3, // #5 = $cc
/*367*/             OPC_MoveChild, 3,
/*369*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*372*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*374*/             OPC_MoveParent,
/*375*/             OPC_CheckType, MVT::i32,
/*377*/             OPC_MoveParent,
/*378*/             OPC_CheckChild2Same, 3,
/*380*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*382*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*384*/             OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*386*/             OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*388*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*391*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*395*/             OPC_EmitConvertToTarget, 4,
/*397*/             OPC_EmitConvertToTarget, 5,
/*399*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                    // Dst: (CondStore8:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*412*/           /*Scope*/ 76, /*->489*/
/*413*/             OPC_MoveChild, 0,
/*415*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*418*/             OPC_RecordMemRef,
/*419*/             OPC_RecordNode, // #1 = 'ld' chained node
/*420*/             OPC_CheckFoldableChainNode,
/*421*/             OPC_RecordChild1, // #2 = $addr
/*422*/             OPC_CheckChild1Type, MVT::i64,
/*424*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*426*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*428*/             OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*430*/             OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*432*/             OPC_MoveParent,
/*433*/             OPC_RecordChild1, // #3 = $new
/*434*/             OPC_RecordChild2, // #4 = $valid
/*435*/             OPC_MoveChild, 2,
/*437*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*440*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*442*/             OPC_MoveParent,
/*443*/             OPC_RecordChild3, // #5 = $cc
/*444*/             OPC_MoveChild, 3,
/*446*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*449*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*451*/             OPC_MoveParent,
/*452*/             OPC_CheckType, MVT::i32,
/*454*/             OPC_MoveParent,
/*455*/             OPC_CheckChild2Same, 2,
/*457*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*459*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*461*/             OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*463*/             OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*465*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*468*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*472*/             OPC_EmitConvertToTarget, 4,
/*474*/             OPC_EmitConvertToTarget, 5,
/*476*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR32:i32:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                    // Dst: (CondStore8Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*489*/           /*Scope*/ 76, /*->566*/
/*490*/             OPC_RecordChild0, // #1 = $new
/*491*/             OPC_MoveChild, 1,
/*493*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*496*/             OPC_RecordMemRef,
/*497*/             OPC_RecordNode, // #2 = 'ld' chained node
/*498*/             OPC_CheckFoldableChainNode,
/*499*/             OPC_RecordChild1, // #3 = $addr
/*500*/             OPC_CheckChild1Type, MVT::i64,
/*502*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*504*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*506*/             OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*508*/             OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*510*/             OPC_MoveParent,
/*511*/             OPC_RecordChild2, // #4 = $valid
/*512*/             OPC_MoveChild, 2,
/*514*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*517*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*519*/             OPC_MoveParent,
/*520*/             OPC_RecordChild3, // #5 = $cc
/*521*/             OPC_MoveChild, 3,
/*523*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*526*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*528*/             OPC_MoveParent,
/*529*/             OPC_CheckType, MVT::i32,
/*531*/             OPC_MoveParent,
/*532*/             OPC_CheckChild2Same, 3,
/*534*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*536*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*538*/             OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*540*/             OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*542*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*545*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*549*/             OPC_EmitConvertToTarget, 4,
/*551*/             OPC_EmitConvertToTarget, 5,
/*553*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                    // Dst: (CondStore16:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*566*/           /*Scope*/ 76, /*->643*/
/*567*/             OPC_MoveChild, 0,
/*569*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*572*/             OPC_RecordMemRef,
/*573*/             OPC_RecordNode, // #1 = 'ld' chained node
/*574*/             OPC_CheckFoldableChainNode,
/*575*/             OPC_RecordChild1, // #2 = $addr
/*576*/             OPC_CheckChild1Type, MVT::i64,
/*578*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*580*/             OPC_CheckPredicate, 1, // Predicate_anyextload
/*582*/             OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*584*/             OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*586*/             OPC_MoveParent,
/*587*/             OPC_RecordChild1, // #3 = $new
/*588*/             OPC_RecordChild2, // #4 = $valid
/*589*/             OPC_MoveChild, 2,
/*591*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*594*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*596*/             OPC_MoveParent,
/*597*/             OPC_RecordChild3, // #5 = $cc
/*598*/             OPC_MoveChild, 3,
/*600*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*603*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*605*/             OPC_MoveParent,
/*606*/             OPC_CheckType, MVT::i32,
/*608*/             OPC_MoveParent,
/*609*/             OPC_CheckChild2Same, 2,
/*611*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*613*/             OPC_CheckPredicate, 6, // Predicate_truncstore
/*615*/             OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*617*/             OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*619*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*622*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*626*/             OPC_EmitConvertToTarget, 4,
/*628*/             OPC_EmitConvertToTarget, 5,
/*630*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR32:i32:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                    // Dst: (CondStore16Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*643*/           /*Scope*/ 72, /*->716*/
/*644*/             OPC_RecordChild0, // #1 = $new
/*645*/             OPC_MoveChild, 1,
/*647*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*650*/             OPC_RecordMemRef,
/*651*/             OPC_RecordNode, // #2 = 'ld' chained node
/*652*/             OPC_CheckFoldableChainNode,
/*653*/             OPC_RecordChild1, // #3 = $addr
/*654*/             OPC_CheckChild1Type, MVT::i64,
/*656*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*658*/             OPC_CheckPredicate, 13, // Predicate_load
/*660*/             OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*662*/             OPC_MoveParent,
/*663*/             OPC_RecordChild2, // #4 = $valid
/*664*/             OPC_MoveChild, 2,
/*666*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*669*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*671*/             OPC_MoveParent,
/*672*/             OPC_RecordChild3, // #5 = $cc
/*673*/             OPC_MoveChild, 3,
/*675*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*678*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*680*/             OPC_MoveParent,
/*681*/             OPC_CheckType, MVT::i32,
/*683*/             OPC_MoveParent,
/*684*/             OPC_CheckChild2Same, 3,
/*686*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*688*/             OPC_CheckPredicate, 15, // Predicate_store
/*690*/             OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*692*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*695*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*699*/             OPC_EmitConvertToTarget, 4,
/*701*/             OPC_EmitConvertToTarget, 5,
/*703*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStore32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*716*/           /*Scope*/ 72, /*->789*/
/*717*/             OPC_MoveChild, 0,
/*719*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*722*/             OPC_RecordMemRef,
/*723*/             OPC_RecordNode, // #1 = 'ld' chained node
/*724*/             OPC_CheckFoldableChainNode,
/*725*/             OPC_RecordChild1, // #2 = $addr
/*726*/             OPC_CheckChild1Type, MVT::i64,
/*728*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*730*/             OPC_CheckPredicate, 13, // Predicate_load
/*732*/             OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*734*/             OPC_MoveParent,
/*735*/             OPC_RecordChild1, // #3 = $new
/*736*/             OPC_RecordChild2, // #4 = $valid
/*737*/             OPC_MoveChild, 2,
/*739*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*742*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*744*/             OPC_MoveParent,
/*745*/             OPC_RecordChild3, // #5 = $cc
/*746*/             OPC_MoveChild, 3,
/*748*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*751*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*753*/             OPC_MoveParent,
/*754*/             OPC_CheckType, MVT::i32,
/*756*/             OPC_MoveParent,
/*757*/             OPC_CheckChild2Same, 2,
/*759*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*761*/             OPC_CheckPredicate, 15, // Predicate_store
/*763*/             OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*765*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*768*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*772*/             OPC_EmitConvertToTarget, 4,
/*774*/             OPC_EmitConvertToTarget, 5,
/*776*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR32:i32:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStore32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*789*/           /*Scope*/ 72, /*->862*/
/*790*/             OPC_RecordChild0, // #1 = $new
/*791*/             OPC_MoveChild, 1,
/*793*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*796*/             OPC_RecordMemRef,
/*797*/             OPC_RecordNode, // #2 = 'ld' chained node
/*798*/             OPC_CheckFoldableChainNode,
/*799*/             OPC_RecordChild1, // #3 = $addr
/*800*/             OPC_CheckChild1Type, MVT::i64,
/*802*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*804*/             OPC_CheckPredicate, 13, // Predicate_load
/*806*/             OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*808*/             OPC_MoveParent,
/*809*/             OPC_RecordChild2, // #4 = $valid
/*810*/             OPC_MoveChild, 2,
/*812*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*815*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*817*/             OPC_MoveParent,
/*818*/             OPC_RecordChild3, // #5 = $cc
/*819*/             OPC_MoveChild, 3,
/*821*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*824*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*826*/             OPC_MoveParent,
/*827*/             OPC_CheckType, MVT::i64,
/*829*/             OPC_MoveParent,
/*830*/             OPC_CheckChild2Same, 3,
/*832*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*834*/             OPC_CheckPredicate, 15, // Predicate_store
/*836*/             OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*838*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*841*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*845*/             OPC_EmitConvertToTarget, 4,
/*847*/             OPC_EmitConvertToTarget, 5,
/*849*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStore64:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*862*/           /*Scope*/ 72, /*->935*/
/*863*/             OPC_MoveChild, 0,
/*865*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*868*/             OPC_RecordMemRef,
/*869*/             OPC_RecordNode, // #1 = 'ld' chained node
/*870*/             OPC_CheckFoldableChainNode,
/*871*/             OPC_RecordChild1, // #2 = $addr
/*872*/             OPC_CheckChild1Type, MVT::i64,
/*874*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*876*/             OPC_CheckPredicate, 13, // Predicate_load
/*878*/             OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*880*/             OPC_MoveParent,
/*881*/             OPC_RecordChild1, // #3 = $new
/*882*/             OPC_RecordChild2, // #4 = $valid
/*883*/             OPC_MoveChild, 2,
/*885*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*888*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*890*/             OPC_MoveParent,
/*891*/             OPC_RecordChild3, // #5 = $cc
/*892*/             OPC_MoveChild, 3,
/*894*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*897*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*899*/             OPC_MoveParent,
/*900*/             OPC_CheckType, MVT::i64,
/*902*/             OPC_MoveParent,
/*903*/             OPC_CheckChild2Same, 2,
/*905*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*907*/             OPC_CheckPredicate, 15, // Predicate_store
/*909*/             OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*911*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*914*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*918*/             OPC_EmitConvertToTarget, 4,
/*920*/             OPC_EmitConvertToTarget, 5,
/*922*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR64:i64:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStore64Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*935*/           /*Scope*/ 72, /*->1008*/
/*936*/             OPC_RecordChild0, // #1 = $new
/*937*/             OPC_MoveChild, 1,
/*939*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*942*/             OPC_RecordMemRef,
/*943*/             OPC_RecordNode, // #2 = 'ld' chained node
/*944*/             OPC_CheckFoldableChainNode,
/*945*/             OPC_RecordChild1, // #3 = $addr
/*946*/             OPC_CheckChild1Type, MVT::i64,
/*948*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*950*/             OPC_CheckPredicate, 13, // Predicate_load
/*952*/             OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*954*/             OPC_MoveParent,
/*955*/             OPC_RecordChild2, // #4 = $valid
/*956*/             OPC_MoveChild, 2,
/*958*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*961*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*963*/             OPC_MoveParent,
/*964*/             OPC_RecordChild3, // #5 = $cc
/*965*/             OPC_MoveChild, 3,
/*967*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*970*/             OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*972*/             OPC_MoveParent,
/*973*/             OPC_CheckType, MVT::f32,
/*975*/             OPC_MoveParent,
/*976*/             OPC_CheckChild2Same, 3,
/*978*/             OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*980*/             OPC_CheckPredicate, 15, // Predicate_store
/*982*/             OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*984*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*987*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*991*/             OPC_EmitConvertToTarget, 4,
/*993*/             OPC_EmitConvertToTarget, 5,
/*995*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:f32 FP32:f32:$new, (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStoreF32:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*1008*/          /*Scope*/ 72, /*->1081*/
/*1009*/            OPC_MoveChild, 0,
/*1011*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1014*/            OPC_RecordMemRef,
/*1015*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1016*/            OPC_CheckFoldableChainNode,
/*1017*/            OPC_RecordChild1, // #2 = $addr
/*1018*/            OPC_CheckChild1Type, MVT::i64,
/*1020*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1022*/            OPC_CheckPredicate, 13, // Predicate_load
/*1024*/            OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1026*/            OPC_MoveParent,
/*1027*/            OPC_RecordChild1, // #3 = $new
/*1028*/            OPC_RecordChild2, // #4 = $valid
/*1029*/            OPC_MoveChild, 2,
/*1031*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1034*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1036*/            OPC_MoveParent,
/*1037*/            OPC_RecordChild3, // #5 = $cc
/*1038*/            OPC_MoveChild, 3,
/*1040*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1043*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1045*/            OPC_MoveParent,
/*1046*/            OPC_CheckType, MVT::f32,
/*1048*/            OPC_MoveParent,
/*1049*/            OPC_CheckChild2Same, 2,
/*1051*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1053*/            OPC_CheckPredicate, 15, // Predicate_store
/*1055*/            OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1057*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1060*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1064*/            OPC_EmitConvertToTarget, 4,
/*1066*/            OPC_EmitConvertToTarget, 5,
/*1068*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:f32 (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP32:f32:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStoreF32Inv:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*1081*/          /*Scope*/ 72, /*->1154*/
/*1082*/            OPC_RecordChild0, // #1 = $new
/*1083*/            OPC_MoveChild, 1,
/*1085*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1088*/            OPC_RecordMemRef,
/*1089*/            OPC_RecordNode, // #2 = 'ld' chained node
/*1090*/            OPC_CheckFoldableChainNode,
/*1091*/            OPC_RecordChild1, // #3 = $addr
/*1092*/            OPC_CheckChild1Type, MVT::i64,
/*1094*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1096*/            OPC_CheckPredicate, 13, // Predicate_load
/*1098*/            OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1100*/            OPC_MoveParent,
/*1101*/            OPC_RecordChild2, // #4 = $valid
/*1102*/            OPC_MoveChild, 2,
/*1104*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1107*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1109*/            OPC_MoveParent,
/*1110*/            OPC_RecordChild3, // #5 = $cc
/*1111*/            OPC_MoveChild, 3,
/*1113*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1116*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1118*/            OPC_MoveParent,
/*1119*/            OPC_CheckType, MVT::f64,
/*1121*/            OPC_MoveParent,
/*1122*/            OPC_CheckChild2Same, 3,
/*1124*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1126*/            OPC_CheckPredicate, 15, // Predicate_store
/*1128*/            OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1130*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1133*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1137*/            OPC_EmitConvertToTarget, 4,
/*1139*/            OPC_EmitConvertToTarget, 5,
/*1141*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:f64 FP64:f64:$new, (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStoreF64:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*1154*/          /*Scope*/ 72, /*->1227*/
/*1155*/            OPC_MoveChild, 0,
/*1157*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1160*/            OPC_RecordMemRef,
/*1161*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1162*/            OPC_CheckFoldableChainNode,
/*1163*/            OPC_RecordChild1, // #2 = $addr
/*1164*/            OPC_CheckChild1Type, MVT::i64,
/*1166*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1168*/            OPC_CheckPredicate, 13, // Predicate_load
/*1170*/            OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1172*/            OPC_MoveParent,
/*1173*/            OPC_RecordChild1, // #3 = $new
/*1174*/            OPC_RecordChild2, // #4 = $valid
/*1175*/            OPC_MoveChild, 2,
/*1177*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1180*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1182*/            OPC_MoveParent,
/*1183*/            OPC_RecordChild3, // #5 = $cc
/*1184*/            OPC_MoveChild, 3,
/*1186*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1189*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1191*/            OPC_MoveParent,
/*1192*/            OPC_CheckType, MVT::f64,
/*1194*/            OPC_MoveParent,
/*1195*/            OPC_CheckChild2Same, 2,
/*1197*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1199*/            OPC_CheckPredicate, 15, // Predicate_store
/*1201*/            OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1203*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1206*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1210*/            OPC_EmitConvertToTarget, 4,
/*1212*/            OPC_EmitConvertToTarget, 5,
/*1214*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                    // Src: (st (z_select_ccmask:f64 (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP64:f64:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                    // Dst: (CondStoreF64Inv:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i32):$valid, (imm:i32):$cc)
/*1227*/          /*Scope*/ 88, /*->1316*/
/*1228*/            OPC_RecordChild0, // #1 = $new
/*1229*/            OPC_MoveChild, 1,
/*1231*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1234*/            OPC_RecordMemRef,
/*1235*/            OPC_RecordNode, // #2 = 'ld' chained node
/*1236*/            OPC_CheckFoldableChainNode,
/*1237*/            OPC_RecordChild1, // #3 = $addr
/*1238*/            OPC_CheckChild1Type, MVT::i64,
/*1240*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1242*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1244*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1246*/            OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*1248*/            OPC_MoveParent,
/*1249*/            OPC_RecordChild2, // #4 = $valid
/*1250*/            OPC_MoveChild, 2,
/*1252*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1255*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1257*/            OPC_MoveParent,
/*1258*/            OPC_RecordChild3, // #5 = $cc
/*1259*/            OPC_MoveChild, 3,
/*1261*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1264*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1266*/            OPC_MoveParent,
/*1267*/            OPC_CheckType, MVT::i64,
/*1269*/            OPC_MoveParent,
/*1270*/            OPC_CheckChild2Same, 3,
/*1272*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1274*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*1276*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1278*/            OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*1280*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1283*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1287*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*1290*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 9,  // Results = #10
/*1299*/            OPC_EmitConvertToTarget, 4,
/*1301*/            OPC_EmitConvertToTarget, 5,
/*1303*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 10, 6, 7, 8, 11, 12, 
                    // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                    // Dst: (CondStore8:i32 (EXTRACT_SUBREG:i32 GR64:i64:$new, subreg_l32:i32), bdxaddr20only:i64:$addr, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*1316*/          /*Scope*/ 88, /*->1405*/
/*1317*/            OPC_MoveChild, 0,
/*1319*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1322*/            OPC_RecordMemRef,
/*1323*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1324*/            OPC_CheckFoldableChainNode,
/*1325*/            OPC_RecordChild1, // #2 = $addr
/*1326*/            OPC_CheckChild1Type, MVT::i64,
/*1328*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1330*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1332*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1334*/            OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*1336*/            OPC_MoveParent,
/*1337*/            OPC_RecordChild1, // #3 = $new
/*1338*/            OPC_RecordChild2, // #4 = $valid
/*1339*/            OPC_MoveChild, 2,
/*1341*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1344*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1346*/            OPC_MoveParent,
/*1347*/            OPC_RecordChild3, // #5 = $cc
/*1348*/            OPC_MoveChild, 3,
/*1350*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1353*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1355*/            OPC_MoveParent,
/*1356*/            OPC_CheckType, MVT::i64,
/*1358*/            OPC_MoveParent,
/*1359*/            OPC_CheckChild2Same, 2,
/*1361*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1363*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*1365*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1367*/            OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*1369*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1372*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1376*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*1379*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*1388*/            OPC_EmitConvertToTarget, 4,
/*1390*/            OPC_EmitConvertToTarget, 5,
/*1392*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 10, 6, 7, 8, 11, 12, 
                    // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR64:i64:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                    // Dst: (CondStore8Inv:i32 (EXTRACT_SUBREG:i32 GR64:i64:$new, subreg_l32:i32), bdxaddr20only:i64:$addr, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*1405*/          /*Scope*/ 88, /*->1494*/
/*1406*/            OPC_RecordChild0, // #1 = $new
/*1407*/            OPC_MoveChild, 1,
/*1409*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1412*/            OPC_RecordMemRef,
/*1413*/            OPC_RecordNode, // #2 = 'ld' chained node
/*1414*/            OPC_CheckFoldableChainNode,
/*1415*/            OPC_RecordChild1, // #3 = $addr
/*1416*/            OPC_CheckChild1Type, MVT::i64,
/*1418*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1420*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1422*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*1424*/            OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*1426*/            OPC_MoveParent,
/*1427*/            OPC_RecordChild2, // #4 = $valid
/*1428*/            OPC_MoveChild, 2,
/*1430*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1433*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1435*/            OPC_MoveParent,
/*1436*/            OPC_RecordChild3, // #5 = $cc
/*1437*/            OPC_MoveChild, 3,
/*1439*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1442*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1444*/            OPC_MoveParent,
/*1445*/            OPC_CheckType, MVT::i64,
/*1447*/            OPC_MoveParent,
/*1448*/            OPC_CheckChild2Same, 3,
/*1450*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1452*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*1454*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*1456*/            OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*1458*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1461*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1465*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*1468*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 9,  // Results = #10
/*1477*/            OPC_EmitConvertToTarget, 4,
/*1479*/            OPC_EmitConvertToTarget, 5,
/*1481*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 10, 6, 7, 8, 11, 12, 
                    // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                    // Dst: (CondStore16:i32 (EXTRACT_SUBREG:i32 GR64:i64:$new, subreg_l32:i32), bdxaddr20only:i64:$addr, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*1494*/          /*Scope*/ 88, /*->1583*/
/*1495*/            OPC_MoveChild, 0,
/*1497*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1500*/            OPC_RecordMemRef,
/*1501*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1502*/            OPC_CheckFoldableChainNode,
/*1503*/            OPC_RecordChild1, // #2 = $addr
/*1504*/            OPC_CheckChild1Type, MVT::i64,
/*1506*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1508*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1510*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*1512*/            OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*1514*/            OPC_MoveParent,
/*1515*/            OPC_RecordChild1, // #3 = $new
/*1516*/            OPC_RecordChild2, // #4 = $valid
/*1517*/            OPC_MoveChild, 2,
/*1519*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1522*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1524*/            OPC_MoveParent,
/*1525*/            OPC_RecordChild3, // #5 = $cc
/*1526*/            OPC_MoveChild, 3,
/*1528*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1531*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1533*/            OPC_MoveParent,
/*1534*/            OPC_CheckType, MVT::i64,
/*1536*/            OPC_MoveParent,
/*1537*/            OPC_CheckChild2Same, 2,
/*1539*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1541*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*1543*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*1545*/            OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*1547*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1550*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1554*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*1557*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*1566*/            OPC_EmitConvertToTarget, 4,
/*1568*/            OPC_EmitConvertToTarget, 5,
/*1570*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 10, 6, 7, 8, 11, 12, 
                    // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR64:i64:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                    // Dst: (CondStore16Inv:i32 (EXTRACT_SUBREG:i32 GR64:i64:$new, subreg_l32:i32), bdxaddr20only:i64:$addr, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*1583*/          /*Scope*/ 88, /*->1672*/
/*1584*/            OPC_RecordChild0, // #1 = $new
/*1585*/            OPC_MoveChild, 1,
/*1587*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1590*/            OPC_RecordMemRef,
/*1591*/            OPC_RecordNode, // #2 = 'ld' chained node
/*1592*/            OPC_CheckFoldableChainNode,
/*1593*/            OPC_RecordChild1, // #3 = $addr
/*1594*/            OPC_CheckChild1Type, MVT::i64,
/*1596*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1598*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1600*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*1602*/            OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*1604*/            OPC_MoveParent,
/*1605*/            OPC_RecordChild2, // #4 = $valid
/*1606*/            OPC_MoveChild, 2,
/*1608*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1611*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1613*/            OPC_MoveParent,
/*1614*/            OPC_RecordChild3, // #5 = $cc
/*1615*/            OPC_MoveChild, 3,
/*1617*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1620*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1622*/            OPC_MoveParent,
/*1623*/            OPC_CheckType, MVT::i64,
/*1625*/            OPC_MoveParent,
/*1626*/            OPC_CheckChild2Same, 3,
/*1628*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1630*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*1632*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*1634*/            OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*1636*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1639*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1643*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*1646*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 9,  // Results = #10
/*1655*/            OPC_EmitConvertToTarget, 4,
/*1657*/            OPC_EmitConvertToTarget, 5,
/*1659*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 10, 6, 7, 8, 11, 12, 
                    // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                    // Dst: (CondStore32:i32 (EXTRACT_SUBREG:i32 GR64:i64:$new, subreg_l32:i32), bdxaddr20only:i64:$addr, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*1672*/          /*Scope*/ 88, /*->1761*/
/*1673*/            OPC_MoveChild, 0,
/*1675*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1678*/            OPC_RecordMemRef,
/*1679*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1680*/            OPC_CheckFoldableChainNode,
/*1681*/            OPC_RecordChild1, // #2 = $addr
/*1682*/            OPC_CheckChild1Type, MVT::i64,
/*1684*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1686*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1688*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*1690*/            OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*1692*/            OPC_MoveParent,
/*1693*/            OPC_RecordChild1, // #3 = $new
/*1694*/            OPC_RecordChild2, // #4 = $valid
/*1695*/            OPC_MoveChild, 2,
/*1697*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1700*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1702*/            OPC_MoveParent,
/*1703*/            OPC_RecordChild3, // #5 = $cc
/*1704*/            OPC_MoveChild, 3,
/*1706*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1709*/            OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*1711*/            OPC_MoveParent,
/*1712*/            OPC_CheckType, MVT::i64,
/*1714*/            OPC_MoveParent,
/*1715*/            OPC_CheckChild2Same, 2,
/*1717*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1719*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*1721*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*1723*/            OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*1725*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1728*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1732*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*1735*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*1744*/            OPC_EmitConvertToTarget, 4,
/*1746*/            OPC_EmitConvertToTarget, 5,
/*1748*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 10, 6, 7, 8, 11, 12, 
                    // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, GR64:i64:$new, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                    // Dst: (CondStore32Inv:i32 (EXTRACT_SUBREG:i32 GR64:i64:$new, subreg_l32:i32), bdxaddr20only:i64:$addr, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*1761*/          0, /*End of Scope*/
/*1762*/        /*SwitchOpcode*/ 126|128,12/*1662*/, TARGET_VAL(ISD::AND),// ->3428
/*1766*/          OPC_MoveChild, 0,
/*1768*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1771*/          OPC_RecordMemRef,
/*1772*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1773*/          OPC_CheckFoldableChainNode,
/*1774*/          OPC_RecordChild1, // #2 = $src
/*1775*/          OPC_CheckChild1Type, MVT::i64,
/*1777*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1779*/          OPC_Scope, 54, /*->1835*/ // 28 children in Scope
/*1781*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1783*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1785*/            OPC_MoveParent,
/*1786*/            OPC_MoveChild, 1,
/*1788*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1791*/            OPC_RecordMemRef,
/*1792*/            OPC_RecordNode, // #3 = 'ld' chained node
/*1793*/            OPC_CheckFoldableChainNode,
/*1794*/            OPC_RecordChild1, // #4 = $dest
/*1795*/            OPC_CheckChild1Type, MVT::i64,
/*1797*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1799*/            OPC_MoveParent,
/*1800*/            OPC_CheckType, MVT::i32,
/*1802*/            OPC_MoveParent,
/*1803*/            OPC_CheckChild2Same, 4,
/*1805*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1807*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*1809*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*1812*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*1815*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1820*/            OPC_EmitInteger, MVT::i64, 1, 
/*1823*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*1835*/          /*Scope*/ 54, /*->1890*/
/*1836*/            OPC_MoveParent,
/*1837*/            OPC_MoveChild, 1,
/*1839*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1842*/            OPC_RecordMemRef,
/*1843*/            OPC_RecordNode, // #3 = 'ld' chained node
/*1844*/            OPC_CheckFoldableChainNode,
/*1845*/            OPC_RecordChild1, // #4 = $src
/*1846*/            OPC_CheckChild1Type, MVT::i64,
/*1848*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1850*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1852*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1854*/            OPC_MoveParent,
/*1855*/            OPC_CheckType, MVT::i32,
/*1857*/            OPC_MoveParent,
/*1858*/            OPC_CheckChild2Same, 2,
/*1860*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1862*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*1864*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*1867*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*1870*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1875*/            OPC_EmitInteger, MVT::i64, 1, 
/*1878*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*1890*/          /*Scope*/ 54, /*->1945*/
/*1891*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1893*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*1895*/            OPC_MoveParent,
/*1896*/            OPC_MoveChild, 1,
/*1898*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1901*/            OPC_RecordMemRef,
/*1902*/            OPC_RecordNode, // #3 = 'ld' chained node
/*1903*/            OPC_CheckFoldableChainNode,
/*1904*/            OPC_RecordChild1, // #4 = $dest
/*1905*/            OPC_CheckChild1Type, MVT::i64,
/*1907*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1909*/            OPC_MoveParent,
/*1910*/            OPC_CheckType, MVT::i32,
/*1912*/            OPC_MoveParent,
/*1913*/            OPC_CheckChild2Same, 4,
/*1915*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1917*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*1919*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*1922*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*1925*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1930*/            OPC_EmitInteger, MVT::i64, 2, 
/*1933*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*1945*/          /*Scope*/ 54, /*->2000*/
/*1946*/            OPC_MoveParent,
/*1947*/            OPC_MoveChild, 1,
/*1949*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1952*/            OPC_RecordMemRef,
/*1953*/            OPC_RecordNode, // #3 = 'ld' chained node
/*1954*/            OPC_CheckFoldableChainNode,
/*1955*/            OPC_RecordChild1, // #4 = $src
/*1956*/            OPC_CheckChild1Type, MVT::i64,
/*1958*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1960*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*1962*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*1964*/            OPC_MoveParent,
/*1965*/            OPC_CheckType, MVT::i32,
/*1967*/            OPC_MoveParent,
/*1968*/            OPC_CheckChild2Same, 2,
/*1970*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1972*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*1974*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*1977*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*1980*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1985*/            OPC_EmitInteger, MVT::i64, 2, 
/*1988*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2000*/          /*Scope*/ 52, /*->2053*/
/*2001*/            OPC_CheckPredicate, 13, // Predicate_load
/*2003*/            OPC_MoveParent,
/*2004*/            OPC_MoveChild, 1,
/*2006*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2009*/            OPC_RecordMemRef,
/*2010*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2011*/            OPC_CheckFoldableChainNode,
/*2012*/            OPC_RecordChild1, // #4 = $dest
/*2013*/            OPC_CheckChild1Type, MVT::i64,
/*2015*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2017*/            OPC_MoveParent,
/*2018*/            OPC_CheckType, MVT::i32,
/*2020*/            OPC_MoveParent,
/*2021*/            OPC_CheckChild2Same, 4,
/*2023*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2025*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2027*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2030*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2033*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2038*/            OPC_EmitInteger, MVT::i64, 4, 
/*2041*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2053*/          /*Scope*/ 52, /*->2106*/
/*2054*/            OPC_MoveParent,
/*2055*/            OPC_MoveChild, 1,
/*2057*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2060*/            OPC_RecordMemRef,
/*2061*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2062*/            OPC_CheckFoldableChainNode,
/*2063*/            OPC_RecordChild1, // #4 = $src
/*2064*/            OPC_CheckChild1Type, MVT::i64,
/*2066*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2068*/            OPC_CheckPredicate, 13, // Predicate_load
/*2070*/            OPC_MoveParent,
/*2071*/            OPC_CheckType, MVT::i32,
/*2073*/            OPC_MoveParent,
/*2074*/            OPC_CheckChild2Same, 2,
/*2076*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2078*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2080*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2083*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2086*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2091*/            OPC_EmitInteger, MVT::i64, 4, 
/*2094*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2106*/          /*Scope*/ 54, /*->2161*/
/*2107*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2109*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2111*/            OPC_MoveParent,
/*2112*/            OPC_MoveChild, 1,
/*2114*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2117*/            OPC_RecordMemRef,
/*2118*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2119*/            OPC_CheckFoldableChainNode,
/*2120*/            OPC_RecordChild1, // #4 = $dest
/*2121*/            OPC_CheckChild1Type, MVT::i64,
/*2123*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2125*/            OPC_MoveParent,
/*2126*/            OPC_CheckType, MVT::i64,
/*2128*/            OPC_MoveParent,
/*2129*/            OPC_CheckChild2Same, 4,
/*2131*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2133*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2135*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2138*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2141*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2146*/            OPC_EmitInteger, MVT::i64, 1, 
/*2149*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2161*/          /*Scope*/ 54, /*->2216*/
/*2162*/            OPC_MoveParent,
/*2163*/            OPC_MoveChild, 1,
/*2165*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2168*/            OPC_RecordMemRef,
/*2169*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2170*/            OPC_CheckFoldableChainNode,
/*2171*/            OPC_RecordChild1, // #4 = $src
/*2172*/            OPC_CheckChild1Type, MVT::i64,
/*2174*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2176*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2178*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2180*/            OPC_MoveParent,
/*2181*/            OPC_CheckType, MVT::i64,
/*2183*/            OPC_MoveParent,
/*2184*/            OPC_CheckChild2Same, 2,
/*2186*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2188*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2190*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2193*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2196*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2201*/            OPC_EmitInteger, MVT::i64, 1, 
/*2204*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2216*/          /*Scope*/ 54, /*->2271*/
/*2217*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2219*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2221*/            OPC_MoveParent,
/*2222*/            OPC_MoveChild, 1,
/*2224*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2227*/            OPC_RecordMemRef,
/*2228*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2229*/            OPC_CheckFoldableChainNode,
/*2230*/            OPC_RecordChild1, // #4 = $dest
/*2231*/            OPC_CheckChild1Type, MVT::i64,
/*2233*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2235*/            OPC_MoveParent,
/*2236*/            OPC_CheckType, MVT::i64,
/*2238*/            OPC_MoveParent,
/*2239*/            OPC_CheckChild2Same, 4,
/*2241*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2243*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2245*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2248*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2251*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2256*/            OPC_EmitInteger, MVT::i64, 2, 
/*2259*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2271*/          /*Scope*/ 54, /*->2326*/
/*2272*/            OPC_MoveParent,
/*2273*/            OPC_MoveChild, 1,
/*2275*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2278*/            OPC_RecordMemRef,
/*2279*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2280*/            OPC_CheckFoldableChainNode,
/*2281*/            OPC_RecordChild1, // #4 = $src
/*2282*/            OPC_CheckChild1Type, MVT::i64,
/*2284*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2286*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2288*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2290*/            OPC_MoveParent,
/*2291*/            OPC_CheckType, MVT::i64,
/*2293*/            OPC_MoveParent,
/*2294*/            OPC_CheckChild2Same, 2,
/*2296*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2298*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2300*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2303*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2306*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2311*/            OPC_EmitInteger, MVT::i64, 2, 
/*2314*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2326*/          /*Scope*/ 54, /*->2381*/
/*2327*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2329*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*2331*/            OPC_MoveParent,
/*2332*/            OPC_MoveChild, 1,
/*2334*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2337*/            OPC_RecordMemRef,
/*2338*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2339*/            OPC_CheckFoldableChainNode,
/*2340*/            OPC_RecordChild1, // #4 = $dest
/*2341*/            OPC_CheckChild1Type, MVT::i64,
/*2343*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2345*/            OPC_MoveParent,
/*2346*/            OPC_CheckType, MVT::i64,
/*2348*/            OPC_MoveParent,
/*2349*/            OPC_CheckChild2Same, 4,
/*2351*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2353*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2355*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2358*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2361*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2366*/            OPC_EmitInteger, MVT::i64, 4, 
/*2369*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2381*/          /*Scope*/ 54, /*->2436*/
/*2382*/            OPC_MoveParent,
/*2383*/            OPC_MoveChild, 1,
/*2385*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2388*/            OPC_RecordMemRef,
/*2389*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2390*/            OPC_CheckFoldableChainNode,
/*2391*/            OPC_RecordChild1, // #4 = $src
/*2392*/            OPC_CheckChild1Type, MVT::i64,
/*2394*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2396*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2398*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*2400*/            OPC_MoveParent,
/*2401*/            OPC_CheckType, MVT::i64,
/*2403*/            OPC_MoveParent,
/*2404*/            OPC_CheckChild2Same, 2,
/*2406*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2408*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2410*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2413*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2416*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2421*/            OPC_EmitInteger, MVT::i64, 4, 
/*2424*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2436*/          /*Scope*/ 52, /*->2489*/
/*2437*/            OPC_CheckPredicate, 13, // Predicate_load
/*2439*/            OPC_MoveParent,
/*2440*/            OPC_MoveChild, 1,
/*2442*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2445*/            OPC_RecordMemRef,
/*2446*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2447*/            OPC_CheckFoldableChainNode,
/*2448*/            OPC_RecordChild1, // #4 = $dest
/*2449*/            OPC_CheckChild1Type, MVT::i64,
/*2451*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2453*/            OPC_MoveParent,
/*2454*/            OPC_CheckType, MVT::i64,
/*2456*/            OPC_MoveParent,
/*2457*/            OPC_CheckChild2Same, 4,
/*2459*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2461*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2463*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2466*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2469*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2474*/            OPC_EmitInteger, MVT::i64, 8, 
/*2477*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*2489*/          /*Scope*/ 96, /*->2586*/
/*2490*/            OPC_MoveParent,
/*2491*/            OPC_MoveChild, 1,
/*2493*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2496*/            OPC_RecordMemRef,
/*2497*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2498*/            OPC_CheckFoldableChainNode,
/*2499*/            OPC_RecordChild1, // #4 = $src
/*2500*/            OPC_CheckChild1Type, MVT::i64,
/*2502*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2504*/            OPC_Scope, 38, /*->2544*/ // 2 children in Scope
/*2506*/              OPC_CheckPredicate, 13, // Predicate_load
/*2508*/              OPC_MoveParent,
/*2509*/              OPC_CheckType, MVT::i64,
/*2511*/              OPC_MoveParent,
/*2512*/              OPC_CheckChild2Same, 2,
/*2514*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2516*/              OPC_CheckPredicate, 22, // Predicate_block_and2
/*2518*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2521*/              OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2524*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2529*/              OPC_EmitInteger, MVT::i64, 8, 
/*2532*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                      // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                      // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*2544*/            /*Scope*/ 40, /*->2585*/
/*2545*/              OPC_CheckPredicate, 1, // Predicate_anyextload
/*2547*/              OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2549*/              OPC_MoveParent,
/*2550*/              OPC_CheckType, MVT::i32,
/*2552*/              OPC_MoveParent,
/*2553*/              OPC_CheckChild2Same, 2,
/*2555*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2557*/              OPC_CheckPredicate, 21, // Predicate_block_and1
/*2559*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2562*/              OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2565*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2570*/              OPC_EmitInteger, MVT::i64, 1, 
/*2573*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                      // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                      // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2585*/            0, /*End of Scope*/
/*2586*/          /*Scope*/ 54, /*->2641*/
/*2587*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2589*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2591*/            OPC_MoveParent,
/*2592*/            OPC_MoveChild, 1,
/*2594*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2597*/            OPC_RecordMemRef,
/*2598*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2599*/            OPC_CheckFoldableChainNode,
/*2600*/            OPC_RecordChild1, // #4 = $dest
/*2601*/            OPC_CheckChild1Type, MVT::i64,
/*2603*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2605*/            OPC_MoveParent,
/*2606*/            OPC_CheckType, MVT::i32,
/*2608*/            OPC_MoveParent,
/*2609*/            OPC_CheckChild2Same, 4,
/*2611*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2613*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2615*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2618*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2621*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2626*/            OPC_EmitInteger, MVT::i64, 1, 
/*2629*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2641*/          /*Scope*/ 54, /*->2696*/
/*2642*/            OPC_MoveParent,
/*2643*/            OPC_MoveChild, 1,
/*2645*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2648*/            OPC_RecordMemRef,
/*2649*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2650*/            OPC_CheckFoldableChainNode,
/*2651*/            OPC_RecordChild1, // #4 = $src
/*2652*/            OPC_CheckChild1Type, MVT::i64,
/*2654*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2656*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2658*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2660*/            OPC_MoveParent,
/*2661*/            OPC_CheckType, MVT::i32,
/*2663*/            OPC_MoveParent,
/*2664*/            OPC_CheckChild2Same, 2,
/*2666*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2668*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2670*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2673*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2676*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2681*/            OPC_EmitInteger, MVT::i64, 2, 
/*2684*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2696*/          /*Scope*/ 54, /*->2751*/
/*2697*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2699*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2701*/            OPC_MoveParent,
/*2702*/            OPC_MoveChild, 1,
/*2704*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2707*/            OPC_RecordMemRef,
/*2708*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2709*/            OPC_CheckFoldableChainNode,
/*2710*/            OPC_RecordChild1, // #4 = $dest
/*2711*/            OPC_CheckChild1Type, MVT::i64,
/*2713*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2715*/            OPC_MoveParent,
/*2716*/            OPC_CheckType, MVT::i32,
/*2718*/            OPC_MoveParent,
/*2719*/            OPC_CheckChild2Same, 4,
/*2721*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2723*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2725*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2728*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2731*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2736*/            OPC_EmitInteger, MVT::i64, 2, 
/*2739*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*2751*/          /*Scope*/ 52, /*->2804*/
/*2752*/            OPC_MoveParent,
/*2753*/            OPC_MoveChild, 1,
/*2755*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2758*/            OPC_RecordMemRef,
/*2759*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2760*/            OPC_CheckFoldableChainNode,
/*2761*/            OPC_RecordChild1, // #4 = $src
/*2762*/            OPC_CheckChild1Type, MVT::i64,
/*2764*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2766*/            OPC_CheckPredicate, 13, // Predicate_load
/*2768*/            OPC_MoveParent,
/*2769*/            OPC_CheckType, MVT::i32,
/*2771*/            OPC_MoveParent,
/*2772*/            OPC_CheckChild2Same, 2,
/*2774*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2776*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2778*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2781*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2784*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2789*/            OPC_EmitInteger, MVT::i64, 4, 
/*2792*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2804*/          /*Scope*/ 52, /*->2857*/
/*2805*/            OPC_CheckPredicate, 13, // Predicate_load
/*2807*/            OPC_MoveParent,
/*2808*/            OPC_MoveChild, 1,
/*2810*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2813*/            OPC_RecordMemRef,
/*2814*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2815*/            OPC_CheckFoldableChainNode,
/*2816*/            OPC_RecordChild1, // #4 = $dest
/*2817*/            OPC_CheckChild1Type, MVT::i64,
/*2819*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2821*/            OPC_MoveParent,
/*2822*/            OPC_CheckType, MVT::i32,
/*2824*/            OPC_MoveParent,
/*2825*/            OPC_CheckChild2Same, 4,
/*2827*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2829*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2831*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2834*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2837*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2842*/            OPC_EmitInteger, MVT::i64, 4, 
/*2845*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*2857*/          /*Scope*/ 54, /*->2912*/
/*2858*/            OPC_MoveParent,
/*2859*/            OPC_MoveChild, 1,
/*2861*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2864*/            OPC_RecordMemRef,
/*2865*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2866*/            OPC_CheckFoldableChainNode,
/*2867*/            OPC_RecordChild1, // #4 = $src
/*2868*/            OPC_CheckChild1Type, MVT::i64,
/*2870*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2872*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2874*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2876*/            OPC_MoveParent,
/*2877*/            OPC_CheckType, MVT::i64,
/*2879*/            OPC_MoveParent,
/*2880*/            OPC_CheckChild2Same, 2,
/*2882*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2884*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2886*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2889*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*2892*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2897*/            OPC_EmitInteger, MVT::i64, 1, 
/*2900*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2912*/          /*Scope*/ 54, /*->2967*/
/*2913*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2915*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2917*/            OPC_MoveParent,
/*2918*/            OPC_MoveChild, 1,
/*2920*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2923*/            OPC_RecordMemRef,
/*2924*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2925*/            OPC_CheckFoldableChainNode,
/*2926*/            OPC_RecordChild1, // #4 = $dest
/*2927*/            OPC_CheckChild1Type, MVT::i64,
/*2929*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2931*/            OPC_MoveParent,
/*2932*/            OPC_CheckType, MVT::i64,
/*2934*/            OPC_MoveParent,
/*2935*/            OPC_CheckChild2Same, 4,
/*2937*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2939*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*2941*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*2944*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*2947*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2952*/            OPC_EmitInteger, MVT::i64, 1, 
/*2955*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*2967*/          /*Scope*/ 54, /*->3022*/
/*2968*/            OPC_MoveParent,
/*2969*/            OPC_MoveChild, 1,
/*2971*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2974*/            OPC_RecordMemRef,
/*2975*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2976*/            OPC_CheckFoldableChainNode,
/*2977*/            OPC_RecordChild1, // #4 = $src
/*2978*/            OPC_CheckChild1Type, MVT::i64,
/*2980*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2982*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*2984*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2986*/            OPC_MoveParent,
/*2987*/            OPC_CheckType, MVT::i64,
/*2989*/            OPC_MoveParent,
/*2990*/            OPC_CheckChild2Same, 2,
/*2992*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2994*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*2996*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*2999*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3002*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3007*/            OPC_EmitInteger, MVT::i64, 2, 
/*3010*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*3022*/          /*Scope*/ 54, /*->3077*/
/*3023*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3025*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*3027*/            OPC_MoveParent,
/*3028*/            OPC_MoveChild, 1,
/*3030*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3033*/            OPC_RecordMemRef,
/*3034*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3035*/            OPC_CheckFoldableChainNode,
/*3036*/            OPC_RecordChild1, // #4 = $dest
/*3037*/            OPC_CheckChild1Type, MVT::i64,
/*3039*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3041*/            OPC_MoveParent,
/*3042*/            OPC_CheckType, MVT::i64,
/*3044*/            OPC_MoveParent,
/*3045*/            OPC_CheckChild2Same, 4,
/*3047*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3049*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*3051*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3054*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3057*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3062*/            OPC_EmitInteger, MVT::i64, 2, 
/*3065*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*3077*/          /*Scope*/ 54, /*->3132*/
/*3078*/            OPC_MoveParent,
/*3079*/            OPC_MoveChild, 1,
/*3081*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3084*/            OPC_RecordMemRef,
/*3085*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3086*/            OPC_CheckFoldableChainNode,
/*3087*/            OPC_RecordChild1, // #4 = $src
/*3088*/            OPC_CheckChild1Type, MVT::i64,
/*3090*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3092*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3094*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*3096*/            OPC_MoveParent,
/*3097*/            OPC_CheckType, MVT::i64,
/*3099*/            OPC_MoveParent,
/*3100*/            OPC_CheckChild2Same, 2,
/*3102*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3104*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*3106*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3109*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3112*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3117*/            OPC_EmitInteger, MVT::i64, 4, 
/*3120*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*3132*/          /*Scope*/ 54, /*->3187*/
/*3133*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3135*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*3137*/            OPC_MoveParent,
/*3138*/            OPC_MoveChild, 1,
/*3140*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3143*/            OPC_RecordMemRef,
/*3144*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3145*/            OPC_CheckFoldableChainNode,
/*3146*/            OPC_RecordChild1, // #4 = $dest
/*3147*/            OPC_CheckChild1Type, MVT::i64,
/*3149*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3151*/            OPC_MoveParent,
/*3152*/            OPC_CheckType, MVT::i64,
/*3154*/            OPC_MoveParent,
/*3155*/            OPC_CheckChild2Same, 4,
/*3157*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3159*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*3161*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3164*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3167*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3172*/            OPC_EmitInteger, MVT::i64, 4, 
/*3175*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*3187*/          /*Scope*/ 52, /*->3240*/
/*3188*/            OPC_MoveParent,
/*3189*/            OPC_MoveChild, 1,
/*3191*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3194*/            OPC_RecordMemRef,
/*3195*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3196*/            OPC_CheckFoldableChainNode,
/*3197*/            OPC_RecordChild1, // #4 = $src
/*3198*/            OPC_CheckChild1Type, MVT::i64,
/*3200*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3202*/            OPC_CheckPredicate, 13, // Predicate_load
/*3204*/            OPC_MoveParent,
/*3205*/            OPC_CheckType, MVT::i64,
/*3207*/            OPC_MoveParent,
/*3208*/            OPC_CheckChild2Same, 2,
/*3210*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3212*/            OPC_CheckPredicate, 21, // Predicate_block_and1
/*3214*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3217*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3220*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3225*/            OPC_EmitInteger, MVT::i64, 8, 
/*3228*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and1>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*3240*/          /*Scope*/ 52, /*->3293*/
/*3241*/            OPC_CheckPredicate, 13, // Predicate_load
/*3243*/            OPC_MoveParent,
/*3244*/            OPC_MoveChild, 1,
/*3246*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3249*/            OPC_RecordMemRef,
/*3250*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3251*/            OPC_CheckFoldableChainNode,
/*3252*/            OPC_RecordChild1, // #4 = $dest
/*3253*/            OPC_CheckChild1Type, MVT::i64,
/*3255*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3257*/            OPC_MoveParent,
/*3258*/            OPC_CheckType, MVT::i64,
/*3260*/            OPC_MoveParent,
/*3261*/            OPC_CheckChild2Same, 4,
/*3263*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3265*/            OPC_CheckPredicate, 22, // Predicate_block_and2
/*3267*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3270*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3273*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3278*/            OPC_EmitInteger, MVT::i64, 8, 
/*3281*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_and2>> - Complexity = 42
                    // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*3293*/          /*Scope*/ 4|128,1/*132*/, /*->3427*/
/*3295*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3297*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*3299*/            OPC_MoveParent,
/*3300*/            OPC_RecordChild1, // #3 = $src
/*3301*/            OPC_MoveChild, 1,
/*3303*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3306*/            OPC_MoveParent,
/*3307*/            OPC_SwitchType /*2 cases */, 57, MVT::i32,// ->3367
/*3310*/              OPC_MoveParent,
/*3311*/              OPC_CheckChild2Same, 2,
/*3313*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3315*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*3317*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3319*/              OPC_Scope, 22, /*->3343*/ // 2 children in Scope
/*3321*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*3324*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*3328*/                OPC_EmitConvertToTarget, 3,
/*3330*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*3333*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*3343*/              /*Scope*/ 22, /*->3366*/
/*3344*/                OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*3347*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*3351*/                OPC_EmitConvertToTarget, 3,
/*3353*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*3356*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*3366*/              0, /*End of Scope*/
/*3367*/            /*SwitchType*/ 57, MVT::i64,// ->3426
/*3369*/              OPC_MoveParent,
/*3370*/              OPC_CheckChild2Same, 2,
/*3372*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3374*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*3376*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3378*/              OPC_Scope, 22, /*->3402*/ // 2 children in Scope
/*3380*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*3383*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*3387*/                OPC_EmitConvertToTarget, 3,
/*3389*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*3392*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i64):$src))
/*3402*/              /*Scope*/ 22, /*->3425*/
/*3403*/                OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*3406*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*3410*/                OPC_EmitConvertToTarget, 3,
/*3412*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*3415*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i64):$src))
/*3425*/              0, /*End of Scope*/
/*3426*/            0, // EndSwitchType
/*3427*/          0, /*End of Scope*/
/*3428*/        /*SwitchOpcode*/ 126|128,12/*1662*/, TARGET_VAL(ISD::OR),// ->5094
/*3432*/          OPC_MoveChild, 0,
/*3434*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3437*/          OPC_RecordMemRef,
/*3438*/          OPC_RecordNode, // #1 = 'ld' chained node
/*3439*/          OPC_CheckFoldableChainNode,
/*3440*/          OPC_RecordChild1, // #2 = $src
/*3441*/          OPC_CheckChild1Type, MVT::i64,
/*3443*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3445*/          OPC_Scope, 54, /*->3501*/ // 28 children in Scope
/*3447*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3449*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*3451*/            OPC_MoveParent,
/*3452*/            OPC_MoveChild, 1,
/*3454*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3457*/            OPC_RecordMemRef,
/*3458*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3459*/            OPC_CheckFoldableChainNode,
/*3460*/            OPC_RecordChild1, // #4 = $dest
/*3461*/            OPC_CheckChild1Type, MVT::i64,
/*3463*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3465*/            OPC_MoveParent,
/*3466*/            OPC_CheckType, MVT::i32,
/*3468*/            OPC_MoveParent,
/*3469*/            OPC_CheckChild2Same, 4,
/*3471*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3473*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*3475*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3478*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3481*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3486*/            OPC_EmitInteger, MVT::i64, 1, 
/*3489*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*3501*/          /*Scope*/ 54, /*->3556*/
/*3502*/            OPC_MoveParent,
/*3503*/            OPC_MoveChild, 1,
/*3505*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3508*/            OPC_RecordMemRef,
/*3509*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3510*/            OPC_CheckFoldableChainNode,
/*3511*/            OPC_RecordChild1, // #4 = $src
/*3512*/            OPC_CheckChild1Type, MVT::i64,
/*3514*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3516*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3518*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*3520*/            OPC_MoveParent,
/*3521*/            OPC_CheckType, MVT::i32,
/*3523*/            OPC_MoveParent,
/*3524*/            OPC_CheckChild2Same, 2,
/*3526*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3528*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*3530*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3533*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3536*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3541*/            OPC_EmitInteger, MVT::i64, 1, 
/*3544*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*3556*/          /*Scope*/ 54, /*->3611*/
/*3557*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3559*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*3561*/            OPC_MoveParent,
/*3562*/            OPC_MoveChild, 1,
/*3564*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3567*/            OPC_RecordMemRef,
/*3568*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3569*/            OPC_CheckFoldableChainNode,
/*3570*/            OPC_RecordChild1, // #4 = $dest
/*3571*/            OPC_CheckChild1Type, MVT::i64,
/*3573*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3575*/            OPC_MoveParent,
/*3576*/            OPC_CheckType, MVT::i32,
/*3578*/            OPC_MoveParent,
/*3579*/            OPC_CheckChild2Same, 4,
/*3581*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3583*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*3585*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3588*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3591*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3596*/            OPC_EmitInteger, MVT::i64, 2, 
/*3599*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*3611*/          /*Scope*/ 54, /*->3666*/
/*3612*/            OPC_MoveParent,
/*3613*/            OPC_MoveChild, 1,
/*3615*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3618*/            OPC_RecordMemRef,
/*3619*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3620*/            OPC_CheckFoldableChainNode,
/*3621*/            OPC_RecordChild1, // #4 = $src
/*3622*/            OPC_CheckChild1Type, MVT::i64,
/*3624*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3626*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3628*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*3630*/            OPC_MoveParent,
/*3631*/            OPC_CheckType, MVT::i32,
/*3633*/            OPC_MoveParent,
/*3634*/            OPC_CheckChild2Same, 2,
/*3636*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3638*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*3640*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3643*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3646*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3651*/            OPC_EmitInteger, MVT::i64, 2, 
/*3654*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*3666*/          /*Scope*/ 52, /*->3719*/
/*3667*/            OPC_CheckPredicate, 13, // Predicate_load
/*3669*/            OPC_MoveParent,
/*3670*/            OPC_MoveChild, 1,
/*3672*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3675*/            OPC_RecordMemRef,
/*3676*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3677*/            OPC_CheckFoldableChainNode,
/*3678*/            OPC_RecordChild1, // #4 = $dest
/*3679*/            OPC_CheckChild1Type, MVT::i64,
/*3681*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3683*/            OPC_MoveParent,
/*3684*/            OPC_CheckType, MVT::i32,
/*3686*/            OPC_MoveParent,
/*3687*/            OPC_CheckChild2Same, 4,
/*3689*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3691*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*3693*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3696*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3699*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3704*/            OPC_EmitInteger, MVT::i64, 4, 
/*3707*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*3719*/          /*Scope*/ 52, /*->3772*/
/*3720*/            OPC_MoveParent,
/*3721*/            OPC_MoveChild, 1,
/*3723*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3726*/            OPC_RecordMemRef,
/*3727*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3728*/            OPC_CheckFoldableChainNode,
/*3729*/            OPC_RecordChild1, // #4 = $src
/*3730*/            OPC_CheckChild1Type, MVT::i64,
/*3732*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3734*/            OPC_CheckPredicate, 13, // Predicate_load
/*3736*/            OPC_MoveParent,
/*3737*/            OPC_CheckType, MVT::i32,
/*3739*/            OPC_MoveParent,
/*3740*/            OPC_CheckChild2Same, 2,
/*3742*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3744*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*3746*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3749*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3752*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3757*/            OPC_EmitInteger, MVT::i64, 4, 
/*3760*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*3772*/          /*Scope*/ 54, /*->3827*/
/*3773*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3775*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*3777*/            OPC_MoveParent,
/*3778*/            OPC_MoveChild, 1,
/*3780*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3783*/            OPC_RecordMemRef,
/*3784*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3785*/            OPC_CheckFoldableChainNode,
/*3786*/            OPC_RecordChild1, // #4 = $dest
/*3787*/            OPC_CheckChild1Type, MVT::i64,
/*3789*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3791*/            OPC_MoveParent,
/*3792*/            OPC_CheckType, MVT::i64,
/*3794*/            OPC_MoveParent,
/*3795*/            OPC_CheckChild2Same, 4,
/*3797*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3799*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*3801*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3804*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3807*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3812*/            OPC_EmitInteger, MVT::i64, 1, 
/*3815*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*3827*/          /*Scope*/ 54, /*->3882*/
/*3828*/            OPC_MoveParent,
/*3829*/            OPC_MoveChild, 1,
/*3831*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3834*/            OPC_RecordMemRef,
/*3835*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3836*/            OPC_CheckFoldableChainNode,
/*3837*/            OPC_RecordChild1, // #4 = $src
/*3838*/            OPC_CheckChild1Type, MVT::i64,
/*3840*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3842*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3844*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*3846*/            OPC_MoveParent,
/*3847*/            OPC_CheckType, MVT::i64,
/*3849*/            OPC_MoveParent,
/*3850*/            OPC_CheckChild2Same, 2,
/*3852*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3854*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*3856*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3859*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3862*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3867*/            OPC_EmitInteger, MVT::i64, 1, 
/*3870*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*3882*/          /*Scope*/ 54, /*->3937*/
/*3883*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3885*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*3887*/            OPC_MoveParent,
/*3888*/            OPC_MoveChild, 1,
/*3890*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3893*/            OPC_RecordMemRef,
/*3894*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3895*/            OPC_CheckFoldableChainNode,
/*3896*/            OPC_RecordChild1, // #4 = $dest
/*3897*/            OPC_CheckChild1Type, MVT::i64,
/*3899*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3901*/            OPC_MoveParent,
/*3902*/            OPC_CheckType, MVT::i64,
/*3904*/            OPC_MoveParent,
/*3905*/            OPC_CheckChild2Same, 4,
/*3907*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3909*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*3911*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*3914*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*3917*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3922*/            OPC_EmitInteger, MVT::i64, 2, 
/*3925*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*3937*/          /*Scope*/ 54, /*->3992*/
/*3938*/            OPC_MoveParent,
/*3939*/            OPC_MoveChild, 1,
/*3941*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3944*/            OPC_RecordMemRef,
/*3945*/            OPC_RecordNode, // #3 = 'ld' chained node
/*3946*/            OPC_CheckFoldableChainNode,
/*3947*/            OPC_RecordChild1, // #4 = $src
/*3948*/            OPC_CheckChild1Type, MVT::i64,
/*3950*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3952*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3954*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*3956*/            OPC_MoveParent,
/*3957*/            OPC_CheckType, MVT::i64,
/*3959*/            OPC_MoveParent,
/*3960*/            OPC_CheckChild2Same, 2,
/*3962*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3964*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*3966*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*3969*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*3972*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*3977*/            OPC_EmitInteger, MVT::i64, 2, 
/*3980*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*3992*/          /*Scope*/ 54, /*->4047*/
/*3993*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*3995*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*3997*/            OPC_MoveParent,
/*3998*/            OPC_MoveChild, 1,
/*4000*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4003*/            OPC_RecordMemRef,
/*4004*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4005*/            OPC_CheckFoldableChainNode,
/*4006*/            OPC_RecordChild1, // #4 = $dest
/*4007*/            OPC_CheckChild1Type, MVT::i64,
/*4009*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4011*/            OPC_MoveParent,
/*4012*/            OPC_CheckType, MVT::i64,
/*4014*/            OPC_MoveParent,
/*4015*/            OPC_CheckChild2Same, 4,
/*4017*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4019*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4021*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4024*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4027*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4032*/            OPC_EmitInteger, MVT::i64, 4, 
/*4035*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*4047*/          /*Scope*/ 54, /*->4102*/
/*4048*/            OPC_MoveParent,
/*4049*/            OPC_MoveChild, 1,
/*4051*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4054*/            OPC_RecordMemRef,
/*4055*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4056*/            OPC_CheckFoldableChainNode,
/*4057*/            OPC_RecordChild1, // #4 = $src
/*4058*/            OPC_CheckChild1Type, MVT::i64,
/*4060*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4062*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4064*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*4066*/            OPC_MoveParent,
/*4067*/            OPC_CheckType, MVT::i64,
/*4069*/            OPC_MoveParent,
/*4070*/            OPC_CheckChild2Same, 2,
/*4072*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4074*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4076*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4079*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4082*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4087*/            OPC_EmitInteger, MVT::i64, 4, 
/*4090*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*4102*/          /*Scope*/ 52, /*->4155*/
/*4103*/            OPC_CheckPredicate, 13, // Predicate_load
/*4105*/            OPC_MoveParent,
/*4106*/            OPC_MoveChild, 1,
/*4108*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4111*/            OPC_RecordMemRef,
/*4112*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4113*/            OPC_CheckFoldableChainNode,
/*4114*/            OPC_RecordChild1, // #4 = $dest
/*4115*/            OPC_CheckChild1Type, MVT::i64,
/*4117*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4119*/            OPC_MoveParent,
/*4120*/            OPC_CheckType, MVT::i64,
/*4122*/            OPC_MoveParent,
/*4123*/            OPC_CheckChild2Same, 4,
/*4125*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4127*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4129*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4132*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4135*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4140*/            OPC_EmitInteger, MVT::i64, 8, 
/*4143*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*4155*/          /*Scope*/ 96, /*->4252*/
/*4156*/            OPC_MoveParent,
/*4157*/            OPC_MoveChild, 1,
/*4159*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4162*/            OPC_RecordMemRef,
/*4163*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4164*/            OPC_CheckFoldableChainNode,
/*4165*/            OPC_RecordChild1, // #4 = $src
/*4166*/            OPC_CheckChild1Type, MVT::i64,
/*4168*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4170*/            OPC_Scope, 38, /*->4210*/ // 2 children in Scope
/*4172*/              OPC_CheckPredicate, 13, // Predicate_load
/*4174*/              OPC_MoveParent,
/*4175*/              OPC_CheckType, MVT::i64,
/*4177*/              OPC_MoveParent,
/*4178*/              OPC_CheckChild2Same, 2,
/*4180*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4182*/              OPC_CheckPredicate, 24, // Predicate_block_or2
/*4184*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4187*/              OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4190*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4195*/              OPC_EmitInteger, MVT::i64, 8, 
/*4198*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                      // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                      // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*4210*/            /*Scope*/ 40, /*->4251*/
/*4211*/              OPC_CheckPredicate, 1, // Predicate_anyextload
/*4213*/              OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*4215*/              OPC_MoveParent,
/*4216*/              OPC_CheckType, MVT::i32,
/*4218*/              OPC_MoveParent,
/*4219*/              OPC_CheckChild2Same, 2,
/*4221*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4223*/              OPC_CheckPredicate, 23, // Predicate_block_or1
/*4225*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4228*/              OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4231*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4236*/              OPC_EmitInteger, MVT::i64, 1, 
/*4239*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                      // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                      // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*4251*/            0, /*End of Scope*/
/*4252*/          /*Scope*/ 54, /*->4307*/
/*4253*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4255*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*4257*/            OPC_MoveParent,
/*4258*/            OPC_MoveChild, 1,
/*4260*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4263*/            OPC_RecordMemRef,
/*4264*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4265*/            OPC_CheckFoldableChainNode,
/*4266*/            OPC_RecordChild1, // #4 = $dest
/*4267*/            OPC_CheckChild1Type, MVT::i64,
/*4269*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4271*/            OPC_MoveParent,
/*4272*/            OPC_CheckType, MVT::i32,
/*4274*/            OPC_MoveParent,
/*4275*/            OPC_CheckChild2Same, 4,
/*4277*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4279*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4281*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4284*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4287*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4292*/            OPC_EmitInteger, MVT::i64, 1, 
/*4295*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*4307*/          /*Scope*/ 54, /*->4362*/
/*4308*/            OPC_MoveParent,
/*4309*/            OPC_MoveChild, 1,
/*4311*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4314*/            OPC_RecordMemRef,
/*4315*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4316*/            OPC_CheckFoldableChainNode,
/*4317*/            OPC_RecordChild1, // #4 = $src
/*4318*/            OPC_CheckChild1Type, MVT::i64,
/*4320*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4322*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4324*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*4326*/            OPC_MoveParent,
/*4327*/            OPC_CheckType, MVT::i32,
/*4329*/            OPC_MoveParent,
/*4330*/            OPC_CheckChild2Same, 2,
/*4332*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4334*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4336*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4339*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4342*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4347*/            OPC_EmitInteger, MVT::i64, 2, 
/*4350*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*4362*/          /*Scope*/ 54, /*->4417*/
/*4363*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4365*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*4367*/            OPC_MoveParent,
/*4368*/            OPC_MoveChild, 1,
/*4370*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4373*/            OPC_RecordMemRef,
/*4374*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4375*/            OPC_CheckFoldableChainNode,
/*4376*/            OPC_RecordChild1, // #4 = $dest
/*4377*/            OPC_CheckChild1Type, MVT::i64,
/*4379*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4381*/            OPC_MoveParent,
/*4382*/            OPC_CheckType, MVT::i32,
/*4384*/            OPC_MoveParent,
/*4385*/            OPC_CheckChild2Same, 4,
/*4387*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4389*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4391*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4394*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4397*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4402*/            OPC_EmitInteger, MVT::i64, 2, 
/*4405*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*4417*/          /*Scope*/ 52, /*->4470*/
/*4418*/            OPC_MoveParent,
/*4419*/            OPC_MoveChild, 1,
/*4421*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4424*/            OPC_RecordMemRef,
/*4425*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4426*/            OPC_CheckFoldableChainNode,
/*4427*/            OPC_RecordChild1, // #4 = $src
/*4428*/            OPC_CheckChild1Type, MVT::i64,
/*4430*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4432*/            OPC_CheckPredicate, 13, // Predicate_load
/*4434*/            OPC_MoveParent,
/*4435*/            OPC_CheckType, MVT::i32,
/*4437*/            OPC_MoveParent,
/*4438*/            OPC_CheckChild2Same, 2,
/*4440*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4442*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4444*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4447*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4450*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4455*/            OPC_EmitInteger, MVT::i64, 4, 
/*4458*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*4470*/          /*Scope*/ 52, /*->4523*/
/*4471*/            OPC_CheckPredicate, 13, // Predicate_load
/*4473*/            OPC_MoveParent,
/*4474*/            OPC_MoveChild, 1,
/*4476*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4479*/            OPC_RecordMemRef,
/*4480*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4481*/            OPC_CheckFoldableChainNode,
/*4482*/            OPC_RecordChild1, // #4 = $dest
/*4483*/            OPC_CheckChild1Type, MVT::i64,
/*4485*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4487*/            OPC_MoveParent,
/*4488*/            OPC_CheckType, MVT::i32,
/*4490*/            OPC_MoveParent,
/*4491*/            OPC_CheckChild2Same, 4,
/*4493*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4495*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4497*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4500*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4503*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4508*/            OPC_EmitInteger, MVT::i64, 4, 
/*4511*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*4523*/          /*Scope*/ 54, /*->4578*/
/*4524*/            OPC_MoveParent,
/*4525*/            OPC_MoveChild, 1,
/*4527*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4530*/            OPC_RecordMemRef,
/*4531*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4532*/            OPC_CheckFoldableChainNode,
/*4533*/            OPC_RecordChild1, // #4 = $src
/*4534*/            OPC_CheckChild1Type, MVT::i64,
/*4536*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4538*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4540*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*4542*/            OPC_MoveParent,
/*4543*/            OPC_CheckType, MVT::i64,
/*4545*/            OPC_MoveParent,
/*4546*/            OPC_CheckChild2Same, 2,
/*4548*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4550*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4552*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4555*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4558*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4563*/            OPC_EmitInteger, MVT::i64, 1, 
/*4566*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*4578*/          /*Scope*/ 54, /*->4633*/
/*4579*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4581*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*4583*/            OPC_MoveParent,
/*4584*/            OPC_MoveChild, 1,
/*4586*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4589*/            OPC_RecordMemRef,
/*4590*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4591*/            OPC_CheckFoldableChainNode,
/*4592*/            OPC_RecordChild1, // #4 = $dest
/*4593*/            OPC_CheckChild1Type, MVT::i64,
/*4595*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4597*/            OPC_MoveParent,
/*4598*/            OPC_CheckType, MVT::i64,
/*4600*/            OPC_MoveParent,
/*4601*/            OPC_CheckChild2Same, 4,
/*4603*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4605*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4607*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4610*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4613*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4618*/            OPC_EmitInteger, MVT::i64, 1, 
/*4621*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*4633*/          /*Scope*/ 54, /*->4688*/
/*4634*/            OPC_MoveParent,
/*4635*/            OPC_MoveChild, 1,
/*4637*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4640*/            OPC_RecordMemRef,
/*4641*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4642*/            OPC_CheckFoldableChainNode,
/*4643*/            OPC_RecordChild1, // #4 = $src
/*4644*/            OPC_CheckChild1Type, MVT::i64,
/*4646*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4648*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4650*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*4652*/            OPC_MoveParent,
/*4653*/            OPC_CheckType, MVT::i64,
/*4655*/            OPC_MoveParent,
/*4656*/            OPC_CheckChild2Same, 2,
/*4658*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4660*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4662*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4665*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4668*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4673*/            OPC_EmitInteger, MVT::i64, 2, 
/*4676*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*4688*/          /*Scope*/ 54, /*->4743*/
/*4689*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4691*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*4693*/            OPC_MoveParent,
/*4694*/            OPC_MoveChild, 1,
/*4696*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4699*/            OPC_RecordMemRef,
/*4700*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4701*/            OPC_CheckFoldableChainNode,
/*4702*/            OPC_RecordChild1, // #4 = $dest
/*4703*/            OPC_CheckChild1Type, MVT::i64,
/*4705*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4707*/            OPC_MoveParent,
/*4708*/            OPC_CheckType, MVT::i64,
/*4710*/            OPC_MoveParent,
/*4711*/            OPC_CheckChild2Same, 4,
/*4713*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4715*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4717*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4720*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4723*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4728*/            OPC_EmitInteger, MVT::i64, 2, 
/*4731*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*4743*/          /*Scope*/ 54, /*->4798*/
/*4744*/            OPC_MoveParent,
/*4745*/            OPC_MoveChild, 1,
/*4747*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4750*/            OPC_RecordMemRef,
/*4751*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4752*/            OPC_CheckFoldableChainNode,
/*4753*/            OPC_RecordChild1, // #4 = $src
/*4754*/            OPC_CheckChild1Type, MVT::i64,
/*4756*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4758*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4760*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*4762*/            OPC_MoveParent,
/*4763*/            OPC_CheckType, MVT::i64,
/*4765*/            OPC_MoveParent,
/*4766*/            OPC_CheckChild2Same, 2,
/*4768*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4770*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4772*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4775*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4778*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4783*/            OPC_EmitInteger, MVT::i64, 4, 
/*4786*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*4798*/          /*Scope*/ 54, /*->4853*/
/*4799*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4801*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*4803*/            OPC_MoveParent,
/*4804*/            OPC_MoveChild, 1,
/*4806*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4809*/            OPC_RecordMemRef,
/*4810*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4811*/            OPC_CheckFoldableChainNode,
/*4812*/            OPC_RecordChild1, // #4 = $dest
/*4813*/            OPC_CheckChild1Type, MVT::i64,
/*4815*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4817*/            OPC_MoveParent,
/*4818*/            OPC_CheckType, MVT::i64,
/*4820*/            OPC_MoveParent,
/*4821*/            OPC_CheckChild2Same, 4,
/*4823*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4825*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4827*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4830*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4833*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4838*/            OPC_EmitInteger, MVT::i64, 4, 
/*4841*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*4853*/          /*Scope*/ 52, /*->4906*/
/*4854*/            OPC_MoveParent,
/*4855*/            OPC_MoveChild, 1,
/*4857*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4860*/            OPC_RecordMemRef,
/*4861*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4862*/            OPC_CheckFoldableChainNode,
/*4863*/            OPC_RecordChild1, // #4 = $src
/*4864*/            OPC_CheckChild1Type, MVT::i64,
/*4866*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4868*/            OPC_CheckPredicate, 13, // Predicate_load
/*4870*/            OPC_MoveParent,
/*4871*/            OPC_CheckType, MVT::i64,
/*4873*/            OPC_MoveParent,
/*4874*/            OPC_CheckChild2Same, 2,
/*4876*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4878*/            OPC_CheckPredicate, 23, // Predicate_block_or1
/*4880*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*4883*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*4886*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4891*/            OPC_EmitInteger, MVT::i64, 8, 
/*4894*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or1>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*4906*/          /*Scope*/ 52, /*->4959*/
/*4907*/            OPC_CheckPredicate, 13, // Predicate_load
/*4909*/            OPC_MoveParent,
/*4910*/            OPC_MoveChild, 1,
/*4912*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4915*/            OPC_RecordMemRef,
/*4916*/            OPC_RecordNode, // #3 = 'ld' chained node
/*4917*/            OPC_CheckFoldableChainNode,
/*4918*/            OPC_RecordChild1, // #4 = $dest
/*4919*/            OPC_CheckChild1Type, MVT::i64,
/*4921*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4923*/            OPC_MoveParent,
/*4924*/            OPC_CheckType, MVT::i64,
/*4926*/            OPC_MoveParent,
/*4927*/            OPC_CheckChild2Same, 4,
/*4929*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4931*/            OPC_CheckPredicate, 24, // Predicate_block_or2
/*4933*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*4936*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*4939*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*4944*/            OPC_EmitInteger, MVT::i64, 8, 
/*4947*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_or2>> - Complexity = 42
                    // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*4959*/          /*Scope*/ 4|128,1/*132*/, /*->5093*/
/*4961*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*4963*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*4965*/            OPC_MoveParent,
/*4966*/            OPC_RecordChild1, // #3 = $src
/*4967*/            OPC_MoveChild, 1,
/*4969*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4972*/            OPC_MoveParent,
/*4973*/            OPC_SwitchType /*2 cases */, 57, MVT::i32,// ->5033
/*4976*/              OPC_MoveParent,
/*4977*/              OPC_CheckChild2Same, 2,
/*4979*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*4981*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*4983*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*4985*/              OPC_Scope, 22, /*->5009*/ // 2 children in Scope
/*4987*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*4990*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*4994*/                OPC_EmitConvertToTarget, 3,
/*4996*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*4999*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*5009*/              /*Scope*/ 22, /*->5032*/
/*5010*/                OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*5013*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*5017*/                OPC_EmitConvertToTarget, 3,
/*5019*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*5022*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*5032*/              0, /*End of Scope*/
/*5033*/            /*SwitchType*/ 57, MVT::i64,// ->5092
/*5035*/              OPC_MoveParent,
/*5036*/              OPC_CheckChild2Same, 2,
/*5038*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5040*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*5042*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*5044*/              OPC_Scope, 22, /*->5068*/ // 2 children in Scope
/*5046*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*5049*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*5053*/                OPC_EmitConvertToTarget, 3,
/*5055*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*5058*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i64):$src))
/*5068*/              /*Scope*/ 22, /*->5091*/
/*5069*/                OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*5072*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*5076*/                OPC_EmitConvertToTarget, 3,
/*5078*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*5081*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i64):$src))
/*5091*/              0, /*End of Scope*/
/*5092*/            0, // EndSwitchType
/*5093*/          0, /*End of Scope*/
/*5094*/        /*SwitchOpcode*/ 126|128,12/*1662*/, TARGET_VAL(ISD::XOR),// ->6760
/*5098*/          OPC_MoveChild, 0,
/*5100*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5103*/          OPC_RecordMemRef,
/*5104*/          OPC_RecordNode, // #1 = 'ld' chained node
/*5105*/          OPC_CheckFoldableChainNode,
/*5106*/          OPC_RecordChild1, // #2 = $src
/*5107*/          OPC_CheckChild1Type, MVT::i64,
/*5109*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5111*/          OPC_Scope, 54, /*->5167*/ // 28 children in Scope
/*5113*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5115*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*5117*/            OPC_MoveParent,
/*5118*/            OPC_MoveChild, 1,
/*5120*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5123*/            OPC_RecordMemRef,
/*5124*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5125*/            OPC_CheckFoldableChainNode,
/*5126*/            OPC_RecordChild1, // #4 = $dest
/*5127*/            OPC_CheckChild1Type, MVT::i64,
/*5129*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5131*/            OPC_MoveParent,
/*5132*/            OPC_CheckType, MVT::i32,
/*5134*/            OPC_MoveParent,
/*5135*/            OPC_CheckChild2Same, 4,
/*5137*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5139*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5141*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5144*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5147*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5152*/            OPC_EmitInteger, MVT::i64, 1, 
/*5155*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*5167*/          /*Scope*/ 54, /*->5222*/
/*5168*/            OPC_MoveParent,
/*5169*/            OPC_MoveChild, 1,
/*5171*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5174*/            OPC_RecordMemRef,
/*5175*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5176*/            OPC_CheckFoldableChainNode,
/*5177*/            OPC_RecordChild1, // #4 = $src
/*5178*/            OPC_CheckChild1Type, MVT::i64,
/*5180*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5182*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5184*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*5186*/            OPC_MoveParent,
/*5187*/            OPC_CheckType, MVT::i32,
/*5189*/            OPC_MoveParent,
/*5190*/            OPC_CheckChild2Same, 2,
/*5192*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5194*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5196*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5199*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5202*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5207*/            OPC_EmitInteger, MVT::i64, 1, 
/*5210*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*5222*/          /*Scope*/ 54, /*->5277*/
/*5223*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5225*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*5227*/            OPC_MoveParent,
/*5228*/            OPC_MoveChild, 1,
/*5230*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5233*/            OPC_RecordMemRef,
/*5234*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5235*/            OPC_CheckFoldableChainNode,
/*5236*/            OPC_RecordChild1, // #4 = $dest
/*5237*/            OPC_CheckChild1Type, MVT::i64,
/*5239*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5241*/            OPC_MoveParent,
/*5242*/            OPC_CheckType, MVT::i32,
/*5244*/            OPC_MoveParent,
/*5245*/            OPC_CheckChild2Same, 4,
/*5247*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5249*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5251*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5254*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5257*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5262*/            OPC_EmitInteger, MVT::i64, 2, 
/*5265*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*5277*/          /*Scope*/ 54, /*->5332*/
/*5278*/            OPC_MoveParent,
/*5279*/            OPC_MoveChild, 1,
/*5281*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5284*/            OPC_RecordMemRef,
/*5285*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5286*/            OPC_CheckFoldableChainNode,
/*5287*/            OPC_RecordChild1, // #4 = $src
/*5288*/            OPC_CheckChild1Type, MVT::i64,
/*5290*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5292*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5294*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*5296*/            OPC_MoveParent,
/*5297*/            OPC_CheckType, MVT::i32,
/*5299*/            OPC_MoveParent,
/*5300*/            OPC_CheckChild2Same, 2,
/*5302*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5304*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5306*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5309*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5312*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5317*/            OPC_EmitInteger, MVT::i64, 2, 
/*5320*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*5332*/          /*Scope*/ 52, /*->5385*/
/*5333*/            OPC_CheckPredicate, 13, // Predicate_load
/*5335*/            OPC_MoveParent,
/*5336*/            OPC_MoveChild, 1,
/*5338*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5341*/            OPC_RecordMemRef,
/*5342*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5343*/            OPC_CheckFoldableChainNode,
/*5344*/            OPC_RecordChild1, // #4 = $dest
/*5345*/            OPC_CheckChild1Type, MVT::i64,
/*5347*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5349*/            OPC_MoveParent,
/*5350*/            OPC_CheckType, MVT::i32,
/*5352*/            OPC_MoveParent,
/*5353*/            OPC_CheckChild2Same, 4,
/*5355*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5357*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5359*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5362*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5365*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5370*/            OPC_EmitInteger, MVT::i64, 4, 
/*5373*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*5385*/          /*Scope*/ 52, /*->5438*/
/*5386*/            OPC_MoveParent,
/*5387*/            OPC_MoveChild, 1,
/*5389*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5392*/            OPC_RecordMemRef,
/*5393*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5394*/            OPC_CheckFoldableChainNode,
/*5395*/            OPC_RecordChild1, // #4 = $src
/*5396*/            OPC_CheckChild1Type, MVT::i64,
/*5398*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5400*/            OPC_CheckPredicate, 13, // Predicate_load
/*5402*/            OPC_MoveParent,
/*5403*/            OPC_CheckType, MVT::i32,
/*5405*/            OPC_MoveParent,
/*5406*/            OPC_CheckChild2Same, 2,
/*5408*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5410*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5412*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5415*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5418*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5423*/            OPC_EmitInteger, MVT::i64, 4, 
/*5426*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*5438*/          /*Scope*/ 54, /*->5493*/
/*5439*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5441*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*5443*/            OPC_MoveParent,
/*5444*/            OPC_MoveChild, 1,
/*5446*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5449*/            OPC_RecordMemRef,
/*5450*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5451*/            OPC_CheckFoldableChainNode,
/*5452*/            OPC_RecordChild1, // #4 = $dest
/*5453*/            OPC_CheckChild1Type, MVT::i64,
/*5455*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5457*/            OPC_MoveParent,
/*5458*/            OPC_CheckType, MVT::i64,
/*5460*/            OPC_MoveParent,
/*5461*/            OPC_CheckChild2Same, 4,
/*5463*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5465*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5467*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5470*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5473*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5478*/            OPC_EmitInteger, MVT::i64, 1, 
/*5481*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*5493*/          /*Scope*/ 54, /*->5548*/
/*5494*/            OPC_MoveParent,
/*5495*/            OPC_MoveChild, 1,
/*5497*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5500*/            OPC_RecordMemRef,
/*5501*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5502*/            OPC_CheckFoldableChainNode,
/*5503*/            OPC_RecordChild1, // #4 = $src
/*5504*/            OPC_CheckChild1Type, MVT::i64,
/*5506*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5508*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5510*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*5512*/            OPC_MoveParent,
/*5513*/            OPC_CheckType, MVT::i64,
/*5515*/            OPC_MoveParent,
/*5516*/            OPC_CheckChild2Same, 2,
/*5518*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5520*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5522*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5525*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5528*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5533*/            OPC_EmitInteger, MVT::i64, 1, 
/*5536*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*5548*/          /*Scope*/ 54, /*->5603*/
/*5549*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5551*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*5553*/            OPC_MoveParent,
/*5554*/            OPC_MoveChild, 1,
/*5556*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5559*/            OPC_RecordMemRef,
/*5560*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5561*/            OPC_CheckFoldableChainNode,
/*5562*/            OPC_RecordChild1, // #4 = $dest
/*5563*/            OPC_CheckChild1Type, MVT::i64,
/*5565*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5567*/            OPC_MoveParent,
/*5568*/            OPC_CheckType, MVT::i64,
/*5570*/            OPC_MoveParent,
/*5571*/            OPC_CheckChild2Same, 4,
/*5573*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5575*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5577*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5580*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5583*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5588*/            OPC_EmitInteger, MVT::i64, 2, 
/*5591*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*5603*/          /*Scope*/ 54, /*->5658*/
/*5604*/            OPC_MoveParent,
/*5605*/            OPC_MoveChild, 1,
/*5607*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5610*/            OPC_RecordMemRef,
/*5611*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5612*/            OPC_CheckFoldableChainNode,
/*5613*/            OPC_RecordChild1, // #4 = $src
/*5614*/            OPC_CheckChild1Type, MVT::i64,
/*5616*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5618*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5620*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*5622*/            OPC_MoveParent,
/*5623*/            OPC_CheckType, MVT::i64,
/*5625*/            OPC_MoveParent,
/*5626*/            OPC_CheckChild2Same, 2,
/*5628*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5630*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5632*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5635*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5638*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5643*/            OPC_EmitInteger, MVT::i64, 2, 
/*5646*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*5658*/          /*Scope*/ 54, /*->5713*/
/*5659*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5661*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*5663*/            OPC_MoveParent,
/*5664*/            OPC_MoveChild, 1,
/*5666*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5669*/            OPC_RecordMemRef,
/*5670*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5671*/            OPC_CheckFoldableChainNode,
/*5672*/            OPC_RecordChild1, // #4 = $dest
/*5673*/            OPC_CheckChild1Type, MVT::i64,
/*5675*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5677*/            OPC_MoveParent,
/*5678*/            OPC_CheckType, MVT::i64,
/*5680*/            OPC_MoveParent,
/*5681*/            OPC_CheckChild2Same, 4,
/*5683*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5685*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5687*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5690*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5693*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5698*/            OPC_EmitInteger, MVT::i64, 4, 
/*5701*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*5713*/          /*Scope*/ 54, /*->5768*/
/*5714*/            OPC_MoveParent,
/*5715*/            OPC_MoveChild, 1,
/*5717*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5720*/            OPC_RecordMemRef,
/*5721*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5722*/            OPC_CheckFoldableChainNode,
/*5723*/            OPC_RecordChild1, // #4 = $src
/*5724*/            OPC_CheckChild1Type, MVT::i64,
/*5726*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5728*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5730*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*5732*/            OPC_MoveParent,
/*5733*/            OPC_CheckType, MVT::i64,
/*5735*/            OPC_MoveParent,
/*5736*/            OPC_CheckChild2Same, 2,
/*5738*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5740*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5742*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5745*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5748*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5753*/            OPC_EmitInteger, MVT::i64, 4, 
/*5756*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*5768*/          /*Scope*/ 52, /*->5821*/
/*5769*/            OPC_CheckPredicate, 13, // Predicate_load
/*5771*/            OPC_MoveParent,
/*5772*/            OPC_MoveChild, 1,
/*5774*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5777*/            OPC_RecordMemRef,
/*5778*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5779*/            OPC_CheckFoldableChainNode,
/*5780*/            OPC_RecordChild1, // #4 = $dest
/*5781*/            OPC_CheckChild1Type, MVT::i64,
/*5783*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5785*/            OPC_MoveParent,
/*5786*/            OPC_CheckType, MVT::i64,
/*5788*/            OPC_MoveParent,
/*5789*/            OPC_CheckChild2Same, 4,
/*5791*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5793*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5795*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5798*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5801*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5806*/            OPC_EmitInteger, MVT::i64, 8, 
/*5809*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*5821*/          /*Scope*/ 96, /*->5918*/
/*5822*/            OPC_MoveParent,
/*5823*/            OPC_MoveChild, 1,
/*5825*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5828*/            OPC_RecordMemRef,
/*5829*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5830*/            OPC_CheckFoldableChainNode,
/*5831*/            OPC_RecordChild1, // #4 = $src
/*5832*/            OPC_CheckChild1Type, MVT::i64,
/*5834*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5836*/            OPC_Scope, 38, /*->5876*/ // 2 children in Scope
/*5838*/              OPC_CheckPredicate, 13, // Predicate_load
/*5840*/              OPC_MoveParent,
/*5841*/              OPC_CheckType, MVT::i64,
/*5843*/              OPC_MoveParent,
/*5844*/              OPC_CheckChild2Same, 2,
/*5846*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5848*/              OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5850*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5853*/              OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5856*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5861*/              OPC_EmitInteger, MVT::i64, 8, 
/*5864*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                      // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                      // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*5876*/            /*Scope*/ 40, /*->5917*/
/*5877*/              OPC_CheckPredicate, 1, // Predicate_anyextload
/*5879*/              OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*5881*/              OPC_MoveParent,
/*5882*/              OPC_CheckType, MVT::i32,
/*5884*/              OPC_MoveParent,
/*5885*/              OPC_CheckChild2Same, 2,
/*5887*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5889*/              OPC_CheckPredicate, 25, // Predicate_block_xor1
/*5891*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*5894*/              OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*5897*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5902*/              OPC_EmitInteger, MVT::i64, 1, 
/*5905*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                      // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                      // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*5917*/            0, /*End of Scope*/
/*5918*/          /*Scope*/ 54, /*->5973*/
/*5919*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5921*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*5923*/            OPC_MoveParent,
/*5924*/            OPC_MoveChild, 1,
/*5926*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5929*/            OPC_RecordMemRef,
/*5930*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5931*/            OPC_CheckFoldableChainNode,
/*5932*/            OPC_RecordChild1, // #4 = $dest
/*5933*/            OPC_CheckChild1Type, MVT::i64,
/*5935*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5937*/            OPC_MoveParent,
/*5938*/            OPC_CheckType, MVT::i32,
/*5940*/            OPC_MoveParent,
/*5941*/            OPC_CheckChild2Same, 4,
/*5943*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*5945*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*5947*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*5950*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*5953*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*5958*/            OPC_EmitInteger, MVT::i64, 1, 
/*5961*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*5973*/          /*Scope*/ 54, /*->6028*/
/*5974*/            OPC_MoveParent,
/*5975*/            OPC_MoveChild, 1,
/*5977*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5980*/            OPC_RecordMemRef,
/*5981*/            OPC_RecordNode, // #3 = 'ld' chained node
/*5982*/            OPC_CheckFoldableChainNode,
/*5983*/            OPC_RecordChild1, // #4 = $src
/*5984*/            OPC_CheckChild1Type, MVT::i64,
/*5986*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5988*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*5990*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*5992*/            OPC_MoveParent,
/*5993*/            OPC_CheckType, MVT::i32,
/*5995*/            OPC_MoveParent,
/*5996*/            OPC_CheckChild2Same, 2,
/*5998*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6000*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*6002*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*6005*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*6008*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6013*/            OPC_EmitInteger, MVT::i64, 2, 
/*6016*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*6028*/          /*Scope*/ 54, /*->6083*/
/*6029*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6031*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*6033*/            OPC_MoveParent,
/*6034*/            OPC_MoveChild, 1,
/*6036*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6039*/            OPC_RecordMemRef,
/*6040*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6041*/            OPC_CheckFoldableChainNode,
/*6042*/            OPC_RecordChild1, // #4 = $dest
/*6043*/            OPC_CheckChild1Type, MVT::i64,
/*6045*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6047*/            OPC_MoveParent,
/*6048*/            OPC_CheckType, MVT::i32,
/*6050*/            OPC_MoveParent,
/*6051*/            OPC_CheckChild2Same, 4,
/*6053*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6055*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*6057*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*6060*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*6063*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6068*/            OPC_EmitInteger, MVT::i64, 2, 
/*6071*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*6083*/          /*Scope*/ 52, /*->6136*/
/*6084*/            OPC_MoveParent,
/*6085*/            OPC_MoveChild, 1,
/*6087*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6090*/            OPC_RecordMemRef,
/*6091*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6092*/            OPC_CheckFoldableChainNode,
/*6093*/            OPC_RecordChild1, // #4 = $src
/*6094*/            OPC_CheckChild1Type, MVT::i64,
/*6096*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6098*/            OPC_CheckPredicate, 13, // Predicate_load
/*6100*/            OPC_MoveParent,
/*6101*/            OPC_CheckType, MVT::i32,
/*6103*/            OPC_MoveParent,
/*6104*/            OPC_CheckChild2Same, 2,
/*6106*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6108*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*6110*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*6113*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*6116*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6121*/            OPC_EmitInteger, MVT::i64, 4, 
/*6124*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*6136*/          /*Scope*/ 52, /*->6189*/
/*6137*/            OPC_CheckPredicate, 13, // Predicate_load
/*6139*/            OPC_MoveParent,
/*6140*/            OPC_MoveChild, 1,
/*6142*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6145*/            OPC_RecordMemRef,
/*6146*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6147*/            OPC_CheckFoldableChainNode,
/*6148*/            OPC_RecordChild1, // #4 = $dest
/*6149*/            OPC_CheckChild1Type, MVT::i64,
/*6151*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6153*/            OPC_MoveParent,
/*6154*/            OPC_CheckType, MVT::i32,
/*6156*/            OPC_MoveParent,
/*6157*/            OPC_CheckChild2Same, 4,
/*6159*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6161*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*6163*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*6166*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*6169*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6174*/            OPC_EmitInteger, MVT::i64, 4, 
/*6177*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i32 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*6189*/          /*Scope*/ 54, /*->6244*/
/*6190*/            OPC_MoveParent,
/*6191*/            OPC_MoveChild, 1,
/*6193*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6196*/            OPC_RecordMemRef,
/*6197*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6198*/            OPC_CheckFoldableChainNode,
/*6199*/            OPC_RecordChild1, // #4 = $src
/*6200*/            OPC_CheckChild1Type, MVT::i64,
/*6202*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6204*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6206*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*6208*/            OPC_MoveParent,
/*6209*/            OPC_CheckType, MVT::i64,
/*6211*/            OPC_MoveParent,
/*6212*/            OPC_CheckChild2Same, 2,
/*6214*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6216*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*6218*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*6221*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*6224*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6229*/            OPC_EmitInteger, MVT::i64, 1, 
/*6232*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*6244*/          /*Scope*/ 54, /*->6299*/
/*6245*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6247*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*6249*/            OPC_MoveParent,
/*6250*/            OPC_MoveChild, 1,
/*6252*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6255*/            OPC_RecordMemRef,
/*6256*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6257*/            OPC_CheckFoldableChainNode,
/*6258*/            OPC_RecordChild1, // #4 = $dest
/*6259*/            OPC_CheckChild1Type, MVT::i64,
/*6261*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6263*/            OPC_MoveParent,
/*6264*/            OPC_CheckType, MVT::i64,
/*6266*/            OPC_MoveParent,
/*6267*/            OPC_CheckChild2Same, 4,
/*6269*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6271*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*6273*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*6276*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*6279*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6284*/            OPC_EmitInteger, MVT::i64, 1, 
/*6287*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*6299*/          /*Scope*/ 54, /*->6354*/
/*6300*/            OPC_MoveParent,
/*6301*/            OPC_MoveChild, 1,
/*6303*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6306*/            OPC_RecordMemRef,
/*6307*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6308*/            OPC_CheckFoldableChainNode,
/*6309*/            OPC_RecordChild1, // #4 = $src
/*6310*/            OPC_CheckChild1Type, MVT::i64,
/*6312*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6314*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6316*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*6318*/            OPC_MoveParent,
/*6319*/            OPC_CheckType, MVT::i64,
/*6321*/            OPC_MoveParent,
/*6322*/            OPC_CheckChild2Same, 2,
/*6324*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6326*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*6328*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*6331*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*6334*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6339*/            OPC_EmitInteger, MVT::i64, 2, 
/*6342*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*6354*/          /*Scope*/ 54, /*->6409*/
/*6355*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6357*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*6359*/            OPC_MoveParent,
/*6360*/            OPC_MoveChild, 1,
/*6362*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6365*/            OPC_RecordMemRef,
/*6366*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6367*/            OPC_CheckFoldableChainNode,
/*6368*/            OPC_RecordChild1, // #4 = $dest
/*6369*/            OPC_CheckChild1Type, MVT::i64,
/*6371*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6373*/            OPC_MoveParent,
/*6374*/            OPC_CheckType, MVT::i64,
/*6376*/            OPC_MoveParent,
/*6377*/            OPC_CheckChild2Same, 4,
/*6379*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6381*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*6383*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*6386*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*6389*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6394*/            OPC_EmitInteger, MVT::i64, 2, 
/*6397*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*6409*/          /*Scope*/ 54, /*->6464*/
/*6410*/            OPC_MoveParent,
/*6411*/            OPC_MoveChild, 1,
/*6413*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6416*/            OPC_RecordMemRef,
/*6417*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6418*/            OPC_CheckFoldableChainNode,
/*6419*/            OPC_RecordChild1, // #4 = $src
/*6420*/            OPC_CheckChild1Type, MVT::i64,
/*6422*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6424*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6426*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*6428*/            OPC_MoveParent,
/*6429*/            OPC_CheckType, MVT::i64,
/*6431*/            OPC_MoveParent,
/*6432*/            OPC_CheckChild2Same, 2,
/*6434*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6436*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*6438*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*6441*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*6444*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6449*/            OPC_EmitInteger, MVT::i64, 4, 
/*6452*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*6464*/          /*Scope*/ 54, /*->6519*/
/*6465*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6467*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*6469*/            OPC_MoveParent,
/*6470*/            OPC_MoveChild, 1,
/*6472*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6475*/            OPC_RecordMemRef,
/*6476*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6477*/            OPC_CheckFoldableChainNode,
/*6478*/            OPC_RecordChild1, // #4 = $dest
/*6479*/            OPC_CheckChild1Type, MVT::i64,
/*6481*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6483*/            OPC_MoveParent,
/*6484*/            OPC_CheckType, MVT::i64,
/*6486*/            OPC_MoveParent,
/*6487*/            OPC_CheckChild2Same, 4,
/*6489*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6491*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*6493*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*6496*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*6499*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6504*/            OPC_EmitInteger, MVT::i64, 4, 
/*6507*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*6519*/          /*Scope*/ 52, /*->6572*/
/*6520*/            OPC_MoveParent,
/*6521*/            OPC_MoveChild, 1,
/*6523*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6526*/            OPC_RecordMemRef,
/*6527*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6528*/            OPC_CheckFoldableChainNode,
/*6529*/            OPC_RecordChild1, // #4 = $src
/*6530*/            OPC_CheckChild1Type, MVT::i64,
/*6532*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6534*/            OPC_CheckPredicate, 13, // Predicate_load
/*6536*/            OPC_MoveParent,
/*6537*/            OPC_CheckType, MVT::i64,
/*6539*/            OPC_MoveParent,
/*6540*/            OPC_CheckChild2Same, 2,
/*6542*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6544*/            OPC_CheckPredicate, 25, // Predicate_block_xor1
/*6546*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$dest #5 #6
/*6549*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$src #7 #8
/*6552*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6557*/            OPC_EmitInteger, MVT::i64, 8, 
/*6560*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 5, 6, 7, 8, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>, (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor1>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*6572*/          /*Scope*/ 52, /*->6625*/
/*6573*/            OPC_CheckPredicate, 13, // Predicate_load
/*6575*/            OPC_MoveParent,
/*6576*/            OPC_MoveChild, 1,
/*6578*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6581*/            OPC_RecordMemRef,
/*6582*/            OPC_RecordNode, // #3 = 'ld' chained node
/*6583*/            OPC_CheckFoldableChainNode,
/*6584*/            OPC_RecordChild1, // #4 = $dest
/*6585*/            OPC_CheckChild1Type, MVT::i64,
/*6587*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6589*/            OPC_MoveParent,
/*6590*/            OPC_CheckType, MVT::i64,
/*6592*/            OPC_MoveParent,
/*6593*/            OPC_CheckChild2Same, 4,
/*6595*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6597*/            OPC_CheckPredicate, 26, // Predicate_block_xor2
/*6599*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #5 #6
/*6602*/            OPC_CheckComplexPat, /*CP*/1, /*#*/4, // selectBDAddr12Only:$dest #7 #8
/*6605*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*6610*/            OPC_EmitInteger, MVT::i64, 8, 
/*6613*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 5/*#Ops*/, 7, 8, 5, 6, 9, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i64 bdaddr12only:i64:$dest)<<P:Predicate_unindexedload>>), bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_block_xor2>> - Complexity = 42
                    // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*6625*/          /*Scope*/ 4|128,1/*132*/, /*->6759*/
/*6627*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6629*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*6631*/            OPC_MoveParent,
/*6632*/            OPC_RecordChild1, // #3 = $src
/*6633*/            OPC_MoveChild, 1,
/*6635*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6638*/            OPC_MoveParent,
/*6639*/            OPC_SwitchType /*2 cases */, 57, MVT::i32,// ->6699
/*6642*/              OPC_MoveParent,
/*6643*/              OPC_CheckChild2Same, 2,
/*6645*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6647*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*6649*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*6651*/              OPC_Scope, 22, /*->6675*/ // 2 children in Scope
/*6653*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*6656*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*6660*/                OPC_EmitConvertToTarget, 3,
/*6662*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*6665*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*6675*/              /*Scope*/ 22, /*->6698*/
/*6676*/                OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*6679*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*6683*/                OPC_EmitConvertToTarget, 3,
/*6685*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*6688*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*6698*/              0, /*End of Scope*/
/*6699*/            /*SwitchType*/ 57, MVT::i64,// ->6758
/*6701*/              OPC_MoveParent,
/*6702*/              OPC_CheckChild2Same, 2,
/*6704*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6706*/              OPC_CheckPredicate, 6, // Predicate_truncstore
/*6708*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*6710*/              OPC_Scope, 22, /*->6734*/ // 2 children in Scope
/*6712*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*6715*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*6719*/                OPC_EmitConvertToTarget, 3,
/*6721*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*6724*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i64):$src))
/*6734*/              /*Scope*/ 22, /*->6757*/
/*6735*/                OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*6738*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*6742*/                OPC_EmitConvertToTarget, 3,
/*6744*/                OPC_EmitNodeXForm, 0, 6, // UIMM8
/*6747*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                        // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                        // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i64):$src))
/*6757*/              0, /*End of Scope*/
/*6758*/            0, // EndSwitchType
/*6759*/          0, /*End of Scope*/
/*6760*/        /*SwitchOpcode*/ 94, TARGET_VAL(ISD::ADD),// ->6857
/*6763*/          OPC_MoveChild, 0,
/*6765*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6768*/          OPC_RecordMemRef,
/*6769*/          OPC_RecordNode, // #1 = 'ld' chained node
/*6770*/          OPC_CheckFoldableChainNode,
/*6771*/          OPC_RecordChild1, // #2 = $BD1
/*6772*/          OPC_CheckChild1Type, MVT::i64,
/*6774*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6776*/          OPC_CheckPredicate, 13, // Predicate_load
/*6778*/          OPC_MoveParent,
/*6779*/          OPC_RecordChild1, // #3 = $I2
/*6780*/          OPC_MoveChild, 1,
/*6782*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6785*/          OPC_Scope, 34, /*->6821*/ // 2 children in Scope
/*6787*/            OPC_CheckPredicate, 27, // Predicate_imm32sx8
/*6789*/            OPC_MoveParent,
/*6790*/            OPC_CheckType, MVT::i32,
/*6792*/            OPC_MoveParent,
/*6793*/            OPC_CheckChild2Same, 2,
/*6795*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6797*/            OPC_CheckPredicate, 15, // Predicate_store
/*6799*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*6802*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*6806*/            OPC_EmitConvertToTarget, 3,
/*6808*/            OPC_EmitNodeXForm, 1, 6, // SIMM8
/*6811*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ASI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (add:i32 (ld:i32 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                    // Dst: (ASI:i32 bdaddr20only:i64:$BD1, (SIMM8:i32 (imm:i32):$I2))
/*6821*/          /*Scope*/ 34, /*->6856*/
/*6822*/            OPC_CheckPredicate, 28, // Predicate_imm64sx8
/*6824*/            OPC_MoveParent,
/*6825*/            OPC_CheckType, MVT::i64,
/*6827*/            OPC_MoveParent,
/*6828*/            OPC_CheckChild2Same, 2,
/*6830*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6832*/            OPC_CheckPredicate, 15, // Predicate_store
/*6834*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*6837*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*6841*/            OPC_EmitConvertToTarget, 3,
/*6843*/            OPC_EmitNodeXForm, 1, 6, // SIMM8
/*6846*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGSI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (add:i64 (ld:i64 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                    // Dst: (AGSI:i32 bdaddr20only:i64:$BD1, (SIMM8:i64 (imm:i64):$I2))
/*6856*/          0, /*End of Scope*/
/*6857*/        /*SwitchOpcode*/ 122|128,2/*378*/, TARGET_VAL(ISD::LOAD),// ->7239
/*6861*/          OPC_RecordMemRef,
/*6862*/          OPC_RecordNode, // #1 = 'ld' chained node
/*6863*/          OPC_CheckFoldableChainNode,
/*6864*/          OPC_RecordChild1, // #2 = $src
/*6865*/          OPC_CheckChild1Type, MVT::i64,
/*6867*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6869*/          OPC_Scope, 76, /*->6947*/ // 4 children in Scope
/*6871*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6873*/            OPC_CheckType, MVT::i32,
/*6875*/            OPC_Scope, 34, /*->6911*/ // 2 children in Scope
/*6877*/              OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*6879*/              OPC_MoveParent,
/*6880*/              OPC_RecordChild2, // #3 = $dest
/*6881*/              OPC_CheckChild2Type, MVT::i64,
/*6883*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6885*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*6887*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*6890*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*6893*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*6897*/              OPC_EmitInteger, MVT::i64, 1, 
/*6900*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*6911*/            /*Scope*/ 34, /*->6946*/
/*6912*/              OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*6914*/              OPC_MoveParent,
/*6915*/              OPC_RecordChild2, // #3 = $dest
/*6916*/              OPC_CheckChild2Type, MVT::i64,
/*6918*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6920*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*6922*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*6925*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*6928*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*6932*/              OPC_EmitInteger, MVT::i64, 2, 
/*6935*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*6946*/            0, /*End of Scope*/
/*6947*/          /*Scope*/ 36, /*->6984*/
/*6948*/            OPC_CheckPredicate, 13, // Predicate_load
/*6950*/            OPC_CheckType, MVT::i32,
/*6952*/            OPC_MoveParent,
/*6953*/            OPC_RecordChild2, // #3 = $dest
/*6954*/            OPC_CheckChild2Type, MVT::i64,
/*6956*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6958*/            OPC_CheckPredicate, 29, // Predicate_mvc_store
/*6960*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*6963*/            OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*6966*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*6970*/            OPC_EmitInteger, MVT::i64, 4, 
/*6973*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                    // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*6984*/          /*Scope*/ 111, /*->7096*/
/*6985*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*6987*/            OPC_CheckType, MVT::i64,
/*6989*/            OPC_Scope, 34, /*->7025*/ // 3 children in Scope
/*6991*/              OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*6993*/              OPC_MoveParent,
/*6994*/              OPC_RecordChild2, // #3 = $dest
/*6995*/              OPC_CheckChild2Type, MVT::i64,
/*6997*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*6999*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7001*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7004*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7007*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7011*/              OPC_EmitInteger, MVT::i64, 1, 
/*7014*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i64)
/*7025*/            /*Scope*/ 34, /*->7060*/
/*7026*/              OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*7028*/              OPC_MoveParent,
/*7029*/              OPC_RecordChild2, // #3 = $dest
/*7030*/              OPC_CheckChild2Type, MVT::i64,
/*7032*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7034*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7036*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7039*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7042*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7046*/              OPC_EmitInteger, MVT::i64, 2, 
/*7049*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i64)
/*7060*/            /*Scope*/ 34, /*->7095*/
/*7061*/              OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*7063*/              OPC_MoveParent,
/*7064*/              OPC_RecordChild2, // #3 = $dest
/*7065*/              OPC_CheckChild2Type, MVT::i64,
/*7067*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7069*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7071*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7074*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7077*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7081*/              OPC_EmitInteger, MVT::i64, 4, 
/*7084*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*7095*/            0, /*End of Scope*/
/*7096*/          /*Scope*/ 12|128,1/*140*/, /*->7238*/
/*7098*/            OPC_CheckPredicate, 13, // Predicate_load
/*7100*/            OPC_SwitchType /*4 cases */, 32, MVT::i64,// ->7135
/*7103*/              OPC_MoveParent,
/*7104*/              OPC_RecordChild2, // #3 = $dest
/*7105*/              OPC_CheckChild2Type, MVT::i64,
/*7107*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7109*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7111*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7114*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7117*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7121*/              OPC_EmitInteger, MVT::i64, 8, 
/*7124*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*7135*/            /*SwitchType*/ 32, MVT::f32,// ->7169
/*7137*/              OPC_MoveParent,
/*7138*/              OPC_RecordChild2, // #3 = $dest
/*7139*/              OPC_CheckChild2Type, MVT::i64,
/*7141*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7143*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7145*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7148*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7151*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7155*/              OPC_EmitInteger, MVT::i64, 4, 
/*7158*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:f32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i64)
/*7169*/            /*SwitchType*/ 32, MVT::f64,// ->7203
/*7171*/              OPC_MoveParent,
/*7172*/              OPC_RecordChild2, // #3 = $dest
/*7173*/              OPC_CheckChild2Type, MVT::i64,
/*7175*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7177*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7179*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7182*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7185*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7189*/              OPC_EmitInteger, MVT::i64, 8, 
/*7192*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:f64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i64)
/*7203*/            /*SwitchType*/ 32, MVT::f128,// ->7237
/*7205*/              OPC_MoveParent,
/*7206*/              OPC_RecordChild2, // #3 = $dest
/*7207*/              OPC_CheckChild2Type, MVT::i64,
/*7209*/              OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7211*/              OPC_CheckPredicate, 29, // Predicate_mvc_store
/*7213*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*7216*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*7219*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*7223*/              OPC_EmitInteger, MVT::i64, 16, 
/*7226*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                      // Src: (st (ld:f128 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_mvc_store>> - Complexity = 26
                      // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 16:i64)
/*7237*/            0, // EndSwitchType
/*7238*/          0, /*End of Scope*/
/*7239*/        /*SwitchOpcode*/ 55, TARGET_VAL(ISD::BSWAP),// ->7297
/*7242*/          OPC_RecordChild0, // #1 = $R1
/*7243*/          OPC_SwitchType /*2 cases */, 24, MVT::i32,// ->7270
/*7246*/            OPC_MoveParent,
/*7247*/            OPC_RecordChild2, // #2 = $XBD2
/*7248*/            OPC_CheckChild2Type, MVT::i64,
/*7250*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7252*/            OPC_CheckPredicate, 15, // Predicate_store
/*7254*/            OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*7256*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7259*/            OPC_EmitMergeInputChains1_0,
/*7260*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRV), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st (bswap:i32 GR32:i32:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                    // Dst: (STRV GR32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7270*/          /*SwitchType*/ 24, MVT::i64,// ->7296
/*7272*/            OPC_MoveParent,
/*7273*/            OPC_RecordChild2, // #2 = $XBD2
/*7274*/            OPC_CheckChild2Type, MVT::i64,
/*7276*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7278*/            OPC_CheckPredicate, 15, // Predicate_store
/*7280*/            OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*7282*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7285*/            OPC_EmitMergeInputChains1_0,
/*7286*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRVG), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st (bswap:i64 GR64:i64:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                    // Dst: (STRVG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*7296*/          0, // EndSwitchType
/*7297*/        0, // EndSwitchOpcode
/*7298*/      /*Scope*/ 94|128,6/*862*/, /*->8162*/
/*7300*/        OPC_RecordChild1, // #1 = $R1
/*7301*/        OPC_Scope, 23, /*->7326*/ // 12 children in Scope
/*7303*/          OPC_CheckChild1Type, MVT::i32,
/*7305*/          OPC_RecordChild2, // #2 = $I2
/*7306*/          OPC_CheckChild2Type, MVT::i64,
/*7308*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7310*/          OPC_CheckPredicate, 15, // Predicate_store
/*7312*/          OPC_CheckPredicate, 30, // Predicate_aligned_store
/*7314*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*7317*/          OPC_EmitMergeInputChains1_0,
/*7318*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                  // Dst: (STRL GR32:i32:$R1, pcrel32:i64:$I2)
/*7326*/        /*Scope*/ 23, /*->7350*/
/*7327*/          OPC_CheckChild1Type, MVT::i64,
/*7329*/          OPC_RecordChild2, // #2 = $I2
/*7330*/          OPC_CheckChild2Type, MVT::i64,
/*7332*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7334*/          OPC_CheckPredicate, 15, // Predicate_store
/*7336*/          OPC_CheckPredicate, 30, // Predicate_aligned_store
/*7338*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*7341*/          OPC_EmitMergeInputChains1_0,
/*7342*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STGRL), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                  // Dst: (STGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*7350*/        /*Scope*/ 67, /*->7418*/
/*7351*/          OPC_MoveChild, 1,
/*7353*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7356*/          OPC_SwitchType /*2 cases */, 28, MVT::i32,// ->7387
/*7359*/            OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*7361*/            OPC_MoveParent,
/*7362*/            OPC_RecordChild2, // #2 = $BD1
/*7363*/            OPC_CheckChild2Type, MVT::i64,
/*7365*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7367*/            OPC_CheckPredicate, 15, // Predicate_store
/*7369*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*7372*/            OPC_EmitMergeInputChains1_0,
/*7373*/            OPC_EmitConvertToTarget, 1,
/*7375*/            OPC_EmitNodeXForm, 2, 5, // SIMM16
/*7378*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                    // Dst: (MVHI mviaddr12pair:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*7387*/          /*SwitchType*/ 28, MVT::i64,// ->7417
/*7389*/            OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*7391*/            OPC_MoveParent,
/*7392*/            OPC_RecordChild2, // #2 = $BD1
/*7393*/            OPC_CheckChild2Type, MVT::i64,
/*7395*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7397*/            OPC_CheckPredicate, 15, // Predicate_store
/*7399*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*7402*/            OPC_EmitMergeInputChains1_0,
/*7403*/            OPC_EmitConvertToTarget, 1,
/*7405*/            OPC_EmitNodeXForm, 2, 5, // SIMM16
/*7408*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVGHI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                    // Dst: (MVGHI mviaddr12pair:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
/*7417*/          0, // EndSwitchType
/*7418*/        /*Scope*/ 97, /*->7516*/
/*7419*/          OPC_CheckChild1Type, MVT::i32,
/*7421*/          OPC_RecordChild2, // #2 = $I2
/*7422*/          OPC_CheckChild2Type, MVT::i64,
/*7424*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7426*/          OPC_Scope, 18, /*->7446*/ // 2 children in Scope
/*7428*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*7430*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*7432*/            OPC_CheckPredicate, 33, // Predicate_aligned_truncstorei16
/*7434*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*7437*/            OPC_EmitMergeInputChains1_0,
/*7438*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                    // Dst: (STHRL GR32:i32:$R1, pcrel32:i64:$I2)
/*7446*/          /*Scope*/ 68, /*->7515*/
/*7447*/            OPC_CheckPredicate, 15, // Predicate_store
/*7449*/            OPC_Scope, 16, /*->7467*/ // 4 children in Scope
/*7451*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*7453*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7456*/              OPC_EmitMergeInputChains1_0,
/*7457*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STMux), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                      // Dst: (STMux GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7467*/            /*Scope*/ 14, /*->7482*/
/*7468*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7471*/              OPC_EmitMergeInputChains1_0,
/*7472*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                      // Dst: (ST GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*7482*/            /*Scope*/ 14, /*->7497*/
/*7483*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7486*/              OPC_EmitMergeInputChains1_0,
/*7487*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                      // Dst: (STY GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*7497*/            /*Scope*/ 16, /*->7514*/
/*7498*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*7500*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7503*/              OPC_EmitMergeInputChains1_0,
/*7504*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STFH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                      // Dst: (STFH GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7514*/            0, /*End of Scope*/
/*7515*/          0, /*End of Scope*/
/*7516*/        /*Scope*/ 89, /*->7606*/
/*7517*/          OPC_CheckChild1Type, MVT::i64,
/*7519*/          OPC_RecordChild2, // #2 = $XBD2
/*7520*/          OPC_CheckChild2Type, MVT::i64,
/*7522*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7524*/          OPC_Scope, 62, /*->7588*/ // 2 children in Scope
/*7526*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*7528*/            OPC_Scope, 28, /*->7558*/ // 2 children in Scope
/*7530*/              OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*7532*/              OPC_CheckPredicate, 33, // Predicate_aligned_truncstorei16
/*7534*/              OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$XBD2 #3
/*7537*/              OPC_EmitMergeInputChains1_0,
/*7538*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*7541*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*7550*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                      // Src: (st GR64:i64:$R1, pcrel32:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                      // Dst: (STHRL (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), pcrel32:i64:$XBD2)
/*7558*/            /*Scope*/ 28, /*->7587*/
/*7559*/              OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*7561*/              OPC_CheckPredicate, 34, // Predicate_aligned_truncstorei32
/*7563*/              OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$XBD2 #3
/*7566*/              OPC_EmitMergeInputChains1_0,
/*7567*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*7570*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*7579*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                      // Src: (st GR64:i64:$R1, pcrel32:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_aligned_truncstorei32>> - Complexity = 17
                      // Dst: (STRL (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), pcrel32:i64:$XBD2)
/*7587*/            0, /*End of Scope*/
/*7588*/          /*Scope*/ 16, /*->7605*/
/*7589*/            OPC_CheckPredicate, 15, // Predicate_store
/*7591*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7594*/            OPC_EmitMergeInputChains1_0,
/*7595*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STG), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (STG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*7605*/          0, /*End of Scope*/
/*7606*/        /*Scope*/ 23, /*->7630*/
/*7607*/          OPC_CheckChild1Type, MVT::Untyped,
/*7609*/          OPC_RecordChild2, // #2 = $dst
/*7610*/          OPC_CheckChild2Type, MVT::i64,
/*7612*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7614*/          OPC_CheckPredicate, 15, // Predicate_store
/*7616*/          OPC_CheckComplexPat, /*CP*/9, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*7619*/          OPC_EmitMergeInputChains1_0,
/*7620*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST128), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GR128:Untyped:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (ST128 GR128:Untyped:$src, bdxaddr20only128:i64:$dst)
/*7630*/        /*Scope*/ 81, /*->7712*/
/*7631*/          OPC_MoveChild, 1,
/*7633*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7636*/          OPC_CheckType, MVT::i32,
/*7638*/          OPC_MoveParent,
/*7639*/          OPC_RecordChild2, // #2 = $BD1
/*7640*/          OPC_CheckChild2Type, MVT::i64,
/*7642*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7644*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*7646*/          OPC_Scope, 42, /*->7690*/ // 2 children in Scope
/*7648*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*7650*/            OPC_Scope, 18, /*->7670*/ // 2 children in Scope
/*7652*/              OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*7655*/              OPC_EmitMergeInputChains1_0,
/*7656*/              OPC_EmitConvertToTarget, 1,
/*7658*/              OPC_EmitNodeXForm, 0, 5, // UIMM8
/*7661*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVI), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (st (imm:i32)<<X:UIMM8>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (MVI mviaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*7670*/            /*Scope*/ 18, /*->7689*/
/*7671*/              OPC_CheckComplexPat, /*CP*/10, /*#*/2, // selectMVIAddr20Pair:$BD1 #3 #4
/*7674*/              OPC_EmitMergeInputChains1_0,
/*7675*/              OPC_EmitConvertToTarget, 1,
/*7677*/              OPC_EmitNodeXForm, 0, 5, // UIMM8
/*7680*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVIY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (st (imm:i32)<<X:UIMM8>>:$I2, mviaddr20pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (MVIY mviaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*7689*/            0, /*End of Scope*/
/*7690*/          /*Scope*/ 20, /*->7711*/
/*7691*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*7693*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectMVIAddr12Pair:$BD1 #3 #4
/*7696*/            OPC_EmitMergeInputChains1_0,
/*7697*/            OPC_EmitConvertToTarget, 1,
/*7699*/            OPC_EmitNodeXForm, 2, 5, // SIMM16
/*7702*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHHI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:SIMM16>>:$I2, mviaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (MVHHI mviaddr12pair:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*7711*/          0, /*End of Scope*/
/*7712*/        /*Scope*/ 21|128,1/*149*/, /*->7863*/
/*7714*/          OPC_CheckChild1Type, MVT::i32,
/*7716*/          OPC_RecordChild2, // #2 = $XBD2
/*7717*/          OPC_CheckChild2Type, MVT::i64,
/*7719*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7721*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*7723*/          OPC_Scope, 68, /*->7793*/ // 2 children in Scope
/*7725*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*7727*/            OPC_Scope, 16, /*->7745*/ // 4 children in Scope
/*7729*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*7731*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7734*/              OPC_EmitMergeInputChains1_0,
/*7735*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCMux), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (STCMux GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7745*/            /*Scope*/ 14, /*->7760*/
/*7746*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7749*/              OPC_EmitMergeInputChains1_0,
/*7750*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (STC GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*7760*/            /*Scope*/ 14, /*->7775*/
/*7761*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7764*/              OPC_EmitMergeInputChains1_0,
/*7765*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (STCY GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*7775*/            /*Scope*/ 16, /*->7792*/
/*7776*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*7778*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7781*/              OPC_EmitMergeInputChains1_0,
/*7782*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (STCH GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7792*/            0, /*End of Scope*/
/*7793*/          /*Scope*/ 68, /*->7862*/
/*7794*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*7796*/            OPC_Scope, 16, /*->7814*/ // 4 children in Scope
/*7798*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*7800*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7803*/              OPC_EmitMergeInputChains1_0,
/*7804*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHMux), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                      // Dst: (STHMux GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7814*/            /*Scope*/ 14, /*->7829*/
/*7815*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7818*/              OPC_EmitMergeInputChains1_0,
/*7819*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                      // Dst: (STH GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*7829*/            /*Scope*/ 14, /*->7844*/
/*7830*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7833*/              OPC_EmitMergeInputChains1_0,
/*7834*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                      // Dst: (STHY GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*7844*/            /*Scope*/ 16, /*->7861*/
/*7845*/              OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*7847*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7850*/              OPC_EmitMergeInputChains1_0,
/*7851*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                      // Src: (st GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                      // Dst: (STHH GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*7861*/            0, /*End of Scope*/
/*7862*/          0, /*End of Scope*/
/*7863*/        /*Scope*/ 41, /*->7905*/
/*7864*/          OPC_CheckChild1Type, MVT::f32,
/*7866*/          OPC_RecordChild2, // #2 = $XBD2
/*7867*/          OPC_CheckChild2Type, MVT::i64,
/*7869*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7871*/          OPC_CheckPredicate, 15, // Predicate_store
/*7873*/          OPC_Scope, 14, /*->7889*/ // 2 children in Scope
/*7875*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7878*/            OPC_EmitMergeInputChains1_0,
/*7879*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STE), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (STE FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)
/*7889*/          /*Scope*/ 14, /*->7904*/
/*7890*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7893*/            OPC_EmitMergeInputChains1_0,
/*7894*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STEY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (STEY FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)
/*7904*/          0, /*End of Scope*/
/*7905*/        /*Scope*/ 41, /*->7947*/
/*7906*/          OPC_CheckChild1Type, MVT::f64,
/*7908*/          OPC_RecordChild2, // #2 = $XBD2
/*7909*/          OPC_CheckChild2Type, MVT::i64,
/*7911*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7913*/          OPC_CheckPredicate, 15, // Predicate_store
/*7915*/          OPC_Scope, 14, /*->7931*/ // 2 children in Scope
/*7917*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7920*/            OPC_EmitMergeInputChains1_0,
/*7921*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (STD FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)
/*7931*/          /*Scope*/ 14, /*->7946*/
/*7932*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7935*/            OPC_EmitMergeInputChains1_0,
/*7936*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STDY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (STDY FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)
/*7946*/          0, /*End of Scope*/
/*7947*/        /*Scope*/ 23, /*->7971*/
/*7948*/          OPC_CheckChild1Type, MVT::f128,
/*7950*/          OPC_RecordChild2, // #2 = $dst
/*7951*/          OPC_CheckChild2Type, MVT::i64,
/*7953*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7955*/          OPC_CheckPredicate, 15, // Predicate_store
/*7957*/          OPC_CheckComplexPat, /*CP*/9, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*7960*/          OPC_EmitMergeInputChains1_0,
/*7961*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP128:f128:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STX FP128:f128:$src, bdxaddr20only128:i64:$dst)
/*7971*/        /*Scope*/ 60|128,1/*188*/, /*->8161*/
/*7973*/          OPC_CheckChild1Type, MVT::i64,
/*7975*/          OPC_RecordChild2, // #2 = $XBD2
/*7976*/          OPC_CheckChild2Type, MVT::i64,
/*7978*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*7980*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*7982*/          OPC_Scope, 58, /*->8042*/ // 3 children in Scope
/*7984*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*7986*/            OPC_Scope, 26, /*->8014*/ // 2 children in Scope
/*7988*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7991*/              OPC_EmitMergeInputChains1_0,
/*7992*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*7995*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*8004*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 7, 3, 4, 5, 
                      // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (STC (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), bdxaddr12pair:i64:$XBD2)
/*8014*/            /*Scope*/ 26, /*->8041*/
/*8015*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8018*/              OPC_EmitMergeInputChains1_0,
/*8019*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8022*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*8031*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 7, 3, 4, 5, 
                      // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                      // Dst: (STCY (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), bdxaddr20pair:i64:$XBD2)
/*8041*/            0, /*End of Scope*/
/*8042*/          /*Scope*/ 58, /*->8101*/
/*8043*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*8045*/            OPC_Scope, 26, /*->8073*/ // 2 children in Scope
/*8047*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8050*/              OPC_EmitMergeInputChains1_0,
/*8051*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8054*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*8063*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 7, 3, 4, 5, 
                      // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                      // Dst: (STH (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), bdxaddr12pair:i64:$XBD2)
/*8073*/            /*Scope*/ 26, /*->8100*/
/*8074*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8077*/              OPC_EmitMergeInputChains1_0,
/*8078*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8081*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*8090*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 7, 3, 4, 5, 
                      // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                      // Dst: (STHY (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), bdxaddr20pair:i64:$XBD2)
/*8100*/            0, /*End of Scope*/
/*8101*/          /*Scope*/ 58, /*->8160*/
/*8102*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*8104*/            OPC_Scope, 26, /*->8132*/ // 2 children in Scope
/*8106*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8109*/              OPC_EmitMergeInputChains1_0,
/*8110*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8113*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*8122*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 7, 3, 4, 5, 
                      // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                      // Dst: (ST (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), bdxaddr12pair:i64:$XBD2)
/*8132*/            /*Scope*/ 26, /*->8159*/
/*8133*/              OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8136*/              OPC_EmitMergeInputChains1_0,
/*8137*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8140*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*8149*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 7, 3, 4, 5, 
                      // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                      // Dst: (STY (EXTRACT_SUBREG:i32 GR64:i64:$R1, subreg_l32:i32), bdxaddr20pair:i64:$XBD2)
/*8159*/            0, /*End of Scope*/
/*8160*/          0, /*End of Scope*/
/*8161*/        0, /*End of Scope*/
/*8162*/      0, /*End of Scope*/
/*8163*/    /*SwitchOpcode*/ 98|128,1/*226*/, TARGET_VAL(ISD::SRA),// ->8393
/*8167*/      OPC_Scope, 55|128,1/*183*/, /*->8353*/ // 2 children in Scope
/*8170*/        OPC_MoveChild, 0,
/*8172*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*8175*/        OPC_MoveChild, 0,
/*8177*/        OPC_SwitchOpcode /*2 cases */, 86, TARGET_VAL(ISD::ANY_EXTEND),// ->8267
/*8181*/          OPC_MoveChild, 0,
/*8183*/          OPC_CheckOpcode, TARGET_VAL(SystemZISD::SELECT_CCMASK),
/*8186*/          OPC_CaptureGlueInput,
/*8187*/          OPC_CheckChild0Integer, 1, 
/*8189*/          OPC_CheckChild1Integer, 0, 
/*8191*/          OPC_RecordChild2, // #0 = $valid
/*8192*/          OPC_MoveChild, 2,
/*8194*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8197*/          OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*8199*/          OPC_MoveParent,
/*8200*/          OPC_RecordChild3, // #1 = $cc
/*8201*/          OPC_MoveChild, 3,
/*8203*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8206*/          OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*8208*/          OPC_MoveParent,
/*8209*/          OPC_MoveParent,
/*8210*/          OPC_MoveParent,
/*8211*/          OPC_CheckChild1Integer, 63, 
/*8213*/          OPC_CheckChild1Type, MVT::i32,
/*8215*/          OPC_MoveParent,
/*8216*/          OPC_CheckChild1Integer, 63, 
/*8218*/          OPC_CheckChild1Type, MVT::i32,
/*8220*/          OPC_EmitInteger, MVT::i64, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8232*/          OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*8240*/          OPC_EmitInteger, MVT::i64, 0, 
/*8243*/          OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5
/*8251*/          OPC_EmitConvertToTarget, 0,
/*8253*/          OPC_EmitConvertToTarget, 1,
/*8255*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                  // Src: (sra:i64 (shl:i64 (anyext:i64 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)), 63:i32), 63:i32) - Complexity = 40
                  // Dst: (Select64:i64:i32 (LGHI:i64 -1:i64), (LGHI:i64 0:i64), (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*8267*/        /*SwitchOpcode*/ 82, TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->8352
/*8270*/          OPC_CaptureGlueInput,
/*8271*/          OPC_CheckChild0Integer, 1, 
/*8273*/          OPC_CheckChild1Integer, 0, 
/*8275*/          OPC_RecordChild2, // #0 = $valid
/*8276*/          OPC_MoveChild, 2,
/*8278*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8281*/          OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*8283*/          OPC_MoveParent,
/*8284*/          OPC_RecordChild3, // #1 = $cc
/*8285*/          OPC_MoveChild, 3,
/*8287*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8290*/          OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*8292*/          OPC_MoveParent,
/*8293*/          OPC_MoveParent,
/*8294*/          OPC_CheckChild1Integer, 31, 
/*8296*/          OPC_CheckChild1Type, MVT::i32,
/*8298*/          OPC_MoveParent,
/*8299*/          OPC_CheckChild1Integer, 31, 
/*8301*/          OPC_CheckChild1Type, MVT::i32,
/*8303*/          OPC_CheckType, MVT::i32,
/*8305*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8317*/          OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*8325*/          OPC_EmitInteger, MVT::i32, 0, 
/*8328*/          OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/*8336*/          OPC_EmitConvertToTarget, 0,
/*8338*/          OPC_EmitConvertToTarget, 1,
/*8340*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                  // Src: (sra:i32 (shl:i32 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc), 31:i32), 31:i32) - Complexity = 37
                  // Dst: (Select32:i32:i32 (LHI:i32 -1:i32), (LHI:i32 0:i32), (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc)
/*8352*/        0, // EndSwitchOpcode
/*8353*/      /*Scope*/ 38, /*->8392*/
/*8354*/        OPC_RecordChild0, // #0 = $R1src
/*8355*/        OPC_RecordChild1, // #1 = $BD2
/*8356*/        OPC_CheckChild1Type, MVT::i32,
/*8358*/        OPC_SwitchType /*2 cases */, 14, MVT::i32,// ->8375
/*8361*/          OPC_CheckComplexPat, /*CP*/11, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*8364*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                  // Src: (sra:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
                  // Dst: (SRA:i32:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
/*8375*/        /*SwitchType*/ 14, MVT::i64,// ->8391
/*8377*/          OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*8380*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRAG), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                  // Src: (sra:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                  // Dst: (SRAG:i64:i32 GR64:i64:$R3, shift20only:i32:$BD2)
/*8391*/        0, // EndSwitchType
/*8392*/      0, /*End of Scope*/
/*8393*/    /*SwitchOpcode*/ 62|128,10/*1342*/, TARGET_VAL(ISD::SUB),// ->9739
/*8397*/      OPC_Scope, 45|128,6/*813*/, /*->9213*/ // 8 children in Scope
/*8400*/        OPC_CheckChild0Integer, 0, 
/*8402*/        OPC_MoveChild, 1,
/*8404*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8407*/        OPC_MoveChild, 0,
/*8409*/        OPC_SwitchOpcode /*2 cases */, 31|128,3/*415*/, TARGET_VAL(ISD::ADD),// ->8829
/*8414*/          OPC_Scope, 7|128,2/*263*/, /*->8680*/ // 3 children in Scope
/*8417*/            OPC_MoveChild, 0,
/*8419*/            OPC_SwitchOpcode /*3 cases */, 49, TARGET_VAL(ISD::SIGN_EXTEND),// ->8472
/*8423*/              OPC_RecordChild0, // #0 = $src
/*8424*/              OPC_MoveParent,
/*8425*/              OPC_MoveChild, 1,
/*8427*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8430*/              OPC_MoveChild, 0,
/*8432*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8435*/              OPC_CheckChild0Same, 0,
/*8437*/              OPC_MoveParent,
/*8438*/              OPC_CheckChild1Integer, 63, 
/*8440*/              OPC_CheckChild1Type, MVT::i32,
/*8442*/              OPC_MoveParent,
/*8443*/              OPC_MoveParent,
/*8444*/              OPC_MoveChild, 1,
/*8446*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8449*/              OPC_MoveChild, 0,
/*8451*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8454*/              OPC_CheckChild0Same, 0,
/*8456*/              OPC_MoveParent,
/*8457*/              OPC_CheckChild1Integer, 63, 
/*8459*/              OPC_CheckChild1Type, MVT::i32,
/*8461*/              OPC_MoveParent,
/*8462*/              OPC_MoveParent,
/*8463*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 GR32:i32:$src)
/*8472*/            /*SwitchOpcode*/ 125, TARGET_VAL(ISD::SRA),// ->8600
/*8475*/              OPC_MoveChild, 0,
/*8477*/              OPC_SwitchOpcode /*2 cases */, 44, TARGET_VAL(ISD::SIGN_EXTEND),// ->8525
/*8481*/                OPC_RecordChild0, // #0 = $src
/*8482*/                OPC_MoveParent,
/*8483*/                OPC_CheckChild1Integer, 63, 
/*8485*/                OPC_CheckChild1Type, MVT::i32,
/*8487*/                OPC_MoveParent,
/*8488*/                OPC_MoveChild, 1,
/*8490*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8493*/                OPC_CheckChild0Same, 0,
/*8495*/                OPC_MoveParent,
/*8496*/                OPC_MoveParent,
/*8497*/                OPC_MoveChild, 1,
/*8499*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8502*/                OPC_MoveChild, 0,
/*8504*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8507*/                OPC_CheckChild0Same, 0,
/*8509*/                OPC_MoveParent,
/*8510*/                OPC_CheckChild1Integer, 63, 
/*8512*/                OPC_CheckChild1Type, MVT::i32,
/*8514*/                OPC_MoveParent,
/*8515*/                OPC_MoveParent,
/*8516*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32))) - Complexity = 39
                        // Dst: (LNGFR:i64:i32 GR32:i32:$src)
/*8525*/              /*SwitchOpcode*/ 71, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8599
/*8528*/                OPC_RecordChild0, // #0 = $src
/*8529*/                OPC_MoveChild, 1,
/*8531*/                OPC_CheckValueType, MVT::i32,
/*8533*/                OPC_MoveParent,
/*8534*/                OPC_MoveParent,
/*8535*/                OPC_CheckChild1Integer, 63, 
/*8537*/                OPC_CheckChild1Type, MVT::i32,
/*8539*/                OPC_MoveParent,
/*8540*/                OPC_MoveChild, 1,
/*8542*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8545*/                OPC_CheckChild0Same, 0,
/*8547*/                OPC_MoveChild, 1,
/*8549*/                OPC_CheckValueType, MVT::i32,
/*8551*/                OPC_MoveParent,
/*8552*/                OPC_MoveParent,
/*8553*/                OPC_MoveParent,
/*8554*/                OPC_MoveChild, 1,
/*8556*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8559*/                OPC_MoveChild, 0,
/*8561*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8564*/                OPC_CheckChild0Same, 0,
/*8566*/                OPC_MoveChild, 1,
/*8568*/                OPC_CheckValueType, MVT::i32,
/*8570*/                OPC_MoveParent,
/*8571*/                OPC_MoveParent,
/*8572*/                OPC_CheckChild1Integer, 63, 
/*8574*/                OPC_CheckChild1Type, MVT::i32,
/*8576*/                OPC_MoveParent,
/*8577*/                OPC_MoveParent,
/*8578*/                OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8581*/                OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*8590*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32))) - Complexity = 39
                        // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*8599*/              0, // EndSwitchOpcode
/*8600*/            /*SwitchOpcode*/ 76, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8679
/*8603*/              OPC_RecordChild0, // #0 = $src
/*8604*/              OPC_MoveChild, 1,
/*8606*/              OPC_CheckValueType, MVT::i32,
/*8608*/              OPC_MoveParent,
/*8609*/              OPC_MoveParent,
/*8610*/              OPC_MoveChild, 1,
/*8612*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8615*/              OPC_MoveChild, 0,
/*8617*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8620*/              OPC_CheckChild0Same, 0,
/*8622*/              OPC_MoveChild, 1,
/*8624*/              OPC_CheckValueType, MVT::i32,
/*8626*/              OPC_MoveParent,
/*8627*/              OPC_MoveParent,
/*8628*/              OPC_CheckChild1Integer, 63, 
/*8630*/              OPC_CheckChild1Type, MVT::i32,
/*8632*/              OPC_MoveParent,
/*8633*/              OPC_MoveParent,
/*8634*/              OPC_MoveChild, 1,
/*8636*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8639*/              OPC_MoveChild, 0,
/*8641*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8644*/              OPC_CheckChild0Same, 0,
/*8646*/              OPC_MoveChild, 1,
/*8648*/              OPC_CheckValueType, MVT::i32,
/*8650*/              OPC_MoveParent,
/*8651*/              OPC_MoveParent,
/*8652*/              OPC_CheckChild1Integer, 63, 
/*8654*/              OPC_CheckChild1Type, MVT::i32,
/*8656*/              OPC_MoveParent,
/*8657*/              OPC_MoveParent,
/*8658*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8661*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*8670*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32))) - Complexity = 39
                      // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*8679*/            0, // EndSwitchOpcode
/*8680*/          /*Scope*/ 72, /*->8753*/
/*8681*/            OPC_RecordChild0, // #0 = $src
/*8682*/            OPC_MoveChild, 1,
/*8684*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8687*/            OPC_CheckChild0Same, 0,
/*8689*/            OPC_Scope, 30, /*->8721*/ // 2 children in Scope
/*8691*/              OPC_CheckChild1Integer, 31, 
/*8693*/              OPC_CheckChild1Type, MVT::i32,
/*8695*/              OPC_MoveParent,
/*8696*/              OPC_MoveParent,
/*8697*/              OPC_MoveChild, 1,
/*8699*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8702*/              OPC_CheckChild0Same, 0,
/*8704*/              OPC_CheckChild1Integer, 31, 
/*8706*/              OPC_CheckChild1Type, MVT::i32,
/*8708*/              OPC_MoveParent,
/*8709*/              OPC_MoveParent,
/*8710*/              OPC_CheckType, MVT::i32,
/*8712*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i32 0:i32, (xor:i32 (add:i32 GR32:i32:$src, (sra:i32 GR32:i32:$src, 31:i32)), (sra:i32 GR32:i32:$src, 31:i32))) - Complexity = 30
                      // Dst: (LNR:i32:i32 GR32:i32:$src)
/*8721*/            /*Scope*/ 30, /*->8752*/
/*8722*/              OPC_CheckChild1Integer, 63, 
/*8724*/              OPC_CheckChild1Type, MVT::i32,
/*8726*/              OPC_MoveParent,
/*8727*/              OPC_MoveParent,
/*8728*/              OPC_MoveChild, 1,
/*8730*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8733*/              OPC_CheckChild0Same, 0,
/*8735*/              OPC_CheckChild1Integer, 63, 
/*8737*/              OPC_CheckChild1Type, MVT::i32,
/*8739*/              OPC_MoveParent,
/*8740*/              OPC_MoveParent,
/*8741*/              OPC_CheckType, MVT::i64,
/*8743*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (add:i64 GR64:i64:$src, (sra:i64 GR64:i64:$src, 63:i32)), (sra:i64 GR64:i64:$src, 63:i32))) - Complexity = 30
                      // Dst: (LNGR:i64:i32 GR64:i64:$src)
/*8752*/            0, /*End of Scope*/
/*8753*/          /*Scope*/ 74, /*->8828*/
/*8754*/            OPC_MoveChild, 0,
/*8756*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8759*/            OPC_RecordChild0, // #0 = $src
/*8760*/            OPC_Scope, 32, /*->8794*/ // 2 children in Scope
/*8762*/              OPC_CheckChild1Integer, 31, 
/*8764*/              OPC_CheckChild1Type, MVT::i32,
/*8766*/              OPC_MoveParent,
/*8767*/              OPC_CheckChild1Same, 0,
/*8769*/              OPC_MoveParent,
/*8770*/              OPC_MoveChild, 1,
/*8772*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8775*/              OPC_CheckChild0Same, 0,
/*8777*/              OPC_CheckChild1Integer, 31, 
/*8779*/              OPC_CheckChild1Type, MVT::i32,
/*8781*/              OPC_MoveParent,
/*8782*/              OPC_MoveParent,
/*8783*/              OPC_CheckType, MVT::i32,
/*8785*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i32 0:i32, (xor:i32 (add:i32 (sra:i32 GR32:i32:$src, 31:i32), GR32:i32:$src), (sra:i32 GR32:i32:$src, 31:i32))) - Complexity = 30
                      // Dst: (LNR:i32:i32 GR32:i32:$src)
/*8794*/            /*Scope*/ 32, /*->8827*/
/*8795*/              OPC_CheckChild1Integer, 63, 
/*8797*/              OPC_CheckChild1Type, MVT::i32,
/*8799*/              OPC_MoveParent,
/*8800*/              OPC_CheckChild1Same, 0,
/*8802*/              OPC_MoveParent,
/*8803*/              OPC_MoveChild, 1,
/*8805*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8808*/              OPC_CheckChild0Same, 0,
/*8810*/              OPC_CheckChild1Integer, 63, 
/*8812*/              OPC_CheckChild1Type, MVT::i32,
/*8814*/              OPC_MoveParent,
/*8815*/              OPC_MoveParent,
/*8816*/              OPC_CheckType, MVT::i64,
/*8818*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (sub:i64 0:i64, (xor:i64 (add:i64 (sra:i64 GR64:i64:$src, 63:i32), GR64:i64:$src), (sra:i64 GR64:i64:$src, 63:i32))) - Complexity = 30
                      // Dst: (LNGR:i64:i32 GR64:i64:$src)
/*8827*/            0, /*End of Scope*/
/*8828*/          0, /*End of Scope*/
/*8829*/        /*SwitchOpcode*/ 123|128,2/*379*/, TARGET_VAL(ISD::SRA),// ->9212
/*8833*/          OPC_Scope, 104|128,1/*232*/, /*->9068*/ // 2 children in Scope
/*8836*/            OPC_MoveChild, 0,
/*8838*/            OPC_SwitchOpcode /*2 cases */, 86, TARGET_VAL(ISD::SIGN_EXTEND),// ->8928
/*8842*/              OPC_RecordChild0, // #0 = $src
/*8843*/              OPC_MoveParent,
/*8844*/              OPC_CheckChild1Integer, 63, 
/*8846*/              OPC_CheckChild1Type, MVT::i32,
/*8848*/              OPC_MoveParent,
/*8849*/              OPC_MoveChild, 1,
/*8851*/              OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*8854*/              OPC_MoveChild, 0,
/*8856*/              OPC_SwitchOpcode /*2 cases */, 32, TARGET_VAL(ISD::SIGN_EXTEND),// ->8892
/*8860*/                OPC_CheckChild0Same, 0,
/*8862*/                OPC_MoveParent,
/*8863*/                OPC_MoveChild, 1,
/*8865*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8868*/                OPC_MoveChild, 0,
/*8870*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8873*/                OPC_CheckChild0Same, 0,
/*8875*/                OPC_MoveParent,
/*8876*/                OPC_CheckChild1Integer, 63, 
/*8878*/                OPC_CheckChild1Type, MVT::i32,
/*8880*/                OPC_MoveParent,
/*8881*/                OPC_MoveParent,
/*8882*/                OPC_MoveParent,
/*8883*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)))) - Complexity = 39
                        // Dst: (LNGFR:i64:i32 GR32:i32:$src)
/*8892*/              /*SwitchOpcode*/ 32, TARGET_VAL(ISD::SRA),// ->8927
/*8895*/                OPC_MoveChild, 0,
/*8897*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8900*/                OPC_CheckChild0Same, 0,
/*8902*/                OPC_MoveParent,
/*8903*/                OPC_CheckChild1Integer, 63, 
/*8905*/                OPC_CheckChild1Type, MVT::i32,
/*8907*/                OPC_MoveParent,
/*8908*/                OPC_MoveChild, 1,
/*8910*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8913*/                OPC_CheckChild0Same, 0,
/*8915*/                OPC_MoveParent,
/*8916*/                OPC_MoveParent,
/*8917*/                OPC_MoveParent,
/*8918*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src)))) - Complexity = 39
                        // Dst: (LNGFR:i64:i32 GR32:i32:$src)
/*8927*/              0, // EndSwitchOpcode
/*8928*/            /*SwitchOpcode*/ 7|128,1/*135*/, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9067
/*8932*/              OPC_RecordChild0, // #0 = $src
/*8933*/              OPC_MoveChild, 1,
/*8935*/              OPC_CheckValueType, MVT::i32,
/*8937*/              OPC_MoveParent,
/*8938*/              OPC_MoveParent,
/*8939*/              OPC_CheckChild1Integer, 63, 
/*8941*/              OPC_CheckChild1Type, MVT::i32,
/*8943*/              OPC_MoveParent,
/*8944*/              OPC_MoveChild, 1,
/*8946*/              OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*8949*/              OPC_MoveChild, 0,
/*8951*/              OPC_SwitchOpcode /*2 cases */, 54, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9009
/*8955*/                OPC_CheckChild0Same, 0,
/*8957*/                OPC_MoveChild, 1,
/*8959*/                OPC_CheckValueType, MVT::i32,
/*8961*/                OPC_MoveParent,
/*8962*/                OPC_MoveParent,
/*8963*/                OPC_MoveChild, 1,
/*8965*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*8968*/                OPC_MoveChild, 0,
/*8970*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8973*/                OPC_CheckChild0Same, 0,
/*8975*/                OPC_MoveChild, 1,
/*8977*/                OPC_CheckValueType, MVT::i32,
/*8979*/                OPC_MoveParent,
/*8980*/                OPC_MoveParent,
/*8981*/                OPC_CheckChild1Integer, 63, 
/*8983*/                OPC_CheckChild1Type, MVT::i32,
/*8985*/                OPC_MoveParent,
/*8986*/                OPC_MoveParent,
/*8987*/                OPC_MoveParent,
/*8988*/                OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*8991*/                OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9000*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)))) - Complexity = 39
                        // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*9009*/              /*SwitchOpcode*/ 54, TARGET_VAL(ISD::SRA),// ->9066
/*9012*/                OPC_MoveChild, 0,
/*9014*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*9017*/                OPC_CheckChild0Same, 0,
/*9019*/                OPC_MoveChild, 1,
/*9021*/                OPC_CheckValueType, MVT::i32,
/*9023*/                OPC_MoveParent,
/*9024*/                OPC_MoveParent,
/*9025*/                OPC_CheckChild1Integer, 63, 
/*9027*/                OPC_CheckChild1Type, MVT::i32,
/*9029*/                OPC_MoveParent,
/*9030*/                OPC_MoveChild, 1,
/*9032*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*9035*/                OPC_CheckChild0Same, 0,
/*9037*/                OPC_MoveChild, 1,
/*9039*/                OPC_CheckValueType, MVT::i32,
/*9041*/                OPC_MoveParent,
/*9042*/                OPC_MoveParent,
/*9043*/                OPC_MoveParent,
/*9044*/                OPC_MoveParent,
/*9045*/                OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9048*/                OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9057*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other)))) - Complexity = 39
                        // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*9066*/              0, // EndSwitchOpcode
/*9067*/            0, // EndSwitchOpcode
/*9068*/          /*Scope*/ 13|128,1/*141*/, /*->9211*/
/*9070*/            OPC_RecordChild0, // #0 = $src
/*9071*/            OPC_Scope, 68, /*->9141*/ // 2 children in Scope
/*9073*/              OPC_CheckChild1Integer, 31, 
/*9075*/              OPC_CheckChild1Type, MVT::i32,
/*9077*/              OPC_MoveParent,
/*9078*/              OPC_MoveChild, 1,
/*9080*/              OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*9083*/              OPC_Scope, 27, /*->9112*/ // 2 children in Scope
/*9085*/                OPC_CheckChild0Same, 0,
/*9087*/                OPC_MoveChild, 1,
/*9089*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9092*/                OPC_CheckChild0Same, 0,
/*9094*/                OPC_CheckChild1Integer, 31, 
/*9096*/                OPC_CheckChild1Type, MVT::i32,
/*9098*/                OPC_MoveParent,
/*9099*/                OPC_MoveParent,
/*9100*/                OPC_MoveParent,
/*9101*/                OPC_CheckType, MVT::i32,
/*9103*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i32 0:i32, (xor:i32 (sra:i32 GR32:i32:$src, 31:i32), (add:i32 GR32:i32:$src, (sra:i32 GR32:i32:$src, 31:i32)))) - Complexity = 30
                        // Dst: (LNR:i32:i32 GR32:i32:$src)
/*9112*/              /*Scope*/ 27, /*->9140*/
/*9113*/                OPC_MoveChild, 0,
/*9115*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9118*/                OPC_CheckChild0Same, 0,
/*9120*/                OPC_CheckChild1Integer, 31, 
/*9122*/                OPC_CheckChild1Type, MVT::i32,
/*9124*/                OPC_MoveParent,
/*9125*/                OPC_CheckChild1Same, 0,
/*9127*/                OPC_MoveParent,
/*9128*/                OPC_MoveParent,
/*9129*/                OPC_CheckType, MVT::i32,
/*9131*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i32 0:i32, (xor:i32 (sra:i32 GR32:i32:$src, 31:i32), (add:i32 (sra:i32 GR32:i32:$src, 31:i32), GR32:i32:$src))) - Complexity = 30
                        // Dst: (LNR:i32:i32 GR32:i32:$src)
/*9140*/              0, /*End of Scope*/
/*9141*/            /*Scope*/ 68, /*->9210*/
/*9142*/              OPC_CheckChild1Integer, 63, 
/*9144*/              OPC_CheckChild1Type, MVT::i32,
/*9146*/              OPC_MoveParent,
/*9147*/              OPC_MoveChild, 1,
/*9149*/              OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*9152*/              OPC_Scope, 27, /*->9181*/ // 2 children in Scope
/*9154*/                OPC_CheckChild0Same, 0,
/*9156*/                OPC_MoveChild, 1,
/*9158*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9161*/                OPC_CheckChild0Same, 0,
/*9163*/                OPC_CheckChild1Integer, 63, 
/*9165*/                OPC_CheckChild1Type, MVT::i32,
/*9167*/                OPC_MoveParent,
/*9168*/                OPC_MoveParent,
/*9169*/                OPC_MoveParent,
/*9170*/                OPC_CheckType, MVT::i64,
/*9172*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 GR64:i64:$src, 63:i32), (add:i64 GR64:i64:$src, (sra:i64 GR64:i64:$src, 63:i32)))) - Complexity = 30
                        // Dst: (LNGR:i64:i32 GR64:i64:$src)
/*9181*/              /*Scope*/ 27, /*->9209*/
/*9182*/                OPC_MoveChild, 0,
/*9184*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9187*/                OPC_CheckChild0Same, 0,
/*9189*/                OPC_CheckChild1Integer, 63, 
/*9191*/                OPC_CheckChild1Type, MVT::i32,
/*9193*/                OPC_MoveParent,
/*9194*/                OPC_CheckChild1Same, 0,
/*9196*/                OPC_MoveParent,
/*9197*/                OPC_MoveParent,
/*9198*/                OPC_CheckType, MVT::i64,
/*9200*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (sub:i64 0:i64, (xor:i64 (sra:i64 GR64:i64:$src, 63:i32), (add:i64 (sra:i64 GR64:i64:$src, 63:i32), GR64:i64:$src))) - Complexity = 30
                        // Dst: (LNGR:i64:i32 GR64:i64:$src)
/*9209*/              0, /*End of Scope*/
/*9210*/            0, /*End of Scope*/
/*9211*/          0, /*End of Scope*/
/*9212*/        0, // EndSwitchOpcode
/*9213*/      /*Scope*/ 44|128,1/*172*/, /*->9387*/
/*9215*/        OPC_RecordChild0, // #0 = $R1src
/*9216*/        OPC_MoveChild, 1,
/*9218*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*9221*/        OPC_RecordMemRef,
/*9222*/        OPC_RecordNode, // #1 = 'ld' chained node
/*9223*/        OPC_CheckFoldableChainNode,
/*9224*/        OPC_RecordChild1, // #2 = $XBD2
/*9225*/        OPC_CheckChild1Type, MVT::i64,
/*9227*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9229*/        OPC_Scope, 43, /*->9274*/ // 5 children in Scope
/*9231*/          OPC_CheckPredicate, 35, // Predicate_asextload
/*9233*/          OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*9235*/          OPC_MoveParent,
/*9236*/          OPC_CheckType, MVT::i32,
/*9238*/          OPC_Scope, 16, /*->9256*/ // 2 children in Scope
/*9240*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9243*/            OPC_EmitMergeInputChains1_1,
/*9244*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SH), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>) - Complexity = 19
                    // Dst: (SH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*9256*/          /*Scope*/ 16, /*->9273*/
/*9257*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9260*/            OPC_EmitMergeInputChains1_1,
/*9261*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>) - Complexity = 19
                    // Dst: (SHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*9273*/          0, /*End of Scope*/
/*9274*/        /*Scope*/ 41, /*->9316*/
/*9275*/          OPC_CheckPredicate, 13, // Predicate_load
/*9277*/          OPC_MoveParent,
/*9278*/          OPC_CheckType, MVT::i32,
/*9280*/          OPC_Scope, 16, /*->9298*/ // 2 children in Scope
/*9282*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*9285*/            OPC_EmitMergeInputChains1_1,
/*9286*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::S), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (S:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*9298*/          /*Scope*/ 16, /*->9315*/
/*9299*/            OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*9302*/            OPC_EmitMergeInputChains1_1,
/*9303*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*9315*/          0, /*End of Scope*/
/*9316*/        /*Scope*/ 23, /*->9340*/
/*9317*/          OPC_CheckPredicate, 35, // Predicate_asextload
/*9319*/          OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*9321*/          OPC_MoveParent,
/*9322*/          OPC_CheckType, MVT::i64,
/*9324*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9327*/          OPC_EmitMergeInputChains1_1,
/*9328*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>>) - Complexity = 19
                  // Dst: (SGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*9340*/        /*Scope*/ 21, /*->9362*/
/*9341*/          OPC_CheckPredicate, 13, // Predicate_load
/*9343*/          OPC_MoveParent,
/*9344*/          OPC_CheckType, MVT::i64,
/*9346*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*9349*/          OPC_EmitMergeInputChains1_1,
/*9350*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*9362*/        /*Scope*/ 23, /*->9386*/
/*9363*/          OPC_CheckPredicate, 38, // Predicate_azextload
/*9365*/          OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*9367*/          OPC_MoveParent,
/*9368*/          OPC_CheckType, MVT::i64,
/*9370*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*9373*/          OPC_EmitMergeInputChains1_1,
/*9374*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>) - Complexity = 19
                  // Dst: (SLGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*9386*/        0, /*End of Scope*/
/*9387*/      /*Scope*/ 58, /*->9446*/
/*9388*/        OPC_CheckChild0Integer, 0, 
/*9390*/        OPC_MoveChild, 1,
/*9392*/        OPC_CheckOpcode, TARGET_VAL(SystemZISD::IABS),
/*9395*/        OPC_MoveChild, 0,
/*9397*/        OPC_SwitchOpcode /*2 cases */, 12, TARGET_VAL(ISD::SIGN_EXTEND),// ->9413
/*9401*/          OPC_RecordChild0, // #0 = $src
/*9402*/          OPC_MoveParent,
/*9403*/          OPC_MoveParent,
/*9404*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:i64 0:i64, (z_iabs:i64 (sext:i64 GR32:i32:$src))) - Complexity = 14
                  // Dst: (LNGFR:i64:i32 GR32:i32:$src)
/*9413*/        /*SwitchOpcode*/ 29, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9445
/*9416*/          OPC_RecordChild0, // #0 = $src
/*9417*/          OPC_MoveChild, 1,
/*9419*/          OPC_CheckValueType, MVT::i32,
/*9421*/          OPC_MoveParent,
/*9422*/          OPC_MoveParent,
/*9423*/          OPC_MoveParent,
/*9424*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9427*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9436*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (sub:i64 0:i64, (z_iabs:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other))) - Complexity = 14
                  // Dst: (LNGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*9445*/        0, // EndSwitchOpcode
/*9446*/      /*Scope*/ 47, /*->9494*/
/*9447*/        OPC_RecordNode, // #0 = $src
/*9448*/        OPC_CheckType, MVT::i64,
/*9450*/        OPC_Scope, 13, /*->9465*/ // 3 children in Scope
/*9452*/          OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*9455*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: dynalloc12only:i64:$src - Complexity = 12
                  // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*9465*/        /*Scope*/ 13, /*->9479*/
/*9466*/          OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*9469*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                  // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*9479*/        /*Scope*/ 13, /*->9493*/
/*9480*/          OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*9483*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                  // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*9493*/        0, /*End of Scope*/
/*9494*/      /*Scope*/ 80, /*->9575*/
/*9495*/        OPC_CheckChild0Integer, 0, 
/*9497*/        OPC_MoveChild, 1,
/*9499*/        OPC_SwitchOpcode /*3 cases */, 26, TARGET_VAL(SystemZISD::IABS),// ->9529
/*9503*/          OPC_RecordChild0, // #0 = $R2
/*9504*/          OPC_MoveParent,
/*9505*/          OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->9517
/*9508*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNR), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i32 0:i32, (z_iabs:i32 GR32:i32:$R2)) - Complexity = 11
                    // Dst: (LNR:i32:i32 GR32:i32:$R2)
/*9517*/          /*SwitchType*/ 9, MVT::i64,// ->9528
/*9519*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNGR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (sub:i64 0:i64, (z_iabs:i64 GR64:i64:$R2)) - Complexity = 11
                    // Dst: (LNGR:i64:i32 GR64:i64:$R2)
/*9528*/          0, // EndSwitchType
/*9529*/        /*SwitchOpcode*/ 11, TARGET_VAL(ISD::SIGN_EXTEND),// ->9543
/*9532*/          OPC_RecordChild0, // #0 = $src
/*9533*/          OPC_MoveParent,
/*9534*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                  // Dst: (LCGFR:i64:i32 GR32:i32:$src)
/*9543*/        /*SwitchOpcode*/ 28, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9574
/*9546*/          OPC_RecordChild0, // #0 = $src
/*9547*/          OPC_MoveChild, 1,
/*9549*/          OPC_CheckValueType, MVT::i32,
/*9551*/          OPC_MoveParent,
/*9552*/          OPC_MoveParent,
/*9553*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9556*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9565*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (sub:i64 0:i64, (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 11
                  // Dst: (LCGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*9574*/        0, // EndSwitchOpcode
/*9575*/      /*Scope*/ 35, /*->9611*/
/*9576*/        OPC_RecordChild0, // #0 = $src1
/*9577*/        OPC_MoveChild, 1,
/*9579*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*9585*/        OPC_RecordChild0, // #1 = $src2
/*9586*/        OPC_MoveParent,
/*9587*/        OPC_CheckType, MVT::i64,
/*9589*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9592*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*9601*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (sub:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*9611*/      /*Scope*/ 27, /*->9639*/
/*9612*/        OPC_CheckChild0Integer, 0, 
/*9614*/        OPC_RecordChild1, // #0 = $R2
/*9615*/        OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->9627
/*9618*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:i32 0:i32, GR32:i32:$R2) - Complexity = 8
                  // Dst: (LCR:i32:i32 GR32:i32:$R2)
/*9627*/        /*SwitchType*/ 9, MVT::i64,// ->9638
/*9629*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:i64 0:i64, GR64:i64:$R2) - Complexity = 8
                  // Dst: (LCGR:i64:i32 GR64:i64:$R2)
/*9638*/        0, // EndSwitchType
/*9639*/      /*Scope*/ 98, /*->9738*/
/*9640*/        OPC_RecordChild0, // #0 = $src1
/*9641*/        OPC_Scope, 66, /*->9709*/ // 2 children in Scope
/*9643*/          OPC_MoveChild, 1,
/*9645*/          OPC_SwitchOpcode /*3 cases */, 12, TARGET_VAL(ISD::SIGN_EXTEND),// ->9661
/*9649*/            OPC_RecordChild0, // #1 = $src2
/*9650*/            OPC_MoveParent,
/*9651*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sub:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                    // Dst: (SGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*9661*/          /*SwitchOpcode*/ 12, TARGET_VAL(ISD::ZERO_EXTEND),// ->9676
/*9664*/            OPC_RecordChild0, // #1 = $src2
/*9665*/            OPC_MoveParent,
/*9666*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sub:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                    // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*9676*/          /*SwitchOpcode*/ 29, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9708
/*9679*/            OPC_RecordChild0, // #1 = $src2
/*9680*/            OPC_MoveChild, 1,
/*9682*/            OPC_CheckValueType, MVT::i32,
/*9684*/            OPC_MoveParent,
/*9685*/            OPC_MoveParent,
/*9686*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9689*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*9698*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (sub:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                    // Dst: (SGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*9708*/          0, // EndSwitchOpcode
/*9709*/        /*Scope*/ 27, /*->9737*/
/*9710*/          OPC_RecordChild1, // #1 = $R2
/*9711*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->9724
/*9714*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SR), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sub:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                    // Dst: (SR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*9724*/          /*SwitchType*/ 10, MVT::i64,// ->9736
/*9726*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sub:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                    // Dst: (SGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*9736*/          0, // EndSwitchType
/*9737*/        0, /*End of Scope*/
/*9738*/      0, /*End of Scope*/
/*9739*/    /*SwitchOpcode*/ 58|128,8/*1082*/, TARGET_VAL(ISD::XOR),// ->10825
/*9743*/      OPC_Scope, 22|128,6/*790*/, /*->10536*/ // 4 children in Scope
/*9746*/        OPC_MoveChild, 0,
/*9748*/        OPC_SwitchOpcode /*2 cases */, 23|128,3/*407*/, TARGET_VAL(ISD::ADD),// ->10160
/*9753*/          OPC_Scope, 3|128,2/*259*/, /*->10015*/ // 3 children in Scope
/*9756*/            OPC_MoveChild, 0,
/*9758*/            OPC_SwitchOpcode /*3 cases */, 48, TARGET_VAL(ISD::SIGN_EXTEND),// ->9810
/*9762*/              OPC_RecordChild0, // #0 = $src
/*9763*/              OPC_MoveParent,
/*9764*/              OPC_MoveChild, 1,
/*9766*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9769*/              OPC_MoveChild, 0,
/*9771*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*9774*/              OPC_CheckChild0Same, 0,
/*9776*/              OPC_MoveParent,
/*9777*/              OPC_CheckChild1Integer, 63, 
/*9779*/              OPC_CheckChild1Type, MVT::i32,
/*9781*/              OPC_MoveParent,
/*9782*/              OPC_MoveParent,
/*9783*/              OPC_MoveChild, 1,
/*9785*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9788*/              OPC_MoveChild, 0,
/*9790*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*9793*/              OPC_CheckChild0Same, 0,
/*9795*/              OPC_MoveParent,
/*9796*/              OPC_CheckChild1Integer, 63, 
/*9798*/              OPC_CheckChild1Type, MVT::i32,
/*9800*/              OPC_MoveParent,
/*9801*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 GR32:i32:$src)
/*9810*/            /*SwitchOpcode*/ 123, TARGET_VAL(ISD::SRA),// ->9936
/*9813*/              OPC_MoveChild, 0,
/*9815*/              OPC_SwitchOpcode /*2 cases */, 43, TARGET_VAL(ISD::SIGN_EXTEND),// ->9862
/*9819*/                OPC_RecordChild0, // #0 = $src
/*9820*/                OPC_MoveParent,
/*9821*/                OPC_CheckChild1Integer, 63, 
/*9823*/                OPC_CheckChild1Type, MVT::i32,
/*9825*/                OPC_MoveParent,
/*9826*/                OPC_MoveChild, 1,
/*9828*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*9831*/                OPC_CheckChild0Same, 0,
/*9833*/                OPC_MoveParent,
/*9834*/                OPC_MoveParent,
/*9835*/                OPC_MoveChild, 1,
/*9837*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9840*/                OPC_MoveChild, 0,
/*9842*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*9845*/                OPC_CheckChild0Same, 0,
/*9847*/                OPC_MoveParent,
/*9848*/                OPC_CheckChild1Integer, 63, 
/*9850*/                OPC_CheckChild1Type, MVT::i32,
/*9852*/                OPC_MoveParent,
/*9853*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i64 (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src)), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32)) - Complexity = 31
                        // Dst: (LPGFR:i64:i32 GR32:i32:$src)
/*9862*/              /*SwitchOpcode*/ 70, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9935
/*9865*/                OPC_RecordChild0, // #0 = $src
/*9866*/                OPC_MoveChild, 1,
/*9868*/                OPC_CheckValueType, MVT::i32,
/*9870*/                OPC_MoveParent,
/*9871*/                OPC_MoveParent,
/*9872*/                OPC_CheckChild1Integer, 63, 
/*9874*/                OPC_CheckChild1Type, MVT::i32,
/*9876*/                OPC_MoveParent,
/*9877*/                OPC_MoveChild, 1,
/*9879*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*9882*/                OPC_CheckChild0Same, 0,
/*9884*/                OPC_MoveChild, 1,
/*9886*/                OPC_CheckValueType, MVT::i32,
/*9888*/                OPC_MoveParent,
/*9889*/                OPC_MoveParent,
/*9890*/                OPC_MoveParent,
/*9891*/                OPC_MoveChild, 1,
/*9893*/                OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9896*/                OPC_MoveChild, 0,
/*9898*/                OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*9901*/                OPC_CheckChild0Same, 0,
/*9903*/                OPC_MoveChild, 1,
/*9905*/                OPC_CheckValueType, MVT::i32,
/*9907*/                OPC_MoveParent,
/*9908*/                OPC_MoveParent,
/*9909*/                OPC_CheckChild1Integer, 63, 
/*9911*/                OPC_CheckChild1Type, MVT::i32,
/*9913*/                OPC_MoveParent,
/*9914*/                OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9917*/                OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9926*/                OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (xor:i64 (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)) - Complexity = 31
                        // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*9935*/              0, // EndSwitchOpcode
/*9936*/            /*SwitchOpcode*/ 75, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->10014
/*9939*/              OPC_RecordChild0, // #0 = $src
/*9940*/              OPC_MoveChild, 1,
/*9942*/              OPC_CheckValueType, MVT::i32,
/*9944*/              OPC_MoveParent,
/*9945*/              OPC_MoveParent,
/*9946*/              OPC_MoveChild, 1,
/*9948*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9951*/              OPC_MoveChild, 0,
/*9953*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*9956*/              OPC_CheckChild0Same, 0,
/*9958*/              OPC_MoveChild, 1,
/*9960*/              OPC_CheckValueType, MVT::i32,
/*9962*/              OPC_MoveParent,
/*9963*/              OPC_MoveParent,
/*9964*/              OPC_CheckChild1Integer, 63, 
/*9966*/              OPC_CheckChild1Type, MVT::i32,
/*9968*/              OPC_MoveParent,
/*9969*/              OPC_MoveParent,
/*9970*/              OPC_MoveChild, 1,
/*9972*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9975*/              OPC_MoveChild, 0,
/*9977*/              OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*9980*/              OPC_CheckChild0Same, 0,
/*9982*/              OPC_MoveChild, 1,
/*9984*/              OPC_CheckValueType, MVT::i32,
/*9986*/              OPC_MoveParent,
/*9987*/              OPC_MoveParent,
/*9988*/              OPC_CheckChild1Integer, 63, 
/*9990*/              OPC_CheckChild1Type, MVT::i32,
/*9992*/              OPC_MoveParent,
/*9993*/              OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*9996*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10005*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (xor:i64 (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32)) - Complexity = 31
                      // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*10014*/           0, // EndSwitchOpcode
/*10015*/         /*Scope*/ 70, /*->10086*/
/*10016*/           OPC_RecordChild0, // #0 = $src
/*10017*/           OPC_MoveChild, 1,
/*10019*/           OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10022*/           OPC_CheckChild0Same, 0,
/*10024*/           OPC_Scope, 29, /*->10055*/ // 2 children in Scope
/*10026*/             OPC_CheckChild1Integer, 31, 
/*10028*/             OPC_CheckChild1Type, MVT::i32,
/*10030*/             OPC_MoveParent,
/*10031*/             OPC_MoveParent,
/*10032*/             OPC_MoveChild, 1,
/*10034*/             OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10037*/             OPC_CheckChild0Same, 0,
/*10039*/             OPC_CheckChild1Integer, 31, 
/*10041*/             OPC_CheckChild1Type, MVT::i32,
/*10043*/             OPC_MoveParent,
/*10044*/             OPC_CheckType, MVT::i32,
/*10046*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i32 (add:i32 GR32:i32:$src, (sra:i32 GR32:i32:$src, 31:i32)), (sra:i32 GR32:i32:$src, 31:i32)) - Complexity = 22
                      // Dst: (LPR:i32:i32 GR32:i32:$src)
/*10055*/           /*Scope*/ 29, /*->10085*/
/*10056*/             OPC_CheckChild1Integer, 63, 
/*10058*/             OPC_CheckChild1Type, MVT::i32,
/*10060*/             OPC_MoveParent,
/*10061*/             OPC_MoveParent,
/*10062*/             OPC_MoveChild, 1,
/*10064*/             OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10067*/             OPC_CheckChild0Same, 0,
/*10069*/             OPC_CheckChild1Integer, 63, 
/*10071*/             OPC_CheckChild1Type, MVT::i32,
/*10073*/             OPC_MoveParent,
/*10074*/             OPC_CheckType, MVT::i64,
/*10076*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (add:i64 GR64:i64:$src, (sra:i64 GR64:i64:$src, 63:i32)), (sra:i64 GR64:i64:$src, 63:i32)) - Complexity = 22
                      // Dst: (LPGR:i64:i32 GR64:i64:$src)
/*10085*/           0, /*End of Scope*/
/*10086*/         /*Scope*/ 72, /*->10159*/
/*10087*/           OPC_MoveChild, 0,
/*10089*/           OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10092*/           OPC_RecordChild0, // #0 = $src
/*10093*/           OPC_Scope, 31, /*->10126*/ // 2 children in Scope
/*10095*/             OPC_CheckChild1Integer, 31, 
/*10097*/             OPC_CheckChild1Type, MVT::i32,
/*10099*/             OPC_MoveParent,
/*10100*/             OPC_CheckChild1Same, 0,
/*10102*/             OPC_MoveParent,
/*10103*/             OPC_MoveChild, 1,
/*10105*/             OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10108*/             OPC_CheckChild0Same, 0,
/*10110*/             OPC_CheckChild1Integer, 31, 
/*10112*/             OPC_CheckChild1Type, MVT::i32,
/*10114*/             OPC_MoveParent,
/*10115*/             OPC_CheckType, MVT::i32,
/*10117*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i32 (add:i32 (sra:i32 GR32:i32:$src, 31:i32), GR32:i32:$src), (sra:i32 GR32:i32:$src, 31:i32)) - Complexity = 22
                      // Dst: (LPR:i32:i32 GR32:i32:$src)
/*10126*/           /*Scope*/ 31, /*->10158*/
/*10127*/             OPC_CheckChild1Integer, 63, 
/*10129*/             OPC_CheckChild1Type, MVT::i32,
/*10131*/             OPC_MoveParent,
/*10132*/             OPC_CheckChild1Same, 0,
/*10134*/             OPC_MoveParent,
/*10135*/             OPC_MoveChild, 1,
/*10137*/             OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10140*/             OPC_CheckChild0Same, 0,
/*10142*/             OPC_CheckChild1Integer, 63, 
/*10144*/             OPC_CheckChild1Type, MVT::i32,
/*10146*/             OPC_MoveParent,
/*10147*/             OPC_CheckType, MVT::i64,
/*10149*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                          2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (xor:i64 (add:i64 (sra:i64 GR64:i64:$src, 63:i32), GR64:i64:$src), (sra:i64 GR64:i64:$src, 63:i32)) - Complexity = 22
                      // Dst: (LPGR:i64:i32 GR64:i64:$src)
/*10158*/           0, /*End of Scope*/
/*10159*/         0, /*End of Scope*/
/*10160*/       /*SwitchOpcode*/ 115|128,2/*371*/, TARGET_VAL(ISD::SRA),// ->10535
/*10164*/         OPC_Scope, 100|128,1/*228*/, /*->10395*/ // 2 children in Scope
/*10167*/           OPC_MoveChild, 0,
/*10169*/           OPC_SwitchOpcode /*2 cases */, 84, TARGET_VAL(ISD::SIGN_EXTEND),// ->10257
/*10173*/             OPC_RecordChild0, // #0 = $src
/*10174*/             OPC_MoveParent,
/*10175*/             OPC_CheckChild1Integer, 63, 
/*10177*/             OPC_CheckChild1Type, MVT::i32,
/*10179*/             OPC_MoveParent,
/*10180*/             OPC_MoveChild, 1,
/*10182*/             OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*10185*/             OPC_MoveChild, 0,
/*10187*/             OPC_SwitchOpcode /*2 cases */, 31, TARGET_VAL(ISD::SIGN_EXTEND),// ->10222
/*10191*/               OPC_CheckChild0Same, 0,
/*10193*/               OPC_MoveParent,
/*10194*/               OPC_MoveChild, 1,
/*10196*/               OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10199*/               OPC_MoveChild, 0,
/*10201*/               OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*10204*/               OPC_CheckChild0Same, 0,
/*10206*/               OPC_MoveParent,
/*10207*/               OPC_CheckChild1Integer, 63, 
/*10209*/               OPC_CheckChild1Type, MVT::i32,
/*10211*/               OPC_MoveParent,
/*10212*/               OPC_MoveParent,
/*10213*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sext:i64 GR32:i32:$src), (sra:i64 (sext:i64 GR32:i32:$src), 63:i32))) - Complexity = 31
                        // Dst: (LPGFR:i64:i32 GR32:i32:$src)
/*10222*/             /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SRA),// ->10256
/*10225*/               OPC_MoveChild, 0,
/*10227*/               OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*10230*/               OPC_CheckChild0Same, 0,
/*10232*/               OPC_MoveParent,
/*10233*/               OPC_CheckChild1Integer, 63, 
/*10235*/               OPC_CheckChild1Type, MVT::i32,
/*10237*/               OPC_MoveParent,
/*10238*/               OPC_MoveChild, 1,
/*10240*/               OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*10243*/               OPC_CheckChild0Same, 0,
/*10245*/               OPC_MoveParent,
/*10246*/               OPC_MoveParent,
/*10247*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (add:i64 (sra:i64 (sext:i64 GR32:i32:$src), 63:i32), (sext:i64 GR32:i32:$src))) - Complexity = 31
                        // Dst: (LPGFR:i64:i32 GR32:i32:$src)
/*10256*/             0, // EndSwitchOpcode
/*10257*/           /*SwitchOpcode*/ 5|128,1/*133*/, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->10394
/*10261*/             OPC_RecordChild0, // #0 = $src
/*10262*/             OPC_MoveChild, 1,
/*10264*/             OPC_CheckValueType, MVT::i32,
/*10266*/             OPC_MoveParent,
/*10267*/             OPC_MoveParent,
/*10268*/             OPC_CheckChild1Integer, 63, 
/*10270*/             OPC_CheckChild1Type, MVT::i32,
/*10272*/             OPC_MoveParent,
/*10273*/             OPC_MoveChild, 1,
/*10275*/             OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*10278*/             OPC_MoveChild, 0,
/*10280*/             OPC_SwitchOpcode /*2 cases */, 53, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->10337
/*10284*/               OPC_CheckChild0Same, 0,
/*10286*/               OPC_MoveChild, 1,
/*10288*/               OPC_CheckValueType, MVT::i32,
/*10290*/               OPC_MoveParent,
/*10291*/               OPC_MoveParent,
/*10292*/               OPC_MoveChild, 1,
/*10294*/               OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10297*/               OPC_MoveChild, 0,
/*10299*/               OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*10302*/               OPC_CheckChild0Same, 0,
/*10304*/               OPC_MoveChild, 1,
/*10306*/               OPC_CheckValueType, MVT::i32,
/*10308*/               OPC_MoveParent,
/*10309*/               OPC_MoveParent,
/*10310*/               OPC_CheckChild1Integer, 63, 
/*10312*/               OPC_CheckChild1Type, MVT::i32,
/*10314*/               OPC_MoveParent,
/*10315*/               OPC_MoveParent,
/*10316*/               OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*10319*/               OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10328*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32))) - Complexity = 31
                        // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*10337*/             /*SwitchOpcode*/ 53, TARGET_VAL(ISD::SRA),// ->10393
/*10340*/               OPC_MoveChild, 0,
/*10342*/               OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*10345*/               OPC_CheckChild0Same, 0,
/*10347*/               OPC_MoveChild, 1,
/*10349*/               OPC_CheckValueType, MVT::i32,
/*10351*/               OPC_MoveParent,
/*10352*/               OPC_MoveParent,
/*10353*/               OPC_CheckChild1Integer, 63, 
/*10355*/               OPC_CheckChild1Type, MVT::i32,
/*10357*/               OPC_MoveParent,
/*10358*/               OPC_MoveChild, 1,
/*10360*/               OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*10363*/               OPC_CheckChild0Same, 0,
/*10365*/               OPC_MoveChild, 1,
/*10367*/               OPC_CheckValueType, MVT::i32,
/*10369*/               OPC_MoveParent,
/*10370*/               OPC_MoveParent,
/*10371*/               OPC_MoveParent,
/*10372*/               OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*10375*/               OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10384*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (xor:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (add:i64 (sra:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other), 63:i32), (sext_inreg:i64 GR64:i64:$src, i32:Other))) - Complexity = 31
                        // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*10393*/             0, // EndSwitchOpcode
/*10394*/           0, // EndSwitchOpcode
/*10395*/         /*Scope*/ 9|128,1/*137*/, /*->10534*/
/*10397*/           OPC_RecordChild0, // #0 = $src
/*10398*/           OPC_Scope, 66, /*->10466*/ // 2 children in Scope
/*10400*/             OPC_CheckChild1Integer, 31, 
/*10402*/             OPC_CheckChild1Type, MVT::i32,
/*10404*/             OPC_MoveParent,
/*10405*/             OPC_MoveChild, 1,
/*10407*/             OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*10410*/             OPC_Scope, 26, /*->10438*/ // 2 children in Scope
/*10412*/               OPC_CheckChild0Same, 0,
/*10414*/               OPC_MoveChild, 1,
/*10416*/               OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10419*/               OPC_CheckChild0Same, 0,
/*10421*/               OPC_CheckChild1Integer, 31, 
/*10423*/               OPC_CheckChild1Type, MVT::i32,
/*10425*/               OPC_MoveParent,
/*10426*/               OPC_MoveParent,
/*10427*/               OPC_CheckType, MVT::i32,
/*10429*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i32 (sra:i32 GR32:i32:$src, 31:i32), (add:i32 GR32:i32:$src, (sra:i32 GR32:i32:$src, 31:i32))) - Complexity = 22
                        // Dst: (LPR:i32:i32 GR32:i32:$src)
/*10438*/             /*Scope*/ 26, /*->10465*/
/*10439*/               OPC_MoveChild, 0,
/*10441*/               OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10444*/               OPC_CheckChild0Same, 0,
/*10446*/               OPC_CheckChild1Integer, 31, 
/*10448*/               OPC_CheckChild1Type, MVT::i32,
/*10450*/               OPC_MoveParent,
/*10451*/               OPC_CheckChild1Same, 0,
/*10453*/               OPC_MoveParent,
/*10454*/               OPC_CheckType, MVT::i32,
/*10456*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i32 (sra:i32 GR32:i32:$src, 31:i32), (add:i32 (sra:i32 GR32:i32:$src, 31:i32), GR32:i32:$src)) - Complexity = 22
                        // Dst: (LPR:i32:i32 GR32:i32:$src)
/*10465*/             0, /*End of Scope*/
/*10466*/           /*Scope*/ 66, /*->10533*/
/*10467*/             OPC_CheckChild1Integer, 63, 
/*10469*/             OPC_CheckChild1Type, MVT::i32,
/*10471*/             OPC_MoveParent,
/*10472*/             OPC_MoveChild, 1,
/*10474*/             OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*10477*/             OPC_Scope, 26, /*->10505*/ // 2 children in Scope
/*10479*/               OPC_CheckChild0Same, 0,
/*10481*/               OPC_MoveChild, 1,
/*10483*/               OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10486*/               OPC_CheckChild0Same, 0,
/*10488*/               OPC_CheckChild1Integer, 63, 
/*10490*/               OPC_CheckChild1Type, MVT::i32,
/*10492*/               OPC_MoveParent,
/*10493*/               OPC_MoveParent,
/*10494*/               OPC_CheckType, MVT::i64,
/*10496*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i64 (sra:i64 GR64:i64:$src, 63:i32), (add:i64 GR64:i64:$src, (sra:i64 GR64:i64:$src, 63:i32))) - Complexity = 22
                        // Dst: (LPGR:i64:i32 GR64:i64:$src)
/*10505*/             /*Scope*/ 26, /*->10532*/
/*10506*/               OPC_MoveChild, 0,
/*10508*/               OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*10511*/               OPC_CheckChild0Same, 0,
/*10513*/               OPC_CheckChild1Integer, 63, 
/*10515*/               OPC_CheckChild1Type, MVT::i32,
/*10517*/               OPC_MoveParent,
/*10518*/               OPC_CheckChild1Same, 0,
/*10520*/               OPC_MoveParent,
/*10521*/               OPC_CheckType, MVT::i64,
/*10523*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                            2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                        // Src: (xor:i64 (sra:i64 GR64:i64:$src, 63:i32), (add:i64 (sra:i64 GR64:i64:$src, 63:i32), GR64:i64:$src)) - Complexity = 22
                        // Dst: (LPGR:i64:i32 GR64:i64:$src)
/*10532*/             0, /*End of Scope*/
/*10533*/           0, /*End of Scope*/
/*10534*/         0, /*End of Scope*/
/*10535*/       0, // EndSwitchOpcode
/*10536*/     /*Scope*/ 75, /*->10612*/
/*10537*/       OPC_RecordChild0, // #0 = $R1src
/*10538*/       OPC_MoveChild, 1,
/*10540*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10543*/       OPC_RecordMemRef,
/*10544*/       OPC_RecordNode, // #1 = 'ld' chained node
/*10545*/       OPC_CheckFoldableChainNode,
/*10546*/       OPC_RecordChild1, // #2 = $XBD2
/*10547*/       OPC_CheckChild1Type, MVT::i64,
/*10549*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10551*/       OPC_CheckPredicate, 13, // Predicate_load
/*10553*/       OPC_MoveParent,
/*10554*/       OPC_SwitchType /*2 cases */, 36, MVT::i32,// ->10593
/*10557*/         OPC_Scope, 16, /*->10575*/ // 2 children in Scope
/*10559*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10562*/           OPC_EmitMergeInputChains1_1,
/*10563*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10575*/         /*Scope*/ 16, /*->10592*/
/*10576*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10579*/           OPC_EmitMergeInputChains1_1,
/*10580*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*10592*/         0, /*End of Scope*/
/*10593*/       /*SwitchType*/ 16, MVT::i64,// ->10611
/*10595*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10598*/         OPC_EmitMergeInputChains1_1,
/*10599*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10611*/       0, // EndSwitchType
/*10612*/     /*Scope*/ 75, /*->10688*/
/*10613*/       OPC_MoveChild, 0,
/*10615*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10618*/       OPC_RecordMemRef,
/*10619*/       OPC_RecordNode, // #0 = 'ld' chained node
/*10620*/       OPC_CheckFoldableChainNode,
/*10621*/       OPC_RecordChild1, // #1 = $XBD2
/*10622*/       OPC_CheckChild1Type, MVT::i64,
/*10624*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10626*/       OPC_CheckPredicate, 13, // Predicate_load
/*10628*/       OPC_MoveParent,
/*10629*/       OPC_RecordChild1, // #2 = $R1src
/*10630*/       OPC_SwitchType /*2 cases */, 36, MVT::i32,// ->10669
/*10633*/         OPC_Scope, 16, /*->10651*/ // 2 children in Scope
/*10635*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10638*/           OPC_EmitMergeInputChains1_0,
/*10639*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (xor:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10651*/         /*Scope*/ 16, /*->10668*/
/*10652*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10655*/           OPC_EmitMergeInputChains1_0,
/*10656*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (xor:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*10668*/         0, /*End of Scope*/
/*10669*/       /*SwitchType*/ 16, MVT::i64,// ->10687
/*10671*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*10674*/         OPC_EmitMergeInputChains1_0,
/*10675*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*10687*/       0, // EndSwitchType
/*10688*/     /*Scope*/ 6|128,1/*134*/, /*->10824*/
/*10690*/       OPC_RecordChild0, // #0 = $R1src
/*10691*/       OPC_RecordChild1, // #1 = $I2
/*10692*/       OPC_Scope, 103, /*->10797*/ // 3 children in Scope
/*10694*/         OPC_MoveChild, 1,
/*10696*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10699*/         OPC_Scope, 20, /*->10721*/ // 3 children in Scope
/*10701*/           OPC_CheckPredicate, 40, // Predicate_imm64lf32
/*10703*/           OPC_MoveParent,
/*10704*/           OPC_CheckType, MVT::i64,
/*10706*/           OPC_EmitConvertToTarget, 1,
/*10708*/           OPC_EmitNodeXForm, 3, 2, // LF32
/*10711*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                    // Dst: (XILF64:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*10721*/         /*Scope*/ 20, /*->10742*/
/*10722*/           OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*10724*/           OPC_MoveParent,
/*10725*/           OPC_CheckType, MVT::i64,
/*10727*/           OPC_EmitConvertToTarget, 1,
/*10729*/           OPC_EmitNodeXForm, 4, 2, // HF32
/*10732*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                    // Dst: (XIHF64:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*10742*/         /*Scope*/ 53, /*->10796*/
/*10743*/           OPC_MoveParent,
/*10744*/           OPC_CheckType, MVT::i32,
/*10746*/           OPC_Scope, 17, /*->10765*/ // 2 children in Scope
/*10748*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*10750*/             OPC_EmitConvertToTarget, 1,
/*10752*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*10755*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIFMux), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (xor:i32 GRX32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                      // Dst: (XIFMux:i32:i32 GRX32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*10765*/           /*Scope*/ 29, /*->10795*/
/*10766*/             OPC_EmitConvertToTarget, 1,
/*10768*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*10771*/             OPC_Scope, 10, /*->10783*/ // 2 children in Scope
/*10773*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (xor:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                        // Dst: (XILF:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*10783*/             /*Scope*/ 10, /*->10794*/
/*10784*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (xor:i32 GRH32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                        // Dst: (XIHF:i32:i32 GRH32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*10794*/             0, /*End of Scope*/
/*10795*/           0, /*End of Scope*/
/*10796*/         0, /*End of Scope*/
/*10797*/       /*Scope*/ 12, /*->10810*/
/*10798*/         OPC_CheckType, MVT::i32,
/*10800*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::XR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (XR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*10810*/       /*Scope*/ 12, /*->10823*/
/*10811*/         OPC_CheckType, MVT::i64,
/*10813*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::XGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (XGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*10823*/       0, /*End of Scope*/
/*10824*/     0, /*End of Scope*/
/*10825*/   /*SwitchOpcode*/ 93|128,14/*1885*/, TARGET_VAL(ISD::OR),// ->12714
/*10829*/     OPC_Scope, 88|128,1/*216*/, /*->11048*/ // 20 children in Scope
/*10832*/       OPC_MoveChild, 0,
/*10834*/       OPC_Scope, 105, /*->10941*/ // 2 children in Scope
/*10836*/         OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*10847*/         OPC_RecordChild0, // #0 = $R1src
/*10848*/         OPC_MoveParent,
/*10849*/         OPC_MoveChild, 1,
/*10851*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10854*/         OPC_RecordMemRef,
/*10855*/         OPC_RecordNode, // #1 = 'ld' chained node
/*10856*/         OPC_CheckFoldableChainNode,
/*10857*/         OPC_RecordChild1, // #2 = $XBD2
/*10858*/         OPC_CheckChild1Type, MVT::i64,
/*10860*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10862*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*10864*/         OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*10866*/         OPC_MoveParent,
/*10867*/         OPC_SwitchType /*2 cases */, 34, MVT::i32,// ->10904
/*10870*/           OPC_Scope, 15, /*->10887*/ // 2 children in Scope
/*10872*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10875*/             OPC_EmitMergeInputChains1_1,
/*10876*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>) - Complexity = 27
                      // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10887*/           /*Scope*/ 15, /*->10903*/
/*10888*/             OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10891*/             OPC_EmitMergeInputChains1_1,
/*10892*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>) - Complexity = 27
                      // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*10903*/           0, /*End of Scope*/
/*10904*/         /*SwitchType*/ 34, MVT::i64,// ->10940
/*10906*/           OPC_Scope, 15, /*->10923*/ // 2 children in Scope
/*10908*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10911*/             OPC_EmitMergeInputChains1_1,
/*10912*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>) - Complexity = 27
                      // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*10923*/           /*Scope*/ 15, /*->10939*/
/*10924*/             OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10927*/             OPC_EmitMergeInputChains1_1,
/*10928*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>) - Complexity = 27
                      // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*10939*/           0, /*End of Scope*/
/*10940*/         0, // EndSwitchType
/*10941*/       /*Scope*/ 105, /*->11047*/
/*10942*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*10945*/         OPC_RecordMemRef,
/*10946*/         OPC_RecordNode, // #0 = 'ld' chained node
/*10947*/         OPC_CheckFoldableChainNode,
/*10948*/         OPC_RecordChild1, // #1 = $XBD2
/*10949*/         OPC_CheckChild1Type, MVT::i64,
/*10951*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10953*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*10955*/         OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*10957*/         OPC_MoveParent,
/*10958*/         OPC_MoveChild, 1,
/*10960*/         OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*10971*/         OPC_RecordChild0, // #2 = $R1src
/*10972*/         OPC_MoveParent,
/*10973*/         OPC_SwitchType /*2 cases */, 34, MVT::i32,// ->11010
/*10976*/           OPC_Scope, 15, /*->10993*/ // 2 children in Scope
/*10978*/             OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*10981*/             OPC_EmitMergeInputChains1_0,
/*10982*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                      // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                      // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*10993*/           /*Scope*/ 15, /*->11009*/
/*10994*/             OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*10997*/             OPC_EmitMergeInputChains1_0,
/*10998*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                      // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                      // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11009*/           0, /*End of Scope*/
/*11010*/         /*SwitchType*/ 34, MVT::i64,// ->11046
/*11012*/           OPC_Scope, 15, /*->11029*/ // 2 children in Scope
/*11014*/             OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11017*/             OPC_EmitMergeInputChains1_0,
/*11018*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                      // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                      // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*11029*/           /*Scope*/ 15, /*->11045*/
/*11030*/             OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11033*/             OPC_EmitMergeInputChains1_0,
/*11034*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                      // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                      // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*11045*/           0, /*End of Scope*/
/*11046*/         0, // EndSwitchType
/*11047*/       0, /*End of Scope*/
/*11048*/     /*Scope*/ 38, /*->11087*/
/*11049*/       OPC_RecordChild0, // #0 = $src1
/*11050*/       OPC_MoveChild, 1,
/*11052*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11055*/       OPC_RecordMemRef,
/*11056*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11057*/       OPC_CheckFoldableChainNode,
/*11058*/       OPC_RecordChild1, // #2 = $src2
/*11059*/       OPC_CheckChild1Type, MVT::i64,
/*11061*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11063*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11065*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11067*/       OPC_MoveParent,
/*11068*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11070*/       OPC_CheckType, MVT::i32,
/*11072*/       OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11075*/       OPC_EmitMergeInputChains1_1,
/*11076*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*11087*/     /*Scope*/ 38, /*->11126*/
/*11088*/       OPC_MoveChild, 0,
/*11090*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11093*/       OPC_RecordMemRef,
/*11094*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11095*/       OPC_CheckFoldableChainNode,
/*11096*/       OPC_RecordChild1, // #1 = $src2
/*11097*/       OPC_CheckChild1Type, MVT::i64,
/*11099*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11101*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11103*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11105*/       OPC_MoveParent,
/*11106*/       OPC_RecordChild1, // #2 = $src1
/*11107*/       OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11109*/       OPC_CheckType, MVT::i32,
/*11111*/       OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11114*/       OPC_EmitMergeInputChains1_0,
/*11115*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*11126*/     /*Scope*/ 38, /*->11165*/
/*11127*/       OPC_RecordChild0, // #0 = $src1
/*11128*/       OPC_MoveChild, 1,
/*11130*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11133*/       OPC_RecordMemRef,
/*11134*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11135*/       OPC_CheckFoldableChainNode,
/*11136*/       OPC_RecordChild1, // #2 = $src2
/*11137*/       OPC_CheckChild1Type, MVT::i64,
/*11139*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11141*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11143*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11145*/       OPC_MoveParent,
/*11146*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11148*/       OPC_CheckType, MVT::i32,
/*11150*/       OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11153*/       OPC_EmitMergeInputChains1_1,
/*11154*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*11165*/     /*Scope*/ 38, /*->11204*/
/*11166*/       OPC_MoveChild, 0,
/*11168*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11171*/       OPC_RecordMemRef,
/*11172*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11173*/       OPC_CheckFoldableChainNode,
/*11174*/       OPC_RecordChild1, // #1 = $src2
/*11175*/       OPC_CheckChild1Type, MVT::i64,
/*11177*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11179*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11181*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11183*/       OPC_MoveParent,
/*11184*/       OPC_RecordChild1, // #2 = $src1
/*11185*/       OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11187*/       OPC_CheckType, MVT::i32,
/*11189*/       OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11192*/       OPC_EmitMergeInputChains1_0,
/*11193*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*11204*/     /*Scope*/ 38, /*->11243*/
/*11205*/       OPC_RecordChild0, // #0 = $src1
/*11206*/       OPC_MoveChild, 1,
/*11208*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11211*/       OPC_RecordMemRef,
/*11212*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11213*/       OPC_CheckFoldableChainNode,
/*11214*/       OPC_RecordChild1, // #2 = $src2
/*11215*/       OPC_CheckChild1Type, MVT::i64,
/*11217*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11219*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11221*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11223*/       OPC_MoveParent,
/*11224*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11226*/       OPC_CheckType, MVT::i64,
/*11228*/       OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11231*/       OPC_EmitMergeInputChains1_1,
/*11232*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*11243*/     /*Scope*/ 38, /*->11282*/
/*11244*/       OPC_MoveChild, 0,
/*11246*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11249*/       OPC_RecordMemRef,
/*11250*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11251*/       OPC_CheckFoldableChainNode,
/*11252*/       OPC_RecordChild1, // #1 = $src2
/*11253*/       OPC_CheckChild1Type, MVT::i64,
/*11255*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11257*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11259*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11261*/       OPC_MoveParent,
/*11262*/       OPC_RecordChild1, // #2 = $src1
/*11263*/       OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11265*/       OPC_CheckType, MVT::i64,
/*11267*/       OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11270*/       OPC_EmitMergeInputChains1_0,
/*11271*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*11282*/     /*Scope*/ 38, /*->11321*/
/*11283*/       OPC_RecordChild0, // #0 = $src1
/*11284*/       OPC_MoveChild, 1,
/*11286*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11289*/       OPC_RecordMemRef,
/*11290*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11291*/       OPC_CheckFoldableChainNode,
/*11292*/       OPC_RecordChild1, // #2 = $src2
/*11293*/       OPC_CheckChild1Type, MVT::i64,
/*11295*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11297*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11299*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11301*/       OPC_MoveParent,
/*11302*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11304*/       OPC_CheckType, MVT::i64,
/*11306*/       OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11309*/       OPC_EmitMergeInputChains1_1,
/*11310*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*11321*/     /*Scope*/ 59, /*->11381*/
/*11322*/       OPC_MoveChild, 0,
/*11324*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11327*/       OPC_RecordMemRef,
/*11328*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11329*/       OPC_CheckFoldableChainNode,
/*11330*/       OPC_RecordChild1, // #1 = $src2
/*11331*/       OPC_CheckChild1Type, MVT::i64,
/*11333*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11335*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11337*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11339*/       OPC_MoveParent,
/*11340*/       OPC_RecordChild1, // #2 = $src1
/*11341*/       OPC_SwitchType /*2 cases */, 17, MVT::i64,// ->11361
/*11344*/         OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11346*/         OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11349*/         OPC_EmitMergeInputChains1_0,
/*11350*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                  // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*11361*/       /*SwitchType*/ 17, MVT::i32,// ->11380
/*11363*/         OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11365*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11368*/         OPC_EmitMergeInputChains1_0,
/*11369*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                  // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*11380*/       0, // EndSwitchType
/*11381*/     /*Scope*/ 38, /*->11420*/
/*11382*/       OPC_RecordChild0, // #0 = $src1
/*11383*/       OPC_MoveChild, 1,
/*11385*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11388*/       OPC_RecordMemRef,
/*11389*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11390*/       OPC_CheckFoldableChainNode,
/*11391*/       OPC_RecordChild1, // #2 = $src2
/*11392*/       OPC_CheckChild1Type, MVT::i64,
/*11394*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11396*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11398*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11400*/       OPC_MoveParent,
/*11401*/       OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11403*/       OPC_CheckType, MVT::i32,
/*11405*/       OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11408*/       OPC_EmitMergeInputChains1_1,
/*11409*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*11420*/     /*Scope*/ 38, /*->11459*/
/*11421*/       OPC_MoveChild, 0,
/*11423*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11426*/       OPC_RecordMemRef,
/*11427*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11428*/       OPC_CheckFoldableChainNode,
/*11429*/       OPC_RecordChild1, // #1 = $src2
/*11430*/       OPC_CheckChild1Type, MVT::i64,
/*11432*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11434*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11436*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11438*/       OPC_MoveParent,
/*11439*/       OPC_RecordChild1, // #2 = $src1
/*11440*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11442*/       OPC_CheckType, MVT::i32,
/*11444*/       OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11447*/       OPC_EmitMergeInputChains1_0,
/*11448*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*11459*/     /*Scope*/ 38, /*->11498*/
/*11460*/       OPC_RecordChild0, // #0 = $src1
/*11461*/       OPC_MoveChild, 1,
/*11463*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11466*/       OPC_RecordMemRef,
/*11467*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11468*/       OPC_CheckFoldableChainNode,
/*11469*/       OPC_RecordChild1, // #2 = $src2
/*11470*/       OPC_CheckChild1Type, MVT::i64,
/*11472*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11474*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11476*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11478*/       OPC_MoveParent,
/*11479*/       OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11481*/       OPC_CheckType, MVT::i32,
/*11483*/       OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11486*/       OPC_EmitMergeInputChains1_1,
/*11487*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*11498*/     /*Scope*/ 38, /*->11537*/
/*11499*/       OPC_MoveChild, 0,
/*11501*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11504*/       OPC_RecordMemRef,
/*11505*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11506*/       OPC_CheckFoldableChainNode,
/*11507*/       OPC_RecordChild1, // #1 = $src2
/*11508*/       OPC_CheckChild1Type, MVT::i64,
/*11510*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11512*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11514*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11516*/       OPC_MoveParent,
/*11517*/       OPC_RecordChild1, // #2 = $src1
/*11518*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11520*/       OPC_CheckType, MVT::i64,
/*11522*/       OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11525*/       OPC_EmitMergeInputChains1_0,
/*11526*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*11537*/     /*Scope*/ 38, /*->11576*/
/*11538*/       OPC_RecordChild0, // #0 = $src1
/*11539*/       OPC_MoveChild, 1,
/*11541*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11544*/       OPC_RecordMemRef,
/*11545*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11546*/       OPC_CheckFoldableChainNode,
/*11547*/       OPC_RecordChild1, // #2 = $src2
/*11548*/       OPC_CheckChild1Type, MVT::i64,
/*11550*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11552*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11554*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11556*/       OPC_MoveParent,
/*11557*/       OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11559*/       OPC_CheckType, MVT::i64,
/*11561*/       OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*11564*/       OPC_EmitMergeInputChains1_1,
/*11565*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*11576*/     /*Scope*/ 38, /*->11615*/
/*11577*/       OPC_MoveChild, 0,
/*11579*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11582*/       OPC_RecordMemRef,
/*11583*/       OPC_RecordNode, // #0 = 'ld' chained node
/*11584*/       OPC_CheckFoldableChainNode,
/*11585*/       OPC_RecordChild1, // #1 = $src2
/*11586*/       OPC_CheckChild1Type, MVT::i64,
/*11588*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11590*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*11592*/       OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11594*/       OPC_MoveParent,
/*11595*/       OPC_RecordChild1, // #2 = $src1
/*11596*/       OPC_CheckPredicate, 43, // Predicate_or_as_inserti8
/*11598*/       OPC_CheckType, MVT::i64,
/*11600*/       OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11603*/       OPC_EmitMergeInputChains1_0,
/*11604*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*11615*/     /*Scope*/ 103, /*->11719*/
/*11616*/       OPC_RecordChild0, // #0 = $src1
/*11617*/       OPC_MoveChild, 1,
/*11619*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11622*/       OPC_RecordMemRef,
/*11623*/       OPC_RecordNode, // #1 = 'ld' chained node
/*11624*/       OPC_CheckFoldableChainNode,
/*11625*/       OPC_RecordChild1, // #2 = $src2
/*11626*/       OPC_CheckChild1Type, MVT::i64,
/*11628*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11630*/       OPC_Scope, 24, /*->11656*/ // 2 children in Scope
/*11632*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*11634*/         OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*11636*/         OPC_MoveParent,
/*11637*/         OPC_CheckPredicate, 44, // Predicate_or_as_revinserti8
/*11639*/         OPC_CheckType, MVT::i64,
/*11641*/         OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*11644*/         OPC_EmitMergeInputChains1_1,
/*11645*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                  // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*11656*/       /*Scope*/ 61, /*->11718*/
/*11657*/         OPC_CheckPredicate, 13, // Predicate_load
/*11659*/         OPC_MoveParent,
/*11660*/         OPC_SwitchType /*2 cases */, 36, MVT::i32,// ->11699
/*11663*/           OPC_Scope, 16, /*->11681*/ // 2 children in Scope
/*11665*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11668*/             OPC_EmitMergeInputChains1_1,
/*11669*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11681*/           /*Scope*/ 16, /*->11698*/
/*11682*/             OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11685*/             OPC_EmitMergeInputChains1_1,
/*11686*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11698*/           0, /*End of Scope*/
/*11699*/         /*SwitchType*/ 16, MVT::i64,// ->11717
/*11701*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11704*/           OPC_EmitMergeInputChains1_1,
/*11705*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*11717*/         0, // EndSwitchType
/*11718*/       0, /*End of Scope*/
/*11719*/     /*Scope*/ 30|128,4/*542*/, /*->12263*/
/*11721*/       OPC_MoveChild, 0,
/*11723*/       OPC_Scope, 73, /*->11798*/ // 13 children in Scope
/*11725*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*11728*/         OPC_RecordMemRef,
/*11729*/         OPC_RecordNode, // #0 = 'ld' chained node
/*11730*/         OPC_CheckFoldableChainNode,
/*11731*/         OPC_RecordChild1, // #1 = $XBD2
/*11732*/         OPC_CheckChild1Type, MVT::i64,
/*11734*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*11736*/         OPC_CheckPredicate, 13, // Predicate_load
/*11738*/         OPC_MoveParent,
/*11739*/         OPC_RecordChild1, // #2 = $R1src
/*11740*/         OPC_SwitchType /*2 cases */, 36, MVT::i32,// ->11779
/*11743*/           OPC_Scope, 16, /*->11761*/ // 2 children in Scope
/*11745*/             OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*11748*/             OPC_EmitMergeInputChains1_0,
/*11749*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                      // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                      // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*11761*/           /*Scope*/ 16, /*->11778*/
/*11762*/             OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*11765*/             OPC_EmitMergeInputChains1_0,
/*11766*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                      // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                      // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*11778*/           0, /*End of Scope*/
/*11779*/         /*SwitchType*/ 16, MVT::i64,// ->11797
/*11781*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*11784*/           OPC_EmitMergeInputChains1_0,
/*11785*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                    // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*11797*/         0, // EndSwitchType
/*11798*/       /*Scope*/ 40, /*->11839*/
/*11799*/         OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*11810*/         OPC_RecordChild0, // #0 = $R1src
/*11811*/         OPC_MoveParent,
/*11812*/         OPC_RecordChild1, // #1 = $I2
/*11813*/         OPC_MoveChild, 1,
/*11815*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11818*/         OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*11820*/         OPC_MoveParent,
/*11821*/         OPC_CheckType, MVT::i32,
/*11823*/         OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*11825*/         OPC_EmitConvertToTarget, 1,
/*11827*/         OPC_EmitNodeXForm, 6, 2, // LL16
/*11830*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILMux), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 (and:i32 GRX32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                  // Dst: (IILMux:i32 GRX32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*11839*/       /*Scope*/ 40, /*->11880*/
/*11840*/         OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*11851*/         OPC_RecordChild0, // #0 = $R1src
/*11852*/         OPC_MoveParent,
/*11853*/         OPC_RecordChild1, // #1 = $I2
/*11854*/         OPC_MoveChild, 1,
/*11856*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11859*/         OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*11861*/         OPC_MoveParent,
/*11862*/         OPC_CheckType, MVT::i32,
/*11864*/         OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*11866*/         OPC_EmitConvertToTarget, 1,
/*11868*/         OPC_EmitNodeXForm, 7, 2, // LH16
/*11871*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHMux), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 (and:i32 GRX32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                  // Dst: (IIHMux:i32 GRX32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*11880*/       /*Scope*/ 38, /*->11919*/
/*11881*/         OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*11892*/         OPC_RecordChild0, // #0 = $R1src
/*11893*/         OPC_MoveParent,
/*11894*/         OPC_RecordChild1, // #1 = $I2
/*11895*/         OPC_MoveChild, 1,
/*11897*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11900*/         OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*11902*/         OPC_MoveParent,
/*11903*/         OPC_CheckType, MVT::i32,
/*11905*/         OPC_EmitConvertToTarget, 1,
/*11907*/         OPC_EmitNodeXForm, 6, 2, // LL16
/*11910*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 (and:i32 GR32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                  // Dst: (IILL:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*11919*/       /*Scope*/ 38, /*->11958*/
/*11920*/         OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*11931*/         OPC_RecordChild0, // #0 = $R1src
/*11932*/         OPC_MoveParent,
/*11933*/         OPC_RecordChild1, // #1 = $I2
/*11934*/         OPC_MoveChild, 1,
/*11936*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11939*/         OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*11941*/         OPC_MoveParent,
/*11942*/         OPC_CheckType, MVT::i32,
/*11944*/         OPC_EmitConvertToTarget, 1,
/*11946*/         OPC_EmitNodeXForm, 7, 2, // LH16
/*11949*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 (and:i32 GR32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                  // Dst: (IILH:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*11958*/       /*Scope*/ 38, /*->11997*/
/*11959*/         OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*11970*/         OPC_RecordChild0, // #0 = $R1src
/*11971*/         OPC_MoveParent,
/*11972*/         OPC_RecordChild1, // #1 = $I2
/*11973*/         OPC_MoveChild, 1,
/*11975*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11978*/         OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*11980*/         OPC_MoveParent,
/*11981*/         OPC_CheckType, MVT::i32,
/*11983*/         OPC_EmitConvertToTarget, 1,
/*11985*/         OPC_EmitNodeXForm, 6, 2, // LL16
/*11988*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 (and:i32 GRH32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                  // Dst: (IIHL:i32 GRH32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*11997*/       /*Scope*/ 38, /*->12036*/
/*11998*/         OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*12009*/         OPC_RecordChild0, // #0 = $R1src
/*12010*/         OPC_MoveParent,
/*12011*/         OPC_RecordChild1, // #1 = $I2
/*12012*/         OPC_MoveChild, 1,
/*12014*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12017*/         OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12019*/         OPC_MoveParent,
/*12020*/         OPC_CheckType, MVT::i32,
/*12022*/         OPC_EmitConvertToTarget, 1,
/*12024*/         OPC_EmitNodeXForm, 7, 2, // LH16
/*12027*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 (and:i32 GRH32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                  // Dst: (IIHH:i32 GRH32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*12036*/       /*Scope*/ 38, /*->12075*/
/*12037*/         OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*12048*/         OPC_RecordChild0, // #0 = $R1src
/*12049*/         OPC_MoveParent,
/*12050*/         OPC_RecordChild1, // #1 = $I2
/*12051*/         OPC_MoveChild, 1,
/*12053*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12056*/         OPC_CheckPredicate, 47, // Predicate_imm64ll16
/*12058*/         OPC_MoveParent,
/*12059*/         OPC_CheckType, MVT::i64,
/*12061*/         OPC_EmitConvertToTarget, 1,
/*12063*/         OPC_EmitNodeXForm, 6, 2, // LL16
/*12066*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 (and:i64 GR64:i64:$R1src, -65536:i64), (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 15
                  // Dst: (IILL64:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*12075*/       /*Scope*/ 38, /*->12114*/
/*12076*/         OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*12087*/         OPC_RecordChild0, // #0 = $R1src
/*12088*/         OPC_MoveParent,
/*12089*/         OPC_RecordChild1, // #1 = $I2
/*12090*/         OPC_MoveChild, 1,
/*12092*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12095*/         OPC_CheckPredicate, 48, // Predicate_imm64lh16
/*12097*/         OPC_MoveParent,
/*12098*/         OPC_CheckType, MVT::i64,
/*12100*/         OPC_EmitConvertToTarget, 1,
/*12102*/         OPC_EmitNodeXForm, 7, 2, // LH16
/*12105*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294901761:i64), (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 15
                  // Dst: (IILH64:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*12114*/       /*Scope*/ 38, /*->12153*/
/*12115*/         OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15|128,0|128,64|128,127|128,127|128,1/*18446462603027808255*/, 
/*12126*/         OPC_RecordChild0, // #0 = $R1src
/*12127*/         OPC_MoveParent,
/*12128*/         OPC_RecordChild1, // #1 = $I2
/*12129*/         OPC_MoveChild, 1,
/*12131*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12134*/         OPC_CheckPredicate, 49, // Predicate_imm64hl16
/*12136*/         OPC_MoveParent,
/*12137*/         OPC_CheckType, MVT::i64,
/*12139*/         OPC_EmitConvertToTarget, 1,
/*12141*/         OPC_EmitNodeXForm, 8, 2, // HL16
/*12144*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 (and:i64 GR64:i64:$R1src, -281470681743361:i64), (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 15
                  // Dst: (IIHL64:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*12153*/       /*Scope*/ 35, /*->12189*/
/*12154*/         OPC_CheckAndImm, 127|128,127|128,127|128,127|128,127|128,127|128,63/*281474976710655*/, 
/*12162*/         OPC_RecordChild0, // #0 = $R1src
/*12163*/         OPC_MoveParent,
/*12164*/         OPC_RecordChild1, // #1 = $I2
/*12165*/         OPC_MoveChild, 1,
/*12167*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12170*/         OPC_CheckPredicate, 50, // Predicate_imm64hh16
/*12172*/         OPC_MoveParent,
/*12173*/         OPC_CheckType, MVT::i64,
/*12175*/         OPC_EmitConvertToTarget, 1,
/*12177*/         OPC_EmitNodeXForm, 9, 2, // HH16
/*12180*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 (and:i64 GR64:i64:$R1src, 281474976710655:i64), (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 15
                  // Dst: (IIHH64:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*12189*/       /*Scope*/ 38, /*->12228*/
/*12190*/         OPC_CheckAndImm, 0|128,0|128,0|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414584320*/, 
/*12201*/         OPC_RecordChild0, // #0 = $R1src
/*12202*/         OPC_MoveParent,
/*12203*/         OPC_RecordChild1, // #1 = $I2
/*12204*/         OPC_MoveChild, 1,
/*12206*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12209*/         OPC_CheckPredicate, 40, // Predicate_imm64lf32
/*12211*/         OPC_MoveParent,
/*12212*/         OPC_CheckType, MVT::i64,
/*12214*/         OPC_EmitConvertToTarget, 1,
/*12216*/         OPC_EmitNodeXForm, 3, 2, // LF32
/*12219*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294967296:i64), (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 15
                  // Dst: (IILF64:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*12228*/       /*Scope*/ 33, /*->12262*/
/*12229*/         OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*12235*/         OPC_RecordChild0, // #0 = $R1src
/*12236*/         OPC_MoveParent,
/*12237*/         OPC_RecordChild1, // #1 = $I2
/*12238*/         OPC_MoveChild, 1,
/*12240*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12243*/         OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*12245*/         OPC_MoveParent,
/*12246*/         OPC_CheckType, MVT::i64,
/*12248*/         OPC_EmitConvertToTarget, 1,
/*12250*/         OPC_EmitNodeXForm, 4, 2, // HF32
/*12253*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 (and:i64 GR64:i64:$R1src, 4294967295:i64), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 15
                  // Dst: (IIHF64:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*12262*/       0, /*End of Scope*/
/*12263*/     /*Scope*/ 47, /*->12311*/
/*12264*/       OPC_RecordNode, // #0 = $src
/*12265*/       OPC_CheckType, MVT::i64,
/*12267*/       OPC_Scope, 13, /*->12282*/ // 3 children in Scope
/*12269*/         OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*12272*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: dynalloc12only:i64:$src - Complexity = 12
                  // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*12282*/       /*Scope*/ 13, /*->12296*/
/*12283*/         OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*12286*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                  // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*12296*/       /*Scope*/ 13, /*->12310*/
/*12297*/         OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*12300*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                  // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*12310*/       0, /*End of Scope*/
/*12311*/     /*Scope*/ 50, /*->12362*/
/*12312*/       OPC_MoveChild, 0,
/*12314*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*12317*/       OPC_RecordChild0, // #0 = $src
/*12318*/       OPC_MoveParent,
/*12319*/       OPC_RecordChild1, // #1 = $imm
/*12320*/       OPC_MoveChild, 1,
/*12322*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12325*/       OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*12327*/       OPC_MoveParent,
/*12328*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*12335*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*12338*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*12348*/       OPC_EmitConvertToTarget, 1,
/*12350*/       OPC_EmitNodeXForm, 4, 5, // HF32
/*12353*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 6, 
                // Src: (or:i64 (zext:i64 GR32:i32:$src), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$imm) - Complexity = 10
                // Dst: (IIHF64:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_l32:i32), (HF32:i64 (imm:i64)<<P:Predicate_imm64hf32>>:$imm))
/*12362*/     /*Scope*/ 93|128,2/*349*/, /*->12713*/
/*12364*/       OPC_RecordChild0, // #0 = $R1src
/*12365*/       OPC_RecordChild1, // #1 = $I2
/*12366*/       OPC_Scope, 61|128,2/*317*/, /*->12686*/ // 3 children in Scope
/*12369*/         OPC_MoveChild, 1,
/*12371*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12374*/         OPC_Scope, 22, /*->12398*/ // 13 children in Scope
/*12376*/           OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*12378*/           OPC_MoveParent,
/*12379*/           OPC_CheckType, MVT::i32,
/*12381*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*12383*/           OPC_EmitConvertToTarget, 1,
/*12385*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12388*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILMux), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GRX32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (OILMux:i32:i32 GRX32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*12398*/         /*Scope*/ 22, /*->12421*/
/*12399*/           OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12401*/           OPC_MoveParent,
/*12402*/           OPC_CheckType, MVT::i32,
/*12404*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*12406*/           OPC_EmitConvertToTarget, 1,
/*12408*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12411*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHMux), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GRX32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (OIHMux:i32:i32 GRX32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*12421*/         /*Scope*/ 20, /*->12442*/
/*12422*/           OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*12424*/           OPC_MoveParent,
/*12425*/           OPC_CheckType, MVT::i32,
/*12427*/           OPC_EmitConvertToTarget, 1,
/*12429*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12432*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (OILL:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*12442*/         /*Scope*/ 20, /*->12463*/
/*12443*/           OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12445*/           OPC_MoveParent,
/*12446*/           OPC_CheckType, MVT::i32,
/*12448*/           OPC_EmitConvertToTarget, 1,
/*12450*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12453*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (OILH:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*12463*/         /*Scope*/ 20, /*->12484*/
/*12464*/           OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*12466*/           OPC_MoveParent,
/*12467*/           OPC_CheckType, MVT::i32,
/*12469*/           OPC_EmitConvertToTarget, 1,
/*12471*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12474*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GRH32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (OIHL:i32:i32 GRH32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*12484*/         /*Scope*/ 20, /*->12505*/
/*12485*/           OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12487*/           OPC_MoveParent,
/*12488*/           OPC_CheckType, MVT::i32,
/*12490*/           OPC_EmitConvertToTarget, 1,
/*12492*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12495*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GRH32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (OIHH:i32:i32 GRH32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*12505*/         /*Scope*/ 20, /*->12526*/
/*12506*/           OPC_CheckPredicate, 47, // Predicate_imm64ll16
/*12508*/           OPC_MoveParent,
/*12509*/           OPC_CheckType, MVT::i64,
/*12511*/           OPC_EmitConvertToTarget, 1,
/*12513*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12516*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (OILL64:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*12526*/         /*Scope*/ 20, /*->12547*/
/*12527*/           OPC_CheckPredicate, 48, // Predicate_imm64lh16
/*12529*/           OPC_MoveParent,
/*12530*/           OPC_CheckType, MVT::i64,
/*12532*/           OPC_EmitConvertToTarget, 1,
/*12534*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12537*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (OILH64:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*12547*/         /*Scope*/ 20, /*->12568*/
/*12548*/           OPC_CheckPredicate, 49, // Predicate_imm64hl16
/*12550*/           OPC_MoveParent,
/*12551*/           OPC_CheckType, MVT::i64,
/*12553*/           OPC_EmitConvertToTarget, 1,
/*12555*/           OPC_EmitNodeXForm, 8, 2, // HL16
/*12558*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 7
                    // Dst: (OIHL64:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*12568*/         /*Scope*/ 20, /*->12589*/
/*12569*/           OPC_CheckPredicate, 50, // Predicate_imm64hh16
/*12571*/           OPC_MoveParent,
/*12572*/           OPC_CheckType, MVT::i64,
/*12574*/           OPC_EmitConvertToTarget, 1,
/*12576*/           OPC_EmitNodeXForm, 9, 2, // HH16
/*12579*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 7
                    // Dst: (OIHH64:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*12589*/         /*Scope*/ 20, /*->12610*/
/*12590*/           OPC_CheckPredicate, 40, // Predicate_imm64lf32
/*12592*/           OPC_MoveParent,
/*12593*/           OPC_CheckType, MVT::i64,
/*12595*/           OPC_EmitConvertToTarget, 1,
/*12597*/           OPC_EmitNodeXForm, 3, 2, // LF32
/*12600*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                    // Dst: (OILF64:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*12610*/         /*Scope*/ 20, /*->12631*/
/*12611*/           OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*12613*/           OPC_MoveParent,
/*12614*/           OPC_CheckType, MVT::i64,
/*12616*/           OPC_EmitConvertToTarget, 1,
/*12618*/           OPC_EmitNodeXForm, 4, 2, // HF32
/*12621*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                    // Dst: (OIHF64:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*12631*/         /*Scope*/ 53, /*->12685*/
/*12632*/           OPC_MoveParent,
/*12633*/           OPC_CheckType, MVT::i32,
/*12635*/           OPC_Scope, 17, /*->12654*/ // 2 children in Scope
/*12637*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*12639*/             OPC_EmitConvertToTarget, 1,
/*12641*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*12644*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIFMux), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (or:i32 GRX32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                      // Dst: (OIFMux:i32:i32 GRX32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*12654*/           /*Scope*/ 29, /*->12684*/
/*12655*/             OPC_EmitConvertToTarget, 1,
/*12657*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*12660*/             OPC_Scope, 10, /*->12672*/ // 2 children in Scope
/*12662*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                        // Dst: (OILF:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*12672*/             /*Scope*/ 10, /*->12683*/
/*12673*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (or:i32 GRH32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                        // Dst: (OIHF:i32:i32 GRH32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*12683*/             0, /*End of Scope*/
/*12684*/           0, /*End of Scope*/
/*12685*/         0, /*End of Scope*/
/*12686*/       /*Scope*/ 12, /*->12699*/
/*12687*/         OPC_CheckType, MVT::i32,
/*12689*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (OR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*12699*/       /*Scope*/ 12, /*->12712*/
/*12700*/         OPC_CheckType, MVT::i64,
/*12702*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (OGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*12712*/       0, /*End of Scope*/
/*12713*/     0, /*End of Scope*/
/*12714*/   /*SwitchOpcode*/ 92|128,2/*348*/, TARGET_VAL(SystemZISD::TM),// ->13066
/*12718*/     OPC_Scope, 73, /*->12793*/ // 2 children in Scope
/*12720*/       OPC_MoveChild, 0,
/*12722*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12725*/       OPC_RecordMemRef,
/*12726*/       OPC_RecordNode, // #0 = 'ld' chained node
/*12727*/       OPC_CheckFoldableChainNode,
/*12728*/       OPC_RecordChild1, // #1 = $BD1
/*12729*/       OPC_CheckChild1Type, MVT::i64,
/*12731*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12733*/       OPC_CheckPredicate, 1, // Predicate_anyextload
/*12735*/       OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*12737*/       OPC_CheckType, MVT::i32,
/*12739*/       OPC_MoveParent,
/*12740*/       OPC_RecordChild1, // #2 = $I2
/*12741*/       OPC_MoveChild, 1,
/*12743*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12746*/       OPC_CheckPredicate, 51, // Predicate_imm32zx8
/*12748*/       OPC_MoveParent,
/*12749*/       OPC_CheckChild2Integer, 0, 
/*12751*/       OPC_Scope, 19, /*->12772*/ // 2 children in Scope
/*12753*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD1 #3 #4
/*12756*/         OPC_EmitMergeInputChains1_0,
/*12757*/         OPC_EmitConvertToTarget, 2,
/*12759*/         OPC_EmitNodeXForm, 0, 5, // UIMM8
/*12762*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::TM), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_tm (ld:i32 bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2, 0:i32) - Complexity = 25
                  // Dst: (TM:i32 bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*12772*/       /*Scope*/ 19, /*->12792*/
/*12773*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD1 #3 #4
/*12776*/         OPC_EmitMergeInputChains1_0,
/*12777*/         OPC_EmitConvertToTarget, 2,
/*12779*/         OPC_EmitNodeXForm, 0, 5, // UIMM8
/*12782*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_tm (ld:i32 bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2, 0:i32) - Complexity = 25
                  // Dst: (TMY:i32 bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*12792*/       0, /*End of Scope*/
/*12793*/     /*Scope*/ 14|128,2/*270*/, /*->13065*/
/*12795*/       OPC_RecordChild0, // #0 = $R1
/*12796*/       OPC_Scope, 30|128,1/*158*/, /*->12957*/ // 2 children in Scope
/*12799*/         OPC_CheckChild0Type, MVT::i32,
/*12801*/         OPC_RecordChild1, // #1 = $I2
/*12802*/         OPC_MoveChild, 1,
/*12804*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12807*/         OPC_Scope, 25, /*->12834*/ // 6 children in Scope
/*12809*/           OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*12811*/           OPC_MoveParent,
/*12812*/           OPC_MoveChild, 2,
/*12814*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12817*/           OPC_MoveParent,
/*12818*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*12820*/           OPC_EmitConvertToTarget, 1,
/*12822*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12825*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLMux), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GRX32:i32:$R1, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMLMux:i32 GRX32:i32:$R1, (LL16:i32 (imm:i32):$I2))
/*12834*/         /*Scope*/ 25, /*->12860*/
/*12835*/           OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12837*/           OPC_MoveParent,
/*12838*/           OPC_MoveChild, 2,
/*12840*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12843*/           OPC_MoveParent,
/*12844*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*12846*/           OPC_EmitConvertToTarget, 1,
/*12848*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12851*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHMux), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GRX32:i32:$R1, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMHMux:i32 GRX32:i32:$R1, (LH16:i32 (imm:i32):$I2))
/*12860*/         /*Scope*/ 23, /*->12884*/
/*12861*/           OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*12863*/           OPC_MoveParent,
/*12864*/           OPC_MoveChild, 2,
/*12866*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12869*/           OPC_MoveParent,
/*12870*/           OPC_EmitConvertToTarget, 1,
/*12872*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12875*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLL), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMLL:i32 GR32:i32:$R1, (LL16:i32 (imm:i32):$I2))
/*12884*/         /*Scope*/ 23, /*->12908*/
/*12885*/           OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12887*/           OPC_MoveParent,
/*12888*/           OPC_MoveChild, 2,
/*12890*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12893*/           OPC_MoveParent,
/*12894*/           OPC_EmitConvertToTarget, 1,
/*12896*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12899*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLH), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMLH:i32 GR32:i32:$R1, (LH16:i32 (imm:i32):$I2))
/*12908*/         /*Scope*/ 23, /*->12932*/
/*12909*/           OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*12911*/           OPC_MoveParent,
/*12912*/           OPC_MoveChild, 2,
/*12914*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12917*/           OPC_MoveParent,
/*12918*/           OPC_EmitConvertToTarget, 1,
/*12920*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12923*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHL), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GRH32:i32:$R1, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMHL:i32 GRH32:i32:$R1, (LL16:i32 (imm:i32):$I2))
/*12932*/         /*Scope*/ 23, /*->12956*/
/*12933*/           OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*12935*/           OPC_MoveParent,
/*12936*/           OPC_MoveChild, 2,
/*12938*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12941*/           OPC_MoveParent,
/*12942*/           OPC_EmitConvertToTarget, 1,
/*12944*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*12947*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHH), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GRH32:i32:$R1, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMHH:i32 GRH32:i32:$R1, (LH16:i32 (imm:i32):$I2))
/*12956*/         0, /*End of Scope*/
/*12957*/       /*Scope*/ 106, /*->13064*/
/*12958*/         OPC_CheckChild0Type, MVT::i64,
/*12960*/         OPC_RecordChild1, // #1 = $I2
/*12961*/         OPC_MoveChild, 1,
/*12963*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12966*/         OPC_Scope, 23, /*->12991*/ // 4 children in Scope
/*12968*/           OPC_CheckPredicate, 47, // Predicate_imm64ll16
/*12970*/           OPC_MoveParent,
/*12971*/           OPC_MoveChild, 2,
/*12973*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12976*/           OPC_MoveParent,
/*12977*/           OPC_EmitConvertToTarget, 1,
/*12979*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*12982*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLL64), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMLL64:i32 GR64:i64:$R1, (LL16:i64 (imm:i64):$I2))
/*12991*/         /*Scope*/ 23, /*->13015*/
/*12992*/           OPC_CheckPredicate, 48, // Predicate_imm64lh16
/*12994*/           OPC_MoveParent,
/*12995*/           OPC_MoveChild, 2,
/*12997*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13000*/           OPC_MoveParent,
/*13001*/           OPC_EmitConvertToTarget, 1,
/*13003*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*13006*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMLH64), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMLH64:i32 GR64:i64:$R1, (LH16:i64 (imm:i64):$I2))
/*13015*/         /*Scope*/ 23, /*->13039*/
/*13016*/           OPC_CheckPredicate, 49, // Predicate_imm64hl16
/*13018*/           OPC_MoveParent,
/*13019*/           OPC_MoveChild, 2,
/*13021*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13024*/           OPC_MoveParent,
/*13025*/           OPC_EmitConvertToTarget, 1,
/*13027*/           OPC_EmitNodeXForm, 8, 2, // HL16
/*13030*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHL64), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMHL64:i32 GR64:i64:$R1, (HL16:i64 (imm:i64):$I2))
/*13039*/         /*Scope*/ 23, /*->13063*/
/*13040*/           OPC_CheckPredicate, 50, // Predicate_imm64hh16
/*13042*/           OPC_MoveParent,
/*13043*/           OPC_MoveChild, 2,
/*13045*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13048*/           OPC_MoveParent,
/*13049*/           OPC_EmitConvertToTarget, 1,
/*13051*/           OPC_EmitNodeXForm, 9, 2, // HH16
/*13054*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::TMHH64), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_tm GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2, (imm:i32)) - Complexity = 10
                    // Dst: (TMHH64:i32 GR64:i64:$R1, (HH16:i64 (imm:i64):$I2))
/*13063*/         0, /*End of Scope*/
/*13064*/       0, /*End of Scope*/
/*13065*/     0, /*End of Scope*/
/*13066*/   /*SwitchOpcode*/ 97|128,1/*225*/, TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->13295
/*13070*/     OPC_CaptureGlueInput,
/*13071*/     OPC_Scope, 85, /*->13158*/ // 2 children in Scope
/*13073*/       OPC_MoveChild, 0,
/*13075*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13078*/       OPC_RecordMemRef,
/*13079*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13080*/       OPC_CheckFoldableChainNode,
/*13081*/       OPC_RecordChild1, // #1 = $BD2
/*13082*/       OPC_CheckChild1Type, MVT::i64,
/*13084*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13086*/       OPC_CheckPredicate, 13, // Predicate_load
/*13088*/       OPC_MoveParent,
/*13089*/       OPC_RecordChild1, // #2 = $R1src
/*13090*/       OPC_RecordChild2, // #3 = $valid
/*13091*/       OPC_MoveChild, 2,
/*13093*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13096*/       OPC_CheckPredicate, 52, // Predicate_cond4
/*13098*/       OPC_MoveParent,
/*13099*/       OPC_RecordChild3, // #4 = $R3
/*13100*/       OPC_MoveChild, 3,
/*13102*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13105*/       OPC_CheckPredicate, 52, // Predicate_cond4
/*13107*/       OPC_MoveParent,
/*13108*/       OPC_SwitchType /*2 cases */, 22, MVT::i32,// ->13133
/*13111*/         OPC_CheckPatternPredicate, 1, // (Subtarget->hasLoadStoreOnCond())
/*13113*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*13116*/         OPC_EmitMergeInputChains1_0,
/*13117*/         OPC_EmitConvertToTarget, 3,
/*13119*/         OPC_EmitConvertToTarget, 4,
/*13121*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                  // Src: (z_select_ccmask:i32 (ld:i32 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src, (imm:i32)<<P:Predicate_cond4>>:$valid, (imm:i32)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                  // Dst: (LOC:i32 GR32:i32:$R1src, bdaddr20only:i64:$BD2, (imm:i32):$valid, (imm:i32):$R3)
/*13133*/       /*SwitchType*/ 22, MVT::i64,// ->13157
/*13135*/         OPC_CheckPatternPredicate, 1, // (Subtarget->hasLoadStoreOnCond())
/*13137*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*13140*/         OPC_EmitMergeInputChains1_0,
/*13141*/         OPC_EmitConvertToTarget, 3,
/*13143*/         OPC_EmitConvertToTarget, 4,
/*13145*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                  // Src: (z_select_ccmask:i64 (ld:i64 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src, (imm:i32)<<P:Predicate_cond4>>:$valid, (imm:i32)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                  // Dst: (LOCG:i64 GR64:i64:$R1src, bdaddr20only:i64:$BD2, (imm:i32):$valid, (imm:i32):$R3)
/*13157*/       0, // EndSwitchType
/*13158*/     /*Scope*/ 6|128,1/*134*/, /*->13294*/
/*13160*/       OPC_RecordChild0, // #0 = $src1
/*13161*/       OPC_RecordChild1, // #1 = $src2
/*13162*/       OPC_RecordChild2, // #2 = $valid
/*13163*/       OPC_MoveChild, 2,
/*13165*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13168*/       OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*13170*/       OPC_MoveParent,
/*13171*/       OPC_RecordChild3, // #3 = $cc
/*13172*/       OPC_MoveChild, 3,
/*13174*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13177*/       OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*13179*/       OPC_MoveParent,
/*13180*/       OPC_SwitchType /*5 cases */, 38, MVT::i32,// ->13221
/*13183*/         OPC_Scope, 18, /*->13203*/ // 2 children in Scope
/*13185*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*13187*/           OPC_EmitConvertToTarget, 2,
/*13189*/           OPC_EmitConvertToTarget, 3,
/*13191*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32Mux), 0|OPFL_GlueInput,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                    // Src: (z_select_ccmask:i32 GRX32:i32:$src1, GRX32:i32:$src2, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc) - Complexity = 11
                    // Dst: (Select32Mux:i32:i32 GRX32:i32:$src1, GRX32:i32:$src2, (imm:i32):$valid, (imm:i32):$cc)
/*13203*/         /*Scope*/ 16, /*->13220*/
/*13204*/           OPC_EmitConvertToTarget, 2,
/*13206*/           OPC_EmitConvertToTarget, 3,
/*13208*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                    // Src: (z_select_ccmask:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc) - Complexity = 11
                    // Dst: (Select32:i32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i32):$valid, (imm:i32):$cc)
/*13220*/         0, /*End of Scope*/
/*13221*/       /*SwitchType*/ 16, MVT::i64,// ->13239
/*13223*/         OPC_EmitConvertToTarget, 2,
/*13225*/         OPC_EmitConvertToTarget, 3,
/*13227*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                  // Src: (z_select_ccmask:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc) - Complexity = 11
                  // Dst: (Select64:i64:i32 GR64:i64:$src1, GR64:i64:$src2, (imm:i32):$valid, (imm:i32):$cc)
/*13239*/       /*SwitchType*/ 16, MVT::f32,// ->13257
/*13241*/         OPC_EmitConvertToTarget, 2,
/*13243*/         OPC_EmitConvertToTarget, 3,
/*13245*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                      2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                  // Src: (z_select_ccmask:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc) - Complexity = 11
                  // Dst: (SelectF32:f32:i32 FP32:f32:$src1, FP32:f32:$src2, (imm:i32):$valid, (imm:i32):$cc)
/*13257*/       /*SwitchType*/ 16, MVT::f64,// ->13275
/*13259*/         OPC_EmitConvertToTarget, 2,
/*13261*/         OPC_EmitConvertToTarget, 3,
/*13263*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                      2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                  // Src: (z_select_ccmask:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc) - Complexity = 11
                  // Dst: (SelectF64:f64:i32 FP64:f64:$src1, FP64:f64:$src2, (imm:i32):$valid, (imm:i32):$cc)
/*13275*/       /*SwitchType*/ 16, MVT::f128,// ->13293
/*13277*/         OPC_EmitConvertToTarget, 2,
/*13279*/         OPC_EmitConvertToTarget, 3,
/*13281*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF128), 0|OPFL_GlueInput,
                      2/*#VTs*/, MVT::f128, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                  // Src: (z_select_ccmask:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i32)<<P:Predicate_imm32zx4>>:$valid, (imm:i32)<<P:Predicate_imm32zx4>>:$cc) - Complexity = 11
                  // Dst: (SelectF128:f128:i32 FP128:f128:$src1, FP128:f128:$src2, (imm:i32):$valid, (imm:i32):$cc)
/*13293*/       0, // EndSwitchType
/*13294*/     0, /*End of Scope*/
/*13295*/   /*SwitchOpcode*/ 43|128,12/*1579*/, TARGET_VAL(SystemZISD::ICMP),// ->14878
/*13299*/     OPC_Scope, 53|128,1/*181*/, /*->13483*/ // 5 children in Scope
/*13302*/       OPC_RecordChild0, // #0 = $R1
/*13303*/       OPC_Scope, 73, /*->13378*/ // 2 children in Scope
/*13305*/         OPC_CheckChild0Type, MVT::i32,
/*13307*/         OPC_MoveChild, 1,
/*13309*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13312*/         OPC_RecordMemRef,
/*13313*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13314*/         OPC_CheckFoldableChainNode,
/*13315*/         OPC_RecordChild1, // #2 = $I2
/*13316*/         OPC_CheckChild1Type, MVT::i64,
/*13318*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13320*/         OPC_Scope, 28, /*->13350*/ // 2 children in Scope
/*13322*/           OPC_CheckPredicate, 35, // Predicate_asextload
/*13324*/           OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*13326*/           OPC_CheckPredicate, 53, // Predicate_aligned_asextloadi16
/*13328*/           OPC_MoveParent,
/*13329*/           OPC_MoveChild, 2,
/*13331*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13334*/           OPC_MoveParent,
/*13335*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13337*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13340*/           OPC_EmitMergeInputChains1_1,
/*13341*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>><<P:Predicate_aligned_asextloadi16>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                    // Dst: (CHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13350*/         /*Scope*/ 26, /*->13377*/
/*13351*/           OPC_CheckPredicate, 13, // Predicate_load
/*13353*/           OPC_CheckPredicate, 55, // Predicate_aligned_load
/*13355*/           OPC_MoveParent,
/*13356*/           OPC_MoveChild, 2,
/*13358*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13361*/           OPC_MoveParent,
/*13362*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13364*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13367*/           OPC_EmitMergeInputChains1_1,
/*13368*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                    // Dst: (CRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13377*/         0, /*End of Scope*/
/*13378*/       /*Scope*/ 103, /*->13482*/
/*13379*/         OPC_CheckChild0Type, MVT::i64,
/*13381*/         OPC_MoveChild, 1,
/*13383*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13386*/         OPC_RecordMemRef,
/*13387*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13388*/         OPC_CheckFoldableChainNode,
/*13389*/         OPC_RecordChild1, // #2 = $I2
/*13390*/         OPC_CheckChild1Type, MVT::i64,
/*13392*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13394*/         OPC_Scope, 58, /*->13454*/ // 2 children in Scope
/*13396*/           OPC_CheckPredicate, 35, // Predicate_asextload
/*13398*/           OPC_Scope, 26, /*->13426*/ // 2 children in Scope
/*13400*/             OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*13402*/             OPC_CheckPredicate, 53, // Predicate_aligned_asextloadi16
/*13404*/             OPC_MoveParent,
/*13405*/             OPC_MoveChild, 2,
/*13407*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13410*/             OPC_MoveParent,
/*13411*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13413*/             OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13416*/             OPC_EmitMergeInputChains1_1,
/*13417*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>><<P:Predicate_aligned_asextloadi16>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                      // Dst: (CGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13426*/           /*Scope*/ 26, /*->13453*/
/*13427*/             OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*13429*/             OPC_CheckPredicate, 56, // Predicate_aligned_asextloadi32
/*13431*/             OPC_MoveParent,
/*13432*/             OPC_MoveChild, 2,
/*13434*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13437*/             OPC_MoveParent,
/*13438*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13440*/             OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13443*/             OPC_EmitMergeInputChains1_1,
/*13444*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>><<P:Predicate_aligned_asextloadi32>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                      // Dst: (CGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13453*/           0, /*End of Scope*/
/*13454*/         /*Scope*/ 26, /*->13481*/
/*13455*/           OPC_CheckPredicate, 13, // Predicate_load
/*13457*/           OPC_CheckPredicate, 55, // Predicate_aligned_load
/*13459*/           OPC_MoveParent,
/*13460*/           OPC_MoveChild, 2,
/*13462*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13465*/           OPC_MoveParent,
/*13466*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13468*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13471*/           OPC_EmitMergeInputChains1_1,
/*13472*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                    // Dst: (CGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13481*/         0, /*End of Scope*/
/*13482*/       0, /*End of Scope*/
/*13483*/     /*Scope*/ 14|128,1/*142*/, /*->13627*/
/*13485*/       OPC_MoveChild, 0,
/*13487*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13490*/       OPC_RecordMemRef,
/*13491*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13492*/       OPC_CheckFoldableChainNode,
/*13493*/       OPC_RecordChild1, // #1 = $BD1
/*13494*/       OPC_CheckChild1Type, MVT::i64,
/*13496*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13498*/       OPC_Scope, 43, /*->13543*/ // 2 children in Scope
/*13500*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*13502*/         OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*13504*/         OPC_CheckType, MVT::i32,
/*13506*/         OPC_MoveParent,
/*13507*/         OPC_RecordChild1, // #2 = $I2
/*13508*/         OPC_MoveChild, 1,
/*13510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13513*/         OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*13515*/         OPC_MoveParent,
/*13516*/         OPC_MoveChild, 2,
/*13518*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13521*/         OPC_MoveParent,
/*13522*/         OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13524*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13527*/         OPC_EmitMergeInputChains1_0,
/*13528*/         OPC_EmitConvertToTarget, 2,
/*13530*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13533*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_icmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                  // Dst: (CHHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*13543*/       /*Scope*/ 82, /*->13626*/
/*13544*/         OPC_CheckPredicate, 13, // Predicate_load
/*13546*/         OPC_SwitchType /*2 cases */, 37, MVT::i32,// ->13586
/*13549*/           OPC_MoveParent,
/*13550*/           OPC_RecordChild1, // #2 = $I2
/*13551*/           OPC_MoveChild, 1,
/*13553*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13556*/           OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*13558*/           OPC_MoveParent,
/*13559*/           OPC_MoveChild, 2,
/*13561*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13564*/           OPC_MoveParent,
/*13565*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13567*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13570*/           OPC_EmitMergeInputChains1_0,
/*13571*/           OPC_EmitConvertToTarget, 2,
/*13573*/           OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13576*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_icmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                    // Dst: (CHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*13586*/         /*SwitchType*/ 37, MVT::i64,// ->13625
/*13588*/           OPC_MoveParent,
/*13589*/           OPC_RecordChild1, // #2 = $I2
/*13590*/           OPC_MoveChild, 1,
/*13592*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13595*/           OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*13597*/           OPC_MoveParent,
/*13598*/           OPC_MoveChild, 2,
/*13600*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13603*/           OPC_MoveParent,
/*13604*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*13606*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13609*/           OPC_EmitMergeInputChains1_0,
/*13610*/           OPC_EmitConvertToTarget, 2,
/*13612*/           OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13615*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_icmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 24
                    // Dst: (CGHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
/*13625*/         0, // EndSwitchType
/*13626*/       0, /*End of Scope*/
/*13627*/     /*Scope*/ 53|128,1/*181*/, /*->13810*/
/*13629*/       OPC_RecordChild0, // #0 = $R1
/*13630*/       OPC_Scope, 73, /*->13705*/ // 2 children in Scope
/*13632*/         OPC_CheckChild0Type, MVT::i32,
/*13634*/         OPC_MoveChild, 1,
/*13636*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13639*/         OPC_RecordMemRef,
/*13640*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13641*/         OPC_CheckFoldableChainNode,
/*13642*/         OPC_RecordChild1, // #2 = $I2
/*13643*/         OPC_CheckChild1Type, MVT::i64,
/*13645*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13647*/         OPC_Scope, 28, /*->13677*/ // 2 children in Scope
/*13649*/           OPC_CheckPredicate, 38, // Predicate_azextload
/*13651*/           OPC_CheckPredicate, 57, // Predicate_azextloadi16
/*13653*/           OPC_CheckPredicate, 58, // Predicate_aligned_azextloadi16
/*13655*/           OPC_MoveParent,
/*13656*/           OPC_MoveChild, 2,
/*13658*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13661*/           OPC_MoveParent,
/*13662*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13664*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13667*/           OPC_EmitMergeInputChains1_1,
/*13668*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>><<P:Predicate_aligned_azextloadi16>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                    // Dst: (CLHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13677*/         /*Scope*/ 26, /*->13704*/
/*13678*/           OPC_CheckPredicate, 13, // Predicate_load
/*13680*/           OPC_CheckPredicate, 55, // Predicate_aligned_load
/*13682*/           OPC_MoveParent,
/*13683*/           OPC_MoveChild, 2,
/*13685*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13688*/           OPC_MoveParent,
/*13689*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13691*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13694*/           OPC_EmitMergeInputChains1_1,
/*13695*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                    // Dst: (CLRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13704*/         0, /*End of Scope*/
/*13705*/       /*Scope*/ 103, /*->13809*/
/*13706*/         OPC_CheckChild0Type, MVT::i64,
/*13708*/         OPC_MoveChild, 1,
/*13710*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13713*/         OPC_RecordMemRef,
/*13714*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13715*/         OPC_CheckFoldableChainNode,
/*13716*/         OPC_RecordChild1, // #2 = $I2
/*13717*/         OPC_CheckChild1Type, MVT::i64,
/*13719*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13721*/         OPC_Scope, 58, /*->13781*/ // 2 children in Scope
/*13723*/           OPC_CheckPredicate, 38, // Predicate_azextload
/*13725*/           OPC_Scope, 26, /*->13753*/ // 2 children in Scope
/*13727*/             OPC_CheckPredicate, 57, // Predicate_azextloadi16
/*13729*/             OPC_CheckPredicate, 58, // Predicate_aligned_azextloadi16
/*13731*/             OPC_MoveParent,
/*13732*/             OPC_MoveChild, 2,
/*13734*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13737*/             OPC_MoveParent,
/*13738*/             OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13740*/             OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13743*/             OPC_EmitMergeInputChains1_1,
/*13744*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>><<P:Predicate_aligned_azextloadi16>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                      // Dst: (CLGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13753*/           /*Scope*/ 26, /*->13780*/
/*13754*/             OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*13756*/             OPC_CheckPredicate, 60, // Predicate_aligned_azextloadi32
/*13758*/             OPC_MoveParent,
/*13759*/             OPC_MoveChild, 2,
/*13761*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13764*/             OPC_MoveParent,
/*13765*/             OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13767*/             OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13770*/             OPC_EmitMergeInputChains1_1,
/*13771*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>><<P:Predicate_aligned_azextloadi32>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                      // Dst: (CLGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13780*/           0, /*End of Scope*/
/*13781*/         /*Scope*/ 26, /*->13808*/
/*13782*/           OPC_CheckPredicate, 13, // Predicate_load
/*13784*/           OPC_CheckPredicate, 55, // Predicate_aligned_load
/*13786*/           OPC_MoveParent,
/*13787*/           OPC_MoveChild, 2,
/*13789*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13792*/           OPC_MoveParent,
/*13793*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13795*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13798*/           OPC_EmitMergeInputChains1_1,
/*13799*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                    // Dst: (CLGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13808*/         0, /*End of Scope*/
/*13809*/       0, /*End of Scope*/
/*13810*/     /*Scope*/ 80|128,1/*208*/, /*->14020*/
/*13812*/       OPC_MoveChild, 0,
/*13814*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13817*/       OPC_RecordMemRef,
/*13818*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13819*/       OPC_CheckFoldableChainNode,
/*13820*/       OPC_RecordChild1, // #1 = $BD1
/*13821*/       OPC_CheckChild1Type, MVT::i64,
/*13823*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13825*/       OPC_Scope, 109, /*->13936*/ // 2 children in Scope
/*13827*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*13829*/         OPC_CheckType, MVT::i32,
/*13831*/         OPC_Scope, 62, /*->13895*/ // 2 children in Scope
/*13833*/           OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*13835*/           OPC_MoveParent,
/*13836*/           OPC_RecordChild1, // #2 = $I2
/*13837*/           OPC_MoveChild, 1,
/*13839*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13842*/           OPC_CheckPredicate, 51, // Predicate_imm32zx8
/*13844*/           OPC_MoveParent,
/*13845*/           OPC_MoveChild, 2,
/*13847*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13850*/           OPC_MoveParent,
/*13851*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13853*/           OPC_Scope, 19, /*->13874*/ // 2 children in Scope
/*13855*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD1 #3 #4
/*13858*/             OPC_EmitMergeInputChains1_0,
/*13859*/             OPC_EmitConvertToTarget, 2,
/*13861*/             OPC_EmitNodeXForm, 0, 5, // UIMM8
/*13864*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (z_icmp (ld:i32 bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                      // Dst: (CLI:i32 bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*13874*/           /*Scope*/ 19, /*->13894*/
/*13875*/             OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD1 #3 #4
/*13878*/             OPC_EmitMergeInputChains1_0,
/*13879*/             OPC_EmitConvertToTarget, 2,
/*13881*/             OPC_EmitNodeXForm, 0, 5, // UIMM8
/*13884*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (z_icmp (ld:i32 bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                      // Dst: (CLIY:i32 bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*13894*/           0, /*End of Scope*/
/*13895*/         /*Scope*/ 39, /*->13935*/
/*13896*/           OPC_CheckPredicate, 57, // Predicate_azextloadi16
/*13898*/           OPC_MoveParent,
/*13899*/           OPC_RecordChild1, // #2 = $I2
/*13900*/           OPC_MoveChild, 1,
/*13902*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13905*/           OPC_CheckPredicate, 61, // Predicate_imm32zx16
/*13907*/           OPC_MoveParent,
/*13908*/           OPC_MoveChild, 2,
/*13910*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13913*/           OPC_MoveParent,
/*13914*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13916*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13919*/           OPC_EmitMergeInputChains1_0,
/*13920*/           OPC_EmitConvertToTarget, 2,
/*13922*/           OPC_EmitNodeXForm, 10, 5, // UIMM16
/*13925*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_icmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                    // Dst: (CLHHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*13935*/         0, /*End of Scope*/
/*13936*/       /*Scope*/ 82, /*->14019*/
/*13937*/         OPC_CheckPredicate, 13, // Predicate_load
/*13939*/         OPC_SwitchType /*2 cases */, 37, MVT::i32,// ->13979
/*13942*/           OPC_MoveParent,
/*13943*/           OPC_RecordChild1, // #2 = $I2
/*13944*/           OPC_MoveChild, 1,
/*13946*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13949*/           OPC_CheckPredicate, 61, // Predicate_imm32zx16
/*13951*/           OPC_MoveParent,
/*13952*/           OPC_MoveChild, 2,
/*13954*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13957*/           OPC_MoveParent,
/*13958*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13960*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13963*/           OPC_EmitMergeInputChains1_0,
/*13964*/           OPC_EmitConvertToTarget, 2,
/*13966*/           OPC_EmitNodeXForm, 10, 5, // UIMM16
/*13969*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_icmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                    // Dst: (CLFHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*13979*/         /*SwitchType*/ 37, MVT::i64,// ->14018
/*13981*/           OPC_MoveParent,
/*13982*/           OPC_RecordChild1, // #2 = $I2
/*13983*/           OPC_MoveChild, 1,
/*13985*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13988*/           OPC_CheckPredicate, 62, // Predicate_imm64zx16
/*13990*/           OPC_MoveParent,
/*13991*/           OPC_MoveChild, 2,
/*13993*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13996*/           OPC_MoveParent,
/*13997*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*13999*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14002*/           OPC_EmitMergeInputChains1_0,
/*14003*/           OPC_EmitConvertToTarget, 2,
/*14005*/           OPC_EmitNodeXForm, 10, 5, // UIMM16
/*14008*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_icmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64zx16>><<X:UIMM16>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 24
                    // Dst: (CLGHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i64 (imm:i64):$I2))
/*14018*/         0, // EndSwitchType
/*14019*/       0, /*End of Scope*/
/*14020*/     /*Scope*/ 87|128,6/*855*/, /*->14877*/
/*14022*/       OPC_RecordChild0, // #0 = $R1
/*14023*/       OPC_Scope, 68|128,2/*324*/, /*->14350*/ // 7 children in Scope
/*14026*/         OPC_CheckChild0Type, MVT::i32,
/*14028*/         OPC_Scope, 94|128,1/*222*/, /*->14253*/ // 2 children in Scope
/*14031*/           OPC_MoveChild, 1,
/*14033*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14036*/           OPC_RecordMemRef,
/*14037*/           OPC_RecordNode, // #1 = 'ld' chained node
/*14038*/           OPC_CheckFoldableChainNode,
/*14039*/           OPC_RecordChild1, // #2 = $XBD2
/*14040*/           OPC_CheckChild1Type, MVT::i64,
/*14042*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14044*/           OPC_Scope, 47, /*->14093*/ // 2 children in Scope
/*14046*/             OPC_CheckPredicate, 35, // Predicate_asextload
/*14048*/             OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*14050*/             OPC_MoveParent,
/*14051*/             OPC_MoveChild, 2,
/*14053*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14056*/             OPC_MoveParent,
/*14057*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14059*/             OPC_Scope, 15, /*->14076*/ // 2 children in Scope
/*14061*/               OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*14064*/               OPC_EmitMergeInputChains1_1,
/*14065*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                        // Src: (z_icmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                        // Dst: (CH:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*14076*/             /*Scope*/ 15, /*->14092*/
/*14077*/               OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*14080*/               OPC_EmitMergeInputChains1_1,
/*14081*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                        // Src: (z_icmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                        // Dst: (CHY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*14092*/             0, /*End of Scope*/
/*14093*/           /*Scope*/ 29|128,1/*157*/, /*->14252*/
/*14095*/             OPC_CheckPredicate, 13, // Predicate_load
/*14097*/             OPC_MoveParent,
/*14098*/             OPC_MoveChild, 2,
/*14100*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14103*/             OPC_MoveParent,
/*14104*/             OPC_Scope, 72, /*->14178*/ // 2 children in Scope
/*14106*/               OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14108*/               OPC_Scope, 17, /*->14127*/ // 4 children in Scope
/*14110*/                 OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14112*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14115*/                 OPC_EmitMergeInputChains1_1,
/*14116*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMux), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GRX32:i32:$R1, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                          // Dst: (CMux:i32 GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*14127*/               /*Scope*/ 15, /*->14143*/
/*14128*/                 OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*14131*/                 OPC_EmitMergeInputChains1_1,
/*14132*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::C), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                          // Dst: (C:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*14143*/               /*Scope*/ 15, /*->14159*/
/*14144*/                 OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*14147*/                 OPC_EmitMergeInputChains1_1,
/*14148*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                          // Dst: (CY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*14159*/               /*Scope*/ 17, /*->14177*/
/*14160*/                 OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14162*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14165*/                 OPC_EmitMergeInputChains1_1,
/*14166*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GRH32:i32:$R1, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                          // Dst: (CHF:i32 GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*14177*/               0, /*End of Scope*/
/*14178*/             /*Scope*/ 72, /*->14251*/
/*14179*/               OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14181*/               OPC_Scope, 17, /*->14200*/ // 4 children in Scope
/*14183*/                 OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14185*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14188*/                 OPC_EmitMergeInputChains1_1,
/*14189*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLMux), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GRX32:i32:$R1, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 23
                          // Dst: (CLMux:i32 GRX32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*14200*/               /*Scope*/ 15, /*->14216*/
/*14201*/                 OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*14204*/                 OPC_EmitMergeInputChains1_1,
/*14205*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 23
                          // Dst: (CL:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*14216*/               /*Scope*/ 15, /*->14232*/
/*14217*/                 OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*14220*/                 OPC_EmitMergeInputChains1_1,
/*14221*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 23
                          // Dst: (CLY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*14232*/               /*Scope*/ 17, /*->14250*/
/*14233*/                 OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14235*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14238*/                 OPC_EmitMergeInputChains1_1,
/*14239*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GRH32:i32:$R1, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 23
                          // Dst: (CLHF:i32 GRH32:i32:$R1, bdxaddr20only:i64:$XBD2)
/*14250*/               0, /*End of Scope*/
/*14251*/             0, /*End of Scope*/
/*14252*/           0, /*End of Scope*/
/*14253*/         /*Scope*/ 95, /*->14349*/
/*14254*/           OPC_RecordChild1, // #1 = $I2
/*14255*/           OPC_MoveChild, 1,
/*14257*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14260*/           OPC_Scope, 25, /*->14287*/ // 2 children in Scope
/*14262*/             OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*14264*/             OPC_MoveParent,
/*14265*/             OPC_MoveChild, 2,
/*14267*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14270*/             OPC_MoveParent,
/*14271*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14273*/             OPC_EmitConvertToTarget, 1,
/*14275*/             OPC_EmitNodeXForm, 2, 2, // SIMM16
/*14278*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHI), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 11
                      // Dst: (CHI:i32 GR32:i32:$R1, (SIMM16:i32 (imm:i32):$I2))
/*14287*/           /*Scope*/ 60, /*->14348*/
/*14288*/             OPC_MoveParent,
/*14289*/             OPC_MoveChild, 2,
/*14291*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14294*/             OPC_MoveParent,
/*14295*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14297*/             OPC_Scope, 16, /*->14315*/ // 3 children in Scope
/*14299*/               OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14301*/               OPC_EmitConvertToTarget, 1,
/*14303*/               OPC_EmitNodeXForm, 11, 2, // SIMM32
/*14306*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFIMux), 0|OPFL_GlueOutput,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (z_icmp GRX32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 10
                        // Dst: (CFIMux:i32 GRX32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*14315*/             /*Scope*/ 14, /*->14330*/
/*14316*/               OPC_EmitConvertToTarget, 1,
/*14318*/               OPC_EmitNodeXForm, 11, 2, // SIMM32
/*14321*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFI), 0|OPFL_GlueOutput,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (z_icmp GR32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 10
                        // Dst: (CFI:i32 GR32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*14330*/             /*Scope*/ 16, /*->14347*/
/*14331*/               OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14333*/               OPC_EmitConvertToTarget, 1,
/*14335*/               OPC_EmitNodeXForm, 11, 2, // SIMM32
/*14338*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CIH), 0|OPFL_GlueOutput,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (z_icmp GRH32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 10
                        // Dst: (CIH:i32 GRH32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*14347*/             0, /*End of Scope*/
/*14348*/           0, /*End of Scope*/
/*14349*/         0, /*End of Scope*/
/*14350*/       /*Scope*/ 36|128,2/*292*/, /*->14644*/
/*14352*/         OPC_CheckChild0Type, MVT::i64,
/*14354*/         OPC_Scope, 71|128,1/*199*/, /*->14556*/ // 2 children in Scope
/*14357*/           OPC_MoveChild, 1,
/*14359*/           OPC_Scope, 27|128,1/*155*/, /*->14517*/ // 2 children in Scope
/*14362*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14365*/             OPC_RecordMemRef,
/*14366*/             OPC_RecordNode, // #1 = 'ld' chained node
/*14367*/             OPC_CheckFoldableChainNode,
/*14368*/             OPC_RecordChild1, // #2 = $XBD2
/*14369*/             OPC_CheckChild1Type, MVT::i64,
/*14371*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14373*/             OPC_Scope, 58, /*->14433*/ // 4 children in Scope
/*14375*/               OPC_CheckPredicate, 35, // Predicate_asextload
/*14377*/               OPC_Scope, 26, /*->14405*/ // 2 children in Scope
/*14379*/                 OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*14381*/                 OPC_MoveParent,
/*14382*/                 OPC_MoveChild, 2,
/*14384*/                 OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14387*/                 OPC_MoveParent,
/*14388*/                 OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14390*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14393*/                 OPC_EmitMergeInputChains1_1,
/*14394*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                          // Dst: (CGH:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14405*/               /*Scope*/ 26, /*->14432*/
/*14406*/                 OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*14408*/                 OPC_MoveParent,
/*14409*/                 OPC_MoveChild, 2,
/*14411*/                 OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14414*/                 OPC_MoveParent,
/*14415*/                 OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14417*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14420*/                 OPC_EmitMergeInputChains1_1,
/*14421*/                 OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                          // Src: (z_icmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                          // Dst: (CGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14432*/               0, /*End of Scope*/
/*14433*/             /*Scope*/ 26, /*->14460*/
/*14434*/               OPC_CheckPredicate, 13, // Predicate_load
/*14436*/               OPC_MoveParent,
/*14437*/               OPC_MoveChild, 2,
/*14439*/               OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14442*/               OPC_MoveParent,
/*14443*/               OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14445*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14448*/               OPC_EmitMergeInputChains1_1,
/*14449*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                        // Src: (z_icmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 23
                        // Dst: (CG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14460*/             /*Scope*/ 28, /*->14489*/
/*14461*/               OPC_CheckPredicate, 38, // Predicate_azextload
/*14463*/               OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*14465*/               OPC_MoveParent,
/*14466*/               OPC_MoveChild, 2,
/*14468*/               OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14471*/               OPC_MoveParent,
/*14472*/               OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14474*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14477*/               OPC_EmitMergeInputChains1_1,
/*14478*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                        // Src: (z_icmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 23
                        // Dst: (CLGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14489*/             /*Scope*/ 26, /*->14516*/
/*14490*/               OPC_CheckPredicate, 13, // Predicate_load
/*14492*/               OPC_MoveParent,
/*14493*/               OPC_MoveChild, 2,
/*14495*/               OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14498*/               OPC_MoveParent,
/*14499*/               OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14501*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14504*/               OPC_EmitMergeInputChains1_1,
/*14505*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                        // Src: (z_icmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 23
                        // Dst: (CLG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14516*/             0, /*End of Scope*/
/*14517*/           /*Scope*/ 37, /*->14555*/
/*14518*/             OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*14524*/             OPC_RecordChild0, // #1 = $src2
/*14525*/             OPC_MoveParent,
/*14526*/             OPC_MoveChild, 2,
/*14528*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14531*/             OPC_MoveParent,
/*14532*/             OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14534*/             OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*14537*/             OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*14546*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64), (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 15
                      // Dst: (CLGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*14555*/           0, /*End of Scope*/
/*14556*/         /*Scope*/ 86, /*->14643*/
/*14557*/           OPC_RecordChild1, // #1 = $I2
/*14558*/           OPC_MoveChild, 1,
/*14560*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14563*/           OPC_Scope, 25, /*->14590*/ // 3 children in Scope
/*14565*/             OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*14567*/             OPC_MoveParent,
/*14568*/             OPC_MoveChild, 2,
/*14570*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14573*/             OPC_MoveParent,
/*14574*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14576*/             OPC_EmitConvertToTarget, 1,
/*14578*/             OPC_EmitNodeXForm, 2, 2, // SIMM16
/*14581*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHI), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 11
                      // Dst: (CGHI:i32 GR64:i64:$R1, (SIMM16:i64 (imm:i64):$I2))
/*14590*/           /*Scope*/ 25, /*->14616*/
/*14591*/             OPC_CheckPredicate, 63, // Predicate_imm64sx32
/*14593*/             OPC_MoveParent,
/*14594*/             OPC_MoveChild, 2,
/*14596*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14599*/             OPC_MoveParent,
/*14600*/             OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14602*/             OPC_EmitConvertToTarget, 1,
/*14604*/             OPC_EmitNodeXForm, 11, 2, // SIMM32
/*14607*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFI), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 11
                      // Dst: (CGFI:i32 GR64:i64:$R1, (SIMM32:i64 (imm:i64):$I2))
/*14616*/           /*Scope*/ 25, /*->14642*/
/*14617*/             OPC_CheckPredicate, 64, // Predicate_imm64zx32
/*14619*/             OPC_MoveParent,
/*14620*/             OPC_MoveChild, 2,
/*14622*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14625*/             OPC_MoveParent,
/*14626*/             OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14628*/             OPC_EmitConvertToTarget, 1,
/*14630*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*14633*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFI), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (z_icmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 11
                      // Dst: (CLGFI:i32 GR64:i64:$R1, (UIMM32:i64 (imm:i64):$I2))
/*14642*/           0, /*End of Scope*/
/*14643*/         0, /*End of Scope*/
/*14644*/       /*Scope*/ 24, /*->14669*/
/*14645*/         OPC_MoveChild, 1,
/*14647*/         OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*14650*/         OPC_RecordChild0, // #1 = $src2
/*14651*/         OPC_MoveParent,
/*14652*/         OPC_MoveChild, 2,
/*14654*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14657*/         OPC_MoveParent,
/*14658*/         OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14660*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_icmp GR64:i64:$src1, (sext:i64 GR32:i32:$src2), (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 10
                  // Dst: (CGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
/*14669*/       /*Scope*/ 68, /*->14738*/
/*14670*/         OPC_CheckChild0Type, MVT::i32,
/*14672*/         OPC_RecordChild1, // #1 = $I2
/*14673*/         OPC_MoveChild, 1,
/*14675*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14678*/         OPC_MoveParent,
/*14679*/         OPC_MoveChild, 2,
/*14681*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14684*/         OPC_MoveParent,
/*14685*/         OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14687*/         OPC_Scope, 16, /*->14705*/ // 3 children in Scope
/*14689*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14691*/           OPC_EmitConvertToTarget, 1,
/*14693*/           OPC_EmitNodeXForm, 5, 2, // UIMM32
/*14696*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFIMux), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GRX32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 10
                    // Dst: (CLFIMux:i32 GRX32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*14705*/         /*Scope*/ 14, /*->14720*/
/*14706*/           OPC_EmitConvertToTarget, 1,
/*14708*/           OPC_EmitNodeXForm, 5, 2, // UIMM32
/*14711*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 10
                    // Dst: (CLFI:i32 GR32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*14720*/         /*Scope*/ 16, /*->14737*/
/*14721*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*14723*/           OPC_EmitConvertToTarget, 1,
/*14725*/           OPC_EmitNodeXForm, 5, 2, // UIMM32
/*14728*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIH), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 10
                    // Dst: (CLIH:i32 GR32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*14737*/         0, /*End of Scope*/
/*14738*/       /*Scope*/ 65, /*->14804*/
/*14739*/         OPC_MoveChild, 1,
/*14741*/         OPC_SwitchOpcode /*2 cases */, 19, TARGET_VAL(ISD::ZERO_EXTEND),// ->14764
/*14745*/           OPC_RecordChild0, // #1 = $src2
/*14746*/           OPC_MoveParent,
/*14747*/           OPC_MoveChild, 2,
/*14749*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14752*/           OPC_MoveParent,
/*14753*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14755*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (z_icmp GR64:i64:$src1, (zext:i64 GR32:i32:$src2), (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 10
                    // Dst: (CLGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
/*14764*/         /*SwitchOpcode*/ 36, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->14803
/*14767*/           OPC_RecordChild0, // #1 = $src2
/*14768*/           OPC_MoveChild, 1,
/*14770*/           OPC_CheckValueType, MVT::i32,
/*14772*/           OPC_MoveParent,
/*14773*/           OPC_MoveParent,
/*14774*/           OPC_MoveChild, 2,
/*14776*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14779*/           OPC_MoveParent,
/*14780*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14782*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*14785*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*14794*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_icmp GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other), (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 10
                    // Dst: (CGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*14803*/         0, // EndSwitchOpcode
/*14804*/       /*Scope*/ 35, /*->14840*/
/*14805*/         OPC_CheckChild0Type, MVT::i32,
/*14807*/         OPC_RecordChild1, // #1 = $R2
/*14808*/         OPC_MoveChild, 2,
/*14810*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14813*/         OPC_MoveParent,
/*14814*/         OPC_Scope, 11, /*->14827*/ // 2 children in Scope
/*14816*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14818*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (z_icmp GR32:i32:$R1, GR32:i32:$R2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 7
                    // Dst: (CR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*14827*/         /*Scope*/ 11, /*->14839*/
/*14828*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14830*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (z_icmp GR32:i32:$R1, GR32:i32:$R2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 7
                    // Dst: (CLR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*14839*/         0, /*End of Scope*/
/*14840*/       /*Scope*/ 35, /*->14876*/
/*14841*/         OPC_CheckChild0Type, MVT::i64,
/*14843*/         OPC_RecordChild1, // #1 = $R2
/*14844*/         OPC_MoveChild, 2,
/*14846*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14849*/         OPC_MoveParent,
/*14850*/         OPC_Scope, 11, /*->14863*/ // 2 children in Scope
/*14852*/           OPC_CheckPredicate, 54, // Predicate_z_scmp
/*14854*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (z_icmp GR64:i64:$R1, GR64:i64:$R2, (imm:i32))<<P:Predicate_z_scmp>> - Complexity = 7
                    // Dst: (CGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*14863*/         /*Scope*/ 11, /*->14875*/
/*14864*/           OPC_CheckPredicate, 59, // Predicate_z_ucmp
/*14866*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (z_icmp GR64:i64:$R1, GR64:i64:$R2, (imm:i32))<<P:Predicate_z_ucmp>> - Complexity = 7
                    // Dst: (CLGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*14875*/         0, /*End of Scope*/
/*14876*/       0, /*End of Scope*/
/*14877*/     0, /*End of Scope*/
/*14878*/   /*SwitchOpcode*/ 34, TARGET_VAL(SystemZISD::MVC),// ->14915
/*14881*/     OPC_RecordNode, // #0 = 'z_mvc' chained node
/*14882*/     OPC_RecordChild1, // #1 = $dest
/*14883*/     OPC_CheckChild1Type, MVT::i64,
/*14885*/     OPC_RecordChild2, // #2 = $src
/*14886*/     OPC_CheckChild2Type, MVT::i64,
/*14888*/     OPC_RecordChild3, // #3 = $length
/*14889*/     OPC_MoveChild, 3,
/*14891*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14894*/     OPC_MoveParent,
/*14895*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*14898*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*14901*/     OPC_EmitMergeInputChains1_0,
/*14902*/     OPC_EmitConvertToTarget, 3,
/*14904*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCSequence), 0|OPFL_Chain,
                  0/*#VTs*/, 5/*#Ops*/, 4, 5, 6, 7, 8, 
              // Src: (z_mvc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
              // Dst: (MVCSequence bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
/*14915*/   /*SwitchOpcode*/ 36, TARGET_VAL(SystemZISD::MVC_LOOP),// ->14954
/*14918*/     OPC_RecordNode, // #0 = 'z_mvc_loop' chained node
/*14919*/     OPC_RecordChild1, // #1 = $dest
/*14920*/     OPC_CheckChild1Type, MVT::i64,
/*14922*/     OPC_RecordChild2, // #2 = $src
/*14923*/     OPC_CheckChild2Type, MVT::i64,
/*14925*/     OPC_RecordChild3, // #3 = $length
/*14926*/     OPC_MoveChild, 3,
/*14928*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14931*/     OPC_MoveParent,
/*14932*/     OPC_RecordChild4, // #4 = $count256
/*14933*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*14936*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*14939*/     OPC_EmitMergeInputChains1_0,
/*14940*/     OPC_EmitConvertToTarget, 3,
/*14942*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCLoop), 0|OPFL_Chain,
                  0/*#VTs*/, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
              // Src: (z_mvc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
              // Dst: (MVCLoop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
/*14954*/   /*SwitchOpcode*/ 35, TARGET_VAL(SystemZISD::NC),// ->14992
/*14957*/     OPC_RecordNode, // #0 = 'z_nc' chained node
/*14958*/     OPC_RecordChild1, // #1 = $dest
/*14959*/     OPC_CheckChild1Type, MVT::i64,
/*14961*/     OPC_RecordChild2, // #2 = $src
/*14962*/     OPC_CheckChild2Type, MVT::i64,
/*14964*/     OPC_RecordChild3, // #3 = $length
/*14965*/     OPC_MoveChild, 3,
/*14967*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14970*/     OPC_MoveParent,
/*14971*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*14974*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*14977*/     OPC_EmitMergeInputChains1_0,
/*14978*/     OPC_EmitConvertToTarget, 3,
/*14980*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCSequence), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 5/*#Ops*/, 4, 5, 6, 7, 8, 
              // Src: (z_nc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
              // Dst: (NCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
/*14992*/   /*SwitchOpcode*/ 37, TARGET_VAL(SystemZISD::NC_LOOP),// ->15032
/*14995*/     OPC_RecordNode, // #0 = 'z_nc_loop' chained node
/*14996*/     OPC_RecordChild1, // #1 = $dest
/*14997*/     OPC_CheckChild1Type, MVT::i64,
/*14999*/     OPC_RecordChild2, // #2 = $src
/*15000*/     OPC_CheckChild2Type, MVT::i64,
/*15002*/     OPC_RecordChild3, // #3 = $length
/*15003*/     OPC_MoveChild, 3,
/*15005*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15008*/     OPC_MoveParent,
/*15009*/     OPC_RecordChild4, // #4 = $count256
/*15010*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*15013*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*15016*/     OPC_EmitMergeInputChains1_0,
/*15017*/     OPC_EmitConvertToTarget, 3,
/*15019*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::NCLoop), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
              // Src: (z_nc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
              // Dst: (NCLoop:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
/*15032*/   /*SwitchOpcode*/ 35, TARGET_VAL(SystemZISD::OC),// ->15070
/*15035*/     OPC_RecordNode, // #0 = 'z_oc' chained node
/*15036*/     OPC_RecordChild1, // #1 = $dest
/*15037*/     OPC_CheckChild1Type, MVT::i64,
/*15039*/     OPC_RecordChild2, // #2 = $src
/*15040*/     OPC_CheckChild2Type, MVT::i64,
/*15042*/     OPC_RecordChild3, // #3 = $length
/*15043*/     OPC_MoveChild, 3,
/*15045*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15048*/     OPC_MoveParent,
/*15049*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*15052*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*15055*/     OPC_EmitMergeInputChains1_0,
/*15056*/     OPC_EmitConvertToTarget, 3,
/*15058*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCSequence), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 5/*#Ops*/, 4, 5, 6, 7, 8, 
              // Src: (z_oc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
              // Dst: (OCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
/*15070*/   /*SwitchOpcode*/ 37, TARGET_VAL(SystemZISD::OC_LOOP),// ->15110
/*15073*/     OPC_RecordNode, // #0 = 'z_oc_loop' chained node
/*15074*/     OPC_RecordChild1, // #1 = $dest
/*15075*/     OPC_CheckChild1Type, MVT::i64,
/*15077*/     OPC_RecordChild2, // #2 = $src
/*15078*/     OPC_CheckChild2Type, MVT::i64,
/*15080*/     OPC_RecordChild3, // #3 = $length
/*15081*/     OPC_MoveChild, 3,
/*15083*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15086*/     OPC_MoveParent,
/*15087*/     OPC_RecordChild4, // #4 = $count256
/*15088*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*15091*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*15094*/     OPC_EmitMergeInputChains1_0,
/*15095*/     OPC_EmitConvertToTarget, 3,
/*15097*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::OCLoop), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
              // Src: (z_oc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
              // Dst: (OCLoop:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
/*15110*/   /*SwitchOpcode*/ 35, TARGET_VAL(SystemZISD::XC),// ->15148
/*15113*/     OPC_RecordNode, // #0 = 'z_xc' chained node
/*15114*/     OPC_RecordChild1, // #1 = $dest
/*15115*/     OPC_CheckChild1Type, MVT::i64,
/*15117*/     OPC_RecordChild2, // #2 = $src
/*15118*/     OPC_CheckChild2Type, MVT::i64,
/*15120*/     OPC_RecordChild3, // #3 = $length
/*15121*/     OPC_MoveChild, 3,
/*15123*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15126*/     OPC_MoveParent,
/*15127*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*15130*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*15133*/     OPC_EmitMergeInputChains1_0,
/*15134*/     OPC_EmitConvertToTarget, 3,
/*15136*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCSequence), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 5/*#Ops*/, 4, 5, 6, 7, 8, 
              // Src: (z_xc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
              // Dst: (XCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
/*15148*/   /*SwitchOpcode*/ 37, TARGET_VAL(SystemZISD::XC_LOOP),// ->15188
/*15151*/     OPC_RecordNode, // #0 = 'z_xc_loop' chained node
/*15152*/     OPC_RecordChild1, // #1 = $dest
/*15153*/     OPC_CheckChild1Type, MVT::i64,
/*15155*/     OPC_RecordChild2, // #2 = $src
/*15156*/     OPC_CheckChild2Type, MVT::i64,
/*15158*/     OPC_RecordChild3, // #3 = $length
/*15159*/     OPC_MoveChild, 3,
/*15161*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15164*/     OPC_MoveParent,
/*15165*/     OPC_RecordChild4, // #4 = $count256
/*15166*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*15169*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*15172*/     OPC_EmitMergeInputChains1_0,
/*15173*/     OPC_EmitConvertToTarget, 3,
/*15175*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::XCLoop), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
              // Src: (z_xc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
              // Dst: (XCLoop:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
/*15188*/   /*SwitchOpcode*/ 35, TARGET_VAL(SystemZISD::CLC),// ->15226
/*15191*/     OPC_RecordNode, // #0 = 'z_clc' chained node
/*15192*/     OPC_RecordChild1, // #1 = $dest
/*15193*/     OPC_CheckChild1Type, MVT::i64,
/*15195*/     OPC_RecordChild2, // #2 = $src
/*15196*/     OPC_CheckChild2Type, MVT::i64,
/*15198*/     OPC_RecordChild3, // #3 = $length
/*15199*/     OPC_MoveChild, 3,
/*15201*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15204*/     OPC_MoveParent,
/*15205*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*15208*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*15211*/     OPC_EmitMergeInputChains1_0,
/*15212*/     OPC_EmitConvertToTarget, 3,
/*15214*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLCSequence), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 5/*#Ops*/, 4, 5, 6, 7, 8, 
              // Src: (z_clc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length) - Complexity = 24
              // Dst: (CLCSequence:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length)
/*15226*/   /*SwitchOpcode*/ 37, TARGET_VAL(SystemZISD::CLC_LOOP),// ->15266
/*15229*/     OPC_RecordNode, // #0 = 'z_clc_loop' chained node
/*15230*/     OPC_RecordChild1, // #1 = $dest
/*15231*/     OPC_CheckChild1Type, MVT::i64,
/*15233*/     OPC_RecordChild2, // #2 = $src
/*15234*/     OPC_CheckChild2Type, MVT::i64,
/*15236*/     OPC_RecordChild3, // #3 = $length
/*15237*/     OPC_MoveChild, 3,
/*15239*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15242*/     OPC_MoveParent,
/*15243*/     OPC_RecordChild4, // #4 = $count256
/*15244*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$dest #5 #6
/*15247*/     OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Only:$src #7 #8
/*15250*/     OPC_EmitMergeInputChains1_0,
/*15251*/     OPC_EmitConvertToTarget, 3,
/*15253*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLCLoop), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 5, 6, 7, 8, 9, 4, 
              // Src: (z_clc_loop bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256) - Complexity = 24
              // Dst: (CLCLoop:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i64):$length, GR64:i64:$count256)
/*15266*/   /*SwitchOpcode*/ 126, TARGET_VAL(ISD::INTRINSIC_VOID),// ->15395
/*15269*/     OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*15270*/     OPC_Scope, 36, /*->15308*/ // 4 children in Scope
/*15272*/       OPC_CheckChild1Integer, 46|128,25/*3246*/, 
/*15275*/       OPC_RecordChild2, // #1 = $BD1
/*15276*/       OPC_CheckChild2Type, MVT::i64,
/*15278*/       OPC_RecordChild3, // #2 = $I2
/*15279*/       OPC_MoveChild, 3,
/*15281*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15284*/       OPC_CheckPredicate, 61, // Predicate_imm32zx16
/*15286*/       OPC_MoveParent,
/*15287*/       OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*15289*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*15292*/       OPC_EmitMergeInputChains1_0,
/*15293*/       OPC_EmitConvertToTarget, 2,
/*15295*/       OPC_EmitNodeXForm, 10, 5, // UIMM16
/*15298*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TBEGINC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (intrinsic_void 3246:iPTR, bdaddr12only:i64:$BD1, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 21
                // Dst: (TBEGINC:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*15308*/     /*Scope*/ 23, /*->15332*/
/*15309*/       OPC_CheckChild1Integer, 41|128,25/*3241*/, 
/*15312*/       OPC_RecordChild2, // #1 = $R1
/*15313*/       OPC_RecordChild3, // #2 = $XBD2
/*15314*/       OPC_CheckChild3Type, MVT::i64,
/*15316*/       OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*15318*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*15321*/       OPC_EmitMergeInputChains1_0,
/*15322*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::NTSTG), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (intrinsic_void 3241:iPTR, GR64:i64:$R1, bdxaddr20only:i64:$XBD2) - Complexity = 20
                // Dst: (NTSTG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*15332*/     /*Scope*/ 18, /*->15351*/
/*15333*/       OPC_CheckChild1Integer, 43|128,25/*3243*/, 
/*15336*/       OPC_RecordChild2, // #1 = $BD2
/*15337*/       OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*15339*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*15342*/       OPC_EmitMergeInputChains1_0,
/*15343*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::TABORT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 2, 3, 
                // Src: (intrinsic_void 3243:iPTR, bdaddr12only:i64:$BD2) - Complexity = 17
                // Dst: (TABORT bdaddr12only:i64:$BD2)
/*15351*/     /*Scope*/ 42, /*->15394*/
/*15352*/       OPC_CheckChild1Integer, 42|128,25/*3242*/, 
/*15355*/       OPC_RecordChild2, // #1 = $src
/*15356*/       OPC_CheckPatternPredicate, 3, // (Subtarget->hasProcessorAssist())
/*15358*/       OPC_EmitMergeInputChains1_0,
/*15359*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*15366*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*15369*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*15379*/       OPC_EmitInteger, MVT::i64, 0, 
/*15382*/       OPC_EmitInteger, MVT::i32, 1, 
/*15385*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::PPA), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 4, 5, 6, 
                // Src: (intrinsic_void 3242:iPTR, GR32:i32:$src) - Complexity = 8
                // Dst: (PPA (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_l32:i32), 0:i64, 1:i32)
/*15394*/     0, /*End of Scope*/
/*15395*/   /*SwitchOpcode*/ 48, TARGET_VAL(SystemZISD::PREFETCH),// ->15446
/*15398*/     OPC_RecordMemRef,
/*15399*/     OPC_RecordNode, // #0 = 'z_prefetch' chained node
/*15400*/     OPC_RecordChild1, // #1 = $R1
/*15401*/     OPC_MoveChild, 1,
/*15403*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15406*/     OPC_CheckPredicate, 4, // Predicate_imm32zx4
/*15408*/     OPC_MoveParent,
/*15409*/     OPC_RecordChild2, // #2 = $I2
/*15410*/     OPC_CheckChild2Type, MVT::i64,
/*15412*/     OPC_Scope, 14, /*->15428*/ // 2 children in Scope
/*15414*/       OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*15417*/       OPC_EmitMergeInputChains1_0,
/*15418*/       OPC_EmitConvertToTarget, 1,
/*15420*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::PFDRL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (z_prefetch (imm:i32)<<P:Predicate_imm32zx4>>:$R1, pcrel32:i64:$I2) - Complexity = 20
                // Dst: (PFDRL (imm:i32):$R1, pcrel32:i64:$I2)
/*15428*/     /*Scope*/ 16, /*->15445*/
/*15429*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*15432*/       OPC_EmitMergeInputChains1_0,
/*15433*/       OPC_EmitConvertToTarget, 1,
/*15435*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::PFD), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 6, 3, 4, 5, 
                // Src: (z_prefetch (imm:i32)<<P:Predicate_imm32zx4>>:$R1, bdxaddr20only:i64:$XBD2) - Complexity = 19
                // Dst: (PFD (imm:i32):$R1, bdxaddr20only:i64:$XBD2)
/*15445*/     0, /*End of Scope*/
/*15446*/   /*SwitchOpcode*/ 78, TARGET_VAL(ISD::BSWAP),// ->15527
/*15449*/     OPC_Scope, 51, /*->15502*/ // 2 children in Scope
/*15451*/       OPC_MoveChild, 0,
/*15453*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15456*/       OPC_RecordMemRef,
/*15457*/       OPC_RecordNode, // #0 = 'ld' chained node
/*15458*/       OPC_RecordChild1, // #1 = $XBD2
/*15459*/       OPC_CheckChild1Type, MVT::i64,
/*15461*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15463*/       OPC_CheckPredicate, 13, // Predicate_load
/*15465*/       OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*15467*/       OPC_MoveParent,
/*15468*/       OPC_SwitchType /*2 cases */, 14, MVT::i32,// ->15485
/*15471*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*15474*/         OPC_EmitMergeInputChains1_0,
/*15475*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRV), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (bswap:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                  // Dst: (LRV:i32 bdxaddr20only:i64:$XBD2)
/*15485*/       /*SwitchType*/ 14, MVT::i64,// ->15501
/*15487*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*15490*/         OPC_EmitMergeInputChains1_0,
/*15491*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (bswap:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                  // Dst: (LRVG:i64 bdxaddr20only:i64:$XBD2)
/*15501*/       0, // EndSwitchType
/*15502*/     /*Scope*/ 23, /*->15526*/
/*15503*/       OPC_RecordChild0, // #0 = $R2
/*15504*/       OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->15515
/*15507*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVR), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (bswap:i32 GR32:i32:$R2) - Complexity = 3
                  // Dst: (LRVR:i32 GR32:i32:$R2)
/*15515*/       /*SwitchType*/ 8, MVT::i64,// ->15525
/*15517*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVGR), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (bswap:i64 GR64:i64:$R2) - Complexity = 3
                  // Dst: (LRVGR:i64 GR64:i64:$R2)
/*15525*/       0, // EndSwitchType
/*15526*/     0, /*End of Scope*/
/*15527*/   /*SwitchOpcode*/ 78|128,6/*846*/, TARGET_VAL(ISD::ADD),// ->16377
/*15531*/     OPC_Scope, 44|128,1/*172*/, /*->15706*/ // 10 children in Scope
/*15534*/       OPC_RecordChild0, // #0 = $R1src
/*15535*/       OPC_MoveChild, 1,
/*15537*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15540*/       OPC_RecordMemRef,
/*15541*/       OPC_RecordNode, // #1 = 'ld' chained node
/*15542*/       OPC_CheckFoldableChainNode,
/*15543*/       OPC_RecordChild1, // #2 = $XBD2
/*15544*/       OPC_CheckChild1Type, MVT::i64,
/*15546*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15548*/       OPC_Scope, 43, /*->15593*/ // 5 children in Scope
/*15550*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*15552*/         OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*15554*/         OPC_MoveParent,
/*15555*/         OPC_CheckType, MVT::i32,
/*15557*/         OPC_Scope, 16, /*->15575*/ // 2 children in Scope
/*15559*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*15562*/           OPC_EmitMergeInputChains1_1,
/*15563*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>) - Complexity = 19
                    // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*15575*/         /*Scope*/ 16, /*->15592*/
/*15576*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*15579*/           OPC_EmitMergeInputChains1_1,
/*15580*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>) - Complexity = 19
                    // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*15592*/         0, /*End of Scope*/
/*15593*/       /*Scope*/ 41, /*->15635*/
/*15594*/         OPC_CheckPredicate, 13, // Predicate_load
/*15596*/         OPC_MoveParent,
/*15597*/         OPC_CheckType, MVT::i32,
/*15599*/         OPC_Scope, 16, /*->15617*/ // 2 children in Scope
/*15601*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*15604*/           OPC_EmitMergeInputChains1_1,
/*15605*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*15617*/         /*Scope*/ 16, /*->15634*/
/*15618*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*15621*/           OPC_EmitMergeInputChains1_1,
/*15622*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*15634*/         0, /*End of Scope*/
/*15635*/       /*Scope*/ 23, /*->15659*/
/*15636*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*15638*/         OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*15640*/         OPC_MoveParent,
/*15641*/         OPC_CheckType, MVT::i64,
/*15643*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*15646*/         OPC_EmitMergeInputChains1_1,
/*15647*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>>) - Complexity = 19
                  // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*15659*/       /*Scope*/ 21, /*->15681*/
/*15660*/         OPC_CheckPredicate, 13, // Predicate_load
/*15662*/         OPC_MoveParent,
/*15663*/         OPC_CheckType, MVT::i64,
/*15665*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*15668*/         OPC_EmitMergeInputChains1_1,
/*15669*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*15681*/       /*Scope*/ 23, /*->15705*/
/*15682*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*15684*/         OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*15686*/         OPC_MoveParent,
/*15687*/         OPC_CheckType, MVT::i64,
/*15689*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*15692*/         OPC_EmitMergeInputChains1_1,
/*15693*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>) - Complexity = 19
                  // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*15705*/       0, /*End of Scope*/
/*15706*/     /*Scope*/ 48|128,1/*176*/, /*->15884*/
/*15708*/       OPC_MoveChild, 0,
/*15710*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15713*/       OPC_RecordMemRef,
/*15714*/       OPC_RecordNode, // #0 = 'ld' chained node
/*15715*/       OPC_CheckFoldableChainNode,
/*15716*/       OPC_RecordChild1, // #1 = $XBD2
/*15717*/       OPC_CheckChild1Type, MVT::i64,
/*15719*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15721*/       OPC_Scope, 44, /*->15767*/ // 5 children in Scope
/*15723*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*15725*/         OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*15727*/         OPC_MoveParent,
/*15728*/         OPC_RecordChild1, // #2 = $R1src
/*15729*/         OPC_CheckType, MVT::i32,
/*15731*/         OPC_Scope, 16, /*->15749*/ // 2 children in Scope
/*15733*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*15736*/           OPC_EmitMergeInputChains1_0,
/*15737*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*15749*/         /*Scope*/ 16, /*->15766*/
/*15750*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*15753*/           OPC_EmitMergeInputChains1_0,
/*15754*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*15766*/         0, /*End of Scope*/
/*15767*/       /*Scope*/ 42, /*->15810*/
/*15768*/         OPC_CheckPredicate, 13, // Predicate_load
/*15770*/         OPC_MoveParent,
/*15771*/         OPC_RecordChild1, // #2 = $R1src
/*15772*/         OPC_CheckType, MVT::i32,
/*15774*/         OPC_Scope, 16, /*->15792*/ // 2 children in Scope
/*15776*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*15779*/           OPC_EmitMergeInputChains1_0,
/*15780*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*15792*/         /*Scope*/ 16, /*->15809*/
/*15793*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*15796*/           OPC_EmitMergeInputChains1_0,
/*15797*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*15809*/         0, /*End of Scope*/
/*15810*/       /*Scope*/ 24, /*->15835*/
/*15811*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*15813*/         OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*15815*/         OPC_MoveParent,
/*15816*/         OPC_RecordChild1, // #2 = $R1src
/*15817*/         OPC_CheckType, MVT::i64,
/*15819*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*15822*/         OPC_EmitMergeInputChains1_0,
/*15823*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*15835*/       /*Scope*/ 22, /*->15858*/
/*15836*/         OPC_CheckPredicate, 13, // Predicate_load
/*15838*/         OPC_MoveParent,
/*15839*/         OPC_RecordChild1, // #2 = $R1src
/*15840*/         OPC_CheckType, MVT::i64,
/*15842*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*15845*/         OPC_EmitMergeInputChains1_0,
/*15846*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*15858*/       /*Scope*/ 24, /*->15883*/
/*15859*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*15861*/         OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*15863*/         OPC_MoveParent,
/*15864*/         OPC_RecordChild1, // #2 = $src1
/*15865*/         OPC_CheckType, MVT::i64,
/*15867*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$addr #3 #4 #5
/*15870*/         OPC_EmitMergeInputChains1_0,
/*15871*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>, GR64:i64:$src1) - Complexity = 19
                  // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*15883*/       0, /*End of Scope*/
/*15884*/     /*Scope*/ 47, /*->15932*/
/*15885*/       OPC_RecordNode, // #0 = $src
/*15886*/       OPC_CheckType, MVT::i64,
/*15888*/       OPC_Scope, 13, /*->15903*/ // 3 children in Scope
/*15890*/         OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*15893*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: dynalloc12only:i64:$src - Complexity = 12
                  // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*15903*/       /*Scope*/ 13, /*->15917*/
/*15904*/         OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*15907*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                  // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*15917*/       /*Scope*/ 13, /*->15931*/
/*15918*/         OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*15921*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                  // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                  // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*15931*/       0, /*End of Scope*/
/*15932*/     /*Scope*/ 35, /*->15968*/
/*15933*/       OPC_RecordChild0, // #0 = $src1
/*15934*/       OPC_MoveChild, 1,
/*15936*/       OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*15942*/       OPC_RecordChild0, // #1 = $src2
/*15943*/       OPC_MoveParent,
/*15944*/       OPC_CheckType, MVT::i64,
/*15946*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*15949*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*15958*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (add:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*15968*/     /*Scope*/ 35, /*->16004*/
/*15969*/       OPC_MoveChild, 0,
/*15971*/       OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*15977*/       OPC_RecordChild0, // #0 = $src2
/*15978*/       OPC_MoveParent,
/*15979*/       OPC_RecordChild1, // #1 = $src1
/*15980*/       OPC_CheckType, MVT::i64,
/*15982*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*15985*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*15994*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (add:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*16004*/     /*Scope*/ 104|128,1/*232*/, /*->16238*/
/*16006*/       OPC_RecordChild0, // #0 = $R1src
/*16007*/       OPC_Scope, 64|128,1/*192*/, /*->16202*/ // 2 children in Scope
/*16010*/         OPC_RecordChild1, // #1 = $I2
/*16011*/         OPC_MoveChild, 1,
/*16013*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16016*/         OPC_Scope, 41, /*->16059*/ // 6 children in Scope
/*16018*/           OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*16020*/           OPC_MoveParent,
/*16021*/           OPC_CheckType, MVT::i32,
/*16023*/           OPC_Scope, 17, /*->16042*/ // 2 children in Scope
/*16025*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*16027*/             OPC_EmitConvertToTarget, 1,
/*16029*/             OPC_EmitNodeXForm, 2, 2, // SIMM16
/*16032*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHIMux), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (add:i32 GRX32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                      // Dst: (AHIMux:i32:i32 GRX32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*16042*/           /*Scope*/ 15, /*->16058*/
/*16043*/             OPC_EmitConvertToTarget, 1,
/*16045*/             OPC_EmitNodeXForm, 2, 2, // SIMM16
/*16048*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHI), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                      // Dst: (AHI:i32:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*16058*/           0, /*End of Scope*/
/*16059*/         /*Scope*/ 20, /*->16080*/
/*16060*/           OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*16062*/           OPC_MoveParent,
/*16063*/           OPC_CheckType, MVT::i64,
/*16065*/           OPC_EmitConvertToTarget, 1,
/*16067*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*16070*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGHI), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (AGHI:i64:i32 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*16080*/         /*Scope*/ 20, /*->16101*/
/*16081*/           OPC_CheckPredicate, 63, // Predicate_imm64sx32
/*16083*/           OPC_MoveParent,
/*16084*/           OPC_CheckType, MVT::i64,
/*16086*/           OPC_EmitConvertToTarget, 1,
/*16088*/           OPC_EmitNodeXForm, 11, 2, // SIMM32
/*16091*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFI), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                    // Dst: (AGFI:i64:i32 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*16101*/         /*Scope*/ 20, /*->16122*/
/*16102*/           OPC_CheckPredicate, 64, // Predicate_imm64zx32
/*16104*/           OPC_MoveParent,
/*16105*/           OPC_CheckType, MVT::i64,
/*16107*/           OPC_EmitConvertToTarget, 1,
/*16109*/           OPC_EmitNodeXForm, 5, 2, // UIMM32
/*16112*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                    // Dst: (ALGFI:i64:i32 GR64:i64:$src1, (UIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32>>:$src2))
/*16122*/         /*Scope*/ 20, /*->16143*/
/*16123*/           OPC_CheckPredicate, 65, // Predicate_imm64zx32n
/*16125*/           OPC_MoveParent,
/*16126*/           OPC_CheckType, MVT::i64,
/*16128*/           OPC_EmitConvertToTarget, 1,
/*16130*/           OPC_EmitNodeXForm, 12, 2, // NEGIMM32
/*16133*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFI), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32n>><<X:NEGIMM32>>:$src2) - Complexity = 7
                    // Dst: (SLGFI:i64:i32 GR64:i64:$src1, (NEGIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32n>>:$src2))
/*16143*/         /*Scope*/ 57, /*->16201*/
/*16144*/           OPC_MoveParent,
/*16145*/           OPC_CheckType, MVT::i32,
/*16147*/           OPC_Scope, 17, /*->16166*/ // 3 children in Scope
/*16149*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*16151*/             OPC_EmitConvertToTarget, 1,
/*16153*/             OPC_EmitNodeXForm, 11, 2, // SIMM32
/*16156*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFIMux), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (add:i32 GRX32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                      // Dst: (AFIMux:i32:i32 GRX32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*16166*/           /*Scope*/ 15, /*->16182*/
/*16167*/             OPC_EmitConvertToTarget, 1,
/*16169*/             OPC_EmitNodeXForm, 11, 2, // SIMM32
/*16172*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFI), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                      // Dst: (AFI:i32:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*16182*/           /*Scope*/ 17, /*->16200*/
/*16183*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*16185*/             OPC_EmitConvertToTarget, 1,
/*16187*/             OPC_EmitNodeXForm, 11, 2, // SIMM32
/*16190*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::AIH), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (add:i32 GRH32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                      // Dst: (AIH:i32:i32 GRH32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*16200*/           0, /*End of Scope*/
/*16201*/         0, /*End of Scope*/
/*16202*/       /*Scope*/ 34, /*->16237*/
/*16203*/         OPC_MoveChild, 1,
/*16205*/         OPC_SwitchOpcode /*2 cases */, 12, TARGET_VAL(ISD::SIGN_EXTEND),// ->16221
/*16209*/           OPC_RecordChild0, // #1 = $src2
/*16210*/           OPC_MoveParent,
/*16211*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                    // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*16221*/         /*SwitchOpcode*/ 12, TARGET_VAL(ISD::ZERO_EXTEND),// ->16236
/*16224*/           OPC_RecordChild0, // #1 = $src2
/*16225*/           OPC_MoveParent,
/*16226*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                    // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*16236*/         0, // EndSwitchOpcode
/*16237*/       0, /*End of Scope*/
/*16238*/     /*Scope*/ 36, /*->16275*/
/*16239*/       OPC_MoveChild, 0,
/*16241*/       OPC_SwitchOpcode /*2 cases */, 13, TARGET_VAL(ISD::SIGN_EXTEND),// ->16258
/*16245*/         OPC_RecordChild0, // #0 = $src2
/*16246*/         OPC_MoveParent,
/*16247*/         OPC_RecordChild1, // #1 = $src1
/*16248*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                  // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*16258*/       /*SwitchOpcode*/ 13, TARGET_VAL(ISD::ZERO_EXTEND),// ->16274
/*16261*/         OPC_RecordChild0, // #0 = $src2
/*16262*/         OPC_MoveParent,
/*16263*/         OPC_RecordChild1, // #1 = $src1
/*16264*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                  // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*16274*/       0, // EndSwitchOpcode
/*16275*/     /*Scope*/ 35, /*->16311*/
/*16276*/       OPC_RecordChild0, // #0 = $src1
/*16277*/       OPC_MoveChild, 1,
/*16279*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*16282*/       OPC_RecordChild0, // #1 = $src2
/*16283*/       OPC_MoveChild, 1,
/*16285*/       OPC_CheckValueType, MVT::i32,
/*16287*/       OPC_MoveParent,
/*16288*/       OPC_MoveParent,
/*16289*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*16292*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*16301*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (add:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*16311*/     /*Scope*/ 35, /*->16347*/
/*16312*/       OPC_MoveChild, 0,
/*16314*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*16317*/       OPC_RecordChild0, // #0 = $src2
/*16318*/       OPC_MoveChild, 1,
/*16320*/       OPC_CheckValueType, MVT::i32,
/*16322*/       OPC_MoveParent,
/*16323*/       OPC_MoveParent,
/*16324*/       OPC_RecordChild1, // #1 = $src1
/*16325*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*16328*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*16337*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (add:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
                // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*16347*/     /*Scope*/ 28, /*->16376*/
/*16348*/       OPC_RecordChild0, // #0 = $R1src
/*16349*/       OPC_RecordChild1, // #1 = $R2
/*16350*/       OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->16363
/*16353*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (AR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*16363*/       /*SwitchType*/ 10, MVT::i64,// ->16375
/*16365*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (AGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*16375*/       0, // EndSwitchType
/*16376*/     0, /*End of Scope*/
/*16377*/   /*SwitchOpcode*/ 67|128,3/*451*/, TARGET_VAL(ISD::ADDC),// ->16832
/*16381*/     OPC_Scope, 104, /*->16487*/ // 7 children in Scope
/*16383*/       OPC_RecordChild0, // #0 = $R1src
/*16384*/       OPC_MoveChild, 1,
/*16386*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16389*/       OPC_RecordMemRef,
/*16390*/       OPC_RecordNode, // #1 = 'ld' chained node
/*16391*/       OPC_CheckFoldableChainNode,
/*16392*/       OPC_RecordChild1, // #2 = $XBD2
/*16393*/       OPC_CheckChild1Type, MVT::i64,
/*16395*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16397*/       OPC_Scope, 41, /*->16440*/ // 3 children in Scope
/*16399*/         OPC_CheckPredicate, 13, // Predicate_load
/*16401*/         OPC_MoveParent,
/*16402*/         OPC_CheckType, MVT::i32,
/*16404*/         OPC_Scope, 16, /*->16422*/ // 2 children in Scope
/*16406*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*16409*/           OPC_EmitMergeInputChains1_1,
/*16410*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*16422*/         /*Scope*/ 16, /*->16439*/
/*16423*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*16426*/           OPC_EmitMergeInputChains1_1,
/*16427*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*16439*/         0, /*End of Scope*/
/*16440*/       /*Scope*/ 23, /*->16464*/
/*16441*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*16443*/         OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*16445*/         OPC_MoveParent,
/*16446*/         OPC_CheckType, MVT::i64,
/*16448*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16451*/         OPC_EmitMergeInputChains1_1,
/*16452*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>) - Complexity = 19
                  // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*16464*/       /*Scope*/ 21, /*->16486*/
/*16465*/         OPC_CheckPredicate, 13, // Predicate_load
/*16467*/         OPC_MoveParent,
/*16468*/         OPC_CheckType, MVT::i64,
/*16470*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16473*/         OPC_EmitMergeInputChains1_1,
/*16474*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*16486*/       0, /*End of Scope*/
/*16487*/     /*Scope*/ 106, /*->16594*/
/*16488*/       OPC_MoveChild, 0,
/*16490*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16493*/       OPC_RecordMemRef,
/*16494*/       OPC_RecordNode, // #0 = 'ld' chained node
/*16495*/       OPC_CheckFoldableChainNode,
/*16496*/       OPC_RecordChild1, // #1 = $XBD2
/*16497*/       OPC_CheckChild1Type, MVT::i64,
/*16499*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16501*/       OPC_Scope, 42, /*->16545*/ // 3 children in Scope
/*16503*/         OPC_CheckPredicate, 13, // Predicate_load
/*16505*/         OPC_MoveParent,
/*16506*/         OPC_RecordChild1, // #2 = $R1src
/*16507*/         OPC_CheckType, MVT::i32,
/*16509*/         OPC_Scope, 16, /*->16527*/ // 2 children in Scope
/*16511*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*16514*/           OPC_EmitMergeInputChains1_0,
/*16515*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (addc:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*16527*/         /*Scope*/ 16, /*->16544*/
/*16528*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*16531*/           OPC_EmitMergeInputChains1_0,
/*16532*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (addc:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*16544*/         0, /*End of Scope*/
/*16545*/       /*Scope*/ 24, /*->16570*/
/*16546*/         OPC_CheckPredicate, 38, // Predicate_azextload
/*16548*/         OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*16550*/         OPC_MoveParent,
/*16551*/         OPC_RecordChild1, // #2 = $R1src
/*16552*/         OPC_CheckType, MVT::i64,
/*16554*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16557*/         OPC_EmitMergeInputChains1_0,
/*16558*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*16570*/       /*Scope*/ 22, /*->16593*/
/*16571*/         OPC_CheckPredicate, 13, // Predicate_load
/*16573*/         OPC_MoveParent,
/*16574*/         OPC_RecordChild1, // #2 = $R1src
/*16575*/         OPC_CheckType, MVT::i64,
/*16577*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16580*/         OPC_EmitMergeInputChains1_0,
/*16581*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*16593*/       0, /*End of Scope*/
/*16594*/     /*Scope*/ 35, /*->16630*/
/*16595*/       OPC_RecordChild0, // #0 = $src1
/*16596*/       OPC_MoveChild, 1,
/*16598*/       OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*16604*/       OPC_RecordChild0, // #1 = $src2
/*16605*/       OPC_MoveParent,
/*16606*/       OPC_CheckType, MVT::i64,
/*16608*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*16611*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*16620*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (addc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*16630*/     /*Scope*/ 35, /*->16666*/
/*16631*/       OPC_MoveChild, 0,
/*16633*/       OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*16639*/       OPC_RecordChild0, // #0 = $src2
/*16640*/       OPC_MoveParent,
/*16641*/       OPC_RecordChild1, // #1 = $src1
/*16642*/       OPC_CheckType, MVT::i64,
/*16644*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*16647*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*16656*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (addc:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*16666*/     /*Scope*/ 116, /*->16783*/
/*16667*/       OPC_RecordChild0, // #0 = $R3
/*16668*/       OPC_Scope, 94, /*->16764*/ // 2 children in Scope
/*16670*/         OPC_RecordChild1, // #1 = $I2
/*16671*/         OPC_MoveChild, 1,
/*16673*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16676*/         OPC_Scope, 22, /*->16700*/ // 4 children in Scope
/*16678*/           OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*16680*/           OPC_MoveParent,
/*16681*/           OPC_CheckType, MVT::i32,
/*16683*/           OPC_CheckPatternPredicate, 4, // (Subtarget->hasDistinctOps())
/*16685*/           OPC_EmitConvertToTarget, 1,
/*16687*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*16690*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALHSIK), 0|OPFL_GlueOutput,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (addc:i32 GR32:i32:$R3, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (ALHSIK:i32:i32 GR32:i32:$R3, (SIMM16:i32 (imm:i32):$I2))
/*16700*/         /*Scope*/ 22, /*->16723*/
/*16701*/           OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*16703*/           OPC_MoveParent,
/*16704*/           OPC_CheckType, MVT::i64,
/*16706*/           OPC_CheckPatternPredicate, 4, // (Subtarget->hasDistinctOps())
/*16708*/           OPC_EmitConvertToTarget, 1,
/*16710*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*16713*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGHSIK), 0|OPFL_GlueOutput,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (addc:i64 GR64:i64:$R3, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (ALGHSIK:i64:i32 GR64:i64:$R3, (SIMM16:i64 (imm:i64):$I2))
/*16723*/         /*Scope*/ 20, /*->16744*/
/*16724*/           OPC_CheckPredicate, 64, // Predicate_imm64zx32
/*16726*/           OPC_MoveParent,
/*16727*/           OPC_CheckType, MVT::i64,
/*16729*/           OPC_EmitConvertToTarget, 1,
/*16731*/           OPC_EmitNodeXForm, 5, 2, // UIMM32
/*16734*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0|OPFL_GlueOutput,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (addc:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                    // Dst: (ALGFI:i64:i32 GR64:i64:$R1src, (UIMM32:i64 (imm:i64):$I2))
/*16744*/         /*Scope*/ 18, /*->16763*/
/*16745*/           OPC_MoveParent,
/*16746*/           OPC_CheckType, MVT::i32,
/*16748*/           OPC_EmitConvertToTarget, 1,
/*16750*/           OPC_EmitNodeXForm, 5, 2, // UIMM32
/*16753*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALFI), 0|OPFL_GlueOutput,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (addc:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                    // Dst: (ALFI:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*16763*/         0, /*End of Scope*/
/*16764*/       /*Scope*/ 17, /*->16782*/
/*16765*/         OPC_MoveChild, 1,
/*16767*/         OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*16770*/         OPC_RecordChild0, // #1 = $src2
/*16771*/         OPC_MoveParent,
/*16772*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*16782*/       0, /*End of Scope*/
/*16783*/     /*Scope*/ 18, /*->16802*/
/*16784*/       OPC_MoveChild, 0,
/*16786*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*16789*/       OPC_RecordChild0, // #0 = $src2
/*16790*/       OPC_MoveParent,
/*16791*/       OPC_RecordChild1, // #1 = $src1
/*16792*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (addc:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*16802*/     /*Scope*/ 28, /*->16831*/
/*16803*/       OPC_RecordChild0, // #0 = $R1src
/*16804*/       OPC_RecordChild1, // #1 = $R2
/*16805*/       OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->16818
/*16808*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (ALR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*16818*/       /*SwitchType*/ 10, MVT::i64,// ->16830
/*16820*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (ALGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*16830*/       0, // EndSwitchType
/*16831*/     0, /*End of Scope*/
/*16832*/   /*SwitchOpcode*/ 16|128,1/*144*/, TARGET_VAL(ISD::ADDE),// ->16980
/*16836*/     OPC_CaptureGlueInput,
/*16837*/     OPC_Scope, 55, /*->16894*/ // 3 children in Scope
/*16839*/       OPC_RecordChild0, // #0 = $R1src
/*16840*/       OPC_MoveChild, 1,
/*16842*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16845*/       OPC_RecordMemRef,
/*16846*/       OPC_RecordNode, // #1 = 'ld' chained node
/*16847*/       OPC_CheckFoldableChainNode,
/*16848*/       OPC_RecordChild1, // #2 = $XBD2
/*16849*/       OPC_CheckChild1Type, MVT::i64,
/*16851*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16853*/       OPC_CheckPredicate, 13, // Predicate_load
/*16855*/       OPC_MoveParent,
/*16856*/       OPC_SwitchType /*2 cases */, 16, MVT::i32,// ->16875
/*16859*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16862*/         OPC_EmitMergeInputChains1_1,
/*16863*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (adde:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
/*16875*/       /*SwitchType*/ 16, MVT::i64,// ->16893
/*16877*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16880*/         OPC_EmitMergeInputChains1_1,
/*16881*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (adde:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*16893*/       0, // EndSwitchType
/*16894*/     /*Scope*/ 55, /*->16950*/
/*16895*/       OPC_MoveChild, 0,
/*16897*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16900*/       OPC_RecordMemRef,
/*16901*/       OPC_RecordNode, // #0 = 'ld' chained node
/*16902*/       OPC_CheckFoldableChainNode,
/*16903*/       OPC_RecordChild1, // #1 = $XBD2
/*16904*/       OPC_CheckChild1Type, MVT::i64,
/*16906*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*16908*/       OPC_CheckPredicate, 13, // Predicate_load
/*16910*/       OPC_MoveParent,
/*16911*/       OPC_RecordChild1, // #2 = $R1src
/*16912*/       OPC_SwitchType /*2 cases */, 16, MVT::i32,// ->16931
/*16915*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16918*/         OPC_EmitMergeInputChains1_0,
/*16919*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (adde:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
/*16931*/       /*SwitchType*/ 16, MVT::i64,// ->16949
/*16933*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*16936*/         OPC_EmitMergeInputChains1_0,
/*16937*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (adde:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*16949*/       0, // EndSwitchType
/*16950*/     /*Scope*/ 28, /*->16979*/
/*16951*/       OPC_RecordChild0, // #0 = $R1src
/*16952*/       OPC_RecordChild1, // #1 = $R2
/*16953*/       OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->16966
/*16956*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (adde:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (ALCR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*16966*/       /*SwitchType*/ 10, MVT::i64,// ->16978
/*16968*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCGR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (adde:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (ALCGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*16978*/       0, // EndSwitchType
/*16979*/     0, /*End of Scope*/
/*16980*/   /*SwitchOpcode*/ 60|128,1/*188*/, TARGET_VAL(ISD::SUBC),// ->17172
/*16984*/     OPC_RecordChild0, // #0 = $R1src
/*16985*/     OPC_Scope, 27|128,1/*155*/, /*->17143*/ // 2 children in Scope
/*16988*/       OPC_MoveChild, 1,
/*16990*/       OPC_Scope, 101, /*->17093*/ // 3 children in Scope
/*16992*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*16995*/         OPC_RecordMemRef,
/*16996*/         OPC_RecordNode, // #1 = 'ld' chained node
/*16997*/         OPC_CheckFoldableChainNode,
/*16998*/         OPC_RecordChild1, // #2 = $XBD2
/*16999*/         OPC_CheckChild1Type, MVT::i64,
/*17001*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*17003*/         OPC_Scope, 41, /*->17046*/ // 3 children in Scope
/*17005*/           OPC_CheckPredicate, 13, // Predicate_load
/*17007*/           OPC_MoveParent,
/*17008*/           OPC_CheckType, MVT::i32,
/*17010*/           OPC_Scope, 16, /*->17028*/ // 2 children in Scope
/*17012*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*17015*/             OPC_EmitMergeInputChains1_1,
/*17016*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::SL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (SL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*17028*/           /*Scope*/ 16, /*->17045*/
/*17029*/             OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*17032*/             OPC_EmitMergeInputChains1_1,
/*17033*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (SLY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*17045*/           0, /*End of Scope*/
/*17046*/         /*Scope*/ 23, /*->17070*/
/*17047*/           OPC_CheckPredicate, 38, // Predicate_azextload
/*17049*/           OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*17051*/           OPC_MoveParent,
/*17052*/           OPC_CheckType, MVT::i64,
/*17054*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*17057*/           OPC_EmitMergeInputChains1_1,
/*17058*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>>) - Complexity = 19
                    // Dst: (SLGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*17070*/         /*Scope*/ 21, /*->17092*/
/*17071*/           OPC_CheckPredicate, 13, // Predicate_load
/*17073*/           OPC_MoveParent,
/*17074*/           OPC_CheckType, MVT::i64,
/*17076*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*17079*/           OPC_EmitMergeInputChains1_1,
/*17080*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SLG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*17092*/         0, /*End of Scope*/
/*17093*/       /*Scope*/ 32, /*->17126*/
/*17094*/         OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17100*/         OPC_RecordChild0, // #1 = $src2
/*17101*/         OPC_MoveParent,
/*17102*/         OPC_CheckType, MVT::i64,
/*17104*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*17107*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*17116*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                  // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*17126*/       /*Scope*/ 15, /*->17142*/
/*17127*/         OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*17130*/         OPC_RecordChild0, // #1 = $src2
/*17131*/         OPC_MoveParent,
/*17132*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*17142*/       0, /*End of Scope*/
/*17143*/     /*Scope*/ 27, /*->17171*/
/*17144*/       OPC_RecordChild1, // #1 = $R2
/*17145*/       OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->17158
/*17148*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (SLR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*17158*/       /*SwitchType*/ 10, MVT::i64,// ->17170
/*17160*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGR), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (SLGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*17170*/       0, // EndSwitchType
/*17171*/     0, /*End of Scope*/
/*17172*/   /*SwitchOpcode*/ 87, TARGET_VAL(ISD::SUBE),// ->17262
/*17175*/     OPC_CaptureGlueInput,
/*17176*/     OPC_RecordChild0, // #0 = $R1src
/*17177*/     OPC_Scope, 54, /*->17233*/ // 2 children in Scope
/*17179*/       OPC_MoveChild, 1,
/*17181*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*17184*/       OPC_RecordMemRef,
/*17185*/       OPC_RecordNode, // #1 = 'ld' chained node
/*17186*/       OPC_CheckFoldableChainNode,
/*17187*/       OPC_RecordChild1, // #2 = $XBD2
/*17188*/       OPC_CheckChild1Type, MVT::i64,
/*17190*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*17192*/       OPC_CheckPredicate, 13, // Predicate_load
/*17194*/       OPC_MoveParent,
/*17195*/       OPC_SwitchType /*2 cases */, 16, MVT::i32,// ->17214
/*17198*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*17201*/         OPC_EmitMergeInputChains1_1,
/*17202*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLB), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sube:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLB:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
/*17214*/       /*SwitchType*/ 16, MVT::i64,// ->17232
/*17216*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*17219*/         OPC_EmitMergeInputChains1_1,
/*17220*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sube:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLBG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*17232*/       0, // EndSwitchType
/*17233*/     /*Scope*/ 27, /*->17261*/
/*17234*/       OPC_RecordChild1, // #1 = $R2
/*17235*/       OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->17248
/*17238*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sube:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (SLBR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*17248*/       /*SwitchType*/ 10, MVT::i64,// ->17260
/*17250*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sube:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (SLGBR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*17260*/       0, // EndSwitchType
/*17261*/     0, /*End of Scope*/
/*17262*/   /*SwitchOpcode*/ 113|128,4/*625*/, TARGET_VAL(ISD::AND),// ->17891
/*17266*/     OPC_Scope, 75, /*->17343*/ // 8 children in Scope
/*17268*/       OPC_RecordChild0, // #0 = $R1src
/*17269*/       OPC_MoveChild, 1,
/*17271*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*17274*/       OPC_RecordMemRef,
/*17275*/       OPC_RecordNode, // #1 = 'ld' chained node
/*17276*/       OPC_CheckFoldableChainNode,
/*17277*/       OPC_RecordChild1, // #2 = $XBD2
/*17278*/       OPC_CheckChild1Type, MVT::i64,
/*17280*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*17282*/       OPC_CheckPredicate, 13, // Predicate_load
/*17284*/       OPC_MoveParent,
/*17285*/       OPC_SwitchType /*2 cases */, 36, MVT::i32,// ->17324
/*17288*/         OPC_Scope, 16, /*->17306*/ // 2 children in Scope
/*17290*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*17293*/           OPC_EmitMergeInputChains1_1,
/*17294*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*17306*/         /*Scope*/ 16, /*->17323*/
/*17307*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*17310*/           OPC_EmitMergeInputChains1_1,
/*17311*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*17323*/         0, /*End of Scope*/
/*17324*/       /*SwitchType*/ 16, MVT::i64,// ->17342
/*17326*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*17329*/         OPC_EmitMergeInputChains1_1,
/*17330*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*17342*/       0, // EndSwitchType
/*17343*/     /*Scope*/ 75, /*->17419*/
/*17344*/       OPC_MoveChild, 0,
/*17346*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*17349*/       OPC_RecordMemRef,
/*17350*/       OPC_RecordNode, // #0 = 'ld' chained node
/*17351*/       OPC_CheckFoldableChainNode,
/*17352*/       OPC_RecordChild1, // #1 = $XBD2
/*17353*/       OPC_CheckChild1Type, MVT::i64,
/*17355*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*17357*/       OPC_CheckPredicate, 13, // Predicate_load
/*17359*/       OPC_MoveParent,
/*17360*/       OPC_RecordChild1, // #2 = $R1src
/*17361*/       OPC_SwitchType /*2 cases */, 36, MVT::i32,// ->17400
/*17364*/         OPC_Scope, 16, /*->17382*/ // 2 children in Scope
/*17366*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*17369*/           OPC_EmitMergeInputChains1_0,
/*17370*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (and:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*17382*/         /*Scope*/ 16, /*->17399*/
/*17383*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*17386*/           OPC_EmitMergeInputChains1_0,
/*17387*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (and:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*17399*/         0, /*End of Scope*/
/*17400*/       /*SwitchType*/ 16, MVT::i64,// ->17418
/*17402*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*17405*/         OPC_EmitMergeInputChains1_0,
/*17406*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*17418*/       0, // EndSwitchType
/*17419*/     /*Scope*/ 28, /*->17448*/
/*17420*/       OPC_CheckAndImm, 127|128,1/*255*/, 
/*17423*/       OPC_RecordChild0, // #0 = $R2
/*17424*/       OPC_CheckType, MVT::i32,
/*17426*/       OPC_Scope, 10, /*->17438*/ // 2 children in Scope
/*17428*/         OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*17430*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCRMux), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (and:i32 GRX32:i32:$R2, 255:i32) - Complexity = 8
                  // Dst: (LLCRMux:i32 GRX32:i32:$R2)
/*17438*/       /*Scope*/ 8, /*->17447*/
/*17439*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCR), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (and:i32 GR32:i32:$R2, 255:i32) - Complexity = 8
                  // Dst: (LLCR:i32 GR32:i32:$R2)
/*17447*/       0, /*End of Scope*/
/*17448*/     /*Scope*/ 29, /*->17478*/
/*17449*/       OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*17453*/       OPC_RecordChild0, // #0 = $R2
/*17454*/       OPC_CheckType, MVT::i32,
/*17456*/       OPC_Scope, 10, /*->17468*/ // 2 children in Scope
/*17458*/         OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*17460*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRMux), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (and:i32 GRX32:i32:$R2, 65535:i32) - Complexity = 8
                  // Dst: (LLHRMux:i32 GRX32:i32:$R2)
/*17468*/       /*Scope*/ 8, /*->17477*/
/*17469*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHR), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (and:i32 GR32:i32:$R2, 65535:i32) - Complexity = 8
                  // Dst: (LLHR:i32 GR32:i32:$R2)
/*17477*/       0, /*End of Scope*/
/*17478*/     /*Scope*/ 14, /*->17493*/
/*17479*/       OPC_CheckAndImm, 127|128,1/*255*/, 
/*17482*/       OPC_RecordChild0, // #0 = $R2
/*17483*/       OPC_CheckType, MVT::i64,
/*17485*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGCR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (and:i64 GR64:i64:$R2, 255:i64) - Complexity = 8
                // Dst: (LLGCR:i64 GR64:i64:$R2)
/*17493*/     /*Scope*/ 15, /*->17509*/
/*17494*/       OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*17498*/       OPC_RecordChild0, // #0 = $R2
/*17499*/       OPC_CheckType, MVT::i64,
/*17501*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (and:i64 GR64:i64:$R2, 65535:i64) - Complexity = 8
                // Dst: (LLGHR:i64 GR64:i64:$R2)
/*17509*/     /*Scope*/ 29, /*->17539*/
/*17510*/       OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17516*/       OPC_RecordChild0, // #0 = $src
/*17517*/       OPC_CheckType, MVT::i64,
/*17519*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*17522*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*17531*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (and:i64 GR64:i64:$src, 4294967295:i64) - Complexity = 8
                // Dst: (LLGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*17539*/     /*Scope*/ 93|128,2/*349*/, /*->17890*/
/*17541*/       OPC_RecordChild0, // #0 = $R1src
/*17542*/       OPC_RecordChild1, // #1 = $I2
/*17543*/       OPC_Scope, 61|128,2/*317*/, /*->17863*/ // 3 children in Scope
/*17546*/         OPC_MoveChild, 1,
/*17548*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17551*/         OPC_Scope, 22, /*->17575*/ // 13 children in Scope
/*17553*/           OPC_CheckPredicate, 66, // Predicate_imm32ll16c
/*17555*/           OPC_MoveParent,
/*17556*/           OPC_CheckType, MVT::i32,
/*17558*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*17560*/           OPC_EmitConvertToTarget, 1,
/*17562*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*17565*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILMux), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GRX32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (NILMux:i32:i32 GRX32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*17575*/         /*Scope*/ 22, /*->17598*/
/*17576*/           OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*17578*/           OPC_MoveParent,
/*17579*/           OPC_CheckType, MVT::i32,
/*17581*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*17583*/           OPC_EmitConvertToTarget, 1,
/*17585*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*17588*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHMux), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GRX32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (NIHMux:i32:i32 GRX32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*17598*/         /*Scope*/ 20, /*->17619*/
/*17599*/           OPC_CheckPredicate, 66, // Predicate_imm32ll16c
/*17601*/           OPC_MoveParent,
/*17602*/           OPC_CheckType, MVT::i32,
/*17604*/           OPC_EmitConvertToTarget, 1,
/*17606*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*17609*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (NILL:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*17619*/         /*Scope*/ 20, /*->17640*/
/*17620*/           OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*17622*/           OPC_MoveParent,
/*17623*/           OPC_CheckType, MVT::i32,
/*17625*/           OPC_EmitConvertToTarget, 1,
/*17627*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*17630*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (NILH:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*17640*/         /*Scope*/ 20, /*->17661*/
/*17641*/           OPC_CheckPredicate, 66, // Predicate_imm32ll16c
/*17643*/           OPC_MoveParent,
/*17644*/           OPC_CheckType, MVT::i32,
/*17646*/           OPC_EmitConvertToTarget, 1,
/*17648*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*17651*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GRH32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (NIHL:i32:i32 GRH32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*17661*/         /*Scope*/ 20, /*->17682*/
/*17662*/           OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*17664*/           OPC_MoveParent,
/*17665*/           OPC_CheckType, MVT::i32,
/*17667*/           OPC_EmitConvertToTarget, 1,
/*17669*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*17672*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GRH32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (NIHH:i32:i32 GRH32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*17682*/         /*Scope*/ 20, /*->17703*/
/*17683*/           OPC_CheckPredicate, 68, // Predicate_imm64ll16c
/*17685*/           OPC_MoveParent,
/*17686*/           OPC_CheckType, MVT::i64,
/*17688*/           OPC_EmitConvertToTarget, 1,
/*17690*/           OPC_EmitNodeXForm, 6, 2, // LL16
/*17693*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$I2) - Complexity = 7
                    // Dst: (NILL64:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*17703*/         /*Scope*/ 20, /*->17724*/
/*17704*/           OPC_CheckPredicate, 69, // Predicate_imm64lh16c
/*17706*/           OPC_MoveParent,
/*17707*/           OPC_CheckType, MVT::i64,
/*17709*/           OPC_EmitConvertToTarget, 1,
/*17711*/           OPC_EmitNodeXForm, 7, 2, // LH16
/*17714*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$I2) - Complexity = 7
                    // Dst: (NILH64:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*17724*/         /*Scope*/ 20, /*->17745*/
/*17725*/           OPC_CheckPredicate, 70, // Predicate_imm64hl16c
/*17727*/           OPC_MoveParent,
/*17728*/           OPC_CheckType, MVT::i64,
/*17730*/           OPC_EmitConvertToTarget, 1,
/*17732*/           OPC_EmitNodeXForm, 8, 2, // HL16
/*17735*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$I2) - Complexity = 7
                    // Dst: (NIHL64:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*17745*/         /*Scope*/ 20, /*->17766*/
/*17746*/           OPC_CheckPredicate, 71, // Predicate_imm64hh16c
/*17748*/           OPC_MoveParent,
/*17749*/           OPC_CheckType, MVT::i64,
/*17751*/           OPC_EmitConvertToTarget, 1,
/*17753*/           OPC_EmitNodeXForm, 9, 2, // HH16
/*17756*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$I2) - Complexity = 7
                    // Dst: (NIHH64:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*17766*/         /*Scope*/ 20, /*->17787*/
/*17767*/           OPC_CheckPredicate, 72, // Predicate_imm64lf32c
/*17769*/           OPC_MoveParent,
/*17770*/           OPC_CheckType, MVT::i64,
/*17772*/           OPC_EmitConvertToTarget, 1,
/*17774*/           OPC_EmitNodeXForm, 3, 2, // LF32
/*17777*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$I2) - Complexity = 7
                    // Dst: (NILF64:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*17787*/         /*Scope*/ 20, /*->17808*/
/*17788*/           OPC_CheckPredicate, 73, // Predicate_imm64hf32c
/*17790*/           OPC_MoveParent,
/*17791*/           OPC_CheckType, MVT::i64,
/*17793*/           OPC_EmitConvertToTarget, 1,
/*17795*/           OPC_EmitNodeXForm, 4, 2, // HF32
/*17798*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF64), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$I2) - Complexity = 7
                    // Dst: (NIHF64:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*17808*/         /*Scope*/ 53, /*->17862*/
/*17809*/           OPC_MoveParent,
/*17810*/           OPC_CheckType, MVT::i32,
/*17812*/           OPC_Scope, 17, /*->17831*/ // 2 children in Scope
/*17814*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*17816*/             OPC_EmitConvertToTarget, 1,
/*17818*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*17821*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIFMux), 0,
                          2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                      // Src: (and:i32 GRX32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                      // Dst: (NIFMux:i32:i32 GRX32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*17831*/           /*Scope*/ 29, /*->17861*/
/*17832*/             OPC_EmitConvertToTarget, 1,
/*17834*/             OPC_EmitNodeXForm, 5, 2, // UIMM32
/*17837*/             OPC_Scope, 10, /*->17849*/ // 2 children in Scope
/*17839*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                        // Dst: (NILF:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*17849*/             /*Scope*/ 10, /*->17860*/
/*17850*/               OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF), 0,
                            2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                        // Src: (and:i32 GRH32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                        // Dst: (NIHF:i32:i32 GRH32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*17860*/             0, /*End of Scope*/
/*17861*/           0, /*End of Scope*/
/*17862*/         0, /*End of Scope*/
/*17863*/       /*Scope*/ 12, /*->17876*/
/*17864*/         OPC_CheckType, MVT::i32,
/*17866*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (NR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*17876*/       /*Scope*/ 12, /*->17889*/
/*17877*/         OPC_CheckType, MVT::i64,
/*17879*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::NGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (NGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*17889*/       0, /*End of Scope*/
/*17890*/     0, /*End of Scope*/
/*17891*/   /*SwitchOpcode*/ 10|128,4/*522*/, TARGET_VAL(ISD::MUL),// ->18417
/*17895*/     OPC_Scope, 14|128,1/*142*/, /*->18040*/ // 7 children in Scope
/*17898*/       OPC_RecordChild0, // #0 = $R1src
/*17899*/       OPC_MoveChild, 1,
/*17901*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*17904*/       OPC_RecordMemRef,
/*17905*/       OPC_RecordNode, // #1 = 'ld' chained node
/*17906*/       OPC_CheckFoldableChainNode,
/*17907*/       OPC_RecordChild1, // #2 = $XBD2
/*17908*/       OPC_CheckChild1Type, MVT::i64,
/*17910*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*17912*/       OPC_Scope, 41, /*->17955*/ // 4 children in Scope
/*17914*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*17916*/         OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*17918*/         OPC_MoveParent,
/*17919*/         OPC_CheckType, MVT::i32,
/*17921*/         OPC_Scope, 15, /*->17938*/ // 2 children in Scope
/*17923*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*17926*/           OPC_EmitMergeInputChains1_1,
/*17927*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>) - Complexity = 19
                    // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*17938*/         /*Scope*/ 15, /*->17954*/
/*17939*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*17942*/           OPC_EmitMergeInputChains1_1,
/*17943*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>) - Complexity = 19
                    // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*17954*/         0, /*End of Scope*/
/*17955*/       /*Scope*/ 39, /*->17995*/
/*17956*/         OPC_CheckPredicate, 13, // Predicate_load
/*17958*/         OPC_MoveParent,
/*17959*/         OPC_CheckType, MVT::i32,
/*17961*/         OPC_Scope, 15, /*->17978*/ // 2 children in Scope
/*17963*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*17966*/           OPC_EmitMergeInputChains1_1,
/*17967*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*17978*/         /*Scope*/ 15, /*->17994*/
/*17979*/           OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*17982*/           OPC_EmitMergeInputChains1_1,
/*17983*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*17994*/         0, /*End of Scope*/
/*17995*/       /*Scope*/ 22, /*->18018*/
/*17996*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*17998*/         OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*18000*/         OPC_MoveParent,
/*18001*/         OPC_CheckType, MVT::i64,
/*18003*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18006*/         OPC_EmitMergeInputChains1_1,
/*18007*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>>) - Complexity = 19
                  // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*18018*/       /*Scope*/ 20, /*->18039*/
/*18019*/         OPC_CheckPredicate, 13, // Predicate_load
/*18021*/         OPC_MoveParent,
/*18022*/         OPC_CheckType, MVT::i64,
/*18024*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18027*/         OPC_EmitMergeInputChains1_1,
/*18028*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*18039*/       0, /*End of Scope*/
/*18040*/     /*Scope*/ 17|128,1/*145*/, /*->18187*/
/*18042*/       OPC_MoveChild, 0,
/*18044*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*18047*/       OPC_RecordMemRef,
/*18048*/       OPC_RecordNode, // #0 = 'ld' chained node
/*18049*/       OPC_CheckFoldableChainNode,
/*18050*/       OPC_RecordChild1, // #1 = $XBD2
/*18051*/       OPC_CheckChild1Type, MVT::i64,
/*18053*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18055*/       OPC_Scope, 42, /*->18099*/ // 4 children in Scope
/*18057*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*18059*/         OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*18061*/         OPC_MoveParent,
/*18062*/         OPC_RecordChild1, // #2 = $R1src
/*18063*/         OPC_CheckType, MVT::i32,
/*18065*/         OPC_Scope, 15, /*->18082*/ // 2 children in Scope
/*18067*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*18070*/           OPC_EmitMergeInputChains1_0,
/*18071*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*18082*/         /*Scope*/ 15, /*->18098*/
/*18083*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*18086*/           OPC_EmitMergeInputChains1_0,
/*18087*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*18098*/         0, /*End of Scope*/
/*18099*/       /*Scope*/ 40, /*->18140*/
/*18100*/         OPC_CheckPredicate, 13, // Predicate_load
/*18102*/         OPC_MoveParent,
/*18103*/         OPC_RecordChild1, // #2 = $R1src
/*18104*/         OPC_CheckType, MVT::i32,
/*18106*/         OPC_Scope, 15, /*->18123*/ // 2 children in Scope
/*18108*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*18111*/           OPC_EmitMergeInputChains1_0,
/*18112*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*18123*/         /*Scope*/ 15, /*->18139*/
/*18124*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*18127*/           OPC_EmitMergeInputChains1_0,
/*18128*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*18139*/         0, /*End of Scope*/
/*18140*/       /*Scope*/ 23, /*->18164*/
/*18141*/         OPC_CheckPredicate, 35, // Predicate_asextload
/*18143*/         OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*18145*/         OPC_MoveParent,
/*18146*/         OPC_RecordChild1, // #2 = $R1src
/*18147*/         OPC_CheckType, MVT::i64,
/*18149*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18152*/         OPC_EmitMergeInputChains1_0,
/*18153*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*18164*/       /*Scope*/ 21, /*->18186*/
/*18165*/         OPC_CheckPredicate, 13, // Predicate_load
/*18167*/         OPC_MoveParent,
/*18168*/         OPC_RecordChild1, // #2 = $R1src
/*18169*/         OPC_CheckType, MVT::i64,
/*18171*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18174*/         OPC_EmitMergeInputChains1_0,
/*18175*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*18186*/       0, /*End of Scope*/
/*18187*/     /*Scope*/ 113, /*->18301*/
/*18188*/       OPC_RecordChild0, // #0 = $R1src
/*18189*/       OPC_Scope, 68, /*->18259*/ // 3 children in Scope
/*18191*/         OPC_RecordChild1, // #1 = $I2
/*18192*/         OPC_MoveChild, 1,
/*18194*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18197*/         OPC_Scope, 19, /*->18218*/ // 3 children in Scope
/*18199*/           OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*18201*/           OPC_MoveParent,
/*18202*/           OPC_CheckType, MVT::i32,
/*18204*/           OPC_EmitConvertToTarget, 1,
/*18206*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*18209*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (MHI:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*18218*/         /*Scope*/ 19, /*->18238*/
/*18219*/           OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*18221*/           OPC_MoveParent,
/*18222*/           OPC_CheckType, MVT::i64,
/*18224*/           OPC_EmitConvertToTarget, 1,
/*18226*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*18229*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MGHI), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (MGHI:i64 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*18238*/         /*Scope*/ 19, /*->18258*/
/*18239*/           OPC_CheckPredicate, 63, // Predicate_imm64sx32
/*18241*/           OPC_MoveParent,
/*18242*/           OPC_CheckType, MVT::i64,
/*18244*/           OPC_EmitConvertToTarget, 1,
/*18246*/           OPC_EmitNodeXForm, 11, 2, // SIMM32
/*18249*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFI), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                    // Dst: (MSGFI:i64 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*18258*/         0, /*End of Scope*/
/*18259*/       /*Scope*/ 16, /*->18276*/
/*18260*/         OPC_MoveChild, 1,
/*18262*/         OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*18265*/         OPC_RecordChild0, // #1 = $src2
/*18266*/         OPC_MoveParent,
/*18267*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*18276*/       /*Scope*/ 23, /*->18300*/
/*18277*/         OPC_RecordChild1, // #1 = $I2
/*18278*/         OPC_MoveChild, 1,
/*18280*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18283*/         OPC_MoveParent,
/*18284*/         OPC_CheckType, MVT::i32,
/*18286*/         OPC_EmitConvertToTarget, 1,
/*18288*/         OPC_EmitNodeXForm, 11, 2, // SIMM32
/*18291*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSFI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                  // Dst: (MSFI:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*18300*/       0, /*End of Scope*/
/*18301*/     /*Scope*/ 17, /*->18319*/
/*18302*/       OPC_MoveChild, 0,
/*18304*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*18307*/       OPC_RecordChild0, // #0 = $src2
/*18308*/       OPC_MoveParent,
/*18309*/       OPC_RecordChild1, // #1 = $src1
/*18310*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*18319*/     /*Scope*/ 34, /*->18354*/
/*18320*/       OPC_RecordChild0, // #0 = $src1
/*18321*/       OPC_MoveChild, 1,
/*18323*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*18326*/       OPC_RecordChild0, // #1 = $src2
/*18327*/       OPC_MoveChild, 1,
/*18329*/       OPC_CheckValueType, MVT::i32,
/*18331*/       OPC_MoveParent,
/*18332*/       OPC_MoveParent,
/*18333*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*18336*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*18345*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (mul:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*18354*/     /*Scope*/ 34, /*->18389*/
/*18355*/       OPC_MoveChild, 0,
/*18357*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*18360*/       OPC_RecordChild0, // #0 = $src2
/*18361*/       OPC_MoveChild, 1,
/*18363*/       OPC_CheckValueType, MVT::i32,
/*18365*/       OPC_MoveParent,
/*18366*/       OPC_MoveParent,
/*18367*/       OPC_RecordChild1, // #1 = $src1
/*18368*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*18371*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*18380*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
                // Src: (mul:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_l32:i32))
/*18389*/     /*Scope*/ 26, /*->18416*/
/*18390*/       OPC_RecordChild0, // #0 = $R1src
/*18391*/       OPC_RecordChild1, // #1 = $R2
/*18392*/       OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->18404
/*18395*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (mul:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (MSR:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*18404*/       /*SwitchType*/ 9, MVT::i64,// ->18415
/*18406*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (mul:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (MSGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
/*18415*/       0, // EndSwitchType
/*18416*/     0, /*End of Scope*/
/*18417*/   /*SwitchOpcode*/ 46, TARGET_VAL(SystemZISD::UMUL_LOHI64),// ->18466
/*18420*/     OPC_RecordChild0, // #0 = $R1src
/*18421*/     OPC_Scope, 31, /*->18454*/ // 2 children in Scope
/*18423*/       OPC_MoveChild, 1,
/*18425*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*18428*/       OPC_RecordMemRef,
/*18429*/       OPC_RecordNode, // #1 = 'ld' chained node
/*18430*/       OPC_CheckFoldableChainNode,
/*18431*/       OPC_RecordChild1, // #2 = $XBD2
/*18432*/       OPC_CheckChild1Type, MVT::i64,
/*18434*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18436*/       OPC_CheckPredicate, 13, // Predicate_load
/*18438*/       OPC_MoveParent,
/*18439*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18442*/       OPC_EmitMergeInputChains1_1,
/*18443*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*18454*/     /*Scope*/ 10, /*->18465*/
/*18455*/       OPC_RecordChild1, // #1 = $R2
/*18456*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLGR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (MLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*18465*/     0, /*End of Scope*/
/*18466*/   /*SwitchOpcode*/ 46, TARGET_VAL(SystemZISD::SDIVREM32),// ->18515
/*18469*/     OPC_RecordChild0, // #0 = $R1src
/*18470*/     OPC_Scope, 31, /*->18503*/ // 2 children in Scope
/*18472*/       OPC_MoveChild, 1,
/*18474*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*18477*/       OPC_RecordMemRef,
/*18478*/       OPC_RecordNode, // #1 = 'ld' chained node
/*18479*/       OPC_CheckFoldableChainNode,
/*18480*/       OPC_RecordChild1, // #2 = $XBD2
/*18481*/       OPC_CheckChild1Type, MVT::i64,
/*18483*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18485*/       OPC_CheckPredicate, 13, // Predicate_load
/*18487*/       OPC_MoveParent,
/*18488*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18491*/       OPC_EmitMergeInputChains1_1,
/*18492*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DSGF:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*18503*/     /*Scope*/ 10, /*->18514*/
/*18504*/       OPC_RecordChild1, // #1 = $R2
/*18505*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (DSGFR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*18514*/     0, /*End of Scope*/
/*18515*/   /*SwitchOpcode*/ 46, TARGET_VAL(SystemZISD::SDIVREM64),// ->18564
/*18518*/     OPC_RecordChild0, // #0 = $R1src
/*18519*/     OPC_Scope, 31, /*->18552*/ // 2 children in Scope
/*18521*/       OPC_MoveChild, 1,
/*18523*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*18526*/       OPC_RecordMemRef,
/*18527*/       OPC_RecordNode, // #1 = 'ld' chained node
/*18528*/       OPC_CheckFoldableChainNode,
/*18529*/       OPC_RecordChild1, // #2 = $XBD2
/*18530*/       OPC_CheckChild1Type, MVT::i64,
/*18532*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18534*/       OPC_CheckPredicate, 13, // Predicate_load
/*18536*/       OPC_MoveParent,
/*18537*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18540*/       OPC_EmitMergeInputChains1_1,
/*18541*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DSG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*18552*/     /*Scope*/ 10, /*->18563*/
/*18553*/       OPC_RecordChild1, // #1 = $R2
/*18554*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (DSGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*18563*/     0, /*End of Scope*/
/*18564*/   /*SwitchOpcode*/ 46, TARGET_VAL(SystemZISD::UDIVREM32),// ->18613
/*18567*/     OPC_RecordChild0, // #0 = $R1src
/*18568*/     OPC_Scope, 31, /*->18601*/ // 2 children in Scope
/*18570*/       OPC_MoveChild, 1,
/*18572*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*18575*/       OPC_RecordMemRef,
/*18576*/       OPC_RecordNode, // #1 = 'ld' chained node
/*18577*/       OPC_CheckFoldableChainNode,
/*18578*/       OPC_RecordChild1, // #2 = $XBD2
/*18579*/       OPC_CheckChild1Type, MVT::i64,
/*18581*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18583*/       OPC_CheckPredicate, 13, // Predicate_load
/*18585*/       OPC_MoveParent,
/*18586*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18589*/       OPC_EmitMergeInputChains1_1,
/*18590*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DL:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*18601*/     /*Scope*/ 10, /*->18612*/
/*18602*/       OPC_RecordChild1, // #1 = $R2
/*18603*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (DLR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*18612*/     0, /*End of Scope*/
/*18613*/   /*SwitchOpcode*/ 46, TARGET_VAL(SystemZISD::UDIVREM64),// ->18662
/*18616*/     OPC_RecordChild0, // #0 = $R1src
/*18617*/     OPC_Scope, 31, /*->18650*/ // 2 children in Scope
/*18619*/       OPC_MoveChild, 1,
/*18621*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*18624*/       OPC_RecordMemRef,
/*18625*/       OPC_RecordNode, // #1 = 'ld' chained node
/*18626*/       OPC_CheckFoldableChainNode,
/*18627*/       OPC_RecordChild1, // #2 = $XBD2
/*18628*/       OPC_CheckChild1Type, MVT::i64,
/*18630*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18632*/       OPC_CheckPredicate, 13, // Predicate_load
/*18634*/       OPC_MoveParent,
/*18635*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*18638*/       OPC_EmitMergeInputChains1_1,
/*18639*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*18650*/     /*Scope*/ 10, /*->18661*/
/*18651*/       OPC_RecordChild1, // #1 = $R2
/*18652*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLGR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (DLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*18661*/     0, /*End of Scope*/
/*18662*/   /*SwitchOpcode*/ 87|128,1/*215*/, TARGET_VAL(SystemZISD::FCMP),// ->18881
/*18666*/     OPC_RecordChild0, // #0 = $R1
/*18667*/     OPC_Scope, 80, /*->18749*/ // 3 children in Scope
/*18669*/       OPC_CheckChild0Type, MVT::f32,
/*18671*/       OPC_Scope, 64, /*->18737*/ // 2 children in Scope
/*18673*/         OPC_MoveChild, 1,
/*18675*/         OPC_SwitchOpcode /*2 cases */, 26, TARGET_VAL(ISD::LOAD),// ->18705
/*18679*/           OPC_RecordMemRef,
/*18680*/           OPC_RecordNode, // #1 = 'ld' chained node
/*18681*/           OPC_CheckFoldableChainNode,
/*18682*/           OPC_RecordChild1, // #2 = $XBD2
/*18683*/           OPC_CheckChild1Type, MVT::i64,
/*18685*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18687*/           OPC_CheckPredicate, 13, // Predicate_load
/*18689*/           OPC_MoveParent,
/*18690*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*18693*/           OPC_EmitMergeInputChains1_1,
/*18694*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_fcmp FP32:f32:$R1, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CEB:i32 FP32:f32:$R1, bdxaddr12only:i64:$XBD2)
/*18705*/         /*SwitchOpcode*/ 28, TARGET_VAL(ISD::ConstantFP),// ->18736
/*18708*/           OPC_Scope, 12, /*->18722*/ // 2 children in Scope
/*18710*/             OPC_CheckPredicate, 74, // Predicate_fpimm0
/*18712*/             OPC_MoveParent,
/*18713*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTEBRCompare), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                      // Src: (z_fcmp FP32:f32:$reg, (fpimm:f32)<<P:Predicate_fpimm0>>) - Complexity = 7
                      // Dst: (LTEBRCompare:i32 FP32:f32:$reg, FP32:f32:$reg)
/*18722*/           /*Scope*/ 12, /*->18735*/
/*18723*/             OPC_CheckPredicate, 75, // Predicate_fpimmneg0
/*18725*/             OPC_MoveParent,
/*18726*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTEBRCompare), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                      // Src: (z_fcmp FP32:f32:$reg, (fpimm:f32)<<P:Predicate_fpimmneg0>>) - Complexity = 7
                      // Dst: (LTEBRCompare:i32 FP32:f32:$reg, FP32:f32:$reg)
/*18735*/           0, /*End of Scope*/
/*18736*/         0, // EndSwitchOpcode
/*18737*/       /*Scope*/ 10, /*->18748*/
/*18738*/         OPC_RecordChild1, // #1 = $R2
/*18739*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEBR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_fcmp FP32:f32:$R1, FP32:f32:$R2) - Complexity = 3
                  // Dst: (CEBR:i32 FP32:f32:$R1, FP32:f32:$R2)
/*18748*/       0, /*End of Scope*/
/*18749*/     /*Scope*/ 80, /*->18830*/
/*18750*/       OPC_CheckChild0Type, MVT::f64,
/*18752*/       OPC_Scope, 64, /*->18818*/ // 2 children in Scope
/*18754*/         OPC_MoveChild, 1,
/*18756*/         OPC_SwitchOpcode /*2 cases */, 26, TARGET_VAL(ISD::LOAD),// ->18786
/*18760*/           OPC_RecordMemRef,
/*18761*/           OPC_RecordNode, // #1 = 'ld' chained node
/*18762*/           OPC_CheckFoldableChainNode,
/*18763*/           OPC_RecordChild1, // #2 = $XBD2
/*18764*/           OPC_CheckChild1Type, MVT::i64,
/*18766*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*18768*/           OPC_CheckPredicate, 13, // Predicate_load
/*18770*/           OPC_MoveParent,
/*18771*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*18774*/           OPC_EmitMergeInputChains1_1,
/*18775*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_fcmp FP64:f64:$R1, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CDB:i32 FP64:f64:$R1, bdxaddr12only:i64:$XBD2)
/*18786*/         /*SwitchOpcode*/ 28, TARGET_VAL(ISD::ConstantFP),// ->18817
/*18789*/           OPC_Scope, 12, /*->18803*/ // 2 children in Scope
/*18791*/             OPC_CheckPredicate, 74, // Predicate_fpimm0
/*18793*/             OPC_MoveParent,
/*18794*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTDBRCompare), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                      // Src: (z_fcmp FP64:f64:$reg, (fpimm:f64)<<P:Predicate_fpimm0>>) - Complexity = 7
                      // Dst: (LTDBRCompare:i32 FP64:f64:$reg, FP64:f64:$reg)
/*18803*/           /*Scope*/ 12, /*->18816*/
/*18804*/             OPC_CheckPredicate, 75, // Predicate_fpimmneg0
/*18806*/             OPC_MoveParent,
/*18807*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTDBRCompare), 0|OPFL_GlueOutput,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                      // Src: (z_fcmp FP64:f64:$reg, (fpimm:f64)<<P:Predicate_fpimmneg0>>) - Complexity = 7
                      // Dst: (LTDBRCompare:i32 FP64:f64:$reg, FP64:f64:$reg)
/*18816*/           0, /*End of Scope*/
/*18817*/         0, // EndSwitchOpcode
/*18818*/       /*Scope*/ 10, /*->18829*/
/*18819*/         OPC_RecordChild1, // #1 = $R2
/*18820*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDBR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_fcmp FP64:f64:$R1, FP64:f64:$R2) - Complexity = 3
                  // Dst: (CDBR:i32 FP64:f64:$R1, FP64:f64:$R2)
/*18829*/       0, /*End of Scope*/
/*18830*/     /*Scope*/ 49, /*->18880*/
/*18831*/       OPC_CheckChild0Type, MVT::f128,
/*18833*/       OPC_Scope, 33, /*->18868*/ // 2 children in Scope
/*18835*/         OPC_MoveChild, 1,
/*18837*/         OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*18840*/         OPC_Scope, 12, /*->18854*/ // 2 children in Scope
/*18842*/           OPC_CheckPredicate, 74, // Predicate_fpimm0
/*18844*/           OPC_MoveParent,
/*18845*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTXBRCompare), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                    // Src: (z_fcmp FP128:f128:$reg, (fpimm:f128)<<P:Predicate_fpimm0>>) - Complexity = 7
                    // Dst: (LTXBRCompare:i32 FP128:f128:$reg, FP128:f128:$reg)
/*18854*/         /*Scope*/ 12, /*->18867*/
/*18855*/           OPC_CheckPredicate, 75, // Predicate_fpimmneg0
/*18857*/           OPC_MoveParent,
/*18858*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTXBRCompare), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                    // Src: (z_fcmp FP128:f128:$reg, (fpimm:f128)<<P:Predicate_fpimmneg0>>) - Complexity = 7
                    // Dst: (LTXBRCompare:i32 FP128:f128:$reg, FP128:f128:$reg)
/*18867*/         0, /*End of Scope*/
/*18868*/       /*Scope*/ 10, /*->18879*/
/*18869*/         OPC_RecordChild1, // #1 = $R2
/*18870*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXBR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_fcmp FP128:f128:$R1, FP128:f128:$R2) - Complexity = 3
                  // Dst: (CXBR:i32 FP128:f128:$R1, FP128:f128:$R2)
/*18879*/       0, /*End of Scope*/
/*18880*/     0, /*End of Scope*/
/*18881*/   /*SwitchOpcode*/ 87, TARGET_VAL(SystemZISD::ATOMIC_LOADW_AND),// ->18971
/*18884*/     OPC_RecordMemRef,
/*18885*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_and' chained node
/*18886*/     OPC_RecordChild1, // #1 = $ptr
/*18887*/     OPC_CheckChild1Type, MVT::i64,
/*18889*/     OPC_RecordChild2, // #2 = $src2
/*18890*/     OPC_Scope, 45, /*->18937*/ // 2 children in Scope
/*18892*/       OPC_MoveChild, 2,
/*18894*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18897*/       OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*18899*/       OPC_MoveParent,
/*18900*/       OPC_RecordChild3, // #3 = $bitshift
/*18901*/       OPC_RecordChild4, // #4 = $negbitshift
/*18902*/       OPC_RecordChild5, // #5 = $bitsize
/*18903*/       OPC_MoveChild, 5,
/*18905*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18908*/       OPC_MoveParent,
/*18909*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*18912*/       OPC_EmitMergeInputChains1_0,
/*18913*/       OPC_EmitConvertToTarget, 2,
/*18915*/       OPC_EmitNodeXForm, 7, 8, // LH16
/*18918*/       OPC_EmitConvertToTarget, 5,
/*18920*/       OPC_EmitNodeXForm, 5, 10, // UIMM32
/*18923*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
                // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
                // Dst: (ATOMIC_LOADW_NILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*18937*/     /*Scope*/ 32, /*->18970*/
/*18938*/       OPC_RecordChild3, // #3 = $bitshift
/*18939*/       OPC_RecordChild4, // #4 = $negbitshift
/*18940*/       OPC_RecordChild5, // #5 = $bitsize
/*18941*/       OPC_MoveChild, 5,
/*18943*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18946*/       OPC_MoveParent,
/*18947*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*18950*/       OPC_EmitMergeInputChains1_0,
/*18951*/       OPC_EmitConvertToTarget, 5,
/*18953*/       OPC_EmitNodeXForm, 5, 8, // UIMM32
/*18956*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
                // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
                // Dst: (ATOMIC_LOADW_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*18970*/     0, /*End of Scope*/
/*18971*/   /*SwitchOpcode*/ 87, TARGET_VAL(SystemZISD::ATOMIC_LOADW_OR),// ->19061
/*18974*/     OPC_RecordMemRef,
/*18975*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_or' chained node
/*18976*/     OPC_RecordChild1, // #1 = $ptr
/*18977*/     OPC_CheckChild1Type, MVT::i64,
/*18979*/     OPC_RecordChild2, // #2 = $src2
/*18980*/     OPC_Scope, 45, /*->19027*/ // 2 children in Scope
/*18982*/       OPC_MoveChild, 2,
/*18984*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18987*/       OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*18989*/       OPC_MoveParent,
/*18990*/       OPC_RecordChild3, // #3 = $bitshift
/*18991*/       OPC_RecordChild4, // #4 = $negbitshift
/*18992*/       OPC_RecordChild5, // #5 = $bitsize
/*18993*/       OPC_MoveChild, 5,
/*18995*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18998*/       OPC_MoveParent,
/*18999*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19002*/       OPC_EmitMergeInputChains1_0,
/*19003*/       OPC_EmitConvertToTarget, 2,
/*19005*/       OPC_EmitNodeXForm, 7, 8, // LH16
/*19008*/       OPC_EmitConvertToTarget, 5,
/*19010*/       OPC_EmitNodeXForm, 5, 10, // UIMM32
/*19013*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
                // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
                // Dst: (ATOMIC_LOADW_OILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19027*/     /*Scope*/ 32, /*->19060*/
/*19028*/       OPC_RecordChild3, // #3 = $bitshift
/*19029*/       OPC_RecordChild4, // #4 = $negbitshift
/*19030*/       OPC_RecordChild5, // #5 = $bitsize
/*19031*/       OPC_MoveChild, 5,
/*19033*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19036*/       OPC_MoveParent,
/*19037*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19040*/       OPC_EmitMergeInputChains1_0,
/*19041*/       OPC_EmitConvertToTarget, 5,
/*19043*/       OPC_EmitNodeXForm, 5, 8, // UIMM32
/*19046*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
                // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
                // Dst: (ATOMIC_LOADW_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19060*/     0, /*End of Scope*/
/*19061*/   /*SwitchOpcode*/ 87, TARGET_VAL(SystemZISD::ATOMIC_LOADW_NAND),// ->19151
/*19064*/     OPC_RecordMemRef,
/*19065*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_nand' chained node
/*19066*/     OPC_RecordChild1, // #1 = $ptr
/*19067*/     OPC_CheckChild1Type, MVT::i64,
/*19069*/     OPC_RecordChild2, // #2 = $src2
/*19070*/     OPC_Scope, 45, /*->19117*/ // 2 children in Scope
/*19072*/       OPC_MoveChild, 2,
/*19074*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19077*/       OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*19079*/       OPC_MoveParent,
/*19080*/       OPC_RecordChild3, // #3 = $bitshift
/*19081*/       OPC_RecordChild4, // #4 = $negbitshift
/*19082*/       OPC_RecordChild5, // #5 = $bitsize
/*19083*/       OPC_MoveChild, 5,
/*19085*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19088*/       OPC_MoveParent,
/*19089*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19092*/       OPC_EmitMergeInputChains1_0,
/*19093*/       OPC_EmitConvertToTarget, 2,
/*19095*/       OPC_EmitNodeXForm, 7, 8, // LH16
/*19098*/       OPC_EmitConvertToTarget, 5,
/*19100*/       OPC_EmitNodeXForm, 5, 10, // UIMM32
/*19103*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
                // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
                // Dst: (ATOMIC_LOADW_NILHi:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19117*/     /*Scope*/ 32, /*->19150*/
/*19118*/       OPC_RecordChild3, // #3 = $bitshift
/*19119*/       OPC_RecordChild4, // #4 = $negbitshift
/*19120*/       OPC_RecordChild5, // #5 = $bitsize
/*19121*/       OPC_MoveChild, 5,
/*19123*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19126*/       OPC_MoveParent,
/*19127*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19130*/       OPC_EmitMergeInputChains1_0,
/*19131*/       OPC_EmitConvertToTarget, 5,
/*19133*/       OPC_EmitNodeXForm, 5, 8, // UIMM32
/*19136*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
                // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
                // Dst: (ATOMIC_LOADW_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19150*/     0, /*End of Scope*/
/*19151*/   /*SwitchOpcode*/ 85, TARGET_VAL(SystemZISD::ATOMIC_LOADW_ADD),// ->19239
/*19154*/     OPC_RecordMemRef,
/*19155*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_add' chained node
/*19156*/     OPC_RecordChild1, // #1 = $ptr
/*19157*/     OPC_CheckChild1Type, MVT::i64,
/*19159*/     OPC_RecordChild2, // #2 = $src2
/*19160*/     OPC_Scope, 43, /*->19205*/ // 2 children in Scope
/*19162*/       OPC_MoveChild, 2,
/*19164*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19167*/       OPC_MoveParent,
/*19168*/       OPC_RecordChild3, // #3 = $bitshift
/*19169*/       OPC_RecordChild4, // #4 = $negbitshift
/*19170*/       OPC_RecordChild5, // #5 = $bitsize
/*19171*/       OPC_MoveChild, 5,
/*19173*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19176*/       OPC_MoveParent,
/*19177*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19180*/       OPC_EmitMergeInputChains1_0,
/*19181*/       OPC_EmitConvertToTarget, 2,
/*19183*/       OPC_EmitNodeXForm, 11, 8, // SIMM32
/*19186*/       OPC_EmitConvertToTarget, 5,
/*19188*/       OPC_EmitNodeXForm, 5, 10, // UIMM32
/*19191*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
                // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
                // Dst: (ATOMIC_LOADW_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19205*/     /*Scope*/ 32, /*->19238*/
/*19206*/       OPC_RecordChild3, // #3 = $bitshift
/*19207*/       OPC_RecordChild4, // #4 = $negbitshift
/*19208*/       OPC_RecordChild5, // #5 = $bitsize
/*19209*/       OPC_MoveChild, 5,
/*19211*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19214*/       OPC_MoveParent,
/*19215*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19218*/       OPC_EmitMergeInputChains1_0,
/*19219*/       OPC_EmitConvertToTarget, 5,
/*19221*/       OPC_EmitNodeXForm, 5, 8, // UIMM32
/*19224*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
                // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
                // Dst: (ATOMIC_LOADW_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19238*/     0, /*End of Scope*/
/*19239*/   /*SwitchOpcode*/ 85, TARGET_VAL(SystemZISD::ATOMIC_LOADW_XOR),// ->19327
/*19242*/     OPC_RecordMemRef,
/*19243*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_xor' chained node
/*19244*/     OPC_RecordChild1, // #1 = $ptr
/*19245*/     OPC_CheckChild1Type, MVT::i64,
/*19247*/     OPC_RecordChild2, // #2 = $src2
/*19248*/     OPC_Scope, 43, /*->19293*/ // 2 children in Scope
/*19250*/       OPC_MoveChild, 2,
/*19252*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19255*/       OPC_MoveParent,
/*19256*/       OPC_RecordChild3, // #3 = $bitshift
/*19257*/       OPC_RecordChild4, // #4 = $negbitshift
/*19258*/       OPC_RecordChild5, // #5 = $bitsize
/*19259*/       OPC_MoveChild, 5,
/*19261*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19264*/       OPC_MoveParent,
/*19265*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19268*/       OPC_EmitMergeInputChains1_0,
/*19269*/       OPC_EmitConvertToTarget, 2,
/*19271*/       OPC_EmitNodeXForm, 5, 8, // UIMM32
/*19274*/       OPC_EmitConvertToTarget, 5,
/*19276*/       OPC_EmitNodeXForm, 5, 10, // UIMM32
/*19279*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
                // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
                // Dst: (ATOMIC_LOADW_XILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19293*/     /*Scope*/ 32, /*->19326*/
/*19294*/       OPC_RecordChild3, // #3 = $bitshift
/*19295*/       OPC_RecordChild4, // #4 = $negbitshift
/*19296*/       OPC_RecordChild5, // #5 = $bitsize
/*19297*/       OPC_MoveChild, 5,
/*19299*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19302*/       OPC_MoveParent,
/*19303*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*19306*/       OPC_EmitMergeInputChains1_0,
/*19307*/       OPC_EmitConvertToTarget, 5,
/*19309*/       OPC_EmitNodeXForm, 5, 8, // UIMM32
/*19312*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
                // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
                // Dst: (ATOMIC_LOADW_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*19326*/     0, /*End of Scope*/
/*19327*/   /*SwitchOpcode*/ 57|128,6/*825*/, TARGET_VAL(ISD::LOAD),// ->20156
/*19331*/     OPC_RecordMemRef,
/*19332*/     OPC_RecordNode, // #0 = 'ld' chained node
/*19333*/     OPC_RecordChild1, // #1 = $I2
/*19334*/     OPC_CheckChild1Type, MVT::i64,
/*19336*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*19338*/     OPC_Scope, 34, /*->19374*/ // 8 children in Scope
/*19340*/       OPC_CheckPredicate, 13, // Predicate_load
/*19342*/       OPC_CheckPredicate, 55, // Predicate_aligned_load
/*19344*/       OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->19359
/*19347*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19350*/         OPC_EmitMergeInputChains1_0,
/*19351*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                  // Dst: (LRL:i32 pcrel32:i64:$I2)
/*19359*/       /*SwitchType*/ 12, MVT::i64,// ->19373
/*19361*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19364*/         OPC_EmitMergeInputChains1_0,
/*19365*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                  // Dst: (LGRL:i64 pcrel32:i64:$I2)
/*19373*/       0, // EndSwitchType
/*19374*/     /*Scope*/ 58, /*->19433*/
/*19375*/       OPC_CheckPredicate, 35, // Predicate_asextload
/*19377*/       OPC_Scope, 34, /*->19413*/ // 2 children in Scope
/*19379*/         OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*19381*/         OPC_CheckPredicate, 53, // Predicate_aligned_asextloadi16
/*19383*/         OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->19398
/*19386*/           OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19389*/           OPC_EmitMergeInputChains1_0,
/*19390*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>><<P:Predicate_aligned_asextloadi16>> - Complexity = 17
                    // Dst: (LHRL:i32 pcrel32:i64:$I2)
/*19398*/         /*SwitchType*/ 12, MVT::i64,// ->19412
/*19400*/           OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19403*/           OPC_EmitMergeInputChains1_0,
/*19404*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                    // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>><<P:Predicate_aligned_asextloadi16>> - Complexity = 17
                    // Dst: (LGHRL:i64 pcrel32:i64:$I2)
/*19412*/         0, // EndSwitchType
/*19413*/       /*Scope*/ 18, /*->19432*/
/*19414*/         OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*19416*/         OPC_CheckPredicate, 56, // Predicate_aligned_asextloadi32
/*19418*/         OPC_CheckType, MVT::i64,
/*19420*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19423*/         OPC_EmitMergeInputChains1_0,
/*19424*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>><<P:Predicate_aligned_asextloadi32>> - Complexity = 17
                  // Dst: (LGFRL:i64 pcrel32:i64:$I2)
/*19432*/       0, /*End of Scope*/
/*19433*/     /*Scope*/ 58, /*->19492*/
/*19434*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*19436*/       OPC_Scope, 34, /*->19472*/ // 2 children in Scope
/*19438*/         OPC_CheckPredicate, 57, // Predicate_azextloadi16
/*19440*/         OPC_CheckPredicate, 58, // Predicate_aligned_azextloadi16
/*19442*/         OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->19457
/*19445*/           OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19448*/           OPC_EmitMergeInputChains1_0,
/*19449*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>><<P:Predicate_aligned_azextloadi16>> - Complexity = 17
                    // Dst: (LLHRL:i32 pcrel32:i64:$I2)
/*19457*/         /*SwitchType*/ 12, MVT::i64,// ->19471
/*19459*/           OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19462*/           OPC_EmitMergeInputChains1_0,
/*19463*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                    // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>><<P:Predicate_aligned_azextloadi16>> - Complexity = 17
                    // Dst: (LLGHRL:i64 pcrel32:i64:$I2)
/*19471*/         0, // EndSwitchType
/*19472*/       /*Scope*/ 18, /*->19491*/
/*19473*/         OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*19475*/         OPC_CheckPredicate, 60, // Predicate_aligned_azextloadi32
/*19477*/         OPC_CheckType, MVT::i64,
/*19479*/         OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*19482*/         OPC_EmitMergeInputChains1_0,
/*19483*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>><<P:Predicate_aligned_azextloadi32>> - Complexity = 17
                  // Dst: (LLGFRL:i64 pcrel32:i64:$I2)
/*19491*/       0, /*End of Scope*/
/*19492*/     /*Scope*/ 7|128,1/*135*/, /*->19629*/
/*19494*/       OPC_CheckPredicate, 13, // Predicate_load
/*19496*/       OPC_SwitchType /*3 cases */, 82, MVT::i32,// ->19581
/*19499*/         OPC_Scope, 16, /*->19517*/ // 5 children in Scope
/*19501*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19503*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19506*/           OPC_EmitMergeInputChains1_0,
/*19507*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LMux), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LMux:i32 bdxaddr20only:i64:$XBD2)
/*19517*/         /*Scope*/ 14, /*->19532*/
/*19518*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*19521*/           OPC_EmitMergeInputChains1_0,
/*19522*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::L), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (L:i32 bdxaddr12pair:i64:$XBD2)
/*19532*/         /*Scope*/ 14, /*->19547*/
/*19533*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*19536*/           OPC_EmitMergeInputChains1_0,
/*19537*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LY:i32 bdxaddr20pair:i64:$XBD2)
/*19547*/         /*Scope*/ 16, /*->19564*/
/*19548*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19550*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19553*/           OPC_EmitMergeInputChains1_0,
/*19554*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LFH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LFH:i32 bdxaddr20only:i64:$XBD2)
/*19564*/         /*Scope*/ 15, /*->19580*/
/*19565*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19568*/           OPC_EmitMergeInputChains1_0,
/*19569*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LT), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LT:i32:i32 bdxaddr20only:i64:$XBD2)
/*19580*/         0, /*End of Scope*/
/*19581*/       /*SwitchType*/ 29, MVT::i64,// ->19612
/*19583*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19586*/         OPC_EmitMergeInputChains1_0,
/*19587*/         OPC_Scope, 10, /*->19599*/ // 2 children in Scope
/*19589*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LG), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LG:i64 bdxaddr20only:i64:$XBD2)
/*19599*/         /*Scope*/ 11, /*->19611*/
/*19600*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTG), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LTG:i64:i32 bdxaddr20only:i64:$XBD2)
/*19611*/         0, /*End of Scope*/
/*19612*/       /*SwitchType*/ 14, MVT::Untyped,// ->19628
/*19614*/         OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*19617*/         OPC_EmitMergeInputChains1_0,
/*19618*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::L128), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:Untyped bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (L128:Untyped bdxaddr20only128:i64:$src)
/*19628*/       0, // EndSwitchType
/*19629*/     /*Scope*/ 73|128,1/*201*/, /*->19832*/
/*19631*/       OPC_CheckPredicate, 35, // Predicate_asextload
/*19633*/       OPC_SwitchType /*2 cases */, 125, MVT::i32,// ->19761
/*19636*/         OPC_Scope, 53, /*->19691*/ // 2 children in Scope
/*19638*/           OPC_CheckPredicate, 76, // Predicate_asextloadi8
/*19640*/           OPC_Scope, 16, /*->19658*/ // 3 children in Scope
/*19642*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19644*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19647*/             OPC_EmitMergeInputChains1_0,
/*19648*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBMux), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi8>> - Complexity = 16
                      // Dst: (LBMux:i32 bdxaddr20only:i64:$XBD2)
/*19658*/           /*Scope*/ 14, /*->19673*/
/*19659*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19662*/             OPC_EmitMergeInputChains1_0,
/*19663*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi8>> - Complexity = 16
                      // Dst: (LB:i32 bdxaddr20only:i64:$XBD2)
/*19673*/           /*Scope*/ 16, /*->19690*/
/*19674*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19676*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19679*/             OPC_EmitMergeInputChains1_0,
/*19680*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBH), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi8>> - Complexity = 16
                      // Dst: (LBH:i32 bdxaddr20only:i64:$XBD2)
/*19690*/           0, /*End of Scope*/
/*19691*/         /*Scope*/ 68, /*->19760*/
/*19692*/           OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*19694*/           OPC_Scope, 16, /*->19712*/ // 4 children in Scope
/*19696*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19698*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19701*/             OPC_EmitMergeInputChains1_0,
/*19702*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHMux), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>> - Complexity = 16
                      // Dst: (LHMux:i32 bdxaddr20only:i64:$XBD2)
/*19712*/           /*Scope*/ 14, /*->19727*/
/*19713*/             OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*19716*/             OPC_EmitMergeInputChains1_0,
/*19717*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>> - Complexity = 16
                      // Dst: (LH:i32 bdxaddr12pair:i64:$XBD2)
/*19727*/           /*Scope*/ 14, /*->19742*/
/*19728*/             OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*19731*/             OPC_EmitMergeInputChains1_0,
/*19732*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>> - Complexity = 16
                      // Dst: (LHY:i32 bdxaddr20pair:i64:$XBD2)
/*19742*/           /*Scope*/ 16, /*->19759*/
/*19743*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19745*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19748*/             OPC_EmitMergeInputChains1_0,
/*19749*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHH), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>> - Complexity = 16
                      // Dst: (LHH:i32 bdxaddr20only:i64:$XBD2)
/*19759*/           0, /*End of Scope*/
/*19760*/         0, /*End of Scope*/
/*19761*/       /*SwitchType*/ 68, MVT::i64,// ->19831
/*19763*/         OPC_Scope, 16, /*->19781*/ // 3 children in Scope
/*19765*/           OPC_CheckPredicate, 76, // Predicate_asextloadi8
/*19767*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19770*/           OPC_EmitMergeInputChains1_0,
/*19771*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi8>> - Complexity = 16
                    // Dst: (LGB:i64 bdxaddr20only:i64:$XBD2)
/*19781*/         /*Scope*/ 16, /*->19798*/
/*19782*/           OPC_CheckPredicate, 36, // Predicate_asextloadi16
/*19784*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19787*/           OPC_EmitMergeInputChains1_0,
/*19788*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi16>> - Complexity = 16
                    // Dst: (LGH:i64 bdxaddr20only:i64:$XBD2)
/*19798*/         /*Scope*/ 31, /*->19830*/
/*19799*/           OPC_CheckPredicate, 37, // Predicate_asextloadi32
/*19801*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19804*/           OPC_EmitMergeInputChains1_0,
/*19805*/           OPC_Scope, 10, /*->19817*/ // 2 children in Scope
/*19807*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>> - Complexity = 16
                      // Dst: (LGF:i64 bdxaddr20only:i64:$XBD2)
/*19817*/           /*Scope*/ 11, /*->19829*/
/*19818*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTGF), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_asextload>><<P:Predicate_asextloadi32>> - Complexity = 16
                      // Dst: (LTGF:i64:i32 bdxaddr20only:i64:$XBD2)
/*19829*/           0, /*End of Scope*/
/*19830*/         0, /*End of Scope*/
/*19831*/       0, // EndSwitchType
/*19832*/     /*Scope*/ 43|128,1/*171*/, /*->20005*/
/*19834*/       OPC_CheckPredicate, 38, // Predicate_azextload
/*19836*/       OPC_SwitchType /*2 cases */, 110, MVT::i32,// ->19949
/*19839*/         OPC_Scope, 53, /*->19894*/ // 2 children in Scope
/*19841*/           OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*19843*/           OPC_Scope, 16, /*->19861*/ // 3 children in Scope
/*19845*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19847*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19850*/             OPC_EmitMergeInputChains1_0,
/*19851*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCMux), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>> - Complexity = 16
                      // Dst: (LLCMux:i32 bdxaddr20only:i64:$XBD2)
/*19861*/           /*Scope*/ 14, /*->19876*/
/*19862*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19865*/             OPC_EmitMergeInputChains1_0,
/*19866*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLC), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>> - Complexity = 16
                      // Dst: (LLC:i32 bdxaddr20only:i64:$XBD2)
/*19876*/           /*Scope*/ 16, /*->19893*/
/*19877*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19879*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19882*/             OPC_EmitMergeInputChains1_0,
/*19883*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCH), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>> - Complexity = 16
                      // Dst: (LLCH:i32 bdxaddr20only:i64:$XBD2)
/*19893*/           0, /*End of Scope*/
/*19894*/         /*Scope*/ 53, /*->19948*/
/*19895*/           OPC_CheckPredicate, 57, // Predicate_azextloadi16
/*19897*/           OPC_Scope, 16, /*->19915*/ // 3 children in Scope
/*19899*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19901*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19904*/             OPC_EmitMergeInputChains1_0,
/*19905*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHMux), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>> - Complexity = 16
                      // Dst: (LLHMux:i32 bdxaddr20only:i64:$XBD2)
/*19915*/           /*Scope*/ 14, /*->19930*/
/*19916*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19919*/             OPC_EmitMergeInputChains1_0,
/*19920*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLH), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>> - Complexity = 16
                      // Dst: (LLH:i32 bdxaddr20only:i64:$XBD2)
/*19930*/           /*Scope*/ 16, /*->19947*/
/*19931*/             OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*19933*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19936*/             OPC_EmitMergeInputChains1_0,
/*19937*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHH), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>> - Complexity = 16
                      // Dst: (LLHH:i32 bdxaddr20only:i64:$XBD2)
/*19947*/           0, /*End of Scope*/
/*19948*/         0, /*End of Scope*/
/*19949*/       /*SwitchType*/ 53, MVT::i64,// ->20004
/*19951*/         OPC_Scope, 16, /*->19969*/ // 3 children in Scope
/*19953*/           OPC_CheckPredicate, 42, // Predicate_azextloadi8
/*19955*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19958*/           OPC_EmitMergeInputChains1_0,
/*19959*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi8>> - Complexity = 16
                    // Dst: (LLGC:i64 bdxaddr20only:i64:$XBD2)
/*19969*/         /*Scope*/ 16, /*->19986*/
/*19970*/           OPC_CheckPredicate, 57, // Predicate_azextloadi16
/*19972*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19975*/           OPC_EmitMergeInputChains1_0,
/*19976*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi16>> - Complexity = 16
                    // Dst: (LLGH:i64 bdxaddr20only:i64:$XBD2)
/*19986*/         /*Scope*/ 16, /*->20003*/
/*19987*/           OPC_CheckPredicate, 39, // Predicate_azextloadi32
/*19989*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*19992*/           OPC_EmitMergeInputChains1_0,
/*19993*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGF), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_azextload>><<P:Predicate_azextloadi32>> - Complexity = 16
                    // Dst: (LLGF:i64 bdxaddr20only:i64:$XBD2)
/*20003*/         0, /*End of Scope*/
/*20004*/       0, // EndSwitchType
/*20005*/     /*Scope*/ 88, /*->20094*/
/*20006*/       OPC_CheckPredicate, 13, // Predicate_load
/*20008*/       OPC_SwitchType /*3 cases */, 32, MVT::f32,// ->20043
/*20011*/         OPC_Scope, 14, /*->20027*/ // 2 children in Scope
/*20013*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*20016*/           OPC_EmitMergeInputChains1_0,
/*20017*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LE), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:f32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LE:f32 bdxaddr12pair:i64:$XBD2)
/*20027*/         /*Scope*/ 14, /*->20042*/
/*20028*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*20031*/           OPC_EmitMergeInputChains1_0,
/*20032*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:f32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LEY:f32 bdxaddr20pair:i64:$XBD2)
/*20042*/         0, /*End of Scope*/
/*20043*/       /*SwitchType*/ 32, MVT::f64,// ->20077
/*20045*/         OPC_Scope, 14, /*->20061*/ // 2 children in Scope
/*20047*/           OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*20050*/           OPC_EmitMergeInputChains1_0,
/*20051*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:f64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LD:f64 bdxaddr12pair:i64:$XBD2)
/*20061*/         /*Scope*/ 14, /*->20076*/
/*20062*/           OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*20065*/           OPC_EmitMergeInputChains1_0,
/*20066*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:f64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                    // Dst: (LDY:f64 bdxaddr20pair:i64:$XBD2)
/*20076*/         0, /*End of Scope*/
/*20077*/       /*SwitchType*/ 14, MVT::f128,// ->20093
/*20079*/         OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*20082*/         OPC_EmitMergeInputChains1_0,
/*20083*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LX:f128 bdxaddr20only128:i64:$src)
/*20093*/       0, // EndSwitchType
/*20094*/     /*Scope*/ 60, /*->20155*/
/*20095*/       OPC_CheckPredicate, 77, // Predicate_extload
/*20097*/       OPC_Scope, 36, /*->20135*/ // 2 children in Scope
/*20099*/         OPC_CheckPredicate, 78, // Predicate_extloadf32
/*20101*/         OPC_SwitchType /*2 cases */, 14, MVT::f64,// ->20118
/*20104*/           OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*20107*/           OPC_EmitMergeInputChains1_0,
/*20108*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                    // Dst: (LDEB:f64 bdxaddr12only:i64:$XBD2)
/*20118*/         /*SwitchType*/ 14, MVT::f128,// ->20134
/*20120*/           OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*20123*/           OPC_EmitMergeInputChains1_0,
/*20124*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                    // Dst: (LXEB:f128 bdxaddr12only:i64:$XBD2)
/*20134*/         0, // EndSwitchType
/*20135*/       /*Scope*/ 18, /*->20154*/
/*20136*/         OPC_CheckPredicate, 79, // Predicate_extloadf64
/*20138*/         OPC_CheckType, MVT::f128,
/*20140*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*20143*/         OPC_EmitMergeInputChains1_0,
/*20144*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>> - Complexity = 16
                  // Dst: (LXDB:f128 bdxaddr12only:i64:$XBD2)
/*20154*/       0, /*End of Scope*/
/*20155*/     0, /*End of Scope*/
/*20156*/   /*SwitchOpcode*/ 94|128,1/*222*/, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->20382
/*20160*/     OPC_RecordMemRef,
/*20161*/     OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/*20162*/     OPC_RecordChild1, // #1 = $ptr
/*20163*/     OPC_CheckChild1Type, MVT::i64,
/*20165*/     OPC_RecordChild2, // #2 = $src2
/*20166*/     OPC_Scope, 125, /*->20293*/ // 5 children in Scope
/*20168*/       OPC_MoveChild, 2,
/*20170*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20173*/       OPC_Scope, 29, /*->20204*/ // 4 children in Scope
/*20175*/         OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*20177*/         OPC_MoveParent,
/*20178*/         OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*20180*/         OPC_CheckType, MVT::i32,
/*20182*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20184*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20187*/         OPC_EmitMergeInputChains1_0,
/*20188*/         OPC_EmitConvertToTarget, 2,
/*20190*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*20193*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AHI), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_AHI:i32:i32 bdaddr20only:i64:$ptr, (SIMM16:i32 (imm:i32):$src2))
/*20204*/       /*Scope*/ 29, /*->20234*/
/*20205*/         OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*20207*/         OPC_MoveParent,
/*20208*/         OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*20210*/         OPC_CheckType, MVT::i64,
/*20212*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20214*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20217*/         OPC_EmitMergeInputChains1_0,
/*20218*/         OPC_EmitConvertToTarget, 2,
/*20220*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*20223*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGHI), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_AGHI:i64:i32 bdaddr20only:i64:$ptr, (SIMM16:i64 (imm:i64):$src2))
/*20234*/       /*Scope*/ 29, /*->20264*/
/*20235*/         OPC_CheckPredicate, 63, // Predicate_imm64sx32
/*20237*/         OPC_MoveParent,
/*20238*/         OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*20240*/         OPC_CheckType, MVT::i64,
/*20242*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20244*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20247*/         OPC_EmitMergeInputChains1_0,
/*20248*/         OPC_EmitConvertToTarget, 2,
/*20250*/         OPC_EmitNodeXForm, 11, 5, // SIMM32
/*20253*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGFI), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_AGFI:i64:i32 bdaddr20only:i64:$ptr, (SIMM32:i64 (imm:i64):$src2))
/*20264*/       /*Scope*/ 27, /*->20292*/
/*20265*/         OPC_MoveParent,
/*20266*/         OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*20268*/         OPC_CheckType, MVT::i32,
/*20270*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20272*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20275*/         OPC_EmitMergeInputChains1_0,
/*20276*/         OPC_EmitConvertToTarget, 2,
/*20278*/         OPC_EmitNodeXForm, 11, 5, // SIMM32
/*20281*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 16
                  // Dst: (ATOMIC_LOAD_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2))
/*20292*/       0, /*End of Scope*/
/*20293*/     /*Scope*/ 21, /*->20315*/
/*20294*/       OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*20296*/       OPC_CheckType, MVT::i32,
/*20298*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*20300*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*20303*/       OPC_EmitMergeInputChains1_0,
/*20304*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAA), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$BD2, GR32:i32:$R3)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (LAA:i32:i32 GR32:i32:$R3, bdaddr20only:i64:$BD2)
/*20315*/     /*Scope*/ 21, /*->20337*/
/*20316*/       OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*20318*/       OPC_CheckType, MVT::i64,
/*20320*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*20322*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*20325*/       OPC_EmitMergeInputChains1_0,
/*20326*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAAG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$BD2, GR64:i64:$R3)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
                // Dst: (LAAG:i64:i32 GR64:i64:$R3, bdaddr20only:i64:$BD2)
/*20337*/     /*Scope*/ 21, /*->20359*/
/*20338*/       OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*20340*/       OPC_CheckType, MVT::i32,
/*20342*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20344*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20347*/       OPC_EmitMergeInputChains1_0,
/*20348*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*20359*/     /*Scope*/ 21, /*->20381*/
/*20360*/       OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*20362*/       OPC_CheckType, MVT::i64,
/*20364*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20366*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20369*/       OPC_EmitMergeInputChains1_0,
/*20370*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*20381*/     0, /*End of Scope*/
/*20382*/   /*SwitchOpcode*/ 117|128,2/*373*/, TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->20759
/*20386*/     OPC_RecordMemRef,
/*20387*/     OPC_RecordNode, // #0 = 'atomic_load_and' chained node
/*20388*/     OPC_RecordChild1, // #1 = $ptr
/*20389*/     OPC_CheckChild1Type, MVT::i64,
/*20391*/     OPC_RecordChild2, // #2 = $src2
/*20392*/     OPC_Scope, 19|128,2/*275*/, /*->20670*/ // 5 children in Scope
/*20395*/       OPC_MoveChild, 2,
/*20397*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20400*/       OPC_Scope, 29, /*->20431*/ // 9 children in Scope
/*20402*/         OPC_CheckPredicate, 66, // Predicate_imm32ll16c
/*20404*/         OPC_MoveParent,
/*20405*/         OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*20407*/         OPC_CheckType, MVT::i32,
/*20409*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20411*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20414*/         OPC_EmitMergeInputChains1_0,
/*20415*/         OPC_EmitConvertToTarget, 2,
/*20417*/         OPC_EmitNodeXForm, 6, 5, // LL16
/*20420*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILL:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*20431*/       /*Scope*/ 29, /*->20461*/
/*20432*/         OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*20434*/         OPC_MoveParent,
/*20435*/         OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*20437*/         OPC_CheckType, MVT::i32,
/*20439*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20441*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20444*/         OPC_EmitMergeInputChains1_0,
/*20445*/         OPC_EmitConvertToTarget, 2,
/*20447*/         OPC_EmitNodeXForm, 7, 5, // LH16
/*20450*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*20461*/       /*Scope*/ 29, /*->20491*/
/*20462*/         OPC_CheckPredicate, 68, // Predicate_imm64ll16c
/*20464*/         OPC_MoveParent,
/*20465*/         OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20467*/         OPC_CheckType, MVT::i64,
/*20469*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20471*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20474*/         OPC_EmitMergeInputChains1_0,
/*20475*/         OPC_EmitConvertToTarget, 2,
/*20477*/         OPC_EmitNodeXForm, 6, 5, // LL16
/*20480*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILL64:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*20491*/       /*Scope*/ 29, /*->20521*/
/*20492*/         OPC_CheckPredicate, 69, // Predicate_imm64lh16c
/*20494*/         OPC_MoveParent,
/*20495*/         OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20497*/         OPC_CheckType, MVT::i64,
/*20499*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20501*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20504*/         OPC_EmitMergeInputChains1_0,
/*20505*/         OPC_EmitConvertToTarget, 2,
/*20507*/         OPC_EmitNodeXForm, 7, 5, // LH16
/*20510*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILH64:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*20521*/       /*Scope*/ 29, /*->20551*/
/*20522*/         OPC_CheckPredicate, 70, // Predicate_imm64hl16c
/*20524*/         OPC_MoveParent,
/*20525*/         OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20527*/         OPC_CheckType, MVT::i64,
/*20529*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20531*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20534*/         OPC_EmitMergeInputChains1_0,
/*20535*/         OPC_EmitConvertToTarget, 2,
/*20537*/         OPC_EmitNodeXForm, 8, 5, // HL16
/*20540*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NIHL64:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*20551*/       /*Scope*/ 29, /*->20581*/
/*20552*/         OPC_CheckPredicate, 71, // Predicate_imm64hh16c
/*20554*/         OPC_MoveParent,
/*20555*/         OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20557*/         OPC_CheckType, MVT::i64,
/*20559*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20561*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20564*/         OPC_EmitMergeInputChains1_0,
/*20565*/         OPC_EmitConvertToTarget, 2,
/*20567*/         OPC_EmitNodeXForm, 9, 5, // HH16
/*20570*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NIHH64:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*20581*/       /*Scope*/ 29, /*->20611*/
/*20582*/         OPC_CheckPredicate, 72, // Predicate_imm64lf32c
/*20584*/         OPC_MoveParent,
/*20585*/         OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20587*/         OPC_CheckType, MVT::i64,
/*20589*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20591*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20594*/         OPC_EmitMergeInputChains1_0,
/*20595*/         OPC_EmitConvertToTarget, 2,
/*20597*/         OPC_EmitNodeXForm, 3, 5, // LF32
/*20600*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILF64:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*20611*/       /*Scope*/ 29, /*->20641*/
/*20612*/         OPC_CheckPredicate, 73, // Predicate_imm64hf32c
/*20614*/         OPC_MoveParent,
/*20615*/         OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20617*/         OPC_CheckType, MVT::i64,
/*20619*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20621*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20624*/         OPC_EmitMergeInputChains1_0,
/*20625*/         OPC_EmitConvertToTarget, 2,
/*20627*/         OPC_EmitNodeXForm, 4, 5, // HF32
/*20630*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NIHF64:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*20641*/       /*Scope*/ 27, /*->20669*/
/*20642*/         OPC_MoveParent,
/*20643*/         OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*20645*/         OPC_CheckType, MVT::i32,
/*20647*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20649*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20652*/         OPC_EmitMergeInputChains1_0,
/*20653*/         OPC_EmitConvertToTarget, 2,
/*20655*/         OPC_EmitNodeXForm, 5, 5, // UIMM32
/*20658*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 16
                  // Dst: (ATOMIC_LOAD_NILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*20669*/       0, /*End of Scope*/
/*20670*/     /*Scope*/ 21, /*->20692*/
/*20671*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*20673*/       OPC_CheckType, MVT::i32,
/*20675*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*20677*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*20680*/       OPC_EmitMergeInputChains1_0,
/*20681*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAN), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$BD2, GR32:i32:$R3)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (LAN:i32:i32 GR32:i32:$R3, bdaddr20only:i64:$BD2)
/*20692*/     /*Scope*/ 21, /*->20714*/
/*20693*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20695*/       OPC_CheckType, MVT::i64,
/*20697*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*20699*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*20702*/       OPC_EmitMergeInputChains1_0,
/*20703*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LANG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$BD2, GR64:i64:$R3)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
                // Dst: (LANG:i64:i32 GR64:i64:$R3, bdaddr20only:i64:$BD2)
/*20714*/     /*Scope*/ 21, /*->20736*/
/*20715*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*20717*/       OPC_CheckType, MVT::i32,
/*20719*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20721*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20724*/       OPC_EmitMergeInputChains1_0,
/*20725*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*20736*/     /*Scope*/ 21, /*->20758*/
/*20737*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*20739*/       OPC_CheckType, MVT::i64,
/*20741*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20743*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20746*/       OPC_EmitMergeInputChains1_0,
/*20747*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*20758*/     0, /*End of Scope*/
/*20759*/   /*SwitchOpcode*/ 117|128,2/*373*/, TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->21136
/*20763*/     OPC_RecordMemRef,
/*20764*/     OPC_RecordNode, // #0 = 'atomic_load_or' chained node
/*20765*/     OPC_RecordChild1, // #1 = $ptr
/*20766*/     OPC_CheckChild1Type, MVT::i64,
/*20768*/     OPC_RecordChild2, // #2 = $src2
/*20769*/     OPC_Scope, 19|128,2/*275*/, /*->21047*/ // 5 children in Scope
/*20772*/       OPC_MoveChild, 2,
/*20774*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20777*/       OPC_Scope, 29, /*->20808*/ // 9 children in Scope
/*20779*/         OPC_CheckPredicate, 45, // Predicate_imm32ll16
/*20781*/         OPC_MoveParent,
/*20782*/         OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*20784*/         OPC_CheckType, MVT::i32,
/*20786*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20788*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20791*/         OPC_EmitMergeInputChains1_0,
/*20792*/         OPC_EmitConvertToTarget, 2,
/*20794*/         OPC_EmitNodeXForm, 6, 5, // LL16
/*20797*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OILL:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*20808*/       /*Scope*/ 29, /*->20838*/
/*20809*/         OPC_CheckPredicate, 46, // Predicate_imm32lh16
/*20811*/         OPC_MoveParent,
/*20812*/         OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*20814*/         OPC_CheckType, MVT::i32,
/*20816*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20818*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20821*/         OPC_EmitMergeInputChains1_0,
/*20822*/         OPC_EmitConvertToTarget, 2,
/*20824*/         OPC_EmitNodeXForm, 7, 5, // LH16
/*20827*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*20838*/       /*Scope*/ 29, /*->20868*/
/*20839*/         OPC_CheckPredicate, 47, // Predicate_imm64ll16
/*20841*/         OPC_MoveParent,
/*20842*/         OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*20844*/         OPC_CheckType, MVT::i64,
/*20846*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20848*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20851*/         OPC_EmitMergeInputChains1_0,
/*20852*/         OPC_EmitConvertToTarget, 2,
/*20854*/         OPC_EmitNodeXForm, 6, 5, // LL16
/*20857*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OILL64:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*20868*/       /*Scope*/ 29, /*->20898*/
/*20869*/         OPC_CheckPredicate, 48, // Predicate_imm64lh16
/*20871*/         OPC_MoveParent,
/*20872*/         OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*20874*/         OPC_CheckType, MVT::i64,
/*20876*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20878*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20881*/         OPC_EmitMergeInputChains1_0,
/*20882*/         OPC_EmitConvertToTarget, 2,
/*20884*/         OPC_EmitNodeXForm, 7, 5, // LH16
/*20887*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OILH64:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*20898*/       /*Scope*/ 29, /*->20928*/
/*20899*/         OPC_CheckPredicate, 49, // Predicate_imm64hl16
/*20901*/         OPC_MoveParent,
/*20902*/         OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*20904*/         OPC_CheckType, MVT::i64,
/*20906*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20908*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20911*/         OPC_EmitMergeInputChains1_0,
/*20912*/         OPC_EmitConvertToTarget, 2,
/*20914*/         OPC_EmitNodeXForm, 8, 5, // HL16
/*20917*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHL64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OIHL64:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*20928*/       /*Scope*/ 29, /*->20958*/
/*20929*/         OPC_CheckPredicate, 50, // Predicate_imm64hh16
/*20931*/         OPC_MoveParent,
/*20932*/         OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*20934*/         OPC_CheckType, MVT::i64,
/*20936*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20938*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20941*/         OPC_EmitMergeInputChains1_0,
/*20942*/         OPC_EmitConvertToTarget, 2,
/*20944*/         OPC_EmitNodeXForm, 9, 5, // HH16
/*20947*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHH64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OIHH64:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*20958*/       /*Scope*/ 29, /*->20988*/
/*20959*/         OPC_CheckPredicate, 40, // Predicate_imm64lf32
/*20961*/         OPC_MoveParent,
/*20962*/         OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*20964*/         OPC_CheckType, MVT::i64,
/*20966*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20968*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*20971*/         OPC_EmitMergeInputChains1_0,
/*20972*/         OPC_EmitConvertToTarget, 2,
/*20974*/         OPC_EmitNodeXForm, 3, 5, // LF32
/*20977*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OILF64:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*20988*/       /*Scope*/ 29, /*->21018*/
/*20989*/         OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*20991*/         OPC_MoveParent,
/*20992*/         OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*20994*/         OPC_CheckType, MVT::i64,
/*20996*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*20998*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21001*/         OPC_EmitMergeInputChains1_0,
/*21002*/         OPC_EmitConvertToTarget, 2,
/*21004*/         OPC_EmitNodeXForm, 4, 5, // HF32
/*21007*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHF64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_OIHF64:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*21018*/       /*Scope*/ 27, /*->21046*/
/*21019*/         OPC_MoveParent,
/*21020*/         OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*21022*/         OPC_CheckType, MVT::i32,
/*21024*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21026*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21029*/         OPC_EmitMergeInputChains1_0,
/*21030*/         OPC_EmitConvertToTarget, 2,
/*21032*/         OPC_EmitNodeXForm, 5, 5, // UIMM32
/*21035*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 16
                  // Dst: (ATOMIC_LOAD_OILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*21046*/       0, /*End of Scope*/
/*21047*/     /*Scope*/ 21, /*->21069*/
/*21048*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*21050*/       OPC_CheckType, MVT::i32,
/*21052*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*21054*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*21057*/       OPC_EmitMergeInputChains1_0,
/*21058*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAO), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$BD2, GR32:i32:$R3)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (LAO:i32:i32 GR32:i32:$R3, bdaddr20only:i64:$BD2)
/*21069*/     /*Scope*/ 21, /*->21091*/
/*21070*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*21072*/       OPC_CheckType, MVT::i64,
/*21074*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*21076*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*21079*/       OPC_EmitMergeInputChains1_0,
/*21080*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAOG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$BD2, GR64:i64:$R3)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
                // Dst: (LAOG:i64:i32 GR64:i64:$R3, bdaddr20only:i64:$BD2)
/*21091*/     /*Scope*/ 21, /*->21113*/
/*21092*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*21094*/       OPC_CheckType, MVT::i32,
/*21096*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21098*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21101*/       OPC_EmitMergeInputChains1_0,
/*21102*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*21113*/     /*Scope*/ 21, /*->21135*/
/*21114*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*21116*/       OPC_CheckType, MVT::i64,
/*21118*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21120*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21123*/       OPC_EmitMergeInputChains1_0,
/*21124*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OGR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*21135*/     0, /*End of Scope*/
/*21136*/   /*SwitchOpcode*/ 64|128,1/*192*/, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->21332
/*21140*/     OPC_RecordMemRef,
/*21141*/     OPC_RecordNode, // #0 = 'atomic_load_xor' chained node
/*21142*/     OPC_RecordChild1, // #1 = $ptr
/*21143*/     OPC_CheckChild1Type, MVT::i64,
/*21145*/     OPC_RecordChild2, // #2 = $src2
/*21146*/     OPC_Scope, 95, /*->21243*/ // 5 children in Scope
/*21148*/       OPC_MoveChild, 2,
/*21150*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21153*/       OPC_Scope, 29, /*->21184*/ // 3 children in Scope
/*21155*/         OPC_CheckPredicate, 40, // Predicate_imm64lf32
/*21157*/         OPC_MoveParent,
/*21158*/         OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*21160*/         OPC_CheckType, MVT::i64,
/*21162*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21164*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21167*/         OPC_EmitMergeInputChains1_0,
/*21168*/         OPC_EmitConvertToTarget, 2,
/*21170*/         OPC_EmitNodeXForm, 3, 5, // LF32
/*21173*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_XILF64:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*21184*/       /*Scope*/ 29, /*->21214*/
/*21185*/         OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*21187*/         OPC_MoveParent,
/*21188*/         OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*21190*/         OPC_CheckType, MVT::i64,
/*21192*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21194*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21197*/         OPC_EmitMergeInputChains1_0,
/*21198*/         OPC_EmitConvertToTarget, 2,
/*21200*/         OPC_EmitNodeXForm, 4, 5, // HF32
/*21203*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XIHF64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_XIHF64:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*21214*/       /*Scope*/ 27, /*->21242*/
/*21215*/         OPC_MoveParent,
/*21216*/         OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*21218*/         OPC_CheckType, MVT::i32,
/*21220*/         OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21222*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21225*/         OPC_EmitMergeInputChains1_0,
/*21226*/         OPC_EmitConvertToTarget, 2,
/*21228*/         OPC_EmitNodeXForm, 5, 5, // UIMM32
/*21231*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 16
                  // Dst: (ATOMIC_LOAD_XILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*21242*/       0, /*End of Scope*/
/*21243*/     /*Scope*/ 21, /*->21265*/
/*21244*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*21246*/       OPC_CheckType, MVT::i32,
/*21248*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*21250*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*21253*/       OPC_EmitMergeInputChains1_0,
/*21254*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAX), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$BD2, GR32:i32:$R3)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (LAX:i32:i32 GR32:i32:$R3, bdaddr20only:i64:$BD2)
/*21265*/     /*Scope*/ 21, /*->21287*/
/*21266*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*21268*/       OPC_CheckType, MVT::i64,
/*21270*/       OPC_CheckPatternPredicate, 6, // (Subtarget->hasInterlockedAccess1())
/*21272*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #3 #4
/*21275*/       OPC_EmitMergeInputChains1_0,
/*21276*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAXG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$BD2, GR64:i64:$R3)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
                // Dst: (LAXG:i64:i32 GR64:i64:$R3, bdaddr20only:i64:$BD2)
/*21287*/     /*Scope*/ 21, /*->21309*/
/*21288*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*21290*/       OPC_CheckType, MVT::i32,
/*21292*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21294*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21297*/       OPC_EmitMergeInputChains1_0,
/*21298*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*21309*/     /*Scope*/ 21, /*->21331*/
/*21310*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*21312*/       OPC_CheckType, MVT::i64,
/*21314*/       OPC_CheckPatternPredicate, 5, // (!Subtarget->hasInterlockedAccess1())
/*21316*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21319*/       OPC_EmitMergeInputChains1_0,
/*21320*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XGR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*21331*/     0, /*End of Scope*/
/*21332*/   /*SwitchOpcode*/ 51|128,2/*307*/, TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->21643
/*21336*/     OPC_RecordMemRef,
/*21337*/     OPC_RecordNode, // #0 = 'atomic_load_nand' chained node
/*21338*/     OPC_RecordChild1, // #1 = $ptr
/*21339*/     OPC_CheckChild1Type, MVT::i64,
/*21341*/     OPC_RecordChild2, // #2 = $src2
/*21342*/     OPC_Scope, 1|128,2/*257*/, /*->21602*/ // 3 children in Scope
/*21345*/       OPC_MoveChild, 2,
/*21347*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21350*/       OPC_Scope, 27, /*->21379*/ // 9 children in Scope
/*21352*/         OPC_CheckPredicate, 66, // Predicate_imm32ll16c
/*21354*/         OPC_MoveParent,
/*21355*/         OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*21357*/         OPC_CheckType, MVT::i32,
/*21359*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21362*/         OPC_EmitMergeInputChains1_0,
/*21363*/         OPC_EmitConvertToTarget, 2,
/*21365*/         OPC_EmitNodeXForm, 6, 5, // LL16
/*21368*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILLi), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILLi:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*21379*/       /*Scope*/ 27, /*->21407*/
/*21380*/         OPC_CheckPredicate, 67, // Predicate_imm32lh16c
/*21382*/         OPC_MoveParent,
/*21383*/         OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*21385*/         OPC_CheckType, MVT::i32,
/*21387*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21390*/         OPC_EmitMergeInputChains1_0,
/*21391*/         OPC_EmitConvertToTarget, 2,
/*21393*/         OPC_EmitNodeXForm, 7, 5, // LH16
/*21396*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILHi:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*21407*/       /*Scope*/ 27, /*->21435*/
/*21408*/         OPC_CheckPredicate, 68, // Predicate_imm64ll16c
/*21410*/         OPC_MoveParent,
/*21411*/         OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21413*/         OPC_CheckType, MVT::i64,
/*21415*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21418*/         OPC_EmitMergeInputChains1_0,
/*21419*/         OPC_EmitConvertToTarget, 2,
/*21421*/         OPC_EmitNodeXForm, 6, 5, // LL16
/*21424*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL64i), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILL64i:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*21435*/       /*Scope*/ 27, /*->21463*/
/*21436*/         OPC_CheckPredicate, 69, // Predicate_imm64lh16c
/*21438*/         OPC_MoveParent,
/*21439*/         OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21441*/         OPC_CheckType, MVT::i64,
/*21443*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21446*/         OPC_EmitMergeInputChains1_0,
/*21447*/         OPC_EmitConvertToTarget, 2,
/*21449*/         OPC_EmitNodeXForm, 7, 5, // LH16
/*21452*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH64i), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILH64i:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*21463*/       /*Scope*/ 27, /*->21491*/
/*21464*/         OPC_CheckPredicate, 70, // Predicate_imm64hl16c
/*21466*/         OPC_MoveParent,
/*21467*/         OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21469*/         OPC_CheckType, MVT::i64,
/*21471*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21474*/         OPC_EmitMergeInputChains1_0,
/*21475*/         OPC_EmitConvertToTarget, 2,
/*21477*/         OPC_EmitNodeXForm, 8, 5, // HL16
/*21480*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL64i), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NIHL64i:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*21491*/       /*Scope*/ 27, /*->21519*/
/*21492*/         OPC_CheckPredicate, 71, // Predicate_imm64hh16c
/*21494*/         OPC_MoveParent,
/*21495*/         OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21497*/         OPC_CheckType, MVT::i64,
/*21499*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21502*/         OPC_EmitMergeInputChains1_0,
/*21503*/         OPC_EmitConvertToTarget, 2,
/*21505*/         OPC_EmitNodeXForm, 9, 5, // HH16
/*21508*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH64i), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NIHH64i:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*21519*/       /*Scope*/ 27, /*->21547*/
/*21520*/         OPC_CheckPredicate, 72, // Predicate_imm64lf32c
/*21522*/         OPC_MoveParent,
/*21523*/         OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21525*/         OPC_CheckType, MVT::i64,
/*21527*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21530*/         OPC_EmitMergeInputChains1_0,
/*21531*/         OPC_EmitConvertToTarget, 2,
/*21533*/         OPC_EmitNodeXForm, 3, 5, // LF32
/*21536*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF64i), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NILF64i:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*21547*/       /*Scope*/ 27, /*->21575*/
/*21548*/         OPC_CheckPredicate, 73, // Predicate_imm64hf32c
/*21550*/         OPC_MoveParent,
/*21551*/         OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21553*/         OPC_CheckType, MVT::i64,
/*21555*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21558*/         OPC_EmitMergeInputChains1_0,
/*21559*/         OPC_EmitConvertToTarget, 2,
/*21561*/         OPC_EmitNodeXForm, 4, 5, // HF32
/*21564*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF64i), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                  // Dst: (ATOMIC_LOAD_NIHF64i:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*21575*/       /*Scope*/ 25, /*->21601*/
/*21576*/         OPC_MoveParent,
/*21577*/         OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*21579*/         OPC_CheckType, MVT::i32,
/*21581*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21584*/         OPC_EmitMergeInputChains1_0,
/*21585*/         OPC_EmitConvertToTarget, 2,
/*21587*/         OPC_EmitNodeXForm, 5, 5, // UIMM32
/*21590*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILFi), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 16
                  // Dst: (ATOMIC_LOAD_NILFi:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*21601*/       0, /*End of Scope*/
/*21602*/     /*Scope*/ 19, /*->21622*/
/*21603*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*21605*/       OPC_CheckType, MVT::i32,
/*21607*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21610*/       OPC_EmitMergeInputChains1_0,
/*21611*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*21622*/     /*Scope*/ 19, /*->21642*/
/*21623*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*21625*/       OPC_CheckType, MVT::i64,
/*21627*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*21630*/       OPC_EmitMergeInputChains1_0,
/*21631*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGRi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NGRi:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*21642*/     0, /*End of Scope*/
/*21643*/   /*SwitchOpcode*/ 34, TARGET_VAL(SystemZISD::TBEGIN),// ->21680
/*21646*/     OPC_RecordNode, // #0 = 'z_tbegin' chained node
/*21647*/     OPC_RecordChild1, // #1 = $BD1
/*21648*/     OPC_CheckChild1Type, MVT::i64,
/*21650*/     OPC_RecordChild2, // #2 = $I2
/*21651*/     OPC_MoveChild, 2,
/*21653*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21656*/     OPC_CheckPredicate, 61, // Predicate_imm32zx16
/*21658*/     OPC_MoveParent,
/*21659*/     OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*21661*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*21664*/     OPC_EmitMergeInputChains1_0,
/*21665*/     OPC_EmitConvertToTarget, 2,
/*21667*/     OPC_EmitNodeXForm, 10, 5, // UIMM16
/*21670*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::TBEGIN), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
              // Src: (z_tbegin bdaddr12only:i64:$BD1, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 16
              // Dst: (TBEGIN:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*21680*/   /*SwitchOpcode*/ 34, TARGET_VAL(SystemZISD::TBEGIN_NOFLOAT),// ->21717
/*21683*/     OPC_RecordNode, // #0 = 'z_tbegin_nofloat' chained node
/*21684*/     OPC_RecordChild1, // #1 = $BD1
/*21685*/     OPC_CheckChild1Type, MVT::i64,
/*21687*/     OPC_RecordChild2, // #2 = $I2
/*21688*/     OPC_MoveChild, 2,
/*21690*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21693*/     OPC_CheckPredicate, 61, // Predicate_imm32zx16
/*21695*/     OPC_MoveParent,
/*21696*/     OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*21698*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*21701*/     OPC_EmitMergeInputChains1_0,
/*21702*/     OPC_EmitConvertToTarget, 2,
/*21704*/     OPC_EmitNodeXForm, 10, 5, // UIMM16
/*21707*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::TBEGIN_nofloat), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
              // Src: (z_tbegin_nofloat bdaddr12only:i64:$BD1, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 16
              // Dst: (TBEGIN_nofloat:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*21717*/   /*SwitchOpcode*/ 38, TARGET_VAL(SystemZISD::ATOMIC_SWAPW),// ->21758
/*21720*/     OPC_RecordMemRef,
/*21721*/     OPC_RecordNode, // #0 = 'z_atomic_swapw' chained node
/*21722*/     OPC_RecordChild1, // #1 = $ptr
/*21723*/     OPC_CheckChild1Type, MVT::i64,
/*21725*/     OPC_RecordChild2, // #2 = $src2
/*21726*/     OPC_RecordChild3, // #3 = $bitshift
/*21727*/     OPC_RecordChild4, // #4 = $negbitshift
/*21728*/     OPC_RecordChild5, // #5 = $bitsize
/*21729*/     OPC_MoveChild, 5,
/*21731*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21734*/     OPC_MoveParent,
/*21735*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*21738*/     OPC_EmitMergeInputChains1_0,
/*21739*/     OPC_EmitConvertToTarget, 5,
/*21741*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*21744*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_swapw:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_SWAPW:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*21758*/   /*SwitchOpcode*/ 38, TARGET_VAL(SystemZISD::ATOMIC_LOADW_SUB),// ->21799
/*21761*/     OPC_RecordMemRef,
/*21762*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_sub' chained node
/*21763*/     OPC_RecordChild1, // #1 = $ptr
/*21764*/     OPC_CheckChild1Type, MVT::i64,
/*21766*/     OPC_RecordChild2, // #2 = $src2
/*21767*/     OPC_RecordChild3, // #3 = $bitshift
/*21768*/     OPC_RecordChild4, // #4 = $negbitshift
/*21769*/     OPC_RecordChild5, // #5 = $bitsize
/*21770*/     OPC_MoveChild, 5,
/*21772*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21775*/     OPC_MoveParent,
/*21776*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*21779*/     OPC_EmitMergeInputChains1_0,
/*21780*/     OPC_EmitConvertToTarget, 5,
/*21782*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*21785*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_SR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*21799*/   /*SwitchOpcode*/ 38, TARGET_VAL(SystemZISD::ATOMIC_LOADW_MIN),// ->21840
/*21802*/     OPC_RecordMemRef,
/*21803*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_min' chained node
/*21804*/     OPC_RecordChild1, // #1 = $ptr
/*21805*/     OPC_CheckChild1Type, MVT::i64,
/*21807*/     OPC_RecordChild2, // #2 = $src2
/*21808*/     OPC_RecordChild3, // #3 = $bitshift
/*21809*/     OPC_RecordChild4, // #4 = $negbitshift
/*21810*/     OPC_RecordChild5, // #5 = $bitsize
/*21811*/     OPC_MoveChild, 5,
/*21813*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21816*/     OPC_MoveParent,
/*21817*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*21820*/     OPC_EmitMergeInputChains1_0,
/*21821*/     OPC_EmitConvertToTarget, 5,
/*21823*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*21826*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MIN), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_MIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*21840*/   /*SwitchOpcode*/ 38, TARGET_VAL(SystemZISD::ATOMIC_LOADW_MAX),// ->21881
/*21843*/     OPC_RecordMemRef,
/*21844*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_max' chained node
/*21845*/     OPC_RecordChild1, // #1 = $ptr
/*21846*/     OPC_CheckChild1Type, MVT::i64,
/*21848*/     OPC_RecordChild2, // #2 = $src2
/*21849*/     OPC_RecordChild3, // #3 = $bitshift
/*21850*/     OPC_RecordChild4, // #4 = $negbitshift
/*21851*/     OPC_RecordChild5, // #5 = $bitsize
/*21852*/     OPC_MoveChild, 5,
/*21854*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21857*/     OPC_MoveParent,
/*21858*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*21861*/     OPC_EmitMergeInputChains1_0,
/*21862*/     OPC_EmitConvertToTarget, 5,
/*21864*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*21867*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MAX), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_MAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*21881*/   /*SwitchOpcode*/ 38, TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMIN),// ->21922
/*21884*/     OPC_RecordMemRef,
/*21885*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_umin' chained node
/*21886*/     OPC_RecordChild1, // #1 = $ptr
/*21887*/     OPC_CheckChild1Type, MVT::i64,
/*21889*/     OPC_RecordChild2, // #2 = $src2
/*21890*/     OPC_RecordChild3, // #3 = $bitshift
/*21891*/     OPC_RecordChild4, // #4 = $negbitshift
/*21892*/     OPC_RecordChild5, // #5 = $bitsize
/*21893*/     OPC_MoveChild, 5,
/*21895*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21898*/     OPC_MoveParent,
/*21899*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*21902*/     OPC_EmitMergeInputChains1_0,
/*21903*/     OPC_EmitConvertToTarget, 5,
/*21905*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*21908*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMIN), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_UMIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*21922*/   /*SwitchOpcode*/ 38, TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMAX),// ->21963
/*21925*/     OPC_RecordMemRef,
/*21926*/     OPC_RecordNode, // #0 = 'z_atomic_loadw_umax' chained node
/*21927*/     OPC_RecordChild1, // #1 = $ptr
/*21928*/     OPC_CheckChild1Type, MVT::i64,
/*21930*/     OPC_RecordChild2, // #2 = $src2
/*21931*/     OPC_RecordChild3, // #3 = $bitshift
/*21932*/     OPC_RecordChild4, // #4 = $negbitshift
/*21933*/     OPC_RecordChild5, // #5 = $bitsize
/*21934*/     OPC_MoveChild, 5,
/*21936*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21939*/     OPC_MoveParent,
/*21940*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*21943*/     OPC_EmitMergeInputChains1_0,
/*21944*/     OPC_EmitConvertToTarget, 5,
/*21946*/     OPC_EmitNodeXForm, 5, 8, // UIMM32
/*21949*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMAX), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_UMAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*21963*/   /*SwitchOpcode*/ 40, TARGET_VAL(SystemZISD::ATOMIC_CMP_SWAPW),// ->22006
/*21966*/     OPC_RecordMemRef,
/*21967*/     OPC_RecordNode, // #0 = 'z_atomic_cmp_swapw' chained node
/*21968*/     OPC_RecordChild1, // #1 = $addr
/*21969*/     OPC_CheckChild1Type, MVT::i64,
/*21971*/     OPC_RecordChild2, // #2 = $cmp
/*21972*/     OPC_RecordChild3, // #3 = $swap
/*21973*/     OPC_RecordChild4, // #4 = $bitshift
/*21974*/     OPC_RecordChild5, // #5 = $negbitshift
/*21975*/     OPC_RecordChild6, // #6 = $bitsize
/*21976*/     OPC_MoveChild, 6,
/*21978*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21981*/     OPC_MoveParent,
/*21982*/     OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$addr #7 #8
/*21985*/     OPC_EmitMergeInputChains1_0,
/*21986*/     OPC_EmitConvertToTarget, 6,
/*21988*/     OPC_EmitNodeXForm, 5, 9, // UIMM32
/*21991*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_CMP_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 7/*#Ops*/, 7, 8, 2, 3, 4, 5, 10, 
              // Src: (z_atomic_cmp_swapw:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_CMP_SWAPW:i32:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*22006*/   /*SwitchOpcode*/ 69, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->22078
/*22009*/     OPC_RecordMemRef,
/*22010*/     OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/*22011*/     OPC_RecordChild1, // #1 = $BD2
/*22012*/     OPC_CheckChild1Type, MVT::i64,
/*22014*/     OPC_RecordChild2, // #2 = $R1src
/*22015*/     OPC_RecordChild3, // #3 = $R3
/*22016*/     OPC_SwitchType /*2 cases */, 38, MVT::i32,// ->22057
/*22019*/       OPC_CheckPredicate, 90, // Predicate_atomic_cmp_swap_32
/*22021*/       OPC_Scope, 16, /*->22039*/ // 2 children in Scope
/*22023*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD2 #4 #5
/*22026*/         OPC_EmitMergeInputChains1_0,
/*22027*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CS), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (atomic_cmp_swap:i32 bdaddr12pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                  // Dst: (CS:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr12pair:i64:$BD2)
/*22039*/       /*Scope*/ 16, /*->22056*/
/*22040*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD2 #4 #5
/*22043*/         OPC_EmitMergeInputChains1_0,
/*22044*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (atomic_cmp_swap:i32 bdaddr20pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                  // Dst: (CSY:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr20pair:i64:$BD2)
/*22056*/       0, /*End of Scope*/
/*22057*/     /*SwitchType*/ 18, MVT::i64,// ->22077
/*22059*/       OPC_CheckPredicate, 91, // Predicate_atomic_cmp_swap_64
/*22061*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$BD2 #4 #5
/*22064*/       OPC_EmitMergeInputChains1_0,
/*22065*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i64 bdaddr20only:i64:$BD2, GR64:i64:$R1src, GR64:i64:$R3)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
                // Dst: (CSG:i64:i32 GR64:i64:$R1src, GR64:i64:$R3, bdaddr20only:i64:$BD2)
/*22077*/     0, // EndSwitchType
/*22078*/   /*SwitchOpcode*/ 46, TARGET_VAL(ISD::ATOMIC_SWAP),// ->22127
/*22081*/     OPC_RecordMemRef,
/*22082*/     OPC_RecordNode, // #0 = 'atomic_swap' chained node
/*22083*/     OPC_RecordChild1, // #1 = $ptr
/*22084*/     OPC_CheckChild1Type, MVT::i64,
/*22086*/     OPC_RecordChild2, // #2 = $src2
/*22087*/     OPC_SwitchType /*2 cases */, 17, MVT::i32,// ->22107
/*22090*/       OPC_CheckPredicate, 92, // Predicate_atomic_swap_32
/*22092*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22095*/       OPC_EmitMergeInputChains1_0,
/*22096*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*22107*/     /*SwitchType*/ 17, MVT::i64,// ->22126
/*22109*/       OPC_CheckPredicate, 93, // Predicate_atomic_swap_64
/*22111*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22114*/       OPC_EmitMergeInputChains1_0,
/*22115*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_swap_64>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*22126*/     0, // EndSwitchType
/*22127*/   /*SwitchOpcode*/ 46, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->22176
/*22130*/     OPC_RecordMemRef,
/*22131*/     OPC_RecordNode, // #0 = 'atomic_load_sub' chained node
/*22132*/     OPC_RecordChild1, // #1 = $ptr
/*22133*/     OPC_CheckChild1Type, MVT::i64,
/*22135*/     OPC_RecordChild2, // #2 = $src2
/*22136*/     OPC_SwitchType /*2 cases */, 17, MVT::i32,// ->22156
/*22139*/       OPC_CheckPredicate, 94, // Predicate_atomic_load_sub_32
/*22141*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22144*/       OPC_EmitMergeInputChains1_0,
/*22145*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*22156*/     /*SwitchType*/ 17, MVT::i64,// ->22175
/*22158*/       OPC_CheckPredicate, 95, // Predicate_atomic_load_sub_64
/*22160*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22163*/       OPC_EmitMergeInputChains1_0,
/*22164*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SGR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*22175*/     0, // EndSwitchType
/*22176*/   /*SwitchOpcode*/ 46, TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->22225
/*22179*/     OPC_RecordMemRef,
/*22180*/     OPC_RecordNode, // #0 = 'atomic_load_min' chained node
/*22181*/     OPC_RecordChild1, // #1 = $ptr
/*22182*/     OPC_CheckChild1Type, MVT::i64,
/*22184*/     OPC_RecordChild2, // #2 = $src2
/*22185*/     OPC_SwitchType /*2 cases */, 17, MVT::i32,// ->22205
/*22188*/       OPC_CheckPredicate, 96, // Predicate_atomic_load_min_32
/*22190*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22193*/       OPC_EmitMergeInputChains1_0,
/*22194*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_min_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_MIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*22205*/     /*SwitchType*/ 17, MVT::i64,// ->22224
/*22207*/       OPC_CheckPredicate, 97, // Predicate_atomic_load_min_64
/*22209*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22212*/       OPC_EmitMergeInputChains1_0,
/*22213*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_min:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_min_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_MIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*22224*/     0, // EndSwitchType
/*22225*/   /*SwitchOpcode*/ 46, TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->22274
/*22228*/     OPC_RecordMemRef,
/*22229*/     OPC_RecordNode, // #0 = 'atomic_load_max' chained node
/*22230*/     OPC_RecordChild1, // #1 = $ptr
/*22231*/     OPC_CheckChild1Type, MVT::i64,
/*22233*/     OPC_RecordChild2, // #2 = $src2
/*22234*/     OPC_SwitchType /*2 cases */, 17, MVT::i32,// ->22254
/*22237*/       OPC_CheckPredicate, 98, // Predicate_atomic_load_max_32
/*22239*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22242*/       OPC_EmitMergeInputChains1_0,
/*22243*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_max_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_MAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*22254*/     /*SwitchType*/ 17, MVT::i64,// ->22273
/*22256*/       OPC_CheckPredicate, 99, // Predicate_atomic_load_max_64
/*22258*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22261*/       OPC_EmitMergeInputChains1_0,
/*22262*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_max:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_max_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_MAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*22273*/     0, // EndSwitchType
/*22274*/   /*SwitchOpcode*/ 46, TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->22323
/*22277*/     OPC_RecordMemRef,
/*22278*/     OPC_RecordNode, // #0 = 'atomic_load_umin' chained node
/*22279*/     OPC_RecordChild1, // #1 = $ptr
/*22280*/     OPC_CheckChild1Type, MVT::i64,
/*22282*/     OPC_RecordChild2, // #2 = $src2
/*22283*/     OPC_SwitchType /*2 cases */, 17, MVT::i32,// ->22303
/*22286*/       OPC_CheckPredicate, 100, // Predicate_atomic_load_umin_32
/*22288*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22291*/       OPC_EmitMergeInputChains1_0,
/*22292*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_UMIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*22303*/     /*SwitchType*/ 17, MVT::i64,// ->22322
/*22305*/       OPC_CheckPredicate, 101, // Predicate_atomic_load_umin_64
/*22307*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22310*/       OPC_EmitMergeInputChains1_0,
/*22311*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_umin:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_UMIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*22322*/     0, // EndSwitchType
/*22323*/   /*SwitchOpcode*/ 46, TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->22372
/*22326*/     OPC_RecordMemRef,
/*22327*/     OPC_RecordNode, // #0 = 'atomic_load_umax' chained node
/*22328*/     OPC_RecordChild1, // #1 = $ptr
/*22329*/     OPC_CheckChild1Type, MVT::i64,
/*22331*/     OPC_RecordChild2, // #2 = $src2
/*22332*/     OPC_SwitchType /*2 cases */, 17, MVT::i32,// ->22352
/*22335*/       OPC_CheckPredicate, 102, // Predicate_atomic_load_umax_32
/*22337*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22340*/       OPC_EmitMergeInputChains1_0,
/*22341*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_UMAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*22352*/     /*SwitchType*/ 17, MVT::i64,// ->22371
/*22354*/       OPC_CheckPredicate, 103, // Predicate_atomic_load_umax_64
/*22356*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*22359*/       OPC_EmitMergeInputChains1_0,
/*22360*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_umax:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_UMAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*22371*/     0, // EndSwitchType
/*22372*/   /*SwitchOpcode*/ 47, TARGET_VAL(ISD::FrameIndex),// ->22422
/*22375*/     OPC_RecordNode, // #0 = $src
/*22376*/     OPC_CheckType, MVT::i64,
/*22378*/     OPC_Scope, 13, /*->22393*/ // 3 children in Scope
/*22380*/       OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*22383*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*22393*/     /*Scope*/ 13, /*->22407*/
/*22394*/       OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*22397*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*22407*/     /*Scope*/ 13, /*->22421*/
/*22408*/       OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*22411*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*22421*/     0, /*End of Scope*/
/*22422*/   /*SwitchOpcode*/ 47, TARGET_VAL(SystemZISD::ADJDYNALLOC),// ->22472
/*22425*/     OPC_RecordNode, // #0 = $src
/*22426*/     OPC_CheckType, MVT::i64,
/*22428*/     OPC_Scope, 13, /*->22443*/ // 3 children in Scope
/*22430*/       OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*22433*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*22443*/     /*Scope*/ 13, /*->22457*/
/*22444*/       OPC_CheckComplexPat, /*CP*/14, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*22447*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*22457*/     /*Scope*/ 13, /*->22471*/
/*22458*/       OPC_CheckComplexPat, /*CP*/15, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*22461*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*22471*/     0, /*End of Scope*/
/*22472*/   /*SwitchOpcode*/ 36, TARGET_VAL(ISD::SHL),// ->22511
/*22475*/     OPC_RecordChild0, // #0 = $R1src
/*22476*/     OPC_RecordChild1, // #1 = $BD2
/*22477*/     OPC_CheckChild1Type, MVT::i32,
/*22479*/     OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->22495
/*22482*/       OPC_CheckComplexPat, /*CP*/11, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*22485*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLL), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (shl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
                // Dst: (SLL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
/*22495*/     /*SwitchType*/ 13, MVT::i64,// ->22510
/*22497*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*22500*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLLG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (shl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (SLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
/*22510*/     0, // EndSwitchType
/*22511*/   /*SwitchOpcode*/ 36, TARGET_VAL(ISD::SRL),// ->22550
/*22514*/     OPC_RecordChild0, // #0 = $R1src
/*22515*/     OPC_RecordChild1, // #1 = $BD2
/*22516*/     OPC_CheckChild1Type, MVT::i32,
/*22518*/     OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->22534
/*22521*/       OPC_CheckComplexPat, /*CP*/11, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*22524*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (srl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
                // Dst: (SRL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
/*22534*/     /*SwitchType*/ 13, MVT::i64,// ->22549
/*22536*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*22539*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRLG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (srl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (SRLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
/*22549*/     0, // EndSwitchType
/*22550*/   /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ROTL),// ->22589
/*22553*/     OPC_RecordChild0, // #0 = $R3
/*22554*/     OPC_RecordChild1, // #1 = $BD2
/*22555*/     OPC_CheckChild1Type, MVT::i32,
/*22557*/     OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->22573
/*22560*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*22563*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLL), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i32 GR32:i32:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (RLL:i32 GR32:i32:$R3, shift20only:i32:$BD2)
/*22573*/     /*SwitchType*/ 13, MVT::i64,// ->22588
/*22575*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*22578*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLLG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (RLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
/*22588*/     0, // EndSwitchType
/*22589*/   /*SwitchOpcode*/ 41, TARGET_VAL(SystemZISD::BR_CCMASK),// ->22633
/*22592*/     OPC_RecordNode, // #0 = 'z_br_ccmask' chained node
/*22593*/     OPC_CaptureGlueInput,
/*22594*/     OPC_RecordChild1, // #1 = $valid
/*22595*/     OPC_MoveChild, 1,
/*22597*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22600*/     OPC_CheckPredicate, 52, // Predicate_cond4
/*22602*/     OPC_MoveParent,
/*22603*/     OPC_RecordChild2, // #2 = $R1
/*22604*/     OPC_MoveChild, 2,
/*22606*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22609*/     OPC_CheckPredicate, 52, // Predicate_cond4
/*22611*/     OPC_MoveParent,
/*22612*/     OPC_RecordChild3, // #3 = $I2
/*22613*/     OPC_MoveChild, 3,
/*22615*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22618*/     OPC_MoveParent,
/*22619*/     OPC_EmitMergeInputChains1_0,
/*22620*/     OPC_EmitConvertToTarget, 1,
/*22622*/     OPC_EmitConvertToTarget, 2,
/*22624*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRC), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
              // Src: (z_br_ccmask (imm:i32)<<P:Predicate_cond4>>:$valid, (imm:i32)<<P:Predicate_cond4>>:$R1, (bb:Other):$I2) - Complexity = 11
              // Dst: (BRC (imm:i32):$valid, (imm:i32):$R1, (bb:Other):$I2)
/*22633*/   /*SwitchOpcode*/ 25, TARGET_VAL(ISD::CALLSEQ_END),// ->22661
/*22636*/     OPC_RecordNode, // #0 = 'callseq_end' chained node
/*22637*/     OPC_CaptureGlueInput,
/*22638*/     OPC_RecordChild1, // #1 = $amt1
/*22639*/     OPC_MoveChild, 1,
/*22641*/     OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*22644*/     OPC_MoveParent,
/*22645*/     OPC_RecordChild2, // #2 = $amt2
/*22646*/     OPC_MoveChild, 2,
/*22648*/     OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*22651*/     OPC_MoveParent,
/*22652*/     OPC_EmitMergeInputChains1_0,
/*22653*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
/*22661*/   /*SwitchOpcode*/ 30, TARGET_VAL(SystemZISD::CALL),// ->22694
/*22664*/     OPC_RecordNode, // #0 = 'z_call' chained node
/*22665*/     OPC_CaptureGlueInput,
/*22666*/     OPC_RecordChild1, // #1 = $I2
/*22667*/     OPC_CheckChild1Type, MVT::i64,
/*22669*/     OPC_Scope, 12, /*->22683*/ // 2 children in Scope
/*22671*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*22674*/       OPC_EmitMergeInputChains1_0,
/*22675*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CallBRASL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (z_call pcrel32:i64:$I2) - Complexity = 9
                // Dst: (CallBRASL:i64 pcrel32:i64:$I2)
/*22683*/     /*Scope*/ 9, /*->22693*/
/*22684*/       OPC_EmitMergeInputChains1_0,
/*22685*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CallBASR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (z_call ADDR64:i64:$R2) - Complexity = 3
                // Dst: (CallBASR:i64 ADDR64:i64:$R2)
/*22693*/     0, /*End of Scope*/
/*22694*/   /*SwitchOpcode*/ 30, TARGET_VAL(SystemZISD::SIBCALL),// ->22727
/*22697*/     OPC_RecordNode, // #0 = 'z_sibcall' chained node
/*22698*/     OPC_CaptureGlueInput,
/*22699*/     OPC_RecordChild1, // #1 = $I2
/*22700*/     OPC_CheckChild1Type, MVT::i64,
/*22702*/     OPC_Scope, 11, /*->22715*/ // 2 children in Scope
/*22704*/       OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*22707*/       OPC_EmitMergeInputChains1_0,
/*22708*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CallJG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (z_sibcall pcrel32:i64:$I2) - Complexity = 9
                // Dst: (CallJG pcrel32:i64:$I2)
/*22715*/     /*Scope*/ 10, /*->22726*/
/*22716*/       OPC_EmitMergeInputChains1_0,
/*22717*/       OPC_EmitCopyToReg, 1, SystemZ::R1D,
/*22720*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CallBR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (z_sibcall R1D:i64) - Complexity = 3
                // Dst: (CallBR)
/*22726*/     0, /*End of Scope*/
/*22727*/   /*SwitchOpcode*/ 12, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->22742
/*22730*/     OPC_CheckChild0Integer, 40|128,25/*3240*/, 
/*22733*/     OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*22735*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ETND), 0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_wo_chain:i32 3240:iPTR) - Complexity = 8
              // Dst: (ETND:i32)
/*22742*/   /*SwitchOpcode*/ 19, TARGET_VAL(SystemZISD::EXTRACT_ACCESS),// ->22764
/*22745*/     OPC_RecordChild0, // #0 = $R2
/*22746*/     OPC_MoveChild, 0,
/*22748*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22751*/     OPC_CheckPredicate, 104, // Predicate_access_reg
/*22753*/     OPC_MoveParent,
/*22754*/     OPC_EmitConvertToTarget, 0,
/*22756*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::EAR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (z_extract_access:i32 (imm:i32)<<P:Predicate_access_reg>>:$R2) - Complexity = 7
              // Dst: (EAR:i32 (imm:i32):$R2)
/*22764*/   /*SwitchOpcode*/ 16, TARGET_VAL(ISD::CALLSEQ_START),// ->22783
/*22767*/     OPC_RecordNode, // #0 = 'callseq_start' chained node
/*22768*/     OPC_RecordChild1, // #1 = $amt
/*22769*/     OPC_MoveChild, 1,
/*22771*/     OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*22774*/     OPC_MoveParent,
/*22775*/     OPC_EmitMergeInputChains1_0,
/*22776*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (callseq_start (timm:i64):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
/*22783*/   /*SwitchOpcode*/ 18, TARGET_VAL(SystemZISD::TLS_GDCALL),// ->22804
/*22786*/     OPC_RecordNode, // #0 = 'z_tls_gdcall' chained node
/*22787*/     OPC_CaptureGlueInput,
/*22788*/     OPC_RecordChild1, // #1 = $I2
/*22789*/     OPC_MoveChild, 1,
/*22791*/     OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*22794*/     OPC_MoveParent,
/*22795*/     OPC_EmitMergeInputChains1_0,
/*22796*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::TLS_GDCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_tls_gdcall (tglobaltlsaddr:iPTR):$I2) - Complexity = 6
              // Dst: (TLS_GDCALL:i64 (tglobaltlsaddr:i64):$I2)
/*22804*/   /*SwitchOpcode*/ 18, TARGET_VAL(SystemZISD::TLS_LDCALL),// ->22825
/*22807*/     OPC_RecordNode, // #0 = 'z_tls_ldcall' chained node
/*22808*/     OPC_CaptureGlueInput,
/*22809*/     OPC_RecordChild1, // #1 = $I2
/*22810*/     OPC_MoveChild, 1,
/*22812*/     OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*22815*/     OPC_MoveParent,
/*22816*/     OPC_EmitMergeInputChains1_0,
/*22817*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::TLS_LDCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_tls_ldcall (tglobaltlsaddr:iPTR):$I2) - Complexity = 6
              // Dst: (TLS_LDCALL:i64 (tglobaltlsaddr:i64):$I2)
/*22825*/   /*SwitchOpcode*/ 14, TARGET_VAL(SystemZISD::PCREL_WRAPPER),// ->22842
/*22828*/     OPC_RecordNode, // #0 = $I2
/*22829*/     OPC_CheckType, MVT::i64,
/*22831*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // selectPCRelAddress:$I2 #1
/*22834*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: pcrel32:i64:$I2 - Complexity = 6
              // Dst: (LARL:i64 pcrel32:i64:$I2)
/*22842*/   /*SwitchOpcode*/ 14, TARGET_VAL(SystemZISD::PCREL_OFFSET),// ->22859
/*22845*/     OPC_RecordNode, // #0 = $I2
/*22846*/     OPC_CheckType, MVT::i64,
/*22848*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // selectPCRelAddress:$I2 #1
/*22851*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: pcrel32:i64:$I2 - Complexity = 6
              // Dst: (LARL:i64 pcrel32:i64:$I2)
/*22859*/   /*SwitchOpcode*/ 78, TARGET_VAL(SystemZISD::IABS),// ->22940
/*22862*/     OPC_Scope, 49, /*->22913*/ // 2 children in Scope
/*22864*/       OPC_MoveChild, 0,
/*22866*/       OPC_SwitchOpcode /*2 cases */, 11, TARGET_VAL(ISD::SIGN_EXTEND),// ->22881
/*22870*/         OPC_RecordChild0, // #0 = $src
/*22871*/         OPC_MoveParent,
/*22872*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (z_iabs:i64 (sext:i64 GR32:i32:$src)) - Complexity = 6
                  // Dst: (LPGFR:i64:i32 GR32:i32:$src)
/*22881*/       /*SwitchOpcode*/ 28, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->22912
/*22884*/         OPC_RecordChild0, // #0 = $src
/*22885*/         OPC_MoveChild, 1,
/*22887*/         OPC_CheckValueType, MVT::i32,
/*22889*/         OPC_MoveParent,
/*22890*/         OPC_MoveParent,
/*22891*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*22894*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*22903*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (z_iabs:i64 (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 6
                  // Dst: (LPGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*22912*/       0, // EndSwitchOpcode
/*22913*/     /*Scope*/ 25, /*->22939*/
/*22914*/       OPC_RecordChild0, // #0 = $R2
/*22915*/       OPC_SwitchType /*2 cases */, 9, MVT::i32,// ->22927
/*22918*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (z_iabs:i32 GR32:i32:$R2) - Complexity = 3
                  // Dst: (LPR:i32:i32 GR32:i32:$R2)
/*22927*/       /*SwitchType*/ 9, MVT::i64,// ->22938
/*22929*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (z_iabs:i64 GR64:i64:$R2) - Complexity = 3
                  // Dst: (LPGR:i64:i32 GR64:i64:$R2)
/*22938*/       0, // EndSwitchType
/*22939*/     0, /*End of Scope*/
/*22940*/   /*SwitchOpcode*/ 92|128,1/*220*/, TARGET_VAL(ISD::Constant),// ->23164
/*22944*/     OPC_RecordNode, // #0 = $I2
/*22945*/     OPC_SwitchType /*2 cases */, 82, MVT::i32,// ->23030
/*22948*/       OPC_Scope, 34, /*->22984*/ // 2 children in Scope
/*22950*/         OPC_CheckPredicate, 31, // Predicate_imm32sx16
/*22952*/         OPC_Scope, 15, /*->22969*/ // 2 children in Scope
/*22954*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*22956*/           OPC_EmitConvertToTarget, 0,
/*22958*/           OPC_EmitNodeXForm, 2, 1, // SIMM16
/*22961*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHIMux), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                    // Dst: (LHIMux:i32 (SIMM16:i32 (imm:i32):$I2))
/*22969*/         /*Scope*/ 13, /*->22983*/
/*22970*/           OPC_EmitConvertToTarget, 0,
/*22972*/           OPC_EmitNodeXForm, 2, 1, // SIMM16
/*22975*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHI), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                    // Dst: (LHI:i32 (SIMM16:i32 (imm:i32):$I2))
/*22983*/         0, /*End of Scope*/
/*22984*/       /*Scope*/ 44, /*->23029*/
/*22985*/         OPC_Scope, 15, /*->23002*/ // 2 children in Scope
/*22987*/           OPC_CheckPatternPredicate, 0, // (Subtarget->hasHighWord())
/*22989*/           OPC_EmitConvertToTarget, 0,
/*22991*/           OPC_EmitNodeXForm, 5, 1, // UIMM32
/*22994*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIFMux), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                    // Dst: (IIFMux:i32 (UIMM32:i32 (imm:i32):$I2))
/*23002*/         /*Scope*/ 25, /*->23028*/
/*23003*/           OPC_EmitConvertToTarget, 0,
/*23005*/           OPC_EmitNodeXForm, 5, 1, // UIMM32
/*23008*/           OPC_Scope, 8, /*->23018*/ // 2 children in Scope
/*23010*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF), 0,
                          1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                      // Dst: (IILF:i32 (UIMM32:i32 (imm:i32):$I2))
/*23018*/           /*Scope*/ 8, /*->23027*/
/*23019*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                          1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                      // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                      // Dst: (IIHF:i32 (UIMM32:i32 (imm:i32):$I2))
/*23027*/           0, /*End of Scope*/
/*23028*/         0, /*End of Scope*/
/*23029*/       0, /*End of Scope*/
/*23030*/     /*SwitchType*/ 2|128,1/*130*/, MVT::i64,// ->23163
/*23033*/       OPC_Scope, 15, /*->23050*/ // 8 children in Scope
/*23035*/         OPC_CheckPredicate, 32, // Predicate_imm64sx16
/*23037*/         OPC_EmitConvertToTarget, 0,
/*23039*/         OPC_EmitNodeXForm, 2, 1, // SIMM16
/*23042*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHI), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                  // Dst: (LGHI:i64 (SIMM16:i64 (imm:i64):$I2))
/*23050*/       /*Scope*/ 15, /*->23066*/
/*23051*/         OPC_CheckPredicate, 47, // Predicate_imm64ll16
/*23053*/         OPC_EmitConvertToTarget, 0,
/*23055*/         OPC_EmitNodeXForm, 6, 1, // LL16
/*23058*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILL), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2 - Complexity = 4
                  // Dst: (LLILL:i64 (LL16:i64 (imm:i64):$I2))
/*23066*/       /*Scope*/ 15, /*->23082*/
/*23067*/         OPC_CheckPredicate, 48, // Predicate_imm64lh16
/*23069*/         OPC_EmitConvertToTarget, 0,
/*23071*/         OPC_EmitNodeXForm, 7, 1, // LH16
/*23074*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILH), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2 - Complexity = 4
                  // Dst: (LLILH:i64 (LH16:i64 (imm:i64):$I2))
/*23082*/       /*Scope*/ 15, /*->23098*/
/*23083*/         OPC_CheckPredicate, 49, // Predicate_imm64hl16
/*23085*/         OPC_EmitConvertToTarget, 0,
/*23087*/         OPC_EmitNodeXForm, 8, 1, // HL16
/*23090*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHL), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2 - Complexity = 4
                  // Dst: (LLIHL:i64 (HL16:i64 (imm:i64):$I2))
/*23098*/       /*Scope*/ 15, /*->23114*/
/*23099*/         OPC_CheckPredicate, 50, // Predicate_imm64hh16
/*23101*/         OPC_EmitConvertToTarget, 0,
/*23103*/         OPC_EmitNodeXForm, 9, 1, // HH16
/*23106*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHH), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2 - Complexity = 4
                  // Dst: (LLIHH:i64 (HH16:i64 (imm:i64):$I2))
/*23114*/       /*Scope*/ 15, /*->23130*/
/*23115*/         OPC_CheckPredicate, 63, // Predicate_imm64sx32
/*23117*/         OPC_EmitConvertToTarget, 0,
/*23119*/         OPC_EmitNodeXForm, 11, 1, // SIMM32
/*23122*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFI), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2 - Complexity = 4
                  // Dst: (LGFI:i64 (SIMM32:i64 (imm:i64):$I2))
/*23130*/       /*Scope*/ 15, /*->23146*/
/*23131*/         OPC_CheckPredicate, 40, // Predicate_imm64lf32
/*23133*/         OPC_EmitConvertToTarget, 0,
/*23135*/         OPC_EmitNodeXForm, 3, 1, // LF32
/*23138*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILF), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2 - Complexity = 4
                  // Dst: (LLILF:i64 (LF32:i64 (imm:i64):$I2))
/*23146*/       /*Scope*/ 15, /*->23162*/
/*23147*/         OPC_CheckPredicate, 41, // Predicate_imm64hf32
/*23149*/         OPC_EmitConvertToTarget, 0,
/*23151*/         OPC_EmitNodeXForm, 4, 1, // HF32
/*23154*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHF), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2 - Complexity = 4
                  // Dst: (LLIHF:i64 (HF32:i64 (imm:i64):$I2))
/*23162*/       0, /*End of Scope*/
/*23163*/     0, // EndSwitchType
/*23164*/   /*SwitchOpcode*/ 9, TARGET_VAL(SystemZISD::RET_FLAG),// ->23176
/*23167*/     OPC_RecordNode, // #0 = 'z_retflag' chained node
/*23168*/     OPC_CaptureGlueInput,
/*23169*/     OPC_EmitMergeInputChains1_0,
/*23170*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::Return), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (z_retflag) - Complexity = 3
              // Dst: (Return)
/*23176*/   /*SwitchOpcode*/ 12, TARGET_VAL(ISD::BRIND),// ->23191
/*23179*/     OPC_RecordNode, // #0 = 'brind' chained node
/*23180*/     OPC_RecordChild1, // #1 = $R2
/*23181*/     OPC_CheckChild1Type, MVT::i64,
/*23183*/     OPC_EmitMergeInputChains1_0,
/*23184*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind ADDR64:i64:$R2) - Complexity = 3
              // Dst: (BR ADDR64:i64:$R2)
/*23191*/   /*SwitchOpcode*/ 16, TARGET_VAL(ISD::BR),// ->23210
/*23194*/     OPC_RecordNode, // #0 = 'br' chained node
/*23195*/     OPC_RecordChild1, // #1 = $I2
/*23196*/     OPC_MoveChild, 1,
/*23198*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23201*/     OPC_MoveParent,
/*23202*/     OPC_EmitMergeInputChains1_0,
/*23203*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$I2) - Complexity = 3
              // Dst: (J (bb:Other):$I2)
/*23210*/   /*SwitchOpcode*/ 81, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->23294
/*23213*/     OPC_RecordChild0, // #0 = $R2
/*23214*/     OPC_MoveChild, 1,
/*23216*/     OPC_Scope, 25, /*->23243*/ // 3 children in Scope
/*23218*/       OPC_CheckValueType, MVT::i8,
/*23220*/       OPC_MoveParent,
/*23221*/       OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->23232
/*23224*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBR), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sext_inreg:i32 GR32:i32:$R2, i8:Other) - Complexity = 3
                  // Dst: (LBR:i32 GR32:i32:$R2)
/*23232*/       /*SwitchType*/ 8, MVT::i64,// ->23242
/*23234*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGBR), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sext_inreg:i64 GR64:i64:$R2, i8:Other) - Complexity = 3
                  // Dst: (LGBR:i64 GR64:i64:$R2)
/*23242*/       0, // EndSwitchType
/*23243*/     /*Scope*/ 25, /*->23269*/
/*23244*/       OPC_CheckValueType, MVT::i16,
/*23246*/       OPC_MoveParent,
/*23247*/       OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->23258
/*23250*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHR), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sext_inreg:i32 GR32:i32:$R2, i16:Other) - Complexity = 3
                  // Dst: (LHR:i32 GR32:i32:$R2)
/*23258*/       /*SwitchType*/ 8, MVT::i64,// ->23268
/*23260*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHR), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sext_inreg:i64 GR64:i64:$R2, i16:Other) - Complexity = 3
                  // Dst: (LGHR:i64 GR64:i64:$R2)
/*23268*/       0, // EndSwitchType
/*23269*/     /*Scope*/ 23, /*->23293*/
/*23270*/       OPC_CheckValueType, MVT::i32,
/*23272*/       OPC_MoveParent,
/*23273*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*23276*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*23285*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
                // Dst: (LGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32))
/*23293*/     0, /*End of Scope*/
/*23294*/   /*SwitchOpcode*/ 9, TARGET_VAL(ISD::SIGN_EXTEND),// ->23306
/*23297*/     OPC_RecordChild0, // #0 = $R2
/*23298*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext:i64 GR32:i32:$R2) - Complexity = 3
              // Dst: (LGFR:i64 GR32:i32:$R2)
/*23306*/   /*SwitchOpcode*/ 9, TARGET_VAL(ISD::ZERO_EXTEND),// ->23318
/*23309*/     OPC_RecordChild0, // #0 = $R2
/*23310*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (zext:i64 GR32:i32:$R2) - Complexity = 3
              // Dst: (LLGFR:i64 GR32:i32:$R2)
/*23318*/   /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TRUNCATE),// ->23334
/*23321*/     OPC_RecordChild0, // #0 = $src
/*23322*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*23325*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_l32:i32)
/*23334*/   /*SwitchOpcode*/ 9, TARGET_VAL(ISD::GLOBAL_OFFSET_TABLE),// ->23346
/*23337*/     OPC_CheckType, MVT::i64,
/*23339*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::GOT), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (global_offset_table:i64) - Complexity = 3
              // Dst: (GOT:i64)
/*23346*/   /*SwitchOpcode*/ 8, TARGET_VAL(SystemZISD::SERIALIZE),// ->23357
/*23349*/     OPC_RecordNode, // #0 = 'z_serialize' chained node
/*23350*/     OPC_EmitMergeInputChains1_0,
/*23351*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::Serialize), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (z_serialize) - Complexity = 3
              // Dst: (Serialize)
/*23357*/   /*SwitchOpcode*/ 11, TARGET_VAL(SystemZISD::TEND),// ->23371
/*23360*/     OPC_RecordNode, // #0 = 'z_tend' chained node
/*23361*/     OPC_CheckPatternPredicate, 2, // (Subtarget->hasTransactionalExecution())
/*23363*/     OPC_EmitMergeInputChains1_0,
/*23364*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::TEND), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (z_tend) - Complexity = 3
              // Dst: (TEND:i32)
/*23371*/   /*SwitchOpcode*/ 8, TARGET_VAL(SystemZISD::IPM),// ->23382
/*23374*/     OPC_CaptureGlueInput,
/*23375*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::IPM), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (z_ipm:i32) - Complexity = 3
              // Dst: (IPM:i32)
/*23382*/   /*SwitchOpcode*/ 14, TARGET_VAL(SystemZISD::POPCNT),// ->23399
/*23385*/     OPC_RecordChild0, // #0 = $R2
/*23386*/     OPC_CheckType, MVT::i64,
/*23388*/     OPC_CheckPatternPredicate, 7, // (Subtarget->hasPopulationCount())
/*23390*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::POPCNT), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (z_popcnt:i64 GR64:i64:$R2) - Complexity = 3
              // Dst: (POPCNT:i64:i32 GR64:i64:$R2)
/*23399*/   /*SwitchOpcode*/ 27, TARGET_VAL(ISD::BITCAST),// ->23429
/*23402*/     OPC_RecordChild0, // #0 = $R2
/*23403*/     OPC_SwitchType /*2 cases */, 10, MVT::i64,// ->23416
/*23406*/       OPC_CheckChild0Type, MVT::f64,
/*23408*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGDR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bitconvert:i64 FP64:f64:$R2) - Complexity = 3
                // Dst: (LGDR:i64 FP64:f64:$R2)
/*23416*/     /*SwitchType*/ 10, MVT::f64,// ->23428
/*23418*/       OPC_CheckChild0Type, MVT::i64,
/*23420*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDGR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f64 GR64:i64:$R2) - Complexity = 3
                // Dst: (LDGR:f64 GR64:i64:$R2)
/*23428*/     0, // EndSwitchType
/*23429*/   /*SwitchOpcode*/ 108, TARGET_VAL(ISD::FP_TO_SINT),// ->23540
/*23432*/     OPC_RecordChild0, // #0 = $src
/*23433*/     OPC_Scope, 34, /*->23469*/ // 3 children in Scope
/*23435*/       OPC_CheckChild0Type, MVT::f32,
/*23437*/       OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->23453
/*23440*/         OPC_EmitInteger, MVT::i32, 5, 
/*23443*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFEBR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                  // Dst: (CFEBR:i32:i32 5:i32, FP32:f32:$src)
/*23453*/       /*SwitchType*/ 13, MVT::i64,// ->23468
/*23455*/         OPC_EmitInteger, MVT::i32, 5, 
/*23458*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGEBR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                  // Dst: (CGEBR:i64:i32 5:i32, FP32:f32:$src)
/*23468*/       0, // EndSwitchType
/*23469*/     /*Scope*/ 34, /*->23504*/
/*23470*/       OPC_CheckChild0Type, MVT::f64,
/*23472*/       OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->23488
/*23475*/         OPC_EmitInteger, MVT::i32, 5, 
/*23478*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFDBR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                  // Dst: (CFDBR:i32:i32 5:i32, FP64:f64:$src)
/*23488*/       /*SwitchType*/ 13, MVT::i64,// ->23503
/*23490*/         OPC_EmitInteger, MVT::i32, 5, 
/*23493*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGDBR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                  // Dst: (CGDBR:i64:i32 5:i32, FP64:f64:$src)
/*23503*/       0, // EndSwitchType
/*23504*/     /*Scope*/ 34, /*->23539*/
/*23505*/       OPC_CheckChild0Type, MVT::f128,
/*23507*/       OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->23523
/*23510*/         OPC_EmitInteger, MVT::i32, 5, 
/*23513*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFXBR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (fp_to_sint:i32 FP128:f128:$src) - Complexity = 3
                  // Dst: (CFXBR:i32:i32 5:i32, FP128:f128:$src)
/*23523*/       /*SwitchType*/ 13, MVT::i64,// ->23538
/*23525*/         OPC_EmitInteger, MVT::i32, 5, 
/*23528*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGXBR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (fp_to_sint:i64 FP128:f128:$src) - Complexity = 3
                  // Dst: (CGXBR:i64:i32 5:i32, FP128:f128:$src)
/*23538*/       0, // EndSwitchType
/*23539*/     0, /*End of Scope*/
/*23540*/   /*SwitchOpcode*/ 16|128,1/*144*/, TARGET_VAL(ISD::FP_TO_UINT),// ->23688
/*23544*/     OPC_RecordChild0, // #0 = $src
/*23545*/     OPC_Scope, 46, /*->23593*/ // 3 children in Scope
/*23547*/       OPC_CheckChild0Type, MVT::f32,
/*23549*/       OPC_SwitchType /*2 cases */, 19, MVT::i32,// ->23571
/*23552*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*23554*/         OPC_EmitInteger, MVT::i32, 5, 
/*23557*/         OPC_EmitInteger, MVT::i32, 0, 
/*23560*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFEBR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (fp_to_uint:i32 FP32:f32:$src) - Complexity = 3
                  // Dst: (CLFEBR:i32:i32 5:i32, FP32:f32:$src, 0:i32)
/*23571*/       /*SwitchType*/ 19, MVT::i64,// ->23592
/*23573*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*23575*/         OPC_EmitInteger, MVT::i32, 5, 
/*23578*/         OPC_EmitInteger, MVT::i32, 0, 
/*23581*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGEBR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (fp_to_uint:i64 FP32:f32:$src) - Complexity = 3
                  // Dst: (CLGEBR:i64:i32 5:i32, FP32:f32:$src, 0:i32)
/*23592*/       0, // EndSwitchType
/*23593*/     /*Scope*/ 46, /*->23640*/
/*23594*/       OPC_CheckChild0Type, MVT::f64,
/*23596*/       OPC_SwitchType /*2 cases */, 19, MVT::i32,// ->23618
/*23599*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*23601*/         OPC_EmitInteger, MVT::i32, 5, 
/*23604*/         OPC_EmitInteger, MVT::i32, 0, 
/*23607*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFDBR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (fp_to_uint:i32 FP64:f64:$src) - Complexity = 3
                  // Dst: (CLFDBR:i32:i32 5:i32, FP64:f64:$src, 0:i32)
/*23618*/       /*SwitchType*/ 19, MVT::i64,// ->23639
/*23620*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*23622*/         OPC_EmitInteger, MVT::i32, 5, 
/*23625*/         OPC_EmitInteger, MVT::i32, 0, 
/*23628*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGDBR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (fp_to_uint:i64 FP64:f64:$src) - Complexity = 3
                  // Dst: (CLGDBR:i64:i32 5:i32, FP64:f64:$src, 0:i32)
/*23639*/       0, // EndSwitchType
/*23640*/     /*Scope*/ 46, /*->23687*/
/*23641*/       OPC_CheckChild0Type, MVT::f128,
/*23643*/       OPC_SwitchType /*2 cases */, 19, MVT::i32,// ->23665
/*23646*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*23648*/         OPC_EmitInteger, MVT::i32, 5, 
/*23651*/         OPC_EmitInteger, MVT::i32, 0, 
/*23654*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFXBR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (fp_to_uint:i32 FP128:f128:$src) - Complexity = 3
                  // Dst: (CLFXBR:i32:i32 5:i32, FP128:f128:$src, 0:i32)
/*23665*/       /*SwitchType*/ 19, MVT::i64,// ->23686
/*23667*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*23669*/         OPC_EmitInteger, MVT::i32, 5, 
/*23672*/         OPC_EmitInteger, MVT::i32, 0, 
/*23675*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGXBR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (fp_to_uint:i64 FP128:f128:$src) - Complexity = 3
                  // Dst: (CLGXBR:i64:i32 5:i32, FP128:f128:$src, 0:i32)
/*23686*/       0, // EndSwitchType
/*23687*/     0, /*End of Scope*/
/*23688*/   /*SwitchOpcode*/ 24, TARGET_VAL(ISD::CTLZ),// ->23715
/*23691*/     OPC_RecordChild0, // #0 = $src
/*23692*/     OPC_CheckType, MVT::i64,
/*23694*/     OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR), 0,
                  2/*#VTs*/, MVT::Untyped, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 #2
/*23703*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*23706*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i64 (FLOGR:Untyped:i32 GR64:i64:$src), subreg_h64:i32)
/*23715*/   /*SwitchOpcode*/ 21, TARGET_VAL(ISD::ANY_EXTEND),// ->23739
/*23718*/     OPC_RecordChild0, // #0 = $src
/*23719*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*23726*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_l32,
/*23729*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
              // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_l32:i32)
/*23739*/   /*SwitchOpcode*/ 22, TARGET_VAL(SystemZISD::STPCPY),// ->23764
/*23742*/     OPC_RecordNode, // #0 = 'z_stpcpy' chained node
/*23743*/     OPC_RecordChild1, // #1 = $start1
/*23744*/     OPC_CheckChild1Type, MVT::i64,
/*23746*/     OPC_RecordChild2, // #2 = $start2
/*23747*/     OPC_CheckChild2Type, MVT::i64,
/*23749*/     OPC_RecordChild3, // #3 = $char
/*23750*/     OPC_CheckType, MVT::i64,
/*23752*/     OPC_EmitMergeInputChains1_0,
/*23753*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVSTLoop), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (z_stpcpy:i64 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char) - Complexity = 3
              // Dst: (MVSTLoop:i64:i32 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char)
/*23764*/   /*SwitchOpcode*/ 22, TARGET_VAL(SystemZISD::STRCMP),// ->23789
/*23767*/     OPC_RecordNode, // #0 = 'z_strcmp' chained node
/*23768*/     OPC_RecordChild1, // #1 = $start1
/*23769*/     OPC_CheckChild1Type, MVT::i64,
/*23771*/     OPC_RecordChild2, // #2 = $start2
/*23772*/     OPC_CheckChild2Type, MVT::i64,
/*23774*/     OPC_RecordChild3, // #3 = $char
/*23775*/     OPC_CheckType, MVT::i64,
/*23777*/     OPC_EmitMergeInputChains1_0,
/*23778*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLSTLoop), 0|OPFL_Chain|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (z_strcmp:i64 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char) - Complexity = 3
              // Dst: (CLSTLoop:i64:i32 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char)
/*23789*/   /*SwitchOpcode*/ 22, TARGET_VAL(SystemZISD::SEARCH_STRING),// ->23814
/*23792*/     OPC_RecordNode, // #0 = 'z_search_string' chained node
/*23793*/     OPC_RecordChild1, // #1 = $start1
/*23794*/     OPC_CheckChild1Type, MVT::i64,
/*23796*/     OPC_RecordChild2, // #2 = $start2
/*23797*/     OPC_CheckChild2Type, MVT::i64,
/*23799*/     OPC_RecordChild3, // #3 = $char
/*23800*/     OPC_CheckType, MVT::i64,
/*23802*/     OPC_EmitMergeInputChains1_0,
/*23803*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRSTLoop), 0|OPFL_Chain|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (z_search_string:i64 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char) - Complexity = 3
              // Dst: (SRSTLoop:i64:i32 GR64:i64:$start1, GR64:i64:$start2, GR32:i32:$char)
/*23814*/   /*SwitchOpcode*/ 46|128,1/*174*/, TARGET_VAL(ISD::FMA),// ->23992
/*23818*/     OPC_RecordChild0, // #0 = $R3
/*23819*/     OPC_Scope, 104, /*->23925*/ // 2 children in Scope
/*23821*/       OPC_MoveChild, 1,
/*23823*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*23826*/       OPC_RecordMemRef,
/*23827*/       OPC_RecordNode, // #1 = 'ld' chained node
/*23828*/       OPC_CheckFoldableChainNode,
/*23829*/       OPC_RecordChild1, // #2 = $XBD2
/*23830*/       OPC_CheckChild1Type, MVT::i64,
/*23832*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*23834*/       OPC_CheckPredicate, 13, // Predicate_load
/*23836*/       OPC_MoveParent,
/*23837*/       OPC_Scope, 45, /*->23884*/ // 2 children in Scope
/*23839*/         OPC_MoveChild, 2,
/*23841*/         OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*23844*/         OPC_RecordChild0, // #3 = $R1src
/*23845*/         OPC_MoveParent,
/*23846*/         OPC_SwitchType /*2 cases */, 16, MVT::f32,// ->23865
/*23849*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*23852*/           OPC_EmitMergeInputChains1_1,
/*23853*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                    // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f32 FP32:f32:$R1src)) - Complexity = 22
                    // Dst: (MSEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
/*23865*/         /*SwitchType*/ 16, MVT::f64,// ->23883
/*23867*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*23870*/           OPC_EmitMergeInputChains1_1,
/*23871*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                    // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f64 FP64:f64:$R1src)) - Complexity = 22
                    // Dst: (MSDB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
/*23883*/         0, // EndSwitchType
/*23884*/       /*Scope*/ 39, /*->23924*/
/*23885*/         OPC_RecordChild2, // #3 = $R1src
/*23886*/         OPC_SwitchType /*2 cases */, 16, MVT::f32,// ->23905
/*23889*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*23892*/           OPC_EmitMergeInputChains1_1,
/*23893*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                    // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                    // Dst: (MAEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
/*23905*/         /*SwitchType*/ 16, MVT::f64,// ->23923
/*23907*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*23910*/           OPC_EmitMergeInputChains1_1,
/*23911*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                    // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                    // Dst: (MADB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
/*23923*/         0, // EndSwitchType
/*23924*/       0, /*End of Scope*/
/*23925*/     /*Scope*/ 65, /*->23991*/
/*23926*/       OPC_RecordChild1, // #1 = $R2
/*23927*/       OPC_Scope, 33, /*->23962*/ // 2 children in Scope
/*23929*/         OPC_MoveChild, 2,
/*23931*/         OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*23934*/         OPC_RecordChild0, // #2 = $R1src
/*23935*/         OPC_MoveParent,
/*23936*/         OPC_SwitchType /*2 cases */, 10, MVT::f32,// ->23949
/*23939*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEBR), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, (fneg:f32 FP32:f32:$R1src)) - Complexity = 6
                    // Dst: (MSEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
/*23949*/         /*SwitchType*/ 10, MVT::f64,// ->23961
/*23951*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDBR), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, (fneg:f64 FP64:f64:$R1src)) - Complexity = 6
                    // Dst: (MSDBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
/*23961*/         0, // EndSwitchType
/*23962*/       /*Scope*/ 27, /*->23990*/
/*23963*/         OPC_RecordChild2, // #2 = $R1src
/*23964*/         OPC_SwitchType /*2 cases */, 10, MVT::f32,// ->23977
/*23967*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEBR), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, FP32:f32:$R1src) - Complexity = 3
                    // Dst: (MAEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
/*23977*/         /*SwitchType*/ 10, MVT::f64,// ->23989
/*23979*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADBR), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, FP64:f64:$R1src) - Complexity = 3
                    // Dst: (MADBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
/*23989*/         0, // EndSwitchType
/*23990*/       0, /*End of Scope*/
/*23991*/     0, /*End of Scope*/
/*23992*/   /*SwitchOpcode*/ 98|128,3/*482*/, TARGET_VAL(ISD::FMUL),// ->24478
/*23996*/     OPC_Scope, 111|128,1/*239*/, /*->24238*/ // 4 children in Scope
/*23999*/       OPC_MoveChild, 0,
/*24001*/       OPC_SwitchOpcode /*2 cases */, 119, TARGET_VAL(ISD::FP_EXTEND),// ->24124
/*24005*/         OPC_RecordChild0, // #0 = $src1
/*24006*/         OPC_Scope, 56, /*->24064*/ // 2 children in Scope
/*24008*/           OPC_MoveParent,
/*24009*/           OPC_MoveChild, 1,
/*24011*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24014*/           OPC_RecordMemRef,
/*24015*/           OPC_RecordNode, // #1 = 'ld' chained node
/*24016*/           OPC_CheckFoldableChainNode,
/*24017*/           OPC_RecordChild1, // #2 = $addr
/*24018*/           OPC_CheckChild1Type, MVT::i64,
/*24020*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24022*/           OPC_CheckPredicate, 77, // Predicate_extload
/*24024*/           OPC_CheckPredicate, 78, // Predicate_extloadf32
/*24026*/           OPC_MoveParent,
/*24027*/           OPC_CheckType, MVT::f64,
/*24029*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*24032*/           OPC_EmitMergeInputChains1_1,
/*24033*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*24040*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_h32,
/*24043*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*24053*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                    // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>) - Complexity = 22
                    // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_h32:i32), bdxaddr12only:i64:$addr)
/*24064*/         /*Scope*/ 58, /*->24123*/
/*24065*/           OPC_CheckChild0Type, MVT::f64,
/*24067*/           OPC_MoveParent,
/*24068*/           OPC_MoveChild, 1,
/*24070*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24073*/           OPC_RecordMemRef,
/*24074*/           OPC_RecordNode, // #1 = 'ld' chained node
/*24075*/           OPC_CheckFoldableChainNode,
/*24076*/           OPC_RecordChild1, // #2 = $addr
/*24077*/           OPC_CheckChild1Type, MVT::i64,
/*24079*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24081*/           OPC_CheckPredicate, 77, // Predicate_extload
/*24083*/           OPC_CheckPredicate, 79, // Predicate_extloadf64
/*24085*/           OPC_MoveParent,
/*24086*/           OPC_CheckType, MVT::f128,
/*24088*/           OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*24091*/           OPC_EmitMergeInputChains1_1,
/*24092*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*24099*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*24102*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*24112*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                    // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>) - Complexity = 22
                    // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_h64:i32), bdxaddr12only:i64:$addr)
/*24123*/         0, /*End of Scope*/
/*24124*/       /*SwitchOpcode*/ 110, TARGET_VAL(ISD::LOAD),// ->24237
/*24127*/         OPC_RecordMemRef,
/*24128*/         OPC_RecordNode, // #0 = 'ld' chained node
/*24129*/         OPC_CheckFoldableChainNode,
/*24130*/         OPC_RecordChild1, // #1 = $addr
/*24131*/         OPC_CheckChild1Type, MVT::i64,
/*24133*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24135*/         OPC_CheckPredicate, 77, // Predicate_extload
/*24137*/         OPC_Scope, 47, /*->24186*/ // 2 children in Scope
/*24139*/           OPC_CheckPredicate, 78, // Predicate_extloadf32
/*24141*/           OPC_MoveParent,
/*24142*/           OPC_MoveChild, 1,
/*24144*/           OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*24147*/           OPC_RecordChild0, // #2 = $src1
/*24148*/           OPC_MoveParent,
/*24149*/           OPC_CheckType, MVT::f64,
/*24151*/           OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*24154*/           OPC_EmitMergeInputChains1_0,
/*24155*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*24162*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_h32,
/*24165*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*24175*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                    // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>, (fextend:f64 FP32:f32:$src1)) - Complexity = 22
                    // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_h32:i32), bdxaddr12only:i64:$addr)
/*24186*/         /*Scope*/ 49, /*->24236*/
/*24187*/           OPC_CheckPredicate, 79, // Predicate_extloadf64
/*24189*/           OPC_MoveParent,
/*24190*/           OPC_MoveChild, 1,
/*24192*/           OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*24195*/           OPC_RecordChild0, // #2 = $src1
/*24196*/           OPC_CheckChild0Type, MVT::f64,
/*24198*/           OPC_MoveParent,
/*24199*/           OPC_CheckType, MVT::f128,
/*24201*/           OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*24204*/           OPC_EmitMergeInputChains1_0,
/*24205*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*24212*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*24215*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*24225*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                    // Src: (fmul:f128 (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>, (fextend:f128 FP64:f64:$src1)) - Complexity = 22
                    // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_h64:i32), bdxaddr12only:i64:$addr)
/*24236*/         0, /*End of Scope*/
/*24237*/       0, // EndSwitchOpcode
/*24238*/     /*Scope*/ 53, /*->24292*/
/*24239*/       OPC_RecordChild0, // #0 = $R1src
/*24240*/       OPC_MoveChild, 1,
/*24242*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24245*/       OPC_RecordMemRef,
/*24246*/       OPC_RecordNode, // #1 = 'ld' chained node
/*24247*/       OPC_CheckFoldableChainNode,
/*24248*/       OPC_RecordChild1, // #2 = $XBD2
/*24249*/       OPC_CheckChild1Type, MVT::i64,
/*24251*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24253*/       OPC_CheckPredicate, 13, // Predicate_load
/*24255*/       OPC_MoveParent,
/*24256*/       OPC_SwitchType /*2 cases */, 15, MVT::f32,// ->24274
/*24259*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24262*/         OPC_EmitMergeInputChains1_1,
/*24263*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fmul:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
/*24274*/       /*SwitchType*/ 15, MVT::f64,// ->24291
/*24276*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24279*/         OPC_EmitMergeInputChains1_1,
/*24280*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fmul:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
/*24291*/       0, // EndSwitchType
/*24292*/     /*Scope*/ 17|128,1/*145*/, /*->24439*/
/*24294*/       OPC_MoveChild, 0,
/*24296*/       OPC_SwitchOpcode /*2 cases */, 48, TARGET_VAL(ISD::LOAD),// ->24348
/*24300*/         OPC_RecordMemRef,
/*24301*/         OPC_RecordNode, // #0 = 'ld' chained node
/*24302*/         OPC_CheckFoldableChainNode,
/*24303*/         OPC_RecordChild1, // #1 = $XBD2
/*24304*/         OPC_CheckChild1Type, MVT::i64,
/*24306*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24308*/         OPC_CheckPredicate, 13, // Predicate_load
/*24310*/         OPC_MoveParent,
/*24311*/         OPC_RecordChild1, // #2 = $R1src
/*24312*/         OPC_SwitchType /*2 cases */, 15, MVT::f32,// ->24330
/*24315*/           OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24318*/           OPC_EmitMergeInputChains1_0,
/*24319*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (fmul:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                    // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
/*24330*/         /*SwitchType*/ 15, MVT::f64,// ->24347
/*24332*/           OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24335*/           OPC_EmitMergeInputChains1_0,
/*24336*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                    // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
/*24347*/         0, // EndSwitchType
/*24348*/       /*SwitchOpcode*/ 87, TARGET_VAL(ISD::FP_EXTEND),// ->24438
/*24351*/         OPC_RecordChild0, // #0 = $src1
/*24352*/         OPC_Scope, 39, /*->24393*/ // 2 children in Scope
/*24354*/           OPC_MoveParent,
/*24355*/           OPC_MoveChild, 1,
/*24357*/           OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*24360*/           OPC_RecordChild0, // #1 = $src2
/*24361*/           OPC_MoveParent,
/*24362*/           OPC_CheckType, MVT::f64,
/*24364*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #2
/*24371*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_h32,
/*24374*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*24384*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEBR), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 1, 
                    // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (fextend:f64 FP32:f32:$src2)) - Complexity = 9
                    // Dst: (MDEBR:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_h32:i32), FP32:f32:$src2)
/*24393*/         /*Scope*/ 43, /*->24437*/
/*24394*/           OPC_CheckChild0Type, MVT::f64,
/*24396*/           OPC_MoveParent,
/*24397*/           OPC_MoveChild, 1,
/*24399*/           OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*24402*/           OPC_RecordChild0, // #1 = $src2
/*24403*/           OPC_CheckChild0Type, MVT::f64,
/*24405*/           OPC_MoveParent,
/*24406*/           OPC_CheckType, MVT::f128,
/*24408*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #2
/*24415*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*24418*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*24428*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDBR), 0,
                        1/*#VTs*/, MVT::f128, 2/*#Ops*/, 4, 1, 
                    // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (fextend:f128 FP64:f64:$src2)) - Complexity = 9
                    // Dst: (MXDBR:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_h64:i32), FP64:f64:$src2)
/*24437*/         0, /*End of Scope*/
/*24438*/       0, // EndSwitchOpcode
/*24439*/     /*Scope*/ 37, /*->24477*/
/*24440*/       OPC_RecordChild0, // #0 = $R1src
/*24441*/       OPC_RecordChild1, // #1 = $R2
/*24442*/       OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->24454
/*24445*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEBR), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                  // Dst: (MEEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
/*24454*/       /*SwitchType*/ 9, MVT::f64,// ->24465
/*24456*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                  // Dst: (MDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
/*24465*/       /*SwitchType*/ 9, MVT::f128,// ->24476
/*24467*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                  // Dst: (MXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
/*24476*/       0, // EndSwitchType
/*24477*/     0, /*End of Scope*/
/*24478*/   /*SwitchOpcode*/ 86, TARGET_VAL(ISD::FSQRT),// ->24567
/*24481*/     OPC_Scope, 49, /*->24532*/ // 2 children in Scope
/*24483*/       OPC_MoveChild, 0,
/*24485*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24488*/       OPC_RecordMemRef,
/*24489*/       OPC_RecordNode, // #0 = 'ld' chained node
/*24490*/       OPC_RecordChild1, // #1 = $XBD2
/*24491*/       OPC_CheckChild1Type, MVT::i64,
/*24493*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24495*/       OPC_CheckPredicate, 13, // Predicate_load
/*24497*/       OPC_MoveParent,
/*24498*/       OPC_SwitchType /*2 cases */, 14, MVT::f32,// ->24515
/*24501*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*24504*/         OPC_EmitMergeInputChains1_0,
/*24505*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (fsqrt:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SQEB:f32 bdxaddr12only:i64:$XBD2)
/*24515*/       /*SwitchType*/ 14, MVT::f64,// ->24531
/*24517*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*24520*/         OPC_EmitMergeInputChains1_0,
/*24521*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (fsqrt:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SQDB:f64 bdxaddr12only:i64:$XBD2)
/*24531*/       0, // EndSwitchType
/*24532*/     /*Scope*/ 33, /*->24566*/
/*24533*/       OPC_RecordChild0, // #0 = $R2
/*24534*/       OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->24545
/*24537*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEBR), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fsqrt:f32 FP32:f32:$R2) - Complexity = 3
                  // Dst: (SQEBR:f32 FP32:f32:$R2)
/*24545*/       /*SwitchType*/ 8, MVT::f64,// ->24555
/*24547*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDBR), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fsqrt:f64 FP64:f64:$R2) - Complexity = 3
                  // Dst: (SQDBR:f64 FP64:f64:$R2)
/*24555*/       /*SwitchType*/ 8, MVT::f128,// ->24565
/*24557*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQXBR), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fsqrt:f128 FP128:f128:$R2) - Complexity = 3
                  // Dst: (SQXBR:f128 FP128:f128:$R2)
/*24565*/       0, // EndSwitchType
/*24566*/     0, /*End of Scope*/
/*24567*/   /*SwitchOpcode*/ 27|128,1/*155*/, TARGET_VAL(ISD::FADD),// ->24726
/*24571*/     OPC_Scope, 55, /*->24628*/ // 3 children in Scope
/*24573*/       OPC_RecordChild0, // #0 = $R1src
/*24574*/       OPC_MoveChild, 1,
/*24576*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24579*/       OPC_RecordMemRef,
/*24580*/       OPC_RecordNode, // #1 = 'ld' chained node
/*24581*/       OPC_CheckFoldableChainNode,
/*24582*/       OPC_RecordChild1, // #2 = $XBD2
/*24583*/       OPC_CheckChild1Type, MVT::i64,
/*24585*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24587*/       OPC_CheckPredicate, 13, // Predicate_load
/*24589*/       OPC_MoveParent,
/*24590*/       OPC_SwitchType /*2 cases */, 16, MVT::f32,// ->24609
/*24593*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24596*/         OPC_EmitMergeInputChains1_1,
/*24597*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fadd:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
/*24609*/       /*SwitchType*/ 16, MVT::f64,// ->24627
/*24611*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24614*/         OPC_EmitMergeInputChains1_1,
/*24615*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fadd:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
/*24627*/       0, // EndSwitchType
/*24628*/     /*Scope*/ 55, /*->24684*/
/*24629*/       OPC_MoveChild, 0,
/*24631*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24634*/       OPC_RecordMemRef,
/*24635*/       OPC_RecordNode, // #0 = 'ld' chained node
/*24636*/       OPC_CheckFoldableChainNode,
/*24637*/       OPC_RecordChild1, // #1 = $XBD2
/*24638*/       OPC_CheckChild1Type, MVT::i64,
/*24640*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24642*/       OPC_CheckPredicate, 13, // Predicate_load
/*24644*/       OPC_MoveParent,
/*24645*/       OPC_RecordChild1, // #2 = $R1src
/*24646*/       OPC_SwitchType /*2 cases */, 16, MVT::f32,// ->24665
/*24649*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24652*/         OPC_EmitMergeInputChains1_0,
/*24653*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fadd:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
/*24665*/       /*SwitchType*/ 16, MVT::f64,// ->24683
/*24667*/         OPC_CheckComplexPat, /*CP*/16, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24670*/         OPC_EmitMergeInputChains1_0,
/*24671*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fadd:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
/*24683*/       0, // EndSwitchType
/*24684*/     /*Scope*/ 40, /*->24725*/
/*24685*/       OPC_RecordChild0, // #0 = $R1src
/*24686*/       OPC_RecordChild1, // #1 = $R2
/*24687*/       OPC_SwitchType /*3 cases */, 10, MVT::f32,// ->24700
/*24690*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEBR), 0,
                      2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                  // Dst: (AEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
/*24700*/       /*SwitchType*/ 10, MVT::f64,// ->24712
/*24702*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADBR), 0,
                      2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                  // Dst: (ADBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
/*24712*/       /*SwitchType*/ 10, MVT::f128,// ->24724
/*24714*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AXBR), 0,
                      2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                  // Dst: (AXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
/*24724*/       0, // EndSwitchType
/*24725*/     0, /*End of Scope*/
/*24726*/   /*SwitchOpcode*/ 98, TARGET_VAL(ISD::FSUB),// ->24827
/*24729*/     OPC_RecordChild0, // #0 = $R1src
/*24730*/     OPC_Scope, 54, /*->24786*/ // 2 children in Scope
/*24732*/       OPC_MoveChild, 1,
/*24734*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24737*/       OPC_RecordMemRef,
/*24738*/       OPC_RecordNode, // #1 = 'ld' chained node
/*24739*/       OPC_CheckFoldableChainNode,
/*24740*/       OPC_RecordChild1, // #2 = $XBD2
/*24741*/       OPC_CheckChild1Type, MVT::i64,
/*24743*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24745*/       OPC_CheckPredicate, 13, // Predicate_load
/*24747*/       OPC_MoveParent,
/*24748*/       OPC_SwitchType /*2 cases */, 16, MVT::f32,// ->24767
/*24751*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24754*/         OPC_EmitMergeInputChains1_1,
/*24755*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEB), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fsub:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
/*24767*/       /*SwitchType*/ 16, MVT::f64,// ->24785
/*24769*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24772*/         OPC_EmitMergeInputChains1_1,
/*24773*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDB), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fsub:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SDB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
/*24785*/       0, // EndSwitchType
/*24786*/     /*Scope*/ 39, /*->24826*/
/*24787*/       OPC_RecordChild1, // #1 = $R2
/*24788*/       OPC_SwitchType /*3 cases */, 10, MVT::f32,// ->24801
/*24791*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEBR), 0,
                      2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                  // Dst: (SEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
/*24801*/       /*SwitchType*/ 10, MVT::f64,// ->24813
/*24803*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDBR), 0,
                      2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                  // Dst: (SDBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
/*24813*/       /*SwitchType*/ 10, MVT::f128,// ->24825
/*24815*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::SXBR), 0,
                      2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                  // Dst: (SXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
/*24825*/       0, // EndSwitchType
/*24826*/     0, /*End of Scope*/
/*24827*/   /*SwitchOpcode*/ 93, TARGET_VAL(ISD::FDIV),// ->24923
/*24830*/     OPC_RecordChild0, // #0 = $R1src
/*24831*/     OPC_Scope, 52, /*->24885*/ // 2 children in Scope
/*24833*/       OPC_MoveChild, 1,
/*24835*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*24838*/       OPC_RecordMemRef,
/*24839*/       OPC_RecordNode, // #1 = 'ld' chained node
/*24840*/       OPC_CheckFoldableChainNode,
/*24841*/       OPC_RecordChild1, // #2 = $XBD2
/*24842*/       OPC_CheckChild1Type, MVT::i64,
/*24844*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*24846*/       OPC_CheckPredicate, 13, // Predicate_load
/*24848*/       OPC_MoveParent,
/*24849*/       OPC_SwitchType /*2 cases */, 15, MVT::f32,// ->24867
/*24852*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24855*/         OPC_EmitMergeInputChains1_1,
/*24856*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fdiv:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (DEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
/*24867*/       /*SwitchType*/ 15, MVT::f64,// ->24884
/*24869*/         OPC_CheckComplexPat, /*CP*/16, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*24872*/         OPC_EmitMergeInputChains1_1,
/*24873*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fdiv:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (DDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
/*24884*/       0, // EndSwitchType
/*24885*/     /*Scope*/ 36, /*->24922*/
/*24886*/       OPC_RecordChild1, // #1 = $R2
/*24887*/       OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->24899
/*24890*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEBR), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fdiv:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                  // Dst: (DEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
/*24899*/       /*SwitchType*/ 9, MVT::f64,// ->24910
/*24901*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fdiv:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                  // Dst: (DDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
/*24910*/       /*SwitchType*/ 9, MVT::f128,// ->24921
/*24912*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::DXBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fdiv:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                  // Dst: (DXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
/*24921*/       0, // EndSwitchType
/*24922*/     0, /*End of Scope*/
/*24923*/   /*SwitchOpcode*/ 82, TARGET_VAL(ISD::FNEG),// ->25008
/*24926*/     OPC_Scope, 42, /*->24970*/ // 2 children in Scope
/*24928*/       OPC_MoveChild, 0,
/*24930*/       OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*24933*/       OPC_RecordChild0, // #0 = $R2
/*24934*/       OPC_MoveParent,
/*24935*/       OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->24947
/*24938*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNEBR), 0,
                      2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 FP32:f32:$R2)) - Complexity = 6
                  // Dst: (LNEBR:f32:i32 FP32:f32:$R2)
/*24947*/       /*SwitchType*/ 9, MVT::f64,// ->24958
/*24949*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNDBR), 0,
                      2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 FP64:f64:$R2)) - Complexity = 6
                  // Dst: (LNDBR:f64:i32 FP64:f64:$R2)
/*24958*/       /*SwitchType*/ 9, MVT::f128,// ->24969
/*24960*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNXBR), 0,
                      2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f128 (fabs:f128 FP128:f128:$R2)) - Complexity = 6
                  // Dst: (LNXBR:f128:i32 FP128:f128:$R2)
/*24969*/       0, // EndSwitchType
/*24970*/     /*Scope*/ 36, /*->25007*/
/*24971*/       OPC_RecordChild0, // #0 = $R2
/*24972*/       OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->24984
/*24975*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                      2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 FP32:f32:$R2) - Complexity = 3
                  // Dst: (LCEBR:f32:i32 FP32:f32:$R2)
/*24984*/       /*SwitchType*/ 9, MVT::f64,// ->24995
/*24986*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                      2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 FP64:f64:$R2) - Complexity = 3
                  // Dst: (LCDBR:f64:i32 FP64:f64:$R2)
/*24995*/       /*SwitchType*/ 9, MVT::f128,// ->25006
/*24997*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                      2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f128 FP128:f128:$R2) - Complexity = 3
                  // Dst: (LCXBR:f128:i32 FP128:f128:$R2)
/*25006*/       0, // EndSwitchType
/*25007*/     0, /*End of Scope*/
/*25008*/   /*SwitchOpcode*/ 93, TARGET_VAL(ISD::ConstantFP),// ->25104
/*25011*/     OPC_Scope, 31, /*->25044*/ // 2 children in Scope
/*25013*/       OPC_CheckPredicate, 74, // Predicate_fpimm0
/*25015*/       OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->25025
/*25018*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZER), 0,
                      1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                  // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                  // Dst: (LZER:f32)
/*25025*/       /*SwitchType*/ 7, MVT::f64,// ->25034
/*25027*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZDR), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                  // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                  // Dst: (LZDR:f64)
/*25034*/       /*SwitchType*/ 7, MVT::f128,// ->25043
/*25036*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZXR), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/, 
                  // Src: (fpimm:f128)<<P:Predicate_fpimm0>> - Complexity = 4
                  // Dst: (LZXR:f128)
/*25043*/       0, // EndSwitchType
/*25044*/     /*Scope*/ 58, /*->25103*/
/*25045*/       OPC_CheckPredicate, 75, // Predicate_fpimmneg0
/*25047*/       OPC_SwitchType /*3 cases */, 16, MVT::f32,// ->25066
/*25050*/         OPC_EmitNode, TARGET_VAL(SystemZ::LZER), 0,
                      1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0
/*25057*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                      2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                  // Dst: (LCEBR:f32:i32 (LZER:f32))
/*25066*/       /*SwitchType*/ 16, MVT::f64,// ->25084
/*25068*/         OPC_EmitNode, TARGET_VAL(SystemZ::LZDR), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0
/*25075*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                      2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                  // Dst: (LCDBR:f64:i32 (LZDR:f64))
/*25084*/       /*SwitchType*/ 16, MVT::f128,// ->25102
/*25086*/         OPC_EmitNode, TARGET_VAL(SystemZ::LZXR), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #0
/*25093*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                      2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (fpimm:f128)<<P:Predicate_fpimmneg0>> - Complexity = 4
                  // Dst: (LCXBR:f128:i32 (LZXR:f128))
/*25102*/       0, // EndSwitchType
/*25103*/     0, /*End of Scope*/
/*25104*/   /*SwitchOpcode*/ 101|128,1/*229*/, TARGET_VAL(ISD::FCOPYSIGN),// ->25337
/*25108*/     OPC_RecordChild0, // #0 = $R3
/*25109*/     OPC_RecordChild1, // #1 = $R2
/*25110*/     OPC_Scope, 62, /*->25174*/ // 3 children in Scope
/*25112*/       OPC_CheckChild1Type, MVT::f32,
/*25114*/       OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->25126
/*25117*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRss), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fcopysign:f32 FP32:f32:$R3, FP32:f32:$R2) - Complexity = 3
                  // Dst: (CPSDRss:f32 FP32:f32:$R3, FP32:f32:$R2)
/*25126*/       /*SwitchType*/ 9, MVT::f64,// ->25137
/*25128*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRds), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fcopysign:f64 FP64:f64:$R3, FP32:f32:$R2) - Complexity = 3
                  // Dst: (CPSDRds:f64 FP64:f64:$R3, FP32:f32:$R2)
/*25137*/       /*SwitchType*/ 34, MVT::f128,// ->25173
/*25139*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25142*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*25151*/         OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRds), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*25160*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25163*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                  // Src: (fcopysign:f128 FP128:f128:$src1, FP32:f32:$src2) - Complexity = 3
                  // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRds:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_h64:i32), FP32:f32:$src2), subreg_h64:i32)
/*25173*/       0, // EndSwitchType
/*25174*/     /*Scope*/ 62, /*->25237*/
/*25175*/       OPC_CheckChild1Type, MVT::f64,
/*25177*/       OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->25189
/*25180*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fcopysign:f32 FP32:f32:$R3, FP64:f64:$R2) - Complexity = 3
                  // Dst: (CPSDRsd:f32 FP32:f32:$R3, FP64:f64:$R2)
/*25189*/       /*SwitchType*/ 9, MVT::f64,// ->25200
/*25191*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fcopysign:f64 FP64:f64:$R3, FP64:f64:$R2) - Complexity = 3
                  // Dst: (CPSDRdd:f64 FP64:f64:$R3, FP64:f64:$R2)
/*25200*/       /*SwitchType*/ 34, MVT::f128,// ->25236
/*25202*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25205*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*25214*/         OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*25223*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25226*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                  // Src: (fcopysign:f128 FP128:f128:$src1, FP64:f64:$src2) - Complexity = 3
                  // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_h64:i32), FP64:f64:$src2), subreg_h64:i32)
/*25236*/       0, // EndSwitchType
/*25237*/     /*Scope*/ 98, /*->25336*/
/*25238*/       OPC_CheckChild1Type, MVT::f128,
/*25240*/       OPC_SwitchType /*3 cases */, 21, MVT::f32,// ->25264
/*25243*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25246*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*25255*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                  // Src: (fcopysign:f32 FP32:f32:$src1, FP128:f128:$src2) - Complexity = 3
                  // Dst: (CPSDRsd:f32 FP32:f32:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_h64:i32))
/*25264*/       /*SwitchType*/ 21, MVT::f64,// ->25287
/*25266*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25269*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*25278*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 3, 
                  // Src: (fcopysign:f64 FP64:f64:$src1, FP128:f128:$src2) - Complexity = 3
                  // Dst: (CPSDRdd:f64 FP64:f64:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_h64:i32))
/*25287*/       /*SwitchType*/ 46, MVT::f128,// ->25335
/*25289*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25292*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*25301*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25304*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 4,  // Results = #5
/*25313*/         OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 5,  // Results = #6
/*25322*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25325*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 6, 7, 
                  // Src: (fcopysign:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                  // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_h64:i32), (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_h64:i32)), subreg_h64:i32)
/*25335*/       0, // EndSwitchType
/*25336*/     0, /*End of Scope*/
/*25337*/   /*SwitchOpcode*/ 63, TARGET_VAL(ISD::FP_ROUND),// ->25403
/*25340*/     OPC_RecordChild0, // #0 = $R2
/*25341*/     OPC_SwitchType /*2 cases */, 36, MVT::f32,// ->25380
/*25344*/       OPC_Scope, 10, /*->25356*/ // 2 children in Scope
/*25346*/         OPC_CheckChild0Type, MVT::f64,
/*25348*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEDBR), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fround:f32 FP64:f64:$R2) - Complexity = 3
                  // Dst: (LEDBR:f32 FP64:f64:$R2)
/*25356*/       /*Scope*/ 22, /*->25379*/
/*25357*/         OPC_CheckChild0Type, MVT::f128,
/*25359*/         OPC_EmitNode, TARGET_VAL(SystemZ::LEXBR), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*25367*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_hh32,
/*25370*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (fround:f32 FP128:f128:$src) - Complexity = 3
                  // Dst: (EXTRACT_SUBREG:f32 (LEXBR:f128 FP128:f128:$src), subreg_hh32:i32)
/*25379*/       0, /*End of Scope*/
/*25380*/     /*SwitchType*/ 20, MVT::f64,// ->25402
/*25382*/       OPC_EmitNode, TARGET_VAL(SystemZ::LDXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*25390*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_h64,
/*25393*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                // Src: (fround:f64 FP128:f128:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f64 (LDXBR:f128 FP128:f128:$src), subreg_h64:i32)
/*25402*/     0, // EndSwitchType
/*25403*/   /*SwitchOpcode*/ 39, TARGET_VAL(ISD::FP_EXTEND),// ->25445
/*25406*/     OPC_RecordChild0, // #0 = $R2
/*25407*/     OPC_SwitchType /*2 cases */, 8, MVT::f64,// ->25418
/*25410*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fextend:f64 FP32:f32:$R2) - Complexity = 3
                // Dst: (LDEBR:f64 FP32:f32:$R2)
/*25418*/     /*SwitchType*/ 24, MVT::f128,// ->25444
/*25420*/       OPC_Scope, 10, /*->25432*/ // 2 children in Scope
/*25422*/         OPC_CheckChild0Type, MVT::f32,
/*25424*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEBR), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fextend:f128 FP32:f32:$R2) - Complexity = 3
                  // Dst: (LXEBR:f128 FP32:f32:$R2)
/*25432*/       /*Scope*/ 10, /*->25443*/
/*25433*/         OPC_CheckChild0Type, MVT::f64,
/*25435*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDBR), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fextend:f128 FP64:f64:$R2) - Complexity = 3
                  // Dst: (LXDBR:f128 FP64:f64:$R2)
/*25443*/       0, /*End of Scope*/
/*25444*/     0, // EndSwitchType
/*25445*/   /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SINT_TO_FP),// ->25521
/*25448*/     OPC_RecordChild0, // #0 = $R2
/*25449*/     OPC_Scope, 34, /*->25485*/ // 2 children in Scope
/*25451*/       OPC_CheckChild0Type, MVT::i32,
/*25453*/       OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->25464
/*25456*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEFBR), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f32 GR32:i32:$R2) - Complexity = 3
                  // Dst: (CEFBR:f32 GR32:i32:$R2)
/*25464*/       /*SwitchType*/ 8, MVT::f64,// ->25474
/*25466*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDFBR), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 GR32:i32:$R2) - Complexity = 3
                  // Dst: (CDFBR:f64 GR32:i32:$R2)
/*25474*/       /*SwitchType*/ 8, MVT::f128,// ->25484
/*25476*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXFBR), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f128 GR32:i32:$R2) - Complexity = 3
                  // Dst: (CXFBR:f128 GR32:i32:$R2)
/*25484*/       0, // EndSwitchType
/*25485*/     /*Scope*/ 34, /*->25520*/
/*25486*/       OPC_CheckChild0Type, MVT::i64,
/*25488*/       OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->25499
/*25491*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEGBR), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f32 GR64:i64:$R2) - Complexity = 3
                  // Dst: (CEGBR:f32 GR64:i64:$R2)
/*25499*/       /*SwitchType*/ 8, MVT::f64,// ->25509
/*25501*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDGBR), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 GR64:i64:$R2) - Complexity = 3
                  // Dst: (CDGBR:f64 GR64:i64:$R2)
/*25509*/       /*SwitchType*/ 8, MVT::f128,// ->25519
/*25511*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXGBR), 0,
                      1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f128 GR64:i64:$R2) - Complexity = 3
                  // Dst: (CXGBR:f128 GR64:i64:$R2)
/*25519*/       0, // EndSwitchType
/*25520*/     0, /*End of Scope*/
/*25521*/   /*SwitchOpcode*/ 5|128,1/*133*/, TARGET_VAL(ISD::UINT_TO_FP),// ->25658
/*25525*/     OPC_RecordChild0, // #0 = $src
/*25526*/     OPC_Scope, 64, /*->25592*/ // 2 children in Scope
/*25528*/       OPC_CheckChild0Type, MVT::i32,
/*25530*/       OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->25551
/*25533*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25535*/         OPC_EmitInteger, MVT::i32, 0, 
/*25538*/         OPC_EmitInteger, MVT::i32, 0, 
/*25541*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CELFBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (uint_to_fp:f32 GR32:i32:$src) - Complexity = 3
                  // Dst: (CELFBR:f32 0:i32, GR32:i32:$src, 0:i32)
/*25551*/       /*SwitchType*/ 18, MVT::f64,// ->25571
/*25553*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25555*/         OPC_EmitInteger, MVT::i32, 0, 
/*25558*/         OPC_EmitInteger, MVT::i32, 0, 
/*25561*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDLFBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (uint_to_fp:f64 GR32:i32:$src) - Complexity = 3
                  // Dst: (CDLFBR:f64 0:i32, GR32:i32:$src, 0:i32)
/*25571*/       /*SwitchType*/ 18, MVT::f128,// ->25591
/*25573*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25575*/         OPC_EmitInteger, MVT::i32, 0, 
/*25578*/         OPC_EmitInteger, MVT::i32, 0, 
/*25581*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXLFBR), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (uint_to_fp:f128 GR32:i32:$src) - Complexity = 3
                  // Dst: (CXLFBR:f128 0:i32, GR32:i32:$src, 0:i32)
/*25591*/       0, // EndSwitchType
/*25592*/     /*Scope*/ 64, /*->25657*/
/*25593*/       OPC_CheckChild0Type, MVT::i64,
/*25595*/       OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->25616
/*25598*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25600*/         OPC_EmitInteger, MVT::i32, 0, 
/*25603*/         OPC_EmitInteger, MVT::i32, 0, 
/*25606*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CELGBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (uint_to_fp:f32 GR64:i64:$src) - Complexity = 3
                  // Dst: (CELGBR:f32 0:i32, GR64:i64:$src, 0:i32)
/*25616*/       /*SwitchType*/ 18, MVT::f64,// ->25636
/*25618*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25620*/         OPC_EmitInteger, MVT::i32, 0, 
/*25623*/         OPC_EmitInteger, MVT::i32, 0, 
/*25626*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDLGBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (uint_to_fp:f64 GR64:i64:$src) - Complexity = 3
                  // Dst: (CDLGBR:f64 0:i32, GR64:i64:$src, 0:i32)
/*25636*/       /*SwitchType*/ 18, MVT::f128,// ->25656
/*25638*/         OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25640*/         OPC_EmitInteger, MVT::i32, 0, 
/*25643*/         OPC_EmitInteger, MVT::i32, 0, 
/*25646*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXLGBR), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (uint_to_fp:f128 GR64:i64:$src) - Complexity = 3
                  // Dst: (CXLGBR:f128 0:i32, GR64:i64:$src, 0:i32)
/*25656*/       0, // EndSwitchType
/*25657*/     0, /*End of Scope*/
/*25658*/   /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FABS),// ->25697
/*25661*/     OPC_RecordChild0, // #0 = $R2
/*25662*/     OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->25674
/*25665*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fabs:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (LPEBR:f32:i32 FP32:f32:$R2)
/*25674*/     /*SwitchType*/ 9, MVT::f64,// ->25685
/*25676*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (LPDBR:f64:i32 FP64:f64:$R2)
/*25685*/     /*SwitchType*/ 9, MVT::f128,// ->25696
/*25687*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fabs:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (LPXBR:f128:i32 FP128:f128:$R2)
/*25696*/     0, // EndSwitchType
/*25697*/   /*SwitchOpcode*/ 45, TARGET_VAL(ISD::FRINT),// ->25745
/*25700*/     OPC_RecordChild0, // #0 = $src
/*25701*/     OPC_SwitchType /*3 cases */, 12, MVT::f32,// ->25716
/*25704*/       OPC_EmitInteger, MVT::i32, 0, 
/*25707*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
                // Src: (frint:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FIEBR:f32 0:i32, FP32:f32:$src)
/*25716*/     /*SwitchType*/ 12, MVT::f64,// ->25730
/*25718*/       OPC_EmitInteger, MVT::i32, 0, 
/*25721*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
                // Src: (frint:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FIDBR:f64 0:i32, FP64:f64:$src)
/*25730*/     /*SwitchType*/ 12, MVT::f128,// ->25744
/*25732*/       OPC_EmitInteger, MVT::i32, 0, 
/*25735*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 1, 0, 
                // Src: (frint:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (FIXBR:f128 0:i32, FP128:f128:$src)
/*25744*/     0, // EndSwitchType
/*25745*/   /*SwitchOpcode*/ 63, TARGET_VAL(ISD::FNEARBYINT),// ->25811
/*25748*/     OPC_RecordChild0, // #0 = $src
/*25749*/     OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->25770
/*25752*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25754*/       OPC_EmitInteger, MVT::i32, 0, 
/*25757*/       OPC_EmitInteger, MVT::i32, 4, 
/*25760*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                // Src: (fnearbyint:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FIEBRA:f32 0:i32, FP32:f32:$src, 4:i32)
/*25770*/     /*SwitchType*/ 18, MVT::f64,// ->25790
/*25772*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25774*/       OPC_EmitInteger, MVT::i32, 0, 
/*25777*/       OPC_EmitInteger, MVT::i32, 4, 
/*25780*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                // Src: (fnearbyint:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FIDBRA:f64 0:i32, FP64:f64:$src, 4:i32)
/*25790*/     /*SwitchType*/ 18, MVT::f128,// ->25810
/*25792*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25794*/       OPC_EmitInteger, MVT::i32, 0, 
/*25797*/       OPC_EmitInteger, MVT::i32, 4, 
/*25800*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                // Src: (fnearbyint:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (FIXBRA:f128 0:i32, FP128:f128:$src, 4:i32)
/*25810*/     0, // EndSwitchType
/*25811*/   /*SwitchOpcode*/ 63, TARGET_VAL(ISD::FFLOOR),// ->25877
/*25814*/     OPC_RecordChild0, // #0 = $src
/*25815*/     OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->25836
/*25818*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25820*/       OPC_EmitInteger, MVT::i32, 7, 
/*25823*/       OPC_EmitInteger, MVT::i32, 4, 
/*25826*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                // Src: (ffloor:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FIEBRA:f32 7:i32, FP32:f32:$src, 4:i32)
/*25836*/     /*SwitchType*/ 18, MVT::f64,// ->25856
/*25838*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25840*/       OPC_EmitInteger, MVT::i32, 7, 
/*25843*/       OPC_EmitInteger, MVT::i32, 4, 
/*25846*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                // Src: (ffloor:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FIDBRA:f64 7:i32, FP64:f64:$src, 4:i32)
/*25856*/     /*SwitchType*/ 18, MVT::f128,// ->25876
/*25858*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25860*/       OPC_EmitInteger, MVT::i32, 7, 
/*25863*/       OPC_EmitInteger, MVT::i32, 4, 
/*25866*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                // Src: (ffloor:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (FIXBRA:f128 7:i32, FP128:f128:$src, 4:i32)
/*25876*/     0, // EndSwitchType
/*25877*/   /*SwitchOpcode*/ 63, TARGET_VAL(ISD::FCEIL),// ->25943
/*25880*/     OPC_RecordChild0, // #0 = $src
/*25881*/     OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->25902
/*25884*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25886*/       OPC_EmitInteger, MVT::i32, 6, 
/*25889*/       OPC_EmitInteger, MVT::i32, 4, 
/*25892*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                // Src: (fceil:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FIEBRA:f32 6:i32, FP32:f32:$src, 4:i32)
/*25902*/     /*SwitchType*/ 18, MVT::f64,// ->25922
/*25904*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25906*/       OPC_EmitInteger, MVT::i32, 6, 
/*25909*/       OPC_EmitInteger, MVT::i32, 4, 
/*25912*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                // Src: (fceil:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FIDBRA:f64 6:i32, FP64:f64:$src, 4:i32)
/*25922*/     /*SwitchType*/ 18, MVT::f128,// ->25942
/*25924*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25926*/       OPC_EmitInteger, MVT::i32, 6, 
/*25929*/       OPC_EmitInteger, MVT::i32, 4, 
/*25932*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                // Src: (fceil:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (FIXBRA:f128 6:i32, FP128:f128:$src, 4:i32)
/*25942*/     0, // EndSwitchType
/*25943*/   /*SwitchOpcode*/ 63, TARGET_VAL(ISD::FTRUNC),// ->26009
/*25946*/     OPC_RecordChild0, // #0 = $src
/*25947*/     OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->25968
/*25950*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25952*/       OPC_EmitInteger, MVT::i32, 5, 
/*25955*/       OPC_EmitInteger, MVT::i32, 4, 
/*25958*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                // Src: (ftrunc:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FIEBRA:f32 5:i32, FP32:f32:$src, 4:i32)
/*25968*/     /*SwitchType*/ 18, MVT::f64,// ->25988
/*25970*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25972*/       OPC_EmitInteger, MVT::i32, 5, 
/*25975*/       OPC_EmitInteger, MVT::i32, 4, 
/*25978*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                // Src: (ftrunc:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FIDBRA:f64 5:i32, FP64:f64:$src, 4:i32)
/*25988*/     /*SwitchType*/ 18, MVT::f128,// ->26008
/*25990*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*25992*/       OPC_EmitInteger, MVT::i32, 5, 
/*25995*/       OPC_EmitInteger, MVT::i32, 4, 
/*25998*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                // Src: (ftrunc:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (FIXBRA:f128 5:i32, FP128:f128:$src, 4:i32)
/*26008*/     0, // EndSwitchType
/*26009*/   /*SwitchOpcode*/ 63, TARGET_VAL(ISD::FROUND),// ->26075
/*26012*/     OPC_RecordChild0, // #0 = $src
/*26013*/     OPC_SwitchType /*3 cases */, 18, MVT::f32,// ->26034
/*26016*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*26018*/       OPC_EmitInteger, MVT::i32, 1, 
/*26021*/       OPC_EmitInteger, MVT::i32, 4, 
/*26024*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBRA), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                // Src: (frnd:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FIEBRA:f32 1:i32, FP32:f32:$src, 4:i32)
/*26034*/     /*SwitchType*/ 18, MVT::f64,// ->26054
/*26036*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*26038*/       OPC_EmitInteger, MVT::i32, 1, 
/*26041*/       OPC_EmitInteger, MVT::i32, 4, 
/*26044*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBRA), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                // Src: (frnd:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FIDBRA:f64 1:i32, FP64:f64:$src, 4:i32)
/*26054*/     /*SwitchType*/ 18, MVT::f128,// ->26074
/*26056*/       OPC_CheckPatternPredicate, 8, // (Subtarget->hasFPExtension())
/*26058*/       OPC_EmitInteger, MVT::i32, 1, 
/*26061*/       OPC_EmitInteger, MVT::i32, 4, 
/*26064*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBRA), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 1, 0, 2, 
                // Src: (frnd:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (FIXBRA:f128 1:i32, FP128:f128:$src, 4:i32)
/*26074*/     0, // EndSwitchType
/*26075*/   0, // EndSwitchOpcode
    0
  }; // Total Array size is 26077 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 236
  // #OPC_RecordNode                     = 233
  // #OPC_RecordChild                    = 705
  // #OPC_RecordMemRef                   = 197
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 510
  // #OPC_MoveParent                     = 941
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 176
  // #OPC_CheckPatternPredicate          = 128
  // #OPC_CheckPredicate                 = 1221
  // #OPC_CheckOpcode                    = 448
  // #OPC_SwitchOpcode                   = 26
  // #OPC_CheckType                      = 324
  // #OPC_SwitchType                     = 99
  // #OPC_CheckChildType                 = 365
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 74
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 34
  // #OPC_CheckComplexPat                = 602
  // #OPC_CheckAndImm                    = 26
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 168
  // #OPC_EmitInteger                    = 163
  // #OPC_EmitStringInteger              = 62
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 261
  // #OPC_EmitMergeInputChains           = 489
  // #OPC_EmitCopyToReg                  = 1
  // #OPC_EmitNode                       = 76
  // #OPC_EmitNodeXForm                  = 182
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 849

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget->hasHighWord());
  case 1: return (Subtarget->hasLoadStoreOnCond());
  case 2: return (Subtarget->hasTransactionalExecution());
  case 3: return (Subtarget->hasProcessorAssist());
  case 4: return (Subtarget->hasDistinctOps());
  case 5: return (!Subtarget->hasInterlockedAccess1());
  case 6: return (Subtarget->hasInterlockedAccess1());
  case 7: return (Subtarget->hasPopulationCount());
  case 8: return (Subtarget->hasFPExtension());
  }
}

bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_anyextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_anyextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_nonvolatile_anyextloadi8
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 4: { // Predicate_imm32zx4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<4>(N->getZExtValue());

  }
  case 5: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 7: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_nonvolatile_truncstorei8
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 9: { // Predicate_anyextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { // Predicate_nonvolatile_anyextloadi16
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 11: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_nonvolatile_truncstorei16
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_nonvolatile_load
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 15: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 16: { // Predicate_nonvolatile_store
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 17: { // Predicate_anyextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_nonvolatile_anyextloadi32
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 19: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_nonvolatile_truncstorei32
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 21: { // Predicate_block_and1
    SDNode *N = Node;
 return storeLoadCanUseBlockBinary(N, 0); 
  }
  case 22: { // Predicate_block_and2
    SDNode *N = Node;
 return storeLoadCanUseBlockBinary(N, 1); 
  }
  case 23: { // Predicate_block_or1
    SDNode *N = Node;
 return storeLoadCanUseBlockBinary(N, 0); 
  }
  case 24: { // Predicate_block_or2
    SDNode *N = Node;
 return storeLoadCanUseBlockBinary(N, 1); 
  }
  case 25: { // Predicate_block_xor1
    SDNode *N = Node;
 return storeLoadCanUseBlockBinary(N, 0); 
  }
  case 26: { // Predicate_block_xor2
    SDNode *N = Node;
 return storeLoadCanUseBlockBinary(N, 1); 
  }
  case 27: { // Predicate_imm32sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 28: { // Predicate_imm64sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 29: { // Predicate_mvc_store
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 30: { // Predicate_aligned_store
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 31: { // Predicate_imm32sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 32: { // Predicate_imm64sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 33: { // Predicate_aligned_truncstorei16
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 34: { // Predicate_aligned_truncstorei32
    SDNode *N = Node;

  auto *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 35: { // Predicate_asextload
    SDNode *N = Node;

  unsigned Type = cast<LoadSDNode>(N)->getExtensionType();
  return Type == ISD::EXTLOAD || Type == ISD::SEXTLOAD;

  }
  case 36: { // Predicate_asextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 37: { // Predicate_asextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 38: { // Predicate_azextload
    SDNode *N = Node;

  unsigned Type = cast<LoadSDNode>(N)->getExtensionType();
  return Type == ISD::EXTLOAD || Type == ISD::ZEXTLOAD;

  }
  case 39: { // Predicate_azextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 40: { // Predicate_imm64lf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(N->getZExtValue());

  }
  case 41: { // Predicate_imm64hf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(N->getZExtValue());

  }
  case 42: { // Predicate_azextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 43: { // Predicate_or_as_inserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(0),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 44: { // Predicate_or_as_revinserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(1),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 45: { // Predicate_imm32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 46: { // Predicate_imm32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 47: { // Predicate_imm64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 48: { // Predicate_imm64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 49: { // Predicate_imm64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(N->getZExtValue());

  }
  case 50: { // Predicate_imm64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(N->getZExtValue());

  }
  case 51: { // Predicate_imm32zx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue());

  }
  case 52: { // Predicate_cond4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return (N->getZExtValue() < 16); 
  }
  case 53: { // Predicate_aligned_asextloadi16
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 54: { // Predicate_z_scmp
    SDNode *N = Node;

  unsigned Type = cast<ConstantSDNode>(N->getOperand(2))->getZExtValue();
  return Type != SystemZICMP::UnsignedOnly;

  }
  case 55: { // Predicate_aligned_load
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 56: { // Predicate_aligned_asextloadi32
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 57: { // Predicate_azextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 58: { // Predicate_aligned_azextloadi16
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 59: { // Predicate_z_ucmp
    SDNode *N = Node;

  unsigned Type = cast<ConstantSDNode>(N->getOperand(2))->getZExtValue();
  return Type != SystemZICMP::SignedOnly;

  }
  case 60: { // Predicate_aligned_azextloadi32
    SDNode *N = Node;

  auto *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 61: { // Predicate_imm32zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 62: { // Predicate_imm64zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 63: { // Predicate_imm64sx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<32>(N->getSExtValue());

  }
  case 64: { // Predicate_imm64zx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(N->getZExtValue());

  }
  case 65: { // Predicate_imm64zx32n
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(-N->getSExtValue());

  }
  case 66: { // Predicate_imm32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint32_t(~N->getZExtValue()));

  }
  case 67: { // Predicate_imm32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint32_t(~N->getZExtValue()));

  }
  case 68: { // Predicate_imm64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint64_t(~N->getZExtValue()));

  }
  case 69: { // Predicate_imm64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint64_t(~N->getZExtValue()));

  }
  case 70: { // Predicate_imm64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(uint64_t(~N->getZExtValue()));

  }
  case 71: { // Predicate_imm64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(uint64_t(~N->getZExtValue()));

  }
  case 72: { // Predicate_imm64lf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(uint64_t(~N->getZExtValue()));

  }
  case 73: { // Predicate_imm64hf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(uint64_t(~N->getZExtValue()));

  }
  case 74: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(+0.0); 
  }
  case 75: { // Predicate_fpimmneg0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(-0.0); 
  }
  case 76: { // Predicate_asextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 77: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 78: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 79: { // Predicate_extloadf64
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

  }
  case 80: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 81: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 82: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 83: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 84: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 85: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 86: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 87: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 88: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 89: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 90: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 91: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 92: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 93: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 94: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 95: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 96: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 97: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 98: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 99: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 100: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 101: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 102: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 103: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 104: { // Predicate_access_reg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return N->getZExtValue() < 16; 
  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                         SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) override {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return selectBDAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectBDAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  case 6:
    Result.resize(NextRes+2);
    return selectMVIAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 7:
    Result.resize(NextRes+3);
    return selectBDXAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 8:
    Result.resize(NextRes+3);
    return selectBDXAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 9:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only128(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 10:
    Result.resize(NextRes+2);
    return selectMVIAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 11:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 12:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 13:
    Result.resize(NextRes+3);
    return selectDynAlloc12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 14:
    Result.resize(NextRes+3);
    return selectLAAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 15:
    Result.resize(NextRes+3);
    return selectLAAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 16:
    Result.resize(NextRes+3);
    return selectBDXAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // UIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint8_t(N->getZExtValue()), MVT::i64);

  }
  case 1: {  // SIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int8_t(N->getZExtValue()), MVT::i64);

  }
  case 2: {  // SIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int16_t(N->getZExtValue()), MVT::i64);

  }
  case 3: {  // LF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x00000000FFFFFFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 4: {  // HF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 5: {  // UIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(N->getZExtValue()), MVT::i64);

  }
  case 6: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x000000000000FFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 7: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 8: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 9: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0xFFFF000000000000ULL) >> 48;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 10: {  // UIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint16_t(N->getZExtValue()), MVT::i64);

  }
  case 11: {  // SIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int32_t(N->getZExtValue()), MVT::i64);

  }
  case 12: {  // NEGIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(-N->getZExtValue()), MVT::i64);

  }
  }
}

