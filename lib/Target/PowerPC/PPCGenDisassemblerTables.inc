/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * PPC Disassembler                                                         *|
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

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 1, 10, 128, 2, 250, 40, // Skip to: 10504
/* 14 */      MCD::OPC_Decode, 119, 0, // Opcode: ATTN
/* 17 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 25
/* 21 */      MCD::OPC_Decode, 157, 9, 1, // Opcode: TDI
/* 25 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 33
/* 29 */      MCD::OPC_Decode, 178, 9, 2, // Opcode: TWI
/* 33 */      MCD::OPC_FilterValue, 4, 70, 7, // Skip to: 1899
/* 37 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 40 */      MCD::OPC_FilterValue, 0, 179, 0, // Skip to: 223
/* 44 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 47 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 186, 9, 3, // Opcode: VADDUBM
/* 55 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 63
/* 59 */      MCD::OPC_Decode, 189, 9, 3, // Opcode: VADDUHM
/* 63 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 71
/* 67 */      MCD::OPC_Decode, 191, 9, 3, // Opcode: VADDUWM
/* 71 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 79
/* 75 */      MCD::OPC_Decode, 188, 9, 3, // Opcode: VADDUDM
/* 79 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 87
/* 83 */      MCD::OPC_Decode, 181, 9, 3, // Opcode: VADDCUW
/* 87 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 187, 9, 3, // Opcode: VADDUBS
/* 95 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 103
/* 99 */      MCD::OPC_Decode, 190, 9, 3, // Opcode: VADDUHS
/* 103 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 111
/* 107 */     MCD::OPC_Decode, 192, 9, 3, // Opcode: VADDUWS
/* 111 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 119
/* 115 */     MCD::OPC_Decode, 183, 9, 3, // Opcode: VADDSBS
/* 119 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 127
/* 123 */     MCD::OPC_Decode, 184, 9, 3, // Opcode: VADDSHS
/* 127 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 135
/* 131 */     MCD::OPC_Decode, 185, 9, 3, // Opcode: VADDSWS
/* 135 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 143
/* 139 */     MCD::OPC_Decode, 237, 10, 3, // Opcode: VSUBUBM
/* 143 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 151
/* 147 */     MCD::OPC_Decode, 240, 10, 3, // Opcode: VSUBUHM
/* 151 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 159
/* 155 */     MCD::OPC_Decode, 242, 10, 3, // Opcode: VSUBUWM
/* 159 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 167
/* 163 */     MCD::OPC_Decode, 239, 10, 3, // Opcode: VSUBUDM
/* 167 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 232, 10, 3, // Opcode: VSUBCUW
/* 175 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 238, 10, 3, // Opcode: VSUBUBS
/* 183 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 191
/* 187 */     MCD::OPC_Decode, 241, 10, 3, // Opcode: VSUBUHS
/* 191 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 199
/* 195 */     MCD::OPC_Decode, 243, 10, 3, // Opcode: VSUBUWS
/* 199 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 207
/* 203 */     MCD::OPC_Decode, 234, 10, 3, // Opcode: VSUBSBS
/* 207 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 215
/* 211 */     MCD::OPC_Decode, 235, 10, 3, // Opcode: VSUBSHS
/* 215 */     MCD::OPC_FilterValue, 30, 45, 40, // Skip to: 10504
/* 219 */     MCD::OPC_Decode, 236, 10, 3, // Opcode: VSUBSWS
/* 223 */     MCD::OPC_FilterValue, 2, 251, 0, // Skip to: 478
/* 227 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 230 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 128, 10, 3, // Opcode: VMAXUB
/* 238 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 246
/* 242 */     MCD::OPC_Decode, 130, 10, 3, // Opcode: VMAXUH
/* 246 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 131, 10, 3, // Opcode: VMAXUW
/* 254 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 129, 10, 3, // Opcode: VMAXUD
/* 262 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 252, 9, 3, // Opcode: VMAXSB
/* 270 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 254, 9, 3, // Opcode: VMAXSH
/* 278 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 255, 9, 3, // Opcode: VMAXSW
/* 286 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 294
/* 290 */     MCD::OPC_Decode, 253, 9, 3, // Opcode: VMAXSD
/* 294 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 302
/* 298 */     MCD::OPC_Decode, 139, 10, 3, // Opcode: VMINUB
/* 302 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 141, 10, 3, // Opcode: VMINUH
/* 310 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 318
/* 314 */     MCD::OPC_Decode, 142, 10, 3, // Opcode: VMINUW
/* 318 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 140, 10, 3, // Opcode: VMINUD
/* 326 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 334
/* 330 */     MCD::OPC_Decode, 135, 10, 3, // Opcode: VMINSB
/* 334 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 342
/* 338 */     MCD::OPC_Decode, 137, 10, 3, // Opcode: VMINSH
/* 342 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 350
/* 346 */     MCD::OPC_Decode, 138, 10, 3, // Opcode: VMINSW
/* 350 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 358
/* 354 */     MCD::OPC_Decode, 136, 10, 3, // Opcode: VMINSD
/* 358 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 198, 9, 3, // Opcode: VAVGUB
/* 366 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 374
/* 370 */     MCD::OPC_Decode, 199, 9, 3, // Opcode: VAVGUH
/* 374 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 200, 9, 3, // Opcode: VAVGUW
/* 382 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 390
/* 386 */     MCD::OPC_Decode, 195, 9, 3, // Opcode: VAVGSB
/* 390 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 398
/* 394 */     MCD::OPC_Decode, 196, 9, 3, // Opcode: VAVGSH
/* 398 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 406
/* 402 */     MCD::OPC_Decode, 197, 9, 3, // Opcode: VAVGSW
/* 406 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 414
/* 410 */     MCD::OPC_Decode, 208, 10, 4, // Opcode: VSHASIGMAW
/* 414 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 422
/* 418 */     MCD::OPC_Decode, 207, 10, 4, // Opcode: VSHASIGMAD
/* 422 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 436
/* 426 */     MCD::OPC_CheckField, 16, 5, 0, 88, 39, // Skip to: 10504
/* 432 */     MCD::OPC_Decode, 207, 9, 5, // Opcode: VCLZB
/* 436 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 450
/* 440 */     MCD::OPC_CheckField, 16, 5, 0, 74, 39, // Skip to: 10504
/* 446 */     MCD::OPC_Decode, 209, 9, 5, // Opcode: VCLZH
/* 450 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 464
/* 454 */     MCD::OPC_CheckField, 16, 5, 0, 60, 39, // Skip to: 10504
/* 460 */     MCD::OPC_Decode, 210, 9, 5, // Opcode: VCLZW
/* 464 */     MCD::OPC_FilterValue, 31, 52, 39, // Skip to: 10504
/* 468 */     MCD::OPC_CheckField, 16, 5, 0, 46, 39, // Skip to: 10504
/* 474 */     MCD::OPC_Decode, 208, 9, 5, // Opcode: VCLZD
/* 478 */     MCD::OPC_FilterValue, 3, 59, 0, // Skip to: 541
/* 482 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 485 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 499
/* 489 */     MCD::OPC_CheckField, 16, 5, 0, 25, 39, // Skip to: 10504
/* 495 */     MCD::OPC_Decode, 191, 10, 5, // Opcode: VPOPCNTB
/* 499 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 513
/* 503 */     MCD::OPC_CheckField, 16, 5, 0, 11, 39, // Skip to: 10504
/* 509 */     MCD::OPC_Decode, 193, 10, 5, // Opcode: VPOPCNTH
/* 513 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 527
/* 517 */     MCD::OPC_CheckField, 16, 5, 0, 253, 38, // Skip to: 10504
/* 523 */     MCD::OPC_Decode, 194, 10, 5, // Opcode: VPOPCNTW
/* 527 */     MCD::OPC_FilterValue, 31, 245, 38, // Skip to: 10504
/* 531 */     MCD::OPC_CheckField, 16, 5, 0, 239, 38, // Skip to: 10504
/* 537 */     MCD::OPC_Decode, 192, 10, 5, // Opcode: VPOPCNTD
/* 541 */     MCD::OPC_FilterValue, 4, 239, 0, // Skip to: 784
/* 545 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 548 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 200, 10, 3, // Opcode: VRLB
/* 556 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 202, 10, 3, // Opcode: VRLH
/* 564 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 203, 10, 3, // Opcode: VRLW
/* 572 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 201, 10, 3, // Opcode: VRLD
/* 580 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 210, 10, 3, // Opcode: VSLB
/* 588 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 213, 10, 3, // Opcode: VSLH
/* 596 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 215, 10, 3, // Opcode: VSLW
/* 604 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 612
/* 608 */     MCD::OPC_Decode, 209, 10, 3, // Opcode: VSL
/* 612 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 227, 10, 3, // Opcode: VSRB
/* 620 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 628
/* 624 */     MCD::OPC_Decode, 229, 10, 3, // Opcode: VSRH
/* 628 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 231, 10, 3, // Opcode: VSRW
/* 636 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 222, 10, 3, // Opcode: VSR
/* 644 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 223, 10, 3, // Opcode: VSRAB
/* 652 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 225, 10, 3, // Opcode: VSRAH
/* 660 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 226, 10, 3, // Opcode: VSRAW
/* 668 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 676
/* 672 */     MCD::OPC_Decode, 224, 10, 3, // Opcode: VSRAD
/* 676 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 684
/* 680 */     MCD::OPC_Decode, 193, 9, 3, // Opcode: VAND
/* 684 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 692
/* 688 */     MCD::OPC_Decode, 194, 9, 3, // Opcode: VANDC
/* 692 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 700
/* 696 */     MCD::OPC_Decode, 174, 10, 3, // Opcode: VOR
/* 700 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 708
/* 704 */     MCD::OPC_Decode, 255, 10, 3, // Opcode: VXOR
/* 708 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 716
/* 712 */     MCD::OPC_Decode, 173, 10, 3, // Opcode: VNOR
/* 716 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 724
/* 720 */     MCD::OPC_Decode, 175, 10, 3, // Opcode: VORC
/* 724 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 732
/* 728 */     MCD::OPC_Decode, 169, 10, 3, // Opcode: VNAND
/* 732 */     MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 740
/* 736 */     MCD::OPC_Decode, 211, 10, 3, // Opcode: VSLD
/* 740 */     MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 754
/* 744 */     MCD::OPC_CheckField, 11, 10, 0, 26, 38, // Skip to: 10504
/* 750 */     MCD::OPC_Decode, 214, 5, 6, // Opcode: MFVSCR
/* 754 */     MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 768
/* 758 */     MCD::OPC_CheckField, 16, 10, 0, 12, 38, // Skip to: 10504
/* 764 */     MCD::OPC_Decode, 244, 5, 7, // Opcode: MTVSCR
/* 768 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 776
/* 772 */     MCD::OPC_Decode, 247, 9, 3, // Opcode: VEQV
/* 776 */     MCD::OPC_FilterValue, 27, 252, 37, // Skip to: 10504
/* 780 */     MCD::OPC_Decode, 228, 10, 3, // Opcode: VSRD
/* 784 */     MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 999
/* 788 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 791 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 799
/* 795 */     MCD::OPC_Decode, 215, 9, 3, // Opcode: VCMPEQUB
/* 799 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 807
/* 803 */     MCD::OPC_Decode, 219, 9, 3, // Opcode: VCMPEQUH
/* 807 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 815
/* 811 */     MCD::OPC_Decode, 221, 9, 3, // Opcode: VCMPEQUW
/* 815 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 823
/* 819 */     MCD::OPC_Decode, 213, 9, 3, // Opcode: VCMPEQFP
/* 823 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 831
/* 827 */     MCD::OPC_Decode, 223, 9, 3, // Opcode: VCMPGEFP
/* 831 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 839
/* 835 */     MCD::OPC_Decode, 235, 9, 3, // Opcode: VCMPGTUB
/* 839 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 847
/* 843 */     MCD::OPC_Decode, 239, 9, 3, // Opcode: VCMPGTUH
/* 847 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 855
/* 851 */     MCD::OPC_Decode, 241, 9, 3, // Opcode: VCMPGTUW
/* 855 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 863
/* 859 */     MCD::OPC_Decode, 225, 9, 3, // Opcode: VCMPGTFP
/* 863 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 871
/* 867 */     MCD::OPC_Decode, 227, 9, 3, // Opcode: VCMPGTSB
/* 871 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 879
/* 875 */     MCD::OPC_Decode, 231, 9, 3, // Opcode: VCMPGTSH
/* 879 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 887
/* 883 */     MCD::OPC_Decode, 233, 9, 3, // Opcode: VCMPGTSW
/* 887 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 895
/* 891 */     MCD::OPC_Decode, 211, 9, 3, // Opcode: VCMPBFP
/* 895 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 903
/* 899 */     MCD::OPC_Decode, 216, 9, 3, // Opcode: VCMPEQUBo
/* 903 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 911
/* 907 */     MCD::OPC_Decode, 220, 9, 3, // Opcode: VCMPEQUHo
/* 911 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 919
/* 915 */     MCD::OPC_Decode, 222, 9, 3, // Opcode: VCMPEQUWo
/* 919 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 927
/* 923 */     MCD::OPC_Decode, 214, 9, 3, // Opcode: VCMPEQFPo
/* 927 */     MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 935
/* 931 */     MCD::OPC_Decode, 224, 9, 3, // Opcode: VCMPGEFPo
/* 935 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 943
/* 939 */     MCD::OPC_Decode, 236, 9, 3, // Opcode: VCMPGTUBo
/* 943 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 951
/* 947 */     MCD::OPC_Decode, 240, 9, 3, // Opcode: VCMPGTUHo
/* 951 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 959
/* 955 */     MCD::OPC_Decode, 242, 9, 3, // Opcode: VCMPGTUWo
/* 959 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 967
/* 963 */     MCD::OPC_Decode, 226, 9, 3, // Opcode: VCMPGTFPo
/* 967 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 975
/* 971 */     MCD::OPC_Decode, 228, 9, 3, // Opcode: VCMPGTSBo
/* 975 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 983
/* 979 */     MCD::OPC_Decode, 232, 9, 3, // Opcode: VCMPGTSHo
/* 983 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 991
/* 987 */     MCD::OPC_Decode, 234, 9, 3, // Opcode: VCMPGTSWo
/* 991 */     MCD::OPC_FilterValue, 31, 37, 37, // Skip to: 10504
/* 995 */     MCD::OPC_Decode, 212, 9, 3, // Opcode: VCMPBFPo
/* 999 */     MCD::OPC_FilterValue, 7, 51, 0, // Skip to: 1054
/* 1003 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1006 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1014
/* 1010 */    MCD::OPC_Decode, 217, 9, 3, // Opcode: VCMPEQUD
/* 1014 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1022
/* 1018 */    MCD::OPC_Decode, 237, 9, 3, // Opcode: VCMPGTUD
/* 1022 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1030
/* 1026 */    MCD::OPC_Decode, 229, 9, 3, // Opcode: VCMPGTSD
/* 1030 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1038
/* 1034 */    MCD::OPC_Decode, 218, 9, 3, // Opcode: VCMPEQUDo
/* 1038 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1046
/* 1042 */    MCD::OPC_Decode, 238, 9, 3, // Opcode: VCMPGTUDo
/* 1046 */    MCD::OPC_FilterValue, 31, 238, 36, // Skip to: 10504
/* 1050 */    MCD::OPC_Decode, 230, 9, 3, // Opcode: VCMPGTSDo
/* 1054 */    MCD::OPC_FilterValue, 8, 201, 0, // Skip to: 1259
/* 1058 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1061 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1069
/* 1065 */    MCD::OPC_Decode, 165, 10, 3, // Opcode: VMULOUB
/* 1069 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1077
/* 1073 */    MCD::OPC_Decode, 166, 10, 3, // Opcode: VMULOUH
/* 1077 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1085
/* 1081 */    MCD::OPC_Decode, 167, 10, 3, // Opcode: VMULOUW
/* 1085 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1093
/* 1089 */    MCD::OPC_Decode, 162, 10, 3, // Opcode: VMULOSB
/* 1093 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1101
/* 1097 */    MCD::OPC_Decode, 163, 10, 3, // Opcode: VMULOSH
/* 1101 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1109
/* 1105 */    MCD::OPC_Decode, 164, 10, 3, // Opcode: VMULOSW
/* 1109 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1117
/* 1113 */    MCD::OPC_Decode, 159, 10, 3, // Opcode: VMULEUB
/* 1117 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1125
/* 1121 */    MCD::OPC_Decode, 160, 10, 3, // Opcode: VMULEUH
/* 1125 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1133
/* 1129 */    MCD::OPC_Decode, 161, 10, 3, // Opcode: VMULEUW
/* 1133 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1141
/* 1137 */    MCD::OPC_Decode, 156, 10, 3, // Opcode: VMULESB
/* 1141 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1149
/* 1145 */    MCD::OPC_Decode, 157, 10, 3, // Opcode: VMULESH
/* 1149 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1157
/* 1153 */    MCD::OPC_Decode, 158, 10, 3, // Opcode: VMULESW
/* 1157 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1165
/* 1161 */    MCD::OPC_Decode, 187, 10, 3, // Opcode: VPMSUMB
/* 1165 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1173
/* 1169 */    MCD::OPC_Decode, 189, 10, 3, // Opcode: VPMSUMH
/* 1173 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1181
/* 1177 */    MCD::OPC_Decode, 190, 10, 3, // Opcode: VPMSUMW
/* 1181 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1189
/* 1185 */    MCD::OPC_Decode, 188, 10, 3, // Opcode: VPMSUMD
/* 1189 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1197
/* 1193 */    MCD::OPC_Decode, 205, 9, 3, // Opcode: VCIPHER
/* 1197 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1205
/* 1201 */    MCD::OPC_Decode, 170, 10, 3, // Opcode: VNCIPHER
/* 1205 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1219
/* 1209 */    MCD::OPC_CheckField, 11, 5, 0, 73, 36, // Skip to: 10504
/* 1215 */    MCD::OPC_Decode, 205, 10, 8, // Opcode: VSBOX
/* 1219 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1227
/* 1223 */    MCD::OPC_Decode, 247, 10, 3, // Opcode: VSUM4UBS
/* 1227 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1235
/* 1231 */    MCD::OPC_Decode, 246, 10, 3, // Opcode: VSUM4SHS
/* 1235 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1243
/* 1239 */    MCD::OPC_Decode, 244, 10, 3, // Opcode: VSUM2SWS
/* 1243 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1251
/* 1247 */    MCD::OPC_Decode, 245, 10, 3, // Opcode: VSUM4SBS
/* 1251 */    MCD::OPC_FilterValue, 30, 33, 36, // Skip to: 10504
/* 1255 */    MCD::OPC_Decode, 248, 10, 3, // Opcode: VSUMSWS
/* 1259 */    MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 1290
/* 1263 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1266 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1274
/* 1270 */    MCD::OPC_Decode, 168, 10, 3, // Opcode: VMULUWM
/* 1274 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1282
/* 1278 */    MCD::OPC_Decode, 206, 9, 3, // Opcode: VCIPHERLAST
/* 1282 */    MCD::OPC_FilterValue, 21, 2, 36, // Skip to: 10504
/* 1286 */    MCD::OPC_Decode, 171, 10, 3, // Opcode: VNCIPHERLAST
/* 1290 */    MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 1473
/* 1294 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1297 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1305
/* 1301 */    MCD::OPC_Decode, 182, 9, 3, // Opcode: VADDFP
/* 1305 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1313
/* 1309 */    MCD::OPC_Decode, 233, 10, 3, // Opcode: VSUBFP
/* 1313 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1327
/* 1317 */    MCD::OPC_CheckField, 16, 5, 0, 221, 35, // Skip to: 10504
/* 1323 */    MCD::OPC_Decode, 195, 10, 5, // Opcode: VREFP
/* 1327 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1341
/* 1331 */    MCD::OPC_CheckField, 16, 5, 0, 207, 35, // Skip to: 10504
/* 1337 */    MCD::OPC_Decode, 204, 10, 5, // Opcode: VRSQRTEFP
/* 1341 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1355
/* 1345 */    MCD::OPC_CheckField, 16, 5, 0, 193, 35, // Skip to: 10504
/* 1351 */    MCD::OPC_Decode, 248, 9, 5, // Opcode: VEXPTEFP
/* 1355 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1369
/* 1359 */    MCD::OPC_CheckField, 16, 5, 0, 179, 35, // Skip to: 10504
/* 1365 */    MCD::OPC_Decode, 249, 9, 5, // Opcode: VLOGEFP
/* 1369 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1383
/* 1373 */    MCD::OPC_CheckField, 16, 5, 0, 165, 35, // Skip to: 10504
/* 1379 */    MCD::OPC_Decode, 197, 10, 5, // Opcode: VRFIN
/* 1383 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1397
/* 1387 */    MCD::OPC_CheckField, 16, 5, 0, 151, 35, // Skip to: 10504
/* 1393 */    MCD::OPC_Decode, 199, 10, 5, // Opcode: VRFIZ
/* 1397 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1411
/* 1401 */    MCD::OPC_CheckField, 16, 5, 0, 137, 35, // Skip to: 10504
/* 1407 */    MCD::OPC_Decode, 198, 10, 5, // Opcode: VRFIP
/* 1411 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1425
/* 1415 */    MCD::OPC_CheckField, 16, 5, 0, 123, 35, // Skip to: 10504
/* 1421 */    MCD::OPC_Decode, 196, 10, 5, // Opcode: VRFIM
/* 1425 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1433
/* 1429 */    MCD::OPC_Decode, 203, 9, 9, // Opcode: VCFUX
/* 1433 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1441
/* 1437 */    MCD::OPC_Decode, 201, 9, 9, // Opcode: VCFSX
/* 1441 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1449
/* 1445 */    MCD::OPC_Decode, 245, 9, 9, // Opcode: VCTUXS
/* 1449 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1457
/* 1453 */    MCD::OPC_Decode, 243, 9, 9, // Opcode: VCTSXS
/* 1457 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1465
/* 1461 */    MCD::OPC_Decode, 251, 9, 3, // Opcode: VMAXFP
/* 1465 */    MCD::OPC_FilterValue, 17, 75, 35, // Skip to: 10504
/* 1469 */    MCD::OPC_Decode, 134, 10, 3, // Opcode: VMINFP
/* 1473 */    MCD::OPC_FilterValue, 12, 133, 0, // Skip to: 1610
/* 1477 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1480 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1488
/* 1484 */    MCD::OPC_Decode, 144, 10, 3, // Opcode: VMRGHB
/* 1488 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1496
/* 1492 */    MCD::OPC_Decode, 145, 10, 3, // Opcode: VMRGHH
/* 1496 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1504
/* 1500 */    MCD::OPC_Decode, 146, 10, 3, // Opcode: VMRGHW
/* 1504 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1512
/* 1508 */    MCD::OPC_Decode, 147, 10, 3, // Opcode: VMRGLB
/* 1512 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1520
/* 1516 */    MCD::OPC_Decode, 148, 10, 3, // Opcode: VMRGLH
/* 1520 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1528
/* 1524 */    MCD::OPC_Decode, 149, 10, 3, // Opcode: VMRGLW
/* 1528 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1536
/* 1532 */    MCD::OPC_Decode, 216, 10, 9, // Opcode: VSPLTB
/* 1536 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1544
/* 1540 */    MCD::OPC_Decode, 217, 10, 9, // Opcode: VSPLTH
/* 1544 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1552
/* 1548 */    MCD::OPC_Decode, 221, 10, 9, // Opcode: VSPLTW
/* 1552 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1566
/* 1556 */    MCD::OPC_CheckField, 11, 5, 0, 238, 34, // Skip to: 10504
/* 1562 */    MCD::OPC_Decode, 218, 10, 10, // Opcode: VSPLTISB
/* 1566 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1580
/* 1570 */    MCD::OPC_CheckField, 11, 5, 0, 224, 34, // Skip to: 10504
/* 1576 */    MCD::OPC_Decode, 219, 10, 10, // Opcode: VSPLTISH
/* 1580 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 1594
/* 1584 */    MCD::OPC_CheckField, 11, 5, 0, 210, 34, // Skip to: 10504
/* 1590 */    MCD::OPC_Decode, 220, 10, 10, // Opcode: VSPLTISW
/* 1594 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1602
/* 1598 */    MCD::OPC_Decode, 214, 10, 3, // Opcode: VSLO
/* 1602 */    MCD::OPC_FilterValue, 17, 194, 34, // Skip to: 10504
/* 1606 */    MCD::OPC_Decode, 230, 10, 3, // Opcode: VSRO
/* 1610 */    MCD::OPC_FilterValue, 14, 159, 0, // Skip to: 1773
/* 1614 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1617 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1625
/* 1621 */    MCD::OPC_Decode, 183, 10, 3, // Opcode: VPKUHUM
/* 1625 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1633
/* 1629 */    MCD::OPC_Decode, 185, 10, 3, // Opcode: VPKUWUM
/* 1633 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1641
/* 1637 */    MCD::OPC_Decode, 184, 10, 3, // Opcode: VPKUHUS
/* 1641 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1649
/* 1645 */    MCD::OPC_Decode, 186, 10, 3, // Opcode: VPKUWUS
/* 1649 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1657
/* 1653 */    MCD::OPC_Decode, 180, 10, 3, // Opcode: VPKSHUS
/* 1657 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 182, 10, 3, // Opcode: VPKSWUS
/* 1665 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1673
/* 1669 */    MCD::OPC_Decode, 179, 10, 3, // Opcode: VPKSHSS
/* 1673 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1681
/* 1677 */    MCD::OPC_Decode, 181, 10, 3, // Opcode: VPKSWSS
/* 1681 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1695
/* 1685 */    MCD::OPC_CheckField, 16, 5, 0, 109, 34, // Skip to: 10504
/* 1691 */    MCD::OPC_Decode, 250, 10, 5, // Opcode: VUPKHSB
/* 1695 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1709
/* 1699 */    MCD::OPC_CheckField, 16, 5, 0, 95, 34, // Skip to: 10504
/* 1705 */    MCD::OPC_Decode, 251, 10, 5, // Opcode: VUPKHSH
/* 1709 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1723
/* 1713 */    MCD::OPC_CheckField, 16, 5, 0, 81, 34, // Skip to: 10504
/* 1719 */    MCD::OPC_Decode, 253, 10, 5, // Opcode: VUPKLSB
/* 1723 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1737
/* 1727 */    MCD::OPC_CheckField, 16, 5, 0, 67, 34, // Skip to: 10504
/* 1733 */    MCD::OPC_Decode, 254, 10, 5, // Opcode: VUPKLSH
/* 1737 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1745
/* 1741 */    MCD::OPC_Decode, 178, 10, 3, // Opcode: VPKPX
/* 1745 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1759
/* 1749 */    MCD::OPC_CheckField, 16, 5, 0, 45, 34, // Skip to: 10504
/* 1755 */    MCD::OPC_Decode, 249, 10, 5, // Opcode: VUPKHPX
/* 1759 */    MCD::OPC_FilterValue, 15, 37, 34, // Skip to: 10504
/* 1763 */    MCD::OPC_CheckField, 16, 5, 0, 31, 34, // Skip to: 10504
/* 1769 */    MCD::OPC_Decode, 252, 10, 5, // Opcode: VUPKLPX
/* 1773 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 1781
/* 1777 */    MCD::OPC_Decode, 132, 10, 11, // Opcode: VMHADDSHS
/* 1781 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 1789
/* 1785 */    MCD::OPC_Decode, 133, 10, 11, // Opcode: VMHRADDSHS
/* 1789 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 1797
/* 1793 */    MCD::OPC_Decode, 143, 10, 11, // Opcode: VMLADDUHM
/* 1797 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1805
/* 1801 */    MCD::OPC_Decode, 153, 10, 11, // Opcode: VMSUMUBM
/* 1805 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 1813
/* 1809 */    MCD::OPC_Decode, 150, 10, 11, // Opcode: VMSUMMBM
/* 1813 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 1821
/* 1817 */    MCD::OPC_Decode, 154, 10, 11, // Opcode: VMSUMUHM
/* 1821 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 1829
/* 1825 */    MCD::OPC_Decode, 155, 10, 11, // Opcode: VMSUMUHS
/* 1829 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 1837
/* 1833 */    MCD::OPC_Decode, 151, 10, 11, // Opcode: VMSUMSHM
/* 1837 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 1845
/* 1841 */    MCD::OPC_Decode, 152, 10, 11, // Opcode: VMSUMSHS
/* 1845 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 1853
/* 1849 */    MCD::OPC_Decode, 206, 10, 11, // Opcode: VSEL
/* 1853 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 1861
/* 1857 */    MCD::OPC_Decode, 176, 10, 11, // Opcode: VPERM
/* 1861 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 1875
/* 1865 */    MCD::OPC_CheckField, 10, 1, 0, 185, 33, // Skip to: 10504
/* 1871 */    MCD::OPC_Decode, 212, 10, 12, // Opcode: VSLDOI
/* 1875 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 1883
/* 1879 */    MCD::OPC_Decode, 177, 10, 11, // Opcode: VPERMXOR
/* 1883 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 1891
/* 1887 */    MCD::OPC_Decode, 250, 9, 13, // Opcode: VMADDFP
/* 1891 */    MCD::OPC_FilterValue, 47, 161, 33, // Skip to: 10504
/* 1895 */    MCD::OPC_Decode, 172, 10, 13, // Opcode: VNMSUBFP
/* 1899 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1907
/* 1903 */    MCD::OPC_Decode, 130, 6, 14, // Opcode: MULLI
/* 1907 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1915
/* 1911 */    MCD::OPC_Decode, 248, 8, 14, // Opcode: SUBFIC
/* 1915 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 1938
/* 1919 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1930
/* 1926 */    MCD::OPC_Decode, 224, 1, 15, // Opcode: CMPLWI
/* 1930 */    MCD::OPC_FilterValue, 1, 122, 33, // Skip to: 10504
/* 1934 */    MCD::OPC_Decode, 222, 1, 16, // Opcode: CMPLDI
/* 1938 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 1961
/* 1942 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1945 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1953
/* 1949 */    MCD::OPC_Decode, 226, 1, 17, // Opcode: CMPWI
/* 1953 */    MCD::OPC_FilterValue, 1, 99, 33, // Skip to: 10504
/* 1957 */    MCD::OPC_Decode, 220, 1, 18, // Opcode: CMPDI
/* 1961 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 1968
/* 1965 */    MCD::OPC_Decode, 39, 14, // Opcode: ADDIC
/* 1968 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 1975
/* 1972 */    MCD::OPC_Decode, 41, 14, // Opcode: ADDICo
/* 1975 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 1992
/* 1979 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1989
/* 1985 */    MCD::OPC_Decode, 155, 5, 19, // Opcode: LI
/* 1989 */    MCD::OPC_Decode, 37, 20, // Opcode: ADDI
/* 1992 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 2009
/* 1996 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2006
/* 2002 */    MCD::OPC_Decode, 157, 5, 19, // Opcode: LIS
/* 2006 */    MCD::OPC_Decode, 42, 20, // Opcode: ADDIS
/* 2009 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 2276
/* 2013 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2016 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 2081
/* 2020 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2023 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2032
/* 2028 */    MCD::OPC_Decode, 154, 1, 21, // Opcode: BDNZ
/* 2032 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2041
/* 2037 */    MCD::OPC_Decode, 174, 1, 21, // Opcode: BDZ
/* 2041 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2050
/* 2046 */    MCD::OPC_Decode, 172, 1, 21, // Opcode: BDNZm
/* 2050 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2059
/* 2055 */    MCD::OPC_Decode, 173, 1, 21, // Opcode: BDNZp
/* 2059 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2068
/* 2064 */    MCD::OPC_Decode, 192, 1, 21, // Opcode: BDZm
/* 2068 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2077
/* 2073 */    MCD::OPC_Decode, 193, 1, 21, // Opcode: BDZp
/* 2077 */    MCD::OPC_Decode, 156, 12, 22, // Opcode: gBC
/* 2081 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 2146
/* 2085 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2088 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2097
/* 2093 */    MCD::OPC_Decode, 159, 1, 21, // Opcode: BDNZL
/* 2097 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2106
/* 2102 */    MCD::OPC_Decode, 179, 1, 21, // Opcode: BDZL
/* 2106 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2115
/* 2111 */    MCD::OPC_Decode, 170, 1, 21, // Opcode: BDNZLm
/* 2115 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2124
/* 2120 */    MCD::OPC_Decode, 171, 1, 21, // Opcode: BDNZLp
/* 2124 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2133
/* 2129 */    MCD::OPC_Decode, 190, 1, 21, // Opcode: BDZLm
/* 2133 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2142
/* 2138 */    MCD::OPC_Decode, 191, 1, 21, // Opcode: BDZLp
/* 2142 */    MCD::OPC_Decode, 160, 12, 22, // Opcode: gBCL
/* 2146 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 2211
/* 2150 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2153 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2162
/* 2158 */    MCD::OPC_Decode, 156, 1, 21, // Opcode: BDNZA
/* 2162 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2171
/* 2167 */    MCD::OPC_Decode, 176, 1, 21, // Opcode: BDZA
/* 2171 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2180
/* 2176 */    MCD::OPC_Decode, 157, 1, 21, // Opcode: BDNZAm
/* 2180 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2189
/* 2185 */    MCD::OPC_Decode, 158, 1, 21, // Opcode: BDNZAp
/* 2189 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2198
/* 2194 */    MCD::OPC_Decode, 177, 1, 21, // Opcode: BDZAm
/* 2198 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2207
/* 2203 */    MCD::OPC_Decode, 178, 1, 21, // Opcode: BDZAp
/* 2207 */    MCD::OPC_Decode, 157, 12, 22, // Opcode: gBCA
/* 2211 */    MCD::OPC_FilterValue, 3, 97, 32, // Skip to: 10504
/* 2215 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2218 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2227
/* 2223 */    MCD::OPC_Decode, 160, 1, 21, // Opcode: BDNZLA
/* 2227 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2236
/* 2232 */    MCD::OPC_Decode, 180, 1, 21, // Opcode: BDZLA
/* 2236 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2245
/* 2241 */    MCD::OPC_Decode, 161, 1, 21, // Opcode: BDNZLAm
/* 2245 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2254
/* 2250 */    MCD::OPC_Decode, 162, 1, 21, // Opcode: BDNZLAp
/* 2254 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2263
/* 2259 */    MCD::OPC_Decode, 181, 1, 21, // Opcode: BDZLAm
/* 2263 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2272
/* 2268 */    MCD::OPC_Decode, 182, 1, 21, // Opcode: BDZLAp
/* 2272 */    MCD::OPC_Decode, 161, 12, 22, // Opcode: gBCLA
/* 2276 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 2290
/* 2280 */    MCD::OPC_CheckField, 1, 1, 1, 26, 32, // Skip to: 10504
/* 2286 */    MCD::OPC_Decode, 251, 7, 23, // Opcode: SC
/* 2290 */    MCD::OPC_FilterValue, 18, 33, 0, // Skip to: 2327
/* 2294 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2297 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 2304
/* 2301 */    MCD::OPC_Decode, 120, 24, // Opcode: B
/* 2304 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2312
/* 2308 */    MCD::OPC_Decode, 194, 1, 24, // Opcode: BL
/* 2312 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 2319
/* 2316 */    MCD::OPC_Decode, 121, 24, // Opcode: BA
/* 2319 */    MCD::OPC_FilterValue, 3, 245, 31, // Skip to: 10504
/* 2323 */    MCD::OPC_Decode, 200, 1, 24, // Opcode: BLA
/* 2327 */    MCD::OPC_FilterValue, 19, 235, 1, // Skip to: 2822
/* 2331 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2334 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2354
/* 2338 */    MCD::OPC_CheckField, 21, 2, 0, 224, 31, // Skip to: 10504
/* 2344 */    MCD::OPC_CheckField, 11, 7, 0, 218, 31, // Skip to: 10504
/* 2350 */    MCD::OPC_Decode, 192, 5, 25, // Opcode: MCRF
/* 2354 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 2477
/* 2358 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2361 */    MCD::OPC_FilterValue, 0, 203, 31, // Skip to: 10504
/* 2365 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2368 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 2383
/* 2373 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2473
/* 2379 */    MCD::OPC_Decode, 163, 1, 0, // Opcode: BDNZLR
/* 2383 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 2398
/* 2388 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2473
/* 2394 */    MCD::OPC_Decode, 183, 1, 0, // Opcode: BDZLR
/* 2398 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 2413
/* 2403 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2473
/* 2409 */    MCD::OPC_Decode, 203, 1, 0, // Opcode: BLR
/* 2413 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 2428
/* 2418 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2473
/* 2424 */    MCD::OPC_Decode, 168, 1, 0, // Opcode: BDNZLRm
/* 2428 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2443
/* 2433 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2473
/* 2439 */    MCD::OPC_Decode, 169, 1, 0, // Opcode: BDNZLRp
/* 2443 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2458
/* 2448 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2473
/* 2454 */    MCD::OPC_Decode, 188, 1, 0, // Opcode: BDZLRm
/* 2458 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2473
/* 2463 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2473
/* 2469 */    MCD::OPC_Decode, 189, 1, 0, // Opcode: BDZLRp
/* 2473 */    MCD::OPC_Decode, 162, 12, 26, // Opcode: gBCLR
/* 2477 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 2600
/* 2481 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2484 */    MCD::OPC_FilterValue, 0, 80, 31, // Skip to: 10504
/* 2488 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2491 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 2506
/* 2496 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2596
/* 2502 */    MCD::OPC_Decode, 165, 1, 0, // Opcode: BDNZLRL
/* 2506 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 2521
/* 2511 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2596
/* 2517 */    MCD::OPC_Decode, 185, 1, 0, // Opcode: BDZLRL
/* 2521 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 2536
/* 2526 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2596
/* 2532 */    MCD::OPC_Decode, 205, 1, 0, // Opcode: BLRL
/* 2536 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 2551
/* 2541 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2596
/* 2547 */    MCD::OPC_Decode, 166, 1, 0, // Opcode: BDNZLRLm
/* 2551 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2566
/* 2556 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2596
/* 2562 */    MCD::OPC_Decode, 167, 1, 0, // Opcode: BDNZLRLp
/* 2566 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2581
/* 2571 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2596
/* 2577 */    MCD::OPC_Decode, 186, 1, 0, // Opcode: BDZLRLm
/* 2581 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2596
/* 2586 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2596
/* 2592 */    MCD::OPC_Decode, 187, 1, 0, // Opcode: BDZLRLp
/* 2596 */    MCD::OPC_Decode, 163, 12, 26, // Opcode: gBCLRL
/* 2600 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 2614
/* 2604 */    MCD::OPC_CheckField, 11, 15, 0, 214, 30, // Skip to: 10504
/* 2610 */    MCD::OPC_Decode, 213, 7, 0, // Opcode: RFID
/* 2614 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2622
/* 2618 */    MCD::OPC_Decode, 239, 1, 27, // Opcode: CRNOR
/* 2622 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 2636
/* 2626 */    MCD::OPC_CheckField, 11, 15, 0, 192, 30, // Skip to: 10504
/* 2632 */    MCD::OPC_Decode, 214, 7, 0, // Opcode: RFMCI
/* 2636 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 2650
/* 2640 */    MCD::OPC_CheckField, 11, 15, 0, 178, 30, // Skip to: 10504
/* 2646 */    MCD::OPC_Decode, 211, 7, 0, // Opcode: RFDI
/* 2650 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 2664
/* 2654 */    MCD::OPC_CheckField, 11, 15, 0, 164, 30, // Skip to: 10504
/* 2660 */    MCD::OPC_Decode, 212, 7, 0, // Opcode: RFI
/* 2664 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 2678
/* 2668 */    MCD::OPC_CheckField, 11, 15, 0, 150, 30, // Skip to: 10504
/* 2674 */    MCD::OPC_Decode, 210, 7, 0, // Opcode: RFCI
/* 2678 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 2687
/* 2683 */    MCD::OPC_Decode, 236, 1, 27, // Opcode: CRANDC
/* 2687 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 2702
/* 2692 */    MCD::OPC_CheckField, 11, 15, 0, 126, 30, // Skip to: 10504
/* 2698 */    MCD::OPC_Decode, 223, 4, 0, // Opcode: ISYNC
/* 2702 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 2711
/* 2707 */    MCD::OPC_Decode, 244, 1, 27, // Opcode: CRXOR
/* 2711 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 2720
/* 2716 */    MCD::OPC_Decode, 238, 1, 27, // Opcode: CRNAND
/* 2720 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 2729
/* 2725 */    MCD::OPC_Decode, 235, 1, 27, // Opcode: CRAND
/* 2729 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 2738
/* 2734 */    MCD::OPC_Decode, 237, 1, 27, // Opcode: CREQV
/* 2738 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 2747
/* 2743 */    MCD::OPC_Decode, 241, 1, 27, // Opcode: CRORC
/* 2747 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 2756
/* 2752 */    MCD::OPC_Decode, 240, 1, 27, // Opcode: CROR
/* 2756 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 2789
/* 2761 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2764 */    MCD::OPC_FilterValue, 0, 56, 30, // Skip to: 10504
/* 2768 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2785
/* 2775 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2785
/* 2781 */    MCD::OPC_Decode, 148, 1, 0, // Opcode: BCTR
/* 2785 */    MCD::OPC_Decode, 158, 12, 26, // Opcode: gBCCTR
/* 2789 */    MCD::OPC_FilterValue, 161, 8, 30, 30, // Skip to: 10504
/* 2794 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2797 */    MCD::OPC_FilterValue, 0, 23, 30, // Skip to: 10504
/* 2801 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2818
/* 2808 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2818
/* 2814 */    MCD::OPC_Decode, 150, 1, 0, // Opcode: BCTRL
/* 2818 */    MCD::OPC_Decode, 159, 12, 26, // Opcode: gBCCTRL
/* 2822 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 2845
/* 2826 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2829 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2837
/* 2833 */    MCD::OPC_Decode, 228, 7, 28, // Opcode: RLWIMI
/* 2837 */    MCD::OPC_FilterValue, 1, 239, 29, // Skip to: 10504
/* 2841 */    MCD::OPC_Decode, 232, 7, 28, // Opcode: RLWIMIo
/* 2845 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 2868
/* 2849 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2852 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2860
/* 2856 */    MCD::OPC_Decode, 234, 7, 29, // Opcode: RLWINM
/* 2860 */    MCD::OPC_FilterValue, 1, 216, 29, // Skip to: 10504
/* 2864 */    MCD::OPC_Decode, 238, 7, 29, // Opcode: RLWINMo
/* 2868 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 2891
/* 2872 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2875 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2883
/* 2879 */    MCD::OPC_Decode, 240, 7, 30, // Opcode: RLWNM
/* 2883 */    MCD::OPC_FilterValue, 1, 193, 29, // Skip to: 10504
/* 2887 */    MCD::OPC_Decode, 244, 7, 30, // Opcode: RLWNMo
/* 2891 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 2909
/* 2895 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 2905
/* 2901 */    MCD::OPC_Decode, 145, 6, 0, // Opcode: NOP
/* 2905 */    MCD::OPC_Decode, 159, 6, 31, // Opcode: ORI
/* 2909 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2917
/* 2913 */    MCD::OPC_Decode, 161, 6, 31, // Opcode: ORIS
/* 2917 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2925
/* 2921 */    MCD::OPC_Decode, 140, 11, 31, // Opcode: XORI
/* 2925 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 2933
/* 2929 */    MCD::OPC_Decode, 142, 11, 31, // Opcode: XORIS
/* 2933 */    MCD::OPC_FilterValue, 28, 3, 0, // Skip to: 2940
/* 2937 */    MCD::OPC_Decode, 80, 31, // Opcode: ANDIo
/* 2940 */    MCD::OPC_FilterValue, 29, 3, 0, // Skip to: 2947
/* 2944 */    MCD::OPC_Decode, 78, 31, // Opcode: ANDISo
/* 2947 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 3085
/* 2951 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 2954 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 2977
/* 2958 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2961 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2969
/* 2965 */    MCD::OPC_Decode, 220, 7, 32, // Opcode: RLDICL
/* 2969 */    MCD::OPC_FilterValue, 1, 107, 29, // Skip to: 10504
/* 2973 */    MCD::OPC_Decode, 222, 7, 32, // Opcode: RLDICLo
/* 2977 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3000
/* 2981 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2984 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2992
/* 2988 */    MCD::OPC_Decode, 223, 7, 32, // Opcode: RLDICR
/* 2992 */    MCD::OPC_FilterValue, 1, 84, 29, // Skip to: 10504
/* 2996 */    MCD::OPC_Decode, 224, 7, 32, // Opcode: RLDICRo
/* 3000 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3023
/* 3004 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3007 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3015
/* 3011 */    MCD::OPC_Decode, 219, 7, 32, // Opcode: RLDIC
/* 3015 */    MCD::OPC_FilterValue, 1, 61, 29, // Skip to: 10504
/* 3019 */    MCD::OPC_Decode, 225, 7, 32, // Opcode: RLDICo
/* 3023 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 3046
/* 3027 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3030 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3038
/* 3034 */    MCD::OPC_Decode, 226, 7, 33, // Opcode: RLDIMI
/* 3038 */    MCD::OPC_FilterValue, 1, 38, 29, // Skip to: 10504
/* 3042 */    MCD::OPC_Decode, 227, 7, 33, // Opcode: RLDIMIo
/* 3046 */    MCD::OPC_FilterValue, 4, 30, 29, // Skip to: 10504
/* 3050 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3053 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3061
/* 3057 */    MCD::OPC_Decode, 215, 7, 34, // Opcode: RLDCL
/* 3061 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3069
/* 3065 */    MCD::OPC_Decode, 216, 7, 34, // Opcode: RLDCLo
/* 3069 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3077
/* 3073 */    MCD::OPC_Decode, 217, 7, 34, // Opcode: RLDCR
/* 3077 */    MCD::OPC_FilterValue, 3, 255, 28, // Skip to: 10504
/* 3081 */    MCD::OPC_Decode, 218, 7, 34, // Opcode: RLDCRo
/* 3085 */    MCD::OPC_FilterValue, 31, 95, 14, // Skip to: 6768
/* 3089 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 3092 */    MCD::OPC_FilterValue, 0, 73, 0, // Skip to: 3169
/* 3096 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3099 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 3134
/* 3103 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 3106 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3120
/* 3110 */    MCD::OPC_CheckField, 0, 2, 0, 220, 28, // Skip to: 10504
/* 3116 */    MCD::OPC_Decode, 225, 1, 35, // Opcode: CMPW
/* 3120 */    MCD::OPC_FilterValue, 1, 212, 28, // Skip to: 10504
/* 3124 */    MCD::OPC_CheckField, 0, 2, 0, 206, 28, // Skip to: 10504
/* 3130 */    MCD::OPC_Decode, 219, 1, 36, // Opcode: CMPD
/* 3134 */    MCD::OPC_FilterValue, 1, 198, 28, // Skip to: 10504
/* 3138 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 3141 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3155
/* 3145 */    MCD::OPC_CheckField, 0, 2, 0, 185, 28, // Skip to: 10504
/* 3151 */    MCD::OPC_Decode, 223, 1, 35, // Opcode: CMPLW
/* 3155 */    MCD::OPC_FilterValue, 1, 177, 28, // Skip to: 10504
/* 3159 */    MCD::OPC_CheckField, 0, 2, 0, 171, 28, // Skip to: 10504
/* 3165 */    MCD::OPC_Decode, 221, 1, 36, // Opcode: CMPLD
/* 3169 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 3238
/* 3173 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3176 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 3196
/* 3180 */    MCD::OPC_CheckField, 16, 1, 0, 150, 28, // Skip to: 10504
/* 3186 */    MCD::OPC_CheckField, 1, 1, 1, 144, 28, // Skip to: 10504
/* 3192 */    MCD::OPC_Decode, 135, 11, 37, // Opcode: WRTEE
/* 3196 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3210
/* 3200 */    MCD::OPC_CheckField, 1, 1, 1, 130, 28, // Skip to: 10504
/* 3206 */    MCD::OPC_Decode, 136, 11, 38, // Opcode: WRTEEI
/* 3210 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 3224
/* 3214 */    MCD::OPC_CheckField, 0, 2, 2, 116, 28, // Skip to: 10504
/* 3220 */    MCD::OPC_Decode, 198, 5, 39, // Opcode: MFDCR
/* 3224 */    MCD::OPC_FilterValue, 14, 108, 28, // Skip to: 10504
/* 3228 */    MCD::OPC_CheckField, 0, 2, 2, 102, 28, // Skip to: 10504
/* 3234 */    MCD::OPC_Decode, 224, 5, 39, // Opcode: MTDCR
/* 3238 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 3286
/* 3242 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3245 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 3272
/* 3249 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3252 */    MCD::OPC_FilterValue, 0, 80, 28, // Skip to: 10504
/* 3256 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 3268
/* 3264 */    MCD::OPC_Decode, 173, 9, 0, // Opcode: TRAP
/* 3268 */    MCD::OPC_Decode, 177, 9, 40, // Opcode: TW
/* 3272 */    MCD::OPC_FilterValue, 2, 60, 28, // Skip to: 10504
/* 3276 */    MCD::OPC_CheckField, 0, 2, 0, 54, 28, // Skip to: 10504
/* 3282 */    MCD::OPC_Decode, 156, 9, 41, // Opcode: TD
/* 3286 */    MCD::OPC_FilterValue, 3, 201, 0, // Skip to: 3491
/* 3290 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3293 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3316
/* 3297 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3300 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3308
/* 3304 */    MCD::OPC_Decode, 164, 5, 42, // Opcode: LVSL
/* 3308 */    MCD::OPC_FilterValue, 2, 24, 28, // Skip to: 10504
/* 3312 */    MCD::OPC_Decode, 161, 5, 42, // Opcode: LVEBX
/* 3316 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3339
/* 3320 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3323 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3331
/* 3327 */    MCD::OPC_Decode, 165, 5, 42, // Opcode: LVSR
/* 3331 */    MCD::OPC_FilterValue, 2, 1, 28, // Skip to: 10504
/* 3335 */    MCD::OPC_Decode, 162, 5, 42, // Opcode: LVEHX
/* 3339 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3353
/* 3343 */    MCD::OPC_CheckField, 0, 2, 2, 243, 27, // Skip to: 10504
/* 3349 */    MCD::OPC_Decode, 163, 5, 42, // Opcode: LVEWX
/* 3353 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 3367
/* 3357 */    MCD::OPC_CheckField, 0, 2, 2, 229, 27, // Skip to: 10504
/* 3363 */    MCD::OPC_Decode, 166, 5, 42, // Opcode: LVX
/* 3367 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 3381
/* 3371 */    MCD::OPC_CheckField, 0, 2, 2, 215, 27, // Skip to: 10504
/* 3377 */    MCD::OPC_Decode, 218, 8, 42, // Opcode: STVEBX
/* 3381 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3395
/* 3385 */    MCD::OPC_CheckField, 0, 2, 2, 201, 27, // Skip to: 10504
/* 3391 */    MCD::OPC_Decode, 219, 8, 42, // Opcode: STVEHX
/* 3395 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 3409
/* 3399 */    MCD::OPC_CheckField, 0, 2, 2, 187, 27, // Skip to: 10504
/* 3405 */    MCD::OPC_Decode, 220, 8, 42, // Opcode: STVEWX
/* 3409 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 3423
/* 3413 */    MCD::OPC_CheckField, 0, 2, 2, 173, 27, // Skip to: 10504
/* 3419 */    MCD::OPC_Decode, 221, 8, 42, // Opcode: STVX
/* 3423 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 3437
/* 3427 */    MCD::OPC_CheckField, 0, 2, 2, 159, 27, // Skip to: 10504
/* 3433 */    MCD::OPC_Decode, 167, 5, 42, // Opcode: LVXL
/* 3437 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 3457
/* 3441 */    MCD::OPC_CheckField, 21, 5, 0, 145, 27, // Skip to: 10504
/* 3447 */    MCD::OPC_CheckField, 0, 2, 0, 139, 27, // Skip to: 10504
/* 3453 */    MCD::OPC_Decode, 253, 1, 43, // Opcode: DCCCI
/* 3457 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 3471
/* 3461 */    MCD::OPC_CheckField, 0, 2, 2, 125, 27, // Skip to: 10504
/* 3467 */    MCD::OPC_Decode, 222, 8, 42, // Opcode: STVXL
/* 3471 */    MCD::OPC_FilterValue, 30, 117, 27, // Skip to: 10504
/* 3475 */    MCD::OPC_CheckField, 21, 5, 0, 111, 27, // Skip to: 10504
/* 3481 */    MCD::OPC_CheckField, 0, 2, 0, 105, 27, // Skip to: 10504
/* 3487 */    MCD::OPC_Decode, 214, 4, 43, // Opcode: ICCCI
/* 3491 */    MCD::OPC_FilterValue, 4, 68, 1, // Skip to: 3819
/* 3495 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3498 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 3537
/* 3502 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3505 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3513
/* 3509 */    MCD::OPC_Decode, 240, 8, 44, // Opcode: SUBFC
/* 3513 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3521
/* 3517 */    MCD::OPC_Decode, 243, 8, 44, // Opcode: SUBFCo
/* 3521 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3529
/* 3525 */    MCD::OPC_Decode, 249, 5, 45, // Opcode: MULHDU
/* 3529 */    MCD::OPC_FilterValue, 3, 59, 27, // Skip to: 10504
/* 3533 */    MCD::OPC_Decode, 250, 5, 45, // Opcode: MULHDUo
/* 3537 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3560
/* 3541 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3544 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3552
/* 3548 */    MCD::OPC_Decode, 237, 8, 44, // Opcode: SUBF
/* 3552 */    MCD::OPC_FilterValue, 1, 36, 27, // Skip to: 10504
/* 3556 */    MCD::OPC_Decode, 130, 9, 44, // Opcode: SUBFo
/* 3560 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3583
/* 3564 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3567 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3575
/* 3571 */    MCD::OPC_Decode, 248, 5, 45, // Opcode: MULHD
/* 3575 */    MCD::OPC_FilterValue, 3, 13, 27, // Skip to: 10504
/* 3579 */    MCD::OPC_Decode, 251, 5, 45, // Opcode: MULHDo
/* 3583 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 3618
/* 3587 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3590 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3604
/* 3594 */    MCD::OPC_CheckField, 11, 5, 0, 248, 26, // Skip to: 10504
/* 3600 */    MCD::OPC_Decode, 141, 6, 46, // Opcode: NEG
/* 3604 */    MCD::OPC_FilterValue, 1, 240, 26, // Skip to: 10504
/* 3608 */    MCD::OPC_CheckField, 11, 5, 0, 234, 26, // Skip to: 10504
/* 3614 */    MCD::OPC_Decode, 144, 6, 46, // Opcode: NEGo
/* 3618 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 3641
/* 3622 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3625 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3633
/* 3629 */    MCD::OPC_Decode, 244, 8, 44, // Opcode: SUBFE
/* 3633 */    MCD::OPC_FilterValue, 1, 211, 26, // Skip to: 10504
/* 3637 */    MCD::OPC_Decode, 247, 8, 44, // Opcode: SUBFEo
/* 3641 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 3676
/* 3645 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3648 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3662
/* 3652 */    MCD::OPC_CheckField, 11, 5, 0, 190, 26, // Skip to: 10504
/* 3658 */    MCD::OPC_Decode, 254, 8, 46, // Opcode: SUBFZE
/* 3662 */    MCD::OPC_FilterValue, 1, 182, 26, // Skip to: 10504
/* 3666 */    MCD::OPC_CheckField, 11, 5, 0, 176, 26, // Skip to: 10504
/* 3672 */    MCD::OPC_Decode, 129, 9, 46, // Opcode: SUBFZEo
/* 3676 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 3727
/* 3680 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3683 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3697
/* 3687 */    MCD::OPC_CheckField, 11, 5, 0, 155, 26, // Skip to: 10504
/* 3693 */    MCD::OPC_Decode, 250, 8, 46, // Opcode: SUBFME
/* 3697 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3711
/* 3701 */    MCD::OPC_CheckField, 11, 5, 0, 141, 26, // Skip to: 10504
/* 3707 */    MCD::OPC_Decode, 253, 8, 46, // Opcode: SUBFMEo
/* 3711 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3719
/* 3715 */    MCD::OPC_Decode, 128, 6, 45, // Opcode: MULLD
/* 3719 */    MCD::OPC_FilterValue, 3, 125, 26, // Skip to: 10504
/* 3723 */    MCD::OPC_Decode, 129, 6, 45, // Opcode: MULLDo
/* 3727 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 3750
/* 3731 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3734 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3742
/* 3738 */    MCD::OPC_Decode, 128, 2, 45, // Opcode: DIVDEU
/* 3742 */    MCD::OPC_FilterValue, 3, 102, 26, // Skip to: 10504
/* 3746 */    MCD::OPC_Decode, 129, 2, 45, // Opcode: DIVDEUo
/* 3750 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 3773
/* 3754 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3757 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3765
/* 3761 */    MCD::OPC_Decode, 255, 1, 45, // Opcode: DIVDE
/* 3765 */    MCD::OPC_FilterValue, 3, 79, 26, // Skip to: 10504
/* 3769 */    MCD::OPC_Decode, 130, 2, 45, // Opcode: DIVDEo
/* 3773 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3796
/* 3777 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3780 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3788
/* 3784 */    MCD::OPC_Decode, 131, 2, 45, // Opcode: DIVDU
/* 3788 */    MCD::OPC_FilterValue, 3, 56, 26, // Skip to: 10504
/* 3792 */    MCD::OPC_Decode, 132, 2, 45, // Opcode: DIVDUo
/* 3796 */    MCD::OPC_FilterValue, 15, 48, 26, // Skip to: 10504
/* 3800 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3803 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3811
/* 3807 */    MCD::OPC_Decode, 254, 1, 45, // Opcode: DIVD
/* 3811 */    MCD::OPC_FilterValue, 3, 33, 26, // Skip to: 10504
/* 3815 */    MCD::OPC_Decode, 133, 2, 45, // Opcode: DIVDo
/* 3819 */    MCD::OPC_FilterValue, 5, 23, 1, // Skip to: 4102
/* 3823 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3826 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 3863
/* 3830 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3833 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3840
/* 3837 */    MCD::OPC_Decode, 29, 44, // Opcode: ADDC
/* 3840 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 3847
/* 3844 */    MCD::OPC_Decode, 32, 44, // Opcode: ADDCo
/* 3847 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3855
/* 3851 */    MCD::OPC_Decode, 253, 5, 44, // Opcode: MULHWU
/* 3855 */    MCD::OPC_FilterValue, 3, 245, 25, // Skip to: 10504
/* 3859 */    MCD::OPC_Decode, 254, 5, 44, // Opcode: MULHWUo
/* 3863 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3886
/* 3867 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3870 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3878
/* 3874 */    MCD::OPC_Decode, 252, 5, 44, // Opcode: MULHW
/* 3878 */    MCD::OPC_FilterValue, 3, 222, 25, // Skip to: 10504
/* 3882 */    MCD::OPC_Decode, 255, 5, 44, // Opcode: MULHWo
/* 3886 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 3907
/* 3890 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3893 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3900
/* 3897 */    MCD::OPC_Decode, 33, 44, // Opcode: ADDE
/* 3900 */    MCD::OPC_FilterValue, 1, 200, 25, // Skip to: 10504
/* 3904 */    MCD::OPC_Decode, 36, 44, // Opcode: ADDEo
/* 3907 */    MCD::OPC_FilterValue, 6, 29, 0, // Skip to: 3940
/* 3911 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3914 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3927
/* 3918 */    MCD::OPC_CheckField, 11, 5, 0, 180, 25, // Skip to: 10504
/* 3924 */    MCD::OPC_Decode, 65, 46, // Opcode: ADDZE
/* 3927 */    MCD::OPC_FilterValue, 1, 173, 25, // Skip to: 10504
/* 3931 */    MCD::OPC_CheckField, 11, 5, 0, 167, 25, // Skip to: 10504
/* 3937 */    MCD::OPC_Decode, 68, 46, // Opcode: ADDZEo
/* 3940 */    MCD::OPC_FilterValue, 7, 45, 0, // Skip to: 3989
/* 3944 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3947 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3960
/* 3951 */    MCD::OPC_CheckField, 11, 5, 0, 147, 25, // Skip to: 10504
/* 3957 */    MCD::OPC_Decode, 61, 46, // Opcode: ADDME
/* 3960 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3973
/* 3964 */    MCD::OPC_CheckField, 11, 5, 0, 134, 25, // Skip to: 10504
/* 3970 */    MCD::OPC_Decode, 64, 46, // Opcode: ADDMEo
/* 3973 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3981
/* 3977 */    MCD::OPC_Decode, 132, 6, 44, // Opcode: MULLW
/* 3981 */    MCD::OPC_FilterValue, 3, 119, 25, // Skip to: 10504
/* 3985 */    MCD::OPC_Decode, 133, 6, 44, // Opcode: MULLWo
/* 3989 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 4010
/* 3993 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3996 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 4003
/* 4000 */    MCD::OPC_Decode, 22, 44, // Opcode: ADD4
/* 4003 */    MCD::OPC_FilterValue, 1, 97, 25, // Skip to: 10504
/* 4007 */    MCD::OPC_Decode, 24, 44, // Opcode: ADD4o
/* 4010 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 4033
/* 4014 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4017 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4025
/* 4021 */    MCD::OPC_Decode, 136, 2, 44, // Opcode: DIVWEU
/* 4025 */    MCD::OPC_FilterValue, 3, 75, 25, // Skip to: 10504
/* 4029 */    MCD::OPC_Decode, 137, 2, 44, // Opcode: DIVWEUo
/* 4033 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 4056
/* 4037 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4040 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4048
/* 4044 */    MCD::OPC_Decode, 135, 2, 44, // Opcode: DIVWE
/* 4048 */    MCD::OPC_FilterValue, 3, 52, 25, // Skip to: 10504
/* 4052 */    MCD::OPC_Decode, 138, 2, 44, // Opcode: DIVWEo
/* 4056 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 4079
/* 4060 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4063 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4071
/* 4067 */    MCD::OPC_Decode, 139, 2, 44, // Opcode: DIVWU
/* 4071 */    MCD::OPC_FilterValue, 3, 29, 25, // Skip to: 10504
/* 4075 */    MCD::OPC_Decode, 140, 2, 44, // Opcode: DIVWUo
/* 4079 */    MCD::OPC_FilterValue, 15, 21, 25, // Skip to: 10504
/* 4083 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4086 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4094
/* 4090 */    MCD::OPC_Decode, 134, 2, 44, // Opcode: DIVW
/* 4094 */    MCD::OPC_FilterValue, 3, 6, 25, // Skip to: 10504
/* 4098 */    MCD::OPC_Decode, 141, 2, 44, // Opcode: DIVWo
/* 4102 */    MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 4207
/* 4106 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4109 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4123
/* 4113 */    MCD::OPC_CheckField, 1, 1, 0, 241, 24, // Skip to: 10504
/* 4119 */    MCD::OPC_Decode, 189, 5, 47, // Opcode: LXVDSX
/* 4123 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4137
/* 4127 */    MCD::OPC_CheckField, 1, 1, 0, 227, 24, // Skip to: 10504
/* 4133 */    MCD::OPC_Decode, 187, 5, 48, // Opcode: LXSDX
/* 4137 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4151
/* 4141 */    MCD::OPC_CheckField, 1, 1, 0, 213, 24, // Skip to: 10504
/* 4147 */    MCD::OPC_Decode, 234, 8, 48, // Opcode: STXSDX
/* 4151 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 4165
/* 4155 */    MCD::OPC_CheckField, 1, 1, 0, 199, 24, // Skip to: 10504
/* 4161 */    MCD::OPC_Decode, 190, 5, 47, // Opcode: LXVW4X
/* 4165 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 4179
/* 4169 */    MCD::OPC_CheckField, 1, 1, 0, 185, 24, // Skip to: 10504
/* 4175 */    MCD::OPC_Decode, 188, 5, 47, // Opcode: LXVD2X
/* 4179 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 4193
/* 4183 */    MCD::OPC_CheckField, 1, 1, 0, 171, 24, // Skip to: 10504
/* 4189 */    MCD::OPC_Decode, 236, 8, 47, // Opcode: STXVW4X
/* 4193 */    MCD::OPC_FilterValue, 30, 163, 24, // Skip to: 10504
/* 4197 */    MCD::OPC_CheckField, 1, 1, 0, 157, 24, // Skip to: 10504
/* 4203 */    MCD::OPC_Decode, 235, 8, 47, // Opcode: STXVD2X
/* 4207 */    MCD::OPC_FilterValue, 7, 172, 0, // Skip to: 4383
/* 4211 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4214 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4228
/* 4218 */    MCD::OPC_CheckField, 6, 17, 22, 136, 24, // Skip to: 10504
/* 4224 */    MCD::OPC_Decode, 148, 9, 49, // Opcode: TCHECK
/* 4228 */    MCD::OPC_FilterValue, 1, 143, 0, // Skip to: 4375
/* 4232 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4235 */    MCD::OPC_FilterValue, 20, 16, 0, // Skip to: 4255
/* 4239 */    MCD::OPC_CheckField, 22, 4, 0, 115, 24, // Skip to: 10504
/* 4245 */    MCD::OPC_CheckField, 11, 10, 0, 109, 24, // Skip to: 10504
/* 4251 */    MCD::OPC_Decode, 147, 9, 50, // Opcode: TBEGIN
/* 4255 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 4269
/* 4259 */    MCD::OPC_CheckField, 11, 14, 0, 95, 24, // Skip to: 10504
/* 4265 */    MCD::OPC_Decode, 158, 9, 51, // Opcode: TEND
/* 4269 */    MCD::OPC_FilterValue, 23, 16, 0, // Skip to: 4289
/* 4273 */    MCD::OPC_CheckField, 22, 3, 0, 81, 24, // Skip to: 10504
/* 4279 */    MCD::OPC_CheckField, 11, 10, 0, 75, 24, // Skip to: 10504
/* 4285 */    MCD::OPC_Decode, 176, 9, 50, // Opcode: TSR
/* 4289 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 4297
/* 4293 */    MCD::OPC_Decode, 139, 9, 52, // Opcode: TABORTWC
/* 4297 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 4305
/* 4301 */    MCD::OPC_Decode, 137, 9, 52, // Opcode: TABORTDC
/* 4305 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 4313
/* 4309 */    MCD::OPC_Decode, 140, 9, 53, // Opcode: TABORTWCI
/* 4313 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 4321
/* 4317 */    MCD::OPC_Decode, 138, 9, 53, // Opcode: TABORTDCI
/* 4321 */    MCD::OPC_FilterValue, 28, 16, 0, // Skip to: 4341
/* 4325 */    MCD::OPC_CheckField, 21, 5, 0, 29, 24, // Skip to: 10504
/* 4331 */    MCD::OPC_CheckField, 11, 5, 0, 23, 24, // Skip to: 10504
/* 4337 */    MCD::OPC_Decode, 136, 9, 54, // Opcode: TABORT
/* 4341 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 4361
/* 4345 */    MCD::OPC_CheckField, 21, 5, 0, 9, 24, // Skip to: 10504
/* 4351 */    MCD::OPC_CheckField, 11, 5, 0, 3, 24, // Skip to: 10504
/* 4357 */    MCD::OPC_Decode, 175, 9, 54, // Opcode: TRECLAIM
/* 4361 */    MCD::OPC_FilterValue, 31, 251, 23, // Skip to: 10504
/* 4365 */    MCD::OPC_CheckField, 11, 15, 0, 245, 23, // Skip to: 10504
/* 4371 */    MCD::OPC_Decode, 174, 9, 0, // Opcode: TRECHKPT
/* 4375 */    MCD::OPC_FilterValue, 2, 237, 23, // Skip to: 10504
/* 4379 */    MCD::OPC_Decode, 221, 4, 55, // Opcode: ISEL
/* 4383 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 4430
/* 4387 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4390 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 4410
/* 4394 */    MCD::OPC_CheckField, 6, 6, 4, 216, 23, // Skip to: 10504
/* 4400 */    MCD::OPC_CheckField, 0, 2, 0, 210, 23, // Skip to: 10504
/* 4406 */    MCD::OPC_Decode, 218, 5, 56, // Opcode: MTCRF
/* 4410 */    MCD::OPC_FilterValue, 1, 202, 23, // Skip to: 10504
/* 4414 */    MCD::OPC_CheckField, 6, 6, 4, 196, 23, // Skip to: 10504
/* 4420 */    MCD::OPC_CheckField, 0, 2, 0, 190, 23, // Skip to: 10504
/* 4426 */    MCD::OPC_Decode, 236, 5, 57, // Opcode: MTOCRF
/* 4430 */    MCD::OPC_FilterValue, 9, 75, 2, // Skip to: 5021
/* 4434 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4437 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 4484
/* 4441 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4444 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 4464
/* 4448 */    MCD::OPC_CheckField, 11, 9, 0, 162, 23, // Skip to: 10504
/* 4454 */    MCD::OPC_CheckField, 0, 2, 2, 156, 23, // Skip to: 10504
/* 4460 */    MCD::OPC_Decode, 194, 5, 37, // Opcode: MFCR
/* 4464 */    MCD::OPC_FilterValue, 1, 148, 23, // Skip to: 10504
/* 4468 */    MCD::OPC_CheckField, 11, 1, 0, 142, 23, // Skip to: 10504
/* 4474 */    MCD::OPC_CheckField, 0, 2, 2, 136, 23, // Skip to: 10504
/* 4480 */    MCD::OPC_Decode, 204, 5, 58, // Opcode: MFOCRF
/* 4484 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 4504
/* 4488 */    MCD::OPC_CheckField, 11, 5, 0, 122, 23, // Skip to: 10504
/* 4494 */    MCD::OPC_CheckField, 1, 1, 1, 116, 23, // Skip to: 10504
/* 4500 */    MCD::OPC_Decode, 215, 5, 59, // Opcode: MFVSRD
/* 4504 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 4524
/* 4508 */    MCD::OPC_CheckField, 11, 10, 0, 102, 23, // Skip to: 10504
/* 4514 */    MCD::OPC_CheckField, 0, 2, 2, 96, 23, // Skip to: 10504
/* 4520 */    MCD::OPC_Decode, 203, 5, 37, // Opcode: MFMSR
/* 4524 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 4544
/* 4528 */    MCD::OPC_CheckField, 11, 5, 0, 82, 23, // Skip to: 10504
/* 4534 */    MCD::OPC_CheckField, 1, 1, 1, 76, 23, // Skip to: 10504
/* 4540 */    MCD::OPC_Decode, 216, 5, 60, // Opcode: MFVSRWZ
/* 4544 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4558
/* 4548 */    MCD::OPC_CheckField, 1, 1, 0, 62, 23, // Skip to: 10504
/* 4554 */    MCD::OPC_Decode, 234, 5, 61, // Opcode: MTMSR
/* 4558 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 4587
/* 4562 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 4565 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4573
/* 4569 */    MCD::OPC_Decode, 235, 5, 61, // Opcode: MTMSRD
/* 4573 */    MCD::OPC_FilterValue, 1, 39, 23, // Skip to: 10504
/* 4577 */    MCD::OPC_CheckField, 11, 5, 0, 33, 23, // Skip to: 10504
/* 4583 */    MCD::OPC_Decode, 245, 5, 62, // Opcode: MTVSRD
/* 4587 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 4616
/* 4591 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 4594 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4602
/* 4598 */    MCD::OPC_Decode, 240, 5, 63, // Opcode: MTSR
/* 4602 */    MCD::OPC_FilterValue, 1, 10, 23, // Skip to: 10504
/* 4606 */    MCD::OPC_CheckField, 11, 5, 0, 4, 23, // Skip to: 10504
/* 4612 */    MCD::OPC_Decode, 246, 5, 64, // Opcode: MTVSRWA
/* 4616 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4645
/* 4620 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 4623 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4631
/* 4627 */    MCD::OPC_Decode, 241, 5, 65, // Opcode: MTSRIN
/* 4631 */    MCD::OPC_FilterValue, 1, 237, 22, // Skip to: 10504
/* 4635 */    MCD::OPC_CheckField, 11, 5, 0, 231, 22, // Skip to: 10504
/* 4641 */    MCD::OPC_Decode, 247, 5, 64, // Opcode: MTVSRWZ
/* 4645 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 4665
/* 4649 */    MCD::OPC_CheckField, 16, 10, 0, 217, 22, // Skip to: 10504
/* 4655 */    MCD::OPC_CheckField, 0, 2, 0, 211, 22, // Skip to: 10504
/* 4661 */    MCD::OPC_Decode, 161, 9, 66, // Opcode: TLBIEL
/* 4665 */    MCD::OPC_FilterValue, 9, 16, 0, // Skip to: 4685
/* 4669 */    MCD::OPC_CheckField, 16, 5, 0, 197, 22, // Skip to: 10504
/* 4675 */    MCD::OPC_CheckField, 0, 2, 0, 191, 22, // Skip to: 10504
/* 4681 */    MCD::OPC_Decode, 160, 9, 65, // Opcode: TLBIE
/* 4685 */    MCD::OPC_FilterValue, 10, 32, 0, // Skip to: 4721
/* 4689 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4692 */    MCD::OPC_FilterValue, 2, 176, 22, // Skip to: 10504
/* 4696 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 4699 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 4708
/* 4704 */    MCD::OPC_Decode, 201, 5, 37, // Opcode: MFLR
/* 4708 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 4717
/* 4713 */    MCD::OPC_Decode, 196, 5, 37, // Opcode: MFCTR
/* 4717 */    MCD::OPC_Decode, 206, 5, 39, // Opcode: MFSPR
/* 4721 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 4750
/* 4725 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4728 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4742
/* 4732 */    MCD::OPC_CheckField, 11, 15, 0, 134, 22, // Skip to: 10504
/* 4738 */    MCD::OPC_Decode, 159, 9, 0, // Opcode: TLBIA
/* 4742 */    MCD::OPC_FilterValue, 2, 126, 22, // Skip to: 10504
/* 4746 */    MCD::OPC_Decode, 210, 5, 39, // Opcode: MFTB
/* 4750 */    MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 4770
/* 4754 */    MCD::OPC_CheckField, 16, 5, 0, 112, 22, // Skip to: 10504
/* 4760 */    MCD::OPC_CheckField, 0, 2, 0, 106, 22, // Skip to: 10504
/* 4766 */    MCD::OPC_Decode, 147, 8, 65, // Opcode: SLBMTE
/* 4770 */    MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 4790
/* 4774 */    MCD::OPC_CheckField, 16, 10, 0, 92, 22, // Skip to: 10504
/* 4780 */    MCD::OPC_CheckField, 0, 2, 0, 86, 22, // Skip to: 10504
/* 4786 */    MCD::OPC_Decode, 145, 8, 66, // Opcode: SLBIE
/* 4790 */    MCD::OPC_FilterValue, 14, 32, 0, // Skip to: 4826
/* 4794 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4797 */    MCD::OPC_FilterValue, 2, 71, 22, // Skip to: 10504
/* 4801 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 4804 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 4813
/* 4809 */    MCD::OPC_Decode, 232, 5, 37, // Opcode: MTLR
/* 4813 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 4822
/* 4818 */    MCD::OPC_Decode, 220, 5, 37, // Opcode: MTCTR
/* 4822 */    MCD::OPC_Decode, 238, 5, 67, // Opcode: MTSPR
/* 4826 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 4846
/* 4830 */    MCD::OPC_CheckField, 11, 15, 0, 36, 22, // Skip to: 10504
/* 4836 */    MCD::OPC_CheckField, 0, 2, 0, 30, 22, // Skip to: 10504
/* 4842 */    MCD::OPC_Decode, 144, 8, 0, // Opcode: SLBIA
/* 4846 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4860
/* 4850 */    MCD::OPC_CheckField, 1, 1, 1, 16, 22, // Skip to: 10504
/* 4856 */    MCD::OPC_Decode, 208, 5, 63, // Opcode: MFSR
/* 4860 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 4874
/* 4864 */    MCD::OPC_CheckField, 1, 1, 1, 2, 22, // Skip to: 10504
/* 4870 */    MCD::OPC_Decode, 209, 5, 65, // Opcode: MFSRIN
/* 4874 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4894
/* 4878 */    MCD::OPC_CheckField, 21, 5, 0, 244, 21, // Skip to: 10504
/* 4884 */    MCD::OPC_CheckField, 0, 2, 0, 238, 21, // Skip to: 10504
/* 4890 */    MCD::OPC_Decode, 162, 9, 43, // Opcode: TLBIVAX
/* 4894 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 4941
/* 4898 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4901 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4919
/* 4905 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 4915
/* 4911 */    MCD::OPC_Decode, 167, 9, 43, // Opcode: TLBSX
/* 4915 */    MCD::OPC_Decode, 168, 9, 44, // Opcode: TLBSX2
/* 4919 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4927
/* 4923 */    MCD::OPC_Decode, 169, 9, 44, // Opcode: TLBSX2D
/* 4927 */    MCD::OPC_FilterValue, 2, 197, 21, // Skip to: 10504
/* 4931 */    MCD::OPC_CheckField, 16, 5, 0, 191, 21, // Skip to: 10504
/* 4937 */    MCD::OPC_Decode, 146, 8, 65, // Opcode: SLBMFEE
/* 4941 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 4966
/* 4945 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4948 */    MCD::OPC_FilterValue, 0, 176, 21, // Skip to: 10504
/* 4952 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 4962
/* 4958 */    MCD::OPC_Decode, 165, 9, 0, // Opcode: TLBRE
/* 4962 */    MCD::OPC_Decode, 166, 9, 68, // Opcode: TLBRE2
/* 4966 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 5001
/* 4970 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4973 */    MCD::OPC_FilterValue, 0, 151, 21, // Skip to: 10504
/* 4977 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 4987
/* 4983 */    MCD::OPC_Decode, 171, 9, 0, // Opcode: TLBWE
/* 4987 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 4997
/* 4993 */    MCD::OPC_Decode, 163, 9, 66, // Opcode: TLBLD
/* 4997 */    MCD::OPC_Decode, 172, 9, 68, // Opcode: TLBWE2
/* 5001 */    MCD::OPC_FilterValue, 31, 123, 21, // Skip to: 10504
/* 5005 */    MCD::OPC_CheckField, 16, 10, 0, 117, 21, // Skip to: 10504
/* 5011 */    MCD::OPC_CheckField, 0, 2, 0, 111, 21, // Skip to: 10504
/* 5017 */    MCD::OPC_Decode, 164, 9, 66, // Opcode: TLBLI
/* 5021 */    MCD::OPC_FilterValue, 10, 79, 1, // Skip to: 5360
/* 5025 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5028 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 5059
/* 5032 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5035 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5043
/* 5039 */    MCD::OPC_Decode, 169, 5, 69, // Opcode: LWARX
/* 5043 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5051
/* 5047 */    MCD::OPC_Decode, 170, 5, 69, // Opcode: LWARXL
/* 5051 */    MCD::OPC_FilterValue, 2, 73, 21, // Skip to: 10504
/* 5055 */    MCD::OPC_Decode, 244, 4, 70, // Opcode: LDX
/* 5059 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 5090
/* 5063 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5066 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5074
/* 5070 */    MCD::OPC_Decode, 226, 4, 69, // Opcode: LBARX
/* 5074 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5082
/* 5078 */    MCD::OPC_Decode, 227, 4, 69, // Opcode: LBARXL
/* 5082 */    MCD::OPC_FilterValue, 2, 42, 21, // Skip to: 10504
/* 5086 */    MCD::OPC_Decode, 243, 4, 71, // Opcode: LDUX
/* 5090 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 5113
/* 5094 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5097 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5105
/* 5101 */    MCD::OPC_Decode, 238, 4, 70, // Opcode: LDARX
/* 5105 */    MCD::OPC_FilterValue, 1, 19, 21, // Skip to: 10504
/* 5109 */    MCD::OPC_Decode, 239, 4, 70, // Opcode: LDARXL
/* 5113 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 5136
/* 5117 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5120 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5128
/* 5124 */    MCD::OPC_Decode, 136, 5, 69, // Opcode: LHARX
/* 5128 */    MCD::OPC_FilterValue, 1, 252, 20, // Skip to: 10504
/* 5132 */    MCD::OPC_Decode, 137, 5, 69, // Opcode: LHARXL
/* 5136 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5150
/* 5140 */    MCD::OPC_CheckField, 0, 2, 2, 238, 20, // Skip to: 10504
/* 5146 */    MCD::OPC_Decode, 195, 8, 70, // Opcode: STDX
/* 5150 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 5164
/* 5154 */    MCD::OPC_CheckField, 0, 2, 2, 224, 20, // Skip to: 10504
/* 5160 */    MCD::OPC_Decode, 194, 8, 72, // Opcode: STDUX
/* 5164 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 5178
/* 5168 */    MCD::OPC_CheckField, 0, 2, 2, 210, 20, // Skip to: 10504
/* 5174 */    MCD::OPC_Decode, 172, 5, 70, // Opcode: LWAX
/* 5178 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 5192
/* 5182 */    MCD::OPC_CheckField, 0, 2, 2, 196, 20, // Skip to: 10504
/* 5188 */    MCD::OPC_Decode, 171, 5, 71, // Opcode: LWAUX
/* 5192 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5206
/* 5196 */    MCD::OPC_CheckField, 0, 2, 0, 182, 20, // Skip to: 10504
/* 5202 */    MCD::OPC_Decode, 240, 4, 70, // Opcode: LDBRX
/* 5206 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5220
/* 5210 */    MCD::OPC_CheckField, 0, 2, 2, 168, 20, // Skip to: 10504
/* 5216 */    MCD::OPC_Decode, 160, 5, 73, // Opcode: LSWI
/* 5220 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5234
/* 5224 */    MCD::OPC_CheckField, 0, 2, 0, 154, 20, // Skip to: 10504
/* 5230 */    MCD::OPC_Decode, 190, 8, 70, // Opcode: STDBRX
/* 5234 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5248
/* 5238 */    MCD::OPC_CheckField, 0, 2, 2, 140, 20, // Skip to: 10504
/* 5244 */    MCD::OPC_Decode, 217, 8, 73, // Opcode: STSWI
/* 5248 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 5262
/* 5252 */    MCD::OPC_CheckField, 0, 2, 2, 126, 20, // Skip to: 10504
/* 5258 */    MCD::OPC_Decode, 179, 5, 44, // Opcode: LWZCIX
/* 5262 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 5276
/* 5266 */    MCD::OPC_CheckField, 0, 2, 2, 112, 20, // Skip to: 10504
/* 5272 */    MCD::OPC_Decode, 148, 5, 44, // Opcode: LHZCIX
/* 5276 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5290
/* 5280 */    MCD::OPC_CheckField, 0, 2, 2, 98, 20, // Skip to: 10504
/* 5286 */    MCD::OPC_Decode, 230, 4, 44, // Opcode: LBZCIX
/* 5290 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5304
/* 5294 */    MCD::OPC_CheckField, 0, 2, 2, 84, 20, // Skip to: 10504
/* 5300 */    MCD::OPC_Decode, 241, 4, 44, // Opcode: LDCIX
/* 5304 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 5318
/* 5308 */    MCD::OPC_CheckField, 0, 2, 2, 70, 20, // Skip to: 10504
/* 5314 */    MCD::OPC_Decode, 226, 8, 44, // Opcode: STWCIX
/* 5318 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 5332
/* 5322 */    MCD::OPC_CheckField, 0, 2, 2, 56, 20, // Skip to: 10504
/* 5328 */    MCD::OPC_Decode, 208, 8, 44, // Opcode: STHCIX
/* 5332 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 5346
/* 5336 */    MCD::OPC_CheckField, 0, 2, 2, 42, 20, // Skip to: 10504
/* 5342 */    MCD::OPC_Decode, 181, 8, 44, // Opcode: STBCIX
/* 5346 */    MCD::OPC_FilterValue, 31, 34, 20, // Skip to: 10504
/* 5350 */    MCD::OPC_CheckField, 0, 2, 2, 28, 20, // Skip to: 10504
/* 5356 */    MCD::OPC_Decode, 191, 8, 44, // Opcode: STDCIX
/* 5360 */    MCD::OPC_FilterValue, 11, 245, 2, // Skip to: 6121
/* 5364 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5367 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5396
/* 5371 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5374 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5388
/* 5378 */    MCD::OPC_CheckField, 25, 1, 0, 0, 20, // Skip to: 10504
/* 5384 */    MCD::OPC_Decode, 213, 4, 74, // Opcode: ICBT
/* 5388 */    MCD::OPC_FilterValue, 2, 248, 19, // Skip to: 10504
/* 5392 */    MCD::OPC_Decode, 184, 5, 69, // Opcode: LWZX
/* 5396 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5425
/* 5400 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5403 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5417
/* 5407 */    MCD::OPC_CheckField, 21, 5, 0, 227, 19, // Skip to: 10504
/* 5413 */    MCD::OPC_Decode, 248, 1, 75, // Opcode: DCBST
/* 5417 */    MCD::OPC_FilterValue, 2, 219, 19, // Skip to: 10504
/* 5421 */    MCD::OPC_Decode, 182, 5, 76, // Opcode: LWZUX
/* 5425 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5454
/* 5429 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5432 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5446
/* 5436 */    MCD::OPC_CheckField, 21, 5, 0, 198, 19, // Skip to: 10504
/* 5442 */    MCD::OPC_Decode, 246, 1, 75, // Opcode: DCBF
/* 5446 */    MCD::OPC_FilterValue, 2, 190, 19, // Skip to: 10504
/* 5450 */    MCD::OPC_Decode, 235, 4, 69, // Opcode: LBZX
/* 5454 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 5468
/* 5458 */    MCD::OPC_CheckField, 0, 2, 2, 176, 19, // Skip to: 10504
/* 5464 */    MCD::OPC_Decode, 233, 4, 76, // Opcode: LBZUX
/* 5468 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 5491
/* 5472 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5475 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5483
/* 5479 */    MCD::OPC_Decode, 227, 8, 69, // Opcode: STWCX
/* 5483 */    MCD::OPC_FilterValue, 2, 153, 19, // Skip to: 10504
/* 5487 */    MCD::OPC_Decode, 232, 8, 69, // Opcode: STWX
/* 5491 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 5505
/* 5495 */    MCD::OPC_CheckField, 0, 2, 2, 139, 19, // Skip to: 10504
/* 5501 */    MCD::OPC_Decode, 230, 8, 77, // Opcode: STWUX
/* 5505 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 5528
/* 5509 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5512 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5520
/* 5516 */    MCD::OPC_Decode, 192, 8, 70, // Opcode: STDCX
/* 5520 */    MCD::OPC_FilterValue, 2, 116, 19, // Skip to: 10504
/* 5524 */    MCD::OPC_Decode, 187, 8, 69, // Opcode: STBX
/* 5528 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5557
/* 5532 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5535 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5549
/* 5539 */    MCD::OPC_CheckField, 21, 5, 0, 95, 19, // Skip to: 10504
/* 5545 */    MCD::OPC_Decode, 250, 1, 75, // Opcode: DCBTST
/* 5549 */    MCD::OPC_FilterValue, 2, 87, 19, // Skip to: 10504
/* 5553 */    MCD::OPC_Decode, 185, 8, 77, // Opcode: STBUX
/* 5557 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5586
/* 5561 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5564 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5578
/* 5568 */    MCD::OPC_CheckField, 21, 5, 0, 66, 19, // Skip to: 10504
/* 5574 */    MCD::OPC_Decode, 249, 1, 75, // Opcode: DCBT
/* 5578 */    MCD::OPC_FilterValue, 2, 58, 19, // Skip to: 10504
/* 5582 */    MCD::OPC_Decode, 153, 5, 69, // Opcode: LHZX
/* 5586 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 5600
/* 5590 */    MCD::OPC_CheckField, 0, 2, 2, 44, 19, // Skip to: 10504
/* 5596 */    MCD::OPC_Decode, 151, 5, 76, // Opcode: LHZUX
/* 5600 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 5638
/* 5604 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5607 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5630
/* 5611 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 5614 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5622
/* 5618 */    MCD::OPC_Decode, 144, 2, 78, // Opcode: DST
/* 5622 */    MCD::OPC_FilterValue, 4, 14, 19, // Skip to: 10504
/* 5626 */    MCD::OPC_Decode, 150, 2, 78, // Opcode: DSTT
/* 5630 */    MCD::OPC_FilterValue, 2, 6, 19, // Skip to: 10504
/* 5634 */    MCD::OPC_Decode, 142, 5, 69, // Opcode: LHAX
/* 5638 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 5676
/* 5642 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5645 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5668
/* 5649 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 5652 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5660
/* 5656 */    MCD::OPC_Decode, 146, 2, 78, // Opcode: DSTST
/* 5660 */    MCD::OPC_FilterValue, 4, 232, 18, // Skip to: 10504
/* 5664 */    MCD::OPC_Decode, 148, 2, 78, // Opcode: DSTSTT
/* 5668 */    MCD::OPC_FilterValue, 2, 224, 18, // Skip to: 10504
/* 5672 */    MCD::OPC_Decode, 140, 5, 76, // Opcode: LHAUX
/* 5676 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 5690
/* 5680 */    MCD::OPC_CheckField, 0, 2, 2, 210, 18, // Skip to: 10504
/* 5686 */    MCD::OPC_Decode, 214, 8, 69, // Opcode: STHX
/* 5690 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5704
/* 5694 */    MCD::OPC_CheckField, 0, 2, 2, 196, 18, // Skip to: 10504
/* 5700 */    MCD::OPC_Decode, 212, 8, 77, // Opcode: STHUX
/* 5704 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 5724
/* 5708 */    MCD::OPC_CheckField, 21, 5, 0, 182, 18, // Skip to: 10504
/* 5714 */    MCD::OPC_CheckField, 0, 2, 0, 176, 18, // Skip to: 10504
/* 5720 */    MCD::OPC_Decode, 247, 1, 75, // Opcode: DCBI
/* 5724 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 5747
/* 5728 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5731 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5739
/* 5735 */    MCD::OPC_Decode, 175, 5, 69, // Opcode: LWBRX
/* 5739 */    MCD::OPC_FilterValue, 2, 153, 18, // Skip to: 10504
/* 5743 */    MCD::OPC_Decode, 133, 5, 79, // Opcode: LFSX
/* 5747 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 5776
/* 5751 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5754 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5768
/* 5758 */    MCD::OPC_CheckField, 11, 15, 0, 132, 18, // Skip to: 10504
/* 5764 */    MCD::OPC_Decode, 170, 9, 0, // Opcode: TLBSYNC
/* 5768 */    MCD::OPC_FilterValue, 2, 124, 18, // Skip to: 10504
/* 5772 */    MCD::OPC_Decode, 132, 5, 80, // Opcode: LFSUX
/* 5776 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 5811
/* 5780 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5783 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5803
/* 5787 */    MCD::OPC_CheckField, 23, 3, 0, 103, 18, // Skip to: 10504
/* 5793 */    MCD::OPC_CheckField, 11, 10, 0, 97, 18, // Skip to: 10504
/* 5799 */    MCD::OPC_Decode, 135, 9, 81, // Opcode: SYNC
/* 5803 */    MCD::OPC_FilterValue, 2, 89, 18, // Skip to: 10504
/* 5807 */    MCD::OPC_Decode, 255, 4, 82, // Opcode: LFDX
/* 5811 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 5825
/* 5815 */    MCD::OPC_CheckField, 0, 2, 2, 75, 18, // Skip to: 10504
/* 5821 */    MCD::OPC_Decode, 254, 4, 83, // Opcode: LFDUX
/* 5825 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 5848
/* 5829 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5832 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5840
/* 5836 */    MCD::OPC_Decode, 225, 8, 69, // Opcode: STWBRX
/* 5840 */    MCD::OPC_FilterValue, 2, 52, 18, // Skip to: 10504
/* 5844 */    MCD::OPC_Decode, 204, 8, 79, // Opcode: STFSX
/* 5848 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 5871
/* 5852 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5855 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5863
/* 5859 */    MCD::OPC_Decode, 182, 8, 69, // Opcode: STBCX
/* 5863 */    MCD::OPC_FilterValue, 2, 29, 18, // Skip to: 10504
/* 5867 */    MCD::OPC_Decode, 203, 8, 84, // Opcode: STFSUX
/* 5871 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 5894
/* 5875 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5878 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5886
/* 5882 */    MCD::OPC_Decode, 209, 8, 69, // Opcode: STHCX
/* 5886 */    MCD::OPC_FilterValue, 2, 6, 18, // Skip to: 10504
/* 5890 */    MCD::OPC_Decode, 199, 8, 82, // Opcode: STFDX
/* 5894 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 5923
/* 5898 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5901 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5915
/* 5905 */    MCD::OPC_CheckField, 21, 5, 0, 241, 17, // Skip to: 10504
/* 5911 */    MCD::OPC_Decode, 245, 1, 75, // Opcode: DCBA
/* 5915 */    MCD::OPC_FilterValue, 2, 233, 17, // Skip to: 10504
/* 5919 */    MCD::OPC_Decode, 198, 8, 85, // Opcode: STFDUX
/* 5923 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 5937
/* 5927 */    MCD::OPC_CheckField, 0, 2, 0, 219, 17, // Skip to: 10504
/* 5933 */    MCD::OPC_Decode, 144, 5, 69, // Opcode: LHBRX
/* 5937 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 5984
/* 5941 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 5944 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5964
/* 5948 */    MCD::OPC_CheckField, 11, 10, 0, 198, 17, // Skip to: 10504
/* 5954 */    MCD::OPC_CheckField, 0, 2, 0, 192, 17, // Skip to: 10504
/* 5960 */    MCD::OPC_Decode, 142, 2, 86, // Opcode: DSS
/* 5964 */    MCD::OPC_FilterValue, 4, 184, 17, // Skip to: 10504
/* 5968 */    MCD::OPC_CheckField, 11, 12, 0, 178, 17, // Skip to: 10504
/* 5974 */    MCD::OPC_CheckField, 0, 2, 0, 172, 17, // Skip to: 10504
/* 5980 */    MCD::OPC_Decode, 143, 2, 0, // Opcode: DSSALL
/* 5984 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 6029
/* 5988 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5991 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 6015
/* 5995 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 6011
/* 6001 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 6011
/* 6007 */    MCD::OPC_Decode, 228, 3, 0, // Opcode: EnforceIEIO
/* 6011 */    MCD::OPC_Decode, 191, 5, 87, // Opcode: MBAR
/* 6015 */    MCD::OPC_FilterValue, 1, 133, 17, // Skip to: 10504
/* 6019 */    MCD::OPC_CheckField, 0, 1, 0, 127, 17, // Skip to: 10504
/* 6025 */    MCD::OPC_Decode, 128, 5, 82, // Opcode: LFIWAX
/* 6029 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6043
/* 6033 */    MCD::OPC_CheckField, 0, 2, 2, 113, 17, // Skip to: 10504
/* 6039 */    MCD::OPC_Decode, 129, 5, 82, // Opcode: LFIWZX
/* 6043 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 6057
/* 6047 */    MCD::OPC_CheckField, 0, 2, 0, 99, 17, // Skip to: 10504
/* 6053 */    MCD::OPC_Decode, 207, 8, 69, // Opcode: STHBRX
/* 6057 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 6086
/* 6061 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6064 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6078
/* 6068 */    MCD::OPC_CheckField, 21, 5, 0, 78, 17, // Skip to: 10504
/* 6074 */    MCD::OPC_Decode, 212, 4, 75, // Opcode: ICBI
/* 6078 */    MCD::OPC_FilterValue, 2, 70, 17, // Skip to: 10504
/* 6082 */    MCD::OPC_Decode, 200, 8, 82, // Opcode: STFIWX
/* 6086 */    MCD::OPC_FilterValue, 31, 62, 17, // Skip to: 10504
/* 6090 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6093 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6107
/* 6097 */    MCD::OPC_CheckField, 0, 2, 0, 49, 17, // Skip to: 10504
/* 6103 */    MCD::OPC_Decode, 251, 1, 75, // Opcode: DCBZ
/* 6107 */    MCD::OPC_FilterValue, 1, 41, 17, // Skip to: 10504
/* 6111 */    MCD::OPC_CheckField, 0, 2, 0, 35, 17, // Skip to: 10504
/* 6117 */    MCD::OPC_Decode, 252, 1, 75, // Opcode: DCBZL
/* 6121 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 6220
/* 6125 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6128 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 6151
/* 6132 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6135 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6143
/* 6139 */    MCD::OPC_Decode, 152, 8, 88, // Opcode: SLW
/* 6143 */    MCD::OPC_FilterValue, 1, 5, 17, // Skip to: 10504
/* 6147 */    MCD::OPC_Decode, 157, 8, 88, // Opcode: SLWo
/* 6151 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 6174
/* 6155 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6158 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6166
/* 6162 */    MCD::OPC_Decode, 173, 8, 88, // Opcode: SRW
/* 6166 */    MCD::OPC_FilterValue, 1, 238, 16, // Skip to: 10504
/* 6170 */    MCD::OPC_Decode, 178, 8, 88, // Opcode: SRWo
/* 6174 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 6197
/* 6178 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6181 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6189
/* 6185 */    MCD::OPC_Decode, 165, 8, 88, // Opcode: SRAW
/* 6189 */    MCD::OPC_FilterValue, 1, 215, 16, // Skip to: 10504
/* 6193 */    MCD::OPC_Decode, 168, 8, 88, // Opcode: SRAWo
/* 6197 */    MCD::OPC_FilterValue, 25, 207, 16, // Skip to: 10504
/* 6201 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6204 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6212
/* 6208 */    MCD::OPC_Decode, 166, 8, 89, // Opcode: SRAWI
/* 6212 */    MCD::OPC_FilterValue, 1, 192, 16, // Skip to: 10504
/* 6216 */    MCD::OPC_Decode, 167, 8, 89, // Opcode: SRAWIo
/* 6220 */    MCD::OPC_FilterValue, 13, 47, 1, // Skip to: 6527
/* 6224 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6227 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 6278
/* 6231 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6234 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6248
/* 6238 */    MCD::OPC_CheckField, 11, 5, 0, 164, 16, // Skip to: 10504
/* 6244 */    MCD::OPC_Decode, 229, 1, 90, // Opcode: CNTLZW
/* 6248 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6262
/* 6252 */    MCD::OPC_CheckField, 11, 5, 0, 150, 16, // Skip to: 10504
/* 6258 */    MCD::OPC_Decode, 232, 1, 90, // Opcode: CNTLZWo
/* 6262 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6270
/* 6266 */    MCD::OPC_Decode, 148, 8, 91, // Opcode: SLD
/* 6270 */    MCD::OPC_FilterValue, 3, 134, 16, // Skip to: 10504
/* 6274 */    MCD::OPC_Decode, 151, 8, 91, // Opcode: SLDo
/* 6278 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 6313
/* 6282 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6285 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6299
/* 6289 */    MCD::OPC_CheckField, 11, 5, 0, 113, 16, // Skip to: 10504
/* 6295 */    MCD::OPC_Decode, 227, 1, 92, // Opcode: CNTLZD
/* 6299 */    MCD::OPC_FilterValue, 1, 105, 16, // Skip to: 10504
/* 6303 */    MCD::OPC_CheckField, 11, 5, 0, 99, 16, // Skip to: 10504
/* 6309 */    MCD::OPC_Decode, 228, 1, 92, // Opcode: CNTLZDo
/* 6313 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 6333
/* 6317 */    MCD::OPC_CheckField, 11, 5, 0, 85, 16, // Skip to: 10504
/* 6323 */    MCD::OPC_CheckField, 0, 2, 0, 79, 16, // Skip to: 10504
/* 6329 */    MCD::OPC_Decode, 165, 6, 90, // Opcode: POPCNTW
/* 6333 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 6353
/* 6337 */    MCD::OPC_CheckField, 11, 5, 0, 65, 16, // Skip to: 10504
/* 6343 */    MCD::OPC_CheckField, 0, 2, 0, 59, 16, // Skip to: 10504
/* 6349 */    MCD::OPC_Decode, 164, 6, 92, // Opcode: POPCNTD
/* 6353 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 6376
/* 6357 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6360 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6368
/* 6364 */    MCD::OPC_Decode, 169, 8, 91, // Opcode: SRD
/* 6368 */    MCD::OPC_FilterValue, 3, 36, 16, // Skip to: 10504
/* 6372 */    MCD::OPC_Decode, 172, 8, 91, // Opcode: SRDo
/* 6376 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 6399
/* 6380 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6383 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6391
/* 6387 */    MCD::OPC_Decode, 161, 8, 91, // Opcode: SRAD
/* 6391 */    MCD::OPC_FilterValue, 1, 13, 16, // Skip to: 10504
/* 6395 */    MCD::OPC_Decode, 164, 8, 91, // Opcode: SRADo
/* 6399 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 6422
/* 6403 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 6406 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6414
/* 6410 */    MCD::OPC_Decode, 162, 8, 93, // Opcode: SRADI
/* 6414 */    MCD::OPC_FilterValue, 1, 246, 15, // Skip to: 10504
/* 6418 */    MCD::OPC_Decode, 163, 8, 93, // Opcode: SRADIo
/* 6422 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 6457
/* 6426 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6429 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6443
/* 6433 */    MCD::OPC_CheckField, 11, 5, 0, 225, 15, // Skip to: 10504
/* 6439 */    MCD::OPC_Decode, 219, 3, 90, // Opcode: EXTSH
/* 6443 */    MCD::OPC_FilterValue, 1, 217, 15, // Skip to: 10504
/* 6447 */    MCD::OPC_CheckField, 11, 5, 0, 211, 15, // Skip to: 10504
/* 6453 */    MCD::OPC_Decode, 223, 3, 90, // Opcode: EXTSHo
/* 6457 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 6492
/* 6461 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6464 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6478
/* 6468 */    MCD::OPC_CheckField, 11, 5, 0, 190, 15, // Skip to: 10504
/* 6474 */    MCD::OPC_Decode, 214, 3, 90, // Opcode: EXTSB
/* 6478 */    MCD::OPC_FilterValue, 1, 182, 15, // Skip to: 10504
/* 6482 */    MCD::OPC_CheckField, 11, 5, 0, 176, 15, // Skip to: 10504
/* 6488 */    MCD::OPC_Decode, 218, 3, 90, // Opcode: EXTSBo
/* 6492 */    MCD::OPC_FilterValue, 30, 168, 15, // Skip to: 10504
/* 6496 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6499 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6513
/* 6503 */    MCD::OPC_CheckField, 11, 5, 0, 155, 15, // Skip to: 10504
/* 6509 */    MCD::OPC_Decode, 224, 3, 92, // Opcode: EXTSW
/* 6513 */    MCD::OPC_FilterValue, 1, 147, 15, // Skip to: 10504
/* 6517 */    MCD::OPC_CheckField, 11, 5, 0, 141, 15, // Skip to: 10504
/* 6523 */    MCD::OPC_Decode, 227, 3, 92, // Opcode: EXTSWo
/* 6527 */    MCD::OPC_FilterValue, 14, 211, 0, // Skip to: 6742
/* 6531 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6534 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 6555
/* 6538 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6541 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 6548
/* 6545 */    MCD::OPC_Decode, 71, 88, // Opcode: AND
/* 6548 */    MCD::OPC_FilterValue, 1, 112, 15, // Skip to: 10504
/* 6552 */    MCD::OPC_Decode, 86, 88, // Opcode: ANDo
/* 6555 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 6576
/* 6559 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6562 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 6569
/* 6566 */    MCD::OPC_Decode, 74, 88, // Opcode: ANDC
/* 6569 */    MCD::OPC_FilterValue, 1, 91, 15, // Skip to: 10504
/* 6573 */    MCD::OPC_Decode, 77, 88, // Opcode: ANDCo
/* 6576 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 6599
/* 6580 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6583 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6591
/* 6587 */    MCD::OPC_Decode, 148, 6, 88, // Opcode: NOR
/* 6591 */    MCD::OPC_FilterValue, 1, 69, 15, // Skip to: 10504
/* 6595 */    MCD::OPC_Decode, 151, 6, 88, // Opcode: NORo
/* 6599 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 6613
/* 6603 */    MCD::OPC_CheckField, 0, 2, 0, 55, 15, // Skip to: 10504
/* 6609 */    MCD::OPC_Decode, 207, 1, 94, // Opcode: BPERMD
/* 6613 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 6636
/* 6617 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6620 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6628
/* 6624 */    MCD::OPC_Decode, 159, 2, 88, // Opcode: EQV
/* 6628 */    MCD::OPC_FilterValue, 1, 32, 15, // Skip to: 10504
/* 6632 */    MCD::OPC_Decode, 162, 2, 88, // Opcode: EQVo
/* 6636 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 6659
/* 6640 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6643 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6651
/* 6647 */    MCD::OPC_Decode, 137, 11, 88, // Opcode: XOR
/* 6651 */    MCD::OPC_FilterValue, 1, 9, 15, // Skip to: 10504
/* 6655 */    MCD::OPC_Decode, 144, 11, 88, // Opcode: XORo
/* 6659 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 6682
/* 6663 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6666 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6674
/* 6670 */    MCD::OPC_Decode, 155, 6, 88, // Opcode: ORC
/* 6674 */    MCD::OPC_FilterValue, 1, 242, 14, // Skip to: 10504
/* 6678 */    MCD::OPC_Decode, 158, 6, 88, // Opcode: ORCo
/* 6682 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 6705
/* 6686 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6689 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6697
/* 6693 */    MCD::OPC_Decode, 152, 6, 88, // Opcode: OR
/* 6697 */    MCD::OPC_FilterValue, 1, 219, 14, // Skip to: 10504
/* 6701 */    MCD::OPC_Decode, 163, 6, 88, // Opcode: ORo
/* 6705 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 6728
/* 6709 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6712 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6720
/* 6716 */    MCD::OPC_Decode, 137, 6, 88, // Opcode: NAND
/* 6720 */    MCD::OPC_FilterValue, 1, 196, 14, // Skip to: 10504
/* 6724 */    MCD::OPC_Decode, 140, 6, 88, // Opcode: NANDo
/* 6728 */    MCD::OPC_FilterValue, 15, 188, 14, // Skip to: 10504
/* 6732 */    MCD::OPC_CheckField, 0, 2, 0, 182, 14, // Skip to: 10504
/* 6738 */    MCD::OPC_Decode, 217, 1, 88, // Opcode: CMPB
/* 6742 */    MCD::OPC_FilterValue, 15, 174, 14, // Skip to: 10504
/* 6746 */    MCD::OPC_CheckField, 23, 3, 0, 168, 14, // Skip to: 10504
/* 6752 */    MCD::OPC_CheckField, 6, 15, 1, 162, 14, // Skip to: 10504
/* 6758 */    MCD::OPC_CheckField, 0, 2, 0, 156, 14, // Skip to: 10504
/* 6764 */    MCD::OPC_Decode, 134, 11, 81, // Opcode: WAIT
/* 6768 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 6776
/* 6772 */    MCD::OPC_Decode, 177, 5, 95, // Opcode: LWZ
/* 6776 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 6784
/* 6780 */    MCD::OPC_Decode, 180, 5, 95, // Opcode: LWZU
/* 6784 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 6792
/* 6788 */    MCD::OPC_Decode, 228, 4, 95, // Opcode: LBZ
/* 6792 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 6800
/* 6796 */    MCD::OPC_Decode, 231, 4, 95, // Opcode: LBZU
/* 6800 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 6808
/* 6804 */    MCD::OPC_Decode, 223, 8, 95, // Opcode: STW
/* 6808 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 6816
/* 6812 */    MCD::OPC_Decode, 228, 8, 95, // Opcode: STWU
/* 6816 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 6824
/* 6820 */    MCD::OPC_Decode, 179, 8, 95, // Opcode: STB
/* 6824 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 6832
/* 6828 */    MCD::OPC_Decode, 183, 8, 95, // Opcode: STBU
/* 6832 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 6840
/* 6836 */    MCD::OPC_Decode, 146, 5, 95, // Opcode: LHZ
/* 6840 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 6848
/* 6844 */    MCD::OPC_Decode, 149, 5, 95, // Opcode: LHZU
/* 6848 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 6856
/* 6852 */    MCD::OPC_Decode, 134, 5, 95, // Opcode: LHA
/* 6856 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 6864
/* 6860 */    MCD::OPC_Decode, 138, 5, 95, // Opcode: LHAU
/* 6864 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 6872
/* 6868 */    MCD::OPC_Decode, 205, 8, 95, // Opcode: STH
/* 6872 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 6880
/* 6876 */    MCD::OPC_Decode, 210, 8, 95, // Opcode: STHU
/* 6880 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 6888
/* 6884 */    MCD::OPC_Decode, 159, 5, 95, // Opcode: LMW
/* 6888 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 6896
/* 6892 */    MCD::OPC_Decode, 216, 8, 95, // Opcode: STMW
/* 6896 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 6904
/* 6900 */    MCD::OPC_Decode, 130, 5, 96, // Opcode: LFS
/* 6904 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 6912
/* 6908 */    MCD::OPC_Decode, 131, 5, 96, // Opcode: LFSU
/* 6912 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 6920
/* 6916 */    MCD::OPC_Decode, 252, 4, 97, // Opcode: LFD
/* 6920 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 6928
/* 6924 */    MCD::OPC_Decode, 253, 4, 97, // Opcode: LFDU
/* 6928 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 6936
/* 6932 */    MCD::OPC_Decode, 201, 8, 96, // Opcode: STFS
/* 6936 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 6944
/* 6940 */    MCD::OPC_Decode, 202, 8, 96, // Opcode: STFSU
/* 6944 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 6952
/* 6948 */    MCD::OPC_Decode, 196, 8, 97, // Opcode: STFD
/* 6952 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 6960
/* 6956 */    MCD::OPC_Decode, 197, 8, 97, // Opcode: STFDU
/* 6960 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 6991
/* 6964 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6967 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6975
/* 6971 */    MCD::OPC_Decode, 237, 4, 98, // Opcode: LD
/* 6975 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6983
/* 6979 */    MCD::OPC_Decode, 242, 4, 98, // Opcode: LDU
/* 6983 */    MCD::OPC_FilterValue, 2, 189, 13, // Skip to: 10504
/* 6987 */    MCD::OPC_Decode, 168, 5, 98, // Opcode: LWA
/* 6991 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 7364
/* 6995 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 6998 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 7033
/* 7002 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7005 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 7019
/* 7009 */    MCD::OPC_CheckField, 16, 5, 0, 161, 13, // Skip to: 10504
/* 7015 */    MCD::OPC_Decode, 239, 3, 99, // Opcode: FCFIDS
/* 7019 */    MCD::OPC_FilterValue, 30, 153, 13, // Skip to: 10504
/* 7023 */    MCD::OPC_CheckField, 16, 5, 0, 147, 13, // Skip to: 10504
/* 7029 */    MCD::OPC_Decode, 242, 3, 99, // Opcode: FCFIDUS
/* 7033 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 7068
/* 7037 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7040 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 7054
/* 7044 */    MCD::OPC_CheckField, 16, 5, 0, 126, 13, // Skip to: 10504
/* 7050 */    MCD::OPC_Decode, 240, 3, 99, // Opcode: FCFIDSo
/* 7054 */    MCD::OPC_FilterValue, 30, 118, 13, // Skip to: 10504
/* 7058 */    MCD::OPC_CheckField, 16, 5, 0, 112, 13, // Skip to: 10504
/* 7064 */    MCD::OPC_Decode, 243, 3, 99, // Opcode: FCFIDUSo
/* 7068 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 7082
/* 7072 */    MCD::OPC_CheckField, 6, 5, 0, 98, 13, // Skip to: 10504
/* 7078 */    MCD::OPC_Decode, 137, 4, 100, // Opcode: FDIVS
/* 7082 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 7096
/* 7086 */    MCD::OPC_CheckField, 6, 5, 0, 84, 13, // Skip to: 10504
/* 7092 */    MCD::OPC_Decode, 138, 4, 100, // Opcode: FDIVSo
/* 7096 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 7110
/* 7100 */    MCD::OPC_CheckField, 6, 5, 0, 70, 13, // Skip to: 10504
/* 7106 */    MCD::OPC_Decode, 205, 4, 100, // Opcode: FSUBS
/* 7110 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 7124
/* 7114 */    MCD::OPC_CheckField, 6, 5, 0, 56, 13, // Skip to: 10504
/* 7120 */    MCD::OPC_Decode, 206, 4, 100, // Opcode: FSUBSo
/* 7124 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 7138
/* 7128 */    MCD::OPC_CheckField, 6, 5, 0, 42, 13, // Skip to: 10504
/* 7134 */    MCD::OPC_Decode, 234, 3, 100, // Opcode: FADDS
/* 7138 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 7152
/* 7142 */    MCD::OPC_CheckField, 6, 5, 0, 28, 13, // Skip to: 10504
/* 7148 */    MCD::OPC_Decode, 235, 3, 100, // Opcode: FADDSo
/* 7152 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 7172
/* 7156 */    MCD::OPC_CheckField, 16, 5, 0, 14, 13, // Skip to: 10504
/* 7162 */    MCD::OPC_CheckField, 6, 5, 0, 8, 13, // Skip to: 10504
/* 7168 */    MCD::OPC_Decode, 201, 4, 101, // Opcode: FSQRTS
/* 7172 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 7192
/* 7176 */    MCD::OPC_CheckField, 16, 5, 0, 250, 12, // Skip to: 10504
/* 7182 */    MCD::OPC_CheckField, 6, 5, 0, 244, 12, // Skip to: 10504
/* 7188 */    MCD::OPC_Decode, 202, 4, 101, // Opcode: FSQRTSo
/* 7192 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 7212
/* 7196 */    MCD::OPC_CheckField, 16, 5, 0, 230, 12, // Skip to: 10504
/* 7202 */    MCD::OPC_CheckField, 6, 5, 0, 224, 12, // Skip to: 10504
/* 7208 */    MCD::OPC_Decode, 171, 4, 101, // Opcode: FRES
/* 7212 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 7232
/* 7216 */    MCD::OPC_CheckField, 16, 5, 0, 210, 12, // Skip to: 10504
/* 7222 */    MCD::OPC_CheckField, 6, 5, 0, 204, 12, // Skip to: 10504
/* 7228 */    MCD::OPC_Decode, 172, 4, 101, // Opcode: FRESo
/* 7232 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 7246
/* 7236 */    MCD::OPC_CheckField, 11, 5, 0, 190, 12, // Skip to: 10504
/* 7242 */    MCD::OPC_Decode, 151, 4, 102, // Opcode: FMULS
/* 7246 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 7260
/* 7250 */    MCD::OPC_CheckField, 11, 5, 0, 176, 12, // Skip to: 10504
/* 7256 */    MCD::OPC_Decode, 152, 4, 102, // Opcode: FMULSo
/* 7260 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 7280
/* 7264 */    MCD::OPC_CheckField, 16, 5, 0, 162, 12, // Skip to: 10504
/* 7270 */    MCD::OPC_CheckField, 6, 5, 0, 156, 12, // Skip to: 10504
/* 7276 */    MCD::OPC_Decode, 193, 4, 101, // Opcode: FRSQRTES
/* 7280 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 7300
/* 7284 */    MCD::OPC_CheckField, 16, 5, 0, 142, 12, // Skip to: 10504
/* 7290 */    MCD::OPC_CheckField, 6, 5, 0, 136, 12, // Skip to: 10504
/* 7296 */    MCD::OPC_Decode, 194, 4, 101, // Opcode: FRSQRTESo
/* 7300 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 7308
/* 7304 */    MCD::OPC_Decode, 147, 4, 103, // Opcode: FMSUBS
/* 7308 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 7316
/* 7312 */    MCD::OPC_Decode, 148, 4, 103, // Opcode: FMSUBSo
/* 7316 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 7324
/* 7320 */    MCD::OPC_Decode, 141, 4, 103, // Opcode: FMADDS
/* 7324 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 7332
/* 7328 */    MCD::OPC_Decode, 142, 4, 103, // Opcode: FMADDSo
/* 7332 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 7340
/* 7336 */    MCD::OPC_Decode, 167, 4, 103, // Opcode: FNMSUBS
/* 7340 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 7348
/* 7344 */    MCD::OPC_Decode, 168, 4, 103, // Opcode: FNMSUBSo
/* 7348 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 7356
/* 7352 */    MCD::OPC_Decode, 163, 4, 103, // Opcode: FNMADDS
/* 7356 */    MCD::OPC_FilterValue, 63, 72, 12, // Skip to: 10504
/* 7360 */    MCD::OPC_Decode, 164, 4, 103, // Opcode: FNMADDSo
/* 7364 */    MCD::OPC_FilterValue, 60, 32, 8, // Skip to: 9448
/* 7368 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 7371 */    MCD::OPC_FilterValue, 0, 16, 2, // Skip to: 7903
/* 7375 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7378 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 7401
/* 7382 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7385 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7393
/* 7389 */    MCD::OPC_Decode, 146, 11, 104, // Opcode: XSADDDP
/* 7393 */    MCD::OPC_FilterValue, 1, 35, 12, // Skip to: 10504
/* 7397 */    MCD::OPC_Decode, 159, 11, 105, // Opcode: XSMADDADP
/* 7401 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 7424
/* 7405 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7408 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7416
/* 7412 */    MCD::OPC_Decode, 180, 11, 104, // Opcode: XSSUBDP
/* 7416 */    MCD::OPC_FilterValue, 1, 12, 12, // Skip to: 10504
/* 7420 */    MCD::OPC_Decode, 160, 11, 105, // Opcode: XSMADDMDP
/* 7424 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 7447
/* 7428 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7431 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7439
/* 7435 */    MCD::OPC_Decode, 165, 11, 104, // Opcode: XSMULDP
/* 7439 */    MCD::OPC_FilterValue, 1, 245, 11, // Skip to: 10504
/* 7443 */    MCD::OPC_Decode, 163, 11, 105, // Opcode: XSMSUBADP
/* 7447 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 7470
/* 7451 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7454 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7462
/* 7458 */    MCD::OPC_Decode, 158, 11, 104, // Opcode: XSDIVDP
/* 7462 */    MCD::OPC_FilterValue, 1, 222, 11, // Skip to: 10504
/* 7466 */    MCD::OPC_Decode, 164, 11, 105, // Opcode: XSMSUBMDP
/* 7470 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 7493
/* 7474 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7477 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7485
/* 7481 */    MCD::OPC_Decode, 186, 11, 106, // Opcode: XVADDSP
/* 7485 */    MCD::OPC_FilterValue, 1, 199, 11, // Skip to: 10504
/* 7489 */    MCD::OPC_Decode, 222, 11, 107, // Opcode: XVMADDASP
/* 7493 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 7516
/* 7497 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7500 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7508
/* 7504 */    MCD::OPC_Decode, 136, 12, 106, // Opcode: XVSUBSP
/* 7508 */    MCD::OPC_FilterValue, 1, 176, 11, // Skip to: 10504
/* 7512 */    MCD::OPC_Decode, 224, 11, 107, // Opcode: XVMADDMSP
/* 7516 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 7539
/* 7520 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7523 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7531
/* 7527 */    MCD::OPC_Decode, 234, 11, 106, // Opcode: XVMULSP
/* 7531 */    MCD::OPC_FilterValue, 1, 153, 11, // Skip to: 10504
/* 7535 */    MCD::OPC_Decode, 230, 11, 107, // Opcode: XVMSUBASP
/* 7539 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 7562
/* 7543 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7546 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7554
/* 7550 */    MCD::OPC_Decode, 220, 11, 106, // Opcode: XVDIVSP
/* 7554 */    MCD::OPC_FilterValue, 1, 130, 11, // Skip to: 10504
/* 7558 */    MCD::OPC_Decode, 232, 11, 107, // Opcode: XVMSUBMSP
/* 7562 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 7585
/* 7566 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7569 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7577
/* 7573 */    MCD::OPC_Decode, 185, 11, 106, // Opcode: XVADDDP
/* 7577 */    MCD::OPC_FilterValue, 1, 107, 11, // Skip to: 10504
/* 7581 */    MCD::OPC_Decode, 221, 11, 107, // Opcode: XVMADDADP
/* 7585 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 7608
/* 7589 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7592 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7600
/* 7596 */    MCD::OPC_Decode, 135, 12, 106, // Opcode: XVSUBDP
/* 7600 */    MCD::OPC_FilterValue, 1, 84, 11, // Skip to: 10504
/* 7604 */    MCD::OPC_Decode, 223, 11, 107, // Opcode: XVMADDMDP
/* 7608 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 7631
/* 7612 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7615 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7623
/* 7619 */    MCD::OPC_Decode, 233, 11, 106, // Opcode: XVMULDP
/* 7623 */    MCD::OPC_FilterValue, 1, 61, 11, // Skip to: 10504
/* 7627 */    MCD::OPC_Decode, 229, 11, 107, // Opcode: XVMSUBADP
/* 7631 */    MCD::OPC_FilterValue, 15, 19, 0, // Skip to: 7654
/* 7635 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7638 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7646
/* 7642 */    MCD::OPC_Decode, 219, 11, 106, // Opcode: XVDIVDP
/* 7646 */    MCD::OPC_FilterValue, 1, 38, 11, // Skip to: 10504
/* 7650 */    MCD::OPC_Decode, 231, 11, 107, // Opcode: XVMSUBMDP
/* 7654 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 7677
/* 7658 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7661 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7669
/* 7665 */    MCD::OPC_Decode, 161, 11, 104, // Opcode: XSMAXDP
/* 7669 */    MCD::OPC_FilterValue, 1, 15, 11, // Skip to: 10504
/* 7673 */    MCD::OPC_Decode, 168, 11, 105, // Opcode: XSNMADDADP
/* 7677 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 7700
/* 7681 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7684 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7692
/* 7688 */    MCD::OPC_Decode, 162, 11, 104, // Opcode: XSMINDP
/* 7692 */    MCD::OPC_FilterValue, 1, 248, 10, // Skip to: 10504
/* 7696 */    MCD::OPC_Decode, 169, 11, 105, // Opcode: XSNMADDMDP
/* 7700 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 7723
/* 7704 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7707 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7715
/* 7711 */    MCD::OPC_Decode, 149, 11, 104, // Opcode: XSCPSGNDP
/* 7715 */    MCD::OPC_FilterValue, 1, 225, 10, // Skip to: 10504
/* 7719 */    MCD::OPC_Decode, 170, 11, 105, // Opcode: XSNMSUBADP
/* 7723 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 7737
/* 7727 */    MCD::OPC_CheckField, 3, 1, 1, 211, 10, // Skip to: 10504
/* 7733 */    MCD::OPC_Decode, 171, 11, 105, // Opcode: XSNMSUBMDP
/* 7737 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7760
/* 7741 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7744 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7752
/* 7748 */    MCD::OPC_Decode, 226, 11, 106, // Opcode: XVMAXSP
/* 7752 */    MCD::OPC_FilterValue, 1, 188, 10, // Skip to: 10504
/* 7756 */    MCD::OPC_Decode, 240, 11, 107, // Opcode: XVNMADDASP
/* 7760 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 7783
/* 7764 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7767 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7775
/* 7771 */    MCD::OPC_Decode, 228, 11, 106, // Opcode: XVMINSP
/* 7775 */    MCD::OPC_FilterValue, 1, 165, 10, // Skip to: 10504
/* 7779 */    MCD::OPC_Decode, 242, 11, 107, // Opcode: XVNMADDMSP
/* 7783 */    MCD::OPC_FilterValue, 26, 19, 0, // Skip to: 7806
/* 7787 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7790 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7798
/* 7794 */    MCD::OPC_Decode, 200, 11, 106, // Opcode: XVCPSGNSP
/* 7798 */    MCD::OPC_FilterValue, 1, 142, 10, // Skip to: 10504
/* 7802 */    MCD::OPC_Decode, 244, 11, 107, // Opcode: XVNMSUBASP
/* 7806 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 7820
/* 7810 */    MCD::OPC_CheckField, 3, 1, 1, 128, 10, // Skip to: 10504
/* 7816 */    MCD::OPC_Decode, 246, 11, 107, // Opcode: XVNMSUBMSP
/* 7820 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 7843
/* 7824 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7827 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7835
/* 7831 */    MCD::OPC_Decode, 225, 11, 106, // Opcode: XVMAXDP
/* 7835 */    MCD::OPC_FilterValue, 1, 105, 10, // Skip to: 10504
/* 7839 */    MCD::OPC_Decode, 239, 11, 107, // Opcode: XVNMADDADP
/* 7843 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 7866
/* 7847 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7850 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7858
/* 7854 */    MCD::OPC_Decode, 227, 11, 106, // Opcode: XVMINDP
/* 7858 */    MCD::OPC_FilterValue, 1, 82, 10, // Skip to: 10504
/* 7862 */    MCD::OPC_Decode, 241, 11, 107, // Opcode: XVNMADDMDP
/* 7866 */    MCD::OPC_FilterValue, 30, 19, 0, // Skip to: 7889
/* 7870 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7873 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7881
/* 7877 */    MCD::OPC_Decode, 199, 11, 106, // Opcode: XVCPSGNDP
/* 7881 */    MCD::OPC_FilterValue, 1, 59, 10, // Skip to: 10504
/* 7885 */    MCD::OPC_Decode, 243, 11, 107, // Opcode: XVNMSUBADP
/* 7889 */    MCD::OPC_FilterValue, 31, 51, 10, // Skip to: 10504
/* 7893 */    MCD::OPC_CheckField, 3, 1, 1, 45, 10, // Skip to: 10504
/* 7899 */    MCD::OPC_Decode, 245, 11, 107, // Opcode: XVNMSUBMDP
/* 7903 */    MCD::OPC_FilterValue, 1, 130, 1, // Skip to: 8293
/* 7907 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 7910 */    MCD::OPC_FilterValue, 0, 100, 0, // Skip to: 8014
/* 7914 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7917 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 7955
/* 7921 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 7924 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7932
/* 7928 */    MCD::OPC_Decode, 154, 12, 108, // Opcode: XXSLDWI
/* 7932 */    MCD::OPC_FilterValue, 1, 8, 10, // Skip to: 10504
/* 7936 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 7939 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7947
/* 7943 */    MCD::OPC_Decode, 141, 12, 106, // Opcode: XXLAND
/* 7947 */    MCD::OPC_FilterValue, 1, 249, 9, // Skip to: 10504
/* 7951 */    MCD::OPC_Decode, 145, 12, 106, // Opcode: XXLNOR
/* 7955 */    MCD::OPC_FilterValue, 1, 241, 9, // Skip to: 10504
/* 7959 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 7962 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 7982
/* 7966 */    MCD::OPC_CheckField, 21, 2, 0, 228, 9, // Skip to: 10504
/* 7972 */    MCD::OPC_CheckField, 0, 1, 0, 222, 9, // Skip to: 10504
/* 7978 */    MCD::OPC_Decode, 148, 11, 109, // Opcode: XSCMPUDP
/* 7982 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7990
/* 7986 */    MCD::OPC_Decode, 189, 11, 106, // Opcode: XVCMPEQSP
/* 7990 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7998
/* 7994 */    MCD::OPC_Decode, 187, 11, 106, // Opcode: XVCMPEQDP
/* 7998 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 8006
/* 8002 */    MCD::OPC_Decode, 190, 11, 106, // Opcode: XVCMPEQSPo
/* 8006 */    MCD::OPC_FilterValue, 7, 190, 9, // Skip to: 10504
/* 8010 */    MCD::OPC_Decode, 188, 11, 106, // Opcode: XVCMPEQDPo
/* 8014 */    MCD::OPC_FilterValue, 1, 100, 0, // Skip to: 8118
/* 8018 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8021 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 8059
/* 8025 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 8028 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8036
/* 8032 */    MCD::OPC_Decode, 152, 12, 108, // Opcode: XXPERMDI
/* 8036 */    MCD::OPC_FilterValue, 1, 160, 9, // Skip to: 10504
/* 8040 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 8043 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8051
/* 8047 */    MCD::OPC_Decode, 142, 12, 106, // Opcode: XXLANDC
/* 8051 */    MCD::OPC_FilterValue, 1, 145, 9, // Skip to: 10504
/* 8055 */    MCD::OPC_Decode, 147, 12, 106, // Opcode: XXLORC
/* 8059 */    MCD::OPC_FilterValue, 1, 137, 9, // Skip to: 10504
/* 8063 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 8066 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 8086
/* 8070 */    MCD::OPC_CheckField, 21, 2, 0, 124, 9, // Skip to: 10504
/* 8076 */    MCD::OPC_CheckField, 0, 1, 0, 118, 9, // Skip to: 10504
/* 8082 */    MCD::OPC_Decode, 147, 11, 109, // Opcode: XSCMPODP
/* 8086 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 8094
/* 8090 */    MCD::OPC_Decode, 197, 11, 106, // Opcode: XVCMPGTSP
/* 8094 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 8102
/* 8098 */    MCD::OPC_Decode, 195, 11, 106, // Opcode: XVCMPGTDP
/* 8102 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 8110
/* 8106 */    MCD::OPC_Decode, 198, 11, 106, // Opcode: XVCMPGTSPo
/* 8110 */    MCD::OPC_FilterValue, 7, 86, 9, // Skip to: 10504
/* 8114 */    MCD::OPC_Decode, 196, 11, 106, // Opcode: XVCMPGTDPo
/* 8118 */    MCD::OPC_FilterValue, 2, 136, 0, // Skip to: 8258
/* 8122 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 8125 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8139
/* 8129 */    MCD::OPC_CheckField, 3, 1, 0, 65, 9, // Skip to: 10504
/* 8135 */    MCD::OPC_Decode, 150, 12, 106, // Opcode: XXMRGHW
/* 8139 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8153
/* 8143 */    MCD::OPC_CheckField, 3, 1, 0, 51, 9, // Skip to: 10504
/* 8149 */    MCD::OPC_Decode, 151, 12, 106, // Opcode: XXMRGLW
/* 8153 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 8188
/* 8157 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8160 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 8180
/* 8164 */    MCD::OPC_CheckField, 18, 3, 0, 30, 9, // Skip to: 10504
/* 8170 */    MCD::OPC_CheckField, 2, 1, 0, 24, 9, // Skip to: 10504
/* 8176 */    MCD::OPC_Decode, 155, 12, 110, // Opcode: XXSPLTW
/* 8180 */    MCD::OPC_FilterValue, 1, 16, 9, // Skip to: 10504
/* 8184 */    MCD::OPC_Decode, 193, 11, 106, // Opcode: XVCMPGESP
/* 8188 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 8202
/* 8192 */    MCD::OPC_CheckField, 3, 1, 1, 2, 9, // Skip to: 10504
/* 8198 */    MCD::OPC_Decode, 191, 11, 106, // Opcode: XVCMPGEDP
/* 8202 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8216
/* 8206 */    MCD::OPC_CheckField, 3, 1, 0, 244, 8, // Skip to: 10504
/* 8212 */    MCD::OPC_Decode, 146, 12, 106, // Opcode: XXLOR
/* 8216 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 8230
/* 8220 */    MCD::OPC_CheckField, 3, 1, 0, 230, 8, // Skip to: 10504
/* 8226 */    MCD::OPC_Decode, 144, 12, 106, // Opcode: XXLNAND
/* 8230 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 8244
/* 8234 */    MCD::OPC_CheckField, 3, 1, 1, 216, 8, // Skip to: 10504
/* 8240 */    MCD::OPC_Decode, 194, 11, 106, // Opcode: XVCMPGESPo
/* 8244 */    MCD::OPC_FilterValue, 7, 208, 8, // Skip to: 10504
/* 8248 */    MCD::OPC_CheckField, 3, 1, 1, 202, 8, // Skip to: 10504
/* 8254 */    MCD::OPC_Decode, 192, 11, 106, // Opcode: XVCMPGEDPo
/* 8258 */    MCD::OPC_FilterValue, 3, 194, 8, // Skip to: 10504
/* 8262 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 8265 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8279
/* 8269 */    MCD::OPC_CheckField, 3, 1, 0, 181, 8, // Skip to: 10504
/* 8275 */    MCD::OPC_Decode, 149, 12, 106, // Opcode: XXLXOR
/* 8279 */    MCD::OPC_FilterValue, 5, 173, 8, // Skip to: 10504
/* 8283 */    MCD::OPC_CheckField, 3, 1, 0, 167, 8, // Skip to: 10504
/* 8289 */    MCD::OPC_Decode, 143, 12, 106, // Opcode: XXLEQV
/* 8293 */    MCD::OPC_FilterValue, 2, 119, 4, // Skip to: 9440
/* 8297 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8300 */    MCD::OPC_FilterValue, 4, 59, 0, // Skip to: 8363
/* 8304 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8307 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8321
/* 8311 */    MCD::OPC_CheckField, 16, 5, 0, 139, 8, // Skip to: 10504
/* 8317 */    MCD::OPC_Decode, 154, 11, 111, // Opcode: XSCVDPUXWS
/* 8321 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8335
/* 8325 */    MCD::OPC_CheckField, 16, 5, 0, 125, 8, // Skip to: 10504
/* 8331 */    MCD::OPC_Decode, 172, 11, 111, // Opcode: XSRDPI
/* 8335 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8349
/* 8339 */    MCD::OPC_CheckField, 16, 5, 0, 111, 8, // Skip to: 10504
/* 8345 */    MCD::OPC_Decode, 178, 11, 111, // Opcode: XSRSQRTEDP
/* 8349 */    MCD::OPC_FilterValue, 3, 103, 8, // Skip to: 10504
/* 8353 */    MCD::OPC_CheckField, 16, 5, 0, 97, 8, // Skip to: 10504
/* 8359 */    MCD::OPC_Decode, 179, 11, 111, // Opcode: XSSQRTDP
/* 8363 */    MCD::OPC_FilterValue, 5, 45, 0, // Skip to: 8412
/* 8367 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8370 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8384
/* 8374 */    MCD::OPC_CheckField, 16, 5, 0, 76, 8, // Skip to: 10504
/* 8380 */    MCD::OPC_Decode, 152, 11, 111, // Opcode: XSCVDPSXWS
/* 8384 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8398
/* 8388 */    MCD::OPC_CheckField, 16, 5, 0, 62, 8, // Skip to: 10504
/* 8394 */    MCD::OPC_Decode, 176, 11, 111, // Opcode: XSRDPIZ
/* 8398 */    MCD::OPC_FilterValue, 2, 54, 8, // Skip to: 10504
/* 8402 */    MCD::OPC_CheckField, 16, 5, 0, 48, 8, // Skip to: 10504
/* 8408 */    MCD::OPC_Decode, 177, 11, 111, // Opcode: XSREDP
/* 8412 */    MCD::OPC_FilterValue, 6, 51, 0, // Skip to: 8467
/* 8416 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8419 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8433
/* 8423 */    MCD::OPC_CheckField, 16, 5, 0, 27, 8, // Skip to: 10504
/* 8429 */    MCD::OPC_Decode, 175, 11, 111, // Opcode: XSRDPIP
/* 8433 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 8453
/* 8437 */    MCD::OPC_CheckField, 16, 7, 0, 13, 8, // Skip to: 10504
/* 8443 */    MCD::OPC_CheckField, 0, 1, 0, 7, 8, // Skip to: 10504
/* 8449 */    MCD::OPC_Decode, 182, 11, 112, // Opcode: XSTSQRTDP
/* 8453 */    MCD::OPC_FilterValue, 3, 255, 7, // Skip to: 10504
/* 8457 */    MCD::OPC_CheckField, 16, 5, 0, 249, 7, // Skip to: 10504
/* 8463 */    MCD::OPC_Decode, 173, 11, 111, // Opcode: XSRDPIC
/* 8467 */    MCD::OPC_FilterValue, 7, 43, 0, // Skip to: 8514
/* 8471 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8474 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 8494
/* 8478 */    MCD::OPC_CheckField, 16, 5, 0, 228, 7, // Skip to: 10504
/* 8484 */    MCD::OPC_CheckField, 2, 1, 1, 222, 7, // Skip to: 10504
/* 8490 */    MCD::OPC_Decode, 174, 11, 111, // Opcode: XSRDPIM
/* 8494 */    MCD::OPC_FilterValue, 1, 214, 7, // Skip to: 10504
/* 8498 */    MCD::OPC_CheckField, 21, 2, 0, 208, 7, // Skip to: 10504
/* 8504 */    MCD::OPC_CheckField, 0, 1, 0, 202, 7, // Skip to: 10504
/* 8510 */    MCD::OPC_Decode, 181, 11, 109, // Opcode: XSTDIVDP
/* 8514 */    MCD::OPC_FilterValue, 8, 59, 0, // Skip to: 8577
/* 8518 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8521 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8535
/* 8525 */    MCD::OPC_CheckField, 16, 5, 0, 181, 7, // Skip to: 10504
/* 8531 */    MCD::OPC_Decode, 210, 11, 113, // Opcode: XVCVSPUXWS
/* 8535 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8549
/* 8539 */    MCD::OPC_CheckField, 16, 5, 0, 167, 7, // Skip to: 10504
/* 8545 */    MCD::OPC_Decode, 254, 11, 113, // Opcode: XVRSPI
/* 8549 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8563
/* 8553 */    MCD::OPC_CheckField, 16, 5, 0, 153, 7, // Skip to: 10504
/* 8559 */    MCD::OPC_Decode, 132, 12, 113, // Opcode: XVRSQRTESP
/* 8563 */    MCD::OPC_FilterValue, 3, 145, 7, // Skip to: 10504
/* 8567 */    MCD::OPC_CheckField, 16, 5, 0, 139, 7, // Skip to: 10504
/* 8573 */    MCD::OPC_Decode, 134, 12, 113, // Opcode: XVSQRTSP
/* 8577 */    MCD::OPC_FilterValue, 9, 45, 0, // Skip to: 8626
/* 8581 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8584 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8598
/* 8588 */    MCD::OPC_CheckField, 16, 5, 0, 118, 7, // Skip to: 10504
/* 8594 */    MCD::OPC_Decode, 208, 11, 113, // Opcode: XVCVSPSXWS
/* 8598 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8612
/* 8602 */    MCD::OPC_CheckField, 16, 5, 0, 104, 7, // Skip to: 10504
/* 8608 */    MCD::OPC_Decode, 130, 12, 113, // Opcode: XVRSPIZ
/* 8612 */    MCD::OPC_FilterValue, 2, 96, 7, // Skip to: 10504
/* 8616 */    MCD::OPC_CheckField, 16, 5, 0, 90, 7, // Skip to: 10504
/* 8622 */    MCD::OPC_Decode, 253, 11, 113, // Opcode: XVRESP
/* 8626 */    MCD::OPC_FilterValue, 10, 65, 0, // Skip to: 8695
/* 8630 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8633 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8647
/* 8637 */    MCD::OPC_CheckField, 16, 5, 0, 69, 7, // Skip to: 10504
/* 8643 */    MCD::OPC_Decode, 218, 11, 113, // Opcode: XVCVUXWSP
/* 8647 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8661
/* 8651 */    MCD::OPC_CheckField, 16, 5, 0, 55, 7, // Skip to: 10504
/* 8657 */    MCD::OPC_Decode, 129, 12, 113, // Opcode: XVRSPIP
/* 8661 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 8681
/* 8665 */    MCD::OPC_CheckField, 16, 7, 0, 41, 7, // Skip to: 10504
/* 8671 */    MCD::OPC_CheckField, 0, 1, 0, 35, 7, // Skip to: 10504
/* 8677 */    MCD::OPC_Decode, 140, 12, 114, // Opcode: XVTSQRTSP
/* 8681 */    MCD::OPC_FilterValue, 3, 27, 7, // Skip to: 10504
/* 8685 */    MCD::OPC_CheckField, 16, 5, 0, 21, 7, // Skip to: 10504
/* 8691 */    MCD::OPC_Decode, 255, 11, 113, // Opcode: XVRSPIC
/* 8695 */    MCD::OPC_FilterValue, 11, 58, 0, // Skip to: 8757
/* 8699 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8702 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 8737
/* 8706 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 8709 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8723
/* 8713 */    MCD::OPC_CheckField, 16, 5, 0, 249, 6, // Skip to: 10504
/* 8719 */    MCD::OPC_Decode, 214, 11, 113, // Opcode: XVCVSXWSP
/* 8723 */    MCD::OPC_FilterValue, 1, 241, 6, // Skip to: 10504
/* 8727 */    MCD::OPC_CheckField, 16, 5, 0, 235, 6, // Skip to: 10504
/* 8733 */    MCD::OPC_Decode, 128, 12, 113, // Opcode: XVRSPIM
/* 8737 */    MCD::OPC_FilterValue, 1, 227, 6, // Skip to: 10504
/* 8741 */    MCD::OPC_CheckField, 21, 2, 0, 221, 6, // Skip to: 10504
/* 8747 */    MCD::OPC_CheckField, 0, 1, 0, 215, 6, // Skip to: 10504
/* 8753 */    MCD::OPC_Decode, 138, 12, 115, // Opcode: XVTDIVSP
/* 8757 */    MCD::OPC_FilterValue, 12, 59, 0, // Skip to: 8820
/* 8761 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8764 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8778
/* 8768 */    MCD::OPC_CheckField, 16, 5, 0, 194, 6, // Skip to: 10504
/* 8774 */    MCD::OPC_Decode, 205, 11, 113, // Opcode: XVCVDPUXWS
/* 8778 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8792
/* 8782 */    MCD::OPC_CheckField, 16, 5, 0, 180, 6, // Skip to: 10504
/* 8788 */    MCD::OPC_Decode, 247, 11, 113, // Opcode: XVRDPI
/* 8792 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8806
/* 8796 */    MCD::OPC_CheckField, 16, 5, 0, 166, 6, // Skip to: 10504
/* 8802 */    MCD::OPC_Decode, 131, 12, 113, // Opcode: XVRSQRTEDP
/* 8806 */    MCD::OPC_FilterValue, 3, 158, 6, // Skip to: 10504
/* 8810 */    MCD::OPC_CheckField, 16, 5, 0, 152, 6, // Skip to: 10504
/* 8816 */    MCD::OPC_Decode, 133, 12, 113, // Opcode: XVSQRTDP
/* 8820 */    MCD::OPC_FilterValue, 13, 45, 0, // Skip to: 8869
/* 8824 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8827 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8841
/* 8831 */    MCD::OPC_CheckField, 16, 5, 0, 131, 6, // Skip to: 10504
/* 8837 */    MCD::OPC_Decode, 203, 11, 113, // Opcode: XVCVDPSXWS
/* 8841 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8855
/* 8845 */    MCD::OPC_CheckField, 16, 5, 0, 117, 6, // Skip to: 10504
/* 8851 */    MCD::OPC_Decode, 251, 11, 113, // Opcode: XVRDPIZ
/* 8855 */    MCD::OPC_FilterValue, 2, 109, 6, // Skip to: 10504
/* 8859 */    MCD::OPC_CheckField, 16, 5, 0, 103, 6, // Skip to: 10504
/* 8865 */    MCD::OPC_Decode, 252, 11, 113, // Opcode: XVREDP
/* 8869 */    MCD::OPC_FilterValue, 14, 65, 0, // Skip to: 8938
/* 8873 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8876 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8890
/* 8880 */    MCD::OPC_CheckField, 16, 5, 0, 82, 6, // Skip to: 10504
/* 8886 */    MCD::OPC_Decode, 217, 11, 113, // Opcode: XVCVUXWDP
/* 8890 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8904
/* 8894 */    MCD::OPC_CheckField, 16, 5, 0, 68, 6, // Skip to: 10504
/* 8900 */    MCD::OPC_Decode, 250, 11, 113, // Opcode: XVRDPIP
/* 8904 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 8924
/* 8908 */    MCD::OPC_CheckField, 16, 7, 0, 54, 6, // Skip to: 10504
/* 8914 */    MCD::OPC_CheckField, 0, 1, 0, 48, 6, // Skip to: 10504
/* 8920 */    MCD::OPC_Decode, 139, 12, 114, // Opcode: XVTSQRTDP
/* 8924 */    MCD::OPC_FilterValue, 3, 40, 6, // Skip to: 10504
/* 8928 */    MCD::OPC_CheckField, 16, 5, 0, 34, 6, // Skip to: 10504
/* 8934 */    MCD::OPC_Decode, 248, 11, 113, // Opcode: XVRDPIC
/* 8938 */    MCD::OPC_FilterValue, 15, 58, 0, // Skip to: 9000
/* 8942 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8945 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 8980
/* 8949 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 8952 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8966
/* 8956 */    MCD::OPC_CheckField, 16, 5, 0, 6, 6, // Skip to: 10504
/* 8962 */    MCD::OPC_Decode, 213, 11, 113, // Opcode: XVCVSXWDP
/* 8966 */    MCD::OPC_FilterValue, 1, 254, 5, // Skip to: 10504
/* 8970 */    MCD::OPC_CheckField, 16, 5, 0, 248, 5, // Skip to: 10504
/* 8976 */    MCD::OPC_Decode, 249, 11, 113, // Opcode: XVRDPIM
/* 8980 */    MCD::OPC_FilterValue, 1, 240, 5, // Skip to: 10504
/* 8984 */    MCD::OPC_CheckField, 21, 2, 0, 234, 5, // Skip to: 10504
/* 8990 */    MCD::OPC_CheckField, 0, 1, 0, 228, 5, // Skip to: 10504
/* 8996 */    MCD::OPC_Decode, 137, 12, 115, // Opcode: XVTDIVDP
/* 9000 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 9020
/* 9004 */    MCD::OPC_CheckField, 16, 5, 0, 214, 5, // Skip to: 10504
/* 9010 */    MCD::OPC_CheckField, 2, 2, 1, 208, 5, // Skip to: 10504
/* 9016 */    MCD::OPC_Decode, 150, 11, 111, // Opcode: XSCVDPSP
/* 9020 */    MCD::OPC_FilterValue, 20, 31, 0, // Skip to: 9055
/* 9024 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9027 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9041
/* 9031 */    MCD::OPC_CheckField, 16, 5, 0, 187, 5, // Skip to: 10504
/* 9037 */    MCD::OPC_Decode, 153, 11, 111, // Opcode: XSCVDPUXDS
/* 9041 */    MCD::OPC_FilterValue, 1, 179, 5, // Skip to: 10504
/* 9045 */    MCD::OPC_CheckField, 16, 5, 0, 173, 5, // Skip to: 10504
/* 9051 */    MCD::OPC_Decode, 155, 11, 111, // Opcode: XSCVSPDP
/* 9055 */    MCD::OPC_FilterValue, 21, 31, 0, // Skip to: 9090
/* 9059 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9062 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9076
/* 9066 */    MCD::OPC_CheckField, 16, 5, 0, 152, 5, // Skip to: 10504
/* 9072 */    MCD::OPC_Decode, 151, 11, 111, // Opcode: XSCVDPSXDS
/* 9076 */    MCD::OPC_FilterValue, 1, 144, 5, // Skip to: 10504
/* 9080 */    MCD::OPC_CheckField, 16, 5, 0, 138, 5, // Skip to: 10504
/* 9086 */    MCD::OPC_Decode, 145, 11, 111, // Opcode: XSABSDP
/* 9090 */    MCD::OPC_FilterValue, 22, 31, 0, // Skip to: 9125
/* 9094 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9097 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9111
/* 9101 */    MCD::OPC_CheckField, 16, 5, 0, 117, 5, // Skip to: 10504
/* 9107 */    MCD::OPC_Decode, 157, 11, 111, // Opcode: XSCVUXDDP
/* 9111 */    MCD::OPC_FilterValue, 1, 109, 5, // Skip to: 10504
/* 9115 */    MCD::OPC_CheckField, 16, 5, 0, 103, 5, // Skip to: 10504
/* 9121 */    MCD::OPC_Decode, 166, 11, 111, // Opcode: XSNABSDP
/* 9125 */    MCD::OPC_FilterValue, 23, 31, 0, // Skip to: 9160
/* 9129 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9132 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9146
/* 9136 */    MCD::OPC_CheckField, 16, 5, 0, 82, 5, // Skip to: 10504
/* 9142 */    MCD::OPC_Decode, 156, 11, 111, // Opcode: XSCVSXDDP
/* 9146 */    MCD::OPC_FilterValue, 1, 74, 5, // Skip to: 10504
/* 9150 */    MCD::OPC_CheckField, 16, 5, 0, 68, 5, // Skip to: 10504
/* 9156 */    MCD::OPC_Decode, 167, 11, 111, // Opcode: XSNEGDP
/* 9160 */    MCD::OPC_FilterValue, 24, 31, 0, // Skip to: 9195
/* 9164 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9167 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9181
/* 9171 */    MCD::OPC_CheckField, 16, 5, 0, 47, 5, // Skip to: 10504
/* 9177 */    MCD::OPC_Decode, 209, 11, 113, // Opcode: XVCVSPUXDS
/* 9181 */    MCD::OPC_FilterValue, 1, 39, 5, // Skip to: 10504
/* 9185 */    MCD::OPC_CheckField, 16, 5, 0, 33, 5, // Skip to: 10504
/* 9191 */    MCD::OPC_Decode, 201, 11, 113, // Opcode: XVCVDPSP
/* 9195 */    MCD::OPC_FilterValue, 25, 31, 0, // Skip to: 9230
/* 9199 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9202 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9216
/* 9206 */    MCD::OPC_CheckField, 16, 5, 0, 12, 5, // Skip to: 10504
/* 9212 */    MCD::OPC_Decode, 207, 11, 113, // Opcode: XVCVSPSXDS
/* 9216 */    MCD::OPC_FilterValue, 1, 4, 5, // Skip to: 10504
/* 9220 */    MCD::OPC_CheckField, 16, 5, 0, 254, 4, // Skip to: 10504
/* 9226 */    MCD::OPC_Decode, 184, 11, 113, // Opcode: XVABSSP
/* 9230 */    MCD::OPC_FilterValue, 26, 31, 0, // Skip to: 9265
/* 9234 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9237 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9251
/* 9241 */    MCD::OPC_CheckField, 16, 5, 0, 233, 4, // Skip to: 10504
/* 9247 */    MCD::OPC_Decode, 216, 11, 113, // Opcode: XVCVUXDSP
/* 9251 */    MCD::OPC_FilterValue, 1, 225, 4, // Skip to: 10504
/* 9255 */    MCD::OPC_CheckField, 16, 5, 0, 219, 4, // Skip to: 10504
/* 9261 */    MCD::OPC_Decode, 236, 11, 113, // Opcode: XVNABSSP
/* 9265 */    MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 9300
/* 9269 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9272 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9286
/* 9276 */    MCD::OPC_CheckField, 16, 5, 0, 198, 4, // Skip to: 10504
/* 9282 */    MCD::OPC_Decode, 212, 11, 113, // Opcode: XVCVSXDSP
/* 9286 */    MCD::OPC_FilterValue, 1, 190, 4, // Skip to: 10504
/* 9290 */    MCD::OPC_CheckField, 16, 5, 0, 184, 4, // Skip to: 10504
/* 9296 */    MCD::OPC_Decode, 238, 11, 113, // Opcode: XVNEGSP
/* 9300 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 9335
/* 9304 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9307 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9321
/* 9311 */    MCD::OPC_CheckField, 16, 5, 0, 163, 4, // Skip to: 10504
/* 9317 */    MCD::OPC_Decode, 204, 11, 113, // Opcode: XVCVDPUXDS
/* 9321 */    MCD::OPC_FilterValue, 1, 155, 4, // Skip to: 10504
/* 9325 */    MCD::OPC_CheckField, 16, 5, 0, 149, 4, // Skip to: 10504
/* 9331 */    MCD::OPC_Decode, 206, 11, 113, // Opcode: XVCVSPDP
/* 9335 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 9370
/* 9339 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9342 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9356
/* 9346 */    MCD::OPC_CheckField, 16, 5, 0, 128, 4, // Skip to: 10504
/* 9352 */    MCD::OPC_Decode, 202, 11, 113, // Opcode: XVCVDPSXDS
/* 9356 */    MCD::OPC_FilterValue, 1, 120, 4, // Skip to: 10504
/* 9360 */    MCD::OPC_CheckField, 16, 5, 0, 114, 4, // Skip to: 10504
/* 9366 */    MCD::OPC_Decode, 183, 11, 113, // Opcode: XVABSDP
/* 9370 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 9405
/* 9374 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9377 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9391
/* 9381 */    MCD::OPC_CheckField, 16, 5, 0, 93, 4, // Skip to: 10504
/* 9387 */    MCD::OPC_Decode, 215, 11, 113, // Opcode: XVCVUXDDP
/* 9391 */    MCD::OPC_FilterValue, 1, 85, 4, // Skip to: 10504
/* 9395 */    MCD::OPC_CheckField, 16, 5, 0, 79, 4, // Skip to: 10504
/* 9401 */    MCD::OPC_Decode, 235, 11, 113, // Opcode: XVNABSDP
/* 9405 */    MCD::OPC_FilterValue, 31, 71, 4, // Skip to: 10504
/* 9409 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 9412 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9426
/* 9416 */    MCD::OPC_CheckField, 16, 5, 0, 58, 4, // Skip to: 10504
/* 9422 */    MCD::OPC_Decode, 211, 11, 113, // Opcode: XVCVSXDDP
/* 9426 */    MCD::OPC_FilterValue, 1, 50, 4, // Skip to: 10504
/* 9430 */    MCD::OPC_CheckField, 16, 5, 0, 44, 4, // Skip to: 10504
/* 9436 */    MCD::OPC_Decode, 237, 11, 113, // Opcode: XVNEGDP
/* 9440 */    MCD::OPC_FilterValue, 3, 36, 4, // Skip to: 10504
/* 9444 */    MCD::OPC_Decode, 153, 12, 116, // Opcode: XXSEL
/* 9448 */    MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 9471
/* 9452 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 9455 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9463
/* 9459 */    MCD::OPC_Decode, 189, 8, 98, // Opcode: STD
/* 9463 */    MCD::OPC_FilterValue, 1, 13, 4, // Skip to: 10504
/* 9467 */    MCD::OPC_Decode, 193, 8, 98, // Opcode: STDU
/* 9471 */    MCD::OPC_FilterValue, 63, 5, 4, // Skip to: 10504
/* 9475 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 9478 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 9519
/* 9482 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9485 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9499
/* 9489 */    MCD::OPC_CheckField, 21, 2, 0, 241, 3, // Skip to: 10504
/* 9495 */    MCD::OPC_Decode, 247, 3, 117, // Opcode: FCMPUS
/* 9499 */    MCD::OPC_FilterValue, 2, 233, 3, // Skip to: 10504
/* 9503 */    MCD::OPC_CheckField, 21, 2, 0, 227, 3, // Skip to: 10504
/* 9509 */    MCD::OPC_CheckField, 11, 7, 0, 221, 3, // Skip to: 10504
/* 9515 */    MCD::OPC_Decode, 193, 5, 25, // Opcode: MCRFS
/* 9519 */    MCD::OPC_FilterValue, 12, 45, 0, // Skip to: 9568
/* 9523 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 9526 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9540
/* 9530 */    MCD::OPC_CheckField, 12, 9, 0, 200, 3, // Skip to: 10504
/* 9536 */    MCD::OPC_Decode, 226, 5, 87, // Opcode: MTFSB1
/* 9540 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 9554
/* 9544 */    MCD::OPC_CheckField, 12, 9, 0, 186, 3, // Skip to: 10504
/* 9550 */    MCD::OPC_Decode, 225, 5, 87, // Opcode: MTFSB0
/* 9554 */    MCD::OPC_FilterValue, 4, 178, 3, // Skip to: 10504
/* 9558 */    MCD::OPC_CheckField, 17, 6, 0, 172, 3, // Skip to: 10504
/* 9564 */    MCD::OPC_Decode, 228, 5, 118, // Opcode: MTFSFI
/* 9568 */    MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 9588
/* 9572 */    MCD::OPC_CheckField, 17, 6, 0, 158, 3, // Skip to: 10504
/* 9578 */    MCD::OPC_CheckField, 6, 6, 4, 152, 3, // Skip to: 10504
/* 9584 */    MCD::OPC_Decode, 229, 5, 118, // Opcode: MTFSFIo
/* 9588 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 9617
/* 9592 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9595 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 9609
/* 9599 */    MCD::OPC_CheckField, 11, 10, 0, 131, 3, // Skip to: 10504
/* 9605 */    MCD::OPC_Decode, 199, 5, 119, // Opcode: MFFS
/* 9609 */    MCD::OPC_FilterValue, 22, 123, 3, // Skip to: 10504
/* 9613 */    MCD::OPC_Decode, 227, 5, 120, // Opcode: MTFSF
/* 9617 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 9646
/* 9621 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9624 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 9638
/* 9628 */    MCD::OPC_CheckField, 11, 10, 0, 102, 3, // Skip to: 10504
/* 9634 */    MCD::OPC_Decode, 200, 5, 119, // Opcode: MFFSo
/* 9638 */    MCD::OPC_FilterValue, 22, 94, 3, // Skip to: 10504
/* 9642 */    MCD::OPC_Decode, 231, 5, 120, // Opcode: MTFSFo
/* 9646 */    MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 9773
/* 9650 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9653 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9661
/* 9657 */    MCD::OPC_Decode, 250, 3, 100, // Opcode: FCPSGNS
/* 9661 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9675
/* 9665 */    MCD::OPC_CheckField, 16, 5, 0, 65, 3, // Skip to: 10504
/* 9671 */    MCD::OPC_Decode, 160, 4, 101, // Opcode: FNEGS
/* 9675 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 9689
/* 9679 */    MCD::OPC_CheckField, 16, 5, 0, 51, 3, // Skip to: 10504
/* 9685 */    MCD::OPC_Decode, 144, 4, 101, // Opcode: FMR
/* 9689 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 9703
/* 9693 */    MCD::OPC_CheckField, 16, 5, 0, 37, 3, // Skip to: 10504
/* 9699 */    MCD::OPC_Decode, 156, 4, 101, // Opcode: FNABSS
/* 9703 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 9717
/* 9707 */    MCD::OPC_CheckField, 16, 5, 0, 23, 3, // Skip to: 10504
/* 9713 */    MCD::OPC_Decode, 231, 3, 101, // Opcode: FABSS
/* 9717 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 9731
/* 9721 */    MCD::OPC_CheckField, 16, 5, 0, 9, 3, // Skip to: 10504
/* 9727 */    MCD::OPC_Decode, 180, 4, 101, // Opcode: FRINS
/* 9731 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 9745
/* 9735 */    MCD::OPC_CheckField, 16, 5, 0, 251, 2, // Skip to: 10504
/* 9741 */    MCD::OPC_Decode, 188, 4, 101, // Opcode: FRIZS
/* 9745 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 9759
/* 9749 */    MCD::OPC_CheckField, 16, 5, 0, 237, 2, // Skip to: 10504
/* 9755 */    MCD::OPC_Decode, 184, 4, 101, // Opcode: FRIPS
/* 9759 */    MCD::OPC_FilterValue, 15, 229, 2, // Skip to: 10504
/* 9763 */    MCD::OPC_CheckField, 16, 5, 0, 223, 2, // Skip to: 10504
/* 9769 */    MCD::OPC_Decode, 176, 4, 101, // Opcode: FRIMS
/* 9773 */    MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 9900
/* 9777 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9780 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9788
/* 9784 */    MCD::OPC_Decode, 251, 3, 100, // Opcode: FCPSGNSo
/* 9788 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9802
/* 9792 */    MCD::OPC_CheckField, 16, 5, 0, 194, 2, // Skip to: 10504
/* 9798 */    MCD::OPC_Decode, 161, 4, 101, // Opcode: FNEGSo
/* 9802 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 9816
/* 9806 */    MCD::OPC_CheckField, 16, 5, 0, 180, 2, // Skip to: 10504
/* 9812 */    MCD::OPC_Decode, 145, 4, 101, // Opcode: FMRo
/* 9816 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 9830
/* 9820 */    MCD::OPC_CheckField, 16, 5, 0, 166, 2, // Skip to: 10504
/* 9826 */    MCD::OPC_Decode, 157, 4, 101, // Opcode: FNABSSo
/* 9830 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 9844
/* 9834 */    MCD::OPC_CheckField, 16, 5, 0, 152, 2, // Skip to: 10504
/* 9840 */    MCD::OPC_Decode, 232, 3, 101, // Opcode: FABSSo
/* 9844 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 9858
/* 9848 */    MCD::OPC_CheckField, 16, 5, 0, 138, 2, // Skip to: 10504
/* 9854 */    MCD::OPC_Decode, 181, 4, 101, // Opcode: FRINSo
/* 9858 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 9872
/* 9862 */    MCD::OPC_CheckField, 16, 5, 0, 124, 2, // Skip to: 10504
/* 9868 */    MCD::OPC_Decode, 189, 4, 101, // Opcode: FRIZSo
/* 9872 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 9886
/* 9876 */    MCD::OPC_CheckField, 16, 5, 0, 110, 2, // Skip to: 10504
/* 9882 */    MCD::OPC_Decode, 185, 4, 101, // Opcode: FRIPSo
/* 9886 */    MCD::OPC_FilterValue, 15, 102, 2, // Skip to: 10504
/* 9890 */    MCD::OPC_CheckField, 16, 5, 0, 96, 2, // Skip to: 10504
/* 9896 */    MCD::OPC_Decode, 177, 4, 101, // Opcode: FRIMSo
/* 9900 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 9920
/* 9904 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 10504
/* 9910 */    MCD::OPC_CheckField, 6, 5, 0, 76, 2, // Skip to: 10504
/* 9916 */    MCD::OPC_Decode, 190, 4, 99, // Opcode: FRSP
/* 9920 */    MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 9940
/* 9924 */    MCD::OPC_CheckField, 16, 5, 0, 62, 2, // Skip to: 10504
/* 9930 */    MCD::OPC_CheckField, 6, 5, 0, 56, 2, // Skip to: 10504
/* 9936 */    MCD::OPC_Decode, 191, 4, 99, // Opcode: FRSPo
/* 9940 */    MCD::OPC_FilterValue, 28, 59, 0, // Skip to: 10003
/* 9944 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9947 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9961
/* 9951 */    MCD::OPC_CheckField, 16, 5, 0, 35, 2, // Skip to: 10504
/* 9957 */    MCD::OPC_Decode, 130, 4, 121, // Opcode: FCTIW
/* 9961 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 9975
/* 9965 */    MCD::OPC_CheckField, 16, 5, 0, 21, 2, // Skip to: 10504
/* 9971 */    MCD::OPC_Decode, 252, 3, 121, // Opcode: FCTID
/* 9975 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 9989
/* 9979 */    MCD::OPC_CheckField, 16, 5, 0, 7, 2, // Skip to: 10504
/* 9985 */    MCD::OPC_Decode, 238, 3, 121, // Opcode: FCFID
/* 9989 */    MCD::OPC_FilterValue, 30, 255, 1, // Skip to: 10504
/* 9993 */    MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 10504
/* 9999 */    MCD::OPC_Decode, 241, 3, 121, // Opcode: FCFIDU
/* 10003 */   MCD::OPC_FilterValue, 29, 59, 0, // Skip to: 10066
/* 10007 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10010 */   MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 10024
/* 10014 */   MCD::OPC_CheckField, 16, 5, 0, 228, 1, // Skip to: 10504
/* 10020 */   MCD::OPC_Decode, 135, 4, 121, // Opcode: FCTIWo
/* 10024 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 10038
/* 10028 */   MCD::OPC_CheckField, 16, 5, 0, 214, 1, // Skip to: 10504
/* 10034 */   MCD::OPC_Decode, 129, 4, 121, // Opcode: FCTIDo
/* 10038 */   MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 10052
/* 10042 */   MCD::OPC_CheckField, 16, 5, 0, 200, 1, // Skip to: 10504
/* 10048 */   MCD::OPC_Decode, 245, 3, 121, // Opcode: FCFIDo
/* 10052 */   MCD::OPC_FilterValue, 30, 192, 1, // Skip to: 10504
/* 10056 */   MCD::OPC_CheckField, 16, 5, 0, 186, 1, // Skip to: 10504
/* 10062 */   MCD::OPC_Decode, 244, 3, 121, // Opcode: FCFIDUo
/* 10066 */   MCD::OPC_FilterValue, 30, 59, 0, // Skip to: 10129
/* 10070 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10073 */   MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 10087
/* 10077 */   MCD::OPC_CheckField, 16, 5, 0, 165, 1, // Skip to: 10504
/* 10083 */   MCD::OPC_Decode, 133, 4, 121, // Opcode: FCTIWZ
/* 10087 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10101
/* 10091 */   MCD::OPC_CheckField, 16, 5, 0, 151, 1, // Skip to: 10504
/* 10097 */   MCD::OPC_Decode, 131, 4, 121, // Opcode: FCTIWUZ
/* 10101 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 10115
/* 10105 */   MCD::OPC_CheckField, 16, 5, 0, 137, 1, // Skip to: 10504
/* 10111 */   MCD::OPC_Decode, 255, 3, 121, // Opcode: FCTIDZ
/* 10115 */   MCD::OPC_FilterValue, 29, 129, 1, // Skip to: 10504
/* 10119 */   MCD::OPC_CheckField, 16, 5, 0, 123, 1, // Skip to: 10504
/* 10125 */   MCD::OPC_Decode, 253, 3, 121, // Opcode: FCTIDUZ
/* 10129 */   MCD::OPC_FilterValue, 31, 59, 0, // Skip to: 10192
/* 10133 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10136 */   MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 10150
/* 10140 */   MCD::OPC_CheckField, 16, 5, 0, 102, 1, // Skip to: 10504
/* 10146 */   MCD::OPC_Decode, 134, 4, 121, // Opcode: FCTIWZo
/* 10150 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10164
/* 10154 */   MCD::OPC_CheckField, 16, 5, 0, 88, 1, // Skip to: 10504
/* 10160 */   MCD::OPC_Decode, 132, 4, 121, // Opcode: FCTIWUZo
/* 10164 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 10178
/* 10168 */   MCD::OPC_CheckField, 16, 5, 0, 74, 1, // Skip to: 10504
/* 10174 */   MCD::OPC_Decode, 128, 4, 121, // Opcode: FCTIDZo
/* 10178 */   MCD::OPC_FilterValue, 29, 66, 1, // Skip to: 10504
/* 10182 */   MCD::OPC_CheckField, 16, 5, 0, 60, 1, // Skip to: 10504
/* 10188 */   MCD::OPC_Decode, 254, 3, 121, // Opcode: FCTIDUZo
/* 10192 */   MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 10206
/* 10196 */   MCD::OPC_CheckField, 6, 5, 0, 46, 1, // Skip to: 10504
/* 10202 */   MCD::OPC_Decode, 136, 4, 122, // Opcode: FDIV
/* 10206 */   MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 10220
/* 10210 */   MCD::OPC_CheckField, 6, 5, 0, 32, 1, // Skip to: 10504
/* 10216 */   MCD::OPC_Decode, 139, 4, 122, // Opcode: FDIVo
/* 10220 */   MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 10234
/* 10224 */   MCD::OPC_CheckField, 6, 5, 0, 18, 1, // Skip to: 10504
/* 10230 */   MCD::OPC_Decode, 204, 4, 122, // Opcode: FSUB
/* 10234 */   MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 10248
/* 10238 */   MCD::OPC_CheckField, 6, 5, 0, 4, 1, // Skip to: 10504
/* 10244 */   MCD::OPC_Decode, 207, 4, 122, // Opcode: FSUBo
/* 10248 */   MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 10262
/* 10252 */   MCD::OPC_CheckField, 6, 5, 0, 246, 0, // Skip to: 10504
/* 10258 */   MCD::OPC_Decode, 233, 3, 122, // Opcode: FADD
/* 10262 */   MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 10276
/* 10266 */   MCD::OPC_CheckField, 6, 5, 0, 232, 0, // Skip to: 10504
/* 10272 */   MCD::OPC_Decode, 236, 3, 122, // Opcode: FADDo
/* 10276 */   MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 10296
/* 10280 */   MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 10504
/* 10286 */   MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 10504
/* 10292 */   MCD::OPC_Decode, 200, 4, 121, // Opcode: FSQRT
/* 10296 */   MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 10316
/* 10300 */   MCD::OPC_CheckField, 16, 5, 0, 198, 0, // Skip to: 10504
/* 10306 */   MCD::OPC_CheckField, 6, 5, 0, 192, 0, // Skip to: 10504
/* 10312 */   MCD::OPC_Decode, 203, 4, 121, // Opcode: FSQRTo
/* 10316 */   MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 10324
/* 10320 */   MCD::OPC_Decode, 198, 4, 123, // Opcode: FSELS
/* 10324 */   MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 10332
/* 10328 */   MCD::OPC_Decode, 199, 4, 123, // Opcode: FSELSo
/* 10332 */   MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 10352
/* 10336 */   MCD::OPC_CheckField, 16, 5, 0, 162, 0, // Skip to: 10504
/* 10342 */   MCD::OPC_CheckField, 6, 5, 0, 156, 0, // Skip to: 10504
/* 10348 */   MCD::OPC_Decode, 170, 4, 121, // Opcode: FRE
/* 10352 */   MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 10372
/* 10356 */   MCD::OPC_CheckField, 16, 5, 0, 142, 0, // Skip to: 10504
/* 10362 */   MCD::OPC_CheckField, 6, 5, 0, 136, 0, // Skip to: 10504
/* 10368 */   MCD::OPC_Decode, 173, 4, 121, // Opcode: FREo
/* 10372 */   MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 10386
/* 10376 */   MCD::OPC_CheckField, 11, 5, 0, 122, 0, // Skip to: 10504
/* 10382 */   MCD::OPC_Decode, 150, 4, 124, // Opcode: FMUL
/* 10386 */   MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 10400
/* 10390 */   MCD::OPC_CheckField, 11, 5, 0, 108, 0, // Skip to: 10504
/* 10396 */   MCD::OPC_Decode, 153, 4, 124, // Opcode: FMULo
/* 10400 */   MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 10420
/* 10404 */   MCD::OPC_CheckField, 16, 5, 0, 94, 0, // Skip to: 10504
/* 10410 */   MCD::OPC_CheckField, 6, 5, 0, 88, 0, // Skip to: 10504
/* 10416 */   MCD::OPC_Decode, 192, 4, 121, // Opcode: FRSQRTE
/* 10420 */   MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 10440
/* 10424 */   MCD::OPC_CheckField, 16, 5, 0, 74, 0, // Skip to: 10504
/* 10430 */   MCD::OPC_CheckField, 6, 5, 0, 68, 0, // Skip to: 10504
/* 10436 */   MCD::OPC_Decode, 195, 4, 121, // Opcode: FRSQRTEo
/* 10440 */   MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 10448
/* 10444 */   MCD::OPC_Decode, 146, 4, 125, // Opcode: FMSUB
/* 10448 */   MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 10456
/* 10452 */   MCD::OPC_Decode, 149, 4, 125, // Opcode: FMSUBo
/* 10456 */   MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 10464
/* 10460 */   MCD::OPC_Decode, 140, 4, 125, // Opcode: FMADD
/* 10464 */   MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 10472
/* 10468 */   MCD::OPC_Decode, 143, 4, 125, // Opcode: FMADDo
/* 10472 */   MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 10480
/* 10476 */   MCD::OPC_Decode, 166, 4, 125, // Opcode: FNMSUB
/* 10480 */   MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 10488
/* 10484 */   MCD::OPC_Decode, 169, 4, 125, // Opcode: FNMSUBo
/* 10488 */   MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 10496
/* 10492 */   MCD::OPC_Decode, 162, 4, 125, // Opcode: FNMADD
/* 10496 */   MCD::OPC_FilterValue, 63, 4, 0, // Skip to: 10504
/* 10500 */   MCD::OPC_Decode, 165, 4, 125, // Opcode: FNMADDo
/* 10504 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableQPX32[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 0, 59, 0, // Skip to: 66
/* 7 */       MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 26, 6, 4, 161, 7, // Skip to: 1973
/* 20 */      MCD::OPC_Decode, 185, 6, 126, // Opcode: QVFCMPEQb
/* 24 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 38
/* 28 */      MCD::OPC_CheckField, 26, 6, 4, 147, 7, // Skip to: 1973
/* 34 */      MCD::OPC_Decode, 188, 6, 126, // Opcode: QVFCMPGTb
/* 38 */      MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 52
/* 42 */      MCD::OPC_CheckField, 26, 6, 4, 133, 7, // Skip to: 1973
/* 48 */      MCD::OPC_Decode, 255, 6, 126, // Opcode: QVFTSTNANb
/* 52 */      MCD::OPC_FilterValue, 3, 125, 7, // Skip to: 1973
/* 56 */      MCD::OPC_CheckField, 26, 6, 4, 119, 7, // Skip to: 1973
/* 62 */      MCD::OPC_Decode, 191, 6, 126, // Opcode: QVFCMPLTb
/* 66 */      MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 89
/* 70 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 73 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 136, 7, 127, // Opcode: QVFXXMADDS
/* 81 */      MCD::OPC_FilterValue, 4, 96, 7, // Skip to: 1973
/* 85 */      MCD::OPC_Decode, 135, 7, 127, // Opcode: QVFXXMADD
/* 89 */      MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 112
/* 93 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 96 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 134, 7, 127, // Opcode: QVFXXCPNMADDS
/* 104 */     MCD::OPC_FilterValue, 4, 73, 7, // Skip to: 1973
/* 108 */     MCD::OPC_Decode, 133, 7, 127, // Opcode: QVFXXCPNMADD
/* 112 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 133
/* 116 */     MCD::OPC_CheckField, 26, 6, 4, 59, 7, // Skip to: 1973
/* 122 */     MCD::OPC_CheckField, 6, 1, 0, 53, 7, // Skip to: 1973
/* 128 */     MCD::OPC_Decode, 205, 6, 128, 1, // Opcode: QVFLOGICALb
/* 133 */     MCD::OPC_FilterValue, 10, 191, 0, // Skip to: 328
/* 137 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 140 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 155
/* 144 */     MCD::OPC_CheckField, 26, 6, 4, 31, 7, // Skip to: 1973
/* 150 */     MCD::OPC_Decode, 168, 6, 129, 1, // Opcode: QVALIGNI
/* 155 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 176
/* 159 */     MCD::OPC_CheckField, 26, 6, 4, 16, 7, // Skip to: 1973
/* 165 */     MCD::OPC_CheckField, 11, 5, 0, 10, 7, // Skip to: 1973
/* 171 */     MCD::OPC_Decode, 171, 6, 130, 1, // Opcode: QVESPLATI
/* 176 */     MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 217
/* 180 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 183 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 192
/* 187 */     MCD::OPC_Decode, 139, 7, 131, 1, // Opcode: QVGPCI
/* 192 */     MCD::OPC_FilterValue, 31, 241, 6, // Skip to: 1973
/* 196 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 199 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 208
/* 203 */     MCD::OPC_Decode, 183, 7, 132, 1, // Opcode: QVSTFCSXI
/* 208 */     MCD::OPC_FilterValue, 2, 225, 6, // Skip to: 1973
/* 212 */     MCD::OPC_Decode, 204, 7, 132, 1, // Opcode: QVSTFSXI
/* 217 */     MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 254
/* 221 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 224 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 239
/* 228 */     MCD::OPC_CheckField, 26, 6, 31, 203, 6, // Skip to: 1973
/* 234 */     MCD::OPC_Decode, 179, 7, 132, 1, // Opcode: QVSTFCSUXI
/* 239 */     MCD::OPC_FilterValue, 2, 194, 6, // Skip to: 1973
/* 243 */     MCD::OPC_CheckField, 26, 6, 31, 188, 6, // Skip to: 1973
/* 249 */     MCD::OPC_Decode, 199, 7, 132, 1, // Opcode: QVSTFSUXI
/* 254 */     MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 291
/* 258 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 261 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 276
/* 265 */     MCD::OPC_CheckField, 26, 6, 31, 166, 6, // Skip to: 1973
/* 271 */     MCD::OPC_Decode, 175, 7, 132, 1, // Opcode: QVSTFCDXI
/* 276 */     MCD::OPC_FilterValue, 2, 157, 6, // Skip to: 1973
/* 280 */     MCD::OPC_CheckField, 26, 6, 31, 151, 6, // Skip to: 1973
/* 286 */     MCD::OPC_Decode, 192, 7, 132, 1, // Opcode: QVSTFDXI
/* 291 */     MCD::OPC_FilterValue, 7, 142, 6, // Skip to: 1973
/* 295 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 298 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 313
/* 302 */     MCD::OPC_CheckField, 26, 6, 31, 129, 6, // Skip to: 1973
/* 308 */     MCD::OPC_Decode, 171, 7, 132, 1, // Opcode: QVSTFCDUXI
/* 313 */     MCD::OPC_FilterValue, 2, 120, 6, // Skip to: 1973
/* 317 */     MCD::OPC_CheckField, 26, 6, 31, 114, 6, // Skip to: 1973
/* 323 */     MCD::OPC_Decode, 188, 7, 132, 1, // Opcode: QVSTFDUXI
/* 328 */     MCD::OPC_FilterValue, 11, 123, 0, // Skip to: 455
/* 332 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 335 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 350
/* 339 */     MCD::OPC_CheckField, 26, 6, 31, 92, 6, // Skip to: 1973
/* 345 */     MCD::OPC_Decode, 184, 7, 132, 1, // Opcode: QVSTFCSXIA
/* 350 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 365
/* 354 */     MCD::OPC_CheckField, 26, 6, 31, 77, 6, // Skip to: 1973
/* 360 */     MCD::OPC_Decode, 180, 7, 132, 1, // Opcode: QVSTFCSUXIA
/* 365 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 380
/* 369 */     MCD::OPC_CheckField, 26, 6, 31, 62, 6, // Skip to: 1973
/* 375 */     MCD::OPC_Decode, 176, 7, 132, 1, // Opcode: QVSTFCDXIA
/* 380 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 395
/* 384 */     MCD::OPC_CheckField, 26, 6, 31, 47, 6, // Skip to: 1973
/* 390 */     MCD::OPC_Decode, 172, 7, 132, 1, // Opcode: QVSTFCDUXIA
/* 395 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 410
/* 399 */     MCD::OPC_CheckField, 26, 6, 31, 32, 6, // Skip to: 1973
/* 405 */     MCD::OPC_Decode, 205, 7, 132, 1, // Opcode: QVSTFSXIA
/* 410 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 425
/* 414 */     MCD::OPC_CheckField, 26, 6, 31, 17, 6, // Skip to: 1973
/* 420 */     MCD::OPC_Decode, 200, 7, 132, 1, // Opcode: QVSTFSUXIA
/* 425 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 440
/* 429 */     MCD::OPC_CheckField, 26, 6, 31, 2, 6, // Skip to: 1973
/* 435 */     MCD::OPC_Decode, 193, 7, 132, 1, // Opcode: QVSTFDXIA
/* 440 */     MCD::OPC_FilterValue, 23, 249, 5, // Skip to: 1973
/* 444 */     MCD::OPC_CheckField, 26, 6, 31, 243, 5, // Skip to: 1973
/* 450 */     MCD::OPC_Decode, 189, 7, 132, 1, // Opcode: QVSTFDUXIA
/* 455 */     MCD::OPC_FilterValue, 12, 54, 0, // Skip to: 513
/* 459 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 462 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 470
/* 466 */     MCD::OPC_Decode, 229, 6, 127, // Opcode: QVFPERM
/* 470 */     MCD::OPC_FilterValue, 31, 219, 5, // Skip to: 1973
/* 474 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 477 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 486
/* 481 */     MCD::OPC_Decode, 168, 7, 132, 1, // Opcode: QVLPCRSX
/* 486 */     MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 495
/* 490 */     MCD::OPC_Decode, 167, 7, 132, 1, // Opcode: QVLPCRDX
/* 495 */     MCD::OPC_FilterValue, 16, 5, 0, // Skip to: 504
/* 499 */     MCD::OPC_Decode, 165, 7, 132, 1, // Opcode: QVLPCLSX
/* 504 */     MCD::OPC_FilterValue, 18, 185, 5, // Skip to: 1973
/* 508 */     MCD::OPC_Decode, 164, 7, 132, 1, // Opcode: QVLPCLDX
/* 513 */     MCD::OPC_FilterValue, 14, 32, 1, // Skip to: 805
/* 517 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 520 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 535
/* 524 */     MCD::OPC_CheckField, 26, 6, 31, 163, 5, // Skip to: 1973
/* 530 */     MCD::OPC_Decode, 146, 7, 132, 1, // Opcode: QVLFCSX
/* 535 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 550
/* 539 */     MCD::OPC_CheckField, 26, 6, 31, 148, 5, // Skip to: 1973
/* 545 */     MCD::OPC_Decode, 144, 7, 132, 1, // Opcode: QVLFCSUX
/* 550 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 565
/* 554 */     MCD::OPC_CheckField, 26, 6, 31, 133, 5, // Skip to: 1973
/* 560 */     MCD::OPC_Decode, 142, 7, 132, 1, // Opcode: QVLFCDX
/* 565 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 580
/* 569 */     MCD::OPC_CheckField, 26, 6, 31, 118, 5, // Skip to: 1973
/* 575 */     MCD::OPC_Decode, 140, 7, 132, 1, // Opcode: QVLFCDUX
/* 580 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 595
/* 584 */     MCD::OPC_CheckField, 26, 6, 31, 103, 5, // Skip to: 1973
/* 590 */     MCD::OPC_Decode, 181, 7, 132, 1, // Opcode: QVSTFCSX
/* 595 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 610
/* 599 */     MCD::OPC_CheckField, 26, 6, 31, 88, 5, // Skip to: 1973
/* 605 */     MCD::OPC_Decode, 177, 7, 132, 1, // Opcode: QVSTFCSUX
/* 610 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 625
/* 614 */     MCD::OPC_CheckField, 26, 6, 31, 73, 5, // Skip to: 1973
/* 620 */     MCD::OPC_Decode, 173, 7, 132, 1, // Opcode: QVSTFCDX
/* 625 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 640
/* 629 */     MCD::OPC_CheckField, 26, 6, 31, 58, 5, // Skip to: 1973
/* 635 */     MCD::OPC_Decode, 169, 7, 132, 1, // Opcode: QVSTFCDUX
/* 640 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 655
/* 644 */     MCD::OPC_CheckField, 26, 6, 31, 43, 5, // Skip to: 1973
/* 650 */     MCD::OPC_Decode, 160, 7, 132, 1, // Opcode: QVLFSX
/* 655 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 670
/* 659 */     MCD::OPC_CheckField, 26, 6, 31, 28, 5, // Skip to: 1973
/* 665 */     MCD::OPC_Decode, 158, 7, 133, 1, // Opcode: QVLFSUX
/* 670 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 685
/* 674 */     MCD::OPC_CheckField, 26, 6, 31, 13, 5, // Skip to: 1973
/* 680 */     MCD::OPC_Decode, 151, 7, 132, 1, // Opcode: QVLFDX
/* 685 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 700
/* 689 */     MCD::OPC_CheckField, 26, 6, 31, 254, 4, // Skip to: 1973
/* 695 */     MCD::OPC_Decode, 149, 7, 134, 1, // Opcode: QVLFDUX
/* 700 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 715
/* 704 */     MCD::OPC_CheckField, 26, 6, 31, 239, 4, // Skip to: 1973
/* 710 */     MCD::OPC_Decode, 202, 7, 132, 1, // Opcode: QVSTFSX
/* 715 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 730
/* 719 */     MCD::OPC_CheckField, 26, 6, 31, 224, 4, // Skip to: 1973
/* 725 */     MCD::OPC_Decode, 197, 7, 135, 1, // Opcode: QVSTFSUX
/* 730 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 745
/* 734 */     MCD::OPC_CheckField, 26, 6, 31, 209, 4, // Skip to: 1973
/* 740 */     MCD::OPC_Decode, 190, 7, 132, 1, // Opcode: QVSTFDX
/* 745 */     MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 760
/* 749 */     MCD::OPC_CheckField, 26, 6, 31, 194, 4, // Skip to: 1973
/* 755 */     MCD::OPC_Decode, 186, 7, 136, 1, // Opcode: QVSTFDUX
/* 760 */     MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 775
/* 764 */     MCD::OPC_CheckField, 26, 6, 31, 179, 4, // Skip to: 1973
/* 770 */     MCD::OPC_Decode, 156, 7, 132, 1, // Opcode: QVLFIWZX
/* 775 */     MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 790
/* 779 */     MCD::OPC_CheckField, 26, 6, 31, 164, 4, // Skip to: 1973
/* 785 */     MCD::OPC_Decode, 154, 7, 132, 1, // Opcode: QVLFIWAX
/* 790 */     MCD::OPC_FilterValue, 30, 155, 4, // Skip to: 1973
/* 794 */     MCD::OPC_CheckField, 26, 6, 31, 149, 4, // Skip to: 1973
/* 800 */     MCD::OPC_Decode, 195, 7, 132, 1, // Opcode: QVSTFIWX
/* 805 */     MCD::OPC_FilterValue, 15, 32, 1, // Skip to: 1097
/* 809 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 812 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 827
/* 816 */     MCD::OPC_CheckField, 26, 6, 31, 127, 4, // Skip to: 1973
/* 822 */     MCD::OPC_Decode, 147, 7, 132, 1, // Opcode: QVLFCSXA
/* 827 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 842
/* 831 */     MCD::OPC_CheckField, 26, 6, 31, 112, 4, // Skip to: 1973
/* 837 */     MCD::OPC_Decode, 145, 7, 132, 1, // Opcode: QVLFCSUXA
/* 842 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 857
/* 846 */     MCD::OPC_CheckField, 26, 6, 31, 97, 4, // Skip to: 1973
/* 852 */     MCD::OPC_Decode, 143, 7, 132, 1, // Opcode: QVLFCDXA
/* 857 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 872
/* 861 */     MCD::OPC_CheckField, 26, 6, 31, 82, 4, // Skip to: 1973
/* 867 */     MCD::OPC_Decode, 141, 7, 132, 1, // Opcode: QVLFCDUXA
/* 872 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 887
/* 876 */     MCD::OPC_CheckField, 26, 6, 31, 67, 4, // Skip to: 1973
/* 882 */     MCD::OPC_Decode, 182, 7, 132, 1, // Opcode: QVSTFCSXA
/* 887 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 902
/* 891 */     MCD::OPC_CheckField, 26, 6, 31, 52, 4, // Skip to: 1973
/* 897 */     MCD::OPC_Decode, 178, 7, 132, 1, // Opcode: QVSTFCSUXA
/* 902 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 917
/* 906 */     MCD::OPC_CheckField, 26, 6, 31, 37, 4, // Skip to: 1973
/* 912 */     MCD::OPC_Decode, 174, 7, 132, 1, // Opcode: QVSTFCDXA
/* 917 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 932
/* 921 */     MCD::OPC_CheckField, 26, 6, 31, 22, 4, // Skip to: 1973
/* 927 */     MCD::OPC_Decode, 170, 7, 132, 1, // Opcode: QVSTFCDUXA
/* 932 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 947
/* 936 */     MCD::OPC_CheckField, 26, 6, 31, 7, 4, // Skip to: 1973
/* 942 */     MCD::OPC_Decode, 161, 7, 132, 1, // Opcode: QVLFSXA
/* 947 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 962
/* 951 */     MCD::OPC_CheckField, 26, 6, 31, 248, 3, // Skip to: 1973
/* 957 */     MCD::OPC_Decode, 159, 7, 132, 1, // Opcode: QVLFSUXA
/* 962 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 977
/* 966 */     MCD::OPC_CheckField, 26, 6, 31, 233, 3, // Skip to: 1973
/* 972 */     MCD::OPC_Decode, 152, 7, 132, 1, // Opcode: QVLFDXA
/* 977 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 992
/* 981 */     MCD::OPC_CheckField, 26, 6, 31, 218, 3, // Skip to: 1973
/* 987 */     MCD::OPC_Decode, 150, 7, 132, 1, // Opcode: QVLFDUXA
/* 992 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 1007
/* 996 */     MCD::OPC_CheckField, 26, 6, 31, 203, 3, // Skip to: 1973
/* 1002 */    MCD::OPC_Decode, 203, 7, 132, 1, // Opcode: QVSTFSXA
/* 1007 */    MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 1022
/* 1011 */    MCD::OPC_CheckField, 26, 6, 31, 188, 3, // Skip to: 1973
/* 1017 */    MCD::OPC_Decode, 198, 7, 132, 1, // Opcode: QVSTFSUXA
/* 1022 */    MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 1037
/* 1026 */    MCD::OPC_CheckField, 26, 6, 31, 173, 3, // Skip to: 1973
/* 1032 */    MCD::OPC_Decode, 191, 7, 132, 1, // Opcode: QVSTFDXA
/* 1037 */    MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 1052
/* 1041 */    MCD::OPC_CheckField, 26, 6, 31, 158, 3, // Skip to: 1973
/* 1047 */    MCD::OPC_Decode, 187, 7, 132, 1, // Opcode: QVSTFDUXA
/* 1052 */    MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 1067
/* 1056 */    MCD::OPC_CheckField, 26, 6, 31, 143, 3, // Skip to: 1973
/* 1062 */    MCD::OPC_Decode, 157, 7, 132, 1, // Opcode: QVLFIWZXA
/* 1067 */    MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 1082
/* 1071 */    MCD::OPC_CheckField, 26, 6, 31, 128, 3, // Skip to: 1973
/* 1077 */    MCD::OPC_Decode, 155, 7, 132, 1, // Opcode: QVLFIWAXA
/* 1082 */    MCD::OPC_FilterValue, 30, 119, 3, // Skip to: 1973
/* 1086 */    MCD::OPC_CheckField, 26, 6, 31, 113, 3, // Skip to: 1973
/* 1092 */    MCD::OPC_Decode, 196, 7, 132, 1, // Opcode: QVSTFIWXA
/* 1097 */    MCD::OPC_FilterValue, 16, 186, 0, // Skip to: 1287
/* 1101 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1104 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1119
/* 1108 */    MCD::OPC_CheckField, 26, 6, 4, 91, 3, // Skip to: 1973
/* 1114 */    MCD::OPC_Decode, 193, 6, 137, 1, // Opcode: QVFCPSGN
/* 1119 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 1140
/* 1123 */    MCD::OPC_CheckField, 26, 6, 4, 76, 3, // Skip to: 1973
/* 1129 */    MCD::OPC_CheckField, 16, 5, 0, 70, 3, // Skip to: 1973
/* 1135 */    MCD::OPC_Decode, 221, 6, 138, 1, // Opcode: QVFNEG
/* 1140 */    MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 1161
/* 1144 */    MCD::OPC_CheckField, 26, 6, 4, 55, 3, // Skip to: 1973
/* 1150 */    MCD::OPC_CheckField, 16, 5, 0, 49, 3, // Skip to: 1973
/* 1156 */    MCD::OPC_Decode, 210, 6, 138, 1, // Opcode: QVFMR
/* 1161 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1182
/* 1165 */    MCD::OPC_CheckField, 26, 6, 4, 34, 3, // Skip to: 1973
/* 1171 */    MCD::OPC_CheckField, 16, 5, 0, 28, 3, // Skip to: 1973
/* 1177 */    MCD::OPC_Decode, 219, 6, 138, 1, // Opcode: QVFNABS
/* 1182 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 1203
/* 1186 */    MCD::OPC_CheckField, 26, 6, 4, 13, 3, // Skip to: 1973
/* 1192 */    MCD::OPC_CheckField, 16, 5, 0, 7, 3, // Skip to: 1973
/* 1198 */    MCD::OPC_Decode, 174, 6, 138, 1, // Opcode: QVFABS
/* 1203 */    MCD::OPC_FilterValue, 12, 17, 0, // Skip to: 1224
/* 1207 */    MCD::OPC_CheckField, 26, 6, 4, 248, 2, // Skip to: 1973
/* 1213 */    MCD::OPC_CheckField, 16, 5, 0, 242, 2, // Skip to: 1973
/* 1219 */    MCD::OPC_Decode, 236, 6, 138, 1, // Opcode: QVFRIN
/* 1224 */    MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 1245
/* 1228 */    MCD::OPC_CheckField, 26, 6, 4, 227, 2, // Skip to: 1973
/* 1234 */    MCD::OPC_CheckField, 16, 5, 0, 221, 2, // Skip to: 1973
/* 1240 */    MCD::OPC_Decode, 240, 6, 138, 1, // Opcode: QVFRIZ
/* 1245 */    MCD::OPC_FilterValue, 14, 17, 0, // Skip to: 1266
/* 1249 */    MCD::OPC_CheckField, 26, 6, 4, 206, 2, // Skip to: 1973
/* 1255 */    MCD::OPC_CheckField, 16, 5, 0, 200, 2, // Skip to: 1973
/* 1261 */    MCD::OPC_Decode, 238, 6, 138, 1, // Opcode: QVFRIP
/* 1266 */    MCD::OPC_FilterValue, 15, 191, 2, // Skip to: 1973
/* 1270 */    MCD::OPC_CheckField, 26, 6, 4, 185, 2, // Skip to: 1973
/* 1276 */    MCD::OPC_CheckField, 16, 5, 0, 179, 2, // Skip to: 1973
/* 1282 */    MCD::OPC_Decode, 234, 6, 138, 1, // Opcode: QVFRIM
/* 1287 */    MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 1310
/* 1291 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1294 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1302
/* 1298 */    MCD::OPC_Decode, 130, 7, 127, // Opcode: QVFXMADDS
/* 1302 */    MCD::OPC_FilterValue, 4, 155, 2, // Skip to: 1973
/* 1306 */    MCD::OPC_Decode, 129, 7, 127, // Opcode: QVFXMADD
/* 1310 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 1333
/* 1314 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1317 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1325
/* 1321 */    MCD::OPC_Decode, 138, 7, 127, // Opcode: QVFXXNPMADDS
/* 1325 */    MCD::OPC_FilterValue, 4, 132, 2, // Skip to: 1973
/* 1329 */    MCD::OPC_Decode, 137, 7, 127, // Opcode: QVFXXNPMADD
/* 1333 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1360
/* 1337 */    MCD::OPC_CheckField, 26, 6, 4, 118, 2, // Skip to: 1973
/* 1343 */    MCD::OPC_CheckField, 16, 5, 0, 112, 2, // Skip to: 1973
/* 1349 */    MCD::OPC_CheckField, 6, 5, 0, 106, 2, // Skip to: 1973
/* 1355 */    MCD::OPC_Decode, 243, 6, 139, 1, // Opcode: QVFRSPs
/* 1360 */    MCD::OPC_FilterValue, 28, 161, 0, // Skip to: 1525
/* 1364 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1367 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1388
/* 1371 */    MCD::OPC_CheckField, 26, 6, 4, 84, 2, // Skip to: 1973
/* 1377 */    MCD::OPC_CheckField, 16, 5, 0, 78, 2, // Skip to: 1973
/* 1383 */    MCD::OPC_Decode, 200, 6, 138, 1, // Opcode: QVFCTIW
/* 1388 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1409
/* 1392 */    MCD::OPC_CheckField, 26, 6, 4, 63, 2, // Skip to: 1973
/* 1398 */    MCD::OPC_CheckField, 16, 5, 0, 57, 2, // Skip to: 1973
/* 1404 */    MCD::OPC_Decode, 201, 6, 138, 1, // Opcode: QVFCTIWU
/* 1409 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1430
/* 1413 */    MCD::OPC_CheckField, 26, 6, 4, 42, 2, // Skip to: 1973
/* 1419 */    MCD::OPC_CheckField, 16, 5, 0, 36, 2, // Skip to: 1973
/* 1425 */    MCD::OPC_Decode, 195, 6, 138, 1, // Opcode: QVFCTID
/* 1430 */    MCD::OPC_FilterValue, 26, 33, 0, // Skip to: 1467
/* 1434 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1437 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1452
/* 1441 */    MCD::OPC_CheckField, 16, 5, 0, 14, 2, // Skip to: 1973
/* 1447 */    MCD::OPC_Decode, 180, 6, 138, 1, // Opcode: QVFCFIDS
/* 1452 */    MCD::OPC_FilterValue, 4, 5, 2, // Skip to: 1973
/* 1456 */    MCD::OPC_CheckField, 16, 5, 0, 255, 1, // Skip to: 1973
/* 1462 */    MCD::OPC_Decode, 179, 6, 138, 1, // Opcode: QVFCFID
/* 1467 */    MCD::OPC_FilterValue, 29, 17, 0, // Skip to: 1488
/* 1471 */    MCD::OPC_CheckField, 26, 6, 4, 240, 1, // Skip to: 1973
/* 1477 */    MCD::OPC_CheckField, 16, 5, 0, 234, 1, // Skip to: 1973
/* 1483 */    MCD::OPC_Decode, 196, 6, 138, 1, // Opcode: QVFCTIDU
/* 1488 */    MCD::OPC_FilterValue, 30, 225, 1, // Skip to: 1973
/* 1492 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1495 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1510
/* 1499 */    MCD::OPC_CheckField, 16, 5, 0, 212, 1, // Skip to: 1973
/* 1505 */    MCD::OPC_Decode, 182, 6, 138, 1, // Opcode: QVFCFIDUS
/* 1510 */    MCD::OPC_FilterValue, 4, 203, 1, // Skip to: 1973
/* 1514 */    MCD::OPC_CheckField, 16, 5, 0, 197, 1, // Skip to: 1973
/* 1520 */    MCD::OPC_Decode, 181, 6, 138, 1, // Opcode: QVFCFIDU
/* 1525 */    MCD::OPC_FilterValue, 30, 87, 0, // Skip to: 1616
/* 1529 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1532 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1553
/* 1536 */    MCD::OPC_CheckField, 26, 6, 4, 175, 1, // Skip to: 1973
/* 1542 */    MCD::OPC_CheckField, 16, 5, 0, 169, 1, // Skip to: 1973
/* 1548 */    MCD::OPC_Decode, 203, 6, 138, 1, // Opcode: QVFCTIWZ
/* 1553 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1574
/* 1557 */    MCD::OPC_CheckField, 26, 6, 4, 154, 1, // Skip to: 1973
/* 1563 */    MCD::OPC_CheckField, 16, 5, 0, 148, 1, // Skip to: 1973
/* 1569 */    MCD::OPC_Decode, 202, 6, 138, 1, // Opcode: QVFCTIWUZ
/* 1574 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1595
/* 1578 */    MCD::OPC_CheckField, 26, 6, 4, 133, 1, // Skip to: 1973
/* 1584 */    MCD::OPC_CheckField, 16, 5, 0, 127, 1, // Skip to: 1973
/* 1590 */    MCD::OPC_Decode, 198, 6, 138, 1, // Opcode: QVFCTIDZ
/* 1595 */    MCD::OPC_FilterValue, 29, 118, 1, // Skip to: 1973
/* 1599 */    MCD::OPC_CheckField, 26, 6, 4, 112, 1, // Skip to: 1973
/* 1605 */    MCD::OPC_CheckField, 16, 5, 0, 106, 1, // Skip to: 1973
/* 1611 */    MCD::OPC_Decode, 197, 6, 138, 1, // Opcode: QVFCTIDUZ
/* 1616 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 1653
/* 1620 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1623 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1638
/* 1627 */    MCD::OPC_CheckField, 11, 5, 0, 84, 1, // Skip to: 1973
/* 1633 */    MCD::OPC_Decode, 132, 7, 140, 1, // Opcode: QVFXMULS
/* 1638 */    MCD::OPC_FilterValue, 4, 75, 1, // Skip to: 1973
/* 1642 */    MCD::OPC_CheckField, 11, 5, 0, 69, 1, // Skip to: 1973
/* 1648 */    MCD::OPC_Decode, 131, 7, 140, 1, // Opcode: QVFXMUL
/* 1653 */    MCD::OPC_FilterValue, 40, 33, 0, // Skip to: 1690
/* 1657 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1660 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1675
/* 1664 */    MCD::OPC_CheckField, 6, 5, 0, 47, 1, // Skip to: 1973
/* 1670 */    MCD::OPC_Decode, 253, 6, 141, 1, // Opcode: QVFSUBSs
/* 1675 */    MCD::OPC_FilterValue, 4, 38, 1, // Skip to: 1973
/* 1679 */    MCD::OPC_CheckField, 6, 5, 0, 32, 1, // Skip to: 1973
/* 1685 */    MCD::OPC_Decode, 251, 6, 137, 1, // Opcode: QVFSUB
/* 1690 */    MCD::OPC_FilterValue, 42, 33, 0, // Skip to: 1727
/* 1694 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1697 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1712
/* 1701 */    MCD::OPC_CheckField, 6, 5, 0, 10, 1, // Skip to: 1973
/* 1707 */    MCD::OPC_Decode, 178, 6, 141, 1, // Opcode: QVFADDSs
/* 1712 */    MCD::OPC_FilterValue, 4, 1, 1, // Skip to: 1973
/* 1716 */    MCD::OPC_CheckField, 6, 5, 0, 251, 0, // Skip to: 1973
/* 1722 */    MCD::OPC_Decode, 176, 6, 137, 1, // Opcode: QVFADD
/* 1727 */    MCD::OPC_FilterValue, 46, 11, 0, // Skip to: 1742
/* 1731 */    MCD::OPC_CheckField, 26, 6, 4, 236, 0, // Skip to: 1973
/* 1737 */    MCD::OPC_Decode, 248, 6, 142, 1, // Opcode: QVFSELb
/* 1742 */    MCD::OPC_FilterValue, 48, 45, 0, // Skip to: 1791
/* 1746 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1749 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1770
/* 1753 */    MCD::OPC_CheckField, 16, 5, 0, 214, 0, // Skip to: 1973
/* 1759 */    MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 1973
/* 1765 */    MCD::OPC_Decode, 232, 6, 138, 1, // Opcode: QVFRES
/* 1770 */    MCD::OPC_FilterValue, 4, 199, 0, // Skip to: 1973
/* 1774 */    MCD::OPC_CheckField, 16, 5, 0, 193, 0, // Skip to: 1973
/* 1780 */    MCD::OPC_CheckField, 6, 5, 0, 187, 0, // Skip to: 1973
/* 1786 */    MCD::OPC_Decode, 231, 6, 138, 1, // Opcode: QVFRE
/* 1791 */    MCD::OPC_FilterValue, 50, 33, 0, // Skip to: 1828
/* 1795 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1798 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1813
/* 1802 */    MCD::OPC_CheckField, 11, 5, 0, 165, 0, // Skip to: 1973
/* 1808 */    MCD::OPC_Decode, 218, 6, 143, 1, // Opcode: QVFMULSs
/* 1813 */    MCD::OPC_FilterValue, 4, 156, 0, // Skip to: 1973
/* 1817 */    MCD::OPC_CheckField, 11, 5, 0, 150, 0, // Skip to: 1973
/* 1823 */    MCD::OPC_Decode, 216, 6, 140, 1, // Opcode: QVFMUL
/* 1828 */    MCD::OPC_FilterValue, 52, 45, 0, // Skip to: 1877
/* 1832 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1835 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1856
/* 1839 */    MCD::OPC_CheckField, 16, 5, 0, 128, 0, // Skip to: 1973
/* 1845 */    MCD::OPC_CheckField, 6, 5, 0, 122, 0, // Skip to: 1973
/* 1851 */    MCD::OPC_Decode, 245, 6, 138, 1, // Opcode: QVFRSQRTES
/* 1856 */    MCD::OPC_FilterValue, 4, 113, 0, // Skip to: 1973
/* 1860 */    MCD::OPC_CheckField, 16, 5, 0, 107, 0, // Skip to: 1973
/* 1866 */    MCD::OPC_CheckField, 6, 5, 0, 101, 0, // Skip to: 1973
/* 1872 */    MCD::OPC_Decode, 244, 6, 138, 1, // Opcode: QVFRSQRTE
/* 1877 */    MCD::OPC_FilterValue, 56, 20, 0, // Skip to: 1901
/* 1881 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1884 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1893
/* 1888 */    MCD::OPC_Decode, 215, 6, 144, 1, // Opcode: QVFMSUBSs
/* 1893 */    MCD::OPC_FilterValue, 4, 76, 0, // Skip to: 1973
/* 1897 */    MCD::OPC_Decode, 213, 6, 127, // Opcode: QVFMSUB
/* 1901 */    MCD::OPC_FilterValue, 58, 20, 0, // Skip to: 1925
/* 1905 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1908 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1917
/* 1912 */    MCD::OPC_Decode, 209, 6, 144, 1, // Opcode: QVFMADDSs
/* 1917 */    MCD::OPC_FilterValue, 4, 52, 0, // Skip to: 1973
/* 1921 */    MCD::OPC_Decode, 207, 6, 127, // Opcode: QVFMADD
/* 1925 */    MCD::OPC_FilterValue, 60, 20, 0, // Skip to: 1949
/* 1929 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1932 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1941
/* 1936 */    MCD::OPC_Decode, 228, 6, 144, 1, // Opcode: QVFNMSUBSs
/* 1941 */    MCD::OPC_FilterValue, 4, 28, 0, // Skip to: 1973
/* 1945 */    MCD::OPC_Decode, 226, 6, 127, // Opcode: QVFNMSUB
/* 1949 */    MCD::OPC_FilterValue, 62, 20, 0, // Skip to: 1973
/* 1953 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1956 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1965
/* 1960 */    MCD::OPC_Decode, 225, 6, 144, 1, // Opcode: QVFNMADDSs
/* 1965 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1973
/* 1969 */    MCD::OPC_Decode, 223, 6, 127, // Opcode: QVFNMADD
/* 1973 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 4);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 2, 24);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 62:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 64:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 21, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 111:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 7, 4);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 9, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
