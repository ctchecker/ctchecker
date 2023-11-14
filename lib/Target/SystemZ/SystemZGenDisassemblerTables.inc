/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * SystemZ Disassembler                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3 */       MCD::OPC_FilterValue, 7, 127, 0, // Skip to: 134
/* 7 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 10 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 18
/* 14 */      MCD::OPC_Decode, 244, 2, 0, // Opcode: AsmOBR
/* 18 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 26
/* 22 */      MCD::OPC_Decode, 164, 1, 0, // Opcode: AsmHBR
/* 26 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 34
/* 30 */      MCD::OPC_Decode, 209, 2, 0, // Opcode: AsmNLEBR
/* 34 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 42
/* 38 */      MCD::OPC_Decode, 150, 2, 0, // Opcode: AsmLBR
/* 42 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 50
/* 46 */      MCD::OPC_Decode, 191, 2, 0, // Opcode: AsmNHEBR
/* 50 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 58
/* 54 */      MCD::OPC_Decode, 160, 2, 0, // Opcode: AsmLHBR
/* 58 */      MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 181, 2, 0, // Opcode: AsmNEBR
/* 66 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 155, 1, 0, // Opcode: AsmEBR
/* 74 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 218, 2, 0, // Opcode: AsmNLHBR
/* 82 */      MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 165, 1, 0, // Opcode: AsmHEBR
/* 90 */      MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 208, 2, 0, // Opcode: AsmNLBR
/* 98 */      MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 151, 2, 0, // Opcode: AsmLEBR
/* 106 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 190, 2, 0, // Opcode: AsmNHBR
/* 114 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 235, 2, 0, // Opcode: AsmNOBR
/* 122 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 128, 3, 0, // Opcode: BR
/* 130 */     MCD::OPC_Decode, 144, 1, 1, // Opcode: AsmBCR
/* 134 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 142
/* 138 */     MCD::OPC_Decode, 255, 2, 2, // Opcode: BASR
/* 142 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 146, 5, 3, // Opcode: LPR
/* 150 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 158
/* 154 */     MCD::OPC_Decode, 136, 5, 3, // Opcode: LNR
/* 158 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 164, 5, 3, // Opcode: LTR
/* 166 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 193, 4, 3, // Opcode: LCR
/* 174 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 243, 5, 4, // Opcode: NR
/* 182 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 210, 3, 3, // Opcode: CLR
/* 190 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 143, 6, 4, // Opcode: OR
/* 198 */     MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 206
/* 202 */     MCD::OPC_Decode, 152, 7, 4, // Opcode: XR
/* 206 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 148, 5, 3, // Opcode: LR
/* 214 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 221, 3, 3, // Opcode: CR
/* 222 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 229
/* 226 */     MCD::OPC_Decode, 66, 4, // Opcode: AR
/* 229 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 237
/* 233 */     MCD::OPC_Decode, 201, 6, 4, // Opcode: SR
/* 237 */     MCD::OPC_FilterValue, 30, 3, 0, // Skip to: 244
/* 241 */     MCD::OPC_Decode, 63, 4, // Opcode: ALR
/* 244 */     MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 252
/* 248 */     MCD::OPC_Decode, 193, 6, 4, // Opcode: SLR
/* 252 */     MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 260
/* 256 */     MCD::OPC_Decode, 199, 4, 5, // Opcode: LDR
/* 260 */     MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 268
/* 264 */     MCD::OPC_Decode, 206, 4, 6, // Opcode: LER
/* 268 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 24, 8,  // Inst{31-24} ...
/* 3 */       MCD::OPC_FilterValue, 64, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 224, 6, 7, // Opcode: STH
/* 11 */      MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 172, 4, 8, // Opcode: LA
/* 19 */      MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 213, 6, 7, // Opcode: STC
/* 27 */      MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 148, 4, 9, // Opcode: IC
/* 35 */      MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 225, 4, 7, // Opcode: LH
/* 43 */      MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 169, 3, 7, // Opcode: CH
/* 51 */      MCD::OPC_FilterValue, 74, 3, 0, // Skip to: 58
/* 55 */      MCD::OPC_Decode, 42, 10, // Opcode: AH
/* 58 */      MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 176, 6, 10, // Opcode: SH
/* 66 */      MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 188, 5, 10, // Opcode: MH
/* 74 */      MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 211, 6, 7, // Opcode: ST
/* 82 */      MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 219, 5, 10, // Opcode: N
/* 90 */      MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 178, 3, 7, // Opcode: CL
/* 98 */      MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 247, 5, 10, // Opcode: O
/* 106 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 138, 7, 10, // Opcode: X
/* 114 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 170, 4, 7, // Opcode: L
/* 122 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 135, 3, 7, // Opcode: C
/* 130 */     MCD::OPC_FilterValue, 90, 3, 0, // Skip to: 137
/* 134 */     MCD::OPC_Decode, 22, 10, // Opcode: A
/* 137 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 166, 6, 10, // Opcode: S
/* 145 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 152
/* 149 */     MCD::OPC_Decode, 49, 10, // Opcode: AL
/* 152 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 178, 6, 10, // Opcode: SL
/* 160 */     MCD::OPC_FilterValue, 96, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 217, 6, 11, // Opcode: STD
/* 168 */     MCD::OPC_FilterValue, 104, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 195, 4, 11, // Opcode: LD
/* 176 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 219, 6, 12, // Opcode: STE
/* 184 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 193, 5, 10, // Opcode: MS
/* 192 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 203, 4, 12, // Opcode: LE
/* 200 */     MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 215
/* 205 */     MCD::OPC_CheckField, 16, 4, 0, 82, 12, // Skip to: 3365
/* 211 */     MCD::OPC_Decode, 206, 6, 13, // Opcode: SRL
/* 215 */     MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 230
/* 220 */     MCD::OPC_CheckField, 16, 4, 0, 67, 12, // Skip to: 3365
/* 226 */     MCD::OPC_Decode, 190, 6, 13, // Opcode: SLL
/* 230 */     MCD::OPC_FilterValue, 138, 1, 10, 0, // Skip to: 245
/* 235 */     MCD::OPC_CheckField, 16, 4, 0, 52, 12, // Skip to: 3365
/* 241 */     MCD::OPC_Decode, 202, 6, 13, // Opcode: SRA
/* 245 */     MCD::OPC_FilterValue, 145, 1, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 254, 6, 14, // Opcode: TM
/* 254 */     MCD::OPC_FilterValue, 146, 1, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 212, 5, 14, // Opcode: MVI
/* 263 */     MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 226, 5, 14, // Opcode: NI
/* 272 */     MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 281
/* 277 */     MCD::OPC_Decode, 205, 3, 14, // Opcode: CLI
/* 281 */     MCD::OPC_FilterValue, 150, 1, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 254, 5, 14, // Opcode: OI
/* 290 */     MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 299
/* 295 */     MCD::OPC_Decode, 145, 7, 14, // Opcode: XI
/* 299 */     MCD::OPC_FilterValue, 165, 1, 131, 0, // Skip to: 435
/* 304 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 307 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 155, 4, 15, // Opcode: IIHH
/* 315 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 323
/* 319 */     MCD::OPC_Decode, 157, 4, 15, // Opcode: IIHL
/* 323 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 331
/* 327 */     MCD::OPC_Decode, 162, 4, 16, // Opcode: IILH
/* 331 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 339
/* 335 */     MCD::OPC_Decode, 164, 4, 16, // Opcode: IILL
/* 339 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 347
/* 343 */     MCD::OPC_Decode, 230, 5, 15, // Opcode: NIHH
/* 347 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 232, 5, 15, // Opcode: NIHL
/* 355 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 363
/* 359 */     MCD::OPC_Decode, 237, 5, 16, // Opcode: NILH
/* 363 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 371
/* 367 */     MCD::OPC_Decode, 239, 5, 16, // Opcode: NILL
/* 371 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 379
/* 375 */     MCD::OPC_Decode, 130, 6, 15, // Opcode: OIHH
/* 379 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 387
/* 383 */     MCD::OPC_Decode, 132, 6, 15, // Opcode: OIHL
/* 387 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 395
/* 391 */     MCD::OPC_Decode, 137, 6, 16, // Opcode: OILH
/* 395 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 403
/* 399 */     MCD::OPC_Decode, 139, 6, 16, // Opcode: OILL
/* 403 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 411
/* 407 */     MCD::OPC_Decode, 253, 4, 17, // Opcode: LLIHH
/* 411 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 419
/* 415 */     MCD::OPC_Decode, 254, 4, 17, // Opcode: LLIHL
/* 419 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 128, 5, 17, // Opcode: LLILH
/* 427 */     MCD::OPC_FilterValue, 15, 118, 11, // Skip to: 3365
/* 431 */     MCD::OPC_Decode, 129, 5, 17, // Opcode: LLILL
/* 435 */     MCD::OPC_FilterValue, 167, 1, 252, 0, // Skip to: 692
/* 440 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 443 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 451
/* 447 */     MCD::OPC_Decode, 132, 7, 18, // Opcode: TMLH
/* 451 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 459
/* 455 */     MCD::OPC_Decode, 134, 7, 18, // Opcode: TMLL
/* 459 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 467
/* 463 */     MCD::OPC_Decode, 255, 6, 19, // Opcode: TMHH
/* 467 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 475
/* 471 */     MCD::OPC_Decode, 129, 7, 19, // Opcode: TMHL
/* 475 */     MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 606
/* 479 */     MCD::OPC_ExtractField, 20, 4,  // Inst{23-20} ...
/* 482 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 245, 2, 20, // Opcode: AsmOJ
/* 490 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 174, 1, 20, // Opcode: AsmHJ
/* 498 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 210, 2, 20, // Opcode: AsmNLEJ
/* 506 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 169, 2, 20, // Opcode: AsmLJ
/* 514 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 192, 2, 20, // Opcode: AsmNHEJ
/* 522 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 530
/* 526 */     MCD::OPC_Decode, 161, 2, 20, // Opcode: AsmLHJ
/* 530 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 538
/* 534 */     MCD::OPC_Decode, 182, 2, 20, // Opcode: AsmNEJ
/* 538 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 546
/* 542 */     MCD::OPC_Decode, 156, 1, 20, // Opcode: AsmEJ
/* 546 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 554
/* 550 */     MCD::OPC_Decode, 219, 2, 20, // Opcode: AsmNLHJ
/* 554 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 166, 1, 20, // Opcode: AsmHEJ
/* 562 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 570
/* 566 */     MCD::OPC_Decode, 227, 2, 20, // Opcode: AsmNLJ
/* 570 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 578
/* 574 */     MCD::OPC_Decode, 152, 2, 20, // Opcode: AsmLEJ
/* 578 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 200, 2, 20, // Opcode: AsmNHJ
/* 586 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 594
/* 590 */     MCD::OPC_Decode, 236, 2, 20, // Opcode: AsmNOJ
/* 594 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 168, 4, 20, // Opcode: J
/* 602 */     MCD::OPC_Decode, 145, 1, 21, // Opcode: AsmBRC
/* 606 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 614
/* 610 */     MCD::OPC_Decode, 129, 3, 22, // Opcode: BRAS
/* 614 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 622
/* 618 */     MCD::OPC_Decode, 133, 3, 23, // Opcode: BRCT
/* 622 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 630
/* 626 */     MCD::OPC_Decode, 134, 3, 24, // Opcode: BRCTG
/* 630 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 638
/* 634 */     MCD::OPC_Decode, 227, 4, 25, // Opcode: LHI
/* 638 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 646
/* 642 */     MCD::OPC_Decode, 220, 4, 26, // Opcode: LGHI
/* 646 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 653
/* 650 */     MCD::OPC_Decode, 43, 27, // Opcode: AHI
/* 653 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 660
/* 657 */     MCD::OPC_Decode, 37, 28, // Opcode: AGHI
/* 660 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 189, 5, 27, // Opcode: MHI
/* 668 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 676
/* 672 */     MCD::OPC_Decode, 187, 5, 28, // Opcode: MGHI
/* 676 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 684
/* 680 */     MCD::OPC_Decode, 172, 3, 25, // Opcode: CHI
/* 684 */     MCD::OPC_FilterValue, 15, 117, 10, // Skip to: 3365
/* 688 */     MCD::OPC_Decode, 161, 3, 26, // Opcode: CGHI
/* 692 */     MCD::OPC_FilterValue, 178, 1, 169, 0, // Skip to: 866
/* 697 */     MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 700 */     MCD::OPC_FilterValue, 34, 16, 0, // Skip to: 720
/* 704 */     MCD::OPC_CheckField, 8, 8, 0, 95, 10, // Skip to: 3365
/* 710 */     MCD::OPC_CheckField, 0, 4, 0, 89, 10, // Skip to: 3365
/* 716 */     MCD::OPC_Decode, 167, 4, 29, // Opcode: IPM
/* 720 */     MCD::OPC_FilterValue, 79, 10, 0, // Skip to: 734
/* 724 */     MCD::OPC_CheckField, 8, 8, 0, 75, 10, // Skip to: 3365
/* 730 */     MCD::OPC_Decode, 138, 4, 30, // Opcode: EAR
/* 734 */     MCD::OPC_FilterValue, 82, 10, 0, // Skip to: 748
/* 738 */     MCD::OPC_CheckField, 8, 8, 0, 61, 10, // Skip to: 3365
/* 744 */     MCD::OPC_Decode, 204, 5, 4, // Opcode: MSR
/* 748 */     MCD::OPC_FilterValue, 85, 10, 0, // Skip to: 762
/* 752 */     MCD::OPC_CheckField, 8, 8, 0, 47, 10, // Skip to: 3365
/* 758 */     MCD::OPC_Decode, 214, 5, 31, // Opcode: MVST
/* 762 */     MCD::OPC_FilterValue, 93, 10, 0, // Skip to: 776
/* 766 */     MCD::OPC_CheckField, 8, 8, 0, 33, 10, // Skip to: 3365
/* 772 */     MCD::OPC_Decode, 213, 3, 31, // Opcode: CLST
/* 776 */     MCD::OPC_FilterValue, 94, 10, 0, // Skip to: 790
/* 780 */     MCD::OPC_CheckField, 8, 8, 0, 19, 10, // Skip to: 3365
/* 786 */     MCD::OPC_Decode, 209, 6, 31, // Opcode: SRST
/* 790 */     MCD::OPC_FilterValue, 232, 1, 14, 0, // Skip to: 809
/* 795 */     MCD::OPC_CheckPredicate, 0, 6, 10, // Skip to: 3365
/* 799 */     MCD::OPC_CheckField, 8, 4, 0, 0, 10, // Skip to: 3365
/* 805 */     MCD::OPC_Decode, 149, 6, 32, // Opcode: PPA
/* 809 */     MCD::OPC_FilterValue, 236, 1, 20, 0, // Skip to: 834
/* 814 */     MCD::OPC_CheckPredicate, 1, 243, 9, // Skip to: 3365
/* 818 */     MCD::OPC_CheckField, 8, 8, 0, 237, 9, // Skip to: 3365
/* 824 */     MCD::OPC_CheckField, 0, 4, 0, 231, 9, // Skip to: 3365
/* 830 */     MCD::OPC_Decode, 139, 4, 29, // Opcode: ETND
/* 834 */     MCD::OPC_FilterValue, 248, 1, 14, 0, // Skip to: 853
/* 839 */     MCD::OPC_CheckPredicate, 1, 218, 9, // Skip to: 3365
/* 843 */     MCD::OPC_CheckField, 0, 16, 0, 212, 9, // Skip to: 3365
/* 849 */     MCD::OPC_Decode, 251, 6, 33, // Opcode: TEND
/* 853 */     MCD::OPC_FilterValue, 252, 1, 203, 9, // Skip to: 3365
/* 858 */     MCD::OPC_CheckPredicate, 1, 199, 9, // Skip to: 3365
/* 862 */     MCD::OPC_Decode, 247, 6, 34, // Opcode: TABORT
/* 866 */     MCD::OPC_FilterValue, 179, 1, 109, 4, // Skip to: 2004
/* 871 */     MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 874 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 888
/* 878 */     MCD::OPC_CheckField, 8, 8, 0, 177, 9, // Skip to: 3365
/* 884 */     MCD::OPC_Decode, 143, 5, 6, // Opcode: LPEBR
/* 888 */     MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 902
/* 892 */     MCD::OPC_CheckField, 8, 8, 0, 163, 9, // Skip to: 3365
/* 898 */     MCD::OPC_Decode, 133, 5, 6, // Opcode: LNEBR
/* 902 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 916
/* 906 */     MCD::OPC_CheckField, 8, 8, 0, 149, 9, // Skip to: 3365
/* 912 */     MCD::OPC_Decode, 158, 5, 6, // Opcode: LTEBR
/* 916 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 930
/* 920 */     MCD::OPC_CheckField, 8, 8, 0, 135, 9, // Skip to: 3365
/* 926 */     MCD::OPC_Decode, 190, 4, 6, // Opcode: LCEBR
/* 930 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 944
/* 934 */     MCD::OPC_CheckField, 8, 8, 0, 121, 9, // Skip to: 3365
/* 940 */     MCD::OPC_Decode, 197, 4, 35, // Opcode: LDEBR
/* 944 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 958
/* 948 */     MCD::OPC_CheckField, 8, 8, 0, 107, 9, // Skip to: 3365
/* 954 */     MCD::OPC_Decode, 169, 5, 36, // Opcode: LXDBR
/* 958 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 972
/* 962 */     MCD::OPC_CheckField, 8, 8, 0, 93, 9, // Skip to: 3365
/* 968 */     MCD::OPC_Decode, 171, 5, 37, // Opcode: LXEBR
/* 972 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 986
/* 976 */     MCD::OPC_CheckField, 8, 8, 0, 79, 9, // Skip to: 3365
/* 982 */     MCD::OPC_Decode, 218, 5, 38, // Opcode: MXDBR
/* 986 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1000
/* 990 */     MCD::OPC_CheckField, 8, 8, 0, 65, 9, // Skip to: 3365
/* 996 */     MCD::OPC_Decode, 143, 3, 6, // Opcode: CEBR
/* 1000 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1013
/* 1004 */    MCD::OPC_CheckField, 8, 8, 0, 51, 9, // Skip to: 3365
/* 1010 */    MCD::OPC_Decode, 29, 39, // Opcode: AEBR
/* 1013 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1027
/* 1017 */    MCD::OPC_CheckField, 8, 8, 0, 38, 9, // Skip to: 3365
/* 1023 */    MCD::OPC_Decode, 170, 6, 39, // Opcode: SEBR
/* 1027 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1041
/* 1031 */    MCD::OPC_CheckField, 8, 8, 0, 24, 9, // Skip to: 3365
/* 1037 */    MCD::OPC_Decode, 184, 5, 40, // Opcode: MDEBR
/* 1041 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1055
/* 1045 */    MCD::OPC_CheckField, 8, 8, 0, 10, 9, // Skip to: 3365
/* 1051 */    MCD::OPC_Decode, 128, 4, 39, // Opcode: DEBR
/* 1055 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 1069
/* 1059 */    MCD::OPC_CheckField, 8, 4, 0, 252, 8, // Skip to: 3365
/* 1065 */    MCD::OPC_Decode, 180, 5, 41, // Opcode: MAEBR
/* 1069 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 1083
/* 1073 */    MCD::OPC_CheckField, 8, 4, 0, 238, 8, // Skip to: 3365
/* 1079 */    MCD::OPC_Decode, 197, 5, 41, // Opcode: MSEBR
/* 1083 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 1097
/* 1087 */    MCD::OPC_CheckField, 8, 8, 0, 224, 8, // Skip to: 3365
/* 1093 */    MCD::OPC_Decode, 142, 5, 5, // Opcode: LPDBR
/* 1097 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 1111
/* 1101 */    MCD::OPC_CheckField, 8, 8, 0, 210, 8, // Skip to: 3365
/* 1107 */    MCD::OPC_Decode, 132, 5, 5, // Opcode: LNDBR
/* 1111 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 1125
/* 1115 */    MCD::OPC_CheckField, 8, 8, 0, 196, 8, // Skip to: 3365
/* 1121 */    MCD::OPC_Decode, 156, 5, 5, // Opcode: LTDBR
/* 1125 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 1139
/* 1129 */    MCD::OPC_CheckField, 8, 8, 0, 182, 8, // Skip to: 3365
/* 1135 */    MCD::OPC_Decode, 189, 4, 5, // Opcode: LCDBR
/* 1139 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 1153
/* 1143 */    MCD::OPC_CheckField, 8, 8, 0, 168, 8, // Skip to: 3365
/* 1149 */    MCD::OPC_Decode, 199, 6, 6, // Opcode: SQEBR
/* 1153 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 1167
/* 1157 */    MCD::OPC_CheckField, 8, 8, 0, 154, 8, // Skip to: 3365
/* 1163 */    MCD::OPC_Decode, 197, 6, 5, // Opcode: SQDBR
/* 1167 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 1181
/* 1171 */    MCD::OPC_CheckField, 8, 8, 0, 140, 8, // Skip to: 3365
/* 1177 */    MCD::OPC_Decode, 200, 6, 42, // Opcode: SQXBR
/* 1181 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1195
/* 1185 */    MCD::OPC_CheckField, 8, 8, 0, 126, 8, // Skip to: 3365
/* 1191 */    MCD::OPC_Decode, 186, 5, 39, // Opcode: MEEBR
/* 1195 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1209
/* 1199 */    MCD::OPC_CheckField, 8, 8, 0, 112, 8, // Skip to: 3365
/* 1205 */    MCD::OPC_Decode, 137, 3, 5, // Opcode: CDBR
/* 1209 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1222
/* 1213 */    MCD::OPC_CheckField, 8, 8, 0, 98, 8, // Skip to: 3365
/* 1219 */    MCD::OPC_Decode, 24, 43, // Opcode: ADBR
/* 1222 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1236
/* 1226 */    MCD::OPC_CheckField, 8, 8, 0, 85, 8, // Skip to: 3365
/* 1232 */    MCD::OPC_Decode, 168, 6, 43, // Opcode: SDBR
/* 1236 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1250
/* 1240 */    MCD::OPC_CheckField, 8, 8, 0, 71, 8, // Skip to: 3365
/* 1246 */    MCD::OPC_Decode, 182, 5, 43, // Opcode: MDBR
/* 1250 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1264
/* 1254 */    MCD::OPC_CheckField, 8, 8, 0, 57, 8, // Skip to: 3365
/* 1260 */    MCD::OPC_Decode, 254, 3, 43, // Opcode: DDBR
/* 1264 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 1278
/* 1268 */    MCD::OPC_CheckField, 8, 4, 0, 43, 8, // Skip to: 3365
/* 1274 */    MCD::OPC_Decode, 178, 5, 44, // Opcode: MADBR
/* 1278 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1292
/* 1282 */    MCD::OPC_CheckField, 8, 4, 0, 29, 8, // Skip to: 3365
/* 1288 */    MCD::OPC_Decode, 195, 5, 44, // Opcode: MSDBR
/* 1292 */    MCD::OPC_FilterValue, 64, 10, 0, // Skip to: 1306
/* 1296 */    MCD::OPC_CheckField, 8, 8, 0, 15, 8, // Skip to: 3365
/* 1302 */    MCD::OPC_Decode, 147, 5, 42, // Opcode: LPXBR
/* 1306 */    MCD::OPC_FilterValue, 65, 10, 0, // Skip to: 1320
/* 1310 */    MCD::OPC_CheckField, 8, 8, 0, 1, 8, // Skip to: 3365
/* 1316 */    MCD::OPC_Decode, 137, 5, 42, // Opcode: LNXBR
/* 1320 */    MCD::OPC_FilterValue, 66, 10, 0, // Skip to: 1334
/* 1324 */    MCD::OPC_CheckField, 8, 8, 0, 243, 7, // Skip to: 3365
/* 1330 */    MCD::OPC_Decode, 165, 5, 42, // Opcode: LTXBR
/* 1334 */    MCD::OPC_FilterValue, 67, 10, 0, // Skip to: 1348
/* 1338 */    MCD::OPC_CheckField, 8, 8, 0, 229, 7, // Skip to: 3365
/* 1344 */    MCD::OPC_Decode, 194, 4, 42, // Opcode: LCXBR
/* 1348 */    MCD::OPC_FilterValue, 68, 18, 0, // Skip to: 1370
/* 1352 */    MCD::OPC_CheckField, 8, 8, 0, 4, 0, // Skip to: 1362
/* 1358 */    MCD::OPC_Decode, 204, 4, 45, // Opcode: LEDBR
/* 1362 */    MCD::OPC_CheckPredicate, 2, 207, 7, // Skip to: 3365
/* 1366 */    MCD::OPC_Decode, 205, 4, 46, // Opcode: LEDBRA
/* 1370 */    MCD::OPC_FilterValue, 69, 18, 0, // Skip to: 1392
/* 1374 */    MCD::OPC_CheckField, 8, 8, 0, 4, 0, // Skip to: 1384
/* 1380 */    MCD::OPC_Decode, 200, 4, 42, // Opcode: LDXBR
/* 1384 */    MCD::OPC_CheckPredicate, 2, 185, 7, // Skip to: 3365
/* 1388 */    MCD::OPC_Decode, 201, 4, 47, // Opcode: LDXBRA
/* 1392 */    MCD::OPC_FilterValue, 70, 18, 0, // Skip to: 1414
/* 1396 */    MCD::OPC_CheckField, 8, 8, 0, 4, 0, // Skip to: 1406
/* 1402 */    MCD::OPC_Decode, 207, 4, 42, // Opcode: LEXBR
/* 1406 */    MCD::OPC_CheckPredicate, 2, 163, 7, // Skip to: 3365
/* 1410 */    MCD::OPC_Decode, 208, 4, 47, // Opcode: LEXBRA
/* 1414 */    MCD::OPC_FilterValue, 71, 18, 0, // Skip to: 1436
/* 1418 */    MCD::OPC_CheckField, 8, 4, 0, 4, 0, // Skip to: 1428
/* 1424 */    MCD::OPC_Decode, 144, 4, 48, // Opcode: FIXBR
/* 1428 */    MCD::OPC_CheckPredicate, 2, 141, 7, // Skip to: 3365
/* 1432 */    MCD::OPC_Decode, 145, 4, 47, // Opcode: FIXBRA
/* 1436 */    MCD::OPC_FilterValue, 73, 10, 0, // Skip to: 1450
/* 1440 */    MCD::OPC_CheckField, 8, 8, 0, 127, 7, // Skip to: 3365
/* 1446 */    MCD::OPC_Decode, 227, 3, 42, // Opcode: CXBR
/* 1450 */    MCD::OPC_FilterValue, 74, 10, 0, // Skip to: 1464
/* 1454 */    MCD::OPC_CheckField, 8, 8, 0, 113, 7, // Skip to: 3365
/* 1460 */    MCD::OPC_Decode, 142, 1, 49, // Opcode: AXBR
/* 1464 */    MCD::OPC_FilterValue, 75, 10, 0, // Skip to: 1478
/* 1468 */    MCD::OPC_CheckField, 8, 8, 0, 99, 7, // Skip to: 3365
/* 1474 */    MCD::OPC_Decode, 238, 6, 49, // Opcode: SXBR
/* 1478 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 1492
/* 1482 */    MCD::OPC_CheckField, 8, 8, 0, 85, 7, // Skip to: 3365
/* 1488 */    MCD::OPC_Decode, 216, 5, 49, // Opcode: MXBR
/* 1492 */    MCD::OPC_FilterValue, 77, 10, 0, // Skip to: 1506
/* 1496 */    MCD::OPC_CheckField, 8, 8, 0, 71, 7, // Skip to: 3365
/* 1502 */    MCD::OPC_Decode, 137, 4, 49, // Opcode: DXBR
/* 1506 */    MCD::OPC_FilterValue, 87, 18, 0, // Skip to: 1528
/* 1510 */    MCD::OPC_CheckField, 8, 4, 0, 4, 0, // Skip to: 1520
/* 1516 */    MCD::OPC_Decode, 142, 4, 50, // Opcode: FIEBR
/* 1520 */    MCD::OPC_CheckPredicate, 2, 49, 7, // Skip to: 3365
/* 1524 */    MCD::OPC_Decode, 143, 4, 51, // Opcode: FIEBRA
/* 1528 */    MCD::OPC_FilterValue, 95, 18, 0, // Skip to: 1550
/* 1532 */    MCD::OPC_CheckField, 8, 4, 0, 4, 0, // Skip to: 1542
/* 1538 */    MCD::OPC_Decode, 140, 4, 52, // Opcode: FIDBR
/* 1542 */    MCD::OPC_CheckPredicate, 2, 27, 7, // Skip to: 3365
/* 1546 */    MCD::OPC_Decode, 141, 4, 53, // Opcode: FIDBRA
/* 1550 */    MCD::OPC_FilterValue, 101, 10, 0, // Skip to: 1564
/* 1554 */    MCD::OPC_CheckField, 8, 8, 0, 13, 7, // Skip to: 3365
/* 1560 */    MCD::OPC_Decode, 172, 5, 42, // Opcode: LXR
/* 1564 */    MCD::OPC_FilterValue, 114, 10, 0, // Skip to: 1578
/* 1568 */    MCD::OPC_CheckField, 8, 4, 0, 255, 6, // Skip to: 3365
/* 1574 */    MCD::OPC_Decode, 217, 3, 54, // Opcode: CPSDRdd
/* 1578 */    MCD::OPC_FilterValue, 116, 16, 0, // Skip to: 1598
/* 1582 */    MCD::OPC_CheckField, 8, 8, 0, 241, 6, // Skip to: 3365
/* 1588 */    MCD::OPC_CheckField, 0, 4, 0, 235, 6, // Skip to: 3365
/* 1594 */    MCD::OPC_Decode, 175, 5, 55, // Opcode: LZER
/* 1598 */    MCD::OPC_FilterValue, 117, 16, 0, // Skip to: 1618
/* 1602 */    MCD::OPC_CheckField, 8, 8, 0, 221, 6, // Skip to: 3365
/* 1608 */    MCD::OPC_CheckField, 0, 4, 0, 215, 6, // Skip to: 3365
/* 1614 */    MCD::OPC_Decode, 174, 5, 56, // Opcode: LZDR
/* 1618 */    MCD::OPC_FilterValue, 118, 16, 0, // Skip to: 1638
/* 1622 */    MCD::OPC_CheckField, 8, 8, 0, 201, 6, // Skip to: 3365
/* 1628 */    MCD::OPC_CheckField, 0, 4, 0, 195, 6, // Skip to: 3365
/* 1634 */    MCD::OPC_Decode, 176, 5, 57, // Opcode: LZXR
/* 1638 */    MCD::OPC_FilterValue, 144, 1, 8, 0, // Skip to: 1651
/* 1643 */    MCD::OPC_CheckPredicate, 2, 182, 6, // Skip to: 3365
/* 1647 */    MCD::OPC_Decode, 146, 3, 58, // Opcode: CELFBR
/* 1651 */    MCD::OPC_FilterValue, 145, 1, 8, 0, // Skip to: 1664
/* 1656 */    MCD::OPC_CheckPredicate, 2, 169, 6, // Skip to: 3365
/* 1660 */    MCD::OPC_Decode, 140, 3, 59, // Opcode: CDLFBR
/* 1664 */    MCD::OPC_FilterValue, 146, 1, 8, 0, // Skip to: 1677
/* 1669 */    MCD::OPC_CheckPredicate, 2, 156, 6, // Skip to: 3365
/* 1673 */    MCD::OPC_Decode, 230, 3, 60, // Opcode: CXLFBR
/* 1677 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 1692
/* 1682 */    MCD::OPC_CheckField, 8, 8, 0, 141, 6, // Skip to: 3365
/* 1688 */    MCD::OPC_Decode, 144, 3, 61, // Opcode: CEFBR
/* 1692 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 1707
/* 1697 */    MCD::OPC_CheckField, 8, 8, 0, 126, 6, // Skip to: 3365
/* 1703 */    MCD::OPC_Decode, 138, 3, 62, // Opcode: CDFBR
/* 1707 */    MCD::OPC_FilterValue, 150, 1, 10, 0, // Skip to: 1722
/* 1712 */    MCD::OPC_CheckField, 8, 8, 0, 111, 6, // Skip to: 3365
/* 1718 */    MCD::OPC_Decode, 228, 3, 63, // Opcode: CXFBR
/* 1722 */    MCD::OPC_FilterValue, 152, 1, 10, 0, // Skip to: 1737
/* 1727 */    MCD::OPC_CheckField, 8, 4, 0, 96, 6, // Skip to: 3365
/* 1733 */    MCD::OPC_Decode, 149, 3, 64, // Opcode: CFEBR
/* 1737 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 1752
/* 1742 */    MCD::OPC_CheckField, 8, 4, 0, 81, 6, // Skip to: 3365
/* 1748 */    MCD::OPC_Decode, 148, 3, 65, // Opcode: CFDBR
/* 1752 */    MCD::OPC_FilterValue, 154, 1, 10, 0, // Skip to: 1767
/* 1757 */    MCD::OPC_CheckField, 8, 4, 0, 66, 6, // Skip to: 3365
/* 1763 */    MCD::OPC_Decode, 152, 3, 66, // Opcode: CFXBR
/* 1767 */    MCD::OPC_FilterValue, 156, 1, 8, 0, // Skip to: 1780
/* 1772 */    MCD::OPC_CheckPredicate, 2, 53, 6, // Skip to: 3365
/* 1776 */    MCD::OPC_Decode, 183, 3, 67, // Opcode: CLFEBR
/* 1780 */    MCD::OPC_FilterValue, 157, 1, 8, 0, // Skip to: 1793
/* 1785 */    MCD::OPC_CheckPredicate, 2, 40, 6, // Skip to: 3365
/* 1789 */    MCD::OPC_Decode, 182, 3, 68, // Opcode: CLFDBR
/* 1793 */    MCD::OPC_FilterValue, 158, 1, 8, 0, // Skip to: 1806
/* 1798 */    MCD::OPC_CheckPredicate, 2, 27, 6, // Skip to: 3365
/* 1802 */    MCD::OPC_Decode, 187, 3, 69, // Opcode: CLFXBR
/* 1806 */    MCD::OPC_FilterValue, 160, 1, 8, 0, // Skip to: 1819
/* 1811 */    MCD::OPC_CheckPredicate, 2, 14, 6, // Skip to: 3365
/* 1815 */    MCD::OPC_Decode, 147, 3, 70, // Opcode: CELGBR
/* 1819 */    MCD::OPC_FilterValue, 161, 1, 8, 0, // Skip to: 1832
/* 1824 */    MCD::OPC_CheckPredicate, 2, 1, 6, // Skip to: 3365
/* 1828 */    MCD::OPC_Decode, 141, 3, 71, // Opcode: CDLGBR
/* 1832 */    MCD::OPC_FilterValue, 162, 1, 8, 0, // Skip to: 1845
/* 1837 */    MCD::OPC_CheckPredicate, 2, 244, 5, // Skip to: 3365
/* 1841 */    MCD::OPC_Decode, 231, 3, 72, // Opcode: CXLGBR
/* 1845 */    MCD::OPC_FilterValue, 164, 1, 10, 0, // Skip to: 1860
/* 1850 */    MCD::OPC_CheckField, 8, 8, 0, 229, 5, // Skip to: 3365
/* 1856 */    MCD::OPC_Decode, 145, 3, 73, // Opcode: CEGBR
/* 1860 */    MCD::OPC_FilterValue, 165, 1, 10, 0, // Skip to: 1875
/* 1865 */    MCD::OPC_CheckField, 8, 8, 0, 214, 5, // Skip to: 3365
/* 1871 */    MCD::OPC_Decode, 139, 3, 74, // Opcode: CDGBR
/* 1875 */    MCD::OPC_FilterValue, 166, 1, 10, 0, // Skip to: 1890
/* 1880 */    MCD::OPC_CheckField, 8, 8, 0, 199, 5, // Skip to: 3365
/* 1886 */    MCD::OPC_Decode, 229, 3, 75, // Opcode: CXGBR
/* 1890 */    MCD::OPC_FilterValue, 168, 1, 10, 0, // Skip to: 1905
/* 1895 */    MCD::OPC_CheckField, 8, 4, 0, 184, 5, // Skip to: 3365
/* 1901 */    MCD::OPC_Decode, 155, 3, 76, // Opcode: CGEBR
/* 1905 */    MCD::OPC_FilterValue, 169, 1, 10, 0, // Skip to: 1920
/* 1910 */    MCD::OPC_CheckField, 8, 4, 0, 169, 5, // Skip to: 3365
/* 1916 */    MCD::OPC_Decode, 154, 3, 77, // Opcode: CGDBR
/* 1920 */    MCD::OPC_FilterValue, 170, 1, 10, 0, // Skip to: 1935
/* 1925 */    MCD::OPC_CheckField, 8, 4, 0, 154, 5, // Skip to: 3365
/* 1931 */    MCD::OPC_Decode, 168, 3, 78, // Opcode: CGXBR
/* 1935 */    MCD::OPC_FilterValue, 172, 1, 8, 0, // Skip to: 1948
/* 1940 */    MCD::OPC_CheckPredicate, 2, 141, 5, // Skip to: 3365
/* 1944 */    MCD::OPC_Decode, 190, 3, 79, // Opcode: CLGEBR
/* 1948 */    MCD::OPC_FilterValue, 173, 1, 8, 0, // Skip to: 1961
/* 1953 */    MCD::OPC_CheckPredicate, 2, 128, 5, // Skip to: 3365
/* 1957 */    MCD::OPC_Decode, 189, 3, 80, // Opcode: CLGDBR
/* 1961 */    MCD::OPC_FilterValue, 174, 1, 8, 0, // Skip to: 1974
/* 1966 */    MCD::OPC_CheckPredicate, 2, 115, 5, // Skip to: 3365
/* 1970 */    MCD::OPC_Decode, 201, 3, 81, // Opcode: CLGXBR
/* 1974 */    MCD::OPC_FilterValue, 193, 1, 10, 0, // Skip to: 1989
/* 1979 */    MCD::OPC_CheckField, 8, 8, 0, 100, 5, // Skip to: 3365
/* 1985 */    MCD::OPC_Decode, 198, 4, 74, // Opcode: LDGR
/* 1989 */    MCD::OPC_FilterValue, 205, 1, 91, 5, // Skip to: 3365
/* 1994 */    MCD::OPC_CheckField, 8, 8, 0, 85, 5, // Skip to: 3365
/* 2000 */    MCD::OPC_Decode, 214, 4, 82, // Opcode: LGDR
/* 2004 */    MCD::OPC_FilterValue, 185, 1, 67, 5, // Skip to: 3356
/* 2009 */    MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 2012 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2026
/* 2016 */    MCD::OPC_CheckField, 8, 8, 0, 63, 5, // Skip to: 3365
/* 2022 */    MCD::OPC_Decode, 145, 5, 83, // Opcode: LPGR
/* 2026 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2040
/* 2030 */    MCD::OPC_CheckField, 8, 8, 0, 49, 5, // Skip to: 3365
/* 2036 */    MCD::OPC_Decode, 135, 5, 83, // Opcode: LNGR
/* 2040 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2054
/* 2044 */    MCD::OPC_CheckField, 8, 8, 0, 35, 5, // Skip to: 3365
/* 2050 */    MCD::OPC_Decode, 163, 5, 83, // Opcode: LTGR
/* 2054 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2068
/* 2058 */    MCD::OPC_CheckField, 8, 8, 0, 21, 5, // Skip to: 3365
/* 2064 */    MCD::OPC_Decode, 192, 4, 83, // Opcode: LCGR
/* 2068 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 2082
/* 2072 */    MCD::OPC_CheckField, 8, 8, 0, 7, 5, // Skip to: 3365
/* 2078 */    MCD::OPC_Decode, 223, 4, 83, // Opcode: LGR
/* 2082 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2096
/* 2086 */    MCD::OPC_CheckField, 8, 8, 0, 249, 4, // Skip to: 3365
/* 2092 */    MCD::OPC_Decode, 213, 4, 83, // Opcode: LGBR
/* 2096 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2110
/* 2100 */    MCD::OPC_CheckField, 8, 8, 0, 235, 4, // Skip to: 3365
/* 2106 */    MCD::OPC_Decode, 221, 4, 83, // Opcode: LGHR
/* 2110 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2123
/* 2114 */    MCD::OPC_CheckField, 8, 8, 0, 221, 4, // Skip to: 3365
/* 2120 */    MCD::OPC_Decode, 39, 84, // Opcode: AGR
/* 2123 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2137
/* 2127 */    MCD::OPC_CheckField, 8, 8, 0, 208, 4, // Skip to: 3365
/* 2133 */    MCD::OPC_Decode, 174, 6, 84, // Opcode: SGR
/* 2137 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2150
/* 2141 */    MCD::OPC_CheckField, 8, 8, 0, 194, 4, // Skip to: 3365
/* 2147 */    MCD::OPC_Decode, 60, 84, // Opcode: ALGR
/* 2150 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2164
/* 2154 */    MCD::OPC_CheckField, 8, 8, 0, 181, 4, // Skip to: 3365
/* 2160 */    MCD::OPC_Decode, 188, 6, 84, // Opcode: SLGR
/* 2164 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2178
/* 2168 */    MCD::OPC_CheckField, 8, 8, 0, 167, 4, // Skip to: 3365
/* 2174 */    MCD::OPC_Decode, 203, 5, 84, // Opcode: MSGR
/* 2178 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2192
/* 2182 */    MCD::OPC_CheckField, 8, 8, 0, 153, 4, // Skip to: 3365
/* 2188 */    MCD::OPC_Decode, 136, 4, 85, // Opcode: DSGR
/* 2192 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2206
/* 2196 */    MCD::OPC_CheckField, 8, 8, 0, 139, 4, // Skip to: 3365
/* 2202 */    MCD::OPC_Decode, 153, 5, 83, // Opcode: LRVGR
/* 2206 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 2220
/* 2210 */    MCD::OPC_CheckField, 8, 8, 0, 125, 4, // Skip to: 3365
/* 2216 */    MCD::OPC_Decode, 144, 5, 86, // Opcode: LPGFR
/* 2220 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 2234
/* 2224 */    MCD::OPC_CheckField, 8, 8, 0, 111, 4, // Skip to: 3365
/* 2230 */    MCD::OPC_Decode, 134, 5, 86, // Opcode: LNGFR
/* 2234 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 2248
/* 2238 */    MCD::OPC_CheckField, 8, 8, 0, 97, 4, // Skip to: 3365
/* 2244 */    MCD::OPC_Decode, 162, 5, 83, // Opcode: LTGFR
/* 2248 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 2262
/* 2252 */    MCD::OPC_CheckField, 8, 8, 0, 83, 4, // Skip to: 3365
/* 2258 */    MCD::OPC_Decode, 191, 4, 86, // Opcode: LCGFR
/* 2262 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2276
/* 2266 */    MCD::OPC_CheckField, 8, 8, 0, 69, 4, // Skip to: 3365
/* 2272 */    MCD::OPC_Decode, 217, 4, 86, // Opcode: LGFR
/* 2276 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 2290
/* 2280 */    MCD::OPC_CheckField, 8, 8, 0, 55, 4, // Skip to: 3365
/* 2286 */    MCD::OPC_Decode, 241, 4, 86, // Opcode: LLGFR
/* 2290 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 2303
/* 2294 */    MCD::OPC_CheckField, 8, 8, 0, 41, 4, // Skip to: 3365
/* 2300 */    MCD::OPC_Decode, 36, 87, // Opcode: AGFR
/* 2303 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2317
/* 2307 */    MCD::OPC_CheckField, 8, 8, 0, 28, 4, // Skip to: 3365
/* 2313 */    MCD::OPC_Decode, 173, 6, 87, // Opcode: SGFR
/* 2317 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 2330
/* 2321 */    MCD::OPC_CheckField, 8, 8, 0, 14, 4, // Skip to: 3365
/* 2327 */    MCD::OPC_Decode, 58, 87, // Opcode: ALGFR
/* 2330 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 2344
/* 2334 */    MCD::OPC_CheckField, 8, 8, 0, 1, 4, // Skip to: 3365
/* 2340 */    MCD::OPC_Decode, 187, 6, 87, // Opcode: SLGFR
/* 2344 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 2358
/* 2348 */    MCD::OPC_CheckField, 8, 8, 0, 243, 3, // Skip to: 3365
/* 2354 */    MCD::OPC_Decode, 202, 5, 87, // Opcode: MSGFR
/* 2358 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 2372
/* 2362 */    MCD::OPC_CheckField, 8, 8, 0, 229, 3, // Skip to: 3365
/* 2368 */    MCD::OPC_Decode, 135, 4, 88, // Opcode: DSGFR
/* 2372 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 2386
/* 2376 */    MCD::OPC_CheckField, 8, 8, 0, 215, 3, // Skip to: 3365
/* 2382 */    MCD::OPC_Decode, 154, 5, 3, // Opcode: LRVR
/* 2386 */    MCD::OPC_FilterValue, 32, 10, 0, // Skip to: 2400
/* 2390 */    MCD::OPC_CheckField, 8, 8, 0, 201, 3, // Skip to: 3365
/* 2396 */    MCD::OPC_Decode, 165, 3, 83, // Opcode: CGR
/* 2400 */    MCD::OPC_FilterValue, 33, 10, 0, // Skip to: 2414
/* 2404 */    MCD::OPC_CheckField, 8, 8, 0, 187, 3, // Skip to: 3365
/* 2410 */    MCD::OPC_Decode, 198, 3, 83, // Opcode: CLGR
/* 2414 */    MCD::OPC_FilterValue, 38, 10, 0, // Skip to: 2428
/* 2418 */    MCD::OPC_CheckField, 8, 8, 0, 173, 3, // Skip to: 3365
/* 2424 */    MCD::OPC_Decode, 188, 4, 3, // Opcode: LBR
/* 2428 */    MCD::OPC_FilterValue, 39, 10, 0, // Skip to: 2442
/* 2432 */    MCD::OPC_CheckField, 8, 8, 0, 159, 3, // Skip to: 3365
/* 2438 */    MCD::OPC_Decode, 230, 4, 3, // Opcode: LHR
/* 2442 */    MCD::OPC_FilterValue, 48, 10, 0, // Skip to: 2456
/* 2446 */    MCD::OPC_CheckField, 8, 8, 0, 145, 3, // Skip to: 3365
/* 2452 */    MCD::OPC_Decode, 158, 3, 86, // Opcode: CGFR
/* 2456 */    MCD::OPC_FilterValue, 49, 10, 0, // Skip to: 2470
/* 2460 */    MCD::OPC_CheckField, 8, 8, 0, 131, 3, // Skip to: 3365
/* 2466 */    MCD::OPC_Decode, 193, 3, 86, // Opcode: CLGFR
/* 2470 */    MCD::OPC_FilterValue, 128, 1, 10, 0, // Skip to: 2485
/* 2475 */    MCD::OPC_CheckField, 8, 8, 0, 116, 3, // Skip to: 3365
/* 2481 */    MCD::OPC_Decode, 224, 5, 84, // Opcode: NGR
/* 2485 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2500
/* 2490 */    MCD::OPC_CheckField, 8, 8, 0, 101, 3, // Skip to: 3365
/* 2496 */    MCD::OPC_Decode, 252, 5, 84, // Opcode: OGR
/* 2500 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2515
/* 2505 */    MCD::OPC_CheckField, 8, 8, 0, 86, 3, // Skip to: 3365
/* 2511 */    MCD::OPC_Decode, 143, 7, 84, // Opcode: XGR
/* 2515 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2530
/* 2520 */    MCD::OPC_CheckField, 8, 8, 0, 71, 3, // Skip to: 3365
/* 2526 */    MCD::OPC_Decode, 146, 4, 89, // Opcode: FLOGR
/* 2530 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2545
/* 2535 */    MCD::OPC_CheckField, 8, 8, 0, 56, 3, // Skip to: 3365
/* 2541 */    MCD::OPC_Decode, 239, 4, 83, // Opcode: LLGCR
/* 2545 */    MCD::OPC_FilterValue, 133, 1, 10, 0, // Skip to: 2560
/* 2550 */    MCD::OPC_CheckField, 8, 8, 0, 41, 3, // Skip to: 3365
/* 2556 */    MCD::OPC_Decode, 244, 4, 83, // Opcode: LLGHR
/* 2560 */    MCD::OPC_FilterValue, 134, 1, 10, 0, // Skip to: 2575
/* 2565 */    MCD::OPC_CheckField, 8, 8, 0, 26, 3, // Skip to: 3365
/* 2571 */    MCD::OPC_Decode, 192, 5, 85, // Opcode: MLGR
/* 2575 */    MCD::OPC_FilterValue, 135, 1, 10, 0, // Skip to: 2590
/* 2580 */    MCD::OPC_CheckField, 8, 8, 0, 11, 3, // Skip to: 3365
/* 2586 */    MCD::OPC_Decode, 131, 4, 85, // Opcode: DLGR
/* 2590 */    MCD::OPC_FilterValue, 136, 1, 9, 0, // Skip to: 2604
/* 2595 */    MCD::OPC_CheckField, 8, 8, 0, 252, 2, // Skip to: 3365
/* 2601 */    MCD::OPC_Decode, 52, 84, // Opcode: ALCGR
/* 2604 */    MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 2619
/* 2609 */    MCD::OPC_CheckField, 8, 8, 0, 238, 2, // Skip to: 3365
/* 2615 */    MCD::OPC_Decode, 184, 6, 84, // Opcode: SLGBR
/* 2619 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 2634
/* 2624 */    MCD::OPC_CheckField, 8, 8, 0, 223, 2, // Skip to: 3365
/* 2630 */    MCD::OPC_Decode, 236, 4, 3, // Opcode: LLCR
/* 2634 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 2649
/* 2639 */    MCD::OPC_CheckField, 8, 8, 0, 208, 2, // Skip to: 3365
/* 2645 */    MCD::OPC_Decode, 249, 4, 3, // Opcode: LLHR
/* 2649 */    MCD::OPC_FilterValue, 151, 1, 10, 0, // Skip to: 2664
/* 2654 */    MCD::OPC_CheckField, 8, 8, 0, 193, 2, // Skip to: 3365
/* 2660 */    MCD::OPC_Decode, 132, 4, 88, // Opcode: DLR
/* 2664 */    MCD::OPC_FilterValue, 152, 1, 9, 0, // Skip to: 2678
/* 2669 */    MCD::OPC_CheckField, 8, 8, 0, 178, 2, // Skip to: 3365
/* 2675 */    MCD::OPC_Decode, 53, 4, // Opcode: ALCR
/* 2678 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 2693
/* 2683 */    MCD::OPC_CheckField, 8, 8, 0, 164, 2, // Skip to: 3365
/* 2689 */    MCD::OPC_Decode, 181, 6, 4, // Opcode: SLBR
/* 2693 */    MCD::OPC_FilterValue, 225, 1, 14, 0, // Skip to: 2712
/* 2698 */    MCD::OPC_CheckPredicate, 3, 151, 2, // Skip to: 3365
/* 2702 */    MCD::OPC_CheckField, 8, 8, 0, 145, 2, // Skip to: 3365
/* 2708 */    MCD::OPC_Decode, 148, 6, 83, // Opcode: POPCNT
/* 2712 */    MCD::OPC_FilterValue, 226, 1, 186, 0, // Skip to: 2903
/* 2717 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2720 */    MCD::OPC_FilterValue, 0, 129, 2, // Skip to: 3365
/* 2724 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2727 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2739
/* 2731 */    MCD::OPC_CheckPredicate, 4, 160, 0, // Skip to: 2895
/* 2735 */    MCD::OPC_Decode, 249, 2, 84, // Opcode: AsmOLOCGR
/* 2739 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2751
/* 2743 */    MCD::OPC_CheckPredicate, 4, 148, 0, // Skip to: 2895
/* 2747 */    MCD::OPC_Decode, 178, 1, 84, // Opcode: AsmHLOCGR
/* 2751 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2763
/* 2755 */    MCD::OPC_CheckPredicate, 4, 136, 0, // Skip to: 2895
/* 2759 */    MCD::OPC_Decode, 214, 2, 84, // Opcode: AsmNLELOCGR
/* 2763 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2775
/* 2767 */    MCD::OPC_CheckPredicate, 4, 124, 0, // Skip to: 2895
/* 2771 */    MCD::OPC_Decode, 173, 2, 84, // Opcode: AsmLLOCGR
/* 2775 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2787
/* 2779 */    MCD::OPC_CheckPredicate, 4, 112, 0, // Skip to: 2895
/* 2783 */    MCD::OPC_Decode, 196, 2, 84, // Opcode: AsmNHELOCGR
/* 2787 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2799
/* 2791 */    MCD::OPC_CheckPredicate, 4, 100, 0, // Skip to: 2895
/* 2795 */    MCD::OPC_Decode, 165, 2, 84, // Opcode: AsmLHLOCGR
/* 2799 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2811
/* 2803 */    MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 2895
/* 2807 */    MCD::OPC_Decode, 186, 2, 84, // Opcode: AsmNELOCGR
/* 2811 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2823
/* 2815 */    MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 2895
/* 2819 */    MCD::OPC_Decode, 160, 1, 84, // Opcode: AsmELOCGR
/* 2823 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2835
/* 2827 */    MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 2895
/* 2831 */    MCD::OPC_Decode, 223, 2, 84, // Opcode: AsmNLHLOCGR
/* 2835 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2847
/* 2839 */    MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 2895
/* 2843 */    MCD::OPC_Decode, 170, 1, 84, // Opcode: AsmHELOCGR
/* 2847 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2859
/* 2851 */    MCD::OPC_CheckPredicate, 4, 40, 0, // Skip to: 2895
/* 2855 */    MCD::OPC_Decode, 231, 2, 84, // Opcode: AsmNLLOCGR
/* 2859 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2871
/* 2863 */    MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 2895
/* 2867 */    MCD::OPC_Decode, 156, 2, 84, // Opcode: AsmLELOCGR
/* 2871 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2883
/* 2875 */    MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 2895
/* 2879 */    MCD::OPC_Decode, 204, 2, 84, // Opcode: AsmNHLOCGR
/* 2883 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2895
/* 2887 */    MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 2895
/* 2891 */    MCD::OPC_Decode, 240, 2, 84, // Opcode: AsmNOLOCGR
/* 2895 */    MCD::OPC_CheckPredicate, 4, 210, 1, // Skip to: 3365
/* 2899 */    MCD::OPC_Decode, 177, 2, 90, // Opcode: AsmLOCGR
/* 2903 */    MCD::OPC_FilterValue, 228, 1, 14, 0, // Skip to: 2922
/* 2908 */    MCD::OPC_CheckPredicate, 5, 197, 1, // Skip to: 3365
/* 2912 */    MCD::OPC_CheckField, 8, 4, 0, 191, 1, // Skip to: 3365
/* 2918 */    MCD::OPC_Decode, 225, 5, 91, // Opcode: NGRK
/* 2922 */    MCD::OPC_FilterValue, 230, 1, 14, 0, // Skip to: 2941
/* 2927 */    MCD::OPC_CheckPredicate, 5, 178, 1, // Skip to: 3365
/* 2931 */    MCD::OPC_CheckField, 8, 4, 0, 172, 1, // Skip to: 3365
/* 2937 */    MCD::OPC_Decode, 253, 5, 91, // Opcode: OGRK
/* 2941 */    MCD::OPC_FilterValue, 231, 1, 14, 0, // Skip to: 2960
/* 2946 */    MCD::OPC_CheckPredicate, 5, 159, 1, // Skip to: 3365
/* 2950 */    MCD::OPC_CheckField, 8, 4, 0, 153, 1, // Skip to: 3365
/* 2956 */    MCD::OPC_Decode, 144, 7, 91, // Opcode: XGRK
/* 2960 */    MCD::OPC_FilterValue, 232, 1, 13, 0, // Skip to: 2978
/* 2965 */    MCD::OPC_CheckPredicate, 5, 140, 1, // Skip to: 3365
/* 2969 */    MCD::OPC_CheckField, 8, 4, 0, 134, 1, // Skip to: 3365
/* 2975 */    MCD::OPC_Decode, 40, 91, // Opcode: AGRK
/* 2978 */    MCD::OPC_FilterValue, 233, 1, 14, 0, // Skip to: 2997
/* 2983 */    MCD::OPC_CheckPredicate, 5, 122, 1, // Skip to: 3365
/* 2987 */    MCD::OPC_CheckField, 8, 4, 0, 116, 1, // Skip to: 3365
/* 2993 */    MCD::OPC_Decode, 175, 6, 91, // Opcode: SGRK
/* 2997 */    MCD::OPC_FilterValue, 234, 1, 13, 0, // Skip to: 3015
/* 3002 */    MCD::OPC_CheckPredicate, 5, 103, 1, // Skip to: 3365
/* 3006 */    MCD::OPC_CheckField, 8, 4, 0, 97, 1, // Skip to: 3365
/* 3012 */    MCD::OPC_Decode, 61, 91, // Opcode: ALGRK
/* 3015 */    MCD::OPC_FilterValue, 235, 1, 14, 0, // Skip to: 3034
/* 3020 */    MCD::OPC_CheckPredicate, 5, 85, 1, // Skip to: 3365
/* 3024 */    MCD::OPC_CheckField, 8, 4, 0, 79, 1, // Skip to: 3365
/* 3030 */    MCD::OPC_Decode, 189, 6, 91, // Opcode: SLGRK
/* 3034 */    MCD::OPC_FilterValue, 242, 1, 186, 0, // Skip to: 3225
/* 3039 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 3042 */    MCD::OPC_FilterValue, 0, 63, 1, // Skip to: 3365
/* 3046 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3049 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3061
/* 3053 */    MCD::OPC_CheckPredicate, 4, 160, 0, // Skip to: 3217
/* 3057 */    MCD::OPC_Decode, 250, 2, 4, // Opcode: AsmOLOCR
/* 3061 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3073
/* 3065 */    MCD::OPC_CheckPredicate, 4, 148, 0, // Skip to: 3217
/* 3069 */    MCD::OPC_Decode, 179, 1, 4, // Opcode: AsmHLOCR
/* 3073 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3085
/* 3077 */    MCD::OPC_CheckPredicate, 4, 136, 0, // Skip to: 3217
/* 3081 */    MCD::OPC_Decode, 215, 2, 4, // Opcode: AsmNLELOCR
/* 3085 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3097
/* 3089 */    MCD::OPC_CheckPredicate, 4, 124, 0, // Skip to: 3217
/* 3093 */    MCD::OPC_Decode, 174, 2, 4, // Opcode: AsmLLOCR
/* 3097 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3109
/* 3101 */    MCD::OPC_CheckPredicate, 4, 112, 0, // Skip to: 3217
/* 3105 */    MCD::OPC_Decode, 197, 2, 4, // Opcode: AsmNHELOCR
/* 3109 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3121
/* 3113 */    MCD::OPC_CheckPredicate, 4, 100, 0, // Skip to: 3217
/* 3117 */    MCD::OPC_Decode, 166, 2, 4, // Opcode: AsmLHLOCR
/* 3121 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3133
/* 3125 */    MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 3217
/* 3129 */    MCD::OPC_Decode, 187, 2, 4, // Opcode: AsmNELOCR
/* 3133 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3145
/* 3137 */    MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 3217
/* 3141 */    MCD::OPC_Decode, 161, 1, 4, // Opcode: AsmELOCR
/* 3145 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3157
/* 3149 */    MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 3217
/* 3153 */    MCD::OPC_Decode, 224, 2, 4, // Opcode: AsmNLHLOCR
/* 3157 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3169
/* 3161 */    MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 3217
/* 3165 */    MCD::OPC_Decode, 171, 1, 4, // Opcode: AsmHELOCR
/* 3169 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3181
/* 3173 */    MCD::OPC_CheckPredicate, 4, 40, 0, // Skip to: 3217
/* 3177 */    MCD::OPC_Decode, 232, 2, 4, // Opcode: AsmNLLOCR
/* 3181 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3193
/* 3185 */    MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 3217
/* 3189 */    MCD::OPC_Decode, 157, 2, 4, // Opcode: AsmLELOCR
/* 3193 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3205
/* 3197 */    MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 3217
/* 3201 */    MCD::OPC_Decode, 205, 2, 4, // Opcode: AsmNHLOCR
/* 3205 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3217
/* 3209 */    MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 3217
/* 3213 */    MCD::OPC_Decode, 241, 2, 4, // Opcode: AsmNOLOCR
/* 3217 */    MCD::OPC_CheckPredicate, 4, 144, 0, // Skip to: 3365
/* 3221 */    MCD::OPC_Decode, 178, 2, 92, // Opcode: AsmLOCR
/* 3225 */    MCD::OPC_FilterValue, 244, 1, 14, 0, // Skip to: 3244
/* 3230 */    MCD::OPC_CheckPredicate, 5, 131, 0, // Skip to: 3365
/* 3234 */    MCD::OPC_CheckField, 8, 4, 0, 125, 0, // Skip to: 3365
/* 3240 */    MCD::OPC_Decode, 244, 5, 93, // Opcode: NRK
/* 3244 */    MCD::OPC_FilterValue, 246, 1, 14, 0, // Skip to: 3263
/* 3249 */    MCD::OPC_CheckPredicate, 5, 112, 0, // Skip to: 3365
/* 3253 */    MCD::OPC_CheckField, 8, 4, 0, 106, 0, // Skip to: 3365
/* 3259 */    MCD::OPC_Decode, 144, 6, 93, // Opcode: ORK
/* 3263 */    MCD::OPC_FilterValue, 247, 1, 14, 0, // Skip to: 3282
/* 3268 */    MCD::OPC_CheckPredicate, 5, 93, 0, // Skip to: 3365
/* 3272 */    MCD::OPC_CheckField, 8, 4, 0, 87, 0, // Skip to: 3365
/* 3278 */    MCD::OPC_Decode, 153, 7, 93, // Opcode: XRK
/* 3282 */    MCD::OPC_FilterValue, 248, 1, 13, 0, // Skip to: 3300
/* 3287 */    MCD::OPC_CheckPredicate, 5, 74, 0, // Skip to: 3365
/* 3291 */    MCD::OPC_CheckField, 8, 4, 0, 68, 0, // Skip to: 3365
/* 3297 */    MCD::OPC_Decode, 67, 93, // Opcode: ARK
/* 3300 */    MCD::OPC_FilterValue, 249, 1, 14, 0, // Skip to: 3319
/* 3305 */    MCD::OPC_CheckPredicate, 5, 56, 0, // Skip to: 3365
/* 3309 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 3365
/* 3315 */    MCD::OPC_Decode, 205, 6, 93, // Opcode: SRK
/* 3319 */    MCD::OPC_FilterValue, 250, 1, 13, 0, // Skip to: 3337
/* 3324 */    MCD::OPC_CheckPredicate, 5, 37, 0, // Skip to: 3365
/* 3328 */    MCD::OPC_CheckField, 8, 4, 0, 31, 0, // Skip to: 3365
/* 3334 */    MCD::OPC_Decode, 64, 93, // Opcode: ALRK
/* 3337 */    MCD::OPC_FilterValue, 251, 1, 23, 0, // Skip to: 3365
/* 3342 */    MCD::OPC_CheckPredicate, 5, 19, 0, // Skip to: 3365
/* 3346 */    MCD::OPC_CheckField, 8, 4, 0, 13, 0, // Skip to: 3365
/* 3352 */    MCD::OPC_Decode, 194, 6, 93, // Opcode: SLRK
/* 3356 */    MCD::OPC_FilterValue, 186, 1, 4, 0, // Skip to: 3365
/* 3361 */    MCD::OPC_Decode, 224, 3, 94, // Opcode: CS
/* 3365 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable48[] = {
/* 0 */       MCD::OPC_ExtractField, 40, 8,  // Inst{47-40} ...
/* 3 */       MCD::OPC_FilterValue, 192, 1, 238, 0, // Skip to: 246
/* 8 */       MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 181, 4, 95, // Opcode: LARL
/* 19 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 216, 4, 96, // Opcode: LGFI
/* 27 */      MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 158
/* 31 */      MCD::OPC_ExtractField, 36, 4,  // Inst{39-36} ...
/* 34 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 42
/* 38 */      MCD::OPC_Decode, 246, 2, 97, // Opcode: AsmOJG
/* 42 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 50
/* 46 */      MCD::OPC_Decode, 175, 1, 97, // Opcode: AsmHJG
/* 50 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 58
/* 54 */      MCD::OPC_Decode, 211, 2, 97, // Opcode: AsmNLEJG
/* 58 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 170, 2, 97, // Opcode: AsmLJG
/* 66 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 193, 2, 97, // Opcode: AsmNHEJG
/* 74 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 162, 2, 97, // Opcode: AsmLHJG
/* 82 */      MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 183, 2, 97, // Opcode: AsmNEJG
/* 90 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 157, 1, 97, // Opcode: AsmEJG
/* 98 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 220, 2, 97, // Opcode: AsmNLHJG
/* 106 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 167, 1, 97, // Opcode: AsmHEJG
/* 114 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 228, 2, 97, // Opcode: AsmNLJG
/* 122 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 153, 2, 97, // Opcode: AsmLEJG
/* 130 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 138
/* 134 */     MCD::OPC_Decode, 201, 2, 97, // Opcode: AsmNHJG
/* 138 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 146
/* 142 */     MCD::OPC_Decode, 237, 2, 97, // Opcode: AsmNOJG
/* 146 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 169, 4, 97, // Opcode: JG
/* 154 */     MCD::OPC_Decode, 146, 1, 98, // Opcode: AsmBRCL
/* 158 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 130, 3, 95, // Opcode: BRASL
/* 166 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 147, 7, 99, // Opcode: XIHF
/* 174 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 149, 7, 100, // Opcode: XILF
/* 182 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 153, 4, 101, // Opcode: IIHF
/* 190 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 160, 4, 102, // Opcode: IILF
/* 198 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 206
/* 202 */     MCD::OPC_Decode, 228, 5, 99, // Opcode: NIHF
/* 206 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 235, 5, 100, // Opcode: NILF
/* 214 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 128, 6, 99, // Opcode: OIHF
/* 222 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 135, 6, 100, // Opcode: OILF
/* 230 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 252, 4, 103, // Opcode: LLIHF
/* 238 */     MCD::OPC_FilterValue, 15, 36, 13, // Skip to: 3606
/* 242 */     MCD::OPC_Decode, 255, 4, 103, // Opcode: LLILF
/* 246 */     MCD::OPC_FilterValue, 194, 1, 95, 0, // Skip to: 346
/* 251 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 201, 5, 104, // Opcode: MSGFI
/* 262 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 198, 5, 105, // Opcode: MSFI
/* 270 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 186, 6, 106, // Opcode: SLGFI
/* 278 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 182, 6, 100, // Opcode: SLFI
/* 286 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 293
/* 290 */     MCD::OPC_Decode, 35, 104, // Opcode: AGFI
/* 293 */     MCD::OPC_FilterValue, 9, 3, 0, // Skip to: 300
/* 297 */     MCD::OPC_Decode, 31, 105, // Opcode: AFI
/* 300 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 307
/* 304 */     MCD::OPC_Decode, 57, 106, // Opcode: ALGFI
/* 307 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 314
/* 311 */     MCD::OPC_Decode, 54, 100, // Opcode: ALFI
/* 314 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 157, 3, 96, // Opcode: CGFI
/* 322 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 150, 3, 107, // Opcode: CFI
/* 330 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 192, 3, 103, // Opcode: CLGFI
/* 338 */     MCD::OPC_FilterValue, 15, 192, 12, // Skip to: 3606
/* 342 */     MCD::OPC_Decode, 185, 3, 102, // Opcode: CLFI
/* 346 */     MCD::OPC_FilterValue, 196, 1, 91, 0, // Skip to: 442
/* 351 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 354 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 250, 4, 108, // Opcode: LLHRL
/* 362 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 222, 4, 95, // Opcode: LGHRL
/* 370 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 231, 4, 108, // Opcode: LHRL
/* 378 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 245, 4, 95, // Opcode: LLGHRL
/* 386 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 227, 6, 108, // Opcode: STHRL
/* 394 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 224, 4, 95, // Opcode: LGRL
/* 402 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 223, 6, 95, // Opcode: STGRL
/* 410 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 218, 4, 95, // Opcode: LGFRL
/* 418 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 149, 5, 108, // Opcode: LRL
/* 426 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 242, 4, 95, // Opcode: LLGFRL
/* 434 */     MCD::OPC_FilterValue, 15, 96, 12, // Skip to: 3606
/* 438 */     MCD::OPC_Decode, 233, 6, 108, // Opcode: STRL
/* 442 */     MCD::OPC_FilterValue, 198, 1, 91, 0, // Skip to: 538
/* 447 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 450 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 147, 6, 98, // Opcode: PFDRL
/* 458 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 162, 3, 95, // Opcode: CGHRL
/* 466 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 173, 3, 108, // Opcode: CHRL
/* 474 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 482
/* 478 */     MCD::OPC_Decode, 195, 3, 95, // Opcode: CLGHRL
/* 482 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 204, 3, 108, // Opcode: CLHRL
/* 490 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 167, 3, 95, // Opcode: CGRL
/* 498 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 200, 3, 95, // Opcode: CLGRL
/* 506 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 159, 3, 95, // Opcode: CGFRL
/* 514 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 223, 3, 108, // Opcode: CRL
/* 522 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 530
/* 526 */     MCD::OPC_Decode, 194, 3, 95, // Opcode: CLGFRL
/* 530 */     MCD::OPC_FilterValue, 15, 0, 12, // Skip to: 3606
/* 534 */     MCD::OPC_Decode, 212, 3, 108, // Opcode: CLRL
/* 538 */     MCD::OPC_FilterValue, 204, 1, 38, 0, // Skip to: 581
/* 543 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 546 */     MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 557
/* 550 */     MCD::OPC_CheckPredicate, 6, 236, 11, // Skip to: 3606
/* 554 */     MCD::OPC_Decode, 48, 109, // Opcode: AIH
/* 557 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 569
/* 561 */     MCD::OPC_CheckPredicate, 6, 225, 11, // Skip to: 3606
/* 565 */     MCD::OPC_Decode, 176, 3, 110, // Opcode: CIH
/* 569 */     MCD::OPC_FilterValue, 15, 217, 11, // Skip to: 3606
/* 573 */     MCD::OPC_CheckPredicate, 6, 213, 11, // Skip to: 3606
/* 577 */     MCD::OPC_Decode, 206, 3, 102, // Opcode: CLIH
/* 581 */     MCD::OPC_FilterValue, 210, 1, 4, 0, // Skip to: 590
/* 586 */     MCD::OPC_Decode, 206, 5, 111, // Opcode: MVC
/* 590 */     MCD::OPC_FilterValue, 212, 1, 4, 0, // Skip to: 599
/* 595 */     MCD::OPC_Decode, 220, 5, 111, // Opcode: NC
/* 599 */     MCD::OPC_FilterValue, 213, 1, 4, 0, // Skip to: 608
/* 604 */     MCD::OPC_Decode, 179, 3, 111, // Opcode: CLC
/* 608 */     MCD::OPC_FilterValue, 214, 1, 4, 0, // Skip to: 617
/* 613 */     MCD::OPC_Decode, 248, 5, 111, // Opcode: OC
/* 617 */     MCD::OPC_FilterValue, 215, 1, 4, 0, // Skip to: 626
/* 622 */     MCD::OPC_Decode, 139, 7, 111, // Opcode: XC
/* 626 */     MCD::OPC_FilterValue, 227, 1, 175, 2, // Skip to: 1318
/* 631 */     MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 634 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 160, 5, 112, // Opcode: LTG
/* 642 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 211, 4, 112, // Opcode: LG
/* 650 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 657
/* 654 */     MCD::OPC_Decode, 33, 113, // Opcode: AG
/* 657 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 665
/* 661 */     MCD::OPC_Decode, 171, 6, 113, // Opcode: SG
/* 665 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 672
/* 669 */     MCD::OPC_Decode, 55, 113, // Opcode: ALG
/* 672 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 680
/* 676 */     MCD::OPC_Decode, 183, 6, 113, // Opcode: SLG
/* 680 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 688
/* 684 */     MCD::OPC_Decode, 199, 5, 113, // Opcode: MSG
/* 688 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 696
/* 692 */     MCD::OPC_Decode, 133, 4, 114, // Opcode: DSG
/* 696 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 704
/* 700 */     MCD::OPC_Decode, 152, 5, 112, // Opcode: LRVG
/* 704 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 712
/* 708 */     MCD::OPC_Decode, 155, 5, 115, // Opcode: LT
/* 712 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 720
/* 716 */     MCD::OPC_Decode, 215, 4, 112, // Opcode: LGF
/* 720 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 728
/* 724 */     MCD::OPC_Decode, 219, 4, 112, // Opcode: LGH
/* 728 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 736
/* 732 */     MCD::OPC_Decode, 240, 4, 112, // Opcode: LLGF
/* 736 */     MCD::OPC_FilterValue, 24, 3, 0, // Skip to: 743
/* 740 */     MCD::OPC_Decode, 34, 113, // Opcode: AGF
/* 743 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 751
/* 747 */     MCD::OPC_Decode, 172, 6, 113, // Opcode: SGF
/* 751 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 758
/* 755 */     MCD::OPC_Decode, 56, 113, // Opcode: ALGF
/* 758 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 766
/* 762 */     MCD::OPC_Decode, 185, 6, 113, // Opcode: SLGF
/* 766 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 774
/* 770 */     MCD::OPC_Decode, 200, 5, 113, // Opcode: MSGF
/* 774 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 782
/* 778 */     MCD::OPC_Decode, 134, 4, 114, // Opcode: DSGF
/* 782 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 790
/* 786 */     MCD::OPC_Decode, 151, 5, 115, // Opcode: LRV
/* 790 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 798
/* 794 */     MCD::OPC_Decode, 153, 3, 112, // Opcode: CG
/* 798 */     MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 806
/* 802 */     MCD::OPC_Decode, 188, 3, 112, // Opcode: CLG
/* 806 */     MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 814
/* 810 */     MCD::OPC_Decode, 222, 6, 112, // Opcode: STG
/* 814 */     MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 826
/* 818 */     MCD::OPC_CheckPredicate, 1, 224, 10, // Skip to: 3606
/* 822 */     MCD::OPC_Decode, 245, 5, 112, // Opcode: NTSTG
/* 826 */     MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 834
/* 830 */     MCD::OPC_Decode, 235, 6, 112, // Opcode: STRVG
/* 834 */     MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 842
/* 838 */     MCD::OPC_Decode, 156, 3, 112, // Opcode: CGF
/* 842 */     MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 850
/* 846 */     MCD::OPC_Decode, 191, 3, 112, // Opcode: CLGF
/* 850 */     MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 858
/* 854 */     MCD::OPC_Decode, 161, 5, 112, // Opcode: LTGF
/* 858 */     MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 866
/* 862 */     MCD::OPC_Decode, 160, 3, 112, // Opcode: CGH
/* 866 */     MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 874
/* 870 */     MCD::OPC_Decode, 146, 6, 116, // Opcode: PFD
/* 874 */     MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 882
/* 878 */     MCD::OPC_Decode, 234, 6, 115, // Opcode: STRV
/* 882 */     MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 890
/* 886 */     MCD::OPC_Decode, 237, 6, 115, // Opcode: STY
/* 890 */     MCD::OPC_FilterValue, 81, 4, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 205, 5, 117, // Opcode: MSY
/* 898 */     MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 906
/* 902 */     MCD::OPC_Decode, 246, 5, 117, // Opcode: NY
/* 906 */     MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 914
/* 910 */     MCD::OPC_Decode, 215, 3, 115, // Opcode: CLY
/* 914 */     MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 922
/* 918 */     MCD::OPC_Decode, 145, 6, 117, // Opcode: OY
/* 922 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 930
/* 926 */     MCD::OPC_Decode, 154, 7, 117, // Opcode: XY
/* 930 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 938
/* 934 */     MCD::OPC_Decode, 173, 5, 115, // Opcode: LY
/* 938 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 946
/* 942 */     MCD::OPC_Decode, 232, 3, 115, // Opcode: CY
/* 946 */     MCD::OPC_FilterValue, 90, 4, 0, // Skip to: 954
/* 950 */     MCD::OPC_Decode, 143, 1, 117, // Opcode: AY
/* 954 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 962
/* 958 */     MCD::OPC_Decode, 239, 6, 117, // Opcode: SY
/* 962 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 969
/* 966 */     MCD::OPC_Decode, 65, 117, // Opcode: ALY
/* 969 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 977
/* 973 */     MCD::OPC_Decode, 195, 6, 117, // Opcode: SLY
/* 977 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 228, 6, 115, // Opcode: STHY
/* 985 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 184, 4, 112, // Opcode: LAY
/* 993 */     MCD::OPC_FilterValue, 114, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 216, 6, 115, // Opcode: STCY
/* 1001 */    MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 1009
/* 1005 */    MCD::OPC_Decode, 151, 4, 113, // Opcode: ICY
/* 1009 */    MCD::OPC_FilterValue, 118, 4, 0, // Skip to: 1017
/* 1013 */    MCD::OPC_Decode, 185, 4, 115, // Opcode: LB
/* 1017 */    MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 1025
/* 1021 */    MCD::OPC_Decode, 212, 4, 112, // Opcode: LGB
/* 1025 */    MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 232, 4, 115, // Opcode: LHY
/* 1033 */    MCD::OPC_FilterValue, 121, 4, 0, // Skip to: 1041
/* 1037 */    MCD::OPC_Decode, 175, 3, 115, // Opcode: CHY
/* 1041 */    MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 1048
/* 1045 */    MCD::OPC_Decode, 47, 117, // Opcode: AHY
/* 1048 */    MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 1056
/* 1052 */    MCD::OPC_Decode, 177, 6, 117, // Opcode: SHY
/* 1056 */    MCD::OPC_FilterValue, 124, 4, 0, // Skip to: 1064
/* 1060 */    MCD::OPC_Decode, 190, 5, 117, // Opcode: MHY
/* 1064 */    MCD::OPC_FilterValue, 128, 1, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 223, 5, 113, // Opcode: NG
/* 1073 */    MCD::OPC_FilterValue, 129, 1, 4, 0, // Skip to: 1082
/* 1078 */    MCD::OPC_Decode, 251, 5, 113, // Opcode: OG
/* 1082 */    MCD::OPC_FilterValue, 130, 1, 4, 0, // Skip to: 1091
/* 1087 */    MCD::OPC_Decode, 142, 7, 113, // Opcode: XG
/* 1091 */    MCD::OPC_FilterValue, 134, 1, 4, 0, // Skip to: 1100
/* 1096 */    MCD::OPC_Decode, 191, 5, 114, // Opcode: MLG
/* 1100 */    MCD::OPC_FilterValue, 135, 1, 4, 0, // Skip to: 1109
/* 1105 */    MCD::OPC_Decode, 130, 4, 114, // Opcode: DLG
/* 1109 */    MCD::OPC_FilterValue, 136, 1, 3, 0, // Skip to: 1117
/* 1114 */    MCD::OPC_Decode, 51, 113, // Opcode: ALCG
/* 1117 */    MCD::OPC_FilterValue, 137, 1, 4, 0, // Skip to: 1126
/* 1122 */    MCD::OPC_Decode, 180, 6, 113, // Opcode: SLBG
/* 1126 */    MCD::OPC_FilterValue, 144, 1, 4, 0, // Skip to: 1135
/* 1131 */    MCD::OPC_Decode, 238, 4, 112, // Opcode: LLGC
/* 1135 */    MCD::OPC_FilterValue, 145, 1, 4, 0, // Skip to: 1144
/* 1140 */    MCD::OPC_Decode, 243, 4, 112, // Opcode: LLGH
/* 1144 */    MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 233, 4, 115, // Opcode: LLC
/* 1153 */    MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 1162
/* 1158 */    MCD::OPC_Decode, 246, 4, 115, // Opcode: LLH
/* 1162 */    MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 1171
/* 1167 */    MCD::OPC_Decode, 129, 4, 114, // Opcode: DL
/* 1171 */    MCD::OPC_FilterValue, 152, 1, 3, 0, // Skip to: 1179
/* 1176 */    MCD::OPC_Decode, 50, 117, // Opcode: ALC
/* 1179 */    MCD::OPC_FilterValue, 153, 1, 4, 0, // Skip to: 1188
/* 1184 */    MCD::OPC_Decode, 179, 6, 117, // Opcode: SLB
/* 1188 */    MCD::OPC_FilterValue, 192, 1, 8, 0, // Skip to: 1201
/* 1193 */    MCD::OPC_CheckPredicate, 6, 105, 9, // Skip to: 3606
/* 1197 */    MCD::OPC_Decode, 186, 4, 118, // Opcode: LBH
/* 1201 */    MCD::OPC_FilterValue, 194, 1, 8, 0, // Skip to: 1214
/* 1206 */    MCD::OPC_CheckPredicate, 6, 92, 9, // Skip to: 3606
/* 1210 */    MCD::OPC_Decode, 234, 4, 115, // Opcode: LLCH
/* 1214 */    MCD::OPC_FilterValue, 195, 1, 8, 0, // Skip to: 1227
/* 1219 */    MCD::OPC_CheckPredicate, 6, 79, 9, // Skip to: 3606
/* 1223 */    MCD::OPC_Decode, 214, 6, 118, // Opcode: STCH
/* 1227 */    MCD::OPC_FilterValue, 196, 1, 8, 0, // Skip to: 1240
/* 1232 */    MCD::OPC_CheckPredicate, 6, 66, 9, // Skip to: 3606
/* 1236 */    MCD::OPC_Decode, 226, 4, 118, // Opcode: LHH
/* 1240 */    MCD::OPC_FilterValue, 198, 1, 8, 0, // Skip to: 1253
/* 1245 */    MCD::OPC_CheckPredicate, 6, 53, 9, // Skip to: 3606
/* 1249 */    MCD::OPC_Decode, 247, 4, 115, // Opcode: LLHH
/* 1253 */    MCD::OPC_FilterValue, 199, 1, 8, 0, // Skip to: 1266
/* 1258 */    MCD::OPC_CheckPredicate, 6, 40, 9, // Skip to: 3606
/* 1262 */    MCD::OPC_Decode, 225, 6, 118, // Opcode: STHH
/* 1266 */    MCD::OPC_FilterValue, 202, 1, 8, 0, // Skip to: 1279
/* 1271 */    MCD::OPC_CheckPredicate, 6, 27, 9, // Skip to: 3606
/* 1275 */    MCD::OPC_Decode, 210, 4, 118, // Opcode: LFH
/* 1279 */    MCD::OPC_FilterValue, 203, 1, 8, 0, // Skip to: 1292
/* 1284 */    MCD::OPC_CheckPredicate, 6, 14, 9, // Skip to: 3606
/* 1288 */    MCD::OPC_Decode, 221, 6, 118, // Opcode: STFH
/* 1292 */    MCD::OPC_FilterValue, 205, 1, 8, 0, // Skip to: 1305
/* 1297 */    MCD::OPC_CheckPredicate, 6, 1, 9, // Skip to: 3606
/* 1301 */    MCD::OPC_Decode, 170, 3, 118, // Opcode: CHF
/* 1305 */    MCD::OPC_FilterValue, 207, 1, 248, 8, // Skip to: 3606
/* 1310 */    MCD::OPC_CheckPredicate, 6, 244, 8, // Skip to: 3606
/* 1314 */    MCD::OPC_Decode, 202, 3, 118, // Opcode: CLHF
/* 1318 */    MCD::OPC_FilterValue, 229, 1, 99, 0, // Skip to: 1422
/* 1323 */    MCD::OPC_ExtractField, 32, 8,  // Inst{39-32} ...
/* 1326 */    MCD::OPC_FilterValue, 68, 4, 0, // Skip to: 1334
/* 1330 */    MCD::OPC_Decode, 210, 5, 119, // Opcode: MVHHI
/* 1334 */    MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 1342
/* 1338 */    MCD::OPC_Decode, 209, 5, 119, // Opcode: MVGHI
/* 1342 */    MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 1350
/* 1346 */    MCD::OPC_Decode, 211, 5, 119, // Opcode: MVHI
/* 1350 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1358
/* 1354 */    MCD::OPC_Decode, 171, 3, 119, // Opcode: CHHSI
/* 1358 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1366
/* 1362 */    MCD::OPC_Decode, 203, 3, 120, // Opcode: CLHHSI
/* 1366 */    MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 1374
/* 1370 */    MCD::OPC_Decode, 163, 3, 119, // Opcode: CGHSI
/* 1374 */    MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 1382
/* 1378 */    MCD::OPC_Decode, 196, 3, 120, // Opcode: CLGHSI
/* 1382 */    MCD::OPC_FilterValue, 92, 4, 0, // Skip to: 1390
/* 1386 */    MCD::OPC_Decode, 174, 3, 119, // Opcode: CHSI
/* 1390 */    MCD::OPC_FilterValue, 93, 4, 0, // Skip to: 1398
/* 1394 */    MCD::OPC_Decode, 184, 3, 120, // Opcode: CLFHSI
/* 1398 */    MCD::OPC_FilterValue, 96, 8, 0, // Skip to: 1410
/* 1402 */    MCD::OPC_CheckPredicate, 1, 152, 8, // Skip to: 3606
/* 1406 */    MCD::OPC_Decode, 248, 6, 120, // Opcode: TBEGIN
/* 1410 */    MCD::OPC_FilterValue, 97, 144, 8, // Skip to: 3606
/* 1414 */    MCD::OPC_CheckPredicate, 1, 140, 8, // Skip to: 3606
/* 1418 */    MCD::OPC_Decode, 249, 6, 120, // Opcode: TBEGINC
/* 1422 */    MCD::OPC_FilterValue, 235, 1, 83, 4, // Skip to: 2534
/* 1427 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1430 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1438
/* 1434 */    MCD::OPC_Decode, 130, 5, 121, // Opcode: LMG
/* 1438 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1446
/* 1442 */    MCD::OPC_Decode, 203, 6, 122, // Opcode: SRAG
/* 1446 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1454
/* 1450 */    MCD::OPC_Decode, 207, 6, 122, // Opcode: SRLG
/* 1454 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1462
/* 1458 */    MCD::OPC_Decode, 191, 6, 122, // Opcode: SLLG
/* 1462 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1470
/* 1466 */    MCD::OPC_Decode, 226, 3, 123, // Opcode: CSY
/* 1470 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1478
/* 1474 */    MCD::OPC_Decode, 161, 6, 122, // Opcode: RLLG
/* 1478 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1486
/* 1482 */    MCD::OPC_Decode, 160, 6, 124, // Opcode: RLL
/* 1486 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1494
/* 1490 */    MCD::OPC_Decode, 229, 6, 121, // Opcode: STMG
/* 1494 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 1502
/* 1498 */    MCD::OPC_Decode, 225, 3, 125, // Opcode: CSG
/* 1502 */    MCD::OPC_FilterValue, 81, 4, 0, // Skip to: 1510
/* 1506 */    MCD::OPC_Decode, 137, 7, 126, // Opcode: TMY
/* 1510 */    MCD::OPC_FilterValue, 82, 4, 0, // Skip to: 1518
/* 1514 */    MCD::OPC_Decode, 213, 5, 126, // Opcode: MVIY
/* 1518 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1526
/* 1522 */    MCD::OPC_Decode, 242, 5, 126, // Opcode: NIY
/* 1526 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1534
/* 1530 */    MCD::OPC_Decode, 208, 3, 126, // Opcode: CLIY
/* 1534 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 1542
/* 1538 */    MCD::OPC_Decode, 142, 6, 126, // Opcode: OIY
/* 1542 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 1550
/* 1546 */    MCD::OPC_Decode, 151, 7, 126, // Opcode: XIY
/* 1550 */    MCD::OPC_FilterValue, 106, 3, 0, // Skip to: 1557
/* 1554 */    MCD::OPC_Decode, 68, 127, // Opcode: ASI
/* 1557 */    MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 1564
/* 1561 */    MCD::OPC_Decode, 41, 127, // Opcode: AGSI
/* 1564 */    MCD::OPC_FilterValue, 220, 1, 8, 0, // Skip to: 1577
/* 1569 */    MCD::OPC_CheckPredicate, 5, 241, 7, // Skip to: 3606
/* 1573 */    MCD::OPC_Decode, 204, 6, 124, // Opcode: SRAK
/* 1577 */    MCD::OPC_FilterValue, 222, 1, 8, 0, // Skip to: 1590
/* 1582 */    MCD::OPC_CheckPredicate, 5, 228, 7, // Skip to: 3606
/* 1586 */    MCD::OPC_Decode, 208, 6, 124, // Opcode: SRLK
/* 1590 */    MCD::OPC_FilterValue, 223, 1, 8, 0, // Skip to: 1603
/* 1595 */    MCD::OPC_CheckPredicate, 5, 215, 7, // Skip to: 3606
/* 1599 */    MCD::OPC_Decode, 192, 6, 124, // Opcode: SLLK
/* 1603 */    MCD::OPC_FilterValue, 226, 1, 194, 0, // Skip to: 1802
/* 1608 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1611 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1624
/* 1615 */    MCD::OPC_CheckPredicate, 4, 174, 0, // Skip to: 1793
/* 1619 */    MCD::OPC_Decode, 248, 2, 128, 1, // Opcode: AsmOLOCG
/* 1624 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1637
/* 1628 */    MCD::OPC_CheckPredicate, 4, 161, 0, // Skip to: 1793
/* 1632 */    MCD::OPC_Decode, 177, 1, 128, 1, // Opcode: AsmHLOCG
/* 1637 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1650
/* 1641 */    MCD::OPC_CheckPredicate, 4, 148, 0, // Skip to: 1793
/* 1645 */    MCD::OPC_Decode, 213, 2, 128, 1, // Opcode: AsmNLELOCG
/* 1650 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1663
/* 1654 */    MCD::OPC_CheckPredicate, 4, 135, 0, // Skip to: 1793
/* 1658 */    MCD::OPC_Decode, 172, 2, 128, 1, // Opcode: AsmLLOCG
/* 1663 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1676
/* 1667 */    MCD::OPC_CheckPredicate, 4, 122, 0, // Skip to: 1793
/* 1671 */    MCD::OPC_Decode, 195, 2, 128, 1, // Opcode: AsmNHELOCG
/* 1676 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1689
/* 1680 */    MCD::OPC_CheckPredicate, 4, 109, 0, // Skip to: 1793
/* 1684 */    MCD::OPC_Decode, 164, 2, 128, 1, // Opcode: AsmLHLOCG
/* 1689 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1702
/* 1693 */    MCD::OPC_CheckPredicate, 4, 96, 0, // Skip to: 1793
/* 1697 */    MCD::OPC_Decode, 185, 2, 128, 1, // Opcode: AsmNELOCG
/* 1702 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1715
/* 1706 */    MCD::OPC_CheckPredicate, 4, 83, 0, // Skip to: 1793
/* 1710 */    MCD::OPC_Decode, 159, 1, 128, 1, // Opcode: AsmELOCG
/* 1715 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1728
/* 1719 */    MCD::OPC_CheckPredicate, 4, 70, 0, // Skip to: 1793
/* 1723 */    MCD::OPC_Decode, 222, 2, 128, 1, // Opcode: AsmNLHLOCG
/* 1728 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1741
/* 1732 */    MCD::OPC_CheckPredicate, 4, 57, 0, // Skip to: 1793
/* 1736 */    MCD::OPC_Decode, 169, 1, 128, 1, // Opcode: AsmHELOCG
/* 1741 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1754
/* 1745 */    MCD::OPC_CheckPredicate, 4, 44, 0, // Skip to: 1793
/* 1749 */    MCD::OPC_Decode, 230, 2, 128, 1, // Opcode: AsmNLLOCG
/* 1754 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1767
/* 1758 */    MCD::OPC_CheckPredicate, 4, 31, 0, // Skip to: 1793
/* 1762 */    MCD::OPC_Decode, 155, 2, 128, 1, // Opcode: AsmLELOCG
/* 1767 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1780
/* 1771 */    MCD::OPC_CheckPredicate, 4, 18, 0, // Skip to: 1793
/* 1775 */    MCD::OPC_Decode, 203, 2, 128, 1, // Opcode: AsmNHLOCG
/* 1780 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1793
/* 1784 */    MCD::OPC_CheckPredicate, 4, 5, 0, // Skip to: 1793
/* 1788 */    MCD::OPC_Decode, 239, 2, 128, 1, // Opcode: AsmNOLOCG
/* 1793 */    MCD::OPC_CheckPredicate, 4, 17, 7, // Skip to: 3606
/* 1797 */    MCD::OPC_Decode, 176, 2, 129, 1, // Opcode: AsmLOCG
/* 1802 */    MCD::OPC_FilterValue, 227, 1, 194, 0, // Skip to: 2001
/* 1807 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1810 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1823
/* 1814 */    MCD::OPC_CheckPredicate, 4, 174, 0, // Skip to: 1992
/* 1818 */    MCD::OPC_Decode, 252, 2, 130, 1, // Opcode: AsmOSTOCG
/* 1823 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1836
/* 1827 */    MCD::OPC_CheckPredicate, 4, 161, 0, // Skip to: 1992
/* 1831 */    MCD::OPC_Decode, 181, 1, 130, 1, // Opcode: AsmHSTOCG
/* 1836 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1849
/* 1840 */    MCD::OPC_CheckPredicate, 4, 148, 0, // Skip to: 1992
/* 1844 */    MCD::OPC_Decode, 217, 2, 130, 1, // Opcode: AsmNLESTOCG
/* 1849 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1862
/* 1853 */    MCD::OPC_CheckPredicate, 4, 135, 0, // Skip to: 1992
/* 1857 */    MCD::OPC_Decode, 180, 2, 130, 1, // Opcode: AsmLSTOCG
/* 1862 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1875
/* 1866 */    MCD::OPC_CheckPredicate, 4, 122, 0, // Skip to: 1992
/* 1870 */    MCD::OPC_Decode, 199, 2, 130, 1, // Opcode: AsmNHESTOCG
/* 1875 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1888
/* 1879 */    MCD::OPC_CheckPredicate, 4, 109, 0, // Skip to: 1992
/* 1883 */    MCD::OPC_Decode, 168, 2, 130, 1, // Opcode: AsmLHSTOCG
/* 1888 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1901
/* 1892 */    MCD::OPC_CheckPredicate, 4, 96, 0, // Skip to: 1992
/* 1896 */    MCD::OPC_Decode, 189, 2, 130, 1, // Opcode: AsmNESTOCG
/* 1901 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1914
/* 1905 */    MCD::OPC_CheckPredicate, 4, 83, 0, // Skip to: 1992
/* 1909 */    MCD::OPC_Decode, 163, 1, 130, 1, // Opcode: AsmESTOCG
/* 1914 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1927
/* 1918 */    MCD::OPC_CheckPredicate, 4, 70, 0, // Skip to: 1992
/* 1922 */    MCD::OPC_Decode, 226, 2, 130, 1, // Opcode: AsmNLHSTOCG
/* 1927 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1940
/* 1931 */    MCD::OPC_CheckPredicate, 4, 57, 0, // Skip to: 1992
/* 1935 */    MCD::OPC_Decode, 173, 1, 130, 1, // Opcode: AsmHESTOCG
/* 1940 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1953
/* 1944 */    MCD::OPC_CheckPredicate, 4, 44, 0, // Skip to: 1992
/* 1948 */    MCD::OPC_Decode, 234, 2, 130, 1, // Opcode: AsmNLSTOCG
/* 1953 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1966
/* 1957 */    MCD::OPC_CheckPredicate, 4, 31, 0, // Skip to: 1992
/* 1961 */    MCD::OPC_Decode, 159, 2, 130, 1, // Opcode: AsmLESTOCG
/* 1966 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1979
/* 1970 */    MCD::OPC_CheckPredicate, 4, 18, 0, // Skip to: 1992
/* 1974 */    MCD::OPC_Decode, 207, 2, 130, 1, // Opcode: AsmNHSTOCG
/* 1979 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1992
/* 1983 */    MCD::OPC_CheckPredicate, 4, 5, 0, // Skip to: 1992
/* 1987 */    MCD::OPC_Decode, 243, 2, 130, 1, // Opcode: AsmNOSTOCG
/* 1992 */    MCD::OPC_CheckPredicate, 4, 74, 6, // Skip to: 3606
/* 1996 */    MCD::OPC_Decode, 254, 2, 131, 1, // Opcode: AsmSTOCG
/* 2001 */    MCD::OPC_FilterValue, 228, 1, 8, 0, // Skip to: 2014
/* 2006 */    MCD::OPC_CheckPredicate, 7, 60, 6, // Skip to: 3606
/* 2010 */    MCD::OPC_Decode, 178, 4, 121, // Opcode: LANG
/* 2014 */    MCD::OPC_FilterValue, 230, 1, 8, 0, // Skip to: 2027
/* 2019 */    MCD::OPC_CheckPredicate, 7, 47, 6, // Skip to: 3606
/* 2023 */    MCD::OPC_Decode, 180, 4, 121, // Opcode: LAOG
/* 2027 */    MCD::OPC_FilterValue, 231, 1, 8, 0, // Skip to: 2040
/* 2032 */    MCD::OPC_CheckPredicate, 7, 34, 6, // Skip to: 3606
/* 2036 */    MCD::OPC_Decode, 183, 4, 121, // Opcode: LAXG
/* 2040 */    MCD::OPC_FilterValue, 232, 1, 8, 0, // Skip to: 2053
/* 2045 */    MCD::OPC_CheckPredicate, 7, 21, 6, // Skip to: 3606
/* 2049 */    MCD::OPC_Decode, 174, 4, 121, // Opcode: LAAG
/* 2053 */    MCD::OPC_FilterValue, 234, 1, 8, 0, // Skip to: 2066
/* 2058 */    MCD::OPC_CheckPredicate, 7, 8, 6, // Skip to: 3606
/* 2062 */    MCD::OPC_Decode, 176, 4, 121, // Opcode: LAALG
/* 2066 */    MCD::OPC_FilterValue, 242, 1, 194, 0, // Skip to: 2265
/* 2071 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2074 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2087
/* 2078 */    MCD::OPC_CheckPredicate, 4, 174, 0, // Skip to: 2256
/* 2082 */    MCD::OPC_Decode, 247, 2, 132, 1, // Opcode: AsmOLOC
/* 2087 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2100
/* 2091 */    MCD::OPC_CheckPredicate, 4, 161, 0, // Skip to: 2256
/* 2095 */    MCD::OPC_Decode, 176, 1, 132, 1, // Opcode: AsmHLOC
/* 2100 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2113
/* 2104 */    MCD::OPC_CheckPredicate, 4, 148, 0, // Skip to: 2256
/* 2108 */    MCD::OPC_Decode, 212, 2, 132, 1, // Opcode: AsmNLELOC
/* 2113 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2126
/* 2117 */    MCD::OPC_CheckPredicate, 4, 135, 0, // Skip to: 2256
/* 2121 */    MCD::OPC_Decode, 171, 2, 132, 1, // Opcode: AsmLLOC
/* 2126 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2139
/* 2130 */    MCD::OPC_CheckPredicate, 4, 122, 0, // Skip to: 2256
/* 2134 */    MCD::OPC_Decode, 194, 2, 132, 1, // Opcode: AsmNHELOC
/* 2139 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2152
/* 2143 */    MCD::OPC_CheckPredicate, 4, 109, 0, // Skip to: 2256
/* 2147 */    MCD::OPC_Decode, 163, 2, 132, 1, // Opcode: AsmLHLOC
/* 2152 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2165
/* 2156 */    MCD::OPC_CheckPredicate, 4, 96, 0, // Skip to: 2256
/* 2160 */    MCD::OPC_Decode, 184, 2, 132, 1, // Opcode: AsmNELOC
/* 2165 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2178
/* 2169 */    MCD::OPC_CheckPredicate, 4, 83, 0, // Skip to: 2256
/* 2173 */    MCD::OPC_Decode, 158, 1, 132, 1, // Opcode: AsmELOC
/* 2178 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2191
/* 2182 */    MCD::OPC_CheckPredicate, 4, 70, 0, // Skip to: 2256
/* 2186 */    MCD::OPC_Decode, 221, 2, 132, 1, // Opcode: AsmNLHLOC
/* 2191 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2204
/* 2195 */    MCD::OPC_CheckPredicate, 4, 57, 0, // Skip to: 2256
/* 2199 */    MCD::OPC_Decode, 168, 1, 132, 1, // Opcode: AsmHELOC
/* 2204 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2217
/* 2208 */    MCD::OPC_CheckPredicate, 4, 44, 0, // Skip to: 2256
/* 2212 */    MCD::OPC_Decode, 229, 2, 132, 1, // Opcode: AsmNLLOC
/* 2217 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2230
/* 2221 */    MCD::OPC_CheckPredicate, 4, 31, 0, // Skip to: 2256
/* 2225 */    MCD::OPC_Decode, 154, 2, 132, 1, // Opcode: AsmLELOC
/* 2230 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2243
/* 2234 */    MCD::OPC_CheckPredicate, 4, 18, 0, // Skip to: 2256
/* 2238 */    MCD::OPC_Decode, 202, 2, 132, 1, // Opcode: AsmNHLOC
/* 2243 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 2256
/* 2247 */    MCD::OPC_CheckPredicate, 4, 5, 0, // Skip to: 2256
/* 2251 */    MCD::OPC_Decode, 238, 2, 132, 1, // Opcode: AsmNOLOC
/* 2256 */    MCD::OPC_CheckPredicate, 4, 66, 5, // Skip to: 3606
/* 2260 */    MCD::OPC_Decode, 175, 2, 133, 1, // Opcode: AsmLOC
/* 2265 */    MCD::OPC_FilterValue, 243, 1, 194, 0, // Skip to: 2464
/* 2270 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2273 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2286
/* 2277 */    MCD::OPC_CheckPredicate, 4, 174, 0, // Skip to: 2455
/* 2281 */    MCD::OPC_Decode, 251, 2, 134, 1, // Opcode: AsmOSTOC
/* 2286 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2299
/* 2290 */    MCD::OPC_CheckPredicate, 4, 161, 0, // Skip to: 2455
/* 2294 */    MCD::OPC_Decode, 180, 1, 134, 1, // Opcode: AsmHSTOC
/* 2299 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2312
/* 2303 */    MCD::OPC_CheckPredicate, 4, 148, 0, // Skip to: 2455
/* 2307 */    MCD::OPC_Decode, 216, 2, 134, 1, // Opcode: AsmNLESTOC
/* 2312 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2325
/* 2316 */    MCD::OPC_CheckPredicate, 4, 135, 0, // Skip to: 2455
/* 2320 */    MCD::OPC_Decode, 179, 2, 134, 1, // Opcode: AsmLSTOC
/* 2325 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2338
/* 2329 */    MCD::OPC_CheckPredicate, 4, 122, 0, // Skip to: 2455
/* 2333 */    MCD::OPC_Decode, 198, 2, 134, 1, // Opcode: AsmNHESTOC
/* 2338 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2351
/* 2342 */    MCD::OPC_CheckPredicate, 4, 109, 0, // Skip to: 2455
/* 2346 */    MCD::OPC_Decode, 167, 2, 134, 1, // Opcode: AsmLHSTOC
/* 2351 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2364
/* 2355 */    MCD::OPC_CheckPredicate, 4, 96, 0, // Skip to: 2455
/* 2359 */    MCD::OPC_Decode, 188, 2, 134, 1, // Opcode: AsmNESTOC
/* 2364 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2377
/* 2368 */    MCD::OPC_CheckPredicate, 4, 83, 0, // Skip to: 2455
/* 2372 */    MCD::OPC_Decode, 162, 1, 134, 1, // Opcode: AsmESTOC
/* 2377 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2390
/* 2381 */    MCD::OPC_CheckPredicate, 4, 70, 0, // Skip to: 2455
/* 2385 */    MCD::OPC_Decode, 225, 2, 134, 1, // Opcode: AsmNLHSTOC
/* 2390 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2403
/* 2394 */    MCD::OPC_CheckPredicate, 4, 57, 0, // Skip to: 2455
/* 2398 */    MCD::OPC_Decode, 172, 1, 134, 1, // Opcode: AsmHESTOC
/* 2403 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2416
/* 2407 */    MCD::OPC_CheckPredicate, 4, 44, 0, // Skip to: 2455
/* 2411 */    MCD::OPC_Decode, 233, 2, 134, 1, // Opcode: AsmNLSTOC
/* 2416 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2429
/* 2420 */    MCD::OPC_CheckPredicate, 4, 31, 0, // Skip to: 2455
/* 2424 */    MCD::OPC_Decode, 158, 2, 134, 1, // Opcode: AsmLESTOC
/* 2429 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2442
/* 2433 */    MCD::OPC_CheckPredicate, 4, 18, 0, // Skip to: 2455
/* 2437 */    MCD::OPC_Decode, 206, 2, 134, 1, // Opcode: AsmNHSTOC
/* 2442 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 2455
/* 2446 */    MCD::OPC_CheckPredicate, 4, 5, 0, // Skip to: 2455
/* 2450 */    MCD::OPC_Decode, 242, 2, 134, 1, // Opcode: AsmNOSTOC
/* 2455 */    MCD::OPC_CheckPredicate, 4, 123, 4, // Skip to: 3606
/* 2459 */    MCD::OPC_Decode, 253, 2, 135, 1, // Opcode: AsmSTOC
/* 2464 */    MCD::OPC_FilterValue, 244, 1, 9, 0, // Skip to: 2478
/* 2469 */    MCD::OPC_CheckPredicate, 7, 109, 4, // Skip to: 3606
/* 2473 */    MCD::OPC_Decode, 177, 4, 136, 1, // Opcode: LAN
/* 2478 */    MCD::OPC_FilterValue, 246, 1, 9, 0, // Skip to: 2492
/* 2483 */    MCD::OPC_CheckPredicate, 7, 95, 4, // Skip to: 3606
/* 2487 */    MCD::OPC_Decode, 179, 4, 136, 1, // Opcode: LAO
/* 2492 */    MCD::OPC_FilterValue, 247, 1, 9, 0, // Skip to: 2506
/* 2497 */    MCD::OPC_CheckPredicate, 7, 81, 4, // Skip to: 3606
/* 2501 */    MCD::OPC_Decode, 182, 4, 136, 1, // Opcode: LAX
/* 2506 */    MCD::OPC_FilterValue, 248, 1, 9, 0, // Skip to: 2520
/* 2511 */    MCD::OPC_CheckPredicate, 7, 67, 4, // Skip to: 3606
/* 2515 */    MCD::OPC_Decode, 173, 4, 136, 1, // Opcode: LAA
/* 2520 */    MCD::OPC_FilterValue, 250, 1, 57, 4, // Skip to: 3606
/* 2525 */    MCD::OPC_CheckPredicate, 7, 53, 4, // Skip to: 3606
/* 2529 */    MCD::OPC_Decode, 175, 4, 136, 1, // Opcode: LAAL
/* 2534 */    MCD::OPC_FilterValue, 236, 1, 198, 2, // Skip to: 3249
/* 2539 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2542 */    MCD::OPC_FilterValue, 81, 9, 0, // Skip to: 2555
/* 2546 */    MCD::OPC_CheckPredicate, 6, 32, 4, // Skip to: 3606
/* 2550 */    MCD::OPC_Decode, 156, 6, 137, 1, // Opcode: RISBLG
/* 2555 */    MCD::OPC_FilterValue, 84, 5, 0, // Skip to: 2564
/* 2559 */    MCD::OPC_Decode, 162, 6, 138, 1, // Opcode: RNSBG
/* 2564 */    MCD::OPC_FilterValue, 85, 5, 0, // Skip to: 2573
/* 2568 */    MCD::OPC_Decode, 150, 6, 138, 1, // Opcode: RISBG
/* 2573 */    MCD::OPC_FilterValue, 86, 5, 0, // Skip to: 2582
/* 2577 */    MCD::OPC_Decode, 163, 6, 138, 1, // Opcode: ROSBG
/* 2582 */    MCD::OPC_FilterValue, 87, 5, 0, // Skip to: 2591
/* 2586 */    MCD::OPC_Decode, 164, 6, 138, 1, // Opcode: RXSBG
/* 2591 */    MCD::OPC_FilterValue, 89, 9, 0, // Skip to: 2604
/* 2595 */    MCD::OPC_CheckPredicate, 8, 239, 3, // Skip to: 3606
/* 2599 */    MCD::OPC_Decode, 152, 6, 138, 1, // Opcode: RISBGN
/* 2604 */    MCD::OPC_FilterValue, 93, 9, 0, // Skip to: 2617
/* 2608 */    MCD::OPC_CheckPredicate, 6, 226, 3, // Skip to: 3606
/* 2612 */    MCD::OPC_Decode, 153, 6, 139, 1, // Opcode: RISBHG
/* 2617 */    MCD::OPC_FilterValue, 100, 69, 0, // Skip to: 2690
/* 2621 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2624 */    MCD::OPC_FilterValue, 0, 210, 3, // Skip to: 3606
/* 2628 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2631 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 2640
/* 2635 */    MCD::OPC_Decode, 207, 1, 140, 1, // Opcode: AsmJHCGR
/* 2640 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 2649
/* 2644 */    MCD::OPC_Decode, 239, 1, 140, 1, // Opcode: AsmJLCGR
/* 2649 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 2658
/* 2653 */    MCD::OPC_Decode, 143, 2, 140, 1, // Opcode: AsmJLHCGR
/* 2658 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 2667
/* 2662 */    MCD::OPC_Decode, 191, 1, 140, 1, // Opcode: AsmJECGR
/* 2667 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 2676
/* 2671 */    MCD::OPC_Decode, 223, 1, 140, 1, // Opcode: AsmJHECGR
/* 2676 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 2685
/* 2680 */    MCD::OPC_Decode, 255, 1, 140, 1, // Opcode: AsmJLECGR
/* 2685 */    MCD::OPC_Decode, 148, 1, 141, 1, // Opcode: AsmCGRJ
/* 2690 */    MCD::OPC_FilterValue, 101, 69, 0, // Skip to: 2763
/* 2694 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2697 */    MCD::OPC_FilterValue, 0, 137, 3, // Skip to: 3606
/* 2701 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2704 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 2713
/* 2708 */    MCD::OPC_Decode, 210, 1, 140, 1, // Opcode: AsmJHCLGR
/* 2713 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 2722
/* 2717 */    MCD::OPC_Decode, 242, 1, 140, 1, // Opcode: AsmJLCLGR
/* 2722 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 2731
/* 2726 */    MCD::OPC_Decode, 146, 2, 140, 1, // Opcode: AsmJLHCLGR
/* 2731 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 2740
/* 2735 */    MCD::OPC_Decode, 194, 1, 140, 1, // Opcode: AsmJECLGR
/* 2740 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 2749
/* 2744 */    MCD::OPC_Decode, 226, 1, 140, 1, // Opcode: AsmJHECLGR
/* 2749 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 2758
/* 2753 */    MCD::OPC_Decode, 130, 2, 140, 1, // Opcode: AsmJLECLGR
/* 2758 */    MCD::OPC_Decode, 151, 1, 141, 1, // Opcode: AsmCLGRJ
/* 2763 */    MCD::OPC_FilterValue, 118, 69, 0, // Skip to: 2836
/* 2767 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2770 */    MCD::OPC_FilterValue, 0, 64, 3, // Skip to: 3606
/* 2774 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2777 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 2786
/* 2781 */    MCD::OPC_Decode, 213, 1, 142, 1, // Opcode: AsmJHCR
/* 2786 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 2795
/* 2790 */    MCD::OPC_Decode, 245, 1, 142, 1, // Opcode: AsmJLCR
/* 2795 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 2804
/* 2799 */    MCD::OPC_Decode, 149, 2, 142, 1, // Opcode: AsmJLHCR
/* 2804 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 2813
/* 2808 */    MCD::OPC_Decode, 197, 1, 142, 1, // Opcode: AsmJECR
/* 2813 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 2822
/* 2817 */    MCD::OPC_Decode, 229, 1, 142, 1, // Opcode: AsmJHECR
/* 2822 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 2831
/* 2826 */    MCD::OPC_Decode, 133, 2, 142, 1, // Opcode: AsmJLECR
/* 2831 */    MCD::OPC_Decode, 154, 1, 143, 1, // Opcode: AsmCRJ
/* 2836 */    MCD::OPC_FilterValue, 119, 69, 0, // Skip to: 2909
/* 2840 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2843 */    MCD::OPC_FilterValue, 0, 247, 2, // Skip to: 3606
/* 2847 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2850 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 2859
/* 2854 */    MCD::OPC_Decode, 212, 1, 142, 1, // Opcode: AsmJHCLR
/* 2859 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 2868
/* 2863 */    MCD::OPC_Decode, 244, 1, 142, 1, // Opcode: AsmJLCLR
/* 2868 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 2877
/* 2872 */    MCD::OPC_Decode, 148, 2, 142, 1, // Opcode: AsmJLHCLR
/* 2877 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 2886
/* 2881 */    MCD::OPC_Decode, 196, 1, 142, 1, // Opcode: AsmJECLR
/* 2886 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 2895
/* 2890 */    MCD::OPC_Decode, 228, 1, 142, 1, // Opcode: AsmJHECLR
/* 2895 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 2904
/* 2899 */    MCD::OPC_Decode, 132, 2, 142, 1, // Opcode: AsmJLECLR
/* 2904 */    MCD::OPC_Decode, 153, 1, 143, 1, // Opcode: AsmCLRJ
/* 2909 */    MCD::OPC_FilterValue, 124, 62, 0, // Skip to: 2975
/* 2913 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2916 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 2925
/* 2920 */    MCD::OPC_Decode, 206, 1, 144, 1, // Opcode: AsmJHCGI
/* 2925 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 2934
/* 2929 */    MCD::OPC_Decode, 238, 1, 144, 1, // Opcode: AsmJLCGI
/* 2934 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 2943
/* 2938 */    MCD::OPC_Decode, 142, 2, 144, 1, // Opcode: AsmJLHCGI
/* 2943 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 2952
/* 2947 */    MCD::OPC_Decode, 190, 1, 144, 1, // Opcode: AsmJECGI
/* 2952 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 2961
/* 2956 */    MCD::OPC_Decode, 222, 1, 144, 1, // Opcode: AsmJHECGI
/* 2961 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 2970
/* 2965 */    MCD::OPC_Decode, 254, 1, 144, 1, // Opcode: AsmJLECGI
/* 2970 */    MCD::OPC_Decode, 147, 1, 145, 1, // Opcode: AsmCGIJ
/* 2975 */    MCD::OPC_FilterValue, 125, 62, 0, // Skip to: 3041
/* 2979 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2982 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 2991
/* 2986 */    MCD::OPC_Decode, 209, 1, 146, 1, // Opcode: AsmJHCLGI
/* 2991 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 3000
/* 2995 */    MCD::OPC_Decode, 241, 1, 146, 1, // Opcode: AsmJLCLGI
/* 3000 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 3009
/* 3004 */    MCD::OPC_Decode, 145, 2, 146, 1, // Opcode: AsmJLHCLGI
/* 3009 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 3018
/* 3013 */    MCD::OPC_Decode, 193, 1, 146, 1, // Opcode: AsmJECLGI
/* 3018 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 3027
/* 3022 */    MCD::OPC_Decode, 225, 1, 146, 1, // Opcode: AsmJHECLGI
/* 3027 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 3036
/* 3031 */    MCD::OPC_Decode, 129, 2, 146, 1, // Opcode: AsmJLECLGI
/* 3036 */    MCD::OPC_Decode, 150, 1, 147, 1, // Opcode: AsmCLGIJ
/* 3041 */    MCD::OPC_FilterValue, 126, 62, 0, // Skip to: 3107
/* 3045 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 3048 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 3057
/* 3052 */    MCD::OPC_Decode, 208, 1, 148, 1, // Opcode: AsmJHCI
/* 3057 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 3066
/* 3061 */    MCD::OPC_Decode, 240, 1, 148, 1, // Opcode: AsmJLCI
/* 3066 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 3075
/* 3070 */    MCD::OPC_Decode, 144, 2, 148, 1, // Opcode: AsmJLHCI
/* 3075 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 3084
/* 3079 */    MCD::OPC_Decode, 192, 1, 148, 1, // Opcode: AsmJECI
/* 3084 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 3093
/* 3088 */    MCD::OPC_Decode, 224, 1, 148, 1, // Opcode: AsmJHECI
/* 3093 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 3102
/* 3097 */    MCD::OPC_Decode, 128, 2, 148, 1, // Opcode: AsmJLECI
/* 3102 */    MCD::OPC_Decode, 149, 1, 149, 1, // Opcode: AsmCIJ
/* 3107 */    MCD::OPC_FilterValue, 127, 62, 0, // Skip to: 3173
/* 3111 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 3114 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 3123
/* 3118 */    MCD::OPC_Decode, 211, 1, 150, 1, // Opcode: AsmJHCLI
/* 3123 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 3132
/* 3127 */    MCD::OPC_Decode, 243, 1, 150, 1, // Opcode: AsmJLCLI
/* 3132 */    MCD::OPC_FilterValue, 6, 5, 0, // Skip to: 3141
/* 3136 */    MCD::OPC_Decode, 147, 2, 150, 1, // Opcode: AsmJLHCLI
/* 3141 */    MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 3150
/* 3145 */    MCD::OPC_Decode, 195, 1, 150, 1, // Opcode: AsmJECLI
/* 3150 */    MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 3159
/* 3154 */    MCD::OPC_Decode, 227, 1, 150, 1, // Opcode: AsmJHECLI
/* 3159 */    MCD::OPC_FilterValue, 12, 5, 0, // Skip to: 3168
/* 3163 */    MCD::OPC_Decode, 131, 2, 150, 1, // Opcode: AsmJLECLI
/* 3168 */    MCD::OPC_Decode, 152, 1, 151, 1, // Opcode: AsmCLIJ
/* 3173 */    MCD::OPC_FilterValue, 216, 1, 14, 0, // Skip to: 3192
/* 3178 */    MCD::OPC_CheckPredicate, 5, 168, 1, // Skip to: 3606
/* 3182 */    MCD::OPC_CheckField, 8, 8, 0, 162, 1, // Skip to: 3606
/* 3188 */    MCD::OPC_Decode, 44, 152, 1, // Opcode: AHIK
/* 3192 */    MCD::OPC_FilterValue, 217, 1, 14, 0, // Skip to: 3211
/* 3197 */    MCD::OPC_CheckPredicate, 5, 149, 1, // Skip to: 3606
/* 3201 */    MCD::OPC_CheckField, 8, 8, 0, 143, 1, // Skip to: 3606
/* 3207 */    MCD::OPC_Decode, 38, 153, 1, // Opcode: AGHIK
/* 3211 */    MCD::OPC_FilterValue, 218, 1, 14, 0, // Skip to: 3230
/* 3216 */    MCD::OPC_CheckPredicate, 5, 130, 1, // Skip to: 3606
/* 3220 */    MCD::OPC_CheckField, 8, 8, 0, 124, 1, // Skip to: 3606
/* 3226 */    MCD::OPC_Decode, 62, 152, 1, // Opcode: ALHSIK
/* 3230 */    MCD::OPC_FilterValue, 219, 1, 115, 1, // Skip to: 3606
/* 3235 */    MCD::OPC_CheckPredicate, 5, 111, 1, // Skip to: 3606
/* 3239 */    MCD::OPC_CheckField, 8, 8, 0, 105, 1, // Skip to: 3606
/* 3245 */    MCD::OPC_Decode, 59, 153, 1, // Opcode: ALGHSIK
/* 3249 */    MCD::OPC_FilterValue, 237, 1, 96, 1, // Skip to: 3606
/* 3254 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 3257 */    MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 3272
/* 3261 */    MCD::OPC_CheckField, 8, 8, 0, 83, 1, // Skip to: 3606
/* 3267 */    MCD::OPC_Decode, 196, 4, 154, 1, // Opcode: LDEB
/* 3272 */    MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 3287
/* 3276 */    MCD::OPC_CheckField, 8, 8, 0, 68, 1, // Skip to: 3606
/* 3282 */    MCD::OPC_Decode, 168, 5, 155, 1, // Opcode: LXDB
/* 3287 */    MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 3302
/* 3291 */    MCD::OPC_CheckField, 8, 8, 0, 53, 1, // Skip to: 3606
/* 3297 */    MCD::OPC_Decode, 170, 5, 155, 1, // Opcode: LXEB
/* 3302 */    MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 3317
/* 3306 */    MCD::OPC_CheckField, 8, 8, 0, 38, 1, // Skip to: 3606
/* 3312 */    MCD::OPC_Decode, 217, 5, 156, 1, // Opcode: MXDB
/* 3317 */    MCD::OPC_FilterValue, 9, 11, 0, // Skip to: 3332
/* 3321 */    MCD::OPC_CheckField, 8, 8, 0, 23, 1, // Skip to: 3606
/* 3327 */    MCD::OPC_Decode, 142, 3, 157, 1, // Opcode: CEB
/* 3332 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 3346
/* 3336 */    MCD::OPC_CheckField, 8, 8, 0, 8, 1, // Skip to: 3606
/* 3342 */    MCD::OPC_Decode, 28, 158, 1, // Opcode: AEB
/* 3346 */    MCD::OPC_FilterValue, 11, 11, 0, // Skip to: 3361
/* 3350 */    MCD::OPC_CheckField, 8, 8, 0, 250, 0, // Skip to: 3606
/* 3356 */    MCD::OPC_Decode, 169, 6, 158, 1, // Opcode: SEB
/* 3361 */    MCD::OPC_FilterValue, 12, 11, 0, // Skip to: 3376
/* 3365 */    MCD::OPC_CheckField, 8, 8, 0, 235, 0, // Skip to: 3606
/* 3371 */    MCD::OPC_Decode, 183, 5, 159, 1, // Opcode: MDEB
/* 3376 */    MCD::OPC_FilterValue, 13, 11, 0, // Skip to: 3391
/* 3380 */    MCD::OPC_CheckField, 8, 8, 0, 220, 0, // Skip to: 3606
/* 3386 */    MCD::OPC_Decode, 255, 3, 158, 1, // Opcode: DEB
/* 3391 */    MCD::OPC_FilterValue, 14, 11, 0, // Skip to: 3406
/* 3395 */    MCD::OPC_CheckField, 8, 4, 0, 205, 0, // Skip to: 3606
/* 3401 */    MCD::OPC_Decode, 179, 5, 160, 1, // Opcode: MAEB
/* 3406 */    MCD::OPC_FilterValue, 15, 11, 0, // Skip to: 3421
/* 3410 */    MCD::OPC_CheckField, 8, 4, 0, 190, 0, // Skip to: 3606
/* 3416 */    MCD::OPC_Decode, 196, 5, 160, 1, // Opcode: MSEB
/* 3421 */    MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 3436
/* 3425 */    MCD::OPC_CheckField, 8, 8, 0, 175, 0, // Skip to: 3606
/* 3431 */    MCD::OPC_Decode, 198, 6, 157, 1, // Opcode: SQEB
/* 3436 */    MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 3451
/* 3440 */    MCD::OPC_CheckField, 8, 8, 0, 160, 0, // Skip to: 3606
/* 3446 */    MCD::OPC_Decode, 196, 6, 154, 1, // Opcode: SQDB
/* 3451 */    MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 3466
/* 3455 */    MCD::OPC_CheckField, 8, 8, 0, 145, 0, // Skip to: 3606
/* 3461 */    MCD::OPC_Decode, 185, 5, 158, 1, // Opcode: MEEB
/* 3466 */    MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 3481
/* 3470 */    MCD::OPC_CheckField, 8, 8, 0, 130, 0, // Skip to: 3606
/* 3476 */    MCD::OPC_Decode, 136, 3, 154, 1, // Opcode: CDB
/* 3481 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 3495
/* 3485 */    MCD::OPC_CheckField, 8, 8, 0, 115, 0, // Skip to: 3606
/* 3491 */    MCD::OPC_Decode, 23, 159, 1, // Opcode: ADB
/* 3495 */    MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 3510
/* 3499 */    MCD::OPC_CheckField, 8, 8, 0, 101, 0, // Skip to: 3606
/* 3505 */    MCD::OPC_Decode, 167, 6, 159, 1, // Opcode: SDB
/* 3510 */    MCD::OPC_FilterValue, 28, 11, 0, // Skip to: 3525
/* 3514 */    MCD::OPC_CheckField, 8, 8, 0, 86, 0, // Skip to: 3606
/* 3520 */    MCD::OPC_Decode, 181, 5, 159, 1, // Opcode: MDB
/* 3525 */    MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 3540
/* 3529 */    MCD::OPC_CheckField, 8, 8, 0, 71, 0, // Skip to: 3606
/* 3535 */    MCD::OPC_Decode, 253, 3, 159, 1, // Opcode: DDB
/* 3540 */    MCD::OPC_FilterValue, 30, 11, 0, // Skip to: 3555
/* 3544 */    MCD::OPC_CheckField, 8, 4, 0, 56, 0, // Skip to: 3606
/* 3550 */    MCD::OPC_Decode, 177, 5, 161, 1, // Opcode: MADB
/* 3555 */    MCD::OPC_FilterValue, 31, 11, 0, // Skip to: 3570
/* 3559 */    MCD::OPC_CheckField, 8, 4, 0, 41, 0, // Skip to: 3606
/* 3565 */    MCD::OPC_Decode, 194, 5, 161, 1, // Opcode: MSDB
/* 3570 */    MCD::OPC_FilterValue, 100, 5, 0, // Skip to: 3579
/* 3574 */    MCD::OPC_Decode, 209, 4, 162, 1, // Opcode: LEY
/* 3579 */    MCD::OPC_FilterValue, 101, 5, 0, // Skip to: 3588
/* 3583 */    MCD::OPC_Decode, 202, 4, 163, 1, // Opcode: LDY
/* 3588 */    MCD::OPC_FilterValue, 102, 5, 0, // Skip to: 3597
/* 3592 */    MCD::OPC_Decode, 220, 6, 162, 1, // Opcode: STEY
/* 3597 */    MCD::OPC_FilterValue, 103, 5, 0, // Skip to: 3606
/* 3601 */    MCD::OPC_Decode, 218, 6, 163, 1, // Opcode: STDY
/* 3606 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & SystemZ::FeatureProcessorAssist));
  case 1:
    return ((Bits & SystemZ::FeatureTransactionalExecution));
  case 2:
    return ((Bits & SystemZ::FeatureFPExtension));
  case 3:
    return ((Bits & SystemZ::FeaturePopulationCount));
  case 4:
    return ((Bits & SystemZ::FeatureLoadStoreOnCond));
  case 5:
    return ((Bits & SystemZ::FeatureDistinctOps));
  case 6:
    return ((Bits & SystemZ::FeatureHighWord));
  case 7:
    return ((Bits & SystemZ::FeatureInterlockedAccess1));
  case 8:
    return ((Bits & SystemZ::FeatureMiscellaneousExtensions));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr32Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (decodeAccessRegOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 16, 24);
    if (decodeBDLAddr64Disp12Len8Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGRH32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
