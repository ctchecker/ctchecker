/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace PPC {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    FRAME_ALLOC	= 21,
    ADD4	= 22,
    ADD4TLS	= 23,
    ADD4o	= 24,
    ADD8	= 25,
    ADD8TLS	= 26,
    ADD8TLS_	= 27,
    ADD8o	= 28,
    ADDC	= 29,
    ADDC8	= 30,
    ADDC8o	= 31,
    ADDCo	= 32,
    ADDE	= 33,
    ADDE8	= 34,
    ADDE8o	= 35,
    ADDEo	= 36,
    ADDI	= 37,
    ADDI8	= 38,
    ADDIC	= 39,
    ADDIC8	= 40,
    ADDICo	= 41,
    ADDIS	= 42,
    ADDIS8	= 43,
    ADDISdtprelHA	= 44,
    ADDISdtprelHA32	= 45,
    ADDISgotTprelHA	= 46,
    ADDIStlsgdHA	= 47,
    ADDIStlsldHA	= 48,
    ADDIStocHA	= 49,
    ADDIdtprelL	= 50,
    ADDIdtprelL32	= 51,
    ADDItlsgdL	= 52,
    ADDItlsgdL32	= 53,
    ADDItlsgdLADDR	= 54,
    ADDItlsgdLADDR32	= 55,
    ADDItlsldL	= 56,
    ADDItlsldL32	= 57,
    ADDItlsldLADDR	= 58,
    ADDItlsldLADDR32	= 59,
    ADDItocL	= 60,
    ADDME	= 61,
    ADDME8	= 62,
    ADDME8o	= 63,
    ADDMEo	= 64,
    ADDZE	= 65,
    ADDZE8	= 66,
    ADDZE8o	= 67,
    ADDZEo	= 68,
    ADJCALLSTACKDOWN	= 69,
    ADJCALLSTACKUP	= 70,
    AND	= 71,
    AND8	= 72,
    AND8o	= 73,
    ANDC	= 74,
    ANDC8	= 75,
    ANDC8o	= 76,
    ANDCo	= 77,
    ANDISo	= 78,
    ANDISo8	= 79,
    ANDIo	= 80,
    ANDIo8	= 81,
    ANDIo_1_EQ_BIT	= 82,
    ANDIo_1_EQ_BIT8	= 83,
    ANDIo_1_GT_BIT	= 84,
    ANDIo_1_GT_BIT8	= 85,
    ANDo	= 86,
    ATOMIC_CMP_SWAP_I16	= 87,
    ATOMIC_CMP_SWAP_I32	= 88,
    ATOMIC_CMP_SWAP_I64	= 89,
    ATOMIC_CMP_SWAP_I8	= 90,
    ATOMIC_LOAD_ADD_I16	= 91,
    ATOMIC_LOAD_ADD_I32	= 92,
    ATOMIC_LOAD_ADD_I64	= 93,
    ATOMIC_LOAD_ADD_I8	= 94,
    ATOMIC_LOAD_AND_I16	= 95,
    ATOMIC_LOAD_AND_I32	= 96,
    ATOMIC_LOAD_AND_I64	= 97,
    ATOMIC_LOAD_AND_I8	= 98,
    ATOMIC_LOAD_NAND_I16	= 99,
    ATOMIC_LOAD_NAND_I32	= 100,
    ATOMIC_LOAD_NAND_I64	= 101,
    ATOMIC_LOAD_NAND_I8	= 102,
    ATOMIC_LOAD_OR_I16	= 103,
    ATOMIC_LOAD_OR_I32	= 104,
    ATOMIC_LOAD_OR_I64	= 105,
    ATOMIC_LOAD_OR_I8	= 106,
    ATOMIC_LOAD_SUB_I16	= 107,
    ATOMIC_LOAD_SUB_I32	= 108,
    ATOMIC_LOAD_SUB_I64	= 109,
    ATOMIC_LOAD_SUB_I8	= 110,
    ATOMIC_LOAD_XOR_I16	= 111,
    ATOMIC_LOAD_XOR_I32	= 112,
    ATOMIC_LOAD_XOR_I64	= 113,
    ATOMIC_LOAD_XOR_I8	= 114,
    ATOMIC_SWAP_I16	= 115,
    ATOMIC_SWAP_I32	= 116,
    ATOMIC_SWAP_I64	= 117,
    ATOMIC_SWAP_I8	= 118,
    ATTN	= 119,
    B	= 120,
    BA	= 121,
    BC	= 122,
    BCC	= 123,
    BCCA	= 124,
    BCCCTR	= 125,
    BCCCTR8	= 126,
    BCCCTRL	= 127,
    BCCCTRL8	= 128,
    BCCL	= 129,
    BCCLA	= 130,
    BCCLR	= 131,
    BCCLRL	= 132,
    BCCTR	= 133,
    BCCTR8	= 134,
    BCCTR8n	= 135,
    BCCTRL	= 136,
    BCCTRL8	= 137,
    BCCTRL8n	= 138,
    BCCTRLn	= 139,
    BCCTRn	= 140,
    BCL	= 141,
    BCLR	= 142,
    BCLRL	= 143,
    BCLRLn	= 144,
    BCLRn	= 145,
    BCLalways	= 146,
    BCLn	= 147,
    BCTR	= 148,
    BCTR8	= 149,
    BCTRL	= 150,
    BCTRL8	= 151,
    BCTRL8_LDinto_toc	= 152,
    BCn	= 153,
    BDNZ	= 154,
    BDNZ8	= 155,
    BDNZA	= 156,
    BDNZAm	= 157,
    BDNZAp	= 158,
    BDNZL	= 159,
    BDNZLA	= 160,
    BDNZLAm	= 161,
    BDNZLAp	= 162,
    BDNZLR	= 163,
    BDNZLR8	= 164,
    BDNZLRL	= 165,
    BDNZLRLm	= 166,
    BDNZLRLp	= 167,
    BDNZLRm	= 168,
    BDNZLRp	= 169,
    BDNZLm	= 170,
    BDNZLp	= 171,
    BDNZm	= 172,
    BDNZp	= 173,
    BDZ	= 174,
    BDZ8	= 175,
    BDZA	= 176,
    BDZAm	= 177,
    BDZAp	= 178,
    BDZL	= 179,
    BDZLA	= 180,
    BDZLAm	= 181,
    BDZLAp	= 182,
    BDZLR	= 183,
    BDZLR8	= 184,
    BDZLRL	= 185,
    BDZLRLm	= 186,
    BDZLRLp	= 187,
    BDZLRm	= 188,
    BDZLRp	= 189,
    BDZLm	= 190,
    BDZLp	= 191,
    BDZm	= 192,
    BDZp	= 193,
    BL	= 194,
    BL8	= 195,
    BL8_NOP	= 196,
    BL8_NOP_TLS	= 197,
    BL8_TLS	= 198,
    BL8_TLS_	= 199,
    BLA	= 200,
    BLA8	= 201,
    BLA8_NOP	= 202,
    BLR	= 203,
    BLR8	= 204,
    BLRL	= 205,
    BL_TLS	= 206,
    BPERMD	= 207,
    BRINC	= 208,
    CLRLSLDI	= 209,
    CLRLSLDIo	= 210,
    CLRLSLWI	= 211,
    CLRLSLWIo	= 212,
    CLRRDI	= 213,
    CLRRDIo	= 214,
    CLRRWI	= 215,
    CLRRWIo	= 216,
    CMPB	= 217,
    CMPB8	= 218,
    CMPD	= 219,
    CMPDI	= 220,
    CMPLD	= 221,
    CMPLDI	= 222,
    CMPLW	= 223,
    CMPLWI	= 224,
    CMPW	= 225,
    CMPWI	= 226,
    CNTLZD	= 227,
    CNTLZDo	= 228,
    CNTLZW	= 229,
    CNTLZW8	= 230,
    CNTLZW8o	= 231,
    CNTLZWo	= 232,
    CR6SET	= 233,
    CR6UNSET	= 234,
    CRAND	= 235,
    CRANDC	= 236,
    CREQV	= 237,
    CRNAND	= 238,
    CRNOR	= 239,
    CROR	= 240,
    CRORC	= 241,
    CRSET	= 242,
    CRUNSET	= 243,
    CRXOR	= 244,
    DCBA	= 245,
    DCBF	= 246,
    DCBI	= 247,
    DCBST	= 248,
    DCBT	= 249,
    DCBTST	= 250,
    DCBZ	= 251,
    DCBZL	= 252,
    DCCCI	= 253,
    DIVD	= 254,
    DIVDE	= 255,
    DIVDEU	= 256,
    DIVDEUo	= 257,
    DIVDEo	= 258,
    DIVDU	= 259,
    DIVDUo	= 260,
    DIVDo	= 261,
    DIVW	= 262,
    DIVWE	= 263,
    DIVWEU	= 264,
    DIVWEUo	= 265,
    DIVWEo	= 266,
    DIVWU	= 267,
    DIVWUo	= 268,
    DIVWo	= 269,
    DSS	= 270,
    DSSALL	= 271,
    DST	= 272,
    DST64	= 273,
    DSTST	= 274,
    DSTST64	= 275,
    DSTSTT	= 276,
    DSTSTT64	= 277,
    DSTT	= 278,
    DSTT64	= 279,
    DYNALLOC	= 280,
    DYNALLOC8	= 281,
    EH_SjLj_LongJmp32	= 282,
    EH_SjLj_LongJmp64	= 283,
    EH_SjLj_SetJmp32	= 284,
    EH_SjLj_SetJmp64	= 285,
    EH_SjLj_Setup	= 286,
    EQV	= 287,
    EQV8	= 288,
    EQV8o	= 289,
    EQVo	= 290,
    EVABS	= 291,
    EVADDIW	= 292,
    EVADDSMIAAW	= 293,
    EVADDSSIAAW	= 294,
    EVADDUMIAAW	= 295,
    EVADDUSIAAW	= 296,
    EVADDW	= 297,
    EVAND	= 298,
    EVANDC	= 299,
    EVCMPEQ	= 300,
    EVCMPGTS	= 301,
    EVCMPGTU	= 302,
    EVCMPLTS	= 303,
    EVCMPLTU	= 304,
    EVCNTLSW	= 305,
    EVCNTLZW	= 306,
    EVDIVWS	= 307,
    EVDIVWU	= 308,
    EVEQV	= 309,
    EVEXTSB	= 310,
    EVEXTSH	= 311,
    EVLDD	= 312,
    EVLDDX	= 313,
    EVLDH	= 314,
    EVLDHX	= 315,
    EVLDW	= 316,
    EVLDWX	= 317,
    EVLHHESPLAT	= 318,
    EVLHHESPLATX	= 319,
    EVLHHOSSPLAT	= 320,
    EVLHHOSSPLATX	= 321,
    EVLHHOUSPLAT	= 322,
    EVLHHOUSPLATX	= 323,
    EVLWHE	= 324,
    EVLWHEX	= 325,
    EVLWHOS	= 326,
    EVLWHOSX	= 327,
    EVLWHOU	= 328,
    EVLWHOUX	= 329,
    EVLWHSPLAT	= 330,
    EVLWHSPLATX	= 331,
    EVLWWSPLAT	= 332,
    EVLWWSPLATX	= 333,
    EVMERGEHI	= 334,
    EVMERGEHILO	= 335,
    EVMERGELO	= 336,
    EVMERGELOHI	= 337,
    EVMHEGSMFAA	= 338,
    EVMHEGSMFAN	= 339,
    EVMHEGSMIAA	= 340,
    EVMHEGSMIAN	= 341,
    EVMHEGUMIAA	= 342,
    EVMHEGUMIAN	= 343,
    EVMHESMF	= 344,
    EVMHESMFA	= 345,
    EVMHESMFAAW	= 346,
    EVMHESMFANW	= 347,
    EVMHESMI	= 348,
    EVMHESMIA	= 349,
    EVMHESMIAAW	= 350,
    EVMHESMIANW	= 351,
    EVMHESSF	= 352,
    EVMHESSFA	= 353,
    EVMHESSFAAW	= 354,
    EVMHESSFANW	= 355,
    EVMHESSIAAW	= 356,
    EVMHESSIANW	= 357,
    EVMHEUMI	= 358,
    EVMHEUMIA	= 359,
    EVMHEUMIAAW	= 360,
    EVMHEUMIANW	= 361,
    EVMHEUSIAAW	= 362,
    EVMHEUSIANW	= 363,
    EVMHOGSMFAA	= 364,
    EVMHOGSMFAN	= 365,
    EVMHOGSMIAA	= 366,
    EVMHOGSMIAN	= 367,
    EVMHOGUMIAA	= 368,
    EVMHOGUMIAN	= 369,
    EVMHOSMF	= 370,
    EVMHOSMFA	= 371,
    EVMHOSMFAAW	= 372,
    EVMHOSMFANW	= 373,
    EVMHOSMI	= 374,
    EVMHOSMIA	= 375,
    EVMHOSMIAAW	= 376,
    EVMHOSMIANW	= 377,
    EVMHOSSF	= 378,
    EVMHOSSFA	= 379,
    EVMHOSSFAAW	= 380,
    EVMHOSSFANW	= 381,
    EVMHOSSIAAW	= 382,
    EVMHOSSIANW	= 383,
    EVMHOUMI	= 384,
    EVMHOUMIA	= 385,
    EVMHOUMIAAW	= 386,
    EVMHOUMIANW	= 387,
    EVMHOUSIAAW	= 388,
    EVMHOUSIANW	= 389,
    EVMRA	= 390,
    EVMWHSMF	= 391,
    EVMWHSMFA	= 392,
    EVMWHSMI	= 393,
    EVMWHSMIA	= 394,
    EVMWHSSF	= 395,
    EVMWHSSFA	= 396,
    EVMWHUMI	= 397,
    EVMWHUMIA	= 398,
    EVMWLSMIAAW	= 399,
    EVMWLSMIANW	= 400,
    EVMWLSSIAAW	= 401,
    EVMWLSSIANW	= 402,
    EVMWLUMI	= 403,
    EVMWLUMIA	= 404,
    EVMWLUMIAAW	= 405,
    EVMWLUMIANW	= 406,
    EVMWLUSIAAW	= 407,
    EVMWLUSIANW	= 408,
    EVMWSMF	= 409,
    EVMWSMFA	= 410,
    EVMWSMFAA	= 411,
    EVMWSMFAN	= 412,
    EVMWSMI	= 413,
    EVMWSMIA	= 414,
    EVMWSMIAA	= 415,
    EVMWSMIAN	= 416,
    EVMWSSF	= 417,
    EVMWSSFA	= 418,
    EVMWSSFAA	= 419,
    EVMWSSFAN	= 420,
    EVMWUMI	= 421,
    EVMWUMIA	= 422,
    EVMWUMIAA	= 423,
    EVMWUMIAN	= 424,
    EVNAND	= 425,
    EVNEG	= 426,
    EVNOR	= 427,
    EVOR	= 428,
    EVORC	= 429,
    EVRLW	= 430,
    EVRLWI	= 431,
    EVRNDW	= 432,
    EVSLW	= 433,
    EVSLWI	= 434,
    EVSPLATFI	= 435,
    EVSPLATI	= 436,
    EVSRWIS	= 437,
    EVSRWIU	= 438,
    EVSRWS	= 439,
    EVSRWU	= 440,
    EVSTDD	= 441,
    EVSTDDX	= 442,
    EVSTDH	= 443,
    EVSTDHX	= 444,
    EVSTDW	= 445,
    EVSTDWX	= 446,
    EVSTWHE	= 447,
    EVSTWHEX	= 448,
    EVSTWHO	= 449,
    EVSTWHOX	= 450,
    EVSTWWE	= 451,
    EVSTWWEX	= 452,
    EVSTWWO	= 453,
    EVSTWWOX	= 454,
    EVSUBFSMIAAW	= 455,
    EVSUBFSSIAAW	= 456,
    EVSUBFUMIAAW	= 457,
    EVSUBFUSIAAW	= 458,
    EVSUBFW	= 459,
    EVSUBIFW	= 460,
    EVXOR	= 461,
    EXTLDI	= 462,
    EXTLDIo	= 463,
    EXTLWI	= 464,
    EXTLWIo	= 465,
    EXTRDI	= 466,
    EXTRDIo	= 467,
    EXTRWI	= 468,
    EXTRWIo	= 469,
    EXTSB	= 470,
    EXTSB8	= 471,
    EXTSB8_32_64	= 472,
    EXTSB8o	= 473,
    EXTSBo	= 474,
    EXTSH	= 475,
    EXTSH8	= 476,
    EXTSH8_32_64	= 477,
    EXTSH8o	= 478,
    EXTSHo	= 479,
    EXTSW	= 480,
    EXTSW_32_64	= 481,
    EXTSW_32_64o	= 482,
    EXTSWo	= 483,
    EnforceIEIO	= 484,
    FABSD	= 485,
    FABSDo	= 486,
    FABSS	= 487,
    FABSSo	= 488,
    FADD	= 489,
    FADDS	= 490,
    FADDSo	= 491,
    FADDo	= 492,
    FADDrtz	= 493,
    FCFID	= 494,
    FCFIDS	= 495,
    FCFIDSo	= 496,
    FCFIDU	= 497,
    FCFIDUS	= 498,
    FCFIDUSo	= 499,
    FCFIDUo	= 500,
    FCFIDo	= 501,
    FCMPUD	= 502,
    FCMPUS	= 503,
    FCPSGND	= 504,
    FCPSGNDo	= 505,
    FCPSGNS	= 506,
    FCPSGNSo	= 507,
    FCTID	= 508,
    FCTIDUZ	= 509,
    FCTIDUZo	= 510,
    FCTIDZ	= 511,
    FCTIDZo	= 512,
    FCTIDo	= 513,
    FCTIW	= 514,
    FCTIWUZ	= 515,
    FCTIWUZo	= 516,
    FCTIWZ	= 517,
    FCTIWZo	= 518,
    FCTIWo	= 519,
    FDIV	= 520,
    FDIVS	= 521,
    FDIVSo	= 522,
    FDIVo	= 523,
    FMADD	= 524,
    FMADDS	= 525,
    FMADDSo	= 526,
    FMADDo	= 527,
    FMR	= 528,
    FMRo	= 529,
    FMSUB	= 530,
    FMSUBS	= 531,
    FMSUBSo	= 532,
    FMSUBo	= 533,
    FMUL	= 534,
    FMULS	= 535,
    FMULSo	= 536,
    FMULo	= 537,
    FNABSD	= 538,
    FNABSDo	= 539,
    FNABSS	= 540,
    FNABSSo	= 541,
    FNEGD	= 542,
    FNEGDo	= 543,
    FNEGS	= 544,
    FNEGSo	= 545,
    FNMADD	= 546,
    FNMADDS	= 547,
    FNMADDSo	= 548,
    FNMADDo	= 549,
    FNMSUB	= 550,
    FNMSUBS	= 551,
    FNMSUBSo	= 552,
    FNMSUBo	= 553,
    FRE	= 554,
    FRES	= 555,
    FRESo	= 556,
    FREo	= 557,
    FRIMD	= 558,
    FRIMDo	= 559,
    FRIMS	= 560,
    FRIMSo	= 561,
    FRIND	= 562,
    FRINDo	= 563,
    FRINS	= 564,
    FRINSo	= 565,
    FRIPD	= 566,
    FRIPDo	= 567,
    FRIPS	= 568,
    FRIPSo	= 569,
    FRIZD	= 570,
    FRIZDo	= 571,
    FRIZS	= 572,
    FRIZSo	= 573,
    FRSP	= 574,
    FRSPo	= 575,
    FRSQRTE	= 576,
    FRSQRTES	= 577,
    FRSQRTESo	= 578,
    FRSQRTEo	= 579,
    FSELD	= 580,
    FSELDo	= 581,
    FSELS	= 582,
    FSELSo	= 583,
    FSQRT	= 584,
    FSQRTS	= 585,
    FSQRTSo	= 586,
    FSQRTo	= 587,
    FSUB	= 588,
    FSUBS	= 589,
    FSUBSo	= 590,
    FSUBo	= 591,
    GETtlsADDR	= 592,
    GETtlsADDR32	= 593,
    GETtlsldADDR	= 594,
    GETtlsldADDR32	= 595,
    ICBI	= 596,
    ICBT	= 597,
    ICCCI	= 598,
    INSLWI	= 599,
    INSLWIo	= 600,
    INSRDI	= 601,
    INSRDIo	= 602,
    INSRWI	= 603,
    INSRWIo	= 604,
    ISEL	= 605,
    ISEL8	= 606,
    ISYNC	= 607,
    LA	= 608,
    LAx	= 609,
    LBARX	= 610,
    LBARXL	= 611,
    LBZ	= 612,
    LBZ8	= 613,
    LBZCIX	= 614,
    LBZU	= 615,
    LBZU8	= 616,
    LBZUX	= 617,
    LBZUX8	= 618,
    LBZX	= 619,
    LBZX8	= 620,
    LD	= 621,
    LDARX	= 622,
    LDARXL	= 623,
    LDBRX	= 624,
    LDCIX	= 625,
    LDU	= 626,
    LDUX	= 627,
    LDX	= 628,
    LDgotTprelL	= 629,
    LDgotTprelL32	= 630,
    LDtoc	= 631,
    LDtocBA	= 632,
    LDtocCPT	= 633,
    LDtocJTI	= 634,
    LDtocL	= 635,
    LFD	= 636,
    LFDU	= 637,
    LFDUX	= 638,
    LFDX	= 639,
    LFIWAX	= 640,
    LFIWZX	= 641,
    LFS	= 642,
    LFSU	= 643,
    LFSUX	= 644,
    LFSX	= 645,
    LHA	= 646,
    LHA8	= 647,
    LHARX	= 648,
    LHARXL	= 649,
    LHAU	= 650,
    LHAU8	= 651,
    LHAUX	= 652,
    LHAUX8	= 653,
    LHAX	= 654,
    LHAX8	= 655,
    LHBRX	= 656,
    LHBRX8	= 657,
    LHZ	= 658,
    LHZ8	= 659,
    LHZCIX	= 660,
    LHZU	= 661,
    LHZU8	= 662,
    LHZUX	= 663,
    LHZUX8	= 664,
    LHZX	= 665,
    LHZX8	= 666,
    LI	= 667,
    LI8	= 668,
    LIS	= 669,
    LIS8	= 670,
    LMW	= 671,
    LSWI	= 672,
    LVEBX	= 673,
    LVEHX	= 674,
    LVEWX	= 675,
    LVSL	= 676,
    LVSR	= 677,
    LVX	= 678,
    LVXL	= 679,
    LWA	= 680,
    LWARX	= 681,
    LWARXL	= 682,
    LWAUX	= 683,
    LWAX	= 684,
    LWAX_32	= 685,
    LWA_32	= 686,
    LWBRX	= 687,
    LWBRX8	= 688,
    LWZ	= 689,
    LWZ8	= 690,
    LWZCIX	= 691,
    LWZU	= 692,
    LWZU8	= 693,
    LWZUX	= 694,
    LWZUX8	= 695,
    LWZX	= 696,
    LWZX8	= 697,
    LWZtoc	= 698,
    LXSDX	= 699,
    LXVD2X	= 700,
    LXVDSX	= 701,
    LXVW4X	= 702,
    MBAR	= 703,
    MCRF	= 704,
    MCRFS	= 705,
    MFCR	= 706,
    MFCR8	= 707,
    MFCTR	= 708,
    MFCTR8	= 709,
    MFDCR	= 710,
    MFFS	= 711,
    MFFSo	= 712,
    MFLR	= 713,
    MFLR8	= 714,
    MFMSR	= 715,
    MFOCRF	= 716,
    MFOCRF8	= 717,
    MFSPR	= 718,
    MFSPR8	= 719,
    MFSR	= 720,
    MFSRIN	= 721,
    MFTB	= 722,
    MFTB8	= 723,
    MFVRSAVE	= 724,
    MFVRSAVEv	= 725,
    MFVSCR	= 726,
    MFVSRD	= 727,
    MFVSRWZ	= 728,
    MSYNC	= 729,
    MTCRF	= 730,
    MTCRF8	= 731,
    MTCTR	= 732,
    MTCTR8	= 733,
    MTCTR8loop	= 734,
    MTCTRloop	= 735,
    MTDCR	= 736,
    MTFSB0	= 737,
    MTFSB1	= 738,
    MTFSF	= 739,
    MTFSFI	= 740,
    MTFSFIo	= 741,
    MTFSFb	= 742,
    MTFSFo	= 743,
    MTLR	= 744,
    MTLR8	= 745,
    MTMSR	= 746,
    MTMSRD	= 747,
    MTOCRF	= 748,
    MTOCRF8	= 749,
    MTSPR	= 750,
    MTSPR8	= 751,
    MTSR	= 752,
    MTSRIN	= 753,
    MTVRSAVE	= 754,
    MTVRSAVEv	= 755,
    MTVSCR	= 756,
    MTVSRD	= 757,
    MTVSRWA	= 758,
    MTVSRWZ	= 759,
    MULHD	= 760,
    MULHDU	= 761,
    MULHDUo	= 762,
    MULHDo	= 763,
    MULHW	= 764,
    MULHWU	= 765,
    MULHWUo	= 766,
    MULHWo	= 767,
    MULLD	= 768,
    MULLDo	= 769,
    MULLI	= 770,
    MULLI8	= 771,
    MULLW	= 772,
    MULLWo	= 773,
    MoveGOTtoLR	= 774,
    MovePCtoLR	= 775,
    MovePCtoLR8	= 776,
    NAND	= 777,
    NAND8	= 778,
    NAND8o	= 779,
    NANDo	= 780,
    NEG	= 781,
    NEG8	= 782,
    NEG8o	= 783,
    NEGo	= 784,
    NOP	= 785,
    NOP_GT_PWR6	= 786,
    NOP_GT_PWR7	= 787,
    NOR	= 788,
    NOR8	= 789,
    NOR8o	= 790,
    NORo	= 791,
    OR	= 792,
    OR8	= 793,
    OR8o	= 794,
    ORC	= 795,
    ORC8	= 796,
    ORC8o	= 797,
    ORCo	= 798,
    ORI	= 799,
    ORI8	= 800,
    ORIS	= 801,
    ORIS8	= 802,
    ORo	= 803,
    POPCNTD	= 804,
    POPCNTW	= 805,
    PPC32GOT	= 806,
    PPC32PICGOT	= 807,
    QVALIGNI	= 808,
    QVALIGNIb	= 809,
    QVALIGNIs	= 810,
    QVESPLATI	= 811,
    QVESPLATIb	= 812,
    QVESPLATIs	= 813,
    QVFABS	= 814,
    QVFABSs	= 815,
    QVFADD	= 816,
    QVFADDS	= 817,
    QVFADDSs	= 818,
    QVFCFID	= 819,
    QVFCFIDS	= 820,
    QVFCFIDU	= 821,
    QVFCFIDUS	= 822,
    QVFCFIDb	= 823,
    QVFCMPEQ	= 824,
    QVFCMPEQb	= 825,
    QVFCMPEQbs	= 826,
    QVFCMPGT	= 827,
    QVFCMPGTb	= 828,
    QVFCMPGTbs	= 829,
    QVFCMPLT	= 830,
    QVFCMPLTb	= 831,
    QVFCMPLTbs	= 832,
    QVFCPSGN	= 833,
    QVFCPSGNs	= 834,
    QVFCTID	= 835,
    QVFCTIDU	= 836,
    QVFCTIDUZ	= 837,
    QVFCTIDZ	= 838,
    QVFCTIDb	= 839,
    QVFCTIW	= 840,
    QVFCTIWU	= 841,
    QVFCTIWUZ	= 842,
    QVFCTIWZ	= 843,
    QVFLOGICAL	= 844,
    QVFLOGICALb	= 845,
    QVFLOGICALs	= 846,
    QVFMADD	= 847,
    QVFMADDS	= 848,
    QVFMADDSs	= 849,
    QVFMR	= 850,
    QVFMRb	= 851,
    QVFMRs	= 852,
    QVFMSUB	= 853,
    QVFMSUBS	= 854,
    QVFMSUBSs	= 855,
    QVFMUL	= 856,
    QVFMULS	= 857,
    QVFMULSs	= 858,
    QVFNABS	= 859,
    QVFNABSs	= 860,
    QVFNEG	= 861,
    QVFNEGs	= 862,
    QVFNMADD	= 863,
    QVFNMADDS	= 864,
    QVFNMADDSs	= 865,
    QVFNMSUB	= 866,
    QVFNMSUBS	= 867,
    QVFNMSUBSs	= 868,
    QVFPERM	= 869,
    QVFPERMs	= 870,
    QVFRE	= 871,
    QVFRES	= 872,
    QVFRESs	= 873,
    QVFRIM	= 874,
    QVFRIMs	= 875,
    QVFRIN	= 876,
    QVFRINs	= 877,
    QVFRIP	= 878,
    QVFRIPs	= 879,
    QVFRIZ	= 880,
    QVFRIZs	= 881,
    QVFRSP	= 882,
    QVFRSPs	= 883,
    QVFRSQRTE	= 884,
    QVFRSQRTES	= 885,
    QVFRSQRTESs	= 886,
    QVFSEL	= 887,
    QVFSELb	= 888,
    QVFSELbb	= 889,
    QVFSELbs	= 890,
    QVFSUB	= 891,
    QVFSUBS	= 892,
    QVFSUBSs	= 893,
    QVFTSTNAN	= 894,
    QVFTSTNANb	= 895,
    QVFTSTNANbs	= 896,
    QVFXMADD	= 897,
    QVFXMADDS	= 898,
    QVFXMUL	= 899,
    QVFXMULS	= 900,
    QVFXXCPNMADD	= 901,
    QVFXXCPNMADDS	= 902,
    QVFXXMADD	= 903,
    QVFXXMADDS	= 904,
    QVFXXNPMADD	= 905,
    QVFXXNPMADDS	= 906,
    QVGPCI	= 907,
    QVLFCDUX	= 908,
    QVLFCDUXA	= 909,
    QVLFCDX	= 910,
    QVLFCDXA	= 911,
    QVLFCSUX	= 912,
    QVLFCSUXA	= 913,
    QVLFCSX	= 914,
    QVLFCSXA	= 915,
    QVLFCSXs	= 916,
    QVLFDUX	= 917,
    QVLFDUXA	= 918,
    QVLFDX	= 919,
    QVLFDXA	= 920,
    QVLFDXb	= 921,
    QVLFIWAX	= 922,
    QVLFIWAXA	= 923,
    QVLFIWZX	= 924,
    QVLFIWZXA	= 925,
    QVLFSUX	= 926,
    QVLFSUXA	= 927,
    QVLFSX	= 928,
    QVLFSXA	= 929,
    QVLFSXb	= 930,
    QVLFSXs	= 931,
    QVLPCLDX	= 932,
    QVLPCLSX	= 933,
    QVLPCLSXint	= 934,
    QVLPCRDX	= 935,
    QVLPCRSX	= 936,
    QVSTFCDUX	= 937,
    QVSTFCDUXA	= 938,
    QVSTFCDUXI	= 939,
    QVSTFCDUXIA	= 940,
    QVSTFCDX	= 941,
    QVSTFCDXA	= 942,
    QVSTFCDXI	= 943,
    QVSTFCDXIA	= 944,
    QVSTFCSUX	= 945,
    QVSTFCSUXA	= 946,
    QVSTFCSUXI	= 947,
    QVSTFCSUXIA	= 948,
    QVSTFCSX	= 949,
    QVSTFCSXA	= 950,
    QVSTFCSXI	= 951,
    QVSTFCSXIA	= 952,
    QVSTFCSXs	= 953,
    QVSTFDUX	= 954,
    QVSTFDUXA	= 955,
    QVSTFDUXI	= 956,
    QVSTFDUXIA	= 957,
    QVSTFDX	= 958,
    QVSTFDXA	= 959,
    QVSTFDXI	= 960,
    QVSTFDXIA	= 961,
    QVSTFDXb	= 962,
    QVSTFIWX	= 963,
    QVSTFIWXA	= 964,
    QVSTFSUX	= 965,
    QVSTFSUXA	= 966,
    QVSTFSUXI	= 967,
    QVSTFSUXIA	= 968,
    QVSTFSUXs	= 969,
    QVSTFSX	= 970,
    QVSTFSXA	= 971,
    QVSTFSXI	= 972,
    QVSTFSXIA	= 973,
    QVSTFSXs	= 974,
    RESTORE_CR	= 975,
    RESTORE_CRBIT	= 976,
    RESTORE_VRSAVE	= 977,
    RFCI	= 978,
    RFDI	= 979,
    RFI	= 980,
    RFID	= 981,
    RFMCI	= 982,
    RLDCL	= 983,
    RLDCLo	= 984,
    RLDCR	= 985,
    RLDCRo	= 986,
    RLDIC	= 987,
    RLDICL	= 988,
    RLDICL_32_64	= 989,
    RLDICLo	= 990,
    RLDICR	= 991,
    RLDICRo	= 992,
    RLDICo	= 993,
    RLDIMI	= 994,
    RLDIMIo	= 995,
    RLWIMI	= 996,
    RLWIMI8	= 997,
    RLWIMI8o	= 998,
    RLWIMIbm	= 999,
    RLWIMIo	= 1000,
    RLWIMIobm	= 1001,
    RLWINM	= 1002,
    RLWINM8	= 1003,
    RLWINM8o	= 1004,
    RLWINMbm	= 1005,
    RLWINMo	= 1006,
    RLWINMobm	= 1007,
    RLWNM	= 1008,
    RLWNM8	= 1009,
    RLWNM8o	= 1010,
    RLWNMbm	= 1011,
    RLWNMo	= 1012,
    RLWNMobm	= 1013,
    ROTRDI	= 1014,
    ROTRDIo	= 1015,
    ROTRWI	= 1016,
    ROTRWIo	= 1017,
    ReadTB	= 1018,
    SC	= 1019,
    SELECT_CC_F4	= 1020,
    SELECT_CC_F8	= 1021,
    SELECT_CC_I4	= 1022,
    SELECT_CC_I8	= 1023,
    SELECT_CC_QBRC	= 1024,
    SELECT_CC_QFRC	= 1025,
    SELECT_CC_QSRC	= 1026,
    SELECT_CC_VRRC	= 1027,
    SELECT_CC_VSFRC	= 1028,
    SELECT_CC_VSRC	= 1029,
    SELECT_F4	= 1030,
    SELECT_F8	= 1031,
    SELECT_I4	= 1032,
    SELECT_I8	= 1033,
    SELECT_QBRC	= 1034,
    SELECT_QFRC	= 1035,
    SELECT_QSRC	= 1036,
    SELECT_VRRC	= 1037,
    SELECT_VSFRC	= 1038,
    SELECT_VSRC	= 1039,
    SLBIA	= 1040,
    SLBIE	= 1041,
    SLBMFEE	= 1042,
    SLBMTE	= 1043,
    SLD	= 1044,
    SLDI	= 1045,
    SLDIo	= 1046,
    SLDo	= 1047,
    SLW	= 1048,
    SLW8	= 1049,
    SLW8o	= 1050,
    SLWI	= 1051,
    SLWIo	= 1052,
    SLWo	= 1053,
    SPILL_CR	= 1054,
    SPILL_CRBIT	= 1055,
    SPILL_VRSAVE	= 1056,
    SRAD	= 1057,
    SRADI	= 1058,
    SRADIo	= 1059,
    SRADo	= 1060,
    SRAW	= 1061,
    SRAWI	= 1062,
    SRAWIo	= 1063,
    SRAWo	= 1064,
    SRD	= 1065,
    SRDI	= 1066,
    SRDIo	= 1067,
    SRDo	= 1068,
    SRW	= 1069,
    SRW8	= 1070,
    SRW8o	= 1071,
    SRWI	= 1072,
    SRWIo	= 1073,
    SRWo	= 1074,
    STB	= 1075,
    STB8	= 1076,
    STBCIX	= 1077,
    STBCX	= 1078,
    STBU	= 1079,
    STBU8	= 1080,
    STBUX	= 1081,
    STBUX8	= 1082,
    STBX	= 1083,
    STBX8	= 1084,
    STD	= 1085,
    STDBRX	= 1086,
    STDCIX	= 1087,
    STDCX	= 1088,
    STDU	= 1089,
    STDUX	= 1090,
    STDX	= 1091,
    STFD	= 1092,
    STFDU	= 1093,
    STFDUX	= 1094,
    STFDX	= 1095,
    STFIWX	= 1096,
    STFS	= 1097,
    STFSU	= 1098,
    STFSUX	= 1099,
    STFSX	= 1100,
    STH	= 1101,
    STH8	= 1102,
    STHBRX	= 1103,
    STHCIX	= 1104,
    STHCX	= 1105,
    STHU	= 1106,
    STHU8	= 1107,
    STHUX	= 1108,
    STHUX8	= 1109,
    STHX	= 1110,
    STHX8	= 1111,
    STMW	= 1112,
    STSWI	= 1113,
    STVEBX	= 1114,
    STVEHX	= 1115,
    STVEWX	= 1116,
    STVX	= 1117,
    STVXL	= 1118,
    STW	= 1119,
    STW8	= 1120,
    STWBRX	= 1121,
    STWCIX	= 1122,
    STWCX	= 1123,
    STWU	= 1124,
    STWU8	= 1125,
    STWUX	= 1126,
    STWUX8	= 1127,
    STWX	= 1128,
    STWX8	= 1129,
    STXSDX	= 1130,
    STXVD2X	= 1131,
    STXVW4X	= 1132,
    SUBF	= 1133,
    SUBF8	= 1134,
    SUBF8o	= 1135,
    SUBFC	= 1136,
    SUBFC8	= 1137,
    SUBFC8o	= 1138,
    SUBFCo	= 1139,
    SUBFE	= 1140,
    SUBFE8	= 1141,
    SUBFE8o	= 1142,
    SUBFEo	= 1143,
    SUBFIC	= 1144,
    SUBFIC8	= 1145,
    SUBFME	= 1146,
    SUBFME8	= 1147,
    SUBFME8o	= 1148,
    SUBFMEo	= 1149,
    SUBFZE	= 1150,
    SUBFZE8	= 1151,
    SUBFZE8o	= 1152,
    SUBFZEo	= 1153,
    SUBFo	= 1154,
    SUBI	= 1155,
    SUBIC	= 1156,
    SUBICo	= 1157,
    SUBIS	= 1158,
    SYNC	= 1159,
    TABORT	= 1160,
    TABORTDC	= 1161,
    TABORTDCI	= 1162,
    TABORTWC	= 1163,
    TABORTWCI	= 1164,
    TAILB	= 1165,
    TAILB8	= 1166,
    TAILBA	= 1167,
    TAILBA8	= 1168,
    TAILBCTR	= 1169,
    TAILBCTR8	= 1170,
    TBEGIN	= 1171,
    TCHECK	= 1172,
    TCHECK_RET	= 1173,
    TCRETURNai	= 1174,
    TCRETURNai8	= 1175,
    TCRETURNdi	= 1176,
    TCRETURNdi8	= 1177,
    TCRETURNri	= 1178,
    TCRETURNri8	= 1179,
    TD	= 1180,
    TDI	= 1181,
    TEND	= 1182,
    TLBIA	= 1183,
    TLBIE	= 1184,
    TLBIEL	= 1185,
    TLBIVAX	= 1186,
    TLBLD	= 1187,
    TLBLI	= 1188,
    TLBRE	= 1189,
    TLBRE2	= 1190,
    TLBSX	= 1191,
    TLBSX2	= 1192,
    TLBSX2D	= 1193,
    TLBSYNC	= 1194,
    TLBWE	= 1195,
    TLBWE2	= 1196,
    TRAP	= 1197,
    TRECHKPT	= 1198,
    TRECLAIM	= 1199,
    TSR	= 1200,
    TW	= 1201,
    TWI	= 1202,
    UPDATE_VRSAVE	= 1203,
    UpdateGBR	= 1204,
    VADDCUW	= 1205,
    VADDFP	= 1206,
    VADDSBS	= 1207,
    VADDSHS	= 1208,
    VADDSWS	= 1209,
    VADDUBM	= 1210,
    VADDUBS	= 1211,
    VADDUDM	= 1212,
    VADDUHM	= 1213,
    VADDUHS	= 1214,
    VADDUWM	= 1215,
    VADDUWS	= 1216,
    VAND	= 1217,
    VANDC	= 1218,
    VAVGSB	= 1219,
    VAVGSH	= 1220,
    VAVGSW	= 1221,
    VAVGUB	= 1222,
    VAVGUH	= 1223,
    VAVGUW	= 1224,
    VCFSX	= 1225,
    VCFSX_0	= 1226,
    VCFUX	= 1227,
    VCFUX_0	= 1228,
    VCIPHER	= 1229,
    VCIPHERLAST	= 1230,
    VCLZB	= 1231,
    VCLZD	= 1232,
    VCLZH	= 1233,
    VCLZW	= 1234,
    VCMPBFP	= 1235,
    VCMPBFPo	= 1236,
    VCMPEQFP	= 1237,
    VCMPEQFPo	= 1238,
    VCMPEQUB	= 1239,
    VCMPEQUBo	= 1240,
    VCMPEQUD	= 1241,
    VCMPEQUDo	= 1242,
    VCMPEQUH	= 1243,
    VCMPEQUHo	= 1244,
    VCMPEQUW	= 1245,
    VCMPEQUWo	= 1246,
    VCMPGEFP	= 1247,
    VCMPGEFPo	= 1248,
    VCMPGTFP	= 1249,
    VCMPGTFPo	= 1250,
    VCMPGTSB	= 1251,
    VCMPGTSBo	= 1252,
    VCMPGTSD	= 1253,
    VCMPGTSDo	= 1254,
    VCMPGTSH	= 1255,
    VCMPGTSHo	= 1256,
    VCMPGTSW	= 1257,
    VCMPGTSWo	= 1258,
    VCMPGTUB	= 1259,
    VCMPGTUBo	= 1260,
    VCMPGTUD	= 1261,
    VCMPGTUDo	= 1262,
    VCMPGTUH	= 1263,
    VCMPGTUHo	= 1264,
    VCMPGTUW	= 1265,
    VCMPGTUWo	= 1266,
    VCTSXS	= 1267,
    VCTSXS_0	= 1268,
    VCTUXS	= 1269,
    VCTUXS_0	= 1270,
    VEQV	= 1271,
    VEXPTEFP	= 1272,
    VLOGEFP	= 1273,
    VMADDFP	= 1274,
    VMAXFP	= 1275,
    VMAXSB	= 1276,
    VMAXSD	= 1277,
    VMAXSH	= 1278,
    VMAXSW	= 1279,
    VMAXUB	= 1280,
    VMAXUD	= 1281,
    VMAXUH	= 1282,
    VMAXUW	= 1283,
    VMHADDSHS	= 1284,
    VMHRADDSHS	= 1285,
    VMINFP	= 1286,
    VMINSB	= 1287,
    VMINSD	= 1288,
    VMINSH	= 1289,
    VMINSW	= 1290,
    VMINUB	= 1291,
    VMINUD	= 1292,
    VMINUH	= 1293,
    VMINUW	= 1294,
    VMLADDUHM	= 1295,
    VMRGHB	= 1296,
    VMRGHH	= 1297,
    VMRGHW	= 1298,
    VMRGLB	= 1299,
    VMRGLH	= 1300,
    VMRGLW	= 1301,
    VMSUMMBM	= 1302,
    VMSUMSHM	= 1303,
    VMSUMSHS	= 1304,
    VMSUMUBM	= 1305,
    VMSUMUHM	= 1306,
    VMSUMUHS	= 1307,
    VMULESB	= 1308,
    VMULESH	= 1309,
    VMULESW	= 1310,
    VMULEUB	= 1311,
    VMULEUH	= 1312,
    VMULEUW	= 1313,
    VMULOSB	= 1314,
    VMULOSH	= 1315,
    VMULOSW	= 1316,
    VMULOUB	= 1317,
    VMULOUH	= 1318,
    VMULOUW	= 1319,
    VMULUWM	= 1320,
    VNAND	= 1321,
    VNCIPHER	= 1322,
    VNCIPHERLAST	= 1323,
    VNMSUBFP	= 1324,
    VNOR	= 1325,
    VOR	= 1326,
    VORC	= 1327,
    VPERM	= 1328,
    VPERMXOR	= 1329,
    VPKPX	= 1330,
    VPKSHSS	= 1331,
    VPKSHUS	= 1332,
    VPKSWSS	= 1333,
    VPKSWUS	= 1334,
    VPKUHUM	= 1335,
    VPKUHUS	= 1336,
    VPKUWUM	= 1337,
    VPKUWUS	= 1338,
    VPMSUMB	= 1339,
    VPMSUMD	= 1340,
    VPMSUMH	= 1341,
    VPMSUMW	= 1342,
    VPOPCNTB	= 1343,
    VPOPCNTD	= 1344,
    VPOPCNTH	= 1345,
    VPOPCNTW	= 1346,
    VREFP	= 1347,
    VRFIM	= 1348,
    VRFIN	= 1349,
    VRFIP	= 1350,
    VRFIZ	= 1351,
    VRLB	= 1352,
    VRLD	= 1353,
    VRLH	= 1354,
    VRLW	= 1355,
    VRSQRTEFP	= 1356,
    VSBOX	= 1357,
    VSEL	= 1358,
    VSHASIGMAD	= 1359,
    VSHASIGMAW	= 1360,
    VSL	= 1361,
    VSLB	= 1362,
    VSLD	= 1363,
    VSLDOI	= 1364,
    VSLH	= 1365,
    VSLO	= 1366,
    VSLW	= 1367,
    VSPLTB	= 1368,
    VSPLTH	= 1369,
    VSPLTISB	= 1370,
    VSPLTISH	= 1371,
    VSPLTISW	= 1372,
    VSPLTW	= 1373,
    VSR	= 1374,
    VSRAB	= 1375,
    VSRAD	= 1376,
    VSRAH	= 1377,
    VSRAW	= 1378,
    VSRB	= 1379,
    VSRD	= 1380,
    VSRH	= 1381,
    VSRO	= 1382,
    VSRW	= 1383,
    VSUBCUW	= 1384,
    VSUBFP	= 1385,
    VSUBSBS	= 1386,
    VSUBSHS	= 1387,
    VSUBSWS	= 1388,
    VSUBUBM	= 1389,
    VSUBUBS	= 1390,
    VSUBUDM	= 1391,
    VSUBUHM	= 1392,
    VSUBUHS	= 1393,
    VSUBUWM	= 1394,
    VSUBUWS	= 1395,
    VSUM2SWS	= 1396,
    VSUM4SBS	= 1397,
    VSUM4SHS	= 1398,
    VSUM4UBS	= 1399,
    VSUMSWS	= 1400,
    VUPKHPX	= 1401,
    VUPKHSB	= 1402,
    VUPKHSH	= 1403,
    VUPKLPX	= 1404,
    VUPKLSB	= 1405,
    VUPKLSH	= 1406,
    VXOR	= 1407,
    V_SET0	= 1408,
    V_SET0B	= 1409,
    V_SET0H	= 1410,
    V_SETALLONES	= 1411,
    V_SETALLONESB	= 1412,
    V_SETALLONESH	= 1413,
    WAIT	= 1414,
    WRTEE	= 1415,
    WRTEEI	= 1416,
    XOR	= 1417,
    XOR8	= 1418,
    XOR8o	= 1419,
    XORI	= 1420,
    XORI8	= 1421,
    XORIS	= 1422,
    XORIS8	= 1423,
    XORo	= 1424,
    XSABSDP	= 1425,
    XSADDDP	= 1426,
    XSCMPODP	= 1427,
    XSCMPUDP	= 1428,
    XSCPSGNDP	= 1429,
    XSCVDPSP	= 1430,
    XSCVDPSXDS	= 1431,
    XSCVDPSXWS	= 1432,
    XSCVDPUXDS	= 1433,
    XSCVDPUXWS	= 1434,
    XSCVSPDP	= 1435,
    XSCVSXDDP	= 1436,
    XSCVUXDDP	= 1437,
    XSDIVDP	= 1438,
    XSMADDADP	= 1439,
    XSMADDMDP	= 1440,
    XSMAXDP	= 1441,
    XSMINDP	= 1442,
    XSMSUBADP	= 1443,
    XSMSUBMDP	= 1444,
    XSMULDP	= 1445,
    XSNABSDP	= 1446,
    XSNEGDP	= 1447,
    XSNMADDADP	= 1448,
    XSNMADDMDP	= 1449,
    XSNMSUBADP	= 1450,
    XSNMSUBMDP	= 1451,
    XSRDPI	= 1452,
    XSRDPIC	= 1453,
    XSRDPIM	= 1454,
    XSRDPIP	= 1455,
    XSRDPIZ	= 1456,
    XSREDP	= 1457,
    XSRSQRTEDP	= 1458,
    XSSQRTDP	= 1459,
    XSSUBDP	= 1460,
    XSTDIVDP	= 1461,
    XSTSQRTDP	= 1462,
    XVABSDP	= 1463,
    XVABSSP	= 1464,
    XVADDDP	= 1465,
    XVADDSP	= 1466,
    XVCMPEQDP	= 1467,
    XVCMPEQDPo	= 1468,
    XVCMPEQSP	= 1469,
    XVCMPEQSPo	= 1470,
    XVCMPGEDP	= 1471,
    XVCMPGEDPo	= 1472,
    XVCMPGESP	= 1473,
    XVCMPGESPo	= 1474,
    XVCMPGTDP	= 1475,
    XVCMPGTDPo	= 1476,
    XVCMPGTSP	= 1477,
    XVCMPGTSPo	= 1478,
    XVCPSGNDP	= 1479,
    XVCPSGNSP	= 1480,
    XVCVDPSP	= 1481,
    XVCVDPSXDS	= 1482,
    XVCVDPSXWS	= 1483,
    XVCVDPUXDS	= 1484,
    XVCVDPUXWS	= 1485,
    XVCVSPDP	= 1486,
    XVCVSPSXDS	= 1487,
    XVCVSPSXWS	= 1488,
    XVCVSPUXDS	= 1489,
    XVCVSPUXWS	= 1490,
    XVCVSXDDP	= 1491,
    XVCVSXDSP	= 1492,
    XVCVSXWDP	= 1493,
    XVCVSXWSP	= 1494,
    XVCVUXDDP	= 1495,
    XVCVUXDSP	= 1496,
    XVCVUXWDP	= 1497,
    XVCVUXWSP	= 1498,
    XVDIVDP	= 1499,
    XVDIVSP	= 1500,
    XVMADDADP	= 1501,
    XVMADDASP	= 1502,
    XVMADDMDP	= 1503,
    XVMADDMSP	= 1504,
    XVMAXDP	= 1505,
    XVMAXSP	= 1506,
    XVMINDP	= 1507,
    XVMINSP	= 1508,
    XVMSUBADP	= 1509,
    XVMSUBASP	= 1510,
    XVMSUBMDP	= 1511,
    XVMSUBMSP	= 1512,
    XVMULDP	= 1513,
    XVMULSP	= 1514,
    XVNABSDP	= 1515,
    XVNABSSP	= 1516,
    XVNEGDP	= 1517,
    XVNEGSP	= 1518,
    XVNMADDADP	= 1519,
    XVNMADDASP	= 1520,
    XVNMADDMDP	= 1521,
    XVNMADDMSP	= 1522,
    XVNMSUBADP	= 1523,
    XVNMSUBASP	= 1524,
    XVNMSUBMDP	= 1525,
    XVNMSUBMSP	= 1526,
    XVRDPI	= 1527,
    XVRDPIC	= 1528,
    XVRDPIM	= 1529,
    XVRDPIP	= 1530,
    XVRDPIZ	= 1531,
    XVREDP	= 1532,
    XVRESP	= 1533,
    XVRSPI	= 1534,
    XVRSPIC	= 1535,
    XVRSPIM	= 1536,
    XVRSPIP	= 1537,
    XVRSPIZ	= 1538,
    XVRSQRTEDP	= 1539,
    XVRSQRTESP	= 1540,
    XVSQRTDP	= 1541,
    XVSQRTSP	= 1542,
    XVSUBDP	= 1543,
    XVSUBSP	= 1544,
    XVTDIVDP	= 1545,
    XVTDIVSP	= 1546,
    XVTSQRTDP	= 1547,
    XVTSQRTSP	= 1548,
    XXLAND	= 1549,
    XXLANDC	= 1550,
    XXLEQV	= 1551,
    XXLNAND	= 1552,
    XXLNOR	= 1553,
    XXLOR	= 1554,
    XXLORC	= 1555,
    XXLORf	= 1556,
    XXLXOR	= 1557,
    XXMRGHW	= 1558,
    XXMRGLW	= 1559,
    XXPERMDI	= 1560,
    XXSEL	= 1561,
    XXSLDWI	= 1562,
    XXSPLTW	= 1563,
    gBC	= 1564,
    gBCA	= 1565,
    gBCCTR	= 1566,
    gBCCTRL	= 1567,
    gBCL	= 1568,
    gBCLA	= 1569,
    gBCLR	= 1570,
    gBCLRL	= 1571,
    INSTRUCTION_LIST_END = 1572
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_IntSimple	= 1,
    IIC_IntGeneral	= 2,
    IIC_BrB	= 3,
    IIC_VecFP	= 4,
    IIC_IntCompare	= 5,
    IIC_BrCR	= 6,
    IIC_LdStDCBF	= 7,
    IIC_LdStLoad	= 8,
    IIC_IntDivD	= 9,
    IIC_IntDivW	= 10,
    IIC_FPGeneral	= 11,
    IIC_FPAddSub	= 12,
    IIC_FPCompare	= 13,
    IIC_FPDivD	= 14,
    IIC_FPDivS	= 15,
    IIC_FPFused	= 16,
    IIC_FPSqrtD	= 17,
    IIC_FPSqrtS	= 18,
    IIC_LdStICBI	= 19,
    IIC_IntISEL	= 20,
    IIC_SprISYNC	= 21,
    IIC_LdStLWARX	= 22,
    IIC_LdStLoadUpd	= 23,
    IIC_LdStLoadUpdX	= 24,
    IIC_LdStLD	= 25,
    IIC_LdStLDARX	= 26,
    IIC_LdStLDU	= 27,
    IIC_LdStLDUX	= 28,
    IIC_LdStLFD	= 29,
    IIC_LdStLFDU	= 30,
    IIC_LdStLFDUX	= 31,
    IIC_LdStLHA	= 32,
    IIC_LdStLHAU	= 33,
    IIC_LdStLHAUX	= 34,
    IIC_LdStLMW	= 35,
    IIC_LdStLWA	= 36,
    IIC_BrMCR	= 37,
    IIC_SprMFCR	= 38,
    IIC_SprMFSPR	= 39,
    IIC_IntMFFS	= 40,
    IIC_SprMFMSR	= 41,
    IIC_SprMFCRF	= 42,
    IIC_SprMFSR	= 43,
    IIC_SprMFTB	= 44,
    IIC_LdStStore	= 45,
    IIC_VecGeneral	= 46,
    IIC_LdStSync	= 47,
    IIC_BrMCRX	= 48,
    IIC_SprMTSPR	= 49,
    IIC_IntMTFSB0	= 50,
    IIC_SprMTMSR	= 51,
    IIC_SprMTMSRD	= 52,
    IIC_SprMTSR	= 53,
    IIC_IntMulHW	= 54,
    IIC_IntMulHWU	= 55,
    IIC_IntMulHD	= 56,
    IIC_IntMulLI	= 57,
    IIC_VecPerm	= 58,
    IIC_LdStSTFD	= 59,
    IIC_LdStSTFDU	= 60,
    IIC_SprRFI	= 61,
    IIC_IntRFID	= 62,
    IIC_IntRotateD	= 63,
    IIC_IntRotateDI	= 64,
    IIC_IntRotate	= 65,
    IIC_SprSLBIA	= 66,
    IIC_SprSLBIE	= 67,
    IIC_SprSLBMFEE	= 68,
    IIC_SprSLBMTE	= 69,
    IIC_IntShift	= 70,
    IIC_LdStSTWCX	= 71,
    IIC_LdStStoreUpd	= 72,
    IIC_LdStSTD	= 73,
    IIC_LdStSTDCX	= 74,
    IIC_LdStSTDU	= 75,
    IIC_LdStSTDUX	= 76,
    IIC_IntTrapD	= 77,
    IIC_SprTLBIA	= 78,
    IIC_SprTLBIE	= 79,
    IIC_SprTLBIEL	= 80,
    IIC_SprTLBSYNC	= 81,
    IIC_IntTrapW	= 82,
    IIC_VecFPCompare	= 83,
    SCHED_LIST_END = 84
  };
} // End Sched namespace
} // End PPC namespace
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList2[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList3[] = { PPC::CARRY, PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::X0, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::LR8, PPC::CTR8, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList5[] = { PPC::R0, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::LR, PPC::CTR, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList6[] = { PPC::R1, 0 };
static const uint16_t ImplicitList7[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList8[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList9[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList10[] = { PPC::LR, 0 };
static const uint16_t ImplicitList11[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList13[] = { PPC::RM, 0 };
static const uint16_t ImplicitList14[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList15[] = { PPC::LR8, PPC::X2, 0 };
static const uint16_t ImplicitList16[] = { PPC::CTR, PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList17[] = { PPC::CTR8, PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList18[] = { PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList19[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList20[] = { PPC::X1, 0 };
static const uint16_t ImplicitList21[] = { PPC::CR1, 0 };
static const uint16_t ImplicitList22[] = { PPC::X0, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::LR8, PPC::CTR8, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList23[] = { PPC::R0, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::LR, PPC::CTR, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList24[] = { PPC::CR6, 0 };
static const uint16_t ImplicitList25[] = { PPC::LR, PPC::CTR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo167[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo168[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo171[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo173[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4,0,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6,0,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9,0,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #21 = FRAME_ALLOC
  { 22,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #22 = ADD4
  { 23,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #23 = ADD4TLS
  { 24,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #24 = ADD4o
  { 25,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #25 = ADD8
  { 26,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #26 = ADD8TLS
  { 27,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #27 = ADD8TLS_
  { 28,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #28 = ADD8o
  { 29,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #29 = ADDC
  { 30,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #30 = ADDC8
  { 31,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList3, OperandInfo14,0,nullptr },  // Inst #31 = ADDC8o
  { 32,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #32 = ADDCo
  { 33,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #33 = ADDE
  { 34,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #34 = ADDE8
  { 35,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14,0,nullptr },  // Inst #35 = ADDE8o
  { 36,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #36 = ADDEo
  { 37,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #37 = ADDI
  { 38,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #38 = ADDI8
  { 39,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #39 = ADDIC
  { 40,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo15,0,nullptr },  // Inst #40 = ADDIC8
  { 41,	3,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, ImplicitList3, OperandInfo13,0,nullptr },  // Inst #41 = ADDICo
  { 42,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #42 = ADDIS
  { 43,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #43 = ADDIS8
  { 44,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #44 = ADDISdtprelHA
  { 45,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #45 = ADDISdtprelHA32
  { 46,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #46 = ADDISgotTprelHA
  { 47,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #47 = ADDIStlsgdHA
  { 48,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #48 = ADDIStlsldHA
  { 49,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #49 = ADDIStocHA
  { 50,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #50 = ADDIdtprelL
  { 51,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #51 = ADDIdtprelL32
  { 52,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #52 = ADDItlsgdL
  { 53,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #53 = ADDItlsgdL32
  { 54,	4,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo18,0,nullptr },  // Inst #54 = ADDItlsgdLADDR
  { 55,	4,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList5, OperandInfo19,0,nullptr },  // Inst #55 = ADDItlsgdLADDR32
  { 56,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #56 = ADDItlsldL
  { 57,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #57 = ADDItlsldL32
  { 58,	4,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo18,0,nullptr },  // Inst #58 = ADDItlsldLADDR
  { 59,	4,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList5, OperandInfo19,0,nullptr },  // Inst #59 = ADDItlsldLADDR32
  { 60,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #60 = ADDItocL
  { 61,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20,0,nullptr },  // Inst #61 = ADDME
  { 62,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21,0,nullptr },  // Inst #62 = ADDME8
  { 63,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21,0,nullptr },  // Inst #63 = ADDME8o
  { 64,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20,0,nullptr },  // Inst #64 = ADDMEo
  { 65,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20,0,nullptr },  // Inst #65 = ADDZE
  { 66,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21,0,nullptr },  // Inst #66 = ADDZE8
  { 67,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21,0,nullptr },  // Inst #67 = ADDZE8o
  { 68,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20,0,nullptr },  // Inst #68 = ADDZEo
  { 69,	1,	0,	0,	4,	0, 0x0ULL, ImplicitList6, ImplicitList6, OperandInfo5,0,nullptr },  // Inst #69 = ADJCALLSTACKDOWN
  { 70,	2,	0,	0,	4,	0, 0x0ULL, ImplicitList6, ImplicitList6, OperandInfo7,0,nullptr },  // Inst #70 = ADJCALLSTACKUP
  { 71,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #71 = AND
  { 72,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #72 = AND8
  { 73,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #73 = AND8o
  { 74,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #74 = ANDC
  { 75,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #75 = ANDC8
  { 76,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #76 = ANDC8o
  { 77,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #77 = ANDCo
  { 78,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #78 = ANDISo
  { 79,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #79 = ANDISo8
  { 80,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #80 = ANDIo
  { 81,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #81 = ANDIo8
  { 82,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #82 = ANDIo_1_EQ_BIT
  { 83,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #83 = ANDIo_1_EQ_BIT8
  { 84,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #84 = ANDIo_1_GT_BIT
  { 85,	2,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #85 = ANDIo_1_GT_BIT8
  { 86,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #86 = ANDo
  { 87,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #87 = ATOMIC_CMP_SWAP_I16
  { 88,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #88 = ATOMIC_CMP_SWAP_I32
  { 89,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #89 = ATOMIC_CMP_SWAP_I64
  { 90,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #90 = ATOMIC_CMP_SWAP_I8
  { 91,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #91 = ATOMIC_LOAD_ADD_I16
  { 92,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #92 = ATOMIC_LOAD_ADD_I32
  { 93,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #93 = ATOMIC_LOAD_ADD_I64
  { 94,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #94 = ATOMIC_LOAD_ADD_I8
  { 95,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #95 = ATOMIC_LOAD_AND_I16
  { 96,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #96 = ATOMIC_LOAD_AND_I32
  { 97,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #97 = ATOMIC_LOAD_AND_I64
  { 98,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #98 = ATOMIC_LOAD_AND_I8
  { 99,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #99 = ATOMIC_LOAD_NAND_I16
  { 100,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #100 = ATOMIC_LOAD_NAND_I32
  { 101,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #101 = ATOMIC_LOAD_NAND_I64
  { 102,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #102 = ATOMIC_LOAD_NAND_I8
  { 103,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #103 = ATOMIC_LOAD_OR_I16
  { 104,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #104 = ATOMIC_LOAD_OR_I32
  { 105,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #105 = ATOMIC_LOAD_OR_I64
  { 106,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #106 = ATOMIC_LOAD_OR_I8
  { 107,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #107 = ATOMIC_LOAD_SUB_I16
  { 108,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #108 = ATOMIC_LOAD_SUB_I32
  { 109,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #109 = ATOMIC_LOAD_SUB_I64
  { 110,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #110 = ATOMIC_LOAD_SUB_I8
  { 111,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #111 = ATOMIC_LOAD_XOR_I16
  { 112,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #112 = ATOMIC_LOAD_XOR_I32
  { 113,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #113 = ATOMIC_LOAD_XOR_I64
  { 114,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #114 = ATOMIC_LOAD_XOR_I8
  { 115,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #115 = ATOMIC_SWAP_I16
  { 116,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #116 = ATOMIC_SWAP_I32
  { 117,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #117 = ATOMIC_SWAP_I64
  { 118,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #118 = ATOMIC_SWAP_I8
  { 119,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #119 = ATTN
  { 120,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #120 = B
  { 121,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #121 = BA
  { 122,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #122 = BC
  { 123,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #123 = BCC
  { 124,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #124 = BCCA
  { 125,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, OperandInfo30,0,nullptr },  // Inst #125 = BCCCTR
  { 126,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, OperandInfo30,0,nullptr },  // Inst #126 = BCCCTR8
  { 127,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo30,0,nullptr },  // Inst #127 = BCCCTRL
  { 128,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList12, OperandInfo30,0,nullptr },  // Inst #128 = BCCCTRL8
  { 129,	3,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo29,0,nullptr },  // Inst #129 = BCCL
  { 130,	3,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo29,0,nullptr },  // Inst #130 = BCCLA
  { 131,	2,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, nullptr, OperandInfo30,0,nullptr },  // Inst #131 = BCCLR
  { 132,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, OperandInfo30,0,nullptr },  // Inst #132 = BCCLRL
  { 133,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, OperandInfo31,0,nullptr },  // Inst #133 = BCCTR
  { 134,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, OperandInfo31,0,nullptr },  // Inst #134 = BCCTR8
  { 135,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, OperandInfo31,0,nullptr },  // Inst #135 = BCCTR8n
  { 136,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo31,0,nullptr },  // Inst #136 = BCCTRL
  { 137,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList12, OperandInfo31,0,nullptr },  // Inst #137 = BCCTRL8
  { 138,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList12, OperandInfo31,0,nullptr },  // Inst #138 = BCCTRL8n
  { 139,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo31,0,nullptr },  // Inst #139 = BCCTRLn
  { 140,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, OperandInfo31,0,nullptr },  // Inst #140 = BCCTRn
  { 141,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo28,0,nullptr },  // Inst #141 = BCL
  { 142,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, nullptr, OperandInfo31,0,nullptr },  // Inst #142 = BCLR
  { 143,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, OperandInfo31,0,nullptr },  // Inst #143 = BCLRL
  { 144,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, OperandInfo31,0,nullptr },  // Inst #144 = BCLRLn
  { 145,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #145 = BCLRn
  { 146,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #146 = BCLalways
  { 147,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo28,0,nullptr },  // Inst #147 = BCLn
  { 148,	0,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, nullptr,0,nullptr },  // Inst #148 = BCTR
  { 149,	0,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, nullptr,0,nullptr },  // Inst #149 = BCTR8
  { 150,	0,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList9, ImplicitList10, nullptr,0,nullptr },  // Inst #150 = BCTRL
  { 151,	0,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList12, nullptr,0,nullptr },  // Inst #151 = BCTRL8
  { 152,	2,	0,	3,	8,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList15, OperandInfo32,0,nullptr },  // Inst #152 = BCTRL8_LDinto_toc
  { 153,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #153 = BCn
  { 154,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #154 = BDNZ
  { 155,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, ImplicitList8, OperandInfo5,0,nullptr },  // Inst #155 = BDNZ8
  { 156,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #156 = BDNZA
  { 157,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #157 = BDNZAm
  { 158,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #158 = BDNZAp
  { 159,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #159 = BDNZL
  { 160,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #160 = BDNZLA
  { 161,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #161 = BDNZLAm
  { 162,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #162 = BDNZLAp
  { 163,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #163 = BDNZLR
  { 164,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList17, ImplicitList8, nullptr,0,nullptr },  // Inst #164 = BDNZLR8
  { 165,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #165 = BDNZLRL
  { 166,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #166 = BDNZLRLm
  { 167,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #167 = BDNZLRLp
  { 168,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #168 = BDNZLRm
  { 169,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #169 = BDNZLRp
  { 170,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #170 = BDNZLm
  { 171,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #171 = BDNZLp
  { 172,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #172 = BDNZm
  { 173,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #173 = BDNZp
  { 174,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #174 = BDZ
  { 175,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, ImplicitList8, OperandInfo5,0,nullptr },  // Inst #175 = BDZ8
  { 176,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #176 = BDZA
  { 177,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #177 = BDZAm
  { 178,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #178 = BDZAp
  { 179,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #179 = BDZL
  { 180,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #180 = BDZLA
  { 181,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #181 = BDZLAm
  { 182,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #182 = BDZLAp
  { 183,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #183 = BDZLR
  { 184,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList17, ImplicitList8, nullptr,0,nullptr },  // Inst #184 = BDZLR8
  { 185,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #185 = BDZLRL
  { 186,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #186 = BDZLRLm
  { 187,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #187 = BDZLRLp
  { 188,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #188 = BDZLRm
  { 189,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr,0,nullptr },  // Inst #189 = BDZLRp
  { 190,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #190 = BDZLm
  { 191,	1,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #191 = BDZLp
  { 192,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #192 = BDZm
  { 193,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5,0,nullptr },  // Inst #193 = BDZp
  { 194,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #194 = BL
  { 195,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5,0,nullptr },  // Inst #195 = BL8
  { 196,	1,	0,	3,	8,	0|(1<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5,0,nullptr },  // Inst #196 = BL8_NOP
  { 197,	2,	0,	3,	8,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo7,0,nullptr },  // Inst #197 = BL8_NOP_TLS
  { 198,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo7,0,nullptr },  // Inst #198 = BL8_TLS
  { 199,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo7,0,nullptr },  // Inst #199 = BL8_TLS_
  { 200,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo5,0,nullptr },  // Inst #200 = BLA
  { 201,	1,	0,	3,	4,	0|(1<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5,0,nullptr },  // Inst #201 = BLA8
  { 202,	1,	0,	3,	8,	0|(1<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5,0,nullptr },  // Inst #202 = BLA8_NOP
  { 203,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, ImplicitList14, nullptr, nullptr,0,nullptr },  // Inst #203 = BLR
  { 204,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, ImplicitList18, nullptr, nullptr,0,nullptr },  // Inst #204 = BLR8
  { 205,	0,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, nullptr,0,nullptr },  // Inst #205 = BLRL
  { 206,	2,	0,	3,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo7,0,nullptr },  // Inst #206 = BL_TLS
  { 207,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #207 = BPERMD
  { 208,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #208 = BRINC
  { 209,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #209 = CLRLSLDI
  { 210,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #210 = CLRLSLDIo
  { 211,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #211 = CLRLSLWI
  { 212,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #212 = CLRLSLWIo
  { 213,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #213 = CLRRDI
  { 214,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #214 = CLRRDIo
  { 215,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #215 = CLRRWI
  { 216,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #216 = CLRRWIo
  { 217,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #217 = CMPB
  { 218,	3,	1,	2,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #218 = CMPB8
  { 219,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #219 = CMPD
  { 220,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #220 = CMPDI
  { 221,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #221 = CMPLD
  { 222,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #222 = CMPLDI
  { 223,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #223 = CMPLW
  { 224,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #224 = CMPLWI
  { 225,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #225 = CMPW
  { 226,	3,	1,	5,	4,	0|(1<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #226 = CMPWI
  { 227,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #227 = CNTLZD
  { 228,	2,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #228 = CNTLZDo
  { 229,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #229 = CNTLZW
  { 230,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #230 = CNTLZW8
  { 231,	2,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #231 = CNTLZW8o
  { 232,	2,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #232 = CNTLZWo
  { 233,	0,	0,	6,	4,	0, 0x0ULL, nullptr, ImplicitList19, nullptr,0,nullptr },  // Inst #233 = CR6SET
  { 234,	0,	0,	6,	4,	0, 0x0ULL, nullptr, ImplicitList19, nullptr,0,nullptr },  // Inst #234 = CR6UNSET
  { 235,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #235 = CRAND
  { 236,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #236 = CRANDC
  { 237,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #237 = CREQV
  { 238,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #238 = CRNAND
  { 239,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #239 = CRNOR
  { 240,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #240 = CROR
  { 241,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #241 = CRORC
  { 242,	1,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #242 = CRSET
  { 243,	1,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #243 = CRUNSET
  { 244,	3,	1,	6,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #244 = CRXOR
  { 245,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #245 = DCBA
  { 246,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #246 = DCBF
  { 247,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #247 = DCBI
  { 248,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #248 = DCBST
  { 249,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #249 = DCBT
  { 250,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #250 = DCBTST
  { 251,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #251 = DCBZ
  { 252,	2,	0,	7,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #252 = DCBZL
  { 253,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #253 = DCCCI
  { 254,	3,	1,	9,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #254 = DIVD
  { 255,	3,	1,	9,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #255 = DIVDE
  { 256,	3,	1,	9,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #256 = DIVDEU
  { 257,	3,	1,	9,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #257 = DIVDEUo
  { 258,	3,	1,	9,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #258 = DIVDEo
  { 259,	3,	1,	9,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #259 = DIVDU
  { 260,	3,	1,	9,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #260 = DIVDUo
  { 261,	3,	1,	9,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #261 = DIVDo
  { 262,	3,	1,	10,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #262 = DIVW
  { 263,	3,	1,	10,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #263 = DIVWE
  { 264,	3,	1,	10,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #264 = DIVWEU
  { 265,	3,	1,	10,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #265 = DIVWEUo
  { 266,	3,	1,	10,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #266 = DIVWEo
  { 267,	3,	1,	10,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #267 = DIVWU
  { 268,	3,	1,	10,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #268 = DIVWUo
  { 269,	3,	1,	10,	4,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #269 = DIVWo
  { 270,	1,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,PPC::DeprecatedDST,nullptr },  // Inst #270 = DSS
  { 271,	0,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,PPC::DeprecatedDST,nullptr },  // Inst #271 = DSSALL
  { 272,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41,PPC::DeprecatedDST,nullptr },  // Inst #272 = DST
  { 273,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,PPC::DeprecatedDST,nullptr },  // Inst #273 = DST64
  { 274,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41,PPC::DeprecatedDST,nullptr },  // Inst #274 = DSTST
  { 275,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,PPC::DeprecatedDST,nullptr },  // Inst #275 = DSTST64
  { 276,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41,PPC::DeprecatedDST,nullptr },  // Inst #276 = DSTSTT
  { 277,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,PPC::DeprecatedDST,nullptr },  // Inst #277 = DSTSTT64
  { 278,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41,PPC::DeprecatedDST,nullptr },  // Inst #278 = DSTT
  { 279,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42,PPC::DeprecatedDST,nullptr },  // Inst #279 = DSTT64
  { 280,	4,	1,	0,	4,	0, 0x0ULL, ImplicitList6, ImplicitList6, OperandInfo43,0,nullptr },  // Inst #280 = DYNALLOC
  { 281,	4,	1,	0,	4,	0, 0x0ULL, ImplicitList20, ImplicitList20, OperandInfo44,0,nullptr },  // Inst #281 = DYNALLOC8
  { 282,	1,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #282 = EH_SjLj_LongJmp32
  { 283,	1,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #283 = EH_SjLj_LongJmp64
  { 284,	2,	1,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo45,0,nullptr },  // Inst #284 = EH_SjLj_SetJmp32
  { 285,	2,	1,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo45,0,nullptr },  // Inst #285 = EH_SjLj_SetJmp64
  { 286,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #286 = EH_SjLj_Setup
  { 287,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #287 = EQV
  { 288,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #288 = EQV8
  { 289,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #289 = EQV8o
  { 290,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #290 = EQVo
  { 291,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #291 = EVABS
  { 292,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #292 = EVADDIW
  { 293,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #293 = EVADDSMIAAW
  { 294,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #294 = EVADDSSIAAW
  { 295,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #295 = EVADDUMIAAW
  { 296,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #296 = EVADDUSIAAW
  { 297,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #297 = EVADDW
  { 298,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #298 = EVAND
  { 299,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #299 = EVANDC
  { 300,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #300 = EVCMPEQ
  { 301,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #301 = EVCMPGTS
  { 302,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #302 = EVCMPGTU
  { 303,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #303 = EVCMPLTS
  { 304,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #304 = EVCMPLTU
  { 305,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #305 = EVCNTLSW
  { 306,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #306 = EVCNTLZW
  { 307,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #307 = EVDIVWS
  { 308,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #308 = EVDIVWU
  { 309,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #309 = EVEQV
  { 310,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #310 = EVEXTSB
  { 311,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #311 = EVEXTSH
  { 312,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #312 = EVLDD
  { 313,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #313 = EVLDDX
  { 314,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #314 = EVLDH
  { 315,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #315 = EVLDHX
  { 316,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #316 = EVLDW
  { 317,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #317 = EVLDWX
  { 318,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #318 = EVLHHESPLAT
  { 319,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #319 = EVLHHESPLATX
  { 320,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #320 = EVLHHOSSPLAT
  { 321,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #321 = EVLHHOSSPLATX
  { 322,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #322 = EVLHHOUSPLAT
  { 323,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #323 = EVLHHOUSPLATX
  { 324,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #324 = EVLWHE
  { 325,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #325 = EVLWHEX
  { 326,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #326 = EVLWHOS
  { 327,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #327 = EVLWHOSX
  { 328,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #328 = EVLWHOU
  { 329,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #329 = EVLWHOUX
  { 330,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #330 = EVLWHSPLAT
  { 331,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #331 = EVLWHSPLATX
  { 332,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #332 = EVLWWSPLAT
  { 333,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #333 = EVLWWSPLATX
  { 334,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #334 = EVMERGEHI
  { 335,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #335 = EVMERGEHILO
  { 336,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #336 = EVMERGELO
  { 337,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #337 = EVMERGELOHI
  { 338,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #338 = EVMHEGSMFAA
  { 339,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #339 = EVMHEGSMFAN
  { 340,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #340 = EVMHEGSMIAA
  { 341,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #341 = EVMHEGSMIAN
  { 342,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #342 = EVMHEGUMIAA
  { 343,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #343 = EVMHEGUMIAN
  { 344,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #344 = EVMHESMF
  { 345,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #345 = EVMHESMFA
  { 346,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #346 = EVMHESMFAAW
  { 347,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #347 = EVMHESMFANW
  { 348,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #348 = EVMHESMI
  { 349,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #349 = EVMHESMIA
  { 350,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #350 = EVMHESMIAAW
  { 351,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #351 = EVMHESMIANW
  { 352,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #352 = EVMHESSF
  { 353,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #353 = EVMHESSFA
  { 354,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #354 = EVMHESSFAAW
  { 355,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #355 = EVMHESSFANW
  { 356,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #356 = EVMHESSIAAW
  { 357,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #357 = EVMHESSIANW
  { 358,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #358 = EVMHEUMI
  { 359,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #359 = EVMHEUMIA
  { 360,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #360 = EVMHEUMIAAW
  { 361,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #361 = EVMHEUMIANW
  { 362,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #362 = EVMHEUSIAAW
  { 363,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #363 = EVMHEUSIANW
  { 364,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #364 = EVMHOGSMFAA
  { 365,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #365 = EVMHOGSMFAN
  { 366,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #366 = EVMHOGSMIAA
  { 367,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #367 = EVMHOGSMIAN
  { 368,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #368 = EVMHOGUMIAA
  { 369,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #369 = EVMHOGUMIAN
  { 370,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #370 = EVMHOSMF
  { 371,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #371 = EVMHOSMFA
  { 372,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #372 = EVMHOSMFAAW
  { 373,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #373 = EVMHOSMFANW
  { 374,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #374 = EVMHOSMI
  { 375,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #375 = EVMHOSMIA
  { 376,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #376 = EVMHOSMIAAW
  { 377,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #377 = EVMHOSMIANW
  { 378,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #378 = EVMHOSSF
  { 379,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #379 = EVMHOSSFA
  { 380,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #380 = EVMHOSSFAAW
  { 381,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #381 = EVMHOSSFANW
  { 382,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #382 = EVMHOSSIAAW
  { 383,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #383 = EVMHOSSIANW
  { 384,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #384 = EVMHOUMI
  { 385,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #385 = EVMHOUMIA
  { 386,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #386 = EVMHOUMIAAW
  { 387,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #387 = EVMHOUMIANW
  { 388,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #388 = EVMHOUSIAAW
  { 389,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #389 = EVMHOUSIANW
  { 390,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #390 = EVMRA
  { 391,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #391 = EVMWHSMF
  { 392,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #392 = EVMWHSMFA
  { 393,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #393 = EVMWHSMI
  { 394,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #394 = EVMWHSMIA
  { 395,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #395 = EVMWHSSF
  { 396,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #396 = EVMWHSSFA
  { 397,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #397 = EVMWHUMI
  { 398,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #398 = EVMWHUMIA
  { 399,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #399 = EVMWLSMIAAW
  { 400,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #400 = EVMWLSMIANW
  { 401,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #401 = EVMWLSSIAAW
  { 402,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #402 = EVMWLSSIANW
  { 403,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #403 = EVMWLUMI
  { 404,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #404 = EVMWLUMIA
  { 405,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #405 = EVMWLUMIAAW
  { 406,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #406 = EVMWLUMIANW
  { 407,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #407 = EVMWLUSIAAW
  { 408,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #408 = EVMWLUSIANW
  { 409,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #409 = EVMWSMF
  { 410,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #410 = EVMWSMFA
  { 411,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #411 = EVMWSMFAA
  { 412,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #412 = EVMWSMFAN
  { 413,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #413 = EVMWSMI
  { 414,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #414 = EVMWSMIA
  { 415,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #415 = EVMWSMIAA
  { 416,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #416 = EVMWSMIAN
  { 417,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #417 = EVMWSSF
  { 418,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #418 = EVMWSSFA
  { 419,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #419 = EVMWSSFAA
  { 420,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #420 = EVMWSSFAN
  { 421,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #421 = EVMWUMI
  { 422,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #422 = EVMWUMIA
  { 423,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #423 = EVMWUMIAA
  { 424,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #424 = EVMWUMIAN
  { 425,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #425 = EVNAND
  { 426,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #426 = EVNEG
  { 427,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #427 = EVNOR
  { 428,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #428 = EVOR
  { 429,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #429 = EVORC
  { 430,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #430 = EVRLW
  { 431,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #431 = EVRLWI
  { 432,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #432 = EVRNDW
  { 433,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #433 = EVSLW
  { 434,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #434 = EVSLWI
  { 435,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #435 = EVSPLATFI
  { 436,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #436 = EVSPLATI
  { 437,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #437 = EVSRWIS
  { 438,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #438 = EVSRWIU
  { 439,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #439 = EVSRWS
  { 440,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #440 = EVSRWU
  { 441,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #441 = EVSTDD
  { 442,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #442 = EVSTDDX
  { 443,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #443 = EVSTDH
  { 444,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #444 = EVSTDHX
  { 445,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #445 = EVSTDW
  { 446,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #446 = EVSTDWX
  { 447,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #447 = EVSTWHE
  { 448,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #448 = EVSTWHEX
  { 449,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #449 = EVSTWHO
  { 450,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #450 = EVSTWHOX
  { 451,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #451 = EVSTWWE
  { 452,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #452 = EVSTWWEX
  { 453,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #453 = EVSTWWO
  { 454,	3,	0,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #454 = EVSTWWOX
  { 455,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #455 = EVSUBFSMIAAW
  { 456,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #456 = EVSUBFSSIAAW
  { 457,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #457 = EVSUBFUMIAAW
  { 458,	2,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #458 = EVSUBFUSIAAW
  { 459,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #459 = EVSUBFW
  { 460,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #460 = EVSUBIFW
  { 461,	3,	1,	4,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #461 = EVXOR
  { 462,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #462 = EXTLDI
  { 463,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #463 = EXTLDIo
  { 464,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #464 = EXTLWI
  { 465,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #465 = EXTLWIo
  { 466,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #466 = EXTRDI
  { 467,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #467 = EXTRDIo
  { 468,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #468 = EXTRWI
  { 469,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #469 = EXTRWIo
  { 470,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #470 = EXTSB
  { 471,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #471 = EXTSB8
  { 472,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #472 = EXTSB8_32_64
  { 473,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #473 = EXTSB8o
  { 474,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #474 = EXTSBo
  { 475,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #475 = EXTSH
  { 476,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #476 = EXTSH8
  { 477,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #477 = EXTSH8_32_64
  { 478,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #478 = EXTSH8o
  { 479,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #479 = EXTSHo
  { 480,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #480 = EXTSW
  { 481,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #481 = EXTSW_32_64
  { 482,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo49,0,nullptr },  // Inst #482 = EXTSW_32_64o
  { 483,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #483 = EXTSWo
  { 484,	0,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #484 = EnforceIEIO
  { 485,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #485 = FABSD
  { 486,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #486 = FABSDo
  { 487,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #487 = FABSS
  { 488,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #488 = FABSSo
  { 489,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo52,0,nullptr },  // Inst #489 = FADD
  { 490,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo53,0,nullptr },  // Inst #490 = FADDS
  { 491,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53,0,nullptr },  // Inst #491 = FADDSo
  { 492,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52,0,nullptr },  // Inst #492 = FADDo
  { 493,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo52,0,nullptr },  // Inst #493 = FADDrtz
  { 494,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #494 = FCFID
  { 495,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo54,0,nullptr },  // Inst #495 = FCFIDS
  { 496,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54,0,nullptr },  // Inst #496 = FCFIDSo
  { 497,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #497 = FCFIDU
  { 498,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo54,0,nullptr },  // Inst #498 = FCFIDUS
  { 499,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54,0,nullptr },  // Inst #499 = FCFIDUSo
  { 500,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #500 = FCFIDUo
  { 501,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #501 = FCFIDo
  { 502,	3,	1,	13,	4,	0|(1<<MCID::Compare), 0x18ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #502 = FCMPUD
  { 503,	3,	1,	13,	4,	0|(1<<MCID::Compare), 0x18ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #503 = FCMPUS
  { 504,	3,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #504 = FCPSGND
  { 505,	3,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo52,0,nullptr },  // Inst #505 = FCPSGNDo
  { 506,	3,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #506 = FCPSGNS
  { 507,	3,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo53,0,nullptr },  // Inst #507 = FCPSGNSo
  { 508,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #508 = FCTID
  { 509,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #509 = FCTIDUZ
  { 510,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #510 = FCTIDUZo
  { 511,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #511 = FCTIDZ
  { 512,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #512 = FCTIDZo
  { 513,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #513 = FCTIDo
  { 514,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #514 = FCTIW
  { 515,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #515 = FCTIWUZ
  { 516,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #516 = FCTIWUZo
  { 517,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #517 = FCTIWZ
  { 518,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #518 = FCTIWZo
  { 519,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #519 = FCTIWo
  { 520,	3,	1,	14,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52,0,nullptr },  // Inst #520 = FDIV
  { 521,	3,	1,	15,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53,0,nullptr },  // Inst #521 = FDIVS
  { 522,	3,	1,	15,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53,0,nullptr },  // Inst #522 = FDIVSo
  { 523,	3,	1,	14,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52,0,nullptr },  // Inst #523 = FDIVo
  { 524,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo57,0,nullptr },  // Inst #524 = FMADD
  { 525,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo58,0,nullptr },  // Inst #525 = FMADDS
  { 526,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo58,0,nullptr },  // Inst #526 = FMADDSo
  { 527,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #527 = FMADDo
  { 528,	2,	1,	11,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #528 = FMR
  { 529,	2,	1,	11,	4,	0, 0x0ULL, nullptr, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #529 = FMRo
  { 530,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo57,0,nullptr },  // Inst #530 = FMSUB
  { 531,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo58,0,nullptr },  // Inst #531 = FMSUBS
  { 532,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo58,0,nullptr },  // Inst #532 = FMSUBSo
  { 533,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #533 = FMSUBo
  { 534,	3,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo52,0,nullptr },  // Inst #534 = FMUL
  { 535,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo53,0,nullptr },  // Inst #535 = FMULS
  { 536,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53,0,nullptr },  // Inst #536 = FMULSo
  { 537,	3,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52,0,nullptr },  // Inst #537 = FMULo
  { 538,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #538 = FNABSD
  { 539,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #539 = FNABSDo
  { 540,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #540 = FNABSS
  { 541,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #541 = FNABSSo
  { 542,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #542 = FNEGD
  { 543,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #543 = FNEGDo
  { 544,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #544 = FNEGS
  { 545,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #545 = FNEGSo
  { 546,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo57,0,nullptr },  // Inst #546 = FNMADD
  { 547,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo58,0,nullptr },  // Inst #547 = FNMADDS
  { 548,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo58,0,nullptr },  // Inst #548 = FNMADDSo
  { 549,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #549 = FNMADDo
  { 550,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo57,0,nullptr },  // Inst #550 = FNMSUB
  { 551,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo58,0,nullptr },  // Inst #551 = FNMSUBS
  { 552,	4,	1,	11,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo58,0,nullptr },  // Inst #552 = FNMSUBSo
  { 553,	4,	1,	16,	4,	0|(1<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #553 = FNMSUBo
  { 554,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #554 = FRE
  { 555,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #555 = FRES
  { 556,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #556 = FRESo
  { 557,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #557 = FREo
  { 558,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #558 = FRIMD
  { 559,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #559 = FRIMDo
  { 560,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo51,0,nullptr },  // Inst #560 = FRIMS
  { 561,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #561 = FRIMSo
  { 562,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #562 = FRIND
  { 563,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #563 = FRINDo
  { 564,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo51,0,nullptr },  // Inst #564 = FRINS
  { 565,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #565 = FRINSo
  { 566,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #566 = FRIPD
  { 567,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #567 = FRIPDo
  { 568,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo51,0,nullptr },  // Inst #568 = FRIPS
  { 569,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #569 = FRIPSo
  { 570,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #570 = FRIZD
  { 571,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #571 = FRIZDo
  { 572,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo51,0,nullptr },  // Inst #572 = FRIZS
  { 573,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #573 = FRIZSo
  { 574,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo54,0,nullptr },  // Inst #574 = FRSP
  { 575,	2,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54,0,nullptr },  // Inst #575 = FRSPo
  { 576,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #576 = FRSQRTE
  { 577,	2,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #577 = FRSQRTES
  { 578,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #578 = FRSQRTESo
  { 579,	2,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #579 = FRSQRTEo
  { 580,	4,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #580 = FSELD
  { 581,	4,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo57,0,nullptr },  // Inst #581 = FSELDo
  { 582,	4,	1,	11,	4,	0, 0x18ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #582 = FSELS
  { 583,	4,	1,	11,	4,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo59,0,nullptr },  // Inst #583 = FSELSo
  { 584,	2,	1,	17,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo50,0,nullptr },  // Inst #584 = FSQRT
  { 585,	2,	1,	18,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo51,0,nullptr },  // Inst #585 = FSQRTS
  { 586,	2,	1,	18,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo51,0,nullptr },  // Inst #586 = FSQRTSo
  { 587,	2,	1,	17,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo50,0,nullptr },  // Inst #587 = FSQRTo
  { 588,	3,	1,	12,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52,0,nullptr },  // Inst #588 = FSUB
  { 589,	3,	1,	11,	4,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53,0,nullptr },  // Inst #589 = FSUBS
  { 590,	3,	1,	11,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53,0,nullptr },  // Inst #590 = FSUBSo
  { 591,	3,	1,	12,	4,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52,0,nullptr },  // Inst #591 = FSUBo
  { 592,	3,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList22, OperandInfo15,0,nullptr },  // Inst #592 = GETtlsADDR
  { 593,	3,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList23, OperandInfo13,0,nullptr },  // Inst #593 = GETtlsADDR32
  { 594,	3,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList22, OperandInfo15,0,nullptr },  // Inst #594 = GETtlsldADDR
  { 595,	3,	1,	0,	4,	0|(1<<MCID::ExtraSrcRegAllocReq)|(1<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList23, OperandInfo13,0,nullptr },  // Inst #595 = GETtlsldADDR32
  { 596,	2,	0,	19,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #596 = ICBI
  { 597,	3,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #597 = ICBT
  { 598,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #598 = ICCCI
  { 599,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #599 = INSLWI
  { 600,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #600 = INSLWIo
  { 601,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #601 = INSRDI
  { 602,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #602 = INSRDIo
  { 603,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #603 = INSRWI
  { 604,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #604 = INSRWIo
  { 605,	4,	1,	20,	4,	0|(1<<MCID::Select), 0x8ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #605 = ISEL
  { 606,	4,	1,	20,	4,	0|(1<<MCID::Select), 0x8ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #606 = ISEL8
  { 607,	0,	0,	21,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #607 = ISYNC
  { 608,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #608 = LA
  { 609,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #609 = LAx
  { 610,	3,	1,	22,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #610 = LBARX
  { 611,	3,	1,	22,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #611 = LBARXL
  { 612,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #612 = LBZ
  { 613,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #613 = LBZ8
  { 614,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #614 = LBZCIX
  { 615,	4,	2,	23,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #615 = LBZU
  { 616,	4,	2,	23,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #616 = LBZU8
  { 617,	4,	2,	24,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #617 = LBZUX
  { 618,	4,	2,	24,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #618 = LBZUX8
  { 619,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #619 = LBZX
  { 620,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #620 = LBZX8
  { 621,	3,	1,	25,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #621 = LD
  { 622,	3,	1,	26,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #622 = LDARX
  { 623,	3,	1,	26,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #623 = LDARXL
  { 624,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #624 = LDBRX
  { 625,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #625 = LDCIX
  { 626,	4,	2,	27,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #626 = LDU
  { 627,	4,	2,	28,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #627 = LDUX
  { 628,	3,	1,	25,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #628 = LDX
  { 629,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #629 = LDgotTprelL
  { 630,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #630 = LDgotTprelL32
  { 631,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #631 = LDtoc
  { 632,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #632 = LDtocBA
  { 633,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #633 = LDtocCPT
  { 634,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #634 = LDtocJTI
  { 635,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #635 = LDtocL
  { 636,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #636 = LFD
  { 637,	4,	2,	30,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #637 = LFDU
  { 638,	4,	2,	31,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #638 = LFDUX
  { 639,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #639 = LFDX
  { 640,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #640 = LFIWAX
  { 641,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #641 = LFIWZX
  { 642,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #642 = LFS
  { 643,	4,	2,	30,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #643 = LFSU
  { 644,	4,	2,	31,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #644 = LFSUX
  { 645,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #645 = LFSX
  { 646,	3,	1,	32,	4,	0|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #646 = LHA
  { 647,	3,	1,	32,	4,	0|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #647 = LHA8
  { 648,	3,	1,	22,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #648 = LHARX
  { 649,	3,	1,	22,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #649 = LHARXL
  { 650,	4,	2,	33,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #650 = LHAU
  { 651,	4,	2,	33,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #651 = LHAU8
  { 652,	4,	2,	34,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #652 = LHAUX
  { 653,	4,	2,	34,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #653 = LHAUX8
  { 654,	3,	1,	32,	4,	0|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #654 = LHAX
  { 655,	3,	1,	32,	4,	0|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #655 = LHAX8
  { 656,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #656 = LHBRX
  { 657,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #657 = LHBRX8
  { 658,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #658 = LHZ
  { 659,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #659 = LHZ8
  { 660,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #660 = LHZCIX
  { 661,	4,	2,	23,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #661 = LHZU
  { 662,	4,	2,	23,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #662 = LHZU8
  { 663,	4,	2,	24,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #663 = LHZUX
  { 664,	4,	2,	24,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #664 = LHZUX8
  { 665,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #665 = LHZX
  { 666,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #666 = LHZX8
  { 667,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #667 = LI
  { 668,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #668 = LI8
  { 669,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #669 = LIS
  { 670,	2,	1,	1,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #670 = LIS8
  { 671,	3,	1,	35,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #671 = LMW
  { 672,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #672 = LSWI
  { 673,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #673 = LVEBX
  { 674,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #674 = LVEHX
  { 675,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #675 = LVEWX
  { 676,	3,	1,	8,	4,	0, 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #676 = LVSL
  { 677,	3,	1,	8,	4,	0, 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #677 = LVSR
  { 678,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #678 = LVX
  { 679,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #679 = LVXL
  { 680,	3,	1,	36,	4,	0|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #680 = LWA
  { 681,	3,	1,	22,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #681 = LWARX
  { 682,	3,	1,	22,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #682 = LWARXL
  { 683,	4,	2,	34,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #683 = LWAUX
  { 684,	3,	1,	32,	4,	0|(1<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #684 = LWAX
  { 685,	3,	1,	32,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #685 = LWAX_32
  { 686,	3,	1,	36,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #686 = LWA_32
  { 687,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #687 = LWBRX
  { 688,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #688 = LWBRX8
  { 689,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #689 = LWZ
  { 690,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #690 = LWZ8
  { 691,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #691 = LWZCIX
  { 692,	4,	2,	23,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #692 = LWZU
  { 693,	4,	2,	23,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #693 = LWZU8
  { 694,	4,	2,	24,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #694 = LWZUX
  { 695,	4,	2,	24,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #695 = LWZUX8
  { 696,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #696 = LWZX
  { 697,	3,	1,	8,	4,	0|(1<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #697 = LWZX8
  { 698,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #698 = LWZtoc
  { 699,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo84,0,nullptr },  // Inst #699 = LXSDX
  { 700,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo85,0,nullptr },  // Inst #700 = LXVD2X
  { 701,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo85,0,nullptr },  // Inst #701 = LXVDSX
  { 702,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo85,0,nullptr },  // Inst #702 = LXVW4X
  { 703,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #703 = MBAR
  { 704,	2,	1,	37,	4,	0, 0x21ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #704 = MCRF
  { 705,	2,	1,	37,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #705 = MCRFS
  { 706,	1,	1,	38,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #706 = MFCR
  { 707,	1,	1,	38,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #707 = MFCR8
  { 708,	1,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList7, nullptr, OperandInfo87,0,nullptr },  // Inst #708 = MFCTR
  { 709,	1,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList8, nullptr, OperandInfo88,0,nullptr },  // Inst #709 = MFCTR8
  { 710,	2,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #710 = MFDCR
  { 711,	1,	1,	40,	4,	0, 0x1aULL, ImplicitList13, nullptr, OperandInfo89,0,nullptr },  // Inst #711 = MFFS
  { 712,	1,	1,	40,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList13, ImplicitList21, OperandInfo89,0,nullptr },  // Inst #712 = MFFSo
  { 713,	1,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, nullptr, OperandInfo87,0,nullptr },  // Inst #713 = MFLR
  { 714,	1,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList12, nullptr, OperandInfo88,0,nullptr },  // Inst #714 = MFLR8
  { 715,	1,	1,	41,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #715 = MFMSR
  { 716,	2,	1,	42,	4,	0|(1<<MCID::ExtraSrcRegAllocReq), 0x21ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #716 = MFOCRF
  { 717,	2,	1,	42,	4,	0|(1<<MCID::ExtraSrcRegAllocReq), 0x21ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #717 = MFOCRF8
  { 718,	2,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #718 = MFSPR
  { 719,	2,	1,	39,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #719 = MFSPR8
  { 720,	2,	1,	43,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #720 = MFSR
  { 721,	2,	1,	43,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #721 = MFSRIN
  { 722,	2,	1,	44,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,PPC::DeprecatedMFTB,nullptr },  // Inst #722 = MFTB
  { 723,	1,	1,	44,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #723 = MFTB8
  { 724,	1,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #724 = MFVRSAVE
  { 725,	2,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #725 = MFVRSAVEv
  { 726,	1,	1,	45,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #726 = MFVSCR
  { 727,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #727 = MFVSRD
  { 728,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #728 = MFVSRWZ
  { 729,	0,	0,	47,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #729 = MSYNC
  { 730,	2,	0,	48,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #730 = MTCRF
  { 731,	2,	0,	48,	4,	0, 0x20ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #731 = MTCRF8
  { 732,	1,	0,	49,	4,	0, 0x9ULL, nullptr, ImplicitList7, OperandInfo87,0,nullptr },  // Inst #732 = MTCTR
  { 733,	1,	0,	49,	4,	0, 0x9ULL, nullptr, ImplicitList8, OperandInfo88,0,nullptr },  // Inst #733 = MTCTR8
  { 734,	1,	0,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList8, OperandInfo88,0,nullptr },  // Inst #734 = MTCTR8loop
  { 735,	1,	0,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList7, OperandInfo87,0,nullptr },  // Inst #735 = MTCTRloop
  { 736,	2,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #736 = MTDCR
  { 737,	1,	0,	50,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList13, ImplicitList13, OperandInfo5,0,nullptr },  // Inst #737 = MTFSB0
  { 738,	1,	0,	50,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList13, ImplicitList13, OperandInfo5,0,nullptr },  // Inst #738 = MTFSB1
  { 739,	4,	0,	40,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #739 = MTFSF
  { 740,	3,	1,	40,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #740 = MTFSFI
  { 741,	3,	1,	40,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #741 = MTFSFIo
  { 742,	2,	0,	50,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList13, ImplicitList13, OperandInfo99,0,nullptr },  // Inst #742 = MTFSFb
  { 743,	4,	0,	40,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #743 = MTFSFo
  { 744,	1,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList10, OperandInfo87,0,nullptr },  // Inst #744 = MTLR
  { 745,	1,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList12, OperandInfo88,0,nullptr },  // Inst #745 = MTLR8
  { 746,	2,	0,	51,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #746 = MTMSR
  { 747,	2,	0,	52,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #747 = MTMSRD
  { 748,	2,	1,	48,	4,	0, 0x21ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #748 = MTOCRF
  { 749,	2,	1,	48,	4,	0, 0x21ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #749 = MTOCRF8
  { 750,	2,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #750 = MTSPR
  { 751,	2,	0,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #751 = MTSPR8
  { 752,	2,	0,	53,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #752 = MTSR
  { 753,	2,	0,	53,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #753 = MTSRIN
  { 754,	1,	0,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #754 = MTVRSAVE
  { 755,	2,	1,	2,	4,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #755 = MTVRSAVEv
  { 756,	1,	0,	8,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #756 = MTVSCR
  { 757,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #757 = MTVSRD
  { 758,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #758 = MTVSRWA
  { 759,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #759 = MTVSRWZ
  { 760,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #760 = MULHD
  { 761,	3,	1,	55,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #761 = MULHDU
  { 762,	3,	1,	55,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #762 = MULHDUo
  { 763,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #763 = MULHDo
  { 764,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #764 = MULHW
  { 765,	3,	1,	55,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #765 = MULHWU
  { 766,	3,	1,	55,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #766 = MULHWUo
  { 767,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #767 = MULHWo
  { 768,	3,	1,	56,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #768 = MULLD
  { 769,	3,	1,	56,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #769 = MULLDo
  { 770,	3,	1,	57,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #770 = MULLI
  { 771,	3,	1,	57,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #771 = MULLI8
  { 772,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #772 = MULLW
  { 773,	3,	1,	54,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #773 = MULLWo
  { 774,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList10, nullptr,0,nullptr },  // Inst #774 = MoveGOTtoLR
  { 775,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList10, nullptr,0,nullptr },  // Inst #775 = MovePCtoLR
  { 776,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList12, nullptr,0,nullptr },  // Inst #776 = MovePCtoLR8
  { 777,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #777 = NAND
  { 778,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #778 = NAND8
  { 779,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #779 = NAND8o
  { 780,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #780 = NANDo
  { 781,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #781 = NEG
  { 782,	2,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #782 = NEG8
  { 783,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #783 = NEG8o
  { 784,	2,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #784 = NEGo
  { 785,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #785 = NOP
  { 786,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #786 = NOP_GT_PWR6
  { 787,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #787 = NOP_GT_PWR7
  { 788,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #788 = NOR
  { 789,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #789 = NOR8
  { 790,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #790 = NOR8o
  { 791,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #791 = NORo
  { 792,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #792 = OR
  { 793,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #793 = OR8
  { 794,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #794 = OR8o
  { 795,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #795 = ORC
  { 796,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #796 = ORC8
  { 797,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #797 = ORC8o
  { 798,	3,	1,	1,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #798 = ORCo
  { 799,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #799 = ORI
  { 800,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #800 = ORI8
  { 801,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #801 = ORIS
  { 802,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #802 = ORIS8
  { 803,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #803 = ORo
  { 804,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #804 = POPCNTD
  { 805,	2,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #805 = POPCNTW
  { 806,	1,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #806 = PPC32GOT
  { 807,	2,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #807 = PPC32PICGOT
  { 808,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo105,0,nullptr },  // Inst #808 = QVALIGNI
  { 809,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo106,0,nullptr },  // Inst #809 = QVALIGNIb
  { 810,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo107,0,nullptr },  // Inst #810 = QVALIGNIs
  { 811,	3,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo108,0,nullptr },  // Inst #811 = QVESPLATI
  { 812,	3,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo109,0,nullptr },  // Inst #812 = QVESPLATIb
  { 813,	3,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo110,0,nullptr },  // Inst #813 = QVESPLATIs
  { 814,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #814 = QVFABS
  { 815,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #815 = QVFABSs
  { 816,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #816 = QVFADD
  { 817,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #817 = QVFADDS
  { 818,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo114,0,nullptr },  // Inst #818 = QVFADDSs
  { 819,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #819 = QVFCFID
  { 820,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #820 = QVFCFIDS
  { 821,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #821 = QVFCFIDU
  { 822,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #822 = QVFCFIDUS
  { 823,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115,0,nullptr },  // Inst #823 = QVFCFIDb
  { 824,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #824 = QVFCMPEQ
  { 825,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116,0,nullptr },  // Inst #825 = QVFCMPEQb
  { 826,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo117,0,nullptr },  // Inst #826 = QVFCMPEQbs
  { 827,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #827 = QVFCMPGT
  { 828,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116,0,nullptr },  // Inst #828 = QVFCMPGTb
  { 829,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo117,0,nullptr },  // Inst #829 = QVFCMPGTbs
  { 830,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #830 = QVFCMPLT
  { 831,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116,0,nullptr },  // Inst #831 = QVFCMPLTb
  { 832,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo117,0,nullptr },  // Inst #832 = QVFCMPLTbs
  { 833,	3,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #833 = QVFCPSGN
  { 834,	3,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114,0,nullptr },  // Inst #834 = QVFCPSGNs
  { 835,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #835 = QVFCTID
  { 836,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #836 = QVFCTIDU
  { 837,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #837 = QVFCTIDUZ
  { 838,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #838 = QVFCTIDZ
  { 839,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115,0,nullptr },  // Inst #839 = QVFCTIDb
  { 840,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #840 = QVFCTIW
  { 841,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #841 = QVFCTIWU
  { 842,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #842 = QVFCTIWUZ
  { 843,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #843 = QVFCTIWZ
  { 844,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo105,0,nullptr },  // Inst #844 = QVFLOGICAL
  { 845,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo106,0,nullptr },  // Inst #845 = QVFLOGICALb
  { 846,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo106,0,nullptr },  // Inst #846 = QVFLOGICALs
  { 847,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #847 = QVFMADD
  { 848,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #848 = QVFMADDS
  { 849,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119,0,nullptr },  // Inst #849 = QVFMADDSs
  { 850,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #850 = QVFMR
  { 851,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115,0,nullptr },  // Inst #851 = QVFMRb
  { 852,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #852 = QVFMRs
  { 853,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #853 = QVFMSUB
  { 854,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #854 = QVFMSUBS
  { 855,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119,0,nullptr },  // Inst #855 = QVFMSUBSs
  { 856,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #856 = QVFMUL
  { 857,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #857 = QVFMULS
  { 858,	3,	1,	11,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo114,0,nullptr },  // Inst #858 = QVFMULSs
  { 859,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #859 = QVFNABS
  { 860,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #860 = QVFNABSs
  { 861,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #861 = QVFNEG
  { 862,	2,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #862 = QVFNEGs
  { 863,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #863 = QVFNMADD
  { 864,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #864 = QVFNMADDS
  { 865,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119,0,nullptr },  // Inst #865 = QVFNMADDSs
  { 866,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #866 = QVFNMSUB
  { 867,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #867 = QVFNMSUBS
  { 868,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119,0,nullptr },  // Inst #868 = QVFNMSUBSs
  { 869,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #869 = QVFPERM
  { 870,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo120,0,nullptr },  // Inst #870 = QVFPERMs
  { 871,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #871 = QVFRE
  { 872,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #872 = QVFRES
  { 873,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #873 = QVFRESs
  { 874,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #874 = QVFRIM
  { 875,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #875 = QVFRIMs
  { 876,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #876 = QVFRIN
  { 877,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #877 = QVFRINs
  { 878,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #878 = QVFRIP
  { 879,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #879 = QVFRIPs
  { 880,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #880 = QVFRIZ
  { 881,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #881 = QVFRIZs
  { 882,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #882 = QVFRSP
  { 883,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121,0,nullptr },  // Inst #883 = QVFRSPs
  { 884,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #884 = QVFRSQRTE
  { 885,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111,0,nullptr },  // Inst #885 = QVFRSQRTES
  { 886,	2,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112,0,nullptr },  // Inst #886 = QVFRSQRTESs
  { 887,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #887 = QVFSEL
  { 888,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo122,0,nullptr },  // Inst #888 = QVFSELb
  { 889,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo123,0,nullptr },  // Inst #889 = QVFSELbb
  { 890,	4,	1,	58,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo124,0,nullptr },  // Inst #890 = QVFSELbs
  { 891,	3,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #891 = QVFSUB
  { 892,	3,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #892 = QVFSUBS
  { 893,	3,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114,0,nullptr },  // Inst #893 = QVFSUBSs
  { 894,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #894 = QVFTSTNAN
  { 895,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116,0,nullptr },  // Inst #895 = QVFTSTNANb
  { 896,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo117,0,nullptr },  // Inst #896 = QVFTSTNANbs
  { 897,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #897 = QVFXMADD
  { 898,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #898 = QVFXMADDS
  { 899,	3,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #899 = QVFXMUL
  { 900,	3,	1,	11,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113,0,nullptr },  // Inst #900 = QVFXMULS
  { 901,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #901 = QVFXXCPNMADD
  { 902,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #902 = QVFXXCPNMADDS
  { 903,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #903 = QVFXXMADD
  { 904,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #904 = QVFXXMADDS
  { 905,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #905 = QVFXXNPMADD
  { 906,	4,	1,	16,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118,0,nullptr },  // Inst #906 = QVFXXNPMADDS
  { 907,	2,	1,	58,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, ImplicitList13, nullptr, OperandInfo125,0,nullptr },  // Inst #907 = QVGPCI
  { 908,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #908 = QVLFCDUX
  { 909,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #909 = QVLFCDUXA
  { 910,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #910 = QVLFCDX
  { 911,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #911 = QVLFCDXA
  { 912,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #912 = QVLFCSUX
  { 913,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #913 = QVLFCSUXA
  { 914,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #914 = QVLFCSX
  { 915,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #915 = QVLFCSXA
  { 916,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo127,0,nullptr },  // Inst #916 = QVLFCSXs
  { 917,	4,	2,	30,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo128,0,nullptr },  // Inst #917 = QVLFDUX
  { 918,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #918 = QVLFDUXA
  { 919,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #919 = QVLFDX
  { 920,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #920 = QVLFDXA
  { 921,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129,0,nullptr },  // Inst #921 = QVLFDXb
  { 922,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #922 = QVLFIWAX
  { 923,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #923 = QVLFIWAXA
  { 924,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #924 = QVLFIWZX
  { 925,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #925 = QVLFIWZXA
  { 926,	4,	2,	30,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo130,0,nullptr },  // Inst #926 = QVLFSUX
  { 927,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #927 = QVLFSUXA
  { 928,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #928 = QVLFSX
  { 929,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #929 = QVLFSXA
  { 930,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129,0,nullptr },  // Inst #930 = QVLFSXb
  { 931,	3,	1,	29,	4,	0|(1<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo127,0,nullptr },  // Inst #931 = QVLFSXs
  { 932,	3,	1,	29,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #932 = QVLPCLDX
  { 933,	3,	1,	29,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #933 = QVLPCLSX
  { 934,	2,	1,	29,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo131,0,nullptr },  // Inst #934 = QVLPCLSXint
  { 935,	3,	1,	29,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #935 = QVLPCRDX
  { 936,	3,	1,	29,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #936 = QVLPCRSX
  { 937,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #937 = QVSTFCDUX
  { 938,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #938 = QVSTFCDUXA
  { 939,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #939 = QVSTFCDUXI
  { 940,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #940 = QVSTFCDUXIA
  { 941,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #941 = QVSTFCDX
  { 942,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #942 = QVSTFCDXA
  { 943,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #943 = QVSTFCDXI
  { 944,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #944 = QVSTFCDXIA
  { 945,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #945 = QVSTFCSUX
  { 946,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #946 = QVSTFCSUXA
  { 947,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #947 = QVSTFCSUXI
  { 948,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #948 = QVSTFCSUXIA
  { 949,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #949 = QVSTFCSX
  { 950,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #950 = QVSTFCSXA
  { 951,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #951 = QVSTFCSXI
  { 952,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #952 = QVSTFCSXIA
  { 953,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo127,0,nullptr },  // Inst #953 = QVSTFCSXs
  { 954,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo132,0,nullptr },  // Inst #954 = QVSTFDUX
  { 955,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #955 = QVSTFDUXA
  { 956,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #956 = QVSTFDUXI
  { 957,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #957 = QVSTFDUXIA
  { 958,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #958 = QVSTFDX
  { 959,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #959 = QVSTFDXA
  { 960,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #960 = QVSTFDXI
  { 961,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #961 = QVSTFDXIA
  { 962,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129,0,nullptr },  // Inst #962 = QVSTFDXb
  { 963,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #963 = QVSTFIWX
  { 964,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #964 = QVSTFIWXA
  { 965,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo133,0,nullptr },  // Inst #965 = QVSTFSUX
  { 966,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #966 = QVSTFSUXA
  { 967,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #967 = QVSTFSUXI
  { 968,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #968 = QVSTFSUXIA
  { 969,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo132,0,nullptr },  // Inst #969 = QVSTFSUXs
  { 970,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #970 = QVSTFSX
  { 971,	3,	0,	59,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #971 = QVSTFSXA
  { 972,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #972 = QVSTFSXI
  { 973,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo126,0,nullptr },  // Inst #973 = QVSTFSXIA
  { 974,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo127,0,nullptr },  // Inst #974 = QVSTFSXs
  { 975,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #975 = RESTORE_CR
  { 976,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #976 = RESTORE_CRBIT
  { 977,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #977 = RESTORE_VRSAVE
  { 978,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #978 = RFCI
  { 979,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #979 = RFDI
  { 980,	0,	0,	61,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #980 = RFI
  { 981,	0,	0,	62,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #981 = RFID
  { 982,	0,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #982 = RFMCI
  { 983,	4,	1,	63,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #983 = RLDCL
  { 984,	4,	1,	63,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo137,0,nullptr },  // Inst #984 = RLDCLo
  { 985,	4,	1,	63,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #985 = RLDCR
  { 986,	4,	1,	63,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo137,0,nullptr },  // Inst #986 = RLDCRo
  { 987,	4,	1,	64,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #987 = RLDIC
  { 988,	4,	1,	64,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #988 = RLDICL
  { 989,	4,	1,	64,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #989 = RLDICL_32_64
  { 990,	4,	1,	64,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo33,0,nullptr },  // Inst #990 = RLDICLo
  { 991,	4,	1,	64,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #991 = RLDICR
  { 992,	4,	1,	64,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo33,0,nullptr },  // Inst #992 = RLDICRo
  { 993,	4,	1,	64,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo33,0,nullptr },  // Inst #993 = RLDICo
  { 994,	5,	1,	64,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #994 = RLDIMI
  { 995,	5,	1,	64,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo139,0,nullptr },  // Inst #995 = RLDIMIo
  { 996,	6,	1,	65,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, nullptr, OperandInfo140,0,nullptr },  // Inst #996 = RLWIMI
  { 997,	6,	1,	65,	4,	0, 0xcULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #997 = RLWIMI8
  { 998,	6,	1,	65,	4,	0, 0xcULL, nullptr, ImplicitList1, OperandInfo141,0,nullptr },  // Inst #998 = RLWIMI8o
  { 999,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #999 = RLWIMIbm
  { 1000,	6,	1,	65,	4,	0|(1<<MCID::Commutable), 0xcULL, nullptr, ImplicitList1, OperandInfo140,0,nullptr },  // Inst #1000 = RLWIMIo
  { 1001,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #1001 = RLWIMIobm
  { 1002,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #1002 = RLWINM
  { 1003,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #1003 = RLWINM8
  { 1004,	5,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo144,0,nullptr },  // Inst #1004 = RLWINM8o
  { 1005,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #1005 = RLWINMbm
  { 1006,	5,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList1, OperandInfo143,0,nullptr },  // Inst #1006 = RLWINMo
  { 1007,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #1007 = RLWINMobm
  { 1008,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #1008 = RLWNM
  { 1009,	5,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1009 = RLWNM8
  { 1010,	5,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo146,0,nullptr },  // Inst #1010 = RLWNM8o
  { 1011,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #1011 = RLWNMbm
  { 1012,	5,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo145,0,nullptr },  // Inst #1012 = RLWNMo
  { 1013,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #1013 = RLWNMobm
  { 1014,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1014 = ROTRDI
  { 1015,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1015 = ROTRDIo
  { 1016,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1016 = ROTRWI
  { 1017,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1017 = ROTRWIo
  { 1018,	2,	2,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1018 = ReadTB
  { 1019,	1,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1019 = SC
  { 1020,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #1020 = SELECT_CC_F4
  { 1021,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1021 = SELECT_CC_F8
  { 1022,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1022 = SELECT_CC_I4
  { 1023,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #1023 = SELECT_CC_I8
  { 1024,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo151,0,nullptr },  // Inst #1024 = SELECT_CC_QBRC
  { 1025,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo152,0,nullptr },  // Inst #1025 = SELECT_CC_QFRC
  { 1026,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo153,0,nullptr },  // Inst #1026 = SELECT_CC_QSRC
  { 1027,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1027 = SELECT_CC_VRRC
  { 1028,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1028 = SELECT_CC_VSFRC
  { 1029,	5,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1029 = SELECT_CC_VSRC
  { 1030,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1030 = SELECT_F4
  { 1031,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #1031 = SELECT_F8
  { 1032,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #1032 = SELECT_I4
  { 1033,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1033 = SELECT_I8
  { 1034,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo160,0,nullptr },  // Inst #1034 = SELECT_QBRC
  { 1035,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo161,0,nullptr },  // Inst #1035 = SELECT_QFRC
  { 1036,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo162,0,nullptr },  // Inst #1036 = SELECT_QSRC
  { 1037,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #1037 = SELECT_VRRC
  { 1038,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #1038 = SELECT_VSFRC
  { 1039,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #1039 = SELECT_VSRC
  { 1040,	0,	0,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1040 = SLBIA
  { 1041,	1,	0,	67,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #1041 = SLBIE
  { 1042,	2,	1,	68,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1042 = SLBMFEE
  { 1043,	2,	0,	69,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1043 = SLBMTE
  { 1044,	3,	1,	63,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #1044 = SLD
  { 1045,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1045 = SLDI
  { 1046,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1046 = SLDIo
  { 1047,	3,	1,	63,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo165,0,nullptr },  // Inst #1047 = SLDo
  { 1048,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1048 = SLW
  { 1049,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1049 = SLW8
  { 1050,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1050 = SLW8o
  { 1051,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1051 = SLWI
  { 1052,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1052 = SLWIo
  { 1053,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #1053 = SLWo
  { 1054,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #1054 = SPILL_CR
  { 1055,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #1055 = SPILL_CRBIT
  { 1056,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #1056 = SPILL_VRSAVE
  { 1057,	3,	1,	63,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo165,0,nullptr },  // Inst #1057 = SRAD
  { 1058,	3,	1,	64,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo15,0,nullptr },  // Inst #1058 = SRADI
  { 1059,	3,	1,	64,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo15,0,nullptr },  // Inst #1059 = SRADIo
  { 1060,	3,	1,	63,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo165,0,nullptr },  // Inst #1060 = SRADo
  { 1061,	3,	1,	70,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #1061 = SRAW
  { 1062,	3,	1,	70,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #1062 = SRAWI
  { 1063,	3,	1,	70,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo13,0,nullptr },  // Inst #1063 = SRAWIo
  { 1064,	3,	1,	70,	4,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #1064 = SRAWo
  { 1065,	3,	1,	63,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #1065 = SRD
  { 1066,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1066 = SRDI
  { 1067,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1067 = SRDIo
  { 1068,	3,	1,	63,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo165,0,nullptr },  // Inst #1068 = SRDo
  { 1069,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1069 = SRW
  { 1070,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1070 = SRW8
  { 1071,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1071 = SRW8o
  { 1072,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1072 = SRWI
  { 1073,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1073 = SRWIo
  { 1074,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #1074 = SRWo
  { 1075,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #1075 = STB
  { 1076,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1076 = STB8
  { 1077,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1077 = STBCIX
  { 1078,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo63,0,nullptr },  // Inst #1078 = STBCX
  { 1079,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1079 = STBU
  { 1080,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1080 = STBU8
  { 1081,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1081 = STBUX
  { 1082,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1082 = STBUX8
  { 1083,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1083 = STBX
  { 1084,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1084 = STBX8
  { 1085,	3,	0,	73,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1085 = STD
  { 1086,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1086 = STDBRX
  { 1087,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1087 = STDCIX
  { 1088,	3,	0,	74,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo69,0,nullptr },  // Inst #1088 = STDCX
  { 1089,	4,	1,	75,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1089 = STDU
  { 1090,	4,	1,	76,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1090 = STDUX
  { 1091,	3,	0,	73,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1091 = STDX
  { 1092,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #1092 = STFD
  { 1093,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1093 = STFDU
  { 1094,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #1094 = STFDUX
  { 1095,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1095 = STFDX
  { 1096,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1096 = STFIWX
  { 1097,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #1097 = STFS
  { 1098,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #1098 = STFSU
  { 1099,	4,	1,	60,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #1099 = STFSUX
  { 1100,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #1100 = STFSX
  { 1101,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #1101 = STH
  { 1102,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1102 = STH8
  { 1103,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1103 = STHBRX
  { 1104,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1104 = STHCIX
  { 1105,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo63,0,nullptr },  // Inst #1105 = STHCX
  { 1106,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1106 = STHU
  { 1107,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1107 = STHU8
  { 1108,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1108 = STHUX
  { 1109,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1109 = STHUX8
  { 1110,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1110 = STHX
  { 1111,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1111 = STHX8
  { 1112,	3,	0,	35,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #1112 = STMW
  { 1113,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1113 = STSWI
  { 1114,	3,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #1114 = STVEBX
  { 1115,	3,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #1115 = STVEHX
  { 1116,	3,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #1116 = STVEWX
  { 1117,	3,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #1117 = STVX
  { 1118,	3,	0,	45,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #1118 = STVXL
  { 1119,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #1119 = STW
  { 1120,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1120 = STW8
  { 1121,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1121 = STWBRX
  { 1122,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1122 = STWCIX
  { 1123,	3,	0,	71,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo63,0,nullptr },  // Inst #1123 = STWCX
  { 1124,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1124 = STWU
  { 1125,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1125 = STWU8
  { 1126,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1126 = STWUX
  { 1127,	4,	1,	72,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1127 = STWUX8
  { 1128,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #1128 = STWX
  { 1129,	3,	0,	45,	4,	0|(1<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1129 = STWX8
  { 1130,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo84,0,nullptr },  // Inst #1130 = STXSDX
  { 1131,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo85,0,nullptr },  // Inst #1131 = STXVD2X
  { 1132,	3,	0,	59,	4,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo85,0,nullptr },  // Inst #1132 = STXVW4X
  { 1133,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1133 = SUBF
  { 1134,	3,	1,	2,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1134 = SUBF8
  { 1135,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1135 = SUBF8o
  { 1136,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #1136 = SUBFC
  { 1137,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #1137 = SUBFC8
  { 1138,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #1138 = SUBFC8o
  { 1139,	3,	1,	2,	4,	0, 0xcULL, nullptr, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #1139 = SUBFCo
  { 1140,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo12,0,nullptr },  // Inst #1140 = SUBFE
  { 1141,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #1141 = SUBFE8
  { 1142,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14,0,nullptr },  // Inst #1142 = SUBFE8o
  { 1143,	3,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo12,0,nullptr },  // Inst #1143 = SUBFEo
  { 1144,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #1144 = SUBFIC
  { 1145,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo15,0,nullptr },  // Inst #1145 = SUBFIC8
  { 1146,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20,0,nullptr },  // Inst #1146 = SUBFME
  { 1147,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21,0,nullptr },  // Inst #1147 = SUBFME8
  { 1148,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21,0,nullptr },  // Inst #1148 = SUBFME8o
  { 1149,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20,0,nullptr },  // Inst #1149 = SUBFMEo
  { 1150,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20,0,nullptr },  // Inst #1150 = SUBFZE
  { 1151,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21,0,nullptr },  // Inst #1151 = SUBFZE8
  { 1152,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21,0,nullptr },  // Inst #1152 = SUBFZE8o
  { 1153,	2,	1,	2,	4,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20,0,nullptr },  // Inst #1153 = SUBFZEo
  { 1154,	3,	1,	2,	4,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #1154 = SUBFo
  { 1155,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1155 = SUBI
  { 1156,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1156 = SUBIC
  { 1157,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1157 = SUBICo
  { 1158,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1158 = SUBIS
  { 1159,	1,	0,	47,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1159 = SYNC
  { 1160,	2,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #1160 = TABORT
  { 1161,	4,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1161 = TABORTDC
  { 1162,	4,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #1162 = TABORTDCI
  { 1163,	4,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1163 = TABORTWC
  { 1164,	4,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #1164 = TABORTWCI
  { 1165,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5,0,nullptr },  // Inst #1165 = TAILB
  { 1166,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5,0,nullptr },  // Inst #1166 = TAILB8
  { 1167,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5,0,nullptr },  // Inst #1167 = TAILBA
  { 1168,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5,0,nullptr },  // Inst #1168 = TAILBA8
  { 1169,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, nullptr, nullptr,0,nullptr },  // Inst #1169 = TAILBCTR
  { 1170,	0,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, nullptr, nullptr,0,nullptr },  // Inst #1170 = TAILBCTR8
  { 1171,	2,	1,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1171 = TBEGIN
  { 1172,	1,	0,	49,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1172 = TCHECK
  { 1173,	1,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1173 = TCHECK_RET
  { 1174,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo179,0,nullptr },  // Inst #1174 = TCRETURNai
  { 1175,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo179,0,nullptr },  // Inst #1175 = TCRETURNai8
  { 1176,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo179,0,nullptr },  // Inst #1176 = TCRETURNdi
  { 1177,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo179,0,nullptr },  // Inst #1177 = TCRETURNdi8
  { 1178,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo180,0,nullptr },  // Inst #1178 = TCRETURNri
  { 1179,	2,	0,	0,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo181,0,nullptr },  // Inst #1179 = TCRETURNri8
  { 1180,	3,	0,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #1180 = TD
  { 1181,	3,	0,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1181 = TDI
  { 1182,	2,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1182 = TEND
  { 1183,	0,	0,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1183 = TLBIA
  { 1184,	2,	0,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1184 = TLBIE
  { 1185,	1,	0,	80,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #1185 = TLBIEL
  { 1186,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1186 = TLBIVAX
  { 1187,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #1187 = TLBLD
  { 1188,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #1188 = TLBLI
  { 1189,	0,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1189 = TLBRE
  { 1190,	3,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1190 = TLBRE2
  { 1191,	2,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1191 = TLBSX
  { 1192,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1192 = TLBSX2
  { 1193,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1193 = TLBSX2D
  { 1194,	0,	0,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1194 = TLBSYNC
  { 1195,	0,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1195 = TLBWE
  { 1196,	3,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1196 = TLBWE2
  { 1197,	0,	0,	8,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1197 = TRAP
  { 1198,	1,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1198 = TRECHKPT
  { 1199,	2,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1199 = TRECLAIM
  { 1200,	2,	1,	49,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1200 = TSR
  { 1201,	3,	0,	82,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #1201 = TW
  { 1202,	3,	0,	82,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1202 = TWI
  { 1203,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1203 = UPDATE_VRSAVE
  { 1204,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1204 = UpdateGBR
  { 1205,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1205 = VADDCUW
  { 1206,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1206 = VADDFP
  { 1207,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1207 = VADDSBS
  { 1208,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1208 = VADDSHS
  { 1209,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1209 = VADDSWS
  { 1210,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1210 = VADDUBM
  { 1211,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1211 = VADDUBS
  { 1212,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1212 = VADDUDM
  { 1213,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1213 = VADDUHM
  { 1214,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1214 = VADDUHS
  { 1215,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1215 = VADDUWM
  { 1216,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1216 = VADDUWS
  { 1217,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1217 = VAND
  { 1218,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1218 = VANDC
  { 1219,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1219 = VAVGSB
  { 1220,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1220 = VAVGSH
  { 1221,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1221 = VAVGSW
  { 1222,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1222 = VAVGUB
  { 1223,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1223 = VAVGUH
  { 1224,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1224 = VAVGUW
  { 1225,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1225 = VCFSX
  { 1226,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1226 = VCFSX_0
  { 1227,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1227 = VCFUX
  { 1228,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1228 = VCFUX_0
  { 1229,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1229 = VCIPHER
  { 1230,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1230 = VCIPHERLAST
  { 1231,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1231 = VCLZB
  { 1232,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1232 = VCLZD
  { 1233,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1233 = VCLZH
  { 1234,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1234 = VCLZW
  { 1235,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1235 = VCMPBFP
  { 1236,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1236 = VCMPBFPo
  { 1237,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1237 = VCMPEQFP
  { 1238,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1238 = VCMPEQFPo
  { 1239,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1239 = VCMPEQUB
  { 1240,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1240 = VCMPEQUBo
  { 1241,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1241 = VCMPEQUD
  { 1242,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1242 = VCMPEQUDo
  { 1243,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1243 = VCMPEQUH
  { 1244,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1244 = VCMPEQUHo
  { 1245,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1245 = VCMPEQUW
  { 1246,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1246 = VCMPEQUWo
  { 1247,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1247 = VCMPGEFP
  { 1248,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1248 = VCMPGEFPo
  { 1249,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1249 = VCMPGTFP
  { 1250,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1250 = VCMPGTFPo
  { 1251,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1251 = VCMPGTSB
  { 1252,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1252 = VCMPGTSBo
  { 1253,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1253 = VCMPGTSD
  { 1254,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1254 = VCMPGTSDo
  { 1255,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1255 = VCMPGTSH
  { 1256,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1256 = VCMPGTSHo
  { 1257,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1257 = VCMPGTSW
  { 1258,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1258 = VCMPGTSWo
  { 1259,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1259 = VCMPGTUB
  { 1260,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1260 = VCMPGTUBo
  { 1261,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1261 = VCMPGTUD
  { 1262,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1262 = VCMPGTUDo
  { 1263,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1263 = VCMPGTUH
  { 1264,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1264 = VCMPGTUHo
  { 1265,	3,	1,	83,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1265 = VCMPGTUW
  { 1266,	3,	1,	83,	4,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo187,0,nullptr },  // Inst #1266 = VCMPGTUWo
  { 1267,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1267 = VCTSXS
  { 1268,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1268 = VCTSXS_0
  { 1269,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1269 = VCTUXS
  { 1270,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1270 = VCTUXS_0
  { 1271,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1271 = VEQV
  { 1272,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1272 = VEXPTEFP
  { 1273,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1273 = VLOGEFP
  { 1274,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1274 = VMADDFP
  { 1275,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1275 = VMAXFP
  { 1276,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1276 = VMAXSB
  { 1277,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1277 = VMAXSD
  { 1278,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1278 = VMAXSH
  { 1279,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1279 = VMAXSW
  { 1280,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1280 = VMAXUB
  { 1281,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1281 = VMAXUD
  { 1282,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1282 = VMAXUH
  { 1283,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1283 = VMAXUW
  { 1284,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1284 = VMHADDSHS
  { 1285,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1285 = VMHRADDSHS
  { 1286,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1286 = VMINFP
  { 1287,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1287 = VMINSB
  { 1288,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1288 = VMINSD
  { 1289,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1289 = VMINSH
  { 1290,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1290 = VMINSW
  { 1291,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1291 = VMINUB
  { 1292,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1292 = VMINUD
  { 1293,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1293 = VMINUH
  { 1294,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1294 = VMINUW
  { 1295,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1295 = VMLADDUHM
  { 1296,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1296 = VMRGHB
  { 1297,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1297 = VMRGHH
  { 1298,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1298 = VMRGHW
  { 1299,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1299 = VMRGLB
  { 1300,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1300 = VMRGLH
  { 1301,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1301 = VMRGLW
  { 1302,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1302 = VMSUMMBM
  { 1303,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1303 = VMSUMSHM
  { 1304,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1304 = VMSUMSHS
  { 1305,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1305 = VMSUMUBM
  { 1306,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1306 = VMSUMUHM
  { 1307,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1307 = VMSUMUHS
  { 1308,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1308 = VMULESB
  { 1309,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1309 = VMULESH
  { 1310,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1310 = VMULESW
  { 1311,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1311 = VMULEUB
  { 1312,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1312 = VMULEUH
  { 1313,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1313 = VMULEUW
  { 1314,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1314 = VMULOSB
  { 1315,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1315 = VMULOSH
  { 1316,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1316 = VMULOSW
  { 1317,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1317 = VMULOUB
  { 1318,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1318 = VMULOUH
  { 1319,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1319 = VMULOUW
  { 1320,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1320 = VMULUWM
  { 1321,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1321 = VNAND
  { 1322,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1322 = VNCIPHER
  { 1323,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1323 = VNCIPHERLAST
  { 1324,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1324 = VNMSUBFP
  { 1325,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1325 = VNOR
  { 1326,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1326 = VOR
  { 1327,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1327 = VORC
  { 1328,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1328 = VPERM
  { 1329,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1329 = VPERMXOR
  { 1330,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1330 = VPKPX
  { 1331,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1331 = VPKSHSS
  { 1332,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1332 = VPKSHUS
  { 1333,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1333 = VPKSWSS
  { 1334,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1334 = VPKSWUS
  { 1335,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1335 = VPKUHUM
  { 1336,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1336 = VPKUHUS
  { 1337,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1337 = VPKUWUM
  { 1338,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1338 = VPKUWUS
  { 1339,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1339 = VPMSUMB
  { 1340,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1340 = VPMSUMD
  { 1341,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1341 = VPMSUMH
  { 1342,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1342 = VPMSUMW
  { 1343,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1343 = VPOPCNTB
  { 1344,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1344 = VPOPCNTD
  { 1345,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1345 = VPOPCNTH
  { 1346,	2,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1346 = VPOPCNTW
  { 1347,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1347 = VREFP
  { 1348,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1348 = VRFIM
  { 1349,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1349 = VRFIN
  { 1350,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1350 = VRFIP
  { 1351,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1351 = VRFIZ
  { 1352,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1352 = VRLB
  { 1353,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1353 = VRLD
  { 1354,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1354 = VRLH
  { 1355,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1355 = VRLW
  { 1356,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1356 = VRSQRTEFP
  { 1357,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1357 = VSBOX
  { 1358,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1358 = VSEL
  { 1359,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1359 = VSHASIGMAD
  { 1360,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1360 = VSHASIGMAW
  { 1361,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1361 = VSL
  { 1362,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1362 = VSLB
  { 1363,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1363 = VSLD
  { 1364,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1364 = VSLDOI
  { 1365,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1365 = VSLH
  { 1366,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1366 = VSLO
  { 1367,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1367 = VSLW
  { 1368,	3,	1,	58,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1368 = VSPLTB
  { 1369,	3,	1,	58,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1369 = VSPLTH
  { 1370,	2,	1,	58,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1370 = VSPLTISB
  { 1371,	2,	1,	58,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1371 = VSPLTISH
  { 1372,	2,	1,	58,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1372 = VSPLTISW
  { 1373,	3,	1,	58,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1373 = VSPLTW
  { 1374,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1374 = VSR
  { 1375,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1375 = VSRAB
  { 1376,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1376 = VSRAD
  { 1377,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1377 = VSRAH
  { 1378,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1378 = VSRAW
  { 1379,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1379 = VSRB
  { 1380,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1380 = VSRD
  { 1381,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1381 = VSRH
  { 1382,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1382 = VSRO
  { 1383,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1383 = VSRW
  { 1384,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1384 = VSUBCUW
  { 1385,	3,	1,	46,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1385 = VSUBFP
  { 1386,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1386 = VSUBSBS
  { 1387,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1387 = VSUBSHS
  { 1388,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1388 = VSUBSWS
  { 1389,	3,	1,	46,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1389 = VSUBUBM
  { 1390,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1390 = VSUBUBS
  { 1391,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1391 = VSUBUDM
  { 1392,	3,	1,	46,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1392 = VSUBUHM
  { 1393,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1393 = VSUBUHS
  { 1394,	3,	1,	46,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1394 = VSUBUWM
  { 1395,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1395 = VSUBUWS
  { 1396,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1396 = VSUM2SWS
  { 1397,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1397 = VSUM4SBS
  { 1398,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1398 = VSUM4SHS
  { 1399,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1399 = VSUM4UBS
  { 1400,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1400 = VSUMSWS
  { 1401,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1401 = VUPKHPX
  { 1402,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1402 = VUPKHSB
  { 1403,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1403 = VUPKHSH
  { 1404,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1404 = VUPKLPX
  { 1405,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1405 = VUPKLSB
  { 1406,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1406 = VUPKLSH
  { 1407,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1407 = VXOR
  { 1408,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1408 = V_SET0
  { 1409,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1409 = V_SET0B
  { 1410,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1410 = V_SET0H
  { 1411,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1411 = V_SETALLONES
  { 1412,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1412 = V_SETALLONESB
  { 1413,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1413 = V_SETALLONESH
  { 1414,	1,	0,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1414 = WAIT
  { 1415,	1,	0,	51,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #1415 = WRTEE
  { 1416,	1,	0,	51,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1416 = WRTEEI
  { 1417,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1417 = XOR
  { 1418,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1418 = XOR8
  { 1419,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1419 = XOR8o
  { 1420,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1420 = XORI
  { 1421,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1421 = XORI8
  { 1422,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1422 = XORIS
  { 1423,	3,	1,	1,	4,	0, 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1423 = XORIS8
  { 1424,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #1424 = XORo
  { 1425,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1425 = XSABSDP
  { 1426,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1426 = XSADDDP
  { 1427,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo196,0,nullptr },  // Inst #1427 = XSCMPODP
  { 1428,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo196,0,nullptr },  // Inst #1428 = XSCMPUDP
  { 1429,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1429 = XSCPSGNDP
  { 1430,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1430 = XSCVDPSP
  { 1431,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1431 = XSCVDPSXDS
  { 1432,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1432 = XSCVDPSXWS
  { 1433,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1433 = XSCVDPUXDS
  { 1434,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1434 = XSCVDPUXWS
  { 1435,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1435 = XSCVSPDP
  { 1436,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1436 = XSCVSXDDP
  { 1437,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1437 = XSCVUXDDP
  { 1438,	3,	1,	14,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1438 = XSDIVDP
  { 1439,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1439 = XSMADDADP
  { 1440,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1440 = XSMADDMDP
  { 1441,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1441 = XSMAXDP
  { 1442,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1442 = XSMINDP
  { 1443,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1443 = XSMSUBADP
  { 1444,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1444 = XSMSUBMDP
  { 1445,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1445 = XSMULDP
  { 1446,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1446 = XSNABSDP
  { 1447,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1447 = XSNEGDP
  { 1448,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1448 = XSNMADDADP
  { 1449,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1449 = XSNMADDMDP
  { 1450,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1450 = XSNMSUBADP
  { 1451,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197,0,nullptr },  // Inst #1451 = XSNMSUBMDP
  { 1452,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1452 = XSRDPI
  { 1453,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1453 = XSRDPIC
  { 1454,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1454 = XSRDPIM
  { 1455,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1455 = XSRDPIP
  { 1456,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1456 = XSRDPIZ
  { 1457,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1457 = XSREDP
  { 1458,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1458 = XSRSQRTEDP
  { 1459,	2,	1,	17,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo194,0,nullptr },  // Inst #1459 = XSSQRTDP
  { 1460,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo195,0,nullptr },  // Inst #1460 = XSSUBDP
  { 1461,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo196,0,nullptr },  // Inst #1461 = XSTDIVDP
  { 1462,	2,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo198,0,nullptr },  // Inst #1462 = XSTSQRTDP
  { 1463,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1463 = XVABSDP
  { 1464,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1464 = XVABSSP
  { 1465,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1465 = XVADDDP
  { 1466,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1466 = XVADDSP
  { 1467,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1467 = XVCMPEQDP
  { 1468,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo200,0,nullptr },  // Inst #1468 = XVCMPEQDPo
  { 1469,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1469 = XVCMPEQSP
  { 1470,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo200,0,nullptr },  // Inst #1470 = XVCMPEQSPo
  { 1471,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1471 = XVCMPGEDP
  { 1472,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo200,0,nullptr },  // Inst #1472 = XVCMPGEDPo
  { 1473,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1473 = XVCMPGESP
  { 1474,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo200,0,nullptr },  // Inst #1474 = XVCMPGESPo
  { 1475,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1475 = XVCMPGTDP
  { 1476,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo200,0,nullptr },  // Inst #1476 = XVCMPGTDPo
  { 1477,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1477 = XVCMPGTSP
  { 1478,	3,	1,	83,	4,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo200,0,nullptr },  // Inst #1478 = XVCMPGTSPo
  { 1479,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1479 = XVCPSGNDP
  { 1480,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1480 = XVCPSGNSP
  { 1481,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1481 = XVCVDPSP
  { 1482,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1482 = XVCVDPSXDS
  { 1483,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1483 = XVCVDPSXWS
  { 1484,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1484 = XVCVDPUXDS
  { 1485,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1485 = XVCVDPUXWS
  { 1486,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1486 = XVCVSPDP
  { 1487,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1487 = XVCVSPSXDS
  { 1488,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1488 = XVCVSPSXWS
  { 1489,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1489 = XVCVSPUXDS
  { 1490,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1490 = XVCVSPUXWS
  { 1491,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1491 = XVCVSXDDP
  { 1492,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1492 = XVCVSXDSP
  { 1493,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1493 = XVCVSXWDP
  { 1494,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1494 = XVCVSXWSP
  { 1495,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1495 = XVCVUXDDP
  { 1496,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1496 = XVCVUXDSP
  { 1497,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1497 = XVCVUXWDP
  { 1498,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1498 = XVCVUXWSP
  { 1499,	3,	1,	14,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1499 = XVDIVDP
  { 1500,	3,	1,	15,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1500 = XVDIVSP
  { 1501,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1501 = XVMADDADP
  { 1502,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1502 = XVMADDASP
  { 1503,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1503 = XVMADDMDP
  { 1504,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1504 = XVMADDMSP
  { 1505,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1505 = XVMAXDP
  { 1506,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1506 = XVMAXSP
  { 1507,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1507 = XVMINDP
  { 1508,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1508 = XVMINSP
  { 1509,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1509 = XVMSUBADP
  { 1510,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1510 = XVMSUBASP
  { 1511,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1511 = XVMSUBMDP
  { 1512,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1512 = XVMSUBMSP
  { 1513,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1513 = XVMULDP
  { 1514,	3,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1514 = XVMULSP
  { 1515,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1515 = XVNABSDP
  { 1516,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1516 = XVNABSSP
  { 1517,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1517 = XVNEGDP
  { 1518,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1518 = XVNEGSP
  { 1519,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1519 = XVNMADDADP
  { 1520,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1520 = XVNMADDASP
  { 1521,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1521 = XVNMADDMDP
  { 1522,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1522 = XVNMADDMSP
  { 1523,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1523 = XVNMSUBADP
  { 1524,	4,	1,	4,	4,	0|(1<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1524 = XVNMSUBASP
  { 1525,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1525 = XVNMSUBMDP
  { 1526,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo201,0,nullptr },  // Inst #1526 = XVNMSUBMSP
  { 1527,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1527 = XVRDPI
  { 1528,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1528 = XVRDPIC
  { 1529,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1529 = XVRDPIM
  { 1530,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1530 = XVRDPIP
  { 1531,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1531 = XVRDPIZ
  { 1532,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1532 = XVREDP
  { 1533,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1533 = XVRESP
  { 1534,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1534 = XVRSPI
  { 1535,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1535 = XVRSPIC
  { 1536,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1536 = XVRSPIM
  { 1537,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1537 = XVRSPIP
  { 1538,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1538 = XVRSPIZ
  { 1539,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1539 = XVRSQRTEDP
  { 1540,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1540 = XVRSQRTESP
  { 1541,	2,	1,	17,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1541 = XVSQRTDP
  { 1542,	2,	1,	18,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo199,0,nullptr },  // Inst #1542 = XVSQRTSP
  { 1543,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1543 = XVSUBDP
  { 1544,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200,0,nullptr },  // Inst #1544 = XVSUBSP
  { 1545,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo202,0,nullptr },  // Inst #1545 = XVTDIVDP
  { 1546,	3,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo202,0,nullptr },  // Inst #1546 = XVTDIVSP
  { 1547,	2,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo203,0,nullptr },  // Inst #1547 = XVTSQRTDP
  { 1548,	2,	1,	13,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo203,0,nullptr },  // Inst #1548 = XVTSQRTSP
  { 1549,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1549 = XXLAND
  { 1550,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1550 = XXLANDC
  { 1551,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1551 = XXLEQV
  { 1552,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1552 = XXLNAND
  { 1553,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1553 = XXLNOR
  { 1554,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1554 = XXLOR
  { 1555,	3,	1,	46,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1555 = XXLORC
  { 1556,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1556 = XXLORf
  { 1557,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1557 = XXLXOR
  { 1558,	3,	1,	58,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1558 = XXMRGHW
  { 1559,	3,	1,	58,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1559 = XXMRGLW
  { 1560,	4,	1,	58,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1560 = XXPERMDI
  { 1561,	4,	1,	58,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1561 = XXSEL
  { 1562,	4,	1,	58,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1562 = XXSLDWI
  { 1563,	3,	1,	58,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1563 = XXSPLTW
  { 1564,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo207,0,nullptr },  // Inst #1564 = gBC
  { 1565,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo207,0,nullptr },  // Inst #1565 = gBCA
  { 1566,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, OperandInfo208,0,nullptr },  // Inst #1566 = gBCCTR
  { 1567,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList25, OperandInfo208,0,nullptr },  // Inst #1567 = gBCCTRL
  { 1568,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList25, OperandInfo207,0,nullptr },  // Inst #1568 = gBCL
  { 1569,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList25, OperandInfo207,0,nullptr },  // Inst #1569 = gBCLA
  { 1570,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, OperandInfo208,0,nullptr },  // Inst #1570 = gBCLR
  { 1571,	3,	0,	3,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList25, OperandInfo208,0,nullptr },  // Inst #1571 = gBCLRL
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', '3', '2', 0,
  /* 71 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 91 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 111 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 132 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 168 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 188 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 208 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 227 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', '3', '2', 0,
  /* 240 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', '3', '2', 0,
  /* 253 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', '3', '2', 0,
  /* 267 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', '3', '2', 0,
  /* 281 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 298 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 315 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 330 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 343 */ 'L', 'W', 'A', '_', '3', '2', 0,
  /* 350 */ 'L', 'W', 'A', 'X', '_', '3', '2', 0,
  /* 358 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '3', '2', 0,
  /* 376 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '3', '2', 0,
  /* 393 */ 'T', 'L', 'B', 'R', 'E', '2', 0,
  /* 400 */ 'T', 'L', 'B', 'W', 'E', '2', 0,
  /* 407 */ 'T', 'L', 'B', 'S', 'X', '2', 0,
  /* 414 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 434 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 454 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 475 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 495 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 511 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 531 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 551 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 570 */ 'D', 'S', 'T', '6', '4', 0,
  /* 576 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 584 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 591 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 600 */ 'E', 'X', 'T', 'S', 'B', '8', '_', '3', '2', '_', '6', '4', 0,
  /* 613 */ 'E', 'X', 'T', 'S', 'H', '8', '_', '3', '2', '_', '6', '4', 0,
  /* 626 */ 'R', 'L', 'D', 'I', 'C', 'L', '_', '3', '2', '_', '6', '4', 0,
  /* 639 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 651 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '6', '4', 0,
  /* 669 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '6', '4', 0,
  /* 686 */ 'A', 'D', 'D', '4', 0,
  /* 691 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 704 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '4', 0,
  /* 714 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 727 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '4', 0,
  /* 737 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 757 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 777 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 798 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 818 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 834 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 854 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 874 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 893 */ 'N', 'O', 'P', '_', 'G', 'T', '_', 'P', 'W', 'R', '6', 0,
  /* 905 */ 'N', 'O', 'P', '_', 'G', 'T', '_', 'P', 'W', 'R', '7', 0,
  /* 917 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 925 */ 'L', 'H', 'A', '8', 0,
  /* 930 */ 'B', 'L', 'A', '8', 0,
  /* 935 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 942 */ 'C', 'M', 'P', 'B', '8', 0,
  /* 948 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 955 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 961 */ 'S', 'T', 'B', '8', 0,
  /* 966 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 972 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 978 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 985 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 992 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 1000 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 1010 */ 'O', 'R', 'C', '8', 0,
  /* 1015 */ 'A', 'D', 'D', '8', 0,
  /* 1020 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 1026 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 1032 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 1039 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 1046 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 1054 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 1061 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 1069 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 1075 */ 'M', 'F', 'O', 'C', 'R', 'F', '8', 0,
  /* 1083 */ 'M', 'T', 'O', 'C', 'R', 'F', '8', 0,
  /* 1091 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 1098 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 1111 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '8', 0,
  /* 1121 */ 'N', 'E', 'G', '8', 0,
  /* 1126 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 1133 */ 'S', 'T', 'H', '8', 0,
  /* 1138 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 1144 */ 'M', 'U', 'L', 'L', 'I', '8', 0,
  /* 1151 */ 'R', 'L', 'W', 'I', 'M', 'I', '8', 0,
  /* 1159 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 1165 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 1184 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 1197 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 1216 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1236 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1255 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1270 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1289 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1308 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1326 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '8', 0,
  /* 1336 */ 'B', 'L', '8', 0,
  /* 1340 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1346 */ 'B', 'C', 'T', 'R', 'L', '8', 0,
  /* 1353 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1361 */ 'B', 'C', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1370 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1378 */ 'R', 'L', 'W', 'N', 'M', '8', 0,
  /* 1385 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1391 */ 'B', 'L', 'R', '8', 0,
  /* 1396 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1402 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1408 */ 'B', 'D', 'Z', 'L', 'R', '8', 0,
  /* 1415 */ 'B', 'D', 'N', 'Z', 'L', 'R', '8', 0,
  /* 1423 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1435 */ 'N', 'O', 'R', '8', 0,
  /* 1440 */ 'X', 'O', 'R', '8', 0,
  /* 1445 */ 'M', 'F', 'S', 'P', 'R', '8', 0,
  /* 1452 */ 'M', 'T', 'S', 'P', 'R', '8', 0,
  /* 1459 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1469 */ 'B', 'C', 'C', 'T', 'R', '8', 0,
  /* 1476 */ 'B', 'C', 'C', 'C', 'T', 'R', '8', 0,
  /* 1484 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1491 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1498 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1505 */ 'L', 'I', 'S', '8', 0,
  /* 1510 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1517 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'E', 'Q', '_', 'B', 'I', 'T', '8', 0,
  /* 1533 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'G', 'T', '_', 'B', 'I', 'T', '8', 0,
  /* 1549 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1555 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1561 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1567 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1573 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1579 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1585 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1591 */ 'E', 'Q', 'V', '8', 0,
  /* 1596 */ 'S', 'L', 'W', '8', 0,
  /* 1601 */ 'S', 'R', 'W', '8', 0,
  /* 1606 */ 'S', 'T', 'W', '8', 0,
  /* 1611 */ 'C', 'N', 'T', 'L', 'Z', 'W', '8', 0,
  /* 1619 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1625 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1631 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1637 */ 'L', 'H', 'B', 'R', 'X', '8', 0,
  /* 1644 */ 'L', 'W', 'B', 'R', 'X', '8', 0,
  /* 1651 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1658 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1665 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1672 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1679 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1686 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1693 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1700 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1706 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1712 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1718 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1724 */ 'L', 'B', 'Z', '8', 0,
  /* 1729 */ 'B', 'D', 'Z', '8', 0,
  /* 1734 */ 'L', 'H', 'Z', '8', 0,
  /* 1739 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1745 */ 'L', 'W', 'Z', '8', 0,
  /* 1750 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1762 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1774 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1786 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1793 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1801 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1813 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1825 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1835 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 'A', 0,
  /* 1845 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1857 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1869 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1879 */ 'E', 'V', 'M', 'H', 'E', 'G', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1891 */ 'E', 'V', 'M', 'H', 'O', 'G', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1903 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1913 */ 'D', 'C', 'B', 'A', 0,
  /* 1918 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1925 */ 'L', 'D', 't', 'o', 'c', 'B', 'A', 0,
  /* 1933 */ 'g', 'B', 'C', 'A', 0,
  /* 1938 */ 'B', 'C', 'C', 'A', 0,
  /* 1943 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 0,
  /* 1953 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'F', 'A', 0,
  /* 1963 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 0,
  /* 1973 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 0,
  /* 1982 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 0,
  /* 1992 */ 'E', 'V', 'M', 'W', 'H', 'S', 'S', 'F', 'A', 0,
  /* 2002 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 0,
  /* 2012 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 0,
  /* 2021 */ 'L', 'H', 'A', 0,
  /* 2025 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 2036 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 2049 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 2062 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 2078 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 2092 */ 'S', 'L', 'B', 'I', 'A', 0,
  /* 2098 */ 'T', 'L', 'B', 'I', 'A', 0,
  /* 2104 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 0,
  /* 2114 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'I', 'A', 0,
  /* 2124 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 0,
  /* 2134 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 0,
  /* 2143 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 0,
  /* 2153 */ 'E', 'V', 'M', 'W', 'H', 'U', 'M', 'I', 'A', 0,
  /* 2163 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 0,
  /* 2173 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 0,
  /* 2183 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 0,
  /* 2192 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 'I', 'A', 0,
  /* 2203 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'I', 'A', 0,
  /* 2213 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 'I', 'A', 0,
  /* 2224 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 'I', 'A', 0,
  /* 2234 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 'I', 'A', 0,
  /* 2246 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 'I', 'A', 0,
  /* 2257 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 'I', 'A', 0,
  /* 2269 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 'I', 'A', 0,
  /* 2280 */ 'B', 'L', 'A', 0,
  /* 2284 */ 'g', 'B', 'C', 'L', 'A', 0,
  /* 2290 */ 'B', 'C', 'C', 'L', 'A', 0,
  /* 2296 */ 'B', 'D', 'Z', 'L', 'A', 0,
  /* 2302 */ 'B', 'D', 'N', 'Z', 'L', 'A', 0,
  /* 2309 */ 'E', 'V', 'M', 'R', 'A', 0,
  /* 2315 */ 'L', 'W', 'A', 0,
  /* 2319 */ 'M', 'T', 'V', 'S', 'R', 'W', 'A', 0,
  /* 2327 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'A', 'X', 'A', 0,
  /* 2337 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'X', 'A', 0,
  /* 2346 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 'A', 0,
  /* 2356 */ 'Q', 'V', 'L', 'F', 'D', 'X', 'A', 0,
  /* 2364 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'A', 0,
  /* 2373 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'X', 'A', 0,
  /* 2382 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 'A', 0,
  /* 2392 */ 'Q', 'V', 'L', 'F', 'S', 'X', 'A', 0,
  /* 2400 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 'A', 0,
  /* 2409 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'U', 'X', 'A', 0,
  /* 2419 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 'A', 0,
  /* 2430 */ 'Q', 'V', 'L', 'F', 'D', 'U', 'X', 'A', 0,
  /* 2439 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 'A', 0,
  /* 2449 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'U', 'X', 'A', 0,
  /* 2459 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 'A', 0,
  /* 2470 */ 'Q', 'V', 'L', 'F', 'S', 'U', 'X', 'A', 0,
  /* 2479 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 'A', 0,
  /* 2489 */ 'Q', 'V', 'S', 'T', 'F', 'I', 'W', 'X', 'A', 0,
  /* 2499 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'Z', 'X', 'A', 0,
  /* 2509 */ 'B', 'D', 'Z', 'A', 0,
  /* 2514 */ 'B', 'D', 'N', 'Z', 'A', 0,
  /* 2520 */ 'V', '_', 'S', 'E', 'T', '0', 'B', 0,
  /* 2528 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 2534 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 2541 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 2548 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 2554 */ 'V', 'R', 'L', 'B', 0,
  /* 2559 */ 'V', 'S', 'L', 'B', 0,
  /* 2564 */ 'V', 'P', 'M', 'S', 'U', 'M', 'B', 0,
  /* 2572 */ 'C', 'M', 'P', 'B', 0,
  /* 2577 */ 'V', 'S', 'R', 'B', 0,
  /* 2582 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 2590 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'B', 0,
  /* 2604 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 2611 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 2619 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 2628 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 2636 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 2643 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 2651 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 2660 */ 'E', 'V', 'E', 'X', 'T', 'S', 'B', 0,
  /* 2668 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 2675 */ 'M', 'F', 'T', 'B', 0,
  /* 2680 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 2687 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'B', 0,
  /* 2696 */ 'S', 'T', 'B', 0,
  /* 2700 */ 'R', 'e', 'a', 'd', 'T', 'B', 0,
  /* 2707 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 2715 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 2722 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 2729 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 2737 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 2746 */ 'Q', 'V', 'F', 'S', 'U', 'B', 0,
  /* 2753 */ 'Q', 'V', 'F', 'M', 'S', 'U', 'B', 0,
  /* 2761 */ 'Q', 'V', 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 2770 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 2779 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 2786 */ 'V', 'C', 'L', 'Z', 'B', 0,
  /* 2792 */ 'g', 'B', 'C', 0,
  /* 2796 */ 'B', 'C', 'C', 0,
  /* 2800 */ 'A', 'D', 'D', 'C', 0,
  /* 2805 */ 'X', 'X', 'L', 'A', 'N', 'D', 'C', 0,
  /* 2813 */ 'C', 'R', 'A', 'N', 'D', 'C', 0,
  /* 2820 */ 'E', 'V', 'A', 'N', 'D', 'C', 0,
  /* 2827 */ 'T', 'A', 'B', 'O', 'R', 'T', 'D', 'C', 0,
  /* 2836 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 2842 */ 'S', 'U', 'B', 'I', 'C', 0,
  /* 2848 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 2854 */ 'R', 'L', 'D', 'I', 'C', 0,
  /* 2860 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 2867 */ 'X', 'S', 'R', 'D', 'P', 'I', 'C', 0,
  /* 2875 */ 'X', 'V', 'R', 'D', 'P', 'I', 'C', 0,
  /* 2883 */ 'X', 'V', 'R', 'S', 'P', 'I', 'C', 0,
  /* 2891 */ 'B', 'R', 'I', 'N', 'C', 0,
  /* 2897 */ 'T', 'L', 'B', 'S', 'Y', 'N', 'C', 0,
  /* 2905 */ 'I', 'S', 'Y', 'N', 'C', 0,
  /* 2911 */ 'M', 'S', 'Y', 'N', 'C', 0,
  /* 2917 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 2926 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 2938 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'B', 'R', 'C', 0,
  /* 2953 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'Q', 'B', 'R', 'C', 0,
  /* 2965 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'R', 'C', 0,
  /* 2980 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'Q', 'F', 'R', 'C', 0,
  /* 2992 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'F', 'R', 'C', 0,
  /* 3008 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'F', 'R', 'C', 0,
  /* 3021 */ 'X', 'X', 'L', 'O', 'R', 'C', 0,
  /* 3028 */ 'C', 'R', 'O', 'R', 'C', 0,
  /* 3034 */ 'E', 'V', 'O', 'R', 'C', 0,
  /* 3040 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 3055 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'R', 'R', 'C', 0,
  /* 3067 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'S', 'R', 'C', 0,
  /* 3082 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'Q', 'S', 'R', 'C', 0,
  /* 3094 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'R', 'C', 0,
  /* 3109 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'R', 'C', 0,
  /* 3121 */ 'S', 'C', 0,
  /* 3124 */ 'T', 'A', 'B', 'O', 'R', 'T', 'W', 'C', 0,
  /* 3133 */ 'T', 'L', 'B', 'S', 'X', '2', 'D', 0,
  /* 3141 */ 'V', 'S', 'H', 'A', 'S', 'I', 'G', 'M', 'A', 'D', 0,
  /* 3152 */ 'V', 'S', 'R', 'A', 'D', 0,
  /* 3158 */ 'Q', 'V', 'F', 'A', 'D', 'D', 0,
  /* 3165 */ 'Q', 'V', 'F', 'M', 'A', 'D', 'D', 0,
  /* 3173 */ 'Q', 'V', 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 3182 */ 'Q', 'V', 'F', 'X', 'X', 'C', 'P', 'N', 'M', 'A', 'D', 'D', 0,
  /* 3195 */ 'Q', 'V', 'F', 'X', 'X', 'N', 'P', 'M', 'A', 'D', 'D', 0,
  /* 3207 */ 'Q', 'V', 'F', 'X', 'M', 'A', 'D', 'D', 0,
  /* 3216 */ 'Q', 'V', 'F', 'X', 'X', 'M', 'A', 'D', 'D', 0,
  /* 3226 */ 'E', 'V', 'L', 'D', 'D', 0,
  /* 3232 */ 'E', 'V', 'S', 'T', 'D', 'D', 0,
  /* 3239 */ 'L', 'F', 'D', 0,
  /* 3243 */ 'S', 'T', 'F', 'D', 0,
  /* 3248 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 3254 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 3260 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 0,
  /* 3268 */ 'R', 'F', 'I', 'D', 0,
  /* 3273 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 0,
  /* 3281 */ 'T', 'L', 'B', 'L', 'D', 0,
  /* 3287 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 3293 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 3299 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 3305 */ 'V', 'R', 'L', 'D', 0,
  /* 3310 */ 'V', 'S', 'L', 'D', 0,
  /* 3315 */ 'F', 'R', 'I', 'M', 'D', 0,
  /* 3321 */ 'B', 'P', 'E', 'R', 'M', 'D', 0,
  /* 3328 */ 'V', 'P', 'M', 'S', 'U', 'M', 'D', 0,
  /* 3336 */ 'X', 'X', 'L', 'A', 'N', 'D', 0,
  /* 3343 */ 'X', 'X', 'L', 'N', 'A', 'N', 'D', 0,
  /* 3351 */ 'C', 'R', 'N', 'A', 'N', 'D', 0,
  /* 3358 */ 'E', 'V', 'N', 'A', 'N', 'D', 0,
  /* 3365 */ 'C', 'R', 'A', 'N', 'D', 0,
  /* 3371 */ 'E', 'V', 'A', 'N', 'D', 0,
  /* 3377 */ 'T', 'E', 'N', 'D', 0,
  /* 3382 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 3395 */ 'F', 'C', 'P', 'S', 'G', 'N', 'D', 0,
  /* 3403 */ 'F', 'R', 'I', 'N', 'D', 0,
  /* 3409 */ 'F', 'R', 'I', 'P', 'D', 0,
  /* 3415 */ 'C', 'M', 'P', 'D', 0,
  /* 3420 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 3437 */ 'M', 'T', 'M', 'S', 'R', 'D', 0,
  /* 3444 */ 'M', 'F', 'V', 'S', 'R', 'D', 0,
  /* 3451 */ 'M', 'T', 'V', 'S', 'R', 'D', 0,
  /* 3458 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 3464 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 3471 */ 'V', 'M', 'I', 'N', 'S', 'D', 0,
  /* 3478 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'D', 0,
  /* 3487 */ 'V', 'M', 'A', 'X', 'S', 'D', 0,
  /* 3494 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'D', 0,
  /* 3503 */ 'S', 'T', 'D', 0,
  /* 3507 */ 'V', 'M', 'I', 'N', 'U', 'D', 0,
  /* 3514 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 3521 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'D', 0,
  /* 3530 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'D', 0,
  /* 3539 */ 'V', 'M', 'A', 'X', 'U', 'D', 0,
  /* 3546 */ 'D', 'I', 'V', 'D', 0,
  /* 3551 */ 'F', 'R', 'I', 'Z', 'D', 0,
  /* 3557 */ 'V', 'C', 'L', 'Z', 'D', 0,
  /* 3563 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 3570 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 3583 */ 'A', 'D', 'D', 'E', 0,
  /* 3588 */ 'D', 'I', 'V', 'D', 'E', 0,
  /* 3594 */ 'S', 'L', 'B', 'M', 'F', 'E', 'E', 0,
  /* 3602 */ 'W', 'R', 'T', 'E', 'E', 0,
  /* 3608 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 3614 */ 'E', 'V', 'L', 'W', 'H', 'E', 0,
  /* 3621 */ 'E', 'V', 'S', 'T', 'W', 'H', 'E', 0,
  /* 3629 */ 'S', 'L', 'B', 'I', 'E', 0,
  /* 3635 */ 'T', 'L', 'B', 'I', 'E', 0,
  /* 3641 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 3648 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 3654 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 3661 */ 'T', 'L', 'B', 'R', 'E', 0,
  /* 3667 */ 'Q', 'V', 'F', 'R', 'E', 0,
  /* 3673 */ 'S', 'L', 'B', 'M', 'T', 'E', 0,
  /* 3680 */ 'Q', 'V', 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 0,
  /* 3690 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 3700 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3709 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3718 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3733 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3747 */ 'S', 'P', 'I', 'L', 'L', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3760 */ 'T', 'L', 'B', 'W', 'E', 0,
  /* 3766 */ 'D', 'I', 'V', 'W', 'E', 0,
  /* 3772 */ 'E', 'V', 'S', 'T', 'W', 'W', 'E', 0,
  /* 3780 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 3786 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 3793 */ 'D', 'C', 'B', 'F', 0,
  /* 3798 */ 'S', 'U', 'B', 'F', 0,
  /* 3803 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 3816 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 0,
  /* 3825 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'F', 0,
  /* 3834 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 0,
  /* 3843 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 0,
  /* 3851 */ 'M', 'C', 'R', 'F', 0,
  /* 3856 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 3863 */ 'M', 'T', 'O', 'C', 'R', 'F', 0,
  /* 3870 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 3876 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 3882 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 0,
  /* 3891 */ 'E', 'V', 'M', 'W', 'H', 'S', 'S', 'F', 0,
  /* 3900 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 0,
  /* 3909 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 0,
  /* 3917 */ 'Q', 'V', 'F', 'N', 'E', 'G', 0,
  /* 3924 */ 'E', 'V', 'N', 'E', 'G', 0,
  /* 3930 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 3945 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 3959 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 3973 */ 'V', '_', 'S', 'E', 'T', '0', 'H', 0,
  /* 3981 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 3987 */ 'E', 'V', 'L', 'D', 'H', 0,
  /* 3993 */ 'E', 'V', 'S', 'T', 'D', 'H', 0,
  /* 4000 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 4007 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 4014 */ 'V', 'R', 'L', 'H', 0,
  /* 4019 */ 'V', 'S', 'L', 'H', 0,
  /* 4024 */ 'V', 'P', 'M', 'S', 'U', 'M', 'H', 0,
  /* 4032 */ 'V', 'S', 'R', 'H', 0,
  /* 4037 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 4045 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'H', 0,
  /* 4059 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 4066 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 4074 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 4083 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 4091 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 4098 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 4106 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 4115 */ 'E', 'V', 'E', 'X', 'T', 'S', 'H', 0,
  /* 4123 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 4130 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 4137 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'H', 0,
  /* 4146 */ 'S', 'T', 'H', 0,
  /* 4150 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 4158 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 4165 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 4172 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 4180 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 4189 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 4198 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 4205 */ 'V', 'C', 'L', 'Z', 'H', 0,
  /* 4211 */ 'D', 'C', 'B', 'I', 0,
  /* 4216 */ 'I', 'C', 'B', 'I', 0,
  /* 4221 */ 'S', 'U', 'B', 'I', 0,
  /* 4226 */ 'D', 'C', 'C', 'C', 'I', 0,
  /* 4232 */ 'I', 'C', 'C', 'C', 'I', 0,
  /* 4238 */ 'T', 'A', 'B', 'O', 'R', 'T', 'D', 'C', 'I', 0,
  /* 4248 */ 'R', 'F', 'C', 'I', 0,
  /* 4253 */ 'R', 'F', 'M', 'C', 'I', 0,
  /* 4259 */ 'Q', 'V', 'G', 'P', 'C', 'I', 0,
  /* 4266 */ 'T', 'A', 'B', 'O', 'R', 'T', 'W', 'C', 'I', 0,
  /* 4276 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 4282 */ 'A', 'D', 'D', 'I', 0,
  /* 4287 */ 'R', 'F', 'D', 'I', 0,
  /* 4292 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 4299 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 0,
  /* 4308 */ 'E', 'X', 'T', 'L', 'D', 'I', 0,
  /* 4315 */ 'X', 'X', 'P', 'E', 'R', 'M', 'D', 'I', 0,
  /* 4324 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 4330 */ 'C', 'L', 'R', 'R', 'D', 'I', 0,
  /* 4337 */ 'I', 'N', 'S', 'R', 'D', 'I', 0,
  /* 4344 */ 'R', 'O', 'T', 'R', 'D', 'I', 0,
  /* 4351 */ 'E', 'X', 'T', 'R', 'D', 'I', 0,
  /* 4358 */ 'T', 'D', 'I', 0,
  /* 4362 */ 'W', 'R', 'T', 'E', 'E', 'I', 0,
  /* 4369 */ 'R', 'F', 'I', 0,
  /* 4373 */ 'M', 'T', 'F', 'S', 'F', 'I', 0,
  /* 4380 */ 'E', 'V', 'S', 'P', 'L', 'A', 'T', 'F', 'I', 0,
  /* 4390 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'H', 'I', 0,
  /* 4400 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'L', 'O', 'H', 'I', 0,
  /* 4412 */ 'P', 'H', 'I', 0,
  /* 4416 */ 'T', 'L', 'B', 'L', 'I', 0,
  /* 4422 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 4428 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 4435 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 4442 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 0,
  /* 4451 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'I', 0,
  /* 4460 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 0,
  /* 4469 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 0,
  /* 4477 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 0,
  /* 4486 */ 'E', 'V', 'M', 'W', 'H', 'U', 'M', 'I', 0,
  /* 4495 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 0,
  /* 4504 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 0,
  /* 4513 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 0,
  /* 4521 */ 'Q', 'V', 'A', 'L', 'I', 'G', 'N', 'I', 0,
  /* 4530 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 4537 */ 'X', 'S', 'R', 'D', 'P', 'I', 0,
  /* 4544 */ 'X', 'V', 'R', 'D', 'P', 'I', 0,
  /* 4551 */ 'X', 'V', 'R', 'S', 'P', 'I', 0,
  /* 4558 */ 'X', 'O', 'R', 'I', 0,
  /* 4563 */ 'Q', 'V', 'E', 'S', 'P', 'L', 'A', 'T', 'I', 0,
  /* 4573 */ 'E', 'V', 'S', 'P', 'L', 'A', 'T', 'I', 0,
  /* 4582 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 4591 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 4597 */ 'X', 'X', 'S', 'L', 'D', 'W', 'I', 0,
  /* 4605 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 4612 */ 'E', 'V', 'R', 'L', 'W', 'I', 0,
  /* 4619 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 0,
  /* 4628 */ 'I', 'N', 'S', 'L', 'W', 'I', 0,
  /* 4635 */ 'E', 'V', 'S', 'L', 'W', 'I', 0,
  /* 4642 */ 'E', 'X', 'T', 'L', 'W', 'I', 0,
  /* 4649 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 4655 */ 'C', 'L', 'R', 'R', 'W', 'I', 0,
  /* 4662 */ 'I', 'N', 'S', 'R', 'W', 'I', 0,
  /* 4669 */ 'R', 'O', 'T', 'R', 'W', 'I', 0,
  /* 4676 */ 'E', 'X', 'T', 'R', 'W', 'I', 0,
  /* 4683 */ 'L', 'S', 'W', 'I', 0,
  /* 4688 */ 'S', 'T', 'S', 'W', 'I', 0,
  /* 4694 */ 'T', 'W', 'I', 0,
  /* 4698 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 'I', 0,
  /* 4708 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'I', 0,
  /* 4717 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 'I', 0,
  /* 4727 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 'I', 0,
  /* 4736 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 'I', 0,
  /* 4747 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 'I', 0,
  /* 4757 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 'I', 0,
  /* 4768 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 'I', 0,
  /* 4778 */ 'T', 'C', 'H', 'E', 'C', 'K', 0,
  /* 4785 */ 'Q', 'V', 'F', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 0,
  /* 4796 */ 'B', 'L', 0,
  /* 4799 */ 'g', 'B', 'C', 'L', 0,
  /* 4804 */ 'B', 'C', 'C', 'L', 0,
  /* 4809 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 4815 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 4822 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4831 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4840 */ 'T', 'L', 'B', 'I', 'E', 'L', 0,
  /* 4847 */ 'Q', 'V', 'F', 'S', 'E', 'L', 0,
  /* 4854 */ 'I', 'S', 'E', 'L', 0,
  /* 4859 */ 'V', 'S', 'E', 'L', 0,
  /* 4864 */ 'X', 'X', 'S', 'E', 'L', 0,
  /* 4870 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 4877 */ 'K', 'I', 'L', 'L', 0,
  /* 4882 */ 'B', 'L', 'R', 'L', 0,
  /* 4887 */ 'g', 'B', 'C', 'L', 'R', 'L', 0,
  /* 4894 */ 'B', 'C', 'C', 'L', 'R', 'L', 0,
  /* 4901 */ 'B', 'D', 'Z', 'L', 'R', 'L', 0,
  /* 4908 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 0,
  /* 4916 */ 'B', 'C', 'T', 'R', 'L', 0,
  /* 4922 */ 'g', 'B', 'C', 'C', 'T', 'R', 'L', 0,
  /* 4930 */ 'B', 'C', 'C', 'C', 'T', 'R', 'L', 0,
  /* 4938 */ 'L', 'V', 'S', 'L', 0,
  /* 4943 */ 'Q', 'V', 'F', 'M', 'U', 'L', 0,
  /* 4950 */ 'Q', 'V', 'F', 'X', 'M', 'U', 'L', 0,
  /* 4958 */ 'L', 'B', 'A', 'R', 'X', 'L', 0,
  /* 4965 */ 'L', 'D', 'A', 'R', 'X', 'L', 0,
  /* 4972 */ 'L', 'H', 'A', 'R', 'X', 'L', 0,
  /* 4979 */ 'L', 'W', 'A', 'R', 'X', 'L', 0,
  /* 4986 */ 'L', 'V', 'X', 'L', 0,
  /* 4991 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 4997 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 5003 */ 'B', 'D', 'Z', 'L', 0,
  /* 5008 */ 'B', 'D', 'N', 'Z', 'L', 0,
  /* 5014 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 5021 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 5030 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 5041 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 5052 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 5064 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 5076 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 5085 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 5093 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 5101 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 5110 */ 'V', 'S', 'U', 'B', 'U', 'D', 'M', 0,
  /* 5118 */ 'V', 'A', 'D', 'D', 'U', 'D', 'M', 0,
  /* 5126 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 5135 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 5143 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 5153 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 5161 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 5170 */ 'T', 'R', 'E', 'C', 'L', 'A', 'I', 'M', 0,
  /* 5179 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 5185 */ 'X', 'S', 'R', 'D', 'P', 'I', 'M', 0,
  /* 5193 */ 'X', 'V', 'R', 'D', 'P', 'I', 'M', 0,
  /* 5201 */ 'X', 'V', 'R', 'S', 'P', 'I', 'M', 0,
  /* 5209 */ 'Q', 'V', 'F', 'R', 'I', 'M', 0,
  /* 5216 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 5223 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 5229 */ 'Q', 'V', 'F', 'P', 'E', 'R', 'M', 0,
  /* 5237 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 5243 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 5253 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 5261 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 5269 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 5277 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 5285 */ 'V', 'M', 'U', 'L', 'U', 'W', 'M', 0,
  /* 5293 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'F', 'A', 'N', 0,
  /* 5305 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'F', 'A', 'N', 0,
  /* 5317 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 'N', 0,
  /* 5327 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 'N', 0,
  /* 5337 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'I', 'A', 'N', 0,
  /* 5349 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'I', 'A', 'N', 0,
  /* 5361 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 'N', 0,
  /* 5371 */ 'E', 'V', 'M', 'H', 'E', 'G', 'U', 'M', 'I', 'A', 'N', 0,
  /* 5383 */ 'E', 'V', 'M', 'H', 'O', 'G', 'U', 'M', 'I', 'A', 'N', 0,
  /* 5395 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 'N', 0,
  /* 5405 */ 'Q', 'V', 'F', 'T', 'S', 'T', 'N', 'A', 'N', 0,
  /* 5415 */ 'Q', 'V', 'F', 'C', 'P', 'S', 'G', 'N', 0,
  /* 5424 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 5430 */ 'T', 'B', 'E', 'G', 'I', 'N', 0,
  /* 5437 */ 'Q', 'V', 'F', 'R', 'I', 'N', 0,
  /* 5444 */ 'M', 'F', 'S', 'R', 'I', 'N', 0,
  /* 5451 */ 'M', 'T', 'S', 'R', 'I', 'N', 0,
  /* 5458 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 5474 */ 'A', 'T', 'T', 'N', 0,
  /* 5479 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 5496 */ 'E', 'V', 'S', 'T', 'W', 'H', 'O', 0,
  /* 5504 */ 'E', 'n', 'f', 'o', 'r', 'c', 'e', 'I', 'E', 'I', 'O', 0,
  /* 5516 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'L', 'O', 0,
  /* 5526 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'H', 'I', 'L', 'O', 0,
  /* 5538 */ 'V', 'S', 'L', 'O', 0,
  /* 5543 */ 'V', 'S', 'R', 'O', 0,
  /* 5548 */ 'E', 'V', 'S', 'T', 'W', 'W', 'O', 0,
  /* 5556 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 5565 */ 'T', 'R', 'A', 'P', 0,
  /* 5570 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5581 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5592 */ 'X', 'S', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5602 */ 'X', 'V', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5612 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5623 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5634 */ 'X', 'S', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5644 */ 'X', 'V', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5654 */ 'X', 'S', 'S', 'U', 'B', 'D', 'P', 0,
  /* 5662 */ 'X', 'V', 'S', 'U', 'B', 'D', 'P', 0,
  /* 5670 */ 'X', 'S', 'A', 'D', 'D', 'D', 'P', 0,
  /* 5678 */ 'X', 'V', 'A', 'D', 'D', 'D', 'P', 0,
  /* 5686 */ 'X', 'S', 'C', 'V', 'S', 'X', 'D', 'D', 'P', 0,
  /* 5696 */ 'X', 'V', 'C', 'V', 'S', 'X', 'D', 'D', 'P', 0,
  /* 5706 */ 'X', 'S', 'C', 'V', 'U', 'X', 'D', 'D', 'P', 0,
  /* 5716 */ 'X', 'V', 'C', 'V', 'U', 'X', 'D', 'D', 'P', 0,
  /* 5726 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'D', 'P', 0,
  /* 5736 */ 'X', 'S', 'R', 'E', 'D', 'P', 0,
  /* 5743 */ 'X', 'V', 'R', 'E', 'D', 'P', 0,
  /* 5750 */ 'X', 'S', 'R', 'S', 'Q', 'R', 'T', 'E', 'D', 'P', 0,
  /* 5761 */ 'X', 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'D', 'P', 0,
  /* 5772 */ 'X', 'S', 'N', 'E', 'G', 'D', 'P', 0,
  /* 5780 */ 'X', 'V', 'N', 'E', 'G', 'D', 'P', 0,
  /* 5788 */ 'X', 'S', 'M', 'U', 'L', 'D', 'P', 0,
  /* 5796 */ 'X', 'V', 'M', 'U', 'L', 'D', 'P', 0,
  /* 5804 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5815 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5826 */ 'X', 'S', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5836 */ 'X', 'V', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5846 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5857 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5868 */ 'X', 'S', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5878 */ 'X', 'V', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5888 */ 'X', 'S', 'C', 'P', 'S', 'G', 'N', 'D', 'P', 0,
  /* 5898 */ 'X', 'V', 'C', 'P', 'S', 'G', 'N', 'D', 'P', 0,
  /* 5908 */ 'X', 'S', 'M', 'I', 'N', 'D', 'P', 0,
  /* 5916 */ 'X', 'V', 'M', 'I', 'N', 'D', 'P', 0,
  /* 5924 */ 'X', 'S', 'C', 'M', 'P', 'O', 'D', 'P', 0,
  /* 5933 */ 'X', 'S', 'C', 'V', 'S', 'P', 'D', 'P', 0,
  /* 5942 */ 'X', 'V', 'C', 'V', 'S', 'P', 'D', 'P', 0,
  /* 5951 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'D', 'P', 0,
  /* 5961 */ 'X', 'S', 'N', 'A', 'B', 'S', 'D', 'P', 0,
  /* 5970 */ 'X', 'V', 'N', 'A', 'B', 'S', 'D', 'P', 0,
  /* 5979 */ 'X', 'S', 'A', 'B', 'S', 'D', 'P', 0,
  /* 5987 */ 'X', 'V', 'A', 'B', 'S', 'D', 'P', 0,
  /* 5995 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'D', 'P', 0,
  /* 6005 */ 'X', 'S', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6014 */ 'X', 'S', 'T', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6024 */ 'X', 'V', 'T', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6034 */ 'X', 'V', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6043 */ 'X', 'S', 'C', 'M', 'P', 'U', 'D', 'P', 0,
  /* 6052 */ 'X', 'S', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6060 */ 'X', 'S', 'T', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6069 */ 'X', 'V', 'T', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6078 */ 'X', 'V', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6086 */ 'X', 'V', 'C', 'V', 'S', 'X', 'W', 'D', 'P', 0,
  /* 6096 */ 'X', 'V', 'C', 'V', 'U', 'X', 'W', 'D', 'P', 0,
  /* 6106 */ 'X', 'S', 'M', 'A', 'X', 'D', 'P', 0,
  /* 6114 */ 'X', 'V', 'M', 'A', 'X', 'D', 'P', 0,
  /* 6122 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 6130 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 6139 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 6146 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 6154 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 6161 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 6169 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 6178 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 6184 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 6193 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 6203 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 6210 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 6219 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 6228 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 6235 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 6241 */ 'X', 'S', 'R', 'D', 'P', 'I', 'P', 0,
  /* 6249 */ 'X', 'V', 'R', 'D', 'P', 'I', 'P', 0,
  /* 6257 */ 'X', 'V', 'R', 'S', 'P', 'I', 'P', 0,
  /* 6265 */ 'Q', 'V', 'F', 'R', 'I', 'P', 0,
  /* 6272 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', 0,
  /* 6281 */ 'B', 'L', '8', '_', 'N', 'O', 'P', 0,
  /* 6289 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 6300 */ 'X', 'V', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 6310 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 6321 */ 'X', 'V', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 6331 */ 'X', 'V', 'S', 'U', 'B', 'S', 'P', 0,
  /* 6339 */ 'X', 'V', 'A', 'D', 'D', 'S', 'P', 0,
  /* 6347 */ 'X', 'V', 'C', 'V', 'S', 'X', 'D', 'S', 'P', 0,
  /* 6357 */ 'X', 'V', 'C', 'V', 'U', 'X', 'D', 'S', 'P', 0,
  /* 6367 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'S', 'P', 0,
  /* 6377 */ 'X', 'V', 'R', 'E', 'S', 'P', 0,
  /* 6384 */ 'X', 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'P', 0,
  /* 6395 */ 'X', 'V', 'N', 'E', 'G', 'S', 'P', 0,
  /* 6403 */ 'X', 'V', 'M', 'U', 'L', 'S', 'P', 0,
  /* 6411 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 6422 */ 'X', 'V', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 6432 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 6443 */ 'X', 'V', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 6453 */ 'X', 'V', 'C', 'P', 'S', 'G', 'N', 'S', 'P', 0,
  /* 6463 */ 'X', 'V', 'M', 'I', 'N', 'S', 'P', 0,
  /* 6471 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'P', 0,
  /* 6480 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'P', 0,
  /* 6489 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'S', 'P', 0,
  /* 6499 */ 'Q', 'V', 'F', 'R', 'S', 'P', 0,
  /* 6506 */ 'X', 'V', 'N', 'A', 'B', 'S', 'S', 'P', 0,
  /* 6515 */ 'X', 'V', 'A', 'B', 'S', 'S', 'P', 0,
  /* 6523 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'P', 0,
  /* 6533 */ 'X', 'V', 'T', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 6543 */ 'X', 'V', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 6552 */ 'X', 'V', 'T', 'D', 'I', 'V', 'S', 'P', 0,
  /* 6561 */ 'X', 'V', 'D', 'I', 'V', 'S', 'P', 0,
  /* 6569 */ 'X', 'V', 'C', 'V', 'S', 'X', 'W', 'S', 'P', 0,
  /* 6579 */ 'X', 'V', 'C', 'V', 'U', 'X', 'W', 'S', 'P', 0,
  /* 6589 */ 'X', 'V', 'M', 'A', 'X', 'S', 'P', 0,
  /* 6597 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 6612 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 6621 */ 'E', 'V', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 6629 */ 'M', 'B', 'A', 'R', 0,
  /* 6634 */ 'U', 'p', 'd', 'a', 't', 'e', 'G', 'B', 'R', 0,
  /* 6644 */ 'M', 'F', 'D', 'C', 'R', 0,
  /* 6650 */ 'R', 'L', 'D', 'C', 'R', 0,
  /* 6656 */ 'M', 'T', 'D', 'C', 'R', 0,
  /* 6662 */ 'M', 'F', 'C', 'R', 0,
  /* 6667 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 6674 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 6681 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 6688 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 6699 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 6708 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 'A', 'D', 'D', 'R', 0,
  /* 6723 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 'A', 'D', 'D', 'R', 0,
  /* 6738 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 6751 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 6762 */ 'V', 'N', 'C', 'I', 'P', 'H', 'E', 'R', 0,
  /* 6771 */ 'V', 'C', 'I', 'P', 'H', 'E', 'R', 0,
  /* 6779 */ 'B', 'L', 'R', 0,
  /* 6783 */ 'g', 'B', 'C', 'L', 'R', 0,
  /* 6789 */ 'B', 'C', 'C', 'L', 'R', 0,
  /* 6795 */ 'M', 'F', 'L', 'R', 0,
  /* 6800 */ 'M', 'T', 'L', 'R', 0,
  /* 6805 */ 'B', 'D', 'Z', 'L', 'R', 0,
  /* 6811 */ 'B', 'D', 'N', 'Z', 'L', 'R', 0,
  /* 6818 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 6829 */ 'M', 'o', 'v', 'e', 'G', 'O', 'T', 't', 'o', 'L', 'R', 0,
  /* 6841 */ 'Q', 'V', 'F', 'M', 'R', 0,
  /* 6847 */ 'X', 'X', 'L', 'O', 'R', 0,
  /* 6853 */ 'X', 'X', 'L', 'N', 'O', 'R', 0,
  /* 6860 */ 'C', 'R', 'N', 'O', 'R', 0,
  /* 6866 */ 'E', 'V', 'N', 'O', 'R', 0,
  /* 6872 */ 'C', 'R', 'O', 'R', 0,
  /* 6877 */ 'E', 'V', 'O', 'R', 0,
  /* 6882 */ 'X', 'X', 'L', 'X', 'O', 'R', 0,
  /* 6889 */ 'V', 'P', 'E', 'R', 'M', 'X', 'O', 'R', 0,
  /* 6898 */ 'C', 'R', 'X', 'O', 'R', 0,
  /* 6904 */ 'E', 'V', 'X', 'O', 'R', 0,
  /* 6910 */ 'M', 'F', 'S', 'P', 'R', 0,
  /* 6916 */ 'M', 'T', 'S', 'P', 'R', 0,
  /* 6922 */ 'M', 'F', 'S', 'R', 0,
  /* 6927 */ 'M', 'F', 'M', 'S', 'R', 0,
  /* 6933 */ 'M', 'T', 'M', 'S', 'R', 0,
  /* 6939 */ 'M', 'T', 'S', 'R', 0,
  /* 6944 */ 'L', 'V', 'S', 'R', 0,
  /* 6949 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 6958 */ 'g', 'B', 'C', 'C', 'T', 'R', 0,
  /* 6965 */ 'B', 'C', 'C', 'C', 'T', 'R', 0,
  /* 6972 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 6978 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 6984 */ 'Q', 'V', 'F', 'A', 'B', 'S', 0,
  /* 6991 */ 'Q', 'V', 'F', 'N', 'A', 'B', 'S', 0,
  /* 6999 */ 'E', 'V', 'A', 'B', 'S', 0,
  /* 7005 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 7014 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 7022 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 7030 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 7039 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 7047 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 7055 */ 'Q', 'V', 'F', 'S', 'U', 'B', 'S', 0,
  /* 7063 */ 'Q', 'V', 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 7072 */ 'Q', 'V', 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 7082 */ 'Q', 'V', 'F', 'A', 'D', 'D', 'S', 0,
  /* 7090 */ 'Q', 'V', 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7099 */ 'Q', 'V', 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7109 */ 'Q', 'V', 'F', 'X', 'X', 'C', 'P', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7123 */ 'Q', 'V', 'F', 'X', 'X', 'N', 'P', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7136 */ 'Q', 'V', 'F', 'X', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7146 */ 'Q', 'V', 'F', 'X', 'X', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7157 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'S', 0,
  /* 7166 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'X', 'D', 'S', 0,
  /* 7177 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'X', 'D', 'S', 0,
  /* 7188 */ 'X', 'V', 'C', 'V', 'S', 'P', 'S', 'X', 'D', 'S', 0,
  /* 7199 */ 'X', 'S', 'C', 'V', 'D', 'P', 'U', 'X', 'D', 'S', 0,
  /* 7210 */ 'X', 'V', 'C', 'V', 'D', 'P', 'U', 'X', 'D', 'S', 0,
  /* 7221 */ 'X', 'V', 'C', 'V', 'S', 'P', 'U', 'X', 'D', 'S', 0,
  /* 7232 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 7245 */ 'Q', 'V', 'F', 'R', 'E', 'S', 0,
  /* 7252 */ 'Q', 'V', 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 0,
  /* 7263 */ 'M', 'F', 'F', 'S', 0,
  /* 7268 */ 'L', 'F', 'S', 0,
  /* 7272 */ 'M', 'C', 'R', 'F', 'S', 0,
  /* 7278 */ 'S', 'T', 'F', 'S', 0,
  /* 7283 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 7289 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 7298 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 7306 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 7316 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 7327 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 7335 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 7344 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 7352 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 7360 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 7369 */ 'S', 'U', 'B', 'I', 'S', 0,
  /* 7375 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 7381 */ 'L', 'I', 'S', 0,
  /* 7385 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 7391 */ 'E', 'V', 'S', 'R', 'W', 'I', 'S', 0,
  /* 7399 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 7405 */ 'A', 'D', 'D', '4', 'T', 'L', 'S', 0,
  /* 7413 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 7421 */ 'B', 'L', '8', '_', 'T', 'L', 'S', 0,
  /* 7429 */ 'B', 'L', '_', 'T', 'L', 'S', 0,
  /* 7436 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 0,
  /* 7448 */ 'Q', 'V', 'F', 'M', 'U', 'L', 'S', 0,
  /* 7456 */ 'Q', 'V', 'F', 'X', 'M', 'U', 'L', 'S', 0,
  /* 7465 */ 'F', 'R', 'I', 'M', 'S', 0,
  /* 7471 */ 'F', 'C', 'P', 'S', 'G', 'N', 'S', 0,
  /* 7479 */ 'F', 'R', 'I', 'N', 'S', 0,
  /* 7485 */ 'E', 'V', 'L', 'W', 'H', 'O', 'S', 0,
  /* 7493 */ 'F', 'R', 'I', 'P', 'S', 0,
  /* 7499 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 7516 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 7522 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 7529 */ 'D', 'S', 'S', 0,
  /* 7533 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 7541 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 7549 */ 'E', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 0,
  /* 7558 */ 'E', 'V', 'C', 'M', 'P', 'L', 'T', 'S', 0,
  /* 7567 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 7574 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'U', 'S', 0,
  /* 7584 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 7592 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 7600 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 7607 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 7615 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 7623 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 7629 */ 'E', 'V', 'S', 'R', 'W', 'S', 0,
  /* 7636 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 7645 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 7653 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 7661 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 7669 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 7677 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 7685 */ 'E', 'V', 'D', 'I', 'V', 'W', 'S', 0,
  /* 7693 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'X', 'W', 'S', 0,
  /* 7704 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'X', 'W', 'S', 0,
  /* 7715 */ 'X', 'V', 'C', 'V', 'S', 'P', 'S', 'X', 'W', 'S', 0,
  /* 7726 */ 'X', 'S', 'C', 'V', 'D', 'P', 'U', 'X', 'W', 'S', 0,
  /* 7737 */ 'X', 'V', 'C', 'V', 'D', 'P', 'U', 'X', 'W', 'S', 0,
  /* 7748 */ 'X', 'V', 'C', 'V', 'S', 'P', 'U', 'X', 'W', 'S', 0,
  /* 7759 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 7766 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 7773 */ 'F', 'R', 'I', 'Z', 'S', 0,
  /* 7779 */ 'E', 'V', 'L', 'H', 'H', 'E', 'S', 'P', 'L', 'A', 'T', 0,
  /* 7791 */ 'E', 'V', 'L', 'W', 'H', 'S', 'P', 'L', 'A', 'T', 0,
  /* 7802 */ 'E', 'V', 'L', 'H', 'H', 'O', 'S', 'S', 'P', 'L', 'A', 'T', 0,
  /* 7815 */ 'E', 'V', 'L', 'H', 'H', 'O', 'U', 'S', 'P', 'L', 'A', 'T', 0,
  /* 7828 */ 'E', 'V', 'L', 'W', 'W', 'S', 'P', 'L', 'A', 'T', 0,
  /* 7839 */ 'D', 'C', 'B', 'T', 0,
  /* 7844 */ 'I', 'C', 'B', 'T', 0,
  /* 7849 */ 'T', 'C', 'H', 'E', 'C', 'K', '_', 'R', 'E', 'T', 0,
  /* 7860 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 7867 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 7876 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 7884 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 7890 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'G', 'T', 0,
  /* 7899 */ 'W', 'A', 'I', 'T', 0,
  /* 7904 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 'B', 'I', 'T', 0,
  /* 7918 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 'B', 'I', 'T', 0,
  /* 7930 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'E', 'Q', '_', 'B', 'I', 'T', 0,
  /* 7945 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'G', 'T', '_', 'B', 'I', 'T', 0,
  /* 7960 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'L', 'T', 0,
  /* 7969 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 7980 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 7991 */ 'P', 'P', 'C', '3', '2', 'G', 'O', 'T', 0,
  /* 8000 */ 'P', 'P', 'C', '3', '2', 'P', 'I', 'C', 'G', 'O', 'T', 0,
  /* 8012 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 8021 */ 'T', 'R', 'E', 'C', 'H', 'K', 'P', 'T', 0,
  /* 8030 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 8045 */ 'T', 'A', 'B', 'O', 'R', 'T', 0,
  /* 8052 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 8058 */ 'V', 'N', 'C', 'I', 'P', 'H', 'E', 'R', 'L', 'A', 'S', 'T', 0,
  /* 8071 */ 'V', 'C', 'I', 'P', 'H', 'E', 'R', 'L', 'A', 'S', 'T', 0,
  /* 8083 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 8089 */ 'D', 'S', 'T', 0,
  /* 8093 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 8100 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 8106 */ 'D', 'S', 'T', 'T', 0,
  /* 8111 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 8118 */ 'L', 'H', 'A', 'U', 0,
  /* 8123 */ 'S', 'T', 'B', 'U', 0,
  /* 8128 */ 'L', 'F', 'D', 'U', 0,
  /* 8133 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 8139 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 8146 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'U', 0,
  /* 8155 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'U', 0,
  /* 8164 */ 'L', 'D', 'U', 0,
  /* 8168 */ 'S', 'T', 'D', 'U', 0,
  /* 8173 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 8179 */ 'D', 'I', 'V', 'D', 'E', 'U', 0,
  /* 8186 */ 'D', 'I', 'V', 'W', 'E', 'U', 0,
  /* 8193 */ 'S', 'T', 'H', 'U', 0,
  /* 8198 */ 'E', 'V', 'S', 'R', 'W', 'I', 'U', 0,
  /* 8206 */ 'E', 'V', 'L', 'W', 'H', 'O', 'U', 0,
  /* 8214 */ 'L', 'F', 'S', 'U', 0,
  /* 8219 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 8225 */ 'E', 'V', 'C', 'M', 'P', 'G', 'T', 'U', 0,
  /* 8234 */ 'E', 'V', 'C', 'M', 'P', 'L', 'T', 'U', 0,
  /* 8243 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 8250 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 'U', 0,
  /* 8259 */ 'E', 'V', 'S', 'R', 'W', 'U', 0,
  /* 8266 */ 'S', 'T', 'W', 'U', 0,
  /* 8271 */ 'E', 'V', 'D', 'I', 'V', 'W', 'U', 0,
  /* 8279 */ 'L', 'B', 'Z', 'U', 0,
  /* 8284 */ 'L', 'H', 'Z', 'U', 0,
  /* 8289 */ 'L', 'W', 'Z', 'U', 0,
  /* 8294 */ 'F', 'D', 'I', 'V', 0,
  /* 8299 */ 'X', 'X', 'L', 'E', 'Q', 'V', 0,
  /* 8306 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 8312 */ 'E', 'V', 'E', 'Q', 'V', 0,
  /* 8318 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 'A', 'W', 0,
  /* 8330 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 'A', 'W', 0,
  /* 8342 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 'A', 'W', 0,
  /* 8354 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 'A', 'W', 0,
  /* 8366 */ 'E', 'V', 'A', 'D', 'D', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8378 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8390 */ 'E', 'V', 'S', 'U', 'B', 'F', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8403 */ 'E', 'V', 'M', 'W', 'L', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8415 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8427 */ 'E', 'V', 'A', 'D', 'D', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8439 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8451 */ 'E', 'V', 'S', 'U', 'B', 'F', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8464 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8476 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8488 */ 'E', 'V', 'A', 'D', 'D', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8500 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8512 */ 'E', 'V', 'S', 'U', 'B', 'F', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8525 */ 'E', 'V', 'M', 'W', 'L', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8537 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8549 */ 'E', 'V', 'A', 'D', 'D', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8561 */ 'E', 'V', 'M', 'H', 'E', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8573 */ 'E', 'V', 'S', 'U', 'B', 'F', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8586 */ 'E', 'V', 'M', 'W', 'L', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8598 */ 'E', 'V', 'M', 'H', 'O', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8610 */ 'V', 'S', 'H', 'A', 'S', 'I', 'G', 'M', 'A', 'W', 0,
  /* 8621 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 8627 */ 'E', 'V', 'A', 'D', 'D', 'W', 0,
  /* 8634 */ 'E', 'V', 'L', 'D', 'W', 0,
  /* 8640 */ 'E', 'V', 'R', 'N', 'D', 'W', 0,
  /* 8647 */ 'E', 'V', 'S', 'T', 'D', 'W', 0,
  /* 8654 */ 'E', 'V', 'S', 'U', 'B', 'F', 'W', 0,
  /* 8662 */ 'E', 'V', 'S', 'U', 'B', 'I', 'F', 'W', 0,
  /* 8671 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 8678 */ 'X', 'X', 'M', 'R', 'G', 'H', 'W', 0,
  /* 8686 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 8692 */ 'E', 'V', 'A', 'D', 'D', 'I', 'W', 0,
  /* 8700 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 0,
  /* 8708 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 8715 */ 'X', 'X', 'M', 'R', 'G', 'L', 'W', 0,
  /* 8723 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 8729 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 8735 */ 'E', 'V', 'R', 'L', 'W', 0,
  /* 8741 */ 'E', 'V', 'S', 'L', 'W', 0,
  /* 8747 */ 'L', 'M', 'W', 0,
  /* 8751 */ 'S', 'T', 'M', 'W', 0,
  /* 8756 */ 'V', 'P', 'M', 'S', 'U', 'M', 'W', 0,
  /* 8764 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 'N', 'W', 0,
  /* 8776 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 'N', 'W', 0,
  /* 8788 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 'N', 'W', 0,
  /* 8800 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 'N', 'W', 0,
  /* 8812 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 8824 */ 'E', 'V', 'M', 'W', 'L', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 8836 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 8848 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 8860 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 8872 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 8884 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 8896 */ 'E', 'V', 'M', 'W', 'L', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 8908 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 8920 */ 'E', 'V', 'M', 'H', 'E', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 8932 */ 'E', 'V', 'M', 'W', 'L', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 8944 */ 'E', 'V', 'M', 'H', 'O', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 8956 */ 'C', 'M', 'P', 'W', 0,
  /* 8961 */ 'V', 'S', 'R', 'W', 0,
  /* 8966 */ 'V', 'M', 'U', 'L', 'E', 'S', 'W', 0,
  /* 8974 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 8981 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 8990 */ 'E', 'V', 'C', 'N', 'T', 'L', 'S', 'W', 0,
  /* 8999 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 9006 */ 'V', 'M', 'U', 'L', 'O', 'S', 'W', 0,
  /* 9014 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 9023 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 9029 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 9036 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 9043 */ 'X', 'X', 'S', 'P', 'L', 'T', 'W', 0,
  /* 9051 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'W', 0,
  /* 9060 */ 'S', 'T', 'W', 0,
  /* 9064 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 9072 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 9080 */ 'V', 'M', 'U', 'L', 'E', 'U', 'W', 0,
  /* 9088 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 9095 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 9102 */ 'V', 'M', 'U', 'L', 'O', 'U', 'W', 0,
  /* 9110 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 9119 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 9128 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 9135 */ 'D', 'I', 'V', 'W', 0,
  /* 9140 */ 'V', 'C', 'L', 'Z', 'W', 0,
  /* 9146 */ 'E', 'V', 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 9155 */ 'L', 'X', 'V', 'D', '2', 'X', 0,
  /* 9162 */ 'S', 'T', 'X', 'V', 'D', '2', 'X', 0,
  /* 9170 */ 'L', 'X', 'V', 'W', '4', 'X', 0,
  /* 9177 */ 'S', 'T', 'X', 'V', 'W', '4', 'X', 0,
  /* 9185 */ 'L', 'H', 'A', 'X', 0,
  /* 9190 */ 'T', 'L', 'B', 'I', 'V', 'A', 'X', 0,
  /* 9198 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'A', 'X', 0,
  /* 9207 */ 'L', 'W', 'A', 'X', 0,
  /* 9212 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 9218 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 9225 */ 'S', 'T', 'B', 'X', 0,
  /* 9230 */ 'S', 'T', 'B', 'C', 'X', 0,
  /* 9236 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 9242 */ 'S', 'T', 'H', 'C', 'X', 0,
  /* 9248 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 9254 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'X', 0,
  /* 9262 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 0,
  /* 9271 */ 'E', 'V', 'L', 'D', 'D', 'X', 0,
  /* 9278 */ 'E', 'V', 'S', 'T', 'D', 'D', 'X', 0,
  /* 9286 */ 'Q', 'V', 'L', 'F', 'D', 'X', 0,
  /* 9293 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 0,
  /* 9301 */ 'Q', 'V', 'L', 'P', 'C', 'L', 'D', 'X', 0,
  /* 9310 */ 'Q', 'V', 'L', 'P', 'C', 'R', 'D', 'X', 0,
  /* 9319 */ 'L', 'X', 'S', 'D', 'X', 0,
  /* 9325 */ 'S', 'T', 'X', 'S', 'D', 'X', 0,
  /* 9332 */ 'S', 'T', 'D', 'X', 0,
  /* 9337 */ 'E', 'V', 'L', 'W', 'H', 'E', 'X', 0,
  /* 9345 */ 'E', 'V', 'S', 'T', 'W', 'H', 'E', 'X', 0,
  /* 9354 */ 'E', 'V', 'S', 'T', 'W', 'W', 'E', 'X', 0,
  /* 9363 */ 'E', 'V', 'L', 'D', 'H', 'X', 0,
  /* 9370 */ 'E', 'V', 'S', 'T', 'D', 'H', 'X', 0,
  /* 9378 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 9384 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 9391 */ 'S', 'T', 'H', 'X', 0,
  /* 9396 */ 'S', 'T', 'B', 'C', 'I', 'X', 0,
  /* 9403 */ 'L', 'D', 'C', 'I', 'X', 0,
  /* 9409 */ 'S', 'T', 'D', 'C', 'I', 'X', 0,
  /* 9416 */ 'S', 'T', 'H', 'C', 'I', 'X', 0,
  /* 9423 */ 'S', 'T', 'W', 'C', 'I', 'X', 0,
  /* 9430 */ 'L', 'B', 'Z', 'C', 'I', 'X', 0,
  /* 9437 */ 'L', 'H', 'Z', 'C', 'I', 'X', 0,
  /* 9444 */ 'L', 'W', 'Z', 'C', 'I', 'X', 0,
  /* 9451 */ 'V', 'S', 'B', 'O', 'X', 0,
  /* 9457 */ 'E', 'V', 'S', 'T', 'W', 'H', 'O', 'X', 0,
  /* 9466 */ 'E', 'V', 'S', 'T', 'W', 'W', 'O', 'X', 0,
  /* 9475 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 9483 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 9489 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 9497 */ 'L', 'B', 'A', 'R', 'X', 0,
  /* 9503 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 9509 */ 'L', 'H', 'A', 'R', 'X', 0,
  /* 9515 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 9521 */ 'L', 'D', 'B', 'R', 'X', 0,
  /* 9527 */ 'S', 'T', 'D', 'B', 'R', 'X', 0,
  /* 9534 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 9540 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 9547 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 9553 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 9560 */ 'T', 'L', 'B', 'S', 'X', 0,
  /* 9566 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'X', 0,
  /* 9574 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 0,
  /* 9583 */ 'L', 'X', 'V', 'D', 'S', 'X', 0,
  /* 9590 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 9596 */ 'Q', 'V', 'L', 'F', 'S', 'X', 0,
  /* 9603 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 0,
  /* 9611 */ 'Q', 'V', 'L', 'P', 'C', 'L', 'S', 'X', 0,
  /* 9620 */ 'E', 'V', 'L', 'W', 'H', 'O', 'S', 'X', 0,
  /* 9629 */ 'Q', 'V', 'L', 'P', 'C', 'R', 'S', 'X', 0,
  /* 9638 */ 'E', 'V', 'L', 'H', 'H', 'E', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 9651 */ 'E', 'V', 'L', 'W', 'H', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 9663 */ 'E', 'V', 'L', 'H', 'H', 'O', 'S', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 9677 */ 'E', 'V', 'L', 'H', 'H', 'O', 'U', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 9691 */ 'E', 'V', 'L', 'W', 'W', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 9703 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 9709 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 9715 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 9721 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'U', 'X', 0,
  /* 9730 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 0,
  /* 9740 */ 'Q', 'V', 'L', 'F', 'D', 'U', 'X', 0,
  /* 9748 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 9757 */ 'L', 'D', 'U', 'X', 0,
  /* 9762 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 9768 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 9774 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 9780 */ 'E', 'V', 'L', 'W', 'H', 'O', 'U', 'X', 0,
  /* 9789 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'U', 'X', 0,
  /* 9798 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 0,
  /* 9808 */ 'Q', 'V', 'L', 'F', 'S', 'U', 'X', 0,
  /* 9816 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 9825 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 9831 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 9837 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 9843 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 9849 */ 'L', 'V', 'X', 0,
  /* 9853 */ 'S', 'T', 'V', 'X', 0,
  /* 9858 */ 'E', 'V', 'L', 'D', 'W', 'X', 0,
  /* 9865 */ 'E', 'V', 'S', 'T', 'D', 'W', 'X', 0,
  /* 9873 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 9879 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 9886 */ 'Q', 'V', 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 9895 */ 'S', 'T', 'W', 'X', 0,
  /* 9900 */ 'L', 'B', 'Z', 'X', 0,
  /* 9905 */ 'L', 'H', 'Z', 'X', 0,
  /* 9910 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'Z', 'X', 0,
  /* 9919 */ 'L', 'W', 'Z', 'X', 0,
  /* 9924 */ 'C', 'O', 'P', 'Y', 0,
  /* 9929 */ 'D', 'C', 'B', 'Z', 0,
  /* 9934 */ 'L', 'B', 'Z', 0,
  /* 9938 */ 'B', 'D', 'Z', 0,
  /* 9942 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 9951 */ 'L', 'H', 'Z', 0,
  /* 9955 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 9961 */ 'X', 'S', 'R', 'D', 'P', 'I', 'Z', 0,
  /* 9969 */ 'X', 'V', 'R', 'D', 'P', 'I', 'Z', 0,
  /* 9977 */ 'X', 'V', 'R', 'S', 'P', 'I', 'Z', 0,
  /* 9985 */ 'Q', 'V', 'F', 'R', 'I', 'Z', 0,
  /* 9992 */ 'B', 'D', 'N', 'Z', 0,
  /* 9997 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 0,
  /* 10007 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 0,
  /* 10017 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 10026 */ 'L', 'W', 'Z', 0,
  /* 10030 */ 'M', 'F', 'V', 'S', 'R', 'W', 'Z', 0,
  /* 10038 */ 'M', 'T', 'V', 'S', 'R', 'W', 'Z', 0,
  /* 10046 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', '_', 0,
  /* 10055 */ 'B', 'L', '8', '_', 'T', 'L', 'S', '_', 0,
  /* 10064 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'b', 0,
  /* 10073 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'b', 0,
  /* 10082 */ 'M', 'T', 'F', 'S', 'F', 'b', 0,
  /* 10089 */ 'Q', 'V', 'A', 'L', 'I', 'G', 'N', 'I', 'b', 0,
  /* 10099 */ 'Q', 'V', 'E', 'S', 'P', 'L', 'A', 'T', 'I', 'b', 0,
  /* 10110 */ 'Q', 'V', 'F', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'b', 0,
  /* 10122 */ 'Q', 'V', 'F', 'S', 'E', 'L', 'b', 0,
  /* 10130 */ 'Q', 'V', 'F', 'T', 'S', 'T', 'N', 'A', 'N', 'b', 0,
  /* 10141 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'E', 'Q', 'b', 0,
  /* 10151 */ 'Q', 'V', 'F', 'M', 'R', 'b', 0,
  /* 10158 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'G', 'T', 'b', 0,
  /* 10168 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'L', 'T', 'b', 0,
  /* 10178 */ 'Q', 'V', 'L', 'F', 'D', 'X', 'b', 0,
  /* 10186 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'b', 0,
  /* 10195 */ 'Q', 'V', 'L', 'F', 'S', 'X', 'b', 0,
  /* 10203 */ 'Q', 'V', 'F', 'S', 'E', 'L', 'b', 'b', 0,
  /* 10212 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 10218 */ 'L', 'W', 'Z', 't', 'o', 'c', 0,
  /* 10225 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 10243 */ 'X', 'X', 'L', 'O', 'R', 'f', 0,
  /* 10250 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 10261 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 10272 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 10283 */ 'B', 'D', 'Z', 'L', 'A', 'm', 0,
  /* 10290 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'm', 0,
  /* 10298 */ 'B', 'D', 'Z', 'A', 'm', 0,
  /* 10304 */ 'B', 'D', 'N', 'Z', 'A', 'm', 0,
  /* 10311 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 10319 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 10328 */ 'B', 'D', 'Z', 'L', 'm', 0,
  /* 10334 */ 'B', 'D', 'N', 'Z', 'L', 'm', 0,
  /* 10341 */ 'B', 'D', 'Z', 'L', 'R', 'm', 0,
  /* 10348 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'm', 0,
  /* 10356 */ 'B', 'D', 'Z', 'm', 0,
  /* 10361 */ 'B', 'D', 'N', 'Z', 'm', 0,
  /* 10367 */ 'R', 'L', 'W', 'I', 'M', 'I', 'b', 'm', 0,
  /* 10376 */ 'R', 'L', 'W', 'I', 'N', 'M', 'b', 'm', 0,
  /* 10385 */ 'R', 'L', 'W', 'N', 'M', 'b', 'm', 0,
  /* 10393 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 'b', 'm', 0,
  /* 10403 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 'b', 'm', 0,
  /* 10413 */ 'R', 'L', 'W', 'N', 'M', 'o', 'b', 'm', 0,
  /* 10422 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 'n', 0,
  /* 10431 */ 'B', 'C', 'C', 'T', 'R', '8', 'n', 0,
  /* 10439 */ 'B', 'C', 'n', 0,
  /* 10443 */ 'B', 'C', 'L', 'n', 0,
  /* 10448 */ 'B', 'C', 'L', 'R', 'L', 'n', 0,
  /* 10455 */ 'B', 'C', 'C', 'T', 'R', 'L', 'n', 0,
  /* 10463 */ 'B', 'C', 'L', 'R', 'n', 0,
  /* 10469 */ 'B', 'C', 'C', 'T', 'R', 'n', 0,
  /* 10476 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 'o', 0,
  /* 10489 */ 'A', 'D', 'D', '4', 'o', 0,
  /* 10495 */ 'E', 'X', 'T', 'S', 'B', '8', 'o', 0,
  /* 10503 */ 'A', 'D', 'D', 'C', '8', 'o', 0,
  /* 10510 */ 'A', 'N', 'D', 'C', '8', 'o', 0,
  /* 10517 */ 'S', 'U', 'B', 'F', 'C', '8', 'o', 0,
  /* 10525 */ 'O', 'R', 'C', '8', 'o', 0,
  /* 10531 */ 'A', 'D', 'D', '8', 'o', 0,
  /* 10537 */ 'N', 'A', 'N', 'D', '8', 'o', 0,
  /* 10544 */ 'A', 'D', 'D', 'E', '8', 'o', 0,
  /* 10551 */ 'S', 'U', 'B', 'F', 'E', '8', 'o', 0,
  /* 10559 */ 'A', 'D', 'D', 'M', 'E', '8', 'o', 0,
  /* 10567 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 'o', 0,
  /* 10576 */ 'A', 'D', 'D', 'Z', 'E', '8', 'o', 0,
  /* 10584 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 'o', 0,
  /* 10593 */ 'S', 'U', 'B', 'F', '8', 'o', 0,
  /* 10600 */ 'N', 'E', 'G', '8', 'o', 0,
  /* 10606 */ 'E', 'X', 'T', 'S', 'H', '8', 'o', 0,
  /* 10614 */ 'R', 'L', 'W', 'I', 'M', 'I', '8', 'o', 0,
  /* 10623 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 'o', 0,
  /* 10632 */ 'R', 'L', 'W', 'N', 'M', '8', 'o', 0,
  /* 10640 */ 'N', 'O', 'R', '8', 'o', 0,
  /* 10646 */ 'X', 'O', 'R', '8', 'o', 0,
  /* 10652 */ 'E', 'Q', 'V', '8', 'o', 0,
  /* 10658 */ 'S', 'L', 'W', '8', 'o', 0,
  /* 10664 */ 'S', 'R', 'W', '8', 'o', 0,
  /* 10670 */ 'C', 'N', 'T', 'L', 'Z', 'W', '8', 'o', 0,
  /* 10679 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 10689 */ 'E', 'X', 'T', 'S', 'B', 'o', 0,
  /* 10696 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 10706 */ 'F', 'S', 'U', 'B', 'o', 0,
  /* 10712 */ 'F', 'M', 'S', 'U', 'B', 'o', 0,
  /* 10719 */ 'F', 'N', 'M', 'S', 'U', 'B', 'o', 0,
  /* 10727 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 10737 */ 'A', 'D', 'D', 'C', 'o', 0,
  /* 10743 */ 'A', 'N', 'D', 'C', 'o', 0,
  /* 10749 */ 'S', 'U', 'B', 'F', 'C', 'o', 0,
  /* 10756 */ 'S', 'U', 'B', 'I', 'C', 'o', 0,
  /* 10763 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 10770 */ 'R', 'L', 'D', 'I', 'C', 'o', 0,
  /* 10777 */ 'O', 'R', 'C', 'o', 0,
  /* 10782 */ 'S', 'R', 'A', 'D', 'o', 0,
  /* 10788 */ 'F', 'A', 'D', 'D', 'o', 0,
  /* 10794 */ 'F', 'M', 'A', 'D', 'D', 'o', 0,
  /* 10801 */ 'F', 'N', 'M', 'A', 'D', 'D', 'o', 0,
  /* 10809 */ 'F', 'N', 'E', 'G', 'D', 'o', 0,
  /* 10816 */ 'M', 'U', 'L', 'H', 'D', 'o', 0,
  /* 10823 */ 'F', 'C', 'F', 'I', 'D', 'o', 0,
  /* 10830 */ 'F', 'C', 'T', 'I', 'D', 'o', 0,
  /* 10837 */ 'F', 'S', 'E', 'L', 'D', 'o', 0,
  /* 10844 */ 'M', 'U', 'L', 'L', 'D', 'o', 0,
  /* 10851 */ 'S', 'L', 'D', 'o', 0,
  /* 10856 */ 'F', 'R', 'I', 'M', 'D', 'o', 0,
  /* 10863 */ 'N', 'A', 'N', 'D', 'o', 0,
  /* 10869 */ 'F', 'C', 'P', 'S', 'G', 'N', 'D', 'o', 0,
  /* 10878 */ 'F', 'R', 'I', 'N', 'D', 'o', 0,
  /* 10885 */ 'F', 'R', 'I', 'P', 'D', 'o', 0,
  /* 10892 */ 'S', 'R', 'D', 'o', 0,
  /* 10897 */ 'F', 'A', 'B', 'S', 'D', 'o', 0,
  /* 10904 */ 'F', 'N', 'A', 'B', 'S', 'D', 'o', 0,
  /* 10912 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'D', 'o', 0,
  /* 10922 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'D', 'o', 0,
  /* 10932 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'D', 'o', 0,
  /* 10942 */ 'D', 'I', 'V', 'D', 'o', 0,
  /* 10948 */ 'F', 'R', 'I', 'Z', 'D', 'o', 0,
  /* 10955 */ 'C', 'N', 'T', 'L', 'Z', 'D', 'o', 0,
  /* 10963 */ 'A', 'D', 'D', 'E', 'o', 0,
  /* 10969 */ 'D', 'I', 'V', 'D', 'E', 'o', 0,
  /* 10976 */ 'S', 'U', 'B', 'F', 'E', 'o', 0,
  /* 10983 */ 'A', 'D', 'D', 'M', 'E', 'o', 0,
  /* 10990 */ 'S', 'U', 'B', 'F', 'M', 'E', 'o', 0,
  /* 10998 */ 'F', 'R', 'E', 'o', 0,
  /* 11003 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'o', 0,
  /* 11012 */ 'D', 'I', 'V', 'W', 'E', 'o', 0,
  /* 11019 */ 'A', 'D', 'D', 'Z', 'E', 'o', 0,
  /* 11026 */ 'S', 'U', 'B', 'F', 'Z', 'E', 'o', 0,
  /* 11034 */ 'S', 'U', 'B', 'F', 'o', 0,
  /* 11040 */ 'M', 'T', 'F', 'S', 'F', 'o', 0,
  /* 11047 */ 'N', 'E', 'G', 'o', 0,
  /* 11052 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 11062 */ 'E', 'X', 'T', 'S', 'H', 'o', 0,
  /* 11069 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 11079 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 11089 */ 'S', 'R', 'A', 'D', 'I', 'o', 0,
  /* 11096 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 'o', 0,
  /* 11106 */ 'E', 'X', 'T', 'L', 'D', 'I', 'o', 0,
  /* 11114 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 11120 */ 'C', 'L', 'R', 'R', 'D', 'I', 'o', 0,
  /* 11128 */ 'I', 'N', 'S', 'R', 'D', 'I', 'o', 0,
  /* 11136 */ 'R', 'O', 'T', 'R', 'D', 'I', 'o', 0,
  /* 11144 */ 'E', 'X', 'T', 'R', 'D', 'I', 'o', 0,
  /* 11152 */ 'M', 'T', 'F', 'S', 'F', 'I', 'o', 0,
  /* 11160 */ 'R', 'L', 'D', 'I', 'M', 'I', 'o', 0,
  /* 11168 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 0,
  /* 11176 */ 'S', 'R', 'A', 'W', 'I', 'o', 0,
  /* 11183 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 'o', 0,
  /* 11193 */ 'I', 'N', 'S', 'L', 'W', 'I', 'o', 0,
  /* 11201 */ 'E', 'X', 'T', 'L', 'W', 'I', 'o', 0,
  /* 11209 */ 'C', 'L', 'R', 'R', 'W', 'I', 'o', 0,
  /* 11217 */ 'I', 'N', 'S', 'R', 'W', 'I', 'o', 0,
  /* 11225 */ 'R', 'O', 'T', 'R', 'W', 'I', 'o', 0,
  /* 11233 */ 'E', 'X', 'T', 'R', 'W', 'I', 'o', 0,
  /* 11241 */ 'R', 'L', 'D', 'C', 'L', 'o', 0,
  /* 11248 */ 'R', 'L', 'D', 'I', 'C', 'L', 'o', 0,
  /* 11256 */ 'F', 'M', 'U', 'L', 'o', 0,
  /* 11262 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 11270 */ 'R', 'L', 'W', 'N', 'M', 'o', 0,
  /* 11277 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'D', 'P', 'o', 0,
  /* 11288 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'D', 'P', 'o', 0,
  /* 11299 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'D', 'P', 'o', 0,
  /* 11310 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 11319 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 11329 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 11339 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 11349 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'S', 'P', 'o', 0,
  /* 11360 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'S', 'P', 'o', 0,
  /* 11371 */ 'F', 'R', 'S', 'P', 'o', 0,
  /* 11377 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'P', 'o', 0,
  /* 11388 */ 'R', 'L', 'D', 'C', 'R', 'o', 0,
  /* 11395 */ 'R', 'L', 'D', 'I', 'C', 'R', 'o', 0,
  /* 11403 */ 'F', 'M', 'R', 'o', 0,
  /* 11408 */ 'N', 'O', 'R', 'o', 0,
  /* 11413 */ 'X', 'O', 'R', 'o', 0,
  /* 11418 */ 'F', 'S', 'U', 'B', 'S', 'o', 0,
  /* 11425 */ 'F', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 11433 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 11442 */ 'F', 'A', 'D', 'D', 'S', 'o', 0,
  /* 11449 */ 'F', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 11457 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 11466 */ 'F', 'C', 'F', 'I', 'D', 'S', 'o', 0,
  /* 11474 */ 'F', 'R', 'E', 'S', 'o', 0,
  /* 11480 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'o', 0,
  /* 11490 */ 'M', 'F', 'F', 'S', 'o', 0,
  /* 11496 */ 'F', 'N', 'E', 'G', 'S', 'o', 0,
  /* 11503 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 11510 */ 'F', 'S', 'E', 'L', 'S', 'o', 0,
  /* 11517 */ 'F', 'M', 'U', 'L', 'S', 'o', 0,
  /* 11524 */ 'F', 'R', 'I', 'M', 'S', 'o', 0,
  /* 11531 */ 'F', 'C', 'P', 'S', 'G', 'N', 'S', 'o', 0,
  /* 11540 */ 'F', 'R', 'I', 'N', 'S', 'o', 0,
  /* 11547 */ 'F', 'R', 'I', 'P', 'S', 'o', 0,
  /* 11554 */ 'F', 'A', 'B', 'S', 'S', 'o', 0,
  /* 11561 */ 'F', 'N', 'A', 'B', 'S', 'S', 'o', 0,
  /* 11569 */ 'F', 'S', 'Q', 'R', 'T', 'S', 'o', 0,
  /* 11577 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 'o', 0,
  /* 11586 */ 'F', 'D', 'I', 'V', 'S', 'o', 0,
  /* 11593 */ 'F', 'R', 'I', 'Z', 'S', 'o', 0,
  /* 11600 */ 'F', 'S', 'Q', 'R', 'T', 'o', 0,
  /* 11607 */ 'M', 'U', 'L', 'H', 'D', 'U', 'o', 0,
  /* 11615 */ 'F', 'C', 'F', 'I', 'D', 'U', 'o', 0,
  /* 11623 */ 'D', 'I', 'V', 'D', 'U', 'o', 0,
  /* 11630 */ 'D', 'I', 'V', 'D', 'E', 'U', 'o', 0,
  /* 11638 */ 'D', 'I', 'V', 'W', 'E', 'U', 'o', 0,
  /* 11646 */ 'M', 'U', 'L', 'H', 'W', 'U', 'o', 0,
  /* 11654 */ 'D', 'I', 'V', 'W', 'U', 'o', 0,
  /* 11661 */ 'F', 'D', 'I', 'V', 'o', 0,
  /* 11667 */ 'E', 'Q', 'V', 'o', 0,
  /* 11672 */ 'S', 'R', 'A', 'W', 'o', 0,
  /* 11678 */ 'M', 'U', 'L', 'H', 'W', 'o', 0,
  /* 11685 */ 'F', 'C', 'T', 'I', 'W', 'o', 0,
  /* 11692 */ 'M', 'U', 'L', 'L', 'W', 'o', 0,
  /* 11699 */ 'S', 'L', 'W', 'o', 0,
  /* 11704 */ 'S', 'R', 'W', 'o', 0,
  /* 11709 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 11719 */ 'E', 'X', 'T', 'S', 'W', 'o', 0,
  /* 11726 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 11736 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 11746 */ 'D', 'I', 'V', 'W', 'o', 0,
  /* 11752 */ 'C', 'N', 'T', 'L', 'Z', 'W', 'o', 0,
  /* 11760 */ 'F', 'C', 'T', 'I', 'D', 'Z', 'o', 0,
  /* 11768 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 'o', 0,
  /* 11777 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 'o', 0,
  /* 11786 */ 'F', 'C', 'T', 'I', 'W', 'Z', 'o', 0,
  /* 11794 */ 'B', 'D', 'Z', 'L', 'A', 'p', 0,
  /* 11801 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'p', 0,
  /* 11809 */ 'B', 'D', 'Z', 'A', 'p', 0,
  /* 11815 */ 'B', 'D', 'N', 'Z', 'A', 'p', 0,
  /* 11822 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 11830 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 11839 */ 'B', 'D', 'Z', 'L', 'p', 0,
  /* 11845 */ 'B', 'D', 'N', 'Z', 'L', 'p', 0,
  /* 11852 */ 'B', 'D', 'Z', 'L', 'R', 'p', 0,
  /* 11859 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'p', 0,
  /* 11867 */ 'B', 'D', 'Z', 'p', 0,
  /* 11872 */ 'B', 'D', 'N', 'Z', 'p', 0,
  /* 11878 */ 'M', 'T', 'C', 'T', 'R', '8', 'l', 'o', 'o', 'p', 0,
  /* 11889 */ 'M', 'T', 'C', 'T', 'R', 'l', 'o', 'o', 'p', 0,
  /* 11899 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'u', 'p', 0,
  /* 11913 */ 'Q', 'V', 'F', 'N', 'E', 'G', 's', 0,
  /* 11921 */ 'Q', 'V', 'A', 'L', 'I', 'G', 'N', 'I', 's', 0,
  /* 11931 */ 'Q', 'V', 'E', 'S', 'P', 'L', 'A', 'T', 'I', 's', 0,
  /* 11942 */ 'Q', 'V', 'F', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 's', 0,
  /* 11954 */ 'Q', 'V', 'F', 'R', 'I', 'M', 's', 0,
  /* 11962 */ 'Q', 'V', 'F', 'P', 'E', 'R', 'M', 's', 0,
  /* 11971 */ 'Q', 'V', 'F', 'C', 'P', 'S', 'G', 'N', 's', 0,
  /* 11981 */ 'Q', 'V', 'F', 'R', 'I', 'N', 's', 0,
  /* 11989 */ 'Q', 'V', 'F', 'R', 'I', 'P', 's', 0,
  /* 11997 */ 'Q', 'V', 'F', 'R', 'S', 'P', 's', 0,
  /* 12005 */ 'Q', 'V', 'F', 'M', 'R', 's', 0,
  /* 12012 */ 'Q', 'V', 'F', 'A', 'B', 'S', 's', 0,
  /* 12020 */ 'Q', 'V', 'F', 'N', 'A', 'B', 'S', 's', 0,
  /* 12029 */ 'Q', 'V', 'F', 'S', 'U', 'B', 'S', 's', 0,
  /* 12038 */ 'Q', 'V', 'F', 'M', 'S', 'U', 'B', 'S', 's', 0,
  /* 12048 */ 'Q', 'V', 'F', 'N', 'M', 'S', 'U', 'B', 'S', 's', 0,
  /* 12059 */ 'Q', 'V', 'F', 'A', 'D', 'D', 'S', 's', 0,
  /* 12068 */ 'Q', 'V', 'F', 'M', 'A', 'D', 'D', 'S', 's', 0,
  /* 12078 */ 'Q', 'V', 'F', 'N', 'M', 'A', 'D', 'D', 'S', 's', 0,
  /* 12089 */ 'Q', 'V', 'F', 'R', 'E', 'S', 's', 0,
  /* 12097 */ 'Q', 'V', 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 's', 0,
  /* 12109 */ 'Q', 'V', 'F', 'M', 'U', 'L', 'S', 's', 0,
  /* 12118 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'X', 's', 0,
  /* 12127 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 's', 0,
  /* 12137 */ 'Q', 'V', 'L', 'F', 'S', 'X', 's', 0,
  /* 12145 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 's', 0,
  /* 12154 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 's', 0,
  /* 12164 */ 'Q', 'V', 'F', 'R', 'I', 'Z', 's', 0,
  /* 12172 */ 'Q', 'V', 'F', 'S', 'E', 'L', 'b', 's', 0,
  /* 12181 */ 'Q', 'V', 'F', 'T', 'S', 'T', 'N', 'A', 'N', 'b', 's', 0,
  /* 12193 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'E', 'Q', 'b', 's', 0,
  /* 12204 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'G', 'T', 'b', 's', 0,
  /* 12215 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'L', 'T', 'b', 's', 0,
  /* 12226 */ 'B', 'C', 'L', 'a', 'l', 'w', 'a', 'y', 's', 0,
  /* 12236 */ 'Q', 'V', 'L', 'P', 'C', 'L', 'S', 'X', 'i', 'n', 't', 0,
  /* 12248 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 12258 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 12268 */ 'L', 'A', 'x', 0,
  /* 12272 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    4412U, 5243U, 5458U, 4831U, 4822U, 4877U, 3930U, 3945U, 
    3803U, 3959U, 7499U, 3690U, 3570U, 9924U, 3641U, 8030U, 
    3382U, 5556U, 7980U, 3420U, 7969U, 2926U, 686U, 7405U, 
    10489U, 1015U, 7413U, 10046U, 10531U, 2800U, 966U, 10503U, 
    10737U, 3583U, 1026U, 10544U, 10963U, 4282U, 1138U, 2848U, 
    985U, 10763U, 7375U, 1498U, 2078U, 55U, 2062U, 2036U, 
    2049U, 2025U, 5064U, 267U, 5030U, 227U, 6708U, 281U, 
    5041U, 240U, 6723U, 298U, 5021U, 3648U, 1039U, 10559U, 
    10983U, 3780U, 1054U, 10576U, 11019U, 5479U, 6597U, 3339U, 
    1021U, 10538U, 2808U, 972U, 10510U, 10743U, 11503U, 1793U, 
    11114U, 1786U, 7930U, 1517U, 7945U, 1533U, 10864U, 834U, 
    168U, 511U, 1270U, 757U, 91U, 434U, 1197U, 798U, 
    132U, 475U, 1236U, 777U, 111U, 454U, 1216U, 874U, 
    208U, 551U, 1308U, 737U, 71U, 414U, 1165U, 854U, 
    188U, 531U, 1289U, 818U, 152U, 495U, 1255U, 5474U, 
    2526U, 1915U, 2793U, 2796U, 1938U, 6965U, 1476U, 4930U, 
    1361U, 4804U, 2290U, 6789U, 4894U, 6959U, 1469U, 10431U, 
    4923U, 1353U, 10422U, 10455U, 10469U, 4800U, 6784U, 4888U, 
    10448U, 10463U, 12226U, 10443U, 6953U, 1463U, 4916U, 1346U, 
    10225U, 10439U, 9992U, 1739U, 2514U, 10304U, 11815U, 5008U, 
    2302U, 10290U, 11801U, 6811U, 1415U, 4908U, 10319U, 11830U, 
    10348U, 11859U, 10334U, 11845U, 10361U, 11872U, 9938U, 1729U, 
    2509U, 10298U, 11809U, 5003U, 2296U, 10283U, 11794U, 6805U, 
    1408U, 4901U, 10311U, 11822U, 10341U, 11852U, 10328U, 11839U, 
    10356U, 11867U, 4796U, 1336U, 6281U, 7436U, 7421U, 10055U, 
    2280U, 930U, 6272U, 6779U, 1391U, 4882U, 7429U, 3321U, 
    2891U, 4299U, 11096U, 4619U, 11183U, 4330U, 11120U, 4655U, 
    11209U, 2572U, 942U, 3415U, 4324U, 3299U, 4292U, 8729U, 
    4605U, 8956U, 4649U, 3563U, 10955U, 9148U, 1611U, 10670U, 
    11752U, 7860U, 7867U, 3365U, 2813U, 8306U, 3351U, 6860U, 
    6872U, 3028U, 7884U, 7876U, 6898U, 1913U, 3793U, 4211U, 
    8083U, 7839U, 8093U, 9929U, 4997U, 4226U, 3546U, 3588U, 
    8179U, 11630U, 10969U, 8173U, 11623U, 10942U, 9135U, 3766U, 
    8186U, 11638U, 11012U, 8273U, 11654U, 11746U, 7529U, 4870U, 
    8089U, 570U, 8100U, 576U, 8111U, 591U, 8106U, 584U, 
    2917U, 1000U, 358U, 651U, 376U, 669U, 11899U, 8302U, 
    1591U, 10652U, 11667U, 6999U, 8692U, 8366U, 8488U, 8427U, 
    8549U, 8627U, 3371U, 2820U, 6621U, 7549U, 8225U, 7558U, 
    8234U, 8990U, 9146U, 7685U, 8271U, 8312U, 2660U, 4115U, 
    3226U, 9271U, 3987U, 9363U, 8634U, 9858U, 7779U, 9638U, 
    7802U, 9663U, 7815U, 9677U, 3614U, 9337U, 7485U, 9620U, 
    8206U, 9780U, 7791U, 9651U, 7828U, 9691U, 4390U, 5526U, 
    5516U, 4400U, 1801U, 5293U, 1845U, 5337U, 1879U, 5371U, 
    3816U, 1943U, 8318U, 8764U, 4442U, 2104U, 8378U, 8812U, 
    3882U, 1982U, 8342U, 8788U, 8500U, 8884U, 4477U, 2143U, 
    8439U, 8848U, 8561U, 8920U, 1813U, 5305U, 1857U, 5349U, 
    1891U, 5383U, 3834U, 1963U, 8330U, 8776U, 4460U, 2124U, 
    8415U, 8836U, 3900U, 2002U, 8354U, 8800U, 8537U, 8908U, 
    4504U, 2173U, 8476U, 8872U, 8598U, 8944U, 2309U, 3825U, 
    1953U, 4451U, 2114U, 3891U, 1992U, 4486U, 2153U, 8403U, 
    8824U, 8525U, 8896U, 4495U, 2163U, 8464U, 8860U, 8586U, 
    8932U, 3843U, 1973U, 1825U, 5317U, 4469U, 2134U, 1869U, 
    5361U, 3909U, 2012U, 1835U, 5327U, 4513U, 2183U, 1903U, 
    5395U, 3358U, 3924U, 6866U, 6877U, 3034U, 8735U, 4612U, 
    8640U, 8741U, 4635U, 4380U, 4573U, 7391U, 8198U, 7629U, 
    8259U, 3232U, 9278U, 3993U, 9370U, 8647U, 9865U, 3621U, 
    9345U, 5496U, 9457U, 3772U, 9354U, 5548U, 9466U, 8390U, 
    8512U, 8451U, 8573U, 8654U, 8662U, 6904U, 4308U, 11106U, 
    4642U, 11201U, 4351U, 11144U, 4676U, 11233U, 2662U, 948U, 
    600U, 10495U, 10689U, 4117U, 1126U, 613U, 10606U, 11062U, 
    9023U, 639U, 10476U, 11719U, 5504U, 3458U, 10897U, 7516U, 
    11554U, 3160U, 7084U, 11442U, 10788U, 12272U, 3262U, 7159U, 
    11466U, 8148U, 7576U, 11577U, 11615U, 10823U, 3514U, 7600U, 
    3395U, 10869U, 7471U, 11531U, 3275U, 9999U, 11768U, 9944U, 
    11760U, 10830U, 8702U, 10009U, 11777U, 10019U, 11786U, 11685U, 
    8294U, 7623U, 11586U, 11661U, 3167U, 7092U, 11449U, 10794U, 
    6843U, 11403U, 2755U, 7065U, 11425U, 10712U, 4945U, 7450U, 
    11517U, 11256U, 3464U, 10904U, 7522U, 11561U, 3248U, 10809U, 
    7283U, 11496U, 3175U, 7101U, 11457U, 10801U, 2763U, 7074U, 
    11433U, 10719U, 3669U, 7247U, 11474U, 10998U, 3315U, 10856U, 
    7465U, 11524U, 3403U, 10878U, 7479U, 11540U, 3409U, 10885U, 
    7493U, 11547U, 3551U, 10948U, 7773U, 11593U, 6501U, 11371U, 
    3682U, 7254U, 11480U, 11003U, 3287U, 10837U, 7399U, 11510U, 
    8052U, 7567U, 11569U, 11600U, 2748U, 7057U, 11418U, 10706U, 
    6751U, 330U, 6738U, 315U, 4216U, 7844U, 4232U, 4628U, 
    11193U, 4337U, 11128U, 4662U, 11217U, 4854U, 1340U, 2905U, 
    2281U, 12268U, 9497U, 4958U, 9934U, 1724U, 9430U, 8279U, 
    1573U, 9831U, 1679U, 9900U, 1706U, 3284U, 9503U, 4965U, 
    9521U, 9403U, 8164U, 9757U, 9306U, 5052U, 253U, 10212U, 
    1925U, 8012U, 4582U, 5014U, 3239U, 8128U, 9742U, 9288U, 
    9200U, 9912U, 7268U, 8214U, 9810U, 9598U, 2021U, 925U, 
    9509U, 4972U, 8118U, 1549U, 9703U, 1651U, 9185U, 1619U, 
    9534U, 1637U, 9951U, 1734U, 9437U, 8284U, 1579U, 9837U, 
    1686U, 9905U, 1712U, 4419U, 1147U, 7381U, 1505U, 8747U, 
    4683U, 9212U, 9378U, 9873U, 4938U, 6944U, 9849U, 4986U, 
    2315U, 9515U, 4979U, 9709U, 9207U, 350U, 343U, 9547U, 
    1644U, 10026U, 1745U, 9444U, 8289U, 1585U, 9843U, 1693U, 
    9919U, 1718U, 10218U, 9319U, 9155U, 9583U, 9170U, 6629U, 
    3851U, 7272U, 6662U, 1385U, 6972U, 1484U, 6644U, 7263U, 
    11490U, 6795U, 1396U, 6927U, 3856U, 1075U, 6910U, 1445U, 
    6922U, 5444U, 2675U, 955U, 3700U, 12248U, 6674U, 3444U, 
    10030U, 2911U, 3870U, 1091U, 6978U, 1491U, 11878U, 11889U, 
    6656U, 0U, 48U, 3876U, 4373U, 11152U, 10082U, 11040U, 
    6800U, 1402U, 6933U, 3437U, 3863U, 1083U, 6916U, 1452U, 
    6939U, 5451U, 3709U, 12258U, 6681U, 3451U, 2319U, 10038U, 
    3254U, 8139U, 11607U, 10816U, 8686U, 8243U, 11646U, 11678U, 
    3293U, 10844U, 4422U, 1144U, 8723U, 11692U, 6829U, 6818U, 
    1423U, 3346U, 1020U, 10537U, 10863U, 3920U, 1121U, 10600U, 
    11047U, 6277U, 893U, 905U, 6856U, 1435U, 10640U, 11408U, 
    6850U, 1436U, 10641U, 3024U, 1010U, 10525U, 10777U, 4559U, 
    1160U, 7386U, 1511U, 11409U, 3495U, 9052U, 7991U, 8000U, 
    4521U, 10089U, 11921U, 4563U, 10099U, 11931U, 6984U, 12012U, 
    3158U, 7082U, 12059U, 3260U, 7157U, 8146U, 7574U, 10064U, 
    6612U, 10141U, 12193U, 7890U, 10158U, 12204U, 7960U, 10168U, 
    12215U, 5415U, 11971U, 3273U, 8155U, 9997U, 9942U, 10073U, 
    8700U, 8250U, 10007U, 10017U, 4785U, 10110U, 11942U, 3165U, 
    7090U, 12068U, 6841U, 10151U, 12005U, 2753U, 7063U, 12038U, 
    4943U, 7448U, 12109U, 6991U, 12020U, 3917U, 11913U, 3173U, 
    7099U, 12078U, 2761U, 7072U, 12048U, 5229U, 11962U, 3667U, 
    7245U, 12089U, 5209U, 11954U, 5437U, 11981U, 6265U, 11989U, 
    9985U, 12164U, 6499U, 11997U, 3680U, 7252U, 12097U, 4847U, 
    10122U, 10203U, 12172U, 2746U, 7055U, 12029U, 5405U, 10130U, 
    12181U, 3207U, 7136U, 4950U, 7456U, 3182U, 7109U, 3216U, 
    7146U, 3195U, 7123U, 4259U, 9721U, 2409U, 9254U, 2337U, 
    9789U, 2449U, 9566U, 2373U, 12118U, 9740U, 2430U, 9286U, 
    2356U, 10178U, 9198U, 2327U, 9910U, 2499U, 9808U, 2470U, 
    9596U, 2392U, 10195U, 12137U, 9301U, 9611U, 12236U, 9310U, 
    9629U, 9730U, 2419U, 4736U, 2234U, 9262U, 2346U, 4698U, 
    2192U, 9798U, 2459U, 4757U, 2257U, 9574U, 2382U, 4717U, 
    2213U, 12127U, 9748U, 2439U, 4747U, 2246U, 9293U, 2364U, 
    4708U, 2203U, 10186U, 9886U, 2489U, 9816U, 2479U, 4768U, 
    2269U, 12154U, 9603U, 2400U, 4727U, 2224U, 12145U, 6688U, 
    7904U, 3718U, 4248U, 4287U, 4369U, 3268U, 4253U, 4809U, 
    11241U, 6650U, 11388U, 2854U, 4815U, 626U, 11248U, 6667U, 
    11395U, 10770U, 4428U, 11160U, 4435U, 1151U, 10614U, 10367U, 
    11168U, 10393U, 5216U, 1370U, 10623U, 10376U, 11262U, 10403U, 
    5223U, 1378U, 10632U, 10385U, 11270U, 10413U, 4344U, 11136U, 
    4669U, 11225U, 2700U, 3121U, 691U, 1098U, 714U, 1184U, 
    2938U, 2965U, 3067U, 3040U, 2992U, 3094U, 704U, 1111U, 
    727U, 1326U, 2953U, 2980U, 3082U, 3055U, 3008U, 3109U, 
    2092U, 3629U, 3594U, 3673U, 3311U, 4303U, 11100U, 10851U, 
    8743U, 1596U, 10658U, 4623U, 11187U, 11699U, 6699U, 7918U, 
    3747U, 3153U, 4276U, 11089U, 10782U, 8622U, 4591U, 11176U, 
    11672U, 3440U, 4339U, 11130U, 10892U, 8962U, 1601U, 10664U, 
    4664U, 11219U, 11704U, 2696U, 961U, 9396U, 9230U, 8123U, 
    1555U, 9715U, 1658U, 9225U, 1625U, 3503U, 9527U, 9409U, 
    9236U, 8168U, 9762U, 9332U, 3243U, 8133U, 9750U, 9295U, 
    9888U, 7278U, 8219U, 9818U, 9605U, 4146U, 1133U, 9540U, 
    9416U, 9242U, 8193U, 1561U, 9774U, 1665U, 9391U, 1631U, 
    8751U, 4688U, 9218U, 9384U, 9879U, 9853U, 4991U, 9060U, 
    1606U, 9553U, 9423U, 9248U, 8266U, 1567U, 9825U, 1672U, 
    9895U, 1700U, 9325U, 9162U, 9177U, 3798U, 1069U, 10593U, 
    2836U, 978U, 10517U, 10749U, 3608U, 1032U, 10551U, 10976U, 
    2860U, 992U, 3654U, 1046U, 10567U, 10990U, 3786U, 1061U, 
    10584U, 11026U, 11034U, 4221U, 2842U, 10756U, 7369U, 2900U, 
    8045U, 2827U, 4238U, 3124U, 4266U, 2548U, 935U, 1918U, 
    917U, 6949U, 1459U, 5430U, 4778U, 7849U, 10250U, 1750U, 
    10261U, 1762U, 10272U, 1774U, 3500U, 4358U, 3377U, 2098U, 
    3635U, 4840U, 9190U, 3281U, 4416U, 3661U, 393U, 9560U, 
    407U, 3133U, 2897U, 3760U, 400U, 5565U, 8021U, 5170U, 
    6940U, 9040U, 4694U, 3733U, 6634U, 9072U, 6154U, 7022U, 
    7327U, 7653U, 5093U, 7047U, 5118U, 5153U, 7352U, 5277U, 
    7677U, 3372U, 2821U, 2604U, 4059U, 8974U, 2715U, 4158U, 
    9088U, 9590U, 32U, 9768U, 40U, 6771U, 8071U, 2786U, 
    3557U, 4205U, 9140U, 6122U, 11310U, 6210U, 11329U, 2737U, 
    10696U, 3521U, 10922U, 4180U, 11069U, 9110U, 11726U, 6169U, 
    11319U, 6219U, 11339U, 2651U, 10679U, 3478U, 10912U, 4106U, 
    11052U, 9014U, 11709U, 2770U, 10727U, 3530U, 10932U, 4189U, 
    11079U, 9119U, 11736U, 7759U, 14U, 7766U, 23U, 8313U, 
    6184U, 6161U, 6146U, 6228U, 2668U, 3487U, 4123U, 9029U, 
    2779U, 3539U, 4198U, 9128U, 7306U, 7316U, 6203U, 2636U, 
    3471U, 4091U, 8999U, 2722U, 3507U, 4165U, 9095U, 5143U, 
    2534U, 4000U, 8671U, 2541U, 4007U, 8708U, 5076U, 5126U, 
    7335U, 5101U, 5161U, 7360U, 2582U, 4037U, 8966U, 2707U, 
    4150U, 9080U, 2643U, 4098U, 9006U, 2729U, 4172U, 9102U, 
    5285U, 3359U, 6762U, 8058U, 6130U, 6867U, 6878U, 3035U, 
    5237U, 6889U, 9483U, 7533U, 7584U, 7541U, 7607U, 5253U, 
    7592U, 5261U, 7615U, 2564U, 3328U, 4024U, 8756U, 2687U, 
    3494U, 4137U, 9051U, 6178U, 5179U, 5424U, 6235U, 9955U, 
    2554U, 3305U, 4014U, 8736U, 6193U, 9451U, 4859U, 3141U, 
    8610U, 4939U, 2559U, 3310U, 4530U, 4019U, 5538U, 8742U, 
    2680U, 4130U, 2619U, 4074U, 8981U, 9036U, 6945U, 2528U, 
    3152U, 3981U, 8621U, 2577U, 3446U, 4032U, 5543U, 8961U, 
    9064U, 6139U, 7014U, 7298U, 7645U, 5085U, 7039U, 5110U, 
    5135U, 7344U, 5269U, 7669U, 7636U, 7005U, 7289U, 7030U, 
    7661U, 9475U, 2611U, 4066U, 9489U, 2628U, 4083U, 6905U, 
    7U, 2520U, 3973U, 7232U, 2590U, 4045U, 7899U, 3602U, 
    4362U, 6885U, 1440U, 10646U, 4558U, 1159U, 7385U, 1510U, 
    11413U, 5979U, 5670U, 5924U, 6043U, 5888U, 6471U, 7166U, 
    7693U, 7199U, 7726U, 5933U, 5686U, 5706U, 6052U, 5634U, 
    5868U, 6106U, 5908U, 5592U, 5826U, 5788U, 5961U, 5772U, 
    5612U, 5846U, 5570U, 5804U, 4537U, 2867U, 5185U, 6241U, 
    9961U, 5736U, 5750U, 6005U, 5654U, 6060U, 6014U, 5987U, 
    6515U, 5678U, 6339U, 5951U, 11288U, 6489U, 11360U, 5726U, 
    11277U, 6367U, 11349U, 5995U, 11299U, 6523U, 11377U, 5898U, 
    6453U, 6480U, 7177U, 7704U, 7210U, 7737U, 5942U, 7188U, 
    7715U, 7221U, 7748U, 5696U, 6347U, 6086U, 6569U, 5716U, 
    6357U, 6096U, 6579U, 6078U, 6561U, 5644U, 6321U, 5878U, 
    6443U, 6114U, 6589U, 5916U, 6463U, 5602U, 6300U, 5836U, 
    6422U, 5796U, 6403U, 5970U, 6506U, 5780U, 6395U, 5623U, 
    6310U, 5857U, 6432U, 5581U, 6289U, 5815U, 6411U, 4544U, 
    2875U, 5193U, 6249U, 9969U, 5743U, 6377U, 4551U, 2883U, 
    5201U, 6257U, 9977U, 5761U, 6384U, 6034U, 6543U, 5662U, 
    6331U, 6069U, 6552U, 6024U, 6533U, 3336U, 2805U, 8299U, 
    3343U, 6853U, 6847U, 3021U, 10243U, 6882U, 8678U, 8715U, 
    4315U, 4864U, 4597U, 9043U, 2792U, 1933U, 6958U, 4922U, 
    4799U, 2284U, 6783U, 4887U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 1572);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~PPCGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 1572);
}
PPCGenInstrInfo::~PPCGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace PPC {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace PPC {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace PPC {
namespace OpTypes { 
enum OperandType {
  abscalltarget = 0,
  abscondbrtarget = 1,
  absdirectbrtarget = 2,
  calltarget = 3,
  condbrtarget = 4,
  crbitm = 5,
  directbrtarget = 6,
  dispRI = 7,
  dispRIX = 8,
  dispSPE2 = 9,
  dispSPE4 = 10,
  dispSPE8 = 11,
  f32imm = 12,
  f64imm = 13,
  i16imm = 14,
  i1imm = 15,
  i32imm = 16,
  i64imm = 17,
  i8imm = 18,
  imm32SExt16 = 19,
  imm64SExt16 = 20,
  imm64ZExt32 = 21,
  memr = 22,
  memri = 23,
  memrix = 24,
  memrr = 25,
  pred = 26,
  ptr_rc_idx = 27,
  ptr_rc_nor0 = 28,
  s16imm = 29,
  s16imm64 = 30,
  s17imm = 31,
  s17imm64 = 32,
  s5imm = 33,
  spe2dis = 34,
  spe4dis = 35,
  spe8dis = 36,
  tlscall = 37,
  tlscall32 = 38,
  tlsgd = 39,
  tlsgd32 = 40,
  tlsreg = 41,
  tlsreg32 = 42,
  tocentry = 43,
  tocentry32 = 44,
  u12imm = 45,
  u16imm = 46,
  u16imm64 = 47,
  u1imm = 48,
  u2imm = 49,
  u3imm = 50,
  u4imm = 51,
  u5imm = 52,
  u6imm = 53,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace PPC
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace PPC {

enum IsVSXFMAAlt {
	IsVSXFMAAlt_1
};

enum RC {
	RC_0,
	RC_1
};

// getAltVSXFMAOpcode
int getAltVSXFMAOpcode(uint16_t Opcode) {
static const uint16_t getAltVSXFMAOpcodeTable[][2] = {
  { PPC::XSMADDADP, PPC::XSMADDMDP },
  { PPC::XSMSUBADP, PPC::XSMSUBMDP },
  { PPC::XSNMADDADP, PPC::XSNMADDMDP },
  { PPC::XSNMSUBADP, PPC::XSNMSUBMDP },
  { PPC::XVMADDADP, PPC::XVMADDMDP },
  { PPC::XVMADDASP, PPC::XVMADDMSP },
  { PPC::XVMSUBADP, PPC::XVMSUBMDP },
  { PPC::XVMSUBASP, PPC::XVMSUBMSP },
  { PPC::XVNMADDADP, PPC::XVNMADDMDP },
  { PPC::XVNMADDASP, PPC::XVNMADDMSP },
  { PPC::XVNMSUBADP, PPC::XVNMSUBMDP },
  { PPC::XVNMSUBASP, PPC::XVNMSUBMSP },
}; // End of getAltVSXFMAOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 12;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getAltVSXFMAOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getAltVSXFMAOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getAltVSXFMAOpcodeTable[mid][1];
}

// getNonRecordFormOpcode
int getNonRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getNonRecordFormOpcodeTable[][2] = {
  { PPC::ADD4o, PPC::ADD4 },
  { PPC::ADD8o, PPC::ADD8 },
  { PPC::ADDC8o, PPC::ADDC8 },
  { PPC::ADDCo, PPC::ADDC },
  { PPC::ADDE8o, PPC::ADDE8 },
  { PPC::ADDEo, PPC::ADDE },
  { PPC::ADDICo, PPC::ADDIC },
  { PPC::ADDME8o, PPC::ADDME8 },
  { PPC::ADDMEo, PPC::ADDME },
  { PPC::ADDZE8o, PPC::ADDZE8 },
  { PPC::ADDZEo, PPC::ADDZE },
  { PPC::AND8o, PPC::AND8 },
  { PPC::ANDC8o, PPC::ANDC8 },
  { PPC::ANDCo, PPC::ANDC },
  { PPC::ANDo, PPC::AND },
  { PPC::CNTLZDo, PPC::CNTLZD },
  { PPC::CNTLZW8o, PPC::CNTLZW8 },
  { PPC::CNTLZWo, PPC::CNTLZW },
  { PPC::DIVDUo, PPC::DIVDU },
  { PPC::DIVDo, PPC::DIVD },
  { PPC::DIVWUo, PPC::DIVWU },
  { PPC::DIVWo, PPC::DIVW },
  { PPC::EQV8o, PPC::EQV8 },
  { PPC::EQVo, PPC::EQV },
  { PPC::EXTSB8o, PPC::EXTSB8 },
  { PPC::EXTSBo, PPC::EXTSB },
  { PPC::EXTSH8o, PPC::EXTSH8 },
  { PPC::EXTSHo, PPC::EXTSH },
  { PPC::EXTSW_32_64o, PPC::EXTSW_32_64 },
  { PPC::EXTSWo, PPC::EXTSW },
  { PPC::FABSDo, PPC::FABSD },
  { PPC::FABSSo, PPC::FABSS },
  { PPC::FADDSo, PPC::FADDS },
  { PPC::FADDo, PPC::FADD },
  { PPC::FCFIDSo, PPC::FCFIDS },
  { PPC::FCFIDUSo, PPC::FCFIDUS },
  { PPC::FCFIDUo, PPC::FCFIDU },
  { PPC::FCFIDo, PPC::FCFID },
  { PPC::FCPSGNDo, PPC::FCPSGND },
  { PPC::FCPSGNSo, PPC::FCPSGNS },
  { PPC::FCTIDUZo, PPC::FCTIDUZ },
  { PPC::FCTIDZo, PPC::FCTIDZ },
  { PPC::FCTIDo, PPC::FCTID },
  { PPC::FCTIWUZo, PPC::FCTIWUZ },
  { PPC::FCTIWZo, PPC::FCTIWZ },
  { PPC::FCTIWo, PPC::FCTIW },
  { PPC::FDIVSo, PPC::FDIVS },
  { PPC::FDIVo, PPC::FDIV },
  { PPC::FMADDSo, PPC::FMADDS },
  { PPC::FMADDo, PPC::FMADD },
  { PPC::FMRo, PPC::FMR },
  { PPC::FMSUBSo, PPC::FMSUBS },
  { PPC::FMSUBo, PPC::FMSUB },
  { PPC::FMULSo, PPC::FMULS },
  { PPC::FMULo, PPC::FMUL },
  { PPC::FNABSDo, PPC::FNABSD },
  { PPC::FNABSSo, PPC::FNABSS },
  { PPC::FNEGDo, PPC::FNEGD },
  { PPC::FNEGSo, PPC::FNEGS },
  { PPC::FNMADDSo, PPC::FNMADDS },
  { PPC::FNMADDo, PPC::FNMADD },
  { PPC::FNMSUBSo, PPC::FNMSUBS },
  { PPC::FNMSUBo, PPC::FNMSUB },
  { PPC::FRESo, PPC::FRES },
  { PPC::FREo, PPC::FRE },
  { PPC::FRIMDo, PPC::FRIMD },
  { PPC::FRIMSo, PPC::FRIMS },
  { PPC::FRINDo, PPC::FRIND },
  { PPC::FRINSo, PPC::FRINS },
  { PPC::FRIPDo, PPC::FRIPD },
  { PPC::FRIPSo, PPC::FRIPS },
  { PPC::FRIZDo, PPC::FRIZD },
  { PPC::FRIZSo, PPC::FRIZS },
  { PPC::FRSPo, PPC::FRSP },
  { PPC::FRSQRTESo, PPC::FRSQRTES },
  { PPC::FRSQRTEo, PPC::FRSQRTE },
  { PPC::FSELDo, PPC::FSELD },
  { PPC::FSELSo, PPC::FSELS },
  { PPC::FSQRTSo, PPC::FSQRTS },
  { PPC::FSQRTo, PPC::FSQRT },
  { PPC::FSUBSo, PPC::FSUBS },
  { PPC::FSUBo, PPC::FSUB },
  { PPC::MULHDUo, PPC::MULHDU },
  { PPC::MULHDo, PPC::MULHD },
  { PPC::MULHWUo, PPC::MULHWU },
  { PPC::MULHWo, PPC::MULHW },
  { PPC::MULLDo, PPC::MULLD },
  { PPC::MULLWo, PPC::MULLW },
  { PPC::NAND8o, PPC::NAND8 },
  { PPC::NANDo, PPC::NAND },
  { PPC::NEG8o, PPC::NEG8 },
  { PPC::NEGo, PPC::NEG },
  { PPC::NOR8o, PPC::NOR8 },
  { PPC::NORo, PPC::NOR },
  { PPC::OR8o, PPC::OR8 },
  { PPC::ORC8o, PPC::ORC8 },
  { PPC::ORCo, PPC::ORC },
  { PPC::ORo, PPC::OR },
  { PPC::RLDCLo, PPC::RLDCL },
  { PPC::RLDCRo, PPC::RLDCR },
  { PPC::RLDICLo, PPC::RLDICL },
  { PPC::RLDICRo, PPC::RLDICR },
  { PPC::RLDICo, PPC::RLDIC },
  { PPC::RLDIMIo, PPC::RLDIMI },
  { PPC::RLWIMI8o, PPC::RLWIMI8 },
  { PPC::RLWIMIo, PPC::RLWIMI },
  { PPC::RLWINM8o, PPC::RLWINM8 },
  { PPC::RLWINMo, PPC::RLWINM },
  { PPC::RLWNM8o, PPC::RLWNM8 },
  { PPC::RLWNMo, PPC::RLWNM },
  { PPC::SLDo, PPC::SLD },
  { PPC::SLW8o, PPC::SLW8 },
  { PPC::SLWo, PPC::SLW },
  { PPC::SRADIo, PPC::SRADI },
  { PPC::SRADo, PPC::SRAD },
  { PPC::SRAWIo, PPC::SRAWI },
  { PPC::SRAWo, PPC::SRAW },
  { PPC::SRDo, PPC::SRD },
  { PPC::SRW8o, PPC::SRW8 },
  { PPC::SRWo, PPC::SRW },
  { PPC::SUBF8o, PPC::SUBF8 },
  { PPC::SUBFC8o, PPC::SUBFC8 },
  { PPC::SUBFCo, PPC::SUBFC },
  { PPC::SUBFE8o, PPC::SUBFE8 },
  { PPC::SUBFEo, PPC::SUBFE },
  { PPC::SUBFME8o, PPC::SUBFME8 },
  { PPC::SUBFMEo, PPC::SUBFME },
  { PPC::SUBFZE8o, PPC::SUBFZE8 },
  { PPC::SUBFZEo, PPC::SUBFZE },
  { PPC::SUBFo, PPC::SUBF },
  { PPC::XOR8o, PPC::XOR8 },
  { PPC::XORo, PPC::XOR },
}; // End of getNonRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 132;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getNonRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getNonRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getNonRecordFormOpcodeTable[mid][1];
}

// getRecordFormOpcode
int getRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getRecordFormOpcodeTable[][2] = {
  { PPC::ADD4, PPC::ADD4o },
  { PPC::ADD8, PPC::ADD8o },
  { PPC::ADDC, PPC::ADDCo },
  { PPC::ADDC8, PPC::ADDC8o },
  { PPC::ADDE, PPC::ADDEo },
  { PPC::ADDE8, PPC::ADDE8o },
  { PPC::ADDIC, PPC::ADDICo },
  { PPC::ADDME, PPC::ADDMEo },
  { PPC::ADDME8, PPC::ADDME8o },
  { PPC::ADDZE, PPC::ADDZEo },
  { PPC::ADDZE8, PPC::ADDZE8o },
  { PPC::AND, PPC::ANDo },
  { PPC::AND8, PPC::AND8o },
  { PPC::ANDC, PPC::ANDCo },
  { PPC::ANDC8, PPC::ANDC8o },
  { PPC::CNTLZD, PPC::CNTLZDo },
  { PPC::CNTLZW, PPC::CNTLZWo },
  { PPC::CNTLZW8, PPC::CNTLZW8o },
  { PPC::DIVD, PPC::DIVDo },
  { PPC::DIVDU, PPC::DIVDUo },
  { PPC::DIVW, PPC::DIVWo },
  { PPC::DIVWU, PPC::DIVWUo },
  { PPC::EQV, PPC::EQVo },
  { PPC::EQV8, PPC::EQV8o },
  { PPC::EXTSB, PPC::EXTSBo },
  { PPC::EXTSB8, PPC::EXTSB8o },
  { PPC::EXTSH, PPC::EXTSHo },
  { PPC::EXTSH8, PPC::EXTSH8o },
  { PPC::EXTSW, PPC::EXTSWo },
  { PPC::EXTSW_32_64, PPC::EXTSW_32_64o },
  { PPC::FABSD, PPC::FABSDo },
  { PPC::FABSS, PPC::FABSSo },
  { PPC::FADD, PPC::FADDo },
  { PPC::FADDS, PPC::FADDSo },
  { PPC::FCFID, PPC::FCFIDo },
  { PPC::FCFIDS, PPC::FCFIDSo },
  { PPC::FCFIDU, PPC::FCFIDUo },
  { PPC::FCFIDUS, PPC::FCFIDUSo },
  { PPC::FCPSGND, PPC::FCPSGNDo },
  { PPC::FCPSGNS, PPC::FCPSGNSo },
  { PPC::FCTID, PPC::FCTIDo },
  { PPC::FCTIDUZ, PPC::FCTIDUZo },
  { PPC::FCTIDZ, PPC::FCTIDZo },
  { PPC::FCTIW, PPC::FCTIWo },
  { PPC::FCTIWUZ, PPC::FCTIWUZo },
  { PPC::FCTIWZ, PPC::FCTIWZo },
  { PPC::FDIV, PPC::FDIVo },
  { PPC::FDIVS, PPC::FDIVSo },
  { PPC::FMADD, PPC::FMADDo },
  { PPC::FMADDS, PPC::FMADDSo },
  { PPC::FMR, PPC::FMRo },
  { PPC::FMSUB, PPC::FMSUBo },
  { PPC::FMSUBS, PPC::FMSUBSo },
  { PPC::FMUL, PPC::FMULo },
  { PPC::FMULS, PPC::FMULSo },
  { PPC::FNABSD, PPC::FNABSDo },
  { PPC::FNABSS, PPC::FNABSSo },
  { PPC::FNEGD, PPC::FNEGDo },
  { PPC::FNEGS, PPC::FNEGSo },
  { PPC::FNMADD, PPC::FNMADDo },
  { PPC::FNMADDS, PPC::FNMADDSo },
  { PPC::FNMSUB, PPC::FNMSUBo },
  { PPC::FNMSUBS, PPC::FNMSUBSo },
  { PPC::FRE, PPC::FREo },
  { PPC::FRES, PPC::FRESo },
  { PPC::FRIMD, PPC::FRIMDo },
  { PPC::FRIMS, PPC::FRIMSo },
  { PPC::FRIND, PPC::FRINDo },
  { PPC::FRINS, PPC::FRINSo },
  { PPC::FRIPD, PPC::FRIPDo },
  { PPC::FRIPS, PPC::FRIPSo },
  { PPC::FRIZD, PPC::FRIZDo },
  { PPC::FRIZS, PPC::FRIZSo },
  { PPC::FRSP, PPC::FRSPo },
  { PPC::FRSQRTE, PPC::FRSQRTEo },
  { PPC::FRSQRTES, PPC::FRSQRTESo },
  { PPC::FSELD, PPC::FSELDo },
  { PPC::FSELS, PPC::FSELSo },
  { PPC::FSQRT, PPC::FSQRTo },
  { PPC::FSQRTS, PPC::FSQRTSo },
  { PPC::FSUB, PPC::FSUBo },
  { PPC::FSUBS, PPC::FSUBSo },
  { PPC::MULHD, PPC::MULHDo },
  { PPC::MULHDU, PPC::MULHDUo },
  { PPC::MULHW, PPC::MULHWo },
  { PPC::MULHWU, PPC::MULHWUo },
  { PPC::MULLD, PPC::MULLDo },
  { PPC::MULLW, PPC::MULLWo },
  { PPC::NAND, PPC::NANDo },
  { PPC::NAND8, PPC::NAND8o },
  { PPC::NEG, PPC::NEGo },
  { PPC::NEG8, PPC::NEG8o },
  { PPC::NOR, PPC::NORo },
  { PPC::NOR8, PPC::NOR8o },
  { PPC::OR, PPC::ORo },
  { PPC::OR8, PPC::OR8o },
  { PPC::ORC, PPC::ORCo },
  { PPC::ORC8, PPC::ORC8o },
  { PPC::RLDCL, PPC::RLDCLo },
  { PPC::RLDCR, PPC::RLDCRo },
  { PPC::RLDIC, PPC::RLDICo },
  { PPC::RLDICL, PPC::RLDICLo },
  { PPC::RLDICR, PPC::RLDICRo },
  { PPC::RLDIMI, PPC::RLDIMIo },
  { PPC::RLWIMI, PPC::RLWIMIo },
  { PPC::RLWIMI8, PPC::RLWIMI8o },
  { PPC::RLWINM, PPC::RLWINMo },
  { PPC::RLWINM8, PPC::RLWINM8o },
  { PPC::RLWNM, PPC::RLWNMo },
  { PPC::RLWNM8, PPC::RLWNM8o },
  { PPC::SLD, PPC::SLDo },
  { PPC::SLW, PPC::SLWo },
  { PPC::SLW8, PPC::SLW8o },
  { PPC::SRAD, PPC::SRADo },
  { PPC::SRADI, PPC::SRADIo },
  { PPC::SRAW, PPC::SRAWo },
  { PPC::SRAWI, PPC::SRAWIo },
  { PPC::SRD, PPC::SRDo },
  { PPC::SRW, PPC::SRWo },
  { PPC::SRW8, PPC::SRW8o },
  { PPC::SUBF, PPC::SUBFo },
  { PPC::SUBF8, PPC::SUBF8o },
  { PPC::SUBFC, PPC::SUBFCo },
  { PPC::SUBFC8, PPC::SUBFC8o },
  { PPC::SUBFE, PPC::SUBFEo },
  { PPC::SUBFE8, PPC::SUBFE8o },
  { PPC::SUBFME, PPC::SUBFMEo },
  { PPC::SUBFME8, PPC::SUBFME8o },
  { PPC::SUBFZE, PPC::SUBFZEo },
  { PPC::SUBFZE8, PPC::SUBFZE8o },
  { PPC::XOR, PPC::XORo },
  { PPC::XOR8, PPC::XOR8o },
}; // End of getRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 132;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getRecordFormOpcodeTable[mid][1];
}

} // End PPC namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

