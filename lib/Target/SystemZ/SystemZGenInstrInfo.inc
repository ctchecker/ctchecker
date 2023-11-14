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

namespace SystemZ {
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
    A	= 22,
    ADB	= 23,
    ADBR	= 24,
    ADJCALLSTACKDOWN	= 25,
    ADJCALLSTACKUP	= 26,
    ADJDYNALLOC	= 27,
    AEB	= 28,
    AEBR	= 29,
    AEXT128_64	= 30,
    AFI	= 31,
    AFIMux	= 32,
    AG	= 33,
    AGF	= 34,
    AGFI	= 35,
    AGFR	= 36,
    AGHI	= 37,
    AGHIK	= 38,
    AGR	= 39,
    AGRK	= 40,
    AGSI	= 41,
    AH	= 42,
    AHI	= 43,
    AHIK	= 44,
    AHIMux	= 45,
    AHIMuxK	= 46,
    AHY	= 47,
    AIH	= 48,
    AL	= 49,
    ALC	= 50,
    ALCG	= 51,
    ALCGR	= 52,
    ALCR	= 53,
    ALFI	= 54,
    ALG	= 55,
    ALGF	= 56,
    ALGFI	= 57,
    ALGFR	= 58,
    ALGHSIK	= 59,
    ALGR	= 60,
    ALGRK	= 61,
    ALHSIK	= 62,
    ALR	= 63,
    ALRK	= 64,
    ALY	= 65,
    AR	= 66,
    ARK	= 67,
    ASI	= 68,
    ATOMIC_CMP_SWAPW	= 69,
    ATOMIC_LOADW_AFI	= 70,
    ATOMIC_LOADW_AR	= 71,
    ATOMIC_LOADW_MAX	= 72,
    ATOMIC_LOADW_MIN	= 73,
    ATOMIC_LOADW_NILH	= 74,
    ATOMIC_LOADW_NILHi	= 75,
    ATOMIC_LOADW_NR	= 76,
    ATOMIC_LOADW_NRi	= 77,
    ATOMIC_LOADW_OILH	= 78,
    ATOMIC_LOADW_OR	= 79,
    ATOMIC_LOADW_SR	= 80,
    ATOMIC_LOADW_UMAX	= 81,
    ATOMIC_LOADW_UMIN	= 82,
    ATOMIC_LOADW_XILF	= 83,
    ATOMIC_LOADW_XR	= 84,
    ATOMIC_LOAD_AFI	= 85,
    ATOMIC_LOAD_AGFI	= 86,
    ATOMIC_LOAD_AGHI	= 87,
    ATOMIC_LOAD_AGR	= 88,
    ATOMIC_LOAD_AHI	= 89,
    ATOMIC_LOAD_AR	= 90,
    ATOMIC_LOAD_MAX_32	= 91,
    ATOMIC_LOAD_MAX_64	= 92,
    ATOMIC_LOAD_MIN_32	= 93,
    ATOMIC_LOAD_MIN_64	= 94,
    ATOMIC_LOAD_NGR	= 95,
    ATOMIC_LOAD_NGRi	= 96,
    ATOMIC_LOAD_NIHF64	= 97,
    ATOMIC_LOAD_NIHF64i	= 98,
    ATOMIC_LOAD_NIHH64	= 99,
    ATOMIC_LOAD_NIHH64i	= 100,
    ATOMIC_LOAD_NIHL64	= 101,
    ATOMIC_LOAD_NIHL64i	= 102,
    ATOMIC_LOAD_NILF	= 103,
    ATOMIC_LOAD_NILF64	= 104,
    ATOMIC_LOAD_NILF64i	= 105,
    ATOMIC_LOAD_NILFi	= 106,
    ATOMIC_LOAD_NILH	= 107,
    ATOMIC_LOAD_NILH64	= 108,
    ATOMIC_LOAD_NILH64i	= 109,
    ATOMIC_LOAD_NILHi	= 110,
    ATOMIC_LOAD_NILL	= 111,
    ATOMIC_LOAD_NILL64	= 112,
    ATOMIC_LOAD_NILL64i	= 113,
    ATOMIC_LOAD_NILLi	= 114,
    ATOMIC_LOAD_NR	= 115,
    ATOMIC_LOAD_NRi	= 116,
    ATOMIC_LOAD_OGR	= 117,
    ATOMIC_LOAD_OIHF64	= 118,
    ATOMIC_LOAD_OIHH64	= 119,
    ATOMIC_LOAD_OIHL64	= 120,
    ATOMIC_LOAD_OILF	= 121,
    ATOMIC_LOAD_OILF64	= 122,
    ATOMIC_LOAD_OILH	= 123,
    ATOMIC_LOAD_OILH64	= 124,
    ATOMIC_LOAD_OILL	= 125,
    ATOMIC_LOAD_OILL64	= 126,
    ATOMIC_LOAD_OR	= 127,
    ATOMIC_LOAD_SGR	= 128,
    ATOMIC_LOAD_SR	= 129,
    ATOMIC_LOAD_UMAX_32	= 130,
    ATOMIC_LOAD_UMAX_64	= 131,
    ATOMIC_LOAD_UMIN_32	= 132,
    ATOMIC_LOAD_UMIN_64	= 133,
    ATOMIC_LOAD_XGR	= 134,
    ATOMIC_LOAD_XIHF64	= 135,
    ATOMIC_LOAD_XILF	= 136,
    ATOMIC_LOAD_XILF64	= 137,
    ATOMIC_LOAD_XR	= 138,
    ATOMIC_SWAPW	= 139,
    ATOMIC_SWAP_32	= 140,
    ATOMIC_SWAP_64	= 141,
    AXBR	= 142,
    AY	= 143,
    AsmBCR	= 144,
    AsmBRC	= 145,
    AsmBRCL	= 146,
    AsmCGIJ	= 147,
    AsmCGRJ	= 148,
    AsmCIJ	= 149,
    AsmCLGIJ	= 150,
    AsmCLGRJ	= 151,
    AsmCLIJ	= 152,
    AsmCLRJ	= 153,
    AsmCRJ	= 154,
    AsmEBR	= 155,
    AsmEJ	= 156,
    AsmEJG	= 157,
    AsmELOC	= 158,
    AsmELOCG	= 159,
    AsmELOCGR	= 160,
    AsmELOCR	= 161,
    AsmESTOC	= 162,
    AsmESTOCG	= 163,
    AsmHBR	= 164,
    AsmHEBR	= 165,
    AsmHEJ	= 166,
    AsmHEJG	= 167,
    AsmHELOC	= 168,
    AsmHELOCG	= 169,
    AsmHELOCGR	= 170,
    AsmHELOCR	= 171,
    AsmHESTOC	= 172,
    AsmHESTOCG	= 173,
    AsmHJ	= 174,
    AsmHJG	= 175,
    AsmHLOC	= 176,
    AsmHLOCG	= 177,
    AsmHLOCGR	= 178,
    AsmHLOCR	= 179,
    AsmHSTOC	= 180,
    AsmHSTOCG	= 181,
    AsmJEAltCGI	= 182,
    AsmJEAltCGR	= 183,
    AsmJEAltCI	= 184,
    AsmJEAltCLGI	= 185,
    AsmJEAltCLGR	= 186,
    AsmJEAltCLI	= 187,
    AsmJEAltCLR	= 188,
    AsmJEAltCR	= 189,
    AsmJECGI	= 190,
    AsmJECGR	= 191,
    AsmJECI	= 192,
    AsmJECLGI	= 193,
    AsmJECLGR	= 194,
    AsmJECLI	= 195,
    AsmJECLR	= 196,
    AsmJECR	= 197,
    AsmJHAltCGI	= 198,
    AsmJHAltCGR	= 199,
    AsmJHAltCI	= 200,
    AsmJHAltCLGI	= 201,
    AsmJHAltCLGR	= 202,
    AsmJHAltCLI	= 203,
    AsmJHAltCLR	= 204,
    AsmJHAltCR	= 205,
    AsmJHCGI	= 206,
    AsmJHCGR	= 207,
    AsmJHCI	= 208,
    AsmJHCLGI	= 209,
    AsmJHCLGR	= 210,
    AsmJHCLI	= 211,
    AsmJHCLR	= 212,
    AsmJHCR	= 213,
    AsmJHEAltCGI	= 214,
    AsmJHEAltCGR	= 215,
    AsmJHEAltCI	= 216,
    AsmJHEAltCLGI	= 217,
    AsmJHEAltCLGR	= 218,
    AsmJHEAltCLI	= 219,
    AsmJHEAltCLR	= 220,
    AsmJHEAltCR	= 221,
    AsmJHECGI	= 222,
    AsmJHECGR	= 223,
    AsmJHECI	= 224,
    AsmJHECLGI	= 225,
    AsmJHECLGR	= 226,
    AsmJHECLI	= 227,
    AsmJHECLR	= 228,
    AsmJHECR	= 229,
    AsmJLAltCGI	= 230,
    AsmJLAltCGR	= 231,
    AsmJLAltCI	= 232,
    AsmJLAltCLGI	= 233,
    AsmJLAltCLGR	= 234,
    AsmJLAltCLI	= 235,
    AsmJLAltCLR	= 236,
    AsmJLAltCR	= 237,
    AsmJLCGI	= 238,
    AsmJLCGR	= 239,
    AsmJLCI	= 240,
    AsmJLCLGI	= 241,
    AsmJLCLGR	= 242,
    AsmJLCLI	= 243,
    AsmJLCLR	= 244,
    AsmJLCR	= 245,
    AsmJLEAltCGI	= 246,
    AsmJLEAltCGR	= 247,
    AsmJLEAltCI	= 248,
    AsmJLEAltCLGI	= 249,
    AsmJLEAltCLGR	= 250,
    AsmJLEAltCLI	= 251,
    AsmJLEAltCLR	= 252,
    AsmJLEAltCR	= 253,
    AsmJLECGI	= 254,
    AsmJLECGR	= 255,
    AsmJLECI	= 256,
    AsmJLECLGI	= 257,
    AsmJLECLGR	= 258,
    AsmJLECLI	= 259,
    AsmJLECLR	= 260,
    AsmJLECR	= 261,
    AsmJLHAltCGI	= 262,
    AsmJLHAltCGR	= 263,
    AsmJLHAltCI	= 264,
    AsmJLHAltCLGI	= 265,
    AsmJLHAltCLGR	= 266,
    AsmJLHAltCLI	= 267,
    AsmJLHAltCLR	= 268,
    AsmJLHAltCR	= 269,
    AsmJLHCGI	= 270,
    AsmJLHCGR	= 271,
    AsmJLHCI	= 272,
    AsmJLHCLGI	= 273,
    AsmJLHCLGR	= 274,
    AsmJLHCLI	= 275,
    AsmJLHCLR	= 276,
    AsmJLHCR	= 277,
    AsmLBR	= 278,
    AsmLEBR	= 279,
    AsmLEJ	= 280,
    AsmLEJG	= 281,
    AsmLELOC	= 282,
    AsmLELOCG	= 283,
    AsmLELOCGR	= 284,
    AsmLELOCR	= 285,
    AsmLESTOC	= 286,
    AsmLESTOCG	= 287,
    AsmLHBR	= 288,
    AsmLHJ	= 289,
    AsmLHJG	= 290,
    AsmLHLOC	= 291,
    AsmLHLOCG	= 292,
    AsmLHLOCGR	= 293,
    AsmLHLOCR	= 294,
    AsmLHSTOC	= 295,
    AsmLHSTOCG	= 296,
    AsmLJ	= 297,
    AsmLJG	= 298,
    AsmLLOC	= 299,
    AsmLLOCG	= 300,
    AsmLLOCGR	= 301,
    AsmLLOCR	= 302,
    AsmLOC	= 303,
    AsmLOCG	= 304,
    AsmLOCGR	= 305,
    AsmLOCR	= 306,
    AsmLSTOC	= 307,
    AsmLSTOCG	= 308,
    AsmNEBR	= 309,
    AsmNEJ	= 310,
    AsmNEJG	= 311,
    AsmNELOC	= 312,
    AsmNELOCG	= 313,
    AsmNELOCGR	= 314,
    AsmNELOCR	= 315,
    AsmNESTOC	= 316,
    AsmNESTOCG	= 317,
    AsmNHBR	= 318,
    AsmNHEBR	= 319,
    AsmNHEJ	= 320,
    AsmNHEJG	= 321,
    AsmNHELOC	= 322,
    AsmNHELOCG	= 323,
    AsmNHELOCGR	= 324,
    AsmNHELOCR	= 325,
    AsmNHESTOC	= 326,
    AsmNHESTOCG	= 327,
    AsmNHJ	= 328,
    AsmNHJG	= 329,
    AsmNHLOC	= 330,
    AsmNHLOCG	= 331,
    AsmNHLOCGR	= 332,
    AsmNHLOCR	= 333,
    AsmNHSTOC	= 334,
    AsmNHSTOCG	= 335,
    AsmNLBR	= 336,
    AsmNLEBR	= 337,
    AsmNLEJ	= 338,
    AsmNLEJG	= 339,
    AsmNLELOC	= 340,
    AsmNLELOCG	= 341,
    AsmNLELOCGR	= 342,
    AsmNLELOCR	= 343,
    AsmNLESTOC	= 344,
    AsmNLESTOCG	= 345,
    AsmNLHBR	= 346,
    AsmNLHJ	= 347,
    AsmNLHJG	= 348,
    AsmNLHLOC	= 349,
    AsmNLHLOCG	= 350,
    AsmNLHLOCGR	= 351,
    AsmNLHLOCR	= 352,
    AsmNLHSTOC	= 353,
    AsmNLHSTOCG	= 354,
    AsmNLJ	= 355,
    AsmNLJG	= 356,
    AsmNLLOC	= 357,
    AsmNLLOCG	= 358,
    AsmNLLOCGR	= 359,
    AsmNLLOCR	= 360,
    AsmNLSTOC	= 361,
    AsmNLSTOCG	= 362,
    AsmNOBR	= 363,
    AsmNOJ	= 364,
    AsmNOJG	= 365,
    AsmNOLOC	= 366,
    AsmNOLOCG	= 367,
    AsmNOLOCGR	= 368,
    AsmNOLOCR	= 369,
    AsmNOSTOC	= 370,
    AsmNOSTOCG	= 371,
    AsmOBR	= 372,
    AsmOJ	= 373,
    AsmOJG	= 374,
    AsmOLOC	= 375,
    AsmOLOCG	= 376,
    AsmOLOCGR	= 377,
    AsmOLOCR	= 378,
    AsmOSTOC	= 379,
    AsmOSTOCG	= 380,
    AsmSTOC	= 381,
    AsmSTOCG	= 382,
    BASR	= 383,
    BR	= 384,
    BRAS	= 385,
    BRASL	= 386,
    BRC	= 387,
    BRCL	= 388,
    BRCT	= 389,
    BRCTG	= 390,
    C	= 391,
    CDB	= 392,
    CDBR	= 393,
    CDFBR	= 394,
    CDGBR	= 395,
    CDLFBR	= 396,
    CDLGBR	= 397,
    CEB	= 398,
    CEBR	= 399,
    CEFBR	= 400,
    CEGBR	= 401,
    CELFBR	= 402,
    CELGBR	= 403,
    CFDBR	= 404,
    CFEBR	= 405,
    CFI	= 406,
    CFIMux	= 407,
    CFXBR	= 408,
    CG	= 409,
    CGDBR	= 410,
    CGEBR	= 411,
    CGF	= 412,
    CGFI	= 413,
    CGFR	= 414,
    CGFRL	= 415,
    CGH	= 416,
    CGHI	= 417,
    CGHRL	= 418,
    CGHSI	= 419,
    CGIJ	= 420,
    CGR	= 421,
    CGRJ	= 422,
    CGRL	= 423,
    CGXBR	= 424,
    CH	= 425,
    CHF	= 426,
    CHHSI	= 427,
    CHI	= 428,
    CHRL	= 429,
    CHSI	= 430,
    CHY	= 431,
    CIH	= 432,
    CIJ	= 433,
    CL	= 434,
    CLC	= 435,
    CLCLoop	= 436,
    CLCSequence	= 437,
    CLFDBR	= 438,
    CLFEBR	= 439,
    CLFHSI	= 440,
    CLFI	= 441,
    CLFIMux	= 442,
    CLFXBR	= 443,
    CLG	= 444,
    CLGDBR	= 445,
    CLGEBR	= 446,
    CLGF	= 447,
    CLGFI	= 448,
    CLGFR	= 449,
    CLGFRL	= 450,
    CLGHRL	= 451,
    CLGHSI	= 452,
    CLGIJ	= 453,
    CLGR	= 454,
    CLGRJ	= 455,
    CLGRL	= 456,
    CLGXBR	= 457,
    CLHF	= 458,
    CLHHSI	= 459,
    CLHRL	= 460,
    CLI	= 461,
    CLIH	= 462,
    CLIJ	= 463,
    CLIY	= 464,
    CLMux	= 465,
    CLR	= 466,
    CLRJ	= 467,
    CLRL	= 468,
    CLST	= 469,
    CLSTLoop	= 470,
    CLY	= 471,
    CMux	= 472,
    CPSDRdd	= 473,
    CPSDRds	= 474,
    CPSDRsd	= 475,
    CPSDRss	= 476,
    CR	= 477,
    CRJ	= 478,
    CRL	= 479,
    CS	= 480,
    CSG	= 481,
    CSY	= 482,
    CXBR	= 483,
    CXFBR	= 484,
    CXGBR	= 485,
    CXLFBR	= 486,
    CXLGBR	= 487,
    CY	= 488,
    CallBASR	= 489,
    CallBR	= 490,
    CallBRASL	= 491,
    CallJG	= 492,
    CondStore16	= 493,
    CondStore16Inv	= 494,
    CondStore16Mux	= 495,
    CondStore16MuxInv	= 496,
    CondStore32	= 497,
    CondStore32Inv	= 498,
    CondStore64	= 499,
    CondStore64Inv	= 500,
    CondStore8	= 501,
    CondStore8Inv	= 502,
    CondStore8Mux	= 503,
    CondStore8MuxInv	= 504,
    CondStoreF32	= 505,
    CondStoreF32Inv	= 506,
    CondStoreF64	= 507,
    CondStoreF64Inv	= 508,
    DDB	= 509,
    DDBR	= 510,
    DEB	= 511,
    DEBR	= 512,
    DL	= 513,
    DLG	= 514,
    DLGR	= 515,
    DLR	= 516,
    DSG	= 517,
    DSGF	= 518,
    DSGFR	= 519,
    DSGR	= 520,
    DXBR	= 521,
    EAR	= 522,
    ETND	= 523,
    FIDBR	= 524,
    FIDBRA	= 525,
    FIEBR	= 526,
    FIEBRA	= 527,
    FIXBR	= 528,
    FIXBRA	= 529,
    FLOGR	= 530,
    GOT	= 531,
    IC	= 532,
    IC32	= 533,
    IC32Y	= 534,
    ICY	= 535,
    IIFMux	= 536,
    IIHF	= 537,
    IIHF64	= 538,
    IIHH	= 539,
    IIHH64	= 540,
    IIHL	= 541,
    IIHL64	= 542,
    IIHMux	= 543,
    IILF	= 544,
    IILF64	= 545,
    IILH	= 546,
    IILH64	= 547,
    IILL	= 548,
    IILL64	= 549,
    IILMux	= 550,
    IPM	= 551,
    J	= 552,
    JG	= 553,
    L	= 554,
    L128	= 555,
    LA	= 556,
    LAA	= 557,
    LAAG	= 558,
    LAAL	= 559,
    LAALG	= 560,
    LAN	= 561,
    LANG	= 562,
    LAO	= 563,
    LAOG	= 564,
    LARL	= 565,
    LAX	= 566,
    LAXG	= 567,
    LAY	= 568,
    LB	= 569,
    LBH	= 570,
    LBMux	= 571,
    LBR	= 572,
    LCDBR	= 573,
    LCEBR	= 574,
    LCGFR	= 575,
    LCGR	= 576,
    LCR	= 577,
    LCXBR	= 578,
    LD	= 579,
    LDEB	= 580,
    LDEBR	= 581,
    LDGR	= 582,
    LDR	= 583,
    LDXBR	= 584,
    LDXBRA	= 585,
    LDY	= 586,
    LE	= 587,
    LEDBR	= 588,
    LEDBRA	= 589,
    LER	= 590,
    LEXBR	= 591,
    LEXBRA	= 592,
    LEY	= 593,
    LFH	= 594,
    LG	= 595,
    LGB	= 596,
    LGBR	= 597,
    LGDR	= 598,
    LGF	= 599,
    LGFI	= 600,
    LGFR	= 601,
    LGFRL	= 602,
    LGH	= 603,
    LGHI	= 604,
    LGHR	= 605,
    LGHRL	= 606,
    LGR	= 607,
    LGRL	= 608,
    LH	= 609,
    LHH	= 610,
    LHI	= 611,
    LHIMux	= 612,
    LHMux	= 613,
    LHR	= 614,
    LHRL	= 615,
    LHY	= 616,
    LLC	= 617,
    LLCH	= 618,
    LLCMux	= 619,
    LLCR	= 620,
    LLCRMux	= 621,
    LLGC	= 622,
    LLGCR	= 623,
    LLGF	= 624,
    LLGFR	= 625,
    LLGFRL	= 626,
    LLGH	= 627,
    LLGHR	= 628,
    LLGHRL	= 629,
    LLH	= 630,
    LLHH	= 631,
    LLHMux	= 632,
    LLHR	= 633,
    LLHRL	= 634,
    LLHRMux	= 635,
    LLIHF	= 636,
    LLIHH	= 637,
    LLIHL	= 638,
    LLILF	= 639,
    LLILH	= 640,
    LLILL	= 641,
    LMG	= 642,
    LMux	= 643,
    LNDBR	= 644,
    LNEBR	= 645,
    LNGFR	= 646,
    LNGR	= 647,
    LNR	= 648,
    LNXBR	= 649,
    LOC	= 650,
    LOCG	= 651,
    LOCGR	= 652,
    LOCR	= 653,
    LPDBR	= 654,
    LPEBR	= 655,
    LPGFR	= 656,
    LPGR	= 657,
    LPR	= 658,
    LPXBR	= 659,
    LR	= 660,
    LRL	= 661,
    LRMux	= 662,
    LRV	= 663,
    LRVG	= 664,
    LRVGR	= 665,
    LRVR	= 666,
    LT	= 667,
    LTDBR	= 668,
    LTDBRCompare	= 669,
    LTEBR	= 670,
    LTEBRCompare	= 671,
    LTG	= 672,
    LTGF	= 673,
    LTGFR	= 674,
    LTGR	= 675,
    LTR	= 676,
    LTXBR	= 677,
    LTXBRCompare	= 678,
    LX	= 679,
    LXDB	= 680,
    LXDBR	= 681,
    LXEB	= 682,
    LXEBR	= 683,
    LXR	= 684,
    LY	= 685,
    LZDR	= 686,
    LZER	= 687,
    LZXR	= 688,
    MADB	= 689,
    MADBR	= 690,
    MAEB	= 691,
    MAEBR	= 692,
    MDB	= 693,
    MDBR	= 694,
    MDEB	= 695,
    MDEBR	= 696,
    MEEB	= 697,
    MEEBR	= 698,
    MGHI	= 699,
    MH	= 700,
    MHI	= 701,
    MHY	= 702,
    MLG	= 703,
    MLGR	= 704,
    MS	= 705,
    MSDB	= 706,
    MSDBR	= 707,
    MSEB	= 708,
    MSEBR	= 709,
    MSFI	= 710,
    MSG	= 711,
    MSGF	= 712,
    MSGFI	= 713,
    MSGFR	= 714,
    MSGR	= 715,
    MSR	= 716,
    MSY	= 717,
    MVC	= 718,
    MVCLoop	= 719,
    MVCSequence	= 720,
    MVGHI	= 721,
    MVHHI	= 722,
    MVHI	= 723,
    MVI	= 724,
    MVIY	= 725,
    MVST	= 726,
    MVSTLoop	= 727,
    MXBR	= 728,
    MXDB	= 729,
    MXDBR	= 730,
    N	= 731,
    NC	= 732,
    NCLoop	= 733,
    NCSequence	= 734,
    NG	= 735,
    NGR	= 736,
    NGRK	= 737,
    NI	= 738,
    NIFMux	= 739,
    NIHF	= 740,
    NIHF64	= 741,
    NIHH	= 742,
    NIHH64	= 743,
    NIHL	= 744,
    NIHL64	= 745,
    NIHMux	= 746,
    NILF	= 747,
    NILF64	= 748,
    NILH	= 749,
    NILH64	= 750,
    NILL	= 751,
    NILL64	= 752,
    NILMux	= 753,
    NIY	= 754,
    NR	= 755,
    NRK	= 756,
    NTSTG	= 757,
    NY	= 758,
    O	= 759,
    OC	= 760,
    OCLoop	= 761,
    OCSequence	= 762,
    OG	= 763,
    OGR	= 764,
    OGRK	= 765,
    OI	= 766,
    OIFMux	= 767,
    OIHF	= 768,
    OIHF64	= 769,
    OIHH	= 770,
    OIHH64	= 771,
    OIHL	= 772,
    OIHL64	= 773,
    OIHMux	= 774,
    OILF	= 775,
    OILF64	= 776,
    OILH	= 777,
    OILH64	= 778,
    OILL	= 779,
    OILL64	= 780,
    OILMux	= 781,
    OIY	= 782,
    OR	= 783,
    ORK	= 784,
    OY	= 785,
    PFD	= 786,
    PFDRL	= 787,
    POPCNT	= 788,
    PPA	= 789,
    RISBG	= 790,
    RISBG32	= 791,
    RISBGN	= 792,
    RISBHG	= 793,
    RISBHH	= 794,
    RISBHL	= 795,
    RISBLG	= 796,
    RISBLH	= 797,
    RISBLL	= 798,
    RISBMux	= 799,
    RLL	= 800,
    RLLG	= 801,
    RNSBG	= 802,
    ROSBG	= 803,
    RXSBG	= 804,
    Return	= 805,
    S	= 806,
    SDB	= 807,
    SDBR	= 808,
    SEB	= 809,
    SEBR	= 810,
    SG	= 811,
    SGF	= 812,
    SGFR	= 813,
    SGR	= 814,
    SGRK	= 815,
    SH	= 816,
    SHY	= 817,
    SL	= 818,
    SLB	= 819,
    SLBG	= 820,
    SLBR	= 821,
    SLFI	= 822,
    SLG	= 823,
    SLGBR	= 824,
    SLGF	= 825,
    SLGFI	= 826,
    SLGFR	= 827,
    SLGR	= 828,
    SLGRK	= 829,
    SLL	= 830,
    SLLG	= 831,
    SLLK	= 832,
    SLR	= 833,
    SLRK	= 834,
    SLY	= 835,
    SQDB	= 836,
    SQDBR	= 837,
    SQEB	= 838,
    SQEBR	= 839,
    SQXBR	= 840,
    SR	= 841,
    SRA	= 842,
    SRAG	= 843,
    SRAK	= 844,
    SRK	= 845,
    SRL	= 846,
    SRLG	= 847,
    SRLK	= 848,
    SRST	= 849,
    SRSTLoop	= 850,
    ST	= 851,
    ST128	= 852,
    STC	= 853,
    STCH	= 854,
    STCMux	= 855,
    STCY	= 856,
    STD	= 857,
    STDY	= 858,
    STE	= 859,
    STEY	= 860,
    STFH	= 861,
    STG	= 862,
    STGRL	= 863,
    STH	= 864,
    STHH	= 865,
    STHMux	= 866,
    STHRL	= 867,
    STHY	= 868,
    STMG	= 869,
    STMux	= 870,
    STOC	= 871,
    STOCG	= 872,
    STRL	= 873,
    STRV	= 874,
    STRVG	= 875,
    STX	= 876,
    STY	= 877,
    SXBR	= 878,
    SY	= 879,
    Select32	= 880,
    Select32Mux	= 881,
    Select64	= 882,
    SelectF128	= 883,
    SelectF32	= 884,
    SelectF64	= 885,
    Serialize	= 886,
    TABORT	= 887,
    TBEGIN	= 888,
    TBEGINC	= 889,
    TBEGIN_nofloat	= 890,
    TEND	= 891,
    TLS_GDCALL	= 892,
    TLS_LDCALL	= 893,
    TM	= 894,
    TMHH	= 895,
    TMHH64	= 896,
    TMHL	= 897,
    TMHL64	= 898,
    TMHMux	= 899,
    TMLH	= 900,
    TMLH64	= 901,
    TMLL	= 902,
    TMLL64	= 903,
    TMLMux	= 904,
    TMY	= 905,
    X	= 906,
    XC	= 907,
    XCLoop	= 908,
    XCSequence	= 909,
    XG	= 910,
    XGR	= 911,
    XGRK	= 912,
    XI	= 913,
    XIFMux	= 914,
    XIHF	= 915,
    XIHF64	= 916,
    XILF	= 917,
    XILF64	= 918,
    XIY	= 919,
    XR	= 920,
    XRK	= 921,
    XY	= 922,
    ZEXT128_32	= 923,
    ZEXT128_64	= 924,
    INSTRUCTION_LIST_END = 925
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // End Sched namespace
} // End SystemZ namespace
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

static const uint16_t ImplicitList1[] = { SystemZ::CC, 0 };
static const uint16_t ImplicitList2[] = { SystemZ::R0L, 0 };
static const uint16_t ImplicitList3[] = { SystemZ::R14D, SystemZ::CC, 0 };
static const uint16_t ImplicitList4[] = { SystemZ::R1D, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo97[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GRH32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GRX32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SystemZInsts[] = {
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
  { 22,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c88ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #22 = A
  { 23,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fd08ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #23 = ADB
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #24 = ADBR
  { 25,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #25 = ADJCALLSTACKDOWN
  { 26,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #26 = ADJCALLSTACKUP
  { 27,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #27 = ADJDYNALLOC
  { 28,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fc88ULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #28 = AEB
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #29 = AEBR
  { 30,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #30 = AEXT128_64
  { 31,	3,	1,	0,	6,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #31 = AFI
  { 32,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #32 = AFIMux
  { 33,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23d0cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #33 = AG
  { 34,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #34 = AGF
  { 35,	3,	1,	0,	6,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #35 = AGFI
  { 36,	3,	1,	0,	4,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #36 = AGFR
  { 37,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #37 = AGHI
  { 38,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #38 = AGHIK
  { 39,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #39 = AGR
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #40 = AGRK
  { 41,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x23c04ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #41 = AGSI
  { 42,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c48ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #42 = AH
  { 43,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #43 = AHI
  { 44,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo28,0,nullptr },  // Inst #44 = AHIK
  { 45,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #45 = AHIMux
  { 46,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo29,0,nullptr },  // Inst #46 = AHIMuxK
  { 47,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c4cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #47 = AHY
  { 48,	3,	1,	0,	6,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #48 = AIH
  { 49,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #49 = AL
  { 50,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, ImplicitList1, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #50 = ALC
  { 51,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, ImplicitList1, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #51 = ALCG
  { 52,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #52 = ALCGR
  { 53,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #53 = ALCR
  { 54,	3,	1,	0,	6,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #54 = ALFI
  { 55,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #55 = ALG
  { 56,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #56 = ALGF
  { 57,	3,	1,	0,	6,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #57 = ALGFI
  { 58,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #58 = ALGFR
  { 59,	3,	1,	0,	6,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo24,0,nullptr },  // Inst #59 = ALGHSIK
  { 60,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #60 = ALGR
  { 61,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #61 = ALGRK
  { 62,	3,	1,	0,	6,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28,0,nullptr },  // Inst #62 = ALHSIK
  { 63,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #63 = ALR
  { 64,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #64 = ALRK
  { 65,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #65 = ALY
  { 66,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #66 = AR
  { 67,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #67 = ARK
  { 68,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x23c04ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #68 = ASI
  { 69,	8,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo33,0,nullptr },  // Inst #69 = ATOMIC_CMP_SWAPW
  { 70,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #70 = ATOMIC_LOADW_AFI
  { 71,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #71 = ATOMIC_LOADW_AR
  { 72,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #72 = ATOMIC_LOADW_MAX
  { 73,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #73 = ATOMIC_LOADW_MIN
  { 74,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #74 = ATOMIC_LOADW_NILH
  { 75,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #75 = ATOMIC_LOADW_NILHi
  { 76,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #76 = ATOMIC_LOADW_NR
  { 77,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #77 = ATOMIC_LOADW_NRi
  { 78,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #78 = ATOMIC_LOADW_OILH
  { 79,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #79 = ATOMIC_LOADW_OR
  { 80,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #80 = ATOMIC_LOADW_SR
  { 81,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #81 = ATOMIC_LOADW_UMAX
  { 82,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #82 = ATOMIC_LOADW_UMIN
  { 83,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo34,0,nullptr },  // Inst #83 = ATOMIC_LOADW_XILF
  { 84,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #84 = ATOMIC_LOADW_XR
  { 85,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #85 = ATOMIC_LOAD_AFI
  { 86,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #86 = ATOMIC_LOAD_AGFI
  { 87,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #87 = ATOMIC_LOAD_AGHI
  { 88,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #88 = ATOMIC_LOAD_AGR
  { 89,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #89 = ATOMIC_LOAD_AHI
  { 90,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #90 = ATOMIC_LOAD_AR
  { 91,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #91 = ATOMIC_LOAD_MAX_32
  { 92,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #92 = ATOMIC_LOAD_MAX_64
  { 93,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #93 = ATOMIC_LOAD_MIN_32
  { 94,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #94 = ATOMIC_LOAD_MIN_64
  { 95,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #95 = ATOMIC_LOAD_NGR
  { 96,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #96 = ATOMIC_LOAD_NGRi
  { 97,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #97 = ATOMIC_LOAD_NIHF64
  { 98,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #98 = ATOMIC_LOAD_NIHF64i
  { 99,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #99 = ATOMIC_LOAD_NIHH64
  { 100,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #100 = ATOMIC_LOAD_NIHH64i
  { 101,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #101 = ATOMIC_LOAD_NIHL64
  { 102,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #102 = ATOMIC_LOAD_NIHL64i
  { 103,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #103 = ATOMIC_LOAD_NILF
  { 104,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #104 = ATOMIC_LOAD_NILF64
  { 105,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #105 = ATOMIC_LOAD_NILF64i
  { 106,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #106 = ATOMIC_LOAD_NILFi
  { 107,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #107 = ATOMIC_LOAD_NILH
  { 108,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #108 = ATOMIC_LOAD_NILH64
  { 109,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #109 = ATOMIC_LOAD_NILH64i
  { 110,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #110 = ATOMIC_LOAD_NILHi
  { 111,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #111 = ATOMIC_LOAD_NILL
  { 112,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #112 = ATOMIC_LOAD_NILL64
  { 113,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #113 = ATOMIC_LOAD_NILL64i
  { 114,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #114 = ATOMIC_LOAD_NILLi
  { 115,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #115 = ATOMIC_LOAD_NR
  { 116,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #116 = ATOMIC_LOAD_NRi
  { 117,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #117 = ATOMIC_LOAD_OGR
  { 118,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #118 = ATOMIC_LOAD_OIHF64
  { 119,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #119 = ATOMIC_LOAD_OIHH64
  { 120,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #120 = ATOMIC_LOAD_OIHL64
  { 121,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #121 = ATOMIC_LOAD_OILF
  { 122,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #122 = ATOMIC_LOAD_OILF64
  { 123,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #123 = ATOMIC_LOAD_OILH
  { 124,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #124 = ATOMIC_LOAD_OILH64
  { 125,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #125 = ATOMIC_LOAD_OILL
  { 126,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #126 = ATOMIC_LOAD_OILL64
  { 127,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #127 = ATOMIC_LOAD_OR
  { 128,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #128 = ATOMIC_LOAD_SGR
  { 129,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #129 = ATOMIC_LOAD_SR
  { 130,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #130 = ATOMIC_LOAD_UMAX_32
  { 131,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #131 = ATOMIC_LOAD_UMAX_64
  { 132,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #132 = ATOMIC_LOAD_UMIN_32
  { 133,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #133 = ATOMIC_LOAD_UMIN_64
  { 134,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #134 = ATOMIC_LOAD_XGR
  { 135,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #135 = ATOMIC_LOAD_XIHF64
  { 136,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo36,0,nullptr },  // Inst #136 = ATOMIC_LOAD_XILF
  { 137,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo37,0,nullptr },  // Inst #137 = ATOMIC_LOAD_XILF64
  { 138,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #138 = ATOMIC_LOAD_XR
  { 139,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo35,0,nullptr },  // Inst #139 = ATOMIC_SWAPW
  { 140,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo39,0,nullptr },  // Inst #140 = ATOMIC_SWAP_32
  { 141,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo38,0,nullptr },  // Inst #141 = ATOMIC_SWAP_64
  { 142,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo40,0,nullptr },  // Inst #142 = AXBR
  { 143,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #143 = AY
  { 144,	2,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo41,0,nullptr },  // Inst #144 = AsmBCR
  { 145,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7,0,nullptr },  // Inst #145 = AsmBRC
  { 146,	2,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7,0,nullptr },  // Inst #146 = AsmBRCL
  { 147,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo42,0,nullptr },  // Inst #147 = AsmCGIJ
  { 148,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo43,0,nullptr },  // Inst #148 = AsmCGRJ
  { 149,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo44,0,nullptr },  // Inst #149 = AsmCIJ
  { 150,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo42,0,nullptr },  // Inst #150 = AsmCLGIJ
  { 151,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo43,0,nullptr },  // Inst #151 = AsmCLGRJ
  { 152,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo44,0,nullptr },  // Inst #152 = AsmCLIJ
  { 153,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo45,0,nullptr },  // Inst #153 = AsmCLRJ
  { 154,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo45,0,nullptr },  // Inst #154 = AsmCRJ
  { 155,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #155 = AsmEBR
  { 156,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #156 = AsmEJ
  { 157,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #157 = AsmEJG
  { 158,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #158 = AsmELOC
  { 159,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #159 = AsmELOCG
  { 160,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #160 = AsmELOCGR
  { 161,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #161 = AsmELOCR
  { 162,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #162 = AsmESTOC
  { 163,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #163 = AsmESTOCG
  { 164,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #164 = AsmHBR
  { 165,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #165 = AsmHEBR
  { 166,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #166 = AsmHEJ
  { 167,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #167 = AsmHEJG
  { 168,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #168 = AsmHELOC
  { 169,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #169 = AsmHELOCG
  { 170,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #170 = AsmHELOCGR
  { 171,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #171 = AsmHELOCR
  { 172,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #172 = AsmHESTOC
  { 173,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #173 = AsmHESTOCG
  { 174,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #174 = AsmHJ
  { 175,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #175 = AsmHJG
  { 176,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #176 = AsmHLOC
  { 177,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #177 = AsmHLOCG
  { 178,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #178 = AsmHLOCGR
  { 179,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #179 = AsmHLOCR
  { 180,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #180 = AsmHSTOC
  { 181,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #181 = AsmHSTOCG
  { 182,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #182 = AsmJEAltCGI
  { 183,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #183 = AsmJEAltCGR
  { 184,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #184 = AsmJEAltCI
  { 185,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #185 = AsmJEAltCLGI
  { 186,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #186 = AsmJEAltCLGR
  { 187,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #187 = AsmJEAltCLI
  { 188,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #188 = AsmJEAltCLR
  { 189,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #189 = AsmJEAltCR
  { 190,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #190 = AsmJECGI
  { 191,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #191 = AsmJECGR
  { 192,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #192 = AsmJECI
  { 193,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #193 = AsmJECLGI
  { 194,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #194 = AsmJECLGR
  { 195,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #195 = AsmJECLI
  { 196,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #196 = AsmJECLR
  { 197,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #197 = AsmJECR
  { 198,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #198 = AsmJHAltCGI
  { 199,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #199 = AsmJHAltCGR
  { 200,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #200 = AsmJHAltCI
  { 201,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #201 = AsmJHAltCLGI
  { 202,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #202 = AsmJHAltCLGR
  { 203,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #203 = AsmJHAltCLI
  { 204,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #204 = AsmJHAltCLR
  { 205,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #205 = AsmJHAltCR
  { 206,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #206 = AsmJHCGI
  { 207,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #207 = AsmJHCGR
  { 208,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #208 = AsmJHCI
  { 209,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #209 = AsmJHCLGI
  { 210,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #210 = AsmJHCLGR
  { 211,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #211 = AsmJHCLI
  { 212,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #212 = AsmJHCLR
  { 213,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #213 = AsmJHCR
  { 214,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #214 = AsmJHEAltCGI
  { 215,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #215 = AsmJHEAltCGR
  { 216,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #216 = AsmJHEAltCI
  { 217,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #217 = AsmJHEAltCLGI
  { 218,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #218 = AsmJHEAltCLGR
  { 219,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #219 = AsmJHEAltCLI
  { 220,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #220 = AsmJHEAltCLR
  { 221,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #221 = AsmJHEAltCR
  { 222,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #222 = AsmJHECGI
  { 223,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #223 = AsmJHECGR
  { 224,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #224 = AsmJHECI
  { 225,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #225 = AsmJHECLGI
  { 226,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #226 = AsmJHECLGR
  { 227,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #227 = AsmJHECLI
  { 228,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #228 = AsmJHECLR
  { 229,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #229 = AsmJHECR
  { 230,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #230 = AsmJLAltCGI
  { 231,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #231 = AsmJLAltCGR
  { 232,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #232 = AsmJLAltCI
  { 233,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #233 = AsmJLAltCLGI
  { 234,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #234 = AsmJLAltCLGR
  { 235,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #235 = AsmJLAltCLI
  { 236,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #236 = AsmJLAltCLR
  { 237,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #237 = AsmJLAltCR
  { 238,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #238 = AsmJLCGI
  { 239,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #239 = AsmJLCGR
  { 240,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #240 = AsmJLCI
  { 241,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #241 = AsmJLCLGI
  { 242,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #242 = AsmJLCLGR
  { 243,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #243 = AsmJLCLI
  { 244,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #244 = AsmJLCLR
  { 245,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #245 = AsmJLCR
  { 246,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #246 = AsmJLEAltCGI
  { 247,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #247 = AsmJLEAltCGR
  { 248,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #248 = AsmJLEAltCI
  { 249,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #249 = AsmJLEAltCLGI
  { 250,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #250 = AsmJLEAltCLGR
  { 251,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #251 = AsmJLEAltCLI
  { 252,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #252 = AsmJLEAltCLR
  { 253,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #253 = AsmJLEAltCR
  { 254,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #254 = AsmJLECGI
  { 255,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #255 = AsmJLECGR
  { 256,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #256 = AsmJLECI
  { 257,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #257 = AsmJLECLGI
  { 258,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #258 = AsmJLECLGR
  { 259,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #259 = AsmJLECLI
  { 260,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #260 = AsmJLECLR
  { 261,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #261 = AsmJLECR
  { 262,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #262 = AsmJLHAltCGI
  { 263,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #263 = AsmJLHAltCGR
  { 264,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #264 = AsmJLHAltCI
  { 265,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #265 = AsmJLHAltCLGI
  { 266,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #266 = AsmJLHAltCLGR
  { 267,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #267 = AsmJLHAltCLI
  { 268,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #268 = AsmJLHAltCLR
  { 269,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #269 = AsmJLHAltCR
  { 270,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #270 = AsmJLHCGI
  { 271,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #271 = AsmJLHCGR
  { 272,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #272 = AsmJLHCI
  { 273,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #273 = AsmJLHCLGI
  { 274,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #274 = AsmJLHCLGR
  { 275,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #275 = AsmJLHCLI
  { 276,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #276 = AsmJLHCLR
  { 277,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #277 = AsmJLHCR
  { 278,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #278 = AsmLBR
  { 279,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #279 = AsmLEBR
  { 280,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #280 = AsmLEJ
  { 281,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #281 = AsmLEJG
  { 282,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #282 = AsmLELOC
  { 283,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #283 = AsmLELOCG
  { 284,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #284 = AsmLELOCGR
  { 285,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #285 = AsmLELOCR
  { 286,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #286 = AsmLESTOC
  { 287,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #287 = AsmLESTOCG
  { 288,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #288 = AsmLHBR
  { 289,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #289 = AsmLHJ
  { 290,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #290 = AsmLHJG
  { 291,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #291 = AsmLHLOC
  { 292,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #292 = AsmLHLOCG
  { 293,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #293 = AsmLHLOCGR
  { 294,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #294 = AsmLHLOCR
  { 295,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #295 = AsmLHSTOC
  { 296,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #296 = AsmLHSTOCG
  { 297,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #297 = AsmLJ
  { 298,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #298 = AsmLJG
  { 299,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #299 = AsmLLOC
  { 300,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #300 = AsmLLOCG
  { 301,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #301 = AsmLLOCGR
  { 302,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #302 = AsmLLOCR
  { 303,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, ImplicitList1, nullptr, OperandInfo53,0,nullptr },  // Inst #303 = AsmLOC
  { 304,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, ImplicitList1, nullptr, OperandInfo54,0,nullptr },  // Inst #304 = AsmLOCG
  { 305,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo55,0,nullptr },  // Inst #305 = AsmLOCGR
  { 306,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo56,0,nullptr },  // Inst #306 = AsmLOCR
  { 307,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #307 = AsmLSTOC
  { 308,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #308 = AsmLSTOCG
  { 309,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #309 = AsmNEBR
  { 310,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #310 = AsmNEJ
  { 311,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #311 = AsmNEJG
  { 312,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #312 = AsmNELOC
  { 313,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #313 = AsmNELOCG
  { 314,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #314 = AsmNELOCGR
  { 315,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #315 = AsmNELOCR
  { 316,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #316 = AsmNESTOC
  { 317,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #317 = AsmNESTOCG
  { 318,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #318 = AsmNHBR
  { 319,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #319 = AsmNHEBR
  { 320,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #320 = AsmNHEJ
  { 321,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #321 = AsmNHEJG
  { 322,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #322 = AsmNHELOC
  { 323,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #323 = AsmNHELOCG
  { 324,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #324 = AsmNHELOCGR
  { 325,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #325 = AsmNHELOCR
  { 326,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #326 = AsmNHESTOC
  { 327,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #327 = AsmNHESTOCG
  { 328,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #328 = AsmNHJ
  { 329,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #329 = AsmNHJG
  { 330,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #330 = AsmNHLOC
  { 331,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #331 = AsmNHLOCG
  { 332,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #332 = AsmNHLOCGR
  { 333,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #333 = AsmNHLOCR
  { 334,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #334 = AsmNHSTOC
  { 335,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #335 = AsmNHSTOCG
  { 336,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #336 = AsmNLBR
  { 337,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #337 = AsmNLEBR
  { 338,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #338 = AsmNLEJ
  { 339,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #339 = AsmNLEJG
  { 340,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #340 = AsmNLELOC
  { 341,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #341 = AsmNLELOCG
  { 342,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #342 = AsmNLELOCGR
  { 343,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #343 = AsmNLELOCR
  { 344,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #344 = AsmNLESTOC
  { 345,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #345 = AsmNLESTOCG
  { 346,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #346 = AsmNLHBR
  { 347,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #347 = AsmNLHJ
  { 348,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #348 = AsmNLHJG
  { 349,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #349 = AsmNLHLOC
  { 350,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #350 = AsmNLHLOCG
  { 351,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #351 = AsmNLHLOCGR
  { 352,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #352 = AsmNLHLOCR
  { 353,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #353 = AsmNLHSTOC
  { 354,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #354 = AsmNLHSTOCG
  { 355,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #355 = AsmNLJ
  { 356,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #356 = AsmNLJG
  { 357,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #357 = AsmNLLOC
  { 358,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #358 = AsmNLLOCG
  { 359,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #359 = AsmNLLOCGR
  { 360,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #360 = AsmNLLOCR
  { 361,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #361 = AsmNLSTOC
  { 362,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #362 = AsmNLSTOCG
  { 363,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #363 = AsmNOBR
  { 364,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #364 = AsmNOJ
  { 365,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #365 = AsmNOJG
  { 366,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #366 = AsmNOLOC
  { 367,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #367 = AsmNOLOCG
  { 368,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #368 = AsmNOLOCGR
  { 369,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #369 = AsmNOLOCR
  { 370,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #370 = AsmNOSTOC
  { 371,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #371 = AsmNOSTOCG
  { 372,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #372 = AsmOBR
  { 373,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #373 = AsmOJ
  { 374,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #374 = AsmOJG
  { 375,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #375 = AsmOLOC
  { 376,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #376 = AsmOLOCG
  { 377,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #377 = AsmOLOCGR
  { 378,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #378 = AsmOLOCR
  { 379,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #379 = AsmOSTOC
  { 380,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #380 = AsmOSTOCG
  { 381,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x84ULL, ImplicitList1, nullptr, OperandInfo36,0,nullptr },  // Inst #381 = AsmSTOC
  { 382,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x104ULL, ImplicitList1, nullptr, OperandInfo37,0,nullptr },  // Inst #382 = AsmSTOCG
  { 383,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #383 = BASR
  { 384,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #384 = BR
  { 385,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #385 = BRAS
  { 386,	3,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #386 = BRASL
  { 387,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x40000ULL, ImplicitList1, nullptr, OperandInfo58,0,nullptr },  // Inst #387 = BRC
  { 388,	3,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x40000ULL, ImplicitList1, nullptr, OperandInfo58,0,nullptr },  // Inst #388 = BRCL
  { 389,	3,	1,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #389 = BRCT
  { 390,	3,	1,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #390 = BRCTG
  { 391,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3888ULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #391 = C
  { 392,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3d08ULL, nullptr, ImplicitList1, OperandInfo60,0,nullptr },  // Inst #392 = CDB
  { 393,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, nullptr, ImplicitList1, OperandInfo61,0,nullptr },  // Inst #393 = CDBR
  { 394,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #394 = CDFBR
  { 395,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #395 = CDGBR
  { 396,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #396 = CDLFBR
  { 397,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #397 = CDLGBR
  { 398,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3c88ULL, nullptr, ImplicitList1, OperandInfo66,0,nullptr },  // Inst #398 = CEB
  { 399,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, nullptr, ImplicitList1, OperandInfo67,0,nullptr },  // Inst #399 = CEBR
  { 400,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #400 = CEFBR
  { 401,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #401 = CEGBR
  { 402,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #402 = CELFBR
  { 403,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #403 = CELGBR
  { 404,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo72,0,nullptr },  // Inst #404 = CFDBR
  { 405,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo73,0,nullptr },  // Inst #405 = CFEBR
  { 406,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #406 = CFI
  { 407,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x3800ULL, nullptr, ImplicitList1, OperandInfo75,0,nullptr },  // Inst #407 = CFIMux
  { 408,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo76,0,nullptr },  // Inst #408 = CFXBR
  { 409,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x390cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #409 = CG
  { 410,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo77,0,nullptr },  // Inst #410 = CGDBR
  { 411,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo78,0,nullptr },  // Inst #411 = CGEBR
  { 412,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #412 = CGF
  { 413,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #413 = CGFI
  { 414,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo80,0,nullptr },  // Inst #414 = CGFR
  { 415,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #415 = CGFRL
  { 416,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x384cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #416 = CGH
  { 417,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #417 = CGHI
  { 418,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #418 = CGHRL
  { 419,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #419 = CGHSI
  { 420,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo42,0,nullptr },  // Inst #420 = CGIJ
  { 421,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #421 = CGR
  { 422,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo43,0,nullptr },  // Inst #422 = CGRJ
  { 423,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #423 = CGRL
  { 424,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo82,0,nullptr },  // Inst #424 = CGXBR
  { 425,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3848ULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #425 = CH
  { 426,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, nullptr, ImplicitList1, OperandInfo83,0,nullptr },  // Inst #426 = CHF
  { 427,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #427 = CHHSI
  { 428,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #428 = CHI
  { 429,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #429 = CHRL
  { 430,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #430 = CHSI
  { 431,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x384cULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #431 = CHY
  { 432,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo84,0,nullptr },  // Inst #432 = CIH
  { 433,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo44,0,nullptr },  // Inst #433 = CIJ
  { 434,	4,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103888ULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #434 = CL
  { 435,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo85,0,nullptr },  // Inst #435 = CLC
  { 436,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo86,0,nullptr },  // Inst #436 = CLCLoop
  { 437,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo87,0,nullptr },  // Inst #437 = CLCSequence
  { 438,	4,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo88,0,nullptr },  // Inst #438 = CLFDBR
  { 439,	4,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo89,0,nullptr },  // Inst #439 = CLFEBR
  { 440,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #440 = CLFHSI
  { 441,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #441 = CLFI
  { 442,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x103800ULL, nullptr, ImplicitList1, OperandInfo75,0,nullptr },  // Inst #442 = CLFIMux
  { 443,	4,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo90,0,nullptr },  // Inst #443 = CLFXBR
  { 444,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10390cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #444 = CLG
  { 445,	4,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo91,0,nullptr },  // Inst #445 = CLGDBR
  { 446,	4,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo92,0,nullptr },  // Inst #446 = CLGEBR
  { 447,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #447 = CLGF
  { 448,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #448 = CLGFI
  { 449,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x103800ULL, nullptr, ImplicitList1, OperandInfo80,0,nullptr },  // Inst #449 = CLGFR
  { 450,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #450 = CLGFRL
  { 451,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #451 = CLGHRL
  { 452,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #452 = CLGHSI
  { 453,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo42,0,nullptr },  // Inst #453 = CLGIJ
  { 454,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x103800ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #454 = CLGR
  { 455,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo43,0,nullptr },  // Inst #455 = CLGRJ
  { 456,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #456 = CLGRL
  { 457,	4,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo93,0,nullptr },  // Inst #457 = CLGXBR
  { 458,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, nullptr, ImplicitList1, OperandInfo83,0,nullptr },  // Inst #458 = CLHF
  { 459,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #459 = CLHHSI
  { 460,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #460 = CLHRL
  { 461,	3,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #461 = CLI
  { 462,	2,	0,	0,	6,	0|(1<<MCID::Compare), 0x103800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #462 = CLIH
  { 463,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo44,0,nullptr },  // Inst #463 = CLIJ
  { 464,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103804ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #464 = CLIY
  { 465,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x10388cULL, nullptr, ImplicitList1, OperandInfo94,0,nullptr },  // Inst #465 = CLMux
  { 466,	2,	0,	0,	2,	0|(1<<MCID::Compare), 0x103800ULL, nullptr, ImplicitList1, OperandInfo95,0,nullptr },  // Inst #466 = CLR
  { 467,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo45,0,nullptr },  // Inst #467 = CLRJ
  { 468,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x103800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #468 = CLRL
  { 469,	4,	2,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo96,0,nullptr },  // Inst #469 = CLST
  { 470,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo97,0,nullptr },  // Inst #470 = CLSTLoop
  { 471,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x10388cULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #471 = CLY
  { 472,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x388cULL, nullptr, ImplicitList1, OperandInfo94,0,nullptr },  // Inst #472 = CMux
  { 473,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #473 = CPSDRdd
  { 474,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #474 = CPSDRds
  { 475,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #475 = CPSDRsd
  { 476,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #476 = CPSDRss
  { 477,	2,	0,	0,	2,	0|(1<<MCID::Compare), 0x3800ULL, nullptr, ImplicitList1, OperandInfo95,0,nullptr },  // Inst #477 = CR
  { 478,	4,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo45,0,nullptr },  // Inst #478 = CRJ
  { 479,	2,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x3800ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #479 = CRL
  { 480,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo102,0,nullptr },  // Inst #480 = CS
  { 481,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo103,0,nullptr },  // Inst #481 = CSG
  { 482,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo102,0,nullptr },  // Inst #482 = CSY
  { 483,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3c00ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #483 = CXBR
  { 484,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #484 = CXFBR
  { 485,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #485 = CXGBR
  { 486,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #486 = CXLFBR
  { 487,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #487 = CXLGBR
  { 488,	4,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x388cULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #488 = CY
  { 489,	1,	0,	0,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, nullptr, ImplicitList3, OperandInfo46,0,nullptr },  // Inst #489 = CallBASR
  { 490,	0,	0,	0,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, nullptr,0,nullptr },  // Inst #490 = CallBR
  { 491,	1,	0,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #491 = CallBRASL
  { 492,	1,	0,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #492 = CallJG
  { 493,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo109,0,nullptr },  // Inst #493 = CondStore16
  { 494,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo109,0,nullptr },  // Inst #494 = CondStore16Inv
  { 495,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo110,0,nullptr },  // Inst #495 = CondStore16Mux
  { 496,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo110,0,nullptr },  // Inst #496 = CondStore16MuxInv
  { 497,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo109,0,nullptr },  // Inst #497 = CondStore32
  { 498,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo109,0,nullptr },  // Inst #498 = CondStore32Inv
  { 499,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo111,0,nullptr },  // Inst #499 = CondStore64
  { 500,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo111,0,nullptr },  // Inst #500 = CondStore64Inv
  { 501,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo109,0,nullptr },  // Inst #501 = CondStore8
  { 502,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo109,0,nullptr },  // Inst #502 = CondStore8Inv
  { 503,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo110,0,nullptr },  // Inst #503 = CondStore8Mux
  { 504,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo110,0,nullptr },  // Inst #504 = CondStore8MuxInv
  { 505,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo112,0,nullptr },  // Inst #505 = CondStoreF32
  { 506,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo112,0,nullptr },  // Inst #506 = CondStoreF32Inv
  { 507,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo113,0,nullptr },  // Inst #507 = CondStoreF64
  { 508,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo113,0,nullptr },  // Inst #508 = CondStoreF64Inv
  { 509,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #509 = DDB
  { 510,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #510 = DDBR
  { 511,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #511 = DEB
  { 512,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #512 = DEBR
  { 513,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #513 = DL
  { 514,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #514 = DLG
  { 515,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #515 = DLGR
  { 516,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #516 = DLR
  { 517,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #517 = DSG
  { 518,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #518 = DSGF
  { 519,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #519 = DSGFR
  { 520,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #520 = DSGR
  { 521,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #521 = DXBR
  { 522,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #522 = EAR
  { 523,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #523 = ETND
  { 524,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #524 = FIDBR
  { 525,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #525 = FIDBRA
  { 526,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #526 = FIEBR
  { 527,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #527 = FIEBRA
  { 528,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #528 = FIXBR
  { 529,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #529 = FIXBRA
  { 530,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo18,0,nullptr },  // Inst #530 = FLOGR
  { 531,	1,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #531 = GOT
  { 532,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x28ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #532 = IC
  { 533,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x28ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #533 = IC32
  { 534,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #534 = IC32Y
  { 535,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #535 = ICY
  { 536,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #536 = IIFMux
  { 537,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #537 = IIHF
  { 538,	3,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #538 = IIHF64
  { 539,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #539 = IIHH
  { 540,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #540 = IIHH64
  { 541,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #541 = IIHL
  { 542,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #542 = IIHL64
  { 543,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #543 = IIHMux
  { 544,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #544 = IILF
  { 545,	3,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #545 = IILF64
  { 546,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #546 = IILH
  { 547,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #547 = IILH64
  { 548,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #548 = IILL
  { 549,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #549 = IILL64
  { 550,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #550 = IILMux
  { 551,	1,	1,	0,	4,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo117,0,nullptr },  // Inst #551 = IPM
  { 552,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #552 = J
  { 553,	1,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #553 = JG
  { 554,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x89ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #554 = L
  { 555,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #555 = L128
  { 556,	4,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #556 = LA
  { 557,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo126,0,nullptr },  // Inst #557 = LAA
  { 558,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo127,0,nullptr },  // Inst #558 = LAAG
  { 559,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList1, OperandInfo126,0,nullptr },  // Inst #559 = LAAL
  { 560,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList1, OperandInfo127,0,nullptr },  // Inst #560 = LAALG
  { 561,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo126,0,nullptr },  // Inst #561 = LAN
  { 562,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo127,0,nullptr },  // Inst #562 = LANG
  { 563,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo126,0,nullptr },  // Inst #563 = LAO
  { 564,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo127,0,nullptr },  // Inst #564 = LAOG
  { 565,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #565 = LARL
  { 566,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo126,0,nullptr },  // Inst #566 = LAX
  { 567,	4,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo127,0,nullptr },  // Inst #567 = LAXG
  { 568,	4,	1,	0,	6,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0xcULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #568 = LAY
  { 569,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #569 = LB
  { 570,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #570 = LBH
  { 571,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #571 = LBMux
  { 572,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #572 = LBR
  { 573,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo61,0,nullptr },  // Inst #573 = LCDBR
  { 574,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo67,0,nullptr },  // Inst #574 = LCEBR
  { 575,	2,	1,	0,	4,	0, 0x3b800ULL, nullptr, ImplicitList1, OperandInfo80,0,nullptr },  // Inst #575 = LCGFR
  { 576,	2,	1,	0,	4,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #576 = LCGR
  { 577,	2,	1,	0,	2,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo95,0,nullptr },  // Inst #577 = LCR
  { 578,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #578 = LCXBR
  { 579,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x109ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #579 = LD
  { 580,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #580 = LDEB
  { 581,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #581 = LDEBR
  { 582,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #582 = LDGR
  { 583,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #583 = LDR
  { 584,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #584 = LDXBR
  { 585,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #585 = LDXBRA
  { 586,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10dULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #586 = LDY
  { 587,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x89ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #587 = LE
  { 588,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo129,0,nullptr },  // Inst #588 = LEDBR
  { 589,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #589 = LEDBRA
  { 590,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #590 = LER
  { 591,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #591 = LEXBR
  { 592,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #592 = LEXBRA
  { 593,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #593 = LEY
  { 594,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #594 = LFH
  { 595,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10dULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #595 = LG
  { 596,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #596 = LGB
  { 597,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #597 = LGBR
  { 598,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #598 = LGDR
  { 599,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #599 = LGF
  { 600,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #600 = LGFI
  { 601,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #601 = LGFR
  { 602,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #602 = LGFRL
  { 603,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #603 = LGH
  { 604,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #604 = LGHI
  { 605,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #605 = LGHR
  { 606,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #606 = LGHRL
  { 607,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #607 = LGR
  { 608,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #608 = LGRL
  { 609,	4,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x48ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #609 = LH
  { 610,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #610 = LHH
  { 611,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #611 = LHI
  { 612,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #612 = LHIMux
  { 613,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #613 = LHMux
  { 614,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #614 = LHR
  { 615,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #615 = LHRL
  { 616,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #616 = LHY
  { 617,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #617 = LLC
  { 618,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #618 = LLCH
  { 619,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #619 = LLCMux
  { 620,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #620 = LLCR
  { 621,	2,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #621 = LLCRMux
  { 622,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #622 = LLGC
  { 623,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #623 = LLGCR
  { 624,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #624 = LLGF
  { 625,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #625 = LLGFR
  { 626,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #626 = LLGFRL
  { 627,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #627 = LLGH
  { 628,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #628 = LLGHR
  { 629,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #629 = LLGHRL
  { 630,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #630 = LLH
  { 631,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #631 = LLHH
  { 632,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #632 = LLHMux
  { 633,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #633 = LLHR
  { 634,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #634 = LLHRL
  { 635,	2,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #635 = LLHRMux
  { 636,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #636 = LLIHF
  { 637,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #637 = LLIHH
  { 638,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #638 = LLIHL
  { 639,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #639 = LLILF
  { 640,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #640 = LLILH
  { 641,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #641 = LLILL
  { 642,	4,	2,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #642 = LMG
  { 643,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #643 = LMux
  { 644,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo61,0,nullptr },  // Inst #644 = LNDBR
  { 645,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo67,0,nullptr },  // Inst #645 = LNEBR
  { 646,	2,	1,	0,	4,	0, 0x3b800ULL, nullptr, ImplicitList1, OperandInfo80,0,nullptr },  // Inst #646 = LNGFR
  { 647,	2,	1,	0,	4,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #647 = LNGR
  { 648,	2,	1,	0,	2,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo95,0,nullptr },  // Inst #648 = LNR
  { 649,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #649 = LNXBR
  { 650,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x80084ULL, ImplicitList1, nullptr, OperandInfo133,0,nullptr },  // Inst #650 = LOC
  { 651,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x80104ULL, ImplicitList1, nullptr, OperandInfo134,0,nullptr },  // Inst #651 = LOCG
  { 652,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x80000ULL, ImplicitList1, nullptr, OperandInfo43,0,nullptr },  // Inst #652 = LOCGR
  { 653,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x80000ULL, ImplicitList1, nullptr, OperandInfo45,0,nullptr },  // Inst #653 = LOCR
  { 654,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo61,0,nullptr },  // Inst #654 = LPDBR
  { 655,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo67,0,nullptr },  // Inst #655 = LPEBR
  { 656,	2,	1,	0,	4,	0, 0x3b800ULL, nullptr, ImplicitList1, OperandInfo80,0,nullptr },  // Inst #656 = LPGFR
  { 657,	2,	1,	0,	4,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #657 = LPGR
  { 658,	2,	1,	0,	2,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo95,0,nullptr },  // Inst #658 = LPR
  { 659,	2,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #659 = LPXBR
  { 660,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #660 = LR
  { 661,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #661 = LRL
  { 662,	2,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #662 = LRMux
  { 663,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #663 = LRV
  { 664,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #664 = LRVG
  { 665,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #665 = LRVGR
  { 666,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #666 = LRVR
  { 667,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b88cULL, nullptr, ImplicitList1, OperandInfo59,0,nullptr },  // Inst #667 = LT
  { 668,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo61,0,nullptr },  // Inst #668 = LTDBR
  { 669,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo61,0,nullptr },  // Inst #669 = LTDBRCompare
  { 670,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo67,0,nullptr },  // Inst #670 = LTEBR
  { 671,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo67,0,nullptr },  // Inst #671 = LTEBRCompare
  { 672,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b90cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #672 = LTG
  { 673,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3b88cULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #673 = LTGF
  { 674,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #674 = LTGFR
  { 675,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #675 = LTGR
  { 676,	2,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, nullptr, ImplicitList1, OperandInfo95,0,nullptr },  // Inst #676 = LTR
  { 677,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #677 = LTXBR
  { 678,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo104,0,nullptr },  // Inst #678 = LTXBRCompare
  { 679,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #679 = LX
  { 680,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #680 = LXDB
  { 681,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #681 = LXDBR
  { 682,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #682 = LXEB
  { 683,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #683 = LXEBR
  { 684,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #684 = LXR
  { 685,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x8dULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #685 = LY
  { 686,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #686 = LZDR
  { 687,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #687 = LZER
  { 688,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo140,0,nullptr },  // Inst #688 = LZXR
  { 689,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #689 = MADB
  { 690,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #690 = MADBR
  { 691,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #691 = MAEB
  { 692,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #692 = MAEBR
  { 693,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #693 = MDB
  { 694,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #694 = MDBR
  { 695,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x88ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #695 = MDEB
  { 696,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #696 = MDEBR
  { 697,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #697 = MEEB
  { 698,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #698 = MEEBR
  { 699,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #699 = MGHI
  { 700,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x48ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #700 = MH
  { 701,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #701 = MHI
  { 702,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x4cULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #702 = MHY
  { 703,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #703 = MLG
  { 704,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #704 = MLGR
  { 705,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #705 = MS
  { 706,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #706 = MSDB
  { 707,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #707 = MSDBR
  { 708,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #708 = MSEB
  { 709,	4,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #709 = MSEBR
  { 710,	3,	1,	0,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #710 = MSFI
  { 711,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #711 = MSG
  { 712,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #712 = MSGF
  { 713,	3,	1,	0,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #713 = MSGFI
  { 714,	3,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #714 = MSGFR
  { 715,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #715 = MSGR
  { 716,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #716 = MSR
  { 717,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #717 = MSY
  { 718,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #718 = MVC
  { 719,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #719 = MVCLoop
  { 720,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #720 = MVCSequence
  { 721,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #721 = MVGHI
  { 722,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #722 = MVHHI
  { 723,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #723 = MVHI
  { 724,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #724 = MVI
  { 725,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #725 = MVIY
  { 726,	4,	2,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo96,0,nullptr },  // Inst #726 = MVST
  { 727,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo97,0,nullptr },  // Inst #727 = MVSTLoop
  { 728,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #728 = MXBR
  { 729,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x108ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #729 = MXDB
  { 730,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #730 = MXDBR
  { 731,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #731 = N
  { 732,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo85,0,nullptr },  // Inst #732 = NC
  { 733,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo86,0,nullptr },  // Inst #733 = NCLoop
  { 734,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo87,0,nullptr },  // Inst #734 = NCSequence
  { 735,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #735 = NG
  { 736,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #736 = NGR
  { 737,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #737 = NGRK
  { 738,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #738 = NI
  { 739,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x23000ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #739 = NIFMux
  { 740,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x23000ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #740 = NIHF
  { 741,	3,	1,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #741 = NIHF64
  { 742,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #742 = NIHH
  { 743,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #743 = NIHH64
  { 744,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #744 = NIHL
  { 745,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #745 = NIHL64
  { 746,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #746 = NIHMux
  { 747,	3,	1,	0,	6,	0|(1<<MCID::ConvertibleTo3Addr), 0x23000ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #747 = NILF
  { 748,	3,	1,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #748 = NILF64
  { 749,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #749 = NILH
  { 750,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #750 = NILH64
  { 751,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #751 = NILL
  { 752,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #752 = NILL64
  { 753,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #753 = NILMux
  { 754,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #754 = NIY
  { 755,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #755 = NR
  { 756,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #756 = NRK
  { 757,	4,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #757 = NTSTG
  { 758,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #758 = NY
  { 759,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #759 = O
  { 760,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo85,0,nullptr },  // Inst #760 = OC
  { 761,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo86,0,nullptr },  // Inst #761 = OCLoop
  { 762,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo87,0,nullptr },  // Inst #762 = OCSequence
  { 763,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #763 = OG
  { 764,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #764 = OGR
  { 765,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #765 = OGRK
  { 766,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #766 = OI
  { 767,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x23000ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #767 = OIFMux
  { 768,	3,	1,	0,	6,	0, 0x23000ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #768 = OIHF
  { 769,	3,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #769 = OIHF64
  { 770,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #770 = OIHH
  { 771,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #771 = OIHH64
  { 772,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #772 = OIHL
  { 773,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #773 = OIHL64
  { 774,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #774 = OIHMux
  { 775,	3,	1,	0,	6,	0, 0x23000ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #775 = OILF
  { 776,	3,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #776 = OILF64
  { 777,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #777 = OILH
  { 778,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #778 = OILH64
  { 779,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #779 = OILL
  { 780,	3,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #780 = OILL64
  { 781,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #781 = OILMux
  { 782,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #782 = OIY
  { 783,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #783 = OR
  { 784,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #784 = ORK
  { 785,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #785 = OY
  { 786,	4,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0xcULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #786 = PFD
  { 787,	2,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #787 = PFDRL
  { 788,	2,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo81,0,nullptr },  // Inst #788 = POPCNT
  { 789,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #789 = PPA
  { 790,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x3b800ULL, nullptr, ImplicitList1, OperandInfo149,0,nullptr },  // Inst #790 = RISBG
  { 791,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo150,0,nullptr },  // Inst #791 = RISBG32
  { 792,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #792 = RISBGN
  { 793,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #793 = RISBHG
  { 794,	6,	1,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #794 = RISBHH
  { 795,	6,	1,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #795 = RISBHL
  { 796,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #796 = RISBLG
  { 797,	6,	1,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #797 = RISBLH
  { 798,	6,	1,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #798 = RISBLL
  { 799,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #799 = RISBMux
  { 800,	4,	1,	0,	6,	0, 0x4ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #800 = RLL
  { 801,	4,	1,	0,	6,	0, 0x4ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #801 = RLLG
  { 802,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo149,0,nullptr },  // Inst #802 = RNSBG
  { 803,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo149,0,nullptr },  // Inst #803 = ROSBG
  { 804,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo149,0,nullptr },  // Inst #804 = RXSBG
  { 805,	0,	0,	0,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #805 = Return
  { 806,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c88ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #806 = S
  { 807,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fd08ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #807 = SDB
  { 808,	3,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #808 = SDBR
  { 809,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x3fc88ULL, nullptr, ImplicitList1, OperandInfo16,0,nullptr },  // Inst #809 = SEB
  { 810,	3,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo17,0,nullptr },  // Inst #810 = SEBR
  { 811,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23d0cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #811 = SG
  { 812,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #812 = SGF
  { 813,	3,	1,	0,	4,	0, 0x23c00ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #813 = SGFR
  { 814,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #814 = SGR
  { 815,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #815 = SGRK
  { 816,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23c48ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #816 = SH
  { 817,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c4cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #817 = SHY
  { 818,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #818 = SL
  { 819,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, ImplicitList1, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #819 = SLB
  { 820,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, ImplicitList1, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #820 = SLBG
  { 821,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #821 = SLBR
  { 822,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #822 = SLFI
  { 823,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x10cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #823 = SLG
  { 824,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #824 = SLGBR
  { 825,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #825 = SLGF
  { 826,	3,	1,	0,	6,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #826 = SLGFI
  { 827,	3,	1,	0,	4,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo23,0,nullptr },  // Inst #827 = SLGFR
  { 828,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #828 = SLGR
  { 829,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #829 = SLGRK
  { 830,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #830 = SLL
  { 831,	4,	1,	0,	6,	0, 0x4ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #831 = SLLG
  { 832,	4,	1,	0,	6,	0, 0x4ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #832 = SLLK
  { 833,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #833 = SLR
  { 834,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #834 = SLRK
  { 835,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #835 = SLY
  { 836,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x108ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #836 = SQDB
  { 837,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #837 = SQDBR
  { 838,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x88ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #838 = SQEB
  { 839,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #839 = SQEBR
  { 840,	2,	1,	0,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #840 = SQXBR
  { 841,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #841 = SR
  { 842,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x3b800ULL, nullptr, ImplicitList1, OperandInfo159,0,nullptr },  // Inst #842 = SRA
  { 843,	4,	1,	0,	6,	0, 0x3b804ULL, nullptr, ImplicitList1, OperandInfo158,0,nullptr },  // Inst #843 = SRAG
  { 844,	4,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x3b804ULL, nullptr, ImplicitList1, OperandInfo157,0,nullptr },  // Inst #844 = SRAK
  { 845,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x23c00ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #845 = SRK
  { 846,	4,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr), 0x0ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #846 = SRL
  { 847,	4,	1,	0,	6,	0, 0x4ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #847 = SRLG
  { 848,	4,	1,	0,	6,	0, 0x4ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #848 = SRLK
  { 849,	4,	2,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo96,0,nullptr },  // Inst #849 = SRST
  { 850,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo97,0,nullptr },  // Inst #850 = SRSTLoop
  { 851,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8aULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #851 = ST
  { 852,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #852 = ST128
  { 853,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x28ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #853 = STC
  { 854,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2cULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #854 = STCH
  { 855,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x2cULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #855 = STCMux
  { 856,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #856 = STCY
  { 857,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x10aULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #857 = STD
  { 858,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10eULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #858 = STDY
  { 859,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8aULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #859 = STE
  { 860,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #860 = STEY
  { 861,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #861 = STFH
  { 862,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10eULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #862 = STG
  { 863,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #863 = STGRL
  { 864,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x48ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #864 = STH
  { 865,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4cULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #865 = STHH
  { 866,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x2cULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #866 = STHMux
  { 867,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #867 = STHRL
  { 868,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #868 = STHY
  { 869,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #869 = STMG
  { 870,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x8eULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #870 = STMux
  { 871,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80084ULL, ImplicitList1, nullptr, OperandInfo160,0,nullptr },  // Inst #871 = STOC
  { 872,	5,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x80104ULL, ImplicitList1, nullptr, OperandInfo161,0,nullptr },  // Inst #872 = STOCG
  { 873,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #873 = STRL
  { 874,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8cULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #874 = STRV
  { 875,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x10cULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #875 = STRVG
  { 876,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #876 = STX
  { 877,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0x8eULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #877 = STY
  { 878,	3,	1,	0,	4,	0, 0x3fc00ULL, nullptr, ImplicitList1, OperandInfo40,0,nullptr },  // Inst #878 = SXBR
  { 879,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x23c8cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #879 = SY
  { 880,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo162,0,nullptr },  // Inst #880 = Select32
  { 881,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo163,0,nullptr },  // Inst #881 = Select32Mux
  { 882,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo164,0,nullptr },  // Inst #882 = Select64
  { 883,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo165,0,nullptr },  // Inst #883 = SelectF128
  { 884,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo166,0,nullptr },  // Inst #884 = SelectF32
  { 885,	5,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo167,0,nullptr },  // Inst #885 = SelectF64
  { 886,	0,	0,	0,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #886 = Serialize
  { 887,	2,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #887 = TABORT
  { 888,	3,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #888 = TBEGIN
  { 889,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #889 = TBEGINC
  { 890,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #890 = TBEGIN_nofloat
  { 891,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, nullptr,0,nullptr },  // Inst #891 = TEND
  { 892,	1,	0,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #892 = TLS_GDCALL
  { 893,	1,	0,	0,	6,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, nullptr, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #893 = TLS_LDCALL
  { 894,	3,	0,	0,	4,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #894 = TM
  { 895,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo84,0,nullptr },  // Inst #895 = TMHH
  { 896,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #896 = TMHH64
  { 897,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo84,0,nullptr },  // Inst #897 = TMHL
  { 898,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #898 = TMHL64
  { 899,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo75,0,nullptr },  // Inst #899 = TMHMux
  { 900,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #900 = TMLH
  { 901,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #901 = TMLH64
  { 902,	2,	0,	0,	4,	0|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo74,0,nullptr },  // Inst #902 = TMLL
  { 903,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Compare), 0x0ULL, nullptr, ImplicitList1, OperandInfo79,0,nullptr },  // Inst #903 = TMLL64
  { 904,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo75,0,nullptr },  // Inst #904 = TMLMux
  { 905,	3,	0,	0,	6,	0|(1<<MCID::Compare)|(1<<MCID::MayLoad), 0x4ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #905 = TMY
  { 906,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x23088ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #906 = X
  { 907,	5,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo85,0,nullptr },  // Inst #907 = XC
  { 908,	6,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo86,0,nullptr },  // Inst #908 = XCLoop
  { 909,	5,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo87,0,nullptr },  // Inst #909 = XCSequence
  { 910,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2310cULL, nullptr, ImplicitList1, OperandInfo21,0,nullptr },  // Inst #910 = XG
  { 911,	3,	1,	0,	4,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, nullptr, ImplicitList1, OperandInfo25,0,nullptr },  // Inst #911 = XGR
  { 912,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, nullptr, ImplicitList1, OperandInfo26,0,nullptr },  // Inst #912 = XGRK
  { 913,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #913 = XI
  { 914,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x23000ULL, nullptr, ImplicitList1, OperandInfo20,0,nullptr },  // Inst #914 = XIFMux
  { 915,	3,	1,	0,	6,	0, 0x23000ULL, nullptr, ImplicitList1, OperandInfo30,0,nullptr },  // Inst #915 = XIHF
  { 916,	3,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #916 = XIHF64
  { 917,	3,	1,	0,	6,	0, 0x23000ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #917 = XILF
  { 918,	3,	1,	0,	6,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, ImplicitList1, OperandInfo22,0,nullptr },  // Inst #918 = XILF64
  { 919,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, nullptr, ImplicitList1, OperandInfo27,0,nullptr },  // Inst #919 = XIY
  { 920,	3,	1,	0,	2,	0|(1<<MCID::ConvertibleTo3Addr)|(1<<MCID::Commutable), 0x23000ULL, nullptr, ImplicitList1, OperandInfo31,0,nullptr },  // Inst #920 = XR
  { 921,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x23000ULL, nullptr, ImplicitList1, OperandInfo32,0,nullptr },  // Inst #921 = XRK
  { 922,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x2308cULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #922 = XY
  { 923,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #923 = ZEXT128_32
  { 924,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #924 = ZEXT128_64
};

extern const char SystemZInstrNameData[] = {
  /* 0 */ 'I', 'C', '3', '2', 0,
  /* 5 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '3', '2', 0,
  /* 18 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '3', '2', 0,
  /* 28 */ 'R', 'I', 'S', 'B', 'G', '3', '2', 0,
  /* 36 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '3', '2', 0,
  /* 47 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 67 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 86 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '3', '2', 0,
  /* 101 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 121 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 140 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', 0,
  /* 152 */ 'S', 'e', 'l', 'e', 'c', 't', '3', '2', 0,
  /* 161 */ 'I', 'I', 'H', 'F', '6', '4', 0,
  /* 168 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', '6', '4', 0,
  /* 187 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'F', '6', '4', 0,
  /* 206 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'H', 'F', '6', '4', 0,
  /* 225 */ 'I', 'I', 'L', 'F', '6', '4', 0,
  /* 232 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '6', '4', 0,
  /* 251 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', '6', '4', 0,
  /* 270 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', '6', '4', 0,
  /* 289 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '6', '4', 0,
  /* 302 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '6', '4', 0,
  /* 312 */ 'I', 'I', 'H', 'H', '6', '4', 0,
  /* 319 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', '6', '4', 0,
  /* 338 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'H', '6', '4', 0,
  /* 357 */ 'T', 'M', 'H', 'H', '6', '4', 0,
  /* 364 */ 'I', 'I', 'L', 'H', '6', '4', 0,
  /* 371 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '6', '4', 0,
  /* 390 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', '6', '4', 0,
  /* 409 */ 'T', 'M', 'L', 'H', '6', '4', 0,
  /* 416 */ 'I', 'I', 'H', 'L', '6', '4', 0,
  /* 423 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', '6', '4', 0,
  /* 442 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'L', '6', '4', 0,
  /* 461 */ 'T', 'M', 'H', 'L', '6', '4', 0,
  /* 468 */ 'I', 'I', 'L', 'L', '6', '4', 0,
  /* 475 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '6', '4', 0,
  /* 494 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', '6', '4', 0,
  /* 513 */ 'T', 'M', 'L', 'L', '6', '4', 0,
  /* 520 */ 'A', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 531 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 542 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 562 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 581 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '6', '4', 0,
  /* 596 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 616 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 635 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '6', '4', 0,
  /* 647 */ 'S', 'e', 'l', 'e', 'c', 't', '6', '4', 0,
  /* 656 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 668 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '1', '2', '8', 0,
  /* 679 */ 'L', '1', '2', '8', 0,
  /* 684 */ 'S', 'T', '1', '2', '8', 0,
  /* 690 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 0,
  /* 701 */ 'L', 'A', 'A', 0,
  /* 705 */ 'L', 'A', 0,
  /* 708 */ 'P', 'P', 'A', 0,
  /* 712 */ 'L', 'E', 'D', 'B', 'R', 'A', 0,
  /* 719 */ 'F', 'I', 'D', 'B', 'R', 'A', 0,
  /* 726 */ 'F', 'I', 'E', 'B', 'R', 'A', 0,
  /* 733 */ 'L', 'D', 'X', 'B', 'R', 'A', 0,
  /* 740 */ 'L', 'E', 'X', 'B', 'R', 'A', 0,
  /* 747 */ 'F', 'I', 'X', 'B', 'R', 'A', 0,
  /* 754 */ 'S', 'R', 'A', 0,
  /* 758 */ 'M', 'A', 'D', 'B', 0,
  /* 763 */ 'C', 'D', 'B', 0,
  /* 767 */ 'D', 'D', 'B', 0,
  /* 771 */ 'M', 'D', 'B', 0,
  /* 775 */ 'S', 'Q', 'D', 'B', 0,
  /* 780 */ 'M', 'S', 'D', 'B', 0,
  /* 785 */ 'L', 'X', 'D', 'B', 0,
  /* 790 */ 'M', 'X', 'D', 'B', 0,
  /* 795 */ 'M', 'A', 'E', 'B', 0,
  /* 800 */ 'C', 'E', 'B', 0,
  /* 804 */ 'L', 'D', 'E', 'B', 0,
  /* 809 */ 'M', 'D', 'E', 'B', 0,
  /* 814 */ 'M', 'E', 'E', 'B', 0,
  /* 819 */ 'S', 'Q', 'E', 'B', 0,
  /* 824 */ 'M', 'S', 'E', 'B', 0,
  /* 829 */ 'L', 'X', 'E', 'B', 0,
  /* 834 */ 'L', 'G', 'B', 0,
  /* 838 */ 'S', 'L', 'B', 0,
  /* 842 */ 'L', 'L', 'G', 'C', 0,
  /* 847 */ 'I', 'C', 0,
  /* 850 */ 'A', 'L', 'C', 0,
  /* 854 */ 'C', 'L', 'C', 0,
  /* 858 */ 'L', 'L', 'C', 0,
  /* 862 */ 'T', 'B', 'E', 'G', 'I', 'N', 'C', 0,
  /* 870 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 0,
  /* 880 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 0,
  /* 889 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 0,
  /* 899 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 0,
  /* 908 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 0,
  /* 917 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 0,
  /* 925 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 0,
  /* 935 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 0,
  /* 944 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 0,
  /* 953 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 0,
  /* 961 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 973 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 985 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 0,
  /* 994 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 0,
  /* 1002 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 0,
  /* 1011 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 0,
  /* 1019 */ 'A', 's', 'm', 'L', 'O', 'C', 0,
  /* 1026 */ 'A', 's', 'm', 'N', 'H', 'E', 'S', 'T', 'O', 'C', 0,
  /* 1037 */ 'A', 's', 'm', 'H', 'E', 'S', 'T', 'O', 'C', 0,
  /* 1047 */ 'A', 's', 'm', 'N', 'L', 'E', 'S', 'T', 'O', 'C', 0,
  /* 1058 */ 'A', 's', 'm', 'L', 'E', 'S', 'T', 'O', 'C', 0,
  /* 1068 */ 'A', 's', 'm', 'N', 'E', 'S', 'T', 'O', 'C', 0,
  /* 1078 */ 'A', 's', 'm', 'E', 'S', 'T', 'O', 'C', 0,
  /* 1087 */ 'A', 's', 'm', 'N', 'L', 'H', 'S', 'T', 'O', 'C', 0,
  /* 1098 */ 'A', 's', 'm', 'L', 'H', 'S', 'T', 'O', 'C', 0,
  /* 1108 */ 'A', 's', 'm', 'N', 'H', 'S', 'T', 'O', 'C', 0,
  /* 1118 */ 'A', 's', 'm', 'H', 'S', 'T', 'O', 'C', 0,
  /* 1127 */ 'A', 's', 'm', 'N', 'L', 'S', 'T', 'O', 'C', 0,
  /* 1137 */ 'A', 's', 'm', 'L', 'S', 'T', 'O', 'C', 0,
  /* 1146 */ 'A', 's', 'm', 'N', 'O', 'S', 'T', 'O', 'C', 0,
  /* 1156 */ 'A', 's', 'm', 'O', 'S', 'T', 'O', 'C', 0,
  /* 1165 */ 'A', 's', 'm', 'S', 'T', 'O', 'C', 0,
  /* 1173 */ 'A', 's', 'm', 'B', 'R', 'C', 0,
  /* 1180 */ 'S', 'T', 'C', 0,
  /* 1184 */ 'M', 'V', 'C', 0,
  /* 1188 */ 'X', 'C', 0,
  /* 1191 */ 'P', 'F', 'D', 0,
  /* 1195 */ 'L', 'D', 0,
  /* 1198 */ 'T', 'E', 'N', 'D', 0,
  /* 1203 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1216 */ 'E', 'T', 'N', 'D', 0,
  /* 1221 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1238 */ 'S', 'T', 'D', 0,
  /* 1242 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1255 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1262 */ 'S', 'T', 'E', 0,
  /* 1266 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1276 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1289 */ 'A', 'G', 'F', 0,
  /* 1293 */ 'C', 'G', 'F', 0,
  /* 1297 */ 'A', 'L', 'G', 'F', 0,
  /* 1302 */ 'C', 'L', 'G', 'F', 0,
  /* 1307 */ 'L', 'L', 'G', 'F', 0,
  /* 1312 */ 'S', 'L', 'G', 'F', 0,
  /* 1317 */ 'D', 'S', 'G', 'F', 0,
  /* 1322 */ 'M', 'S', 'G', 'F', 0,
  /* 1327 */ 'L', 'T', 'G', 'F', 0,
  /* 1332 */ 'C', 'H', 'F', 0,
  /* 1336 */ 'I', 'I', 'H', 'F', 0,
  /* 1341 */ 'L', 'L', 'I', 'H', 'F', 0,
  /* 1347 */ 'N', 'I', 'H', 'F', 0,
  /* 1352 */ 'O', 'I', 'H', 'F', 0,
  /* 1357 */ 'X', 'I', 'H', 'F', 0,
  /* 1362 */ 'C', 'L', 'H', 'F', 0,
  /* 1367 */ 'I', 'I', 'L', 'F', 0,
  /* 1372 */ 'L', 'L', 'I', 'L', 'F', 0,
  /* 1378 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 0,
  /* 1395 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', 0,
  /* 1412 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', 0,
  /* 1429 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'I', 'L', 'F', 0,
  /* 1447 */ 'L', 'A', 'A', 'G', 0,
  /* 1452 */ 'S', 'R', 'A', 'G', 0,
  /* 1457 */ 'S', 'L', 'B', 'G', 0,
  /* 1462 */ 'R', 'I', 'S', 'B', 'G', 0,
  /* 1468 */ 'R', 'N', 'S', 'B', 'G', 0,
  /* 1474 */ 'R', 'O', 'S', 'B', 'G', 0,
  /* 1480 */ 'R', 'X', 'S', 'B', 'G', 0,
  /* 1486 */ 'A', 'L', 'C', 'G', 0,
  /* 1491 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1502 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1512 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1523 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1533 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1543 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'G', 0,
  /* 1552 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1563 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1573 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1583 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'G', 0,
  /* 1592 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'G', 0,
  /* 1602 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'G', 0,
  /* 1611 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'G', 0,
  /* 1621 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'G', 0,
  /* 1630 */ 'A', 's', 'm', 'L', 'O', 'C', 'G', 0,
  /* 1638 */ 'A', 's', 'm', 'N', 'H', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1650 */ 'A', 's', 'm', 'H', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1661 */ 'A', 's', 'm', 'N', 'L', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1673 */ 'A', 's', 'm', 'L', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1684 */ 'A', 's', 'm', 'N', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1695 */ 'A', 's', 'm', 'E', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1705 */ 'A', 's', 'm', 'N', 'L', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1717 */ 'A', 's', 'm', 'L', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1728 */ 'A', 's', 'm', 'N', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1739 */ 'A', 's', 'm', 'H', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1749 */ 'A', 's', 'm', 'N', 'L', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1760 */ 'A', 's', 'm', 'L', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1770 */ 'A', 's', 'm', 'N', 'O', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1781 */ 'A', 's', 'm', 'O', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1791 */ 'A', 's', 'm', 'S', 'T', 'O', 'C', 'G', 0,
  /* 1800 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1815 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1829 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1843 */ 'R', 'I', 'S', 'B', 'H', 'G', 0,
  /* 1850 */ 'A', 's', 'm', 'N', 'H', 'E', 'J', 'G', 0,
  /* 1859 */ 'A', 's', 'm', 'H', 'E', 'J', 'G', 0,
  /* 1867 */ 'A', 's', 'm', 'N', 'L', 'E', 'J', 'G', 0,
  /* 1876 */ 'A', 's', 'm', 'L', 'E', 'J', 'G', 0,
  /* 1884 */ 'A', 's', 'm', 'N', 'E', 'J', 'G', 0,
  /* 1892 */ 'A', 's', 'm', 'E', 'J', 'G', 0,
  /* 1899 */ 'A', 's', 'm', 'N', 'L', 'H', 'J', 'G', 0,
  /* 1908 */ 'A', 's', 'm', 'L', 'H', 'J', 'G', 0,
  /* 1916 */ 'A', 's', 'm', 'N', 'H', 'J', 'G', 0,
  /* 1924 */ 'A', 's', 'm', 'H', 'J', 'G', 0,
  /* 1931 */ 'A', 's', 'm', 'N', 'L', 'J', 'G', 0,
  /* 1939 */ 'A', 's', 'm', 'L', 'J', 'G', 0,
  /* 1946 */ 'A', 's', 'm', 'N', 'O', 'J', 'G', 0,
  /* 1954 */ 'A', 's', 'm', 'O', 'J', 'G', 0,
  /* 1961 */ 'C', 'a', 'l', 'l', 'J', 'G', 0,
  /* 1968 */ 'L', 'A', 'A', 'L', 'G', 0,
  /* 1974 */ 'R', 'I', 'S', 'B', 'L', 'G', 0,
  /* 1981 */ 'C', 'L', 'G', 0,
  /* 1985 */ 'D', 'L', 'G', 0,
  /* 1989 */ 'R', 'L', 'L', 'G', 0,
  /* 1994 */ 'S', 'L', 'L', 'G', 0,
  /* 1999 */ 'M', 'L', 'G', 0,
  /* 2003 */ 'S', 'R', 'L', 'G', 0,
  /* 2008 */ 'S', 'L', 'G', 0,
  /* 2012 */ 'L', 'M', 'G', 0,
  /* 2016 */ 'S', 'T', 'M', 'G', 0,
  /* 2021 */ 'L', 'A', 'N', 'G', 0,
  /* 2026 */ 'L', 'A', 'O', 'G', 0,
  /* 2031 */ 'C', 'S', 'G', 0,
  /* 2035 */ 'D', 'S', 'G', 0,
  /* 2039 */ 'M', 'S', 'G', 0,
  /* 2043 */ 'B', 'R', 'C', 'T', 'G', 0,
  /* 2049 */ 'L', 'T', 'G', 0,
  /* 2053 */ 'N', 'T', 'S', 'T', 'G', 0,
  /* 2059 */ 'L', 'R', 'V', 'G', 0,
  /* 2064 */ 'S', 'T', 'R', 'V', 'G', 0,
  /* 2070 */ 'L', 'A', 'X', 'G', 0,
  /* 2075 */ 'A', 'H', 0,
  /* 2078 */ 'L', 'B', 'H', 0,
  /* 2082 */ 'L', 'L', 'C', 'H', 0,
  /* 2087 */ 'S', 'T', 'C', 'H', 0,
  /* 2092 */ 'L', 'F', 'H', 0,
  /* 2096 */ 'S', 'T', 'F', 'H', 0,
  /* 2101 */ 'C', 'G', 'H', 0,
  /* 2105 */ 'L', 'L', 'G', 'H', 0,
  /* 2110 */ 'R', 'I', 'S', 'B', 'H', 'H', 0,
  /* 2117 */ 'I', 'I', 'H', 'H', 0,
  /* 2122 */ 'L', 'L', 'I', 'H', 'H', 0,
  /* 2128 */ 'N', 'I', 'H', 'H', 0,
  /* 2133 */ 'O', 'I', 'H', 'H', 0,
  /* 2138 */ 'L', 'L', 'H', 'H', 0,
  /* 2143 */ 'T', 'M', 'H', 'H', 0,
  /* 2148 */ 'S', 'T', 'H', 'H', 0,
  /* 2153 */ 'A', 'I', 'H', 0,
  /* 2157 */ 'C', 'I', 'H', 0,
  /* 2161 */ 'C', 'L', 'I', 'H', 0,
  /* 2166 */ 'R', 'I', 'S', 'B', 'L', 'H', 0,
  /* 2173 */ 'I', 'I', 'L', 'H', 0,
  /* 2178 */ 'L', 'L', 'I', 'L', 'H', 0,
  /* 2184 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 0,
  /* 2201 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 0,
  /* 2219 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', 0,
  /* 2236 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'I', 'L', 'H', 0,
  /* 2254 */ 'L', 'L', 'H', 0,
  /* 2258 */ 'T', 'M', 'L', 'H', 0,
  /* 2263 */ 'M', 'H', 0,
  /* 2266 */ 'S', 'H', 0,
  /* 2269 */ 'S', 'T', 'H', 0,
  /* 2273 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'I', 0,
  /* 2282 */ 'A', 's', 'm', 'J', 'E', 'C', 'I', 0,
  /* 2290 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'I', 0,
  /* 2299 */ 'A', 's', 'm', 'J', 'H', 'C', 'I', 0,
  /* 2307 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'I', 0,
  /* 2316 */ 'A', 's', 'm', 'J', 'L', 'C', 'I', 0,
  /* 2324 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2336 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2347 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'I', 0,
  /* 2359 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'I', 0,
  /* 2370 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'I', 0,
  /* 2382 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'I', 0,
  /* 2393 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'F', 'I', 0,
  /* 2409 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'F', 'I', 0,
  /* 2426 */ 'C', 'F', 'I', 0,
  /* 2430 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'F', 'I', 0,
  /* 2447 */ 'C', 'G', 'F', 'I', 0,
  /* 2452 */ 'A', 'L', 'G', 'F', 'I', 0,
  /* 2458 */ 'C', 'L', 'G', 'F', 'I', 0,
  /* 2464 */ 'S', 'L', 'G', 'F', 'I', 0,
  /* 2470 */ 'M', 'S', 'G', 'F', 'I', 0,
  /* 2476 */ 'A', 'L', 'F', 'I', 0,
  /* 2481 */ 'C', 'L', 'F', 'I', 0,
  /* 2486 */ 'S', 'L', 'F', 'I', 0,
  /* 2491 */ 'M', 'S', 'F', 'I', 0,
  /* 2496 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'G', 'I', 0,
  /* 2506 */ 'A', 's', 'm', 'J', 'E', 'C', 'G', 'I', 0,
  /* 2515 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'G', 'I', 0,
  /* 2525 */ 'A', 's', 'm', 'J', 'H', 'C', 'G', 'I', 0,
  /* 2534 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'G', 'I', 0,
  /* 2544 */ 'A', 's', 'm', 'J', 'L', 'C', 'G', 'I', 0,
  /* 2553 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2566 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2578 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2591 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2603 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2616 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'G', 'I', 0,
  /* 2628 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'L', 'G', 'I', 0,
  /* 2639 */ 'A', 's', 'm', 'J', 'E', 'C', 'L', 'G', 'I', 0,
  /* 2649 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'L', 'G', 'I', 0,
  /* 2660 */ 'A', 's', 'm', 'J', 'H', 'C', 'L', 'G', 'I', 0,
  /* 2670 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'L', 'G', 'I', 0,
  /* 2681 */ 'A', 's', 'm', 'J', 'L', 'C', 'L', 'G', 'I', 0,
  /* 2691 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'L', 'G', 'I', 0,
  /* 2705 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'L', 'G', 'I', 0,
  /* 2718 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'L', 'G', 'I', 0,
  /* 2732 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'L', 'G', 'I', 0,
  /* 2745 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'L', 'G', 'I', 0,
  /* 2759 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'L', 'G', 'I', 0,
  /* 2772 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'H', 'I', 0,
  /* 2788 */ 'C', 'H', 'I', 0,
  /* 2792 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'H', 'I', 0,
  /* 2809 */ 'C', 'G', 'H', 'I', 0,
  /* 2814 */ 'L', 'G', 'H', 'I', 0,
  /* 2819 */ 'M', 'G', 'H', 'I', 0,
  /* 2824 */ 'M', 'V', 'G', 'H', 'I', 0,
  /* 2830 */ 'M', 'V', 'H', 'H', 'I', 0,
  /* 2836 */ 'L', 'H', 'I', 0,
  /* 2840 */ 'M', 'H', 'I', 0,
  /* 2844 */ 'P', 'H', 'I', 0,
  /* 2848 */ 'M', 'V', 'H', 'I', 0,
  /* 2853 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'L', 'I', 0,
  /* 2863 */ 'A', 's', 'm', 'J', 'E', 'C', 'L', 'I', 0,
  /* 2872 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'L', 'I', 0,
  /* 2882 */ 'A', 's', 'm', 'J', 'H', 'C', 'L', 'I', 0,
  /* 2891 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'L', 'I', 0,
  /* 2901 */ 'A', 's', 'm', 'J', 'L', 'C', 'L', 'I', 0,
  /* 2910 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'L', 'I', 0,
  /* 2923 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'L', 'I', 0,
  /* 2935 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'L', 'I', 0,
  /* 2948 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'L', 'I', 0,
  /* 2960 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'L', 'I', 0,
  /* 2973 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'L', 'I', 0,
  /* 2985 */ 'N', 'I', 0,
  /* 2988 */ 'O', 'I', 0,
  /* 2991 */ 'A', 'S', 'I', 0,
  /* 2995 */ 'A', 'G', 'S', 'I', 0,
  /* 3000 */ 'C', 'H', 'S', 'I', 0,
  /* 3005 */ 'C', 'L', 'F', 'H', 'S', 'I', 0,
  /* 3012 */ 'C', 'G', 'H', 'S', 'I', 0,
  /* 3018 */ 'C', 'L', 'G', 'H', 'S', 'I', 0,
  /* 3025 */ 'C', 'H', 'H', 'S', 'I', 0,
  /* 3031 */ 'C', 'L', 'H', 'H', 'S', 'I', 0,
  /* 3038 */ 'M', 'V', 'I', 0,
  /* 3042 */ 'X', 'I', 0,
  /* 3045 */ 'A', 's', 'm', 'N', 'H', 'E', 'J', 0,
  /* 3053 */ 'A', 's', 'm', 'H', 'E', 'J', 0,
  /* 3060 */ 'A', 's', 'm', 'N', 'L', 'E', 'J', 0,
  /* 3068 */ 'A', 's', 'm', 'L', 'E', 'J', 0,
  /* 3075 */ 'A', 's', 'm', 'N', 'E', 'J', 0,
  /* 3082 */ 'A', 's', 'm', 'E', 'J', 0,
  /* 3088 */ 'A', 's', 'm', 'N', 'L', 'H', 'J', 0,
  /* 3096 */ 'A', 's', 'm', 'L', 'H', 'J', 0,
  /* 3103 */ 'A', 's', 'm', 'N', 'H', 'J', 0,
  /* 3110 */ 'A', 's', 'm', 'H', 'J', 0,
  /* 3116 */ 'A', 's', 'm', 'C', 'I', 'J', 0,
  /* 3123 */ 'A', 's', 'm', 'C', 'G', 'I', 'J', 0,
  /* 3131 */ 'A', 's', 'm', 'C', 'L', 'G', 'I', 'J', 0,
  /* 3140 */ 'A', 's', 'm', 'C', 'L', 'I', 'J', 0,
  /* 3148 */ 'A', 's', 'm', 'N', 'L', 'J', 0,
  /* 3155 */ 'A', 's', 'm', 'L', 'J', 0,
  /* 3161 */ 'A', 's', 'm', 'N', 'O', 'J', 0,
  /* 3168 */ 'A', 's', 'm', 'O', 'J', 0,
  /* 3174 */ 'A', 's', 'm', 'C', 'R', 'J', 0,
  /* 3181 */ 'A', 's', 'm', 'C', 'G', 'R', 'J', 0,
  /* 3189 */ 'A', 's', 'm', 'C', 'L', 'G', 'R', 'J', 0,
  /* 3198 */ 'A', 's', 'm', 'C', 'L', 'R', 'J', 0,
  /* 3206 */ 'S', 'R', 'A', 'K', 0,
  /* 3211 */ 'A', 'H', 'I', 'K', 0,
  /* 3216 */ 'A', 'G', 'H', 'I', 'K', 0,
  /* 3222 */ 'A', 'L', 'G', 'H', 'S', 'I', 'K', 0,
  /* 3230 */ 'A', 'L', 'H', 'S', 'I', 'K', 0,
  /* 3237 */ 'S', 'L', 'L', 'K', 0,
  /* 3242 */ 'S', 'R', 'L', 'K', 0,
  /* 3247 */ 'A', 'R', 'K', 0,
  /* 3251 */ 'A', 'G', 'R', 'K', 0,
  /* 3256 */ 'A', 'L', 'G', 'R', 'K', 0,
  /* 3262 */ 'S', 'L', 'G', 'R', 'K', 0,
  /* 3268 */ 'N', 'G', 'R', 'K', 0,
  /* 3273 */ 'O', 'G', 'R', 'K', 0,
  /* 3278 */ 'S', 'G', 'R', 'K', 0,
  /* 3283 */ 'X', 'G', 'R', 'K', 0,
  /* 3288 */ 'A', 'L', 'R', 'K', 0,
  /* 3293 */ 'S', 'L', 'R', 'K', 0,
  /* 3298 */ 'N', 'R', 'K', 0,
  /* 3302 */ 'O', 'R', 'K', 0,
  /* 3306 */ 'S', 'R', 'K', 0,
  /* 3310 */ 'X', 'R', 'K', 0,
  /* 3314 */ 'A', 'H', 'I', 'M', 'u', 'x', 'K', 0,
  /* 3322 */ 'L', 'A', 'A', 'L', 0,
  /* 3327 */ 'A', 's', 'm', 'B', 'R', 'C', 'L', 0,
  /* 3335 */ 'D', 'L', 0,
  /* 3338 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 3347 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 3356 */ 'R', 'I', 'S', 'B', 'H', 'L', 0,
  /* 3363 */ 'I', 'I', 'H', 'L', 0,
  /* 3368 */ 'L', 'L', 'I', 'H', 'L', 0,
  /* 3374 */ 'N', 'I', 'H', 'L', 0,
  /* 3379 */ 'O', 'I', 'H', 'L', 0,
  /* 3384 */ 'T', 'M', 'H', 'L', 0,
  /* 3389 */ 'T', 'L', 'S', '_', 'G', 'D', 'C', 'A', 'L', 'L', 0,
  /* 3400 */ 'T', 'L', 'S', '_', 'L', 'D', 'C', 'A', 'L', 'L', 0,
  /* 3411 */ 'R', 'I', 'S', 'B', 'L', 'L', 0,
  /* 3418 */ 'I', 'I', 'L', 'L', 0,
  /* 3423 */ 'K', 'I', 'L', 'L', 0,
  /* 3428 */ 'L', 'L', 'I', 'L', 'L', 0,
  /* 3434 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 0,
  /* 3451 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', 0,
  /* 3468 */ 'T', 'M', 'L', 'L', 0,
  /* 3473 */ 'R', 'L', 'L', 0,
  /* 3477 */ 'S', 'L', 'L', 0,
  /* 3481 */ 'L', 'A', 'R', 'L', 0,
  /* 3486 */ 'C', 'R', 'L', 0,
  /* 3490 */ 'P', 'F', 'D', 'R', 'L', 0,
  /* 3496 */ 'C', 'G', 'F', 'R', 'L', 0,
  /* 3502 */ 'C', 'L', 'G', 'F', 'R', 'L', 0,
  /* 3509 */ 'L', 'L', 'G', 'F', 'R', 'L', 0,
  /* 3516 */ 'C', 'G', 'R', 'L', 0,
  /* 3521 */ 'C', 'L', 'G', 'R', 'L', 0,
  /* 3527 */ 'S', 'T', 'G', 'R', 'L', 0,
  /* 3533 */ 'C', 'H', 'R', 'L', 0,
  /* 3538 */ 'C', 'G', 'H', 'R', 'L', 0,
  /* 3544 */ 'C', 'L', 'G', 'H', 'R', 'L', 0,
  /* 3551 */ 'L', 'L', 'G', 'H', 'R', 'L', 0,
  /* 3558 */ 'C', 'L', 'H', 'R', 'L', 0,
  /* 3564 */ 'L', 'L', 'H', 'R', 'L', 0,
  /* 3570 */ 'S', 'T', 'H', 'R', 'L', 0,
  /* 3576 */ 'C', 'L', 'R', 'L', 0,
  /* 3581 */ 'S', 'R', 'L', 0,
  /* 3585 */ 'S', 'T', 'R', 'L', 0,
  /* 3590 */ 'C', 'a', 'l', 'l', 'B', 'R', 'A', 'S', 'L', 0,
  /* 3600 */ 'I', 'P', 'M', 0,
  /* 3604 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 3614 */ 'T', 'M', 0,
  /* 3617 */ 'L', 'A', 'N', 0,
  /* 3621 */ 'R', 'I', 'S', 'B', 'G', 'N', 0,
  /* 3628 */ 'T', 'B', 'E', 'G', 'I', 'N', 0,
  /* 3635 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 3653 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'I', 'N', 0,
  /* 3670 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 3686 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 3703 */ 'L', 'A', 'O', 0,
  /* 3707 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 3716 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3731 */ 'E', 'A', 'R', 0,
  /* 3735 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'R', 0,
  /* 3750 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'R', 0,
  /* 3766 */ 'M', 'A', 'D', 'B', 'R', 0,
  /* 3772 */ 'L', 'C', 'D', 'B', 'R', 0,
  /* 3778 */ 'D', 'D', 'B', 'R', 0,
  /* 3783 */ 'L', 'E', 'D', 'B', 'R', 0,
  /* 3789 */ 'C', 'F', 'D', 'B', 'R', 0,
  /* 3795 */ 'C', 'L', 'F', 'D', 'B', 'R', 0,
  /* 3802 */ 'C', 'G', 'D', 'B', 'R', 0,
  /* 3808 */ 'C', 'L', 'G', 'D', 'B', 'R', 0,
  /* 3815 */ 'F', 'I', 'D', 'B', 'R', 0,
  /* 3821 */ 'M', 'D', 'B', 'R', 0,
  /* 3826 */ 'L', 'N', 'D', 'B', 'R', 0,
  /* 3832 */ 'L', 'P', 'D', 'B', 'R', 0,
  /* 3838 */ 'S', 'Q', 'D', 'B', 'R', 0,
  /* 3844 */ 'M', 'S', 'D', 'B', 'R', 0,
  /* 3850 */ 'L', 'T', 'D', 'B', 'R', 0,
  /* 3856 */ 'L', 'X', 'D', 'B', 'R', 0,
  /* 3862 */ 'M', 'X', 'D', 'B', 'R', 0,
  /* 3868 */ 'M', 'A', 'E', 'B', 'R', 0,
  /* 3874 */ 'L', 'C', 'E', 'B', 'R', 0,
  /* 3880 */ 'L', 'D', 'E', 'B', 'R', 0,
  /* 3886 */ 'M', 'D', 'E', 'B', 'R', 0,
  /* 3892 */ 'M', 'E', 'E', 'B', 'R', 0,
  /* 3898 */ 'C', 'F', 'E', 'B', 'R', 0,
  /* 3904 */ 'C', 'L', 'F', 'E', 'B', 'R', 0,
  /* 3911 */ 'C', 'G', 'E', 'B', 'R', 0,
  /* 3917 */ 'C', 'L', 'G', 'E', 'B', 'R', 0,
  /* 3924 */ 'A', 's', 'm', 'N', 'H', 'E', 'B', 'R', 0,
  /* 3933 */ 'A', 's', 'm', 'H', 'E', 'B', 'R', 0,
  /* 3941 */ 'F', 'I', 'E', 'B', 'R', 0,
  /* 3947 */ 'A', 's', 'm', 'N', 'L', 'E', 'B', 'R', 0,
  /* 3956 */ 'A', 's', 'm', 'L', 'E', 'B', 'R', 0,
  /* 3964 */ 'L', 'N', 'E', 'B', 'R', 0,
  /* 3970 */ 'A', 's', 'm', 'N', 'E', 'B', 'R', 0,
  /* 3978 */ 'L', 'P', 'E', 'B', 'R', 0,
  /* 3984 */ 'S', 'Q', 'E', 'B', 'R', 0,
  /* 3990 */ 'M', 'S', 'E', 'B', 'R', 0,
  /* 3996 */ 'L', 'T', 'E', 'B', 'R', 0,
  /* 4002 */ 'L', 'X', 'E', 'B', 'R', 0,
  /* 4008 */ 'A', 's', 'm', 'E', 'B', 'R', 0,
  /* 4015 */ 'C', 'D', 'F', 'B', 'R', 0,
  /* 4021 */ 'C', 'E', 'F', 'B', 'R', 0,
  /* 4027 */ 'C', 'D', 'L', 'F', 'B', 'R', 0,
  /* 4034 */ 'C', 'E', 'L', 'F', 'B', 'R', 0,
  /* 4041 */ 'C', 'X', 'L', 'F', 'B', 'R', 0,
  /* 4048 */ 'C', 'X', 'F', 'B', 'R', 0,
  /* 4054 */ 'C', 'D', 'G', 'B', 'R', 0,
  /* 4060 */ 'C', 'E', 'G', 'B', 'R', 0,
  /* 4066 */ 'C', 'D', 'L', 'G', 'B', 'R', 0,
  /* 4073 */ 'C', 'E', 'L', 'G', 'B', 'R', 0,
  /* 4080 */ 'S', 'L', 'G', 'B', 'R', 0,
  /* 4086 */ 'C', 'X', 'L', 'G', 'B', 'R', 0,
  /* 4093 */ 'C', 'X', 'G', 'B', 'R', 0,
  /* 4099 */ 'A', 's', 'm', 'N', 'L', 'H', 'B', 'R', 0,
  /* 4108 */ 'A', 's', 'm', 'L', 'H', 'B', 'R', 0,
  /* 4116 */ 'A', 's', 'm', 'N', 'H', 'B', 'R', 0,
  /* 4124 */ 'A', 's', 'm', 'H', 'B', 'R', 0,
  /* 4131 */ 'A', 's', 'm', 'N', 'L', 'B', 'R', 0,
  /* 4139 */ 'S', 'L', 'B', 'R', 0,
  /* 4144 */ 'A', 's', 'm', 'L', 'B', 'R', 0,
  /* 4151 */ 'A', 's', 'm', 'N', 'O', 'B', 'R', 0,
  /* 4159 */ 'A', 's', 'm', 'O', 'B', 'R', 0,
  /* 4166 */ 'A', 'X', 'B', 'R', 0,
  /* 4171 */ 'L', 'C', 'X', 'B', 'R', 0,
  /* 4177 */ 'L', 'D', 'X', 'B', 'R', 0,
  /* 4183 */ 'L', 'E', 'X', 'B', 'R', 0,
  /* 4189 */ 'C', 'F', 'X', 'B', 'R', 0,
  /* 4195 */ 'C', 'L', 'F', 'X', 'B', 'R', 0,
  /* 4202 */ 'C', 'G', 'X', 'B', 'R', 0,
  /* 4208 */ 'C', 'L', 'G', 'X', 'B', 'R', 0,
  /* 4215 */ 'F', 'I', 'X', 'B', 'R', 0,
  /* 4221 */ 'M', 'X', 'B', 'R', 0,
  /* 4226 */ 'L', 'N', 'X', 'B', 'R', 0,
  /* 4232 */ 'L', 'P', 'X', 'B', 'R', 0,
  /* 4238 */ 'S', 'Q', 'X', 'B', 'R', 0,
  /* 4244 */ 'S', 'X', 'B', 'R', 0,
  /* 4249 */ 'L', 'T', 'X', 'B', 'R', 0,
  /* 4255 */ 'C', 'a', 'l', 'l', 'B', 'R', 0,
  /* 4262 */ 'A', 's', 'm', 'B', 'C', 'R', 0,
  /* 4269 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'R', 0,
  /* 4278 */ 'A', 's', 'm', 'J', 'E', 'C', 'R', 0,
  /* 4286 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'R', 0,
  /* 4295 */ 'L', 'L', 'G', 'C', 'R', 0,
  /* 4301 */ 'A', 's', 'm', 'J', 'H', 'C', 'R', 0,
  /* 4309 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'R', 0,
  /* 4318 */ 'A', 'L', 'C', 'R', 0,
  /* 4323 */ 'A', 's', 'm', 'J', 'L', 'C', 'R', 0,
  /* 4331 */ 'L', 'L', 'C', 'R', 0,
  /* 4336 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'R', 0,
  /* 4347 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'R', 0,
  /* 4357 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'R', 0,
  /* 4368 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'R', 0,
  /* 4378 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'R', 0,
  /* 4388 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'R', 0,
  /* 4397 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'R', 0,
  /* 4408 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'R', 0,
  /* 4418 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'R', 0,
  /* 4428 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'R', 0,
  /* 4437 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'R', 0,
  /* 4447 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'R', 0,
  /* 4456 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'R', 0,
  /* 4466 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'R', 0,
  /* 4475 */ 'A', 's', 'm', 'L', 'O', 'C', 'R', 0,
  /* 4483 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 4495 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 4506 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'R', 0,
  /* 4518 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'R', 0,
  /* 4529 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'R', 0,
  /* 4541 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'R', 0,
  /* 4552 */ 'L', 'G', 'D', 'R', 0,
  /* 4557 */ 'L', 'D', 'R', 0,
  /* 4561 */ 'L', 'Z', 'D', 'R', 0,
  /* 4566 */ 'L', 'E', 'R', 0,
  /* 4570 */ 'L', 'Z', 'E', 'R', 0,
  /* 4575 */ 'A', 'G', 'F', 'R', 0,
  /* 4580 */ 'L', 'C', 'G', 'F', 'R', 0,
  /* 4586 */ 'A', 'L', 'G', 'F', 'R', 0,
  /* 4592 */ 'C', 'L', 'G', 'F', 'R', 0,
  /* 4598 */ 'L', 'L', 'G', 'F', 'R', 0,
  /* 4604 */ 'S', 'L', 'G', 'F', 'R', 0,
  /* 4610 */ 'L', 'N', 'G', 'F', 'R', 0,
  /* 4616 */ 'L', 'P', 'G', 'F', 'R', 0,
  /* 4622 */ 'D', 'S', 'G', 'F', 'R', 0,
  /* 4628 */ 'M', 'S', 'G', 'F', 'R', 0,
  /* 4634 */ 'L', 'T', 'G', 'F', 'R', 0,
  /* 4640 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'R', 0,
  /* 4656 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'G', 'R', 0,
  /* 4666 */ 'A', 's', 'm', 'J', 'E', 'C', 'G', 'R', 0,
  /* 4675 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'G', 'R', 0,
  /* 4685 */ 'A', 's', 'm', 'J', 'H', 'C', 'G', 'R', 0,
  /* 4694 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'G', 'R', 0,
  /* 4704 */ 'A', 'L', 'C', 'G', 'R', 0,
  /* 4710 */ 'A', 's', 'm', 'J', 'L', 'C', 'G', 'R', 0,
  /* 4719 */ 'A', 's', 'm', 'N', 'H', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4731 */ 'A', 's', 'm', 'H', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4742 */ 'A', 's', 'm', 'N', 'L', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4754 */ 'A', 's', 'm', 'L', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4765 */ 'A', 's', 'm', 'N', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4776 */ 'A', 's', 'm', 'E', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4786 */ 'A', 's', 'm', 'N', 'L', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4798 */ 'A', 's', 'm', 'L', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4809 */ 'A', 's', 'm', 'N', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4820 */ 'A', 's', 'm', 'H', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4830 */ 'A', 's', 'm', 'N', 'L', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4841 */ 'A', 's', 'm', 'L', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4851 */ 'A', 's', 'm', 'N', 'O', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4862 */ 'A', 's', 'm', 'O', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4872 */ 'A', 's', 'm', 'L', 'O', 'C', 'G', 'R', 0,
  /* 4881 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4894 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4906 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4919 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4931 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4944 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'G', 'R', 0,
  /* 4956 */ 'L', 'D', 'G', 'R', 0,
  /* 4961 */ 'A', 'L', 'G', 'R', 0,
  /* 4966 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'L', 'G', 'R', 0,
  /* 4977 */ 'A', 's', 'm', 'J', 'E', 'C', 'L', 'G', 'R', 0,
  /* 4987 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'L', 'G', 'R', 0,
  /* 4998 */ 'A', 's', 'm', 'J', 'H', 'C', 'L', 'G', 'R', 0,
  /* 5008 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'L', 'G', 'R', 0,
  /* 5019 */ 'A', 's', 'm', 'J', 'L', 'C', 'L', 'G', 'R', 0,
  /* 5029 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'L', 'G', 'R', 0,
  /* 5043 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'L', 'G', 'R', 0,
  /* 5056 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'L', 'G', 'R', 0,
  /* 5070 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'L', 'G', 'R', 0,
  /* 5083 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'L', 'G', 'R', 0,
  /* 5097 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'L', 'G', 'R', 0,
  /* 5110 */ 'D', 'L', 'G', 'R', 0,
  /* 5115 */ 'M', 'L', 'G', 'R', 0,
  /* 5120 */ 'S', 'L', 'G', 'R', 0,
  /* 5125 */ 'L', 'N', 'G', 'R', 0,
  /* 5130 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 0,
  /* 5146 */ 'F', 'L', 'O', 'G', 'R', 0,
  /* 5152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'G', 'R', 0,
  /* 5168 */ 'L', 'P', 'G', 'R', 0,
  /* 5173 */ 'D', 'S', 'G', 'R', 0,
  /* 5178 */ 'M', 'S', 'G', 'R', 0,
  /* 5183 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'G', 'R', 0,
  /* 5199 */ 'L', 'T', 'G', 'R', 0,
  /* 5204 */ 'L', 'R', 'V', 'G', 'R', 0,
  /* 5210 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'G', 'R', 0,
  /* 5226 */ 'L', 'L', 'G', 'H', 'R', 0,
  /* 5232 */ 'L', 'L', 'H', 'R', 0,
  /* 5237 */ 'A', 'L', 'R', 0,
  /* 5241 */ 'A', 's', 'm', 'J', 'H', 'E', 'C', 'L', 'R', 0,
  /* 5251 */ 'A', 's', 'm', 'J', 'E', 'C', 'L', 'R', 0,
  /* 5260 */ 'A', 's', 'm', 'J', 'L', 'E', 'C', 'L', 'R', 0,
  /* 5270 */ 'A', 's', 'm', 'J', 'H', 'C', 'L', 'R', 0,
  /* 5279 */ 'A', 's', 'm', 'J', 'L', 'H', 'C', 'L', 'R', 0,
  /* 5289 */ 'A', 's', 'm', 'J', 'L', 'C', 'L', 'R', 0,
  /* 5298 */ 'A', 's', 'm', 'J', 'H', 'E', 'A', 'l', 't', 'C', 'L', 'R', 0,
  /* 5311 */ 'A', 's', 'm', 'J', 'E', 'A', 'l', 't', 'C', 'L', 'R', 0,
  /* 5323 */ 'A', 's', 'm', 'J', 'L', 'E', 'A', 'l', 't', 'C', 'L', 'R', 0,
  /* 5336 */ 'A', 's', 'm', 'J', 'H', 'A', 'l', 't', 'C', 'L', 'R', 0,
  /* 5348 */ 'A', 's', 'm', 'J', 'L', 'H', 'A', 'l', 't', 'C', 'L', 'R', 0,
  /* 5361 */ 'A', 's', 'm', 'J', 'L', 'A', 'l', 't', 'C', 'L', 'R', 0,
  /* 5373 */ 'D', 'L', 'R', 0,
  /* 5377 */ 'S', 'L', 'R', 0,
  /* 5381 */ 'L', 'N', 'R', 0,
  /* 5385 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 0,
  /* 5400 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 0,
  /* 5416 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', 0,
  /* 5431 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'R', 0,
  /* 5447 */ 'L', 'P', 'R', 0,
  /* 5451 */ 'C', 'a', 'l', 'l', 'B', 'A', 'S', 'R', 0,
  /* 5460 */ 'M', 'S', 'R', 0,
  /* 5464 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'R', 0,
  /* 5479 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'S', 'R', 0,
  /* 5495 */ 'L', 'T', 'R', 0,
  /* 5499 */ 'L', 'R', 'V', 'R', 0,
  /* 5504 */ 'L', 'X', 'R', 0,
  /* 5508 */ 'L', 'Z', 'X', 'R', 0,
  /* 5513 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'R', 0,
  /* 5528 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'R', 0,
  /* 5544 */ 'B', 'R', 'A', 'S', 0,
  /* 5549 */ 'C', 'S', 0,
  /* 5552 */ 'M', 'S', 0,
  /* 5555 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 5572 */ 'B', 'R', 'C', 'T', 0,
  /* 5577 */ 'L', 'T', 0,
  /* 5580 */ 'P', 'O', 'P', 'C', 'N', 'T', 0,
  /* 5587 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 5598 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 5609 */ 'G', 'O', 'T', 0,
  /* 5613 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5628 */ 'T', 'A', 'B', 'O', 'R', 'T', 0,
  /* 5635 */ 'C', 'L', 'S', 'T', 0,
  /* 5640 */ 'S', 'R', 'S', 'T', 0,
  /* 5645 */ 'M', 'V', 'S', 'T', 0,
  /* 5650 */ 'L', 'R', 'V', 0,
  /* 5654 */ 'S', 'T', 'R', 'V', 0,
  /* 5659 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 5672 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 5689 */ 'L', 'A', 'X', 0,
  /* 5693 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 5711 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'A', 'X', 0,
  /* 5728 */ 'L', 'X', 0,
  /* 5731 */ 'S', 'T', 'X', 0,
  /* 5735 */ 'I', 'C', '3', '2', 'Y', 0,
  /* 5741 */ 'L', 'A', 'Y', 0,
  /* 5745 */ 'I', 'C', 'Y', 0,
  /* 5749 */ 'S', 'T', 'C', 'Y', 0,
  /* 5754 */ 'L', 'D', 'Y', 0,
  /* 5758 */ 'S', 'T', 'D', 'Y', 0,
  /* 5763 */ 'L', 'E', 'Y', 0,
  /* 5767 */ 'S', 'T', 'E', 'Y', 0,
  /* 5772 */ 'A', 'H', 'Y', 0,
  /* 5776 */ 'C', 'H', 'Y', 0,
  /* 5780 */ 'L', 'H', 'Y', 0,
  /* 5784 */ 'M', 'H', 'Y', 0,
  /* 5788 */ 'S', 'H', 'Y', 0,
  /* 5792 */ 'S', 'T', 'H', 'Y', 0,
  /* 5797 */ 'C', 'L', 'I', 'Y', 0,
  /* 5802 */ 'N', 'I', 'Y', 0,
  /* 5806 */ 'O', 'I', 'Y', 0,
  /* 5810 */ 'M', 'V', 'I', 'Y', 0,
  /* 5815 */ 'X', 'I', 'Y', 0,
  /* 5819 */ 'A', 'L', 'Y', 0,
  /* 5823 */ 'C', 'L', 'Y', 0,
  /* 5827 */ 'S', 'L', 'Y', 0,
  /* 5831 */ 'T', 'M', 'Y', 0,
  /* 5835 */ 'N', 'Y', 0,
  /* 5838 */ 'O', 'Y', 0,
  /* 5841 */ 'C', 'O', 'P', 'Y', 0,
  /* 5846 */ 'C', 'S', 'Y', 0,
  /* 5850 */ 'M', 'S', 'Y', 0,
  /* 5854 */ 'S', 'T', 'Y', 0,
  /* 5858 */ 'X', 'Y', 0,
  /* 5861 */ 'C', 'P', 'S', 'D', 'R', 'd', 'd', 0,
  /* 5869 */ 'C', 'P', 'S', 'D', 'R', 's', 'd', 0,
  /* 5877 */ 'C', 'L', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 5889 */ 'N', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 5900 */ 'O', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 5911 */ 'M', 'V', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 5923 */ 'X', 'C', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0,
  /* 5934 */ 'L', 'T', 'D', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 5947 */ 'L', 'T', 'E', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 5960 */ 'L', 'T', 'X', 'B', 'R', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 0,
  /* 5973 */ 'S', 'e', 'r', 'i', 'a', 'l', 'i', 'z', 'e', 0,
  /* 5983 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', '6', '4', 'i', 0,
  /* 6003 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '6', '4', 'i', 0,
  /* 6023 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', '6', '4', 'i', 0,
  /* 6043 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '6', '4', 'i', 0,
  /* 6063 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', '6', '4', 'i', 0,
  /* 6083 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '6', '4', 'i', 0,
  /* 6103 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 'i', 0,
  /* 6121 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 6139 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 6158 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 'i', 0,
  /* 6176 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 'i', 0,
  /* 6193 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 'i', 0,
  /* 6209 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 'i', 0,
  /* 6226 */ 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 6233 */ 'C', 'L', 'C', 'L', 'o', 'o', 'p', 0,
  /* 6241 */ 'N', 'C', 'L', 'o', 'o', 'p', 0,
  /* 6248 */ 'O', 'C', 'L', 'o', 'o', 'p', 0,
  /* 6255 */ 'M', 'V', 'C', 'L', 'o', 'o', 'p', 0,
  /* 6263 */ 'X', 'C', 'L', 'o', 'o', 'p', 0,
  /* 6270 */ 'C', 'L', 'S', 'T', 'L', 'o', 'o', 'p', 0,
  /* 6279 */ 'S', 'R', 'S', 'T', 'L', 'o', 'o', 'p', 0,
  /* 6288 */ 'M', 'V', 'S', 'T', 'L', 'o', 'o', 'p', 0,
  /* 6297 */ 'C', 'P', 'S', 'D', 'R', 'd', 's', 0,
  /* 6305 */ 'C', 'P', 'S', 'D', 'R', 's', 's', 0,
  /* 6313 */ 'T', 'B', 'E', 'G', 'I', 'N', '_', 'n', 'o', 'f', 'l', 'o', 'a', 't', 0,
  /* 6328 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '3', '2', 'I', 'n', 'v', 0,
  /* 6344 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '3', '2', 'I', 'n', 'v', 0,
  /* 6359 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', 'F', '6', '4', 'I', 'n', 'v', 0,
  /* 6375 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '6', '4', 'I', 'n', 'v', 0,
  /* 6390 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 'I', 'n', 'v', 0,
  /* 6405 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 'I', 'n', 'v', 0,
  /* 6419 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 'M', 'u', 'x', 'I', 'n', 'v', 0,
  /* 6437 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 'M', 'u', 'x', 'I', 'n', 'v', 0,
  /* 6454 */ 'S', 'e', 'l', 'e', 'c', 't', '3', '2', 'M', 'u', 'x', 0,
  /* 6466 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '1', '6', 'M', 'u', 'x', 0,
  /* 6481 */ 'C', 'o', 'n', 'd', 'S', 't', 'o', 'r', 'e', '8', 'M', 'u', 'x', 0,
  /* 6495 */ 'L', 'B', 'M', 'u', 'x', 0,
  /* 6501 */ 'R', 'I', 'S', 'B', 'M', 'u', 'x', 0,
  /* 6509 */ 'L', 'L', 'C', 'M', 'u', 'x', 0,
  /* 6516 */ 'S', 'T', 'C', 'M', 'u', 'x', 0,
  /* 6523 */ 'I', 'I', 'F', 'M', 'u', 'x', 0,
  /* 6530 */ 'N', 'I', 'F', 'M', 'u', 'x', 0,
  /* 6537 */ 'O', 'I', 'F', 'M', 'u', 'x', 0,
  /* 6544 */ 'X', 'I', 'F', 'M', 'u', 'x', 0,
  /* 6551 */ 'I', 'I', 'H', 'M', 'u', 'x', 0,
  /* 6558 */ 'N', 'I', 'H', 'M', 'u', 'x', 0,
  /* 6565 */ 'O', 'I', 'H', 'M', 'u', 'x', 0,
  /* 6572 */ 'L', 'L', 'H', 'M', 'u', 'x', 0,
  /* 6579 */ 'T', 'M', 'H', 'M', 'u', 'x', 0,
  /* 6586 */ 'S', 'T', 'H', 'M', 'u', 'x', 0,
  /* 6593 */ 'A', 'F', 'I', 'M', 'u', 'x', 0,
  /* 6600 */ 'C', 'F', 'I', 'M', 'u', 'x', 0,
  /* 6607 */ 'C', 'L', 'F', 'I', 'M', 'u', 'x', 0,
  /* 6615 */ 'A', 'H', 'I', 'M', 'u', 'x', 0,
  /* 6622 */ 'L', 'H', 'I', 'M', 'u', 'x', 0,
  /* 6629 */ 'C', 'L', 'M', 'u', 'x', 0,
  /* 6635 */ 'I', 'I', 'L', 'M', 'u', 'x', 0,
  /* 6642 */ 'N', 'I', 'L', 'M', 'u', 'x', 0,
  /* 6649 */ 'O', 'I', 'L', 'M', 'u', 'x', 0,
  /* 6656 */ 'T', 'M', 'L', 'M', 'u', 'x', 0,
  /* 6663 */ 'L', 'L', 'C', 'R', 'M', 'u', 'x', 0,
  /* 6671 */ 'L', 'L', 'H', 'R', 'M', 'u', 'x', 0,
  /* 6679 */ 'L', 'R', 'M', 'u', 'x', 0,
  /* 6685 */ 'S', 'T', 'M', 'u', 'x', 0,
};

extern const unsigned SystemZInstrNameIndices[] = {
    2844U, 3604U, 3670U, 3347U, 3338U, 3423U, 1800U, 1815U, 
    1276U, 1829U, 5555U, 1266U, 1242U, 5841U, 1255U, 5613U, 
    1203U, 3707U, 5598U, 1221U, 5587U, 973U, 703U, 759U, 
    3767U, 3686U, 3716U, 961U, 796U, 3869U, 520U, 2405U, 
    6593U, 1449U, 1289U, 2442U, 4575U, 2804U, 3216U, 4652U, 
    3251U, 2995U, 2075U, 2784U, 3211U, 6615U, 3314U, 5772U, 
    2153U, 3324U, 850U, 1486U, 4704U, 4318U, 2476U, 1970U, 
    1297U, 2452U, 4586U, 3222U, 4961U, 3256U, 3230U, 5237U, 
    3288U, 5819U, 3732U, 3247U, 2991U, 5672U, 2409U, 3750U, 
    5711U, 3653U, 2201U, 6139U, 5400U, 6209U, 2236U, 5431U, 
    5479U, 5693U, 3635U, 1429U, 5528U, 2393U, 2430U, 2792U, 
    4640U, 2772U, 3735U, 121U, 616U, 67U, 562U, 5130U, 
    6176U, 168U, 5983U, 319U, 6023U, 423U, 6063U, 1378U, 
    232U, 6003U, 6103U, 2184U, 371U, 6043U, 6121U, 3434U, 
    475U, 6083U, 6158U, 5385U, 6193U, 5152U, 187U, 338U, 
    442U, 1395U, 251U, 2219U, 390U, 3451U, 494U, 5416U, 
    5183U, 5464U, 101U, 596U, 47U, 542U, 5210U, 206U, 
    1412U, 270U, 5513U, 5659U, 86U, 581U, 4166U, 5742U, 
    4262U, 1173U, 3327U, 3123U, 3181U, 3116U, 3131U, 3189U, 
    3140U, 3198U, 3174U, 4008U, 3082U, 1892U, 917U, 1543U, 
    4776U, 4388U, 1078U, 1695U, 4124U, 3933U, 3053U, 1859U, 
    880U, 1502U, 4731U, 4347U, 1037U, 1650U, 3110U, 1924U, 
    953U, 1583U, 4820U, 4428U, 1118U, 1739U, 2566U, 4894U, 
    2336U, 2705U, 5043U, 2923U, 5311U, 4495U, 2506U, 4666U, 
    2282U, 2639U, 4977U, 2863U, 5251U, 4278U, 2591U, 4919U, 
    2359U, 2732U, 5070U, 2948U, 5336U, 4518U, 2525U, 4685U, 
    2299U, 2660U, 4998U, 2882U, 5270U, 4301U, 2553U, 4881U, 
    2324U, 2691U, 5029U, 2910U, 5298U, 4483U, 2496U, 4656U, 
    2273U, 2628U, 4966U, 2853U, 5241U, 4269U, 2616U, 4944U, 
    2382U, 2759U, 5097U, 2973U, 5361U, 4541U, 2544U, 4710U, 
    2316U, 2681U, 5019U, 2901U, 5289U, 4323U, 2578U, 4906U, 
    2347U, 2718U, 5056U, 2935U, 5323U, 4506U, 2515U, 4675U, 
    2290U, 2649U, 4987U, 2872U, 5260U, 4286U, 2603U, 4931U, 
    2370U, 2745U, 5083U, 2960U, 5348U, 4529U, 2534U, 4694U, 
    2307U, 2670U, 5008U, 2891U, 5279U, 4309U, 4144U, 3956U, 
    3068U, 1876U, 899U, 1523U, 4754U, 4368U, 1058U, 1673U, 
    4108U, 3096U, 1908U, 935U, 1563U, 4798U, 4408U, 1098U, 
    1717U, 3155U, 1939U, 994U, 1602U, 4841U, 4447U, 1019U, 
    1630U, 4872U, 4475U, 1137U, 1760U, 3970U, 3075U, 1884U, 
    908U, 1533U, 4765U, 4378U, 1068U, 1684U, 4116U, 3924U, 
    3045U, 1850U, 870U, 1491U, 4719U, 4336U, 1026U, 1638U, 
    3103U, 1916U, 944U, 1573U, 4809U, 4418U, 1108U, 1728U, 
    4131U, 3947U, 3060U, 1867U, 889U, 1512U, 4742U, 4357U, 
    1047U, 1661U, 4099U, 3088U, 1899U, 925U, 1552U, 4786U, 
    4397U, 1087U, 1705U, 3148U, 1931U, 985U, 1592U, 4830U, 
    4437U, 1127U, 1749U, 4151U, 3161U, 1946U, 1002U, 1611U, 
    4851U, 4456U, 1146U, 1770U, 4159U, 3168U, 1954U, 1011U, 
    1621U, 4862U, 4466U, 1156U, 1781U, 1165U, 1791U, 5455U, 
    3769U, 5544U, 3594U, 1176U, 3330U, 5572U, 2043U, 845U, 
    763U, 3773U, 4015U, 4054U, 4027U, 4066U, 800U, 3875U, 
    4021U, 4060U, 4034U, 4073U, 3789U, 3898U, 2426U, 6600U, 
    4189U, 1488U, 3802U, 3911U, 1293U, 2447U, 4581U, 3496U, 
    2101U, 2809U, 3538U, 3012U, 3126U, 4662U, 3184U, 3516U, 
    4202U, 2084U, 1332U, 3025U, 2788U, 3533U, 3000U, 5776U, 
    2157U, 3119U, 3332U, 854U, 6233U, 5877U, 3795U, 3904U, 
    3005U, 2481U, 6607U, 4195U, 1981U, 3808U, 3917U, 1302U, 
    2458U, 4592U, 3502U, 3544U, 3018U, 3134U, 4972U, 3192U, 
    3521U, 4208U, 1362U, 3031U, 3558U, 2859U, 2161U, 3143U, 
    5797U, 6629U, 5247U, 3201U, 3576U, 5635U, 6270U, 5823U, 
    6511U, 5861U, 6297U, 5869U, 6305U, 4266U, 3177U, 3486U, 
    5549U, 2031U, 5846U, 4172U, 4048U, 4093U, 4041U, 4086U, 
    5746U, 5451U, 4255U, 3590U, 1961U, 656U, 6390U, 6466U, 
    6419U, 140U, 6344U, 635U, 6375U, 690U, 6405U, 6481U, 
    6437U, 5U, 6328U, 289U, 6359U, 767U, 3778U, 805U, 
    3881U, 3335U, 1985U, 5110U, 5373U, 2035U, 1317U, 4622U, 
    5173U, 4178U, 3731U, 1216U, 3815U, 719U, 3941U, 726U, 
    4215U, 747U, 5146U, 5609U, 847U, 0U, 5735U, 5745U, 
    6523U, 1336U, 161U, 2117U, 312U, 3363U, 416U, 6551U, 
    1367U, 225U, 2173U, 364U, 3418U, 468U, 6635U, 3600U, 
    3051U, 1856U, 3325U, 679U, 705U, 701U, 1447U, 3322U, 
    1968U, 3617U, 2021U, 3703U, 2026U, 3481U, 5689U, 2070U, 
    5741U, 839U, 2078U, 6495U, 4135U, 3772U, 3874U, 4580U, 
    4705U, 4319U, 4171U, 1195U, 804U, 3880U, 4956U, 4557U, 
    4177U, 733U, 5754U, 1259U, 3783U, 712U, 4566U, 4183U, 
    740U, 5763U, 2092U, 1971U, 834U, 4068U, 4552U, 1298U, 
    2453U, 4587U, 3503U, 2106U, 2814U, 5227U, 3545U, 4962U, 
    3522U, 2170U, 2139U, 2836U, 6622U, 6573U, 5233U, 3559U, 
    5780U, 858U, 2082U, 6509U, 4331U, 6663U, 842U, 4295U, 
    1307U, 4598U, 3509U, 2105U, 5226U, 3551U, 2254U, 2138U, 
    6572U, 5232U, 3564U, 6671U, 1341U, 2122U, 3368U, 1372U, 
    2178U, 3428U, 2012U, 6630U, 3826U, 3964U, 4610U, 5125U, 
    5381U, 4226U, 876U, 1497U, 4725U, 4342U, 3832U, 3978U, 
    4616U, 5168U, 5447U, 4232U, 5238U, 3577U, 6679U, 5650U, 
    2059U, 5204U, 5499U, 5577U, 3850U, 5934U, 3996U, 5947U, 
    2049U, 1327U, 4634U, 5199U, 5495U, 4249U, 5960U, 5728U, 
    785U, 3856U, 829U, 4002U, 5504U, 5820U, 4561U, 4570U, 
    5508U, 758U, 3766U, 795U, 3868U, 771U, 3821U, 809U, 
    3886U, 814U, 3892U, 2819U, 2263U, 2840U, 5784U, 1999U, 
    5115U, 5552U, 780U, 3844U, 824U, 3990U, 2491U, 2039U, 
    1322U, 2470U, 4628U, 5178U, 5460U, 5850U, 1184U, 6255U, 
    5911U, 2824U, 2830U, 2848U, 3038U, 5810U, 5645U, 6288U, 
    4221U, 790U, 3862U, 3619U, 867U, 6241U, 5889U, 2023U, 
    5126U, 3268U, 2985U, 6530U, 1347U, 180U, 2128U, 331U, 
    3374U, 435U, 6558U, 1390U, 244U, 2196U, 383U, 3446U, 
    487U, 6642U, 5802U, 5382U, 3298U, 2053U, 5835U, 3705U, 
    877U, 6248U, 5900U, 2028U, 5148U, 3273U, 2988U, 6537U, 
    1352U, 199U, 2133U, 350U, 3379U, 454U, 6565U, 1407U, 
    263U, 2231U, 402U, 3463U, 506U, 6649U, 5806U, 5428U, 
    3302U, 5838U, 1191U, 3490U, 5580U, 708U, 1462U, 28U, 
    3621U, 1843U, 2110U, 3356U, 1974U, 2166U, 3411U, 6501U, 
    3473U, 1989U, 1468U, 1474U, 1480U, 6226U, 5547U, 781U, 
    3845U, 825U, 3991U, 2032U, 1318U, 4623U, 5174U, 3278U, 
    2266U, 5788U, 3597U, 838U, 1457U, 4139U, 2486U, 2008U, 
    4080U, 1312U, 2464U, 4604U, 5120U, 3262U, 3477U, 1994U, 
    3237U, 5377U, 3293U, 5827U, 775U, 3838U, 819U, 3984U, 
    4238U, 5457U, 754U, 1452U, 3206U, 3306U, 3581U, 2003U, 
    3242U, 5640U, 6279U, 5637U, 684U, 1180U, 2087U, 6516U, 
    5749U, 1238U, 5758U, 1262U, 5767U, 2096U, 2055U, 3527U, 
    2269U, 2148U, 6586U, 3570U, 5792U, 2016U, 6685U, 1032U, 
    1644U, 3585U, 5654U, 2064U, 5731U, 5854U, 4244U, 5847U, 
    152U, 6454U, 647U, 668U, 18U, 302U, 5973U, 5628U, 
    3628U, 862U, 6313U, 1198U, 3389U, 3400U, 3614U, 2143U, 
    357U, 3384U, 461U, 6579U, 2258U, 409U, 3468U, 513U, 
    6656U, 5831U, 5691U, 1188U, 6263U, 5923U, 2072U, 5222U, 
    3283U, 3042U, 6544U, 1357U, 218U, 1424U, 282U, 5815U, 
    5505U, 3310U, 5858U, 36U, 531U, 
};

static inline void InitSystemZMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 925);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SystemZGenInstrInfo : public TargetInstrInfo {
  explicit SystemZGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~SystemZGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc SystemZInsts[];
extern const unsigned SystemZInstrNameIndices[];
extern const char SystemZInstrNameData[];
SystemZGenInstrInfo::SystemZGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 925);
}
SystemZGenInstrInfo::~SystemZGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SystemZ {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace SystemZ
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SystemZ {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace SystemZ
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SystemZ {
namespace OpTypes { 
enum OperandType {
  access_reg = 0,
  bdaddr12only = 1,
  bdaddr12pair = 2,
  bdaddr20only = 3,
  bdaddr20pair = 4,
  bdladdr12onlylen8 = 5,
  bdxaddr12only = 6,
  bdxaddr12pair = 7,
  bdxaddr20only = 8,
  bdxaddr20only128 = 9,
  bdxaddr20pair = 10,
  brtarget16 = 11,
  brtarget16tls = 12,
  brtarget32 = 13,
  brtarget32tls = 14,
  cond4 = 15,
  disp12imm32 = 16,
  disp12imm64 = 17,
  disp20imm32 = 18,
  disp20imm64 = 19,
  dynalloc12only = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  imm32lh16 = 28,
  imm32lh16c = 29,
  imm32ll16 = 30,
  imm32ll16c = 31,
  imm32sx16 = 32,
  imm32sx16trunc = 33,
  imm32sx8 = 34,
  imm32zx16 = 35,
  imm32zx4 = 36,
  imm32zx6 = 37,
  imm32zx8 = 38,
  imm32zx8trunc = 39,
  imm64 = 40,
  imm64hf32 = 41,
  imm64hf32c = 42,
  imm64hh16 = 43,
  imm64hh16c = 44,
  imm64hl16 = 45,
  imm64hl16c = 46,
  imm64lf32 = 47,
  imm64lf32c = 48,
  imm64lh16 = 49,
  imm64lh16c = 50,
  imm64ll16 = 51,
  imm64ll16c = 52,
  imm64sx16 = 53,
  imm64sx32 = 54,
  imm64sx8 = 55,
  imm64zx16 = 56,
  imm64zx32 = 57,
  imm64zx32n = 58,
  imm64zx8 = 59,
  laaddr12pair = 60,
  laaddr20pair = 61,
  mviaddr12pair = 62,
  mviaddr20pair = 63,
  pcrel32 = 64,
  shift12only = 65,
  shift20only = 66,
  simm32 = 67,
  tlssym = 68,
  uimm32 = 69,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace SystemZ
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace SystemZ {

enum DispSize {
	DispSize_12,
	DispSize_20
};

enum NumOpsValue {
	NumOpsValue_3
};

enum OpType {
	OpType_mem
};

// getDisp12Opcode
int getDisp12Opcode(uint16_t Opcode) {
static const uint16_t getDisp12OpcodeTable[][2] = {
  { SystemZ::AHY, SystemZ::AH },
  { SystemZ::ALY, SystemZ::AL },
  { SystemZ::AY, SystemZ::A },
  { SystemZ::CHY, SystemZ::CH },
  { SystemZ::CLIY, SystemZ::CLI },
  { SystemZ::CLY, SystemZ::CL },
  { SystemZ::CSY, SystemZ::CS },
  { SystemZ::CY, SystemZ::C },
  { SystemZ::IC32Y, SystemZ::IC32 },
  { SystemZ::ICY, SystemZ::IC },
  { SystemZ::LAY, SystemZ::LA },
  { SystemZ::LDY, SystemZ::LD },
  { SystemZ::LEY, SystemZ::LE },
  { SystemZ::LHY, SystemZ::LH },
  { SystemZ::LY, SystemZ::L },
  { SystemZ::MHY, SystemZ::MH },
  { SystemZ::MSY, SystemZ::MS },
  { SystemZ::MVIY, SystemZ::MVI },
  { SystemZ::NIY, SystemZ::NI },
  { SystemZ::NY, SystemZ::N },
  { SystemZ::OIY, SystemZ::OI },
  { SystemZ::OY, SystemZ::O },
  { SystemZ::SHY, SystemZ::SH },
  { SystemZ::SLY, SystemZ::SL },
  { SystemZ::STCY, SystemZ::STC },
  { SystemZ::STDY, SystemZ::STD },
  { SystemZ::STEY, SystemZ::STE },
  { SystemZ::STHY, SystemZ::STH },
  { SystemZ::STY, SystemZ::ST },
  { SystemZ::SY, SystemZ::S },
  { SystemZ::TMY, SystemZ::TM },
  { SystemZ::XIY, SystemZ::XI },
  { SystemZ::XY, SystemZ::X },
}; // End of getDisp12OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 33;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp12OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp12OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp12OpcodeTable[mid][1];
}

// getDisp20Opcode
int getDisp20Opcode(uint16_t Opcode) {
static const uint16_t getDisp20OpcodeTable[][2] = {
  { SystemZ::A, SystemZ::AY },
  { SystemZ::AH, SystemZ::AHY },
  { SystemZ::AL, SystemZ::ALY },
  { SystemZ::C, SystemZ::CY },
  { SystemZ::CH, SystemZ::CHY },
  { SystemZ::CL, SystemZ::CLY },
  { SystemZ::CLI, SystemZ::CLIY },
  { SystemZ::CS, SystemZ::CSY },
  { SystemZ::IC, SystemZ::ICY },
  { SystemZ::IC32, SystemZ::IC32Y },
  { SystemZ::L, SystemZ::LY },
  { SystemZ::LA, SystemZ::LAY },
  { SystemZ::LD, SystemZ::LDY },
  { SystemZ::LE, SystemZ::LEY },
  { SystemZ::LH, SystemZ::LHY },
  { SystemZ::MH, SystemZ::MHY },
  { SystemZ::MS, SystemZ::MSY },
  { SystemZ::MVI, SystemZ::MVIY },
  { SystemZ::N, SystemZ::NY },
  { SystemZ::NI, SystemZ::NIY },
  { SystemZ::O, SystemZ::OY },
  { SystemZ::OI, SystemZ::OIY },
  { SystemZ::S, SystemZ::SY },
  { SystemZ::SH, SystemZ::SHY },
  { SystemZ::SL, SystemZ::SLY },
  { SystemZ::ST, SystemZ::STY },
  { SystemZ::STC, SystemZ::STCY },
  { SystemZ::STD, SystemZ::STDY },
  { SystemZ::STE, SystemZ::STEY },
  { SystemZ::STH, SystemZ::STHY },
  { SystemZ::TM, SystemZ::TMY },
  { SystemZ::X, SystemZ::XY },
  { SystemZ::XI, SystemZ::XIY },
}; // End of getDisp20OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 33;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp20OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp20OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp20OpcodeTable[mid][1];
}

// getMemOpcode
int getMemOpcode(uint16_t Opcode) {
static const uint16_t getMemOpcodeTable[][2] = {
  { SystemZ::ADBR, SystemZ::ADB },
  { SystemZ::AEBR, SystemZ::AEB },
  { SystemZ::AGFR, SystemZ::AGF },
  { SystemZ::AGR, SystemZ::AG },
  { SystemZ::ALCGR, SystemZ::ALCG },
  { SystemZ::ALCR, SystemZ::ALC },
  { SystemZ::ALGFR, SystemZ::ALGF },
  { SystemZ::ALGR, SystemZ::ALG },
  { SystemZ::ALR, SystemZ::AL },
  { SystemZ::AR, SystemZ::A },
  { SystemZ::CDBR, SystemZ::CDB },
  { SystemZ::CEBR, SystemZ::CEB },
  { SystemZ::CGFR, SystemZ::CGF },
  { SystemZ::CGR, SystemZ::CG },
  { SystemZ::CLGFR, SystemZ::CLGF },
  { SystemZ::CLGR, SystemZ::CLG },
  { SystemZ::CLR, SystemZ::CL },
  { SystemZ::CR, SystemZ::C },
  { SystemZ::DDBR, SystemZ::DDB },
  { SystemZ::DEBR, SystemZ::DEB },
  { SystemZ::DLGR, SystemZ::DLG },
  { SystemZ::DLR, SystemZ::DL },
  { SystemZ::DSGFR, SystemZ::DSGF },
  { SystemZ::DSGR, SystemZ::DSG },
  { SystemZ::LBR, SystemZ::LB },
  { SystemZ::LDEBR, SystemZ::LDEB },
  { SystemZ::LDR, SystemZ::LD },
  { SystemZ::LER, SystemZ::LE },
  { SystemZ::LGBR, SystemZ::LGB },
  { SystemZ::LGFR, SystemZ::LGF },
  { SystemZ::LGHR, SystemZ::LGH },
  { SystemZ::LGR, SystemZ::LG },
  { SystemZ::LHR, SystemZ::LH },
  { SystemZ::LLCR, SystemZ::LLC },
  { SystemZ::LLCRMux, SystemZ::LLCMux },
  { SystemZ::LLGCR, SystemZ::LLGC },
  { SystemZ::LLGFR, SystemZ::LLGF },
  { SystemZ::LLGHR, SystemZ::LLGH },
  { SystemZ::LLHR, SystemZ::LLH },
  { SystemZ::LLHRMux, SystemZ::LLHMux },
  { SystemZ::LR, SystemZ::L },
  { SystemZ::LRMux, SystemZ::LMux },
  { SystemZ::LRVGR, SystemZ::LRVG },
  { SystemZ::LRVR, SystemZ::LRV },
  { SystemZ::LTGFR, SystemZ::LTGF },
  { SystemZ::LTGR, SystemZ::LTG },
  { SystemZ::LTR, SystemZ::LT },
  { SystemZ::LXDBR, SystemZ::LXDB },
  { SystemZ::LXEBR, SystemZ::LXEB },
  { SystemZ::MADBR, SystemZ::MADB },
  { SystemZ::MAEBR, SystemZ::MAEB },
  { SystemZ::MDBR, SystemZ::MDB },
  { SystemZ::MDEBR, SystemZ::MDEB },
  { SystemZ::MEEBR, SystemZ::MEEB },
  { SystemZ::MLGR, SystemZ::MLG },
  { SystemZ::MSDBR, SystemZ::MSDB },
  { SystemZ::MSEBR, SystemZ::MSEB },
  { SystemZ::MSGFR, SystemZ::MSGF },
  { SystemZ::MSGR, SystemZ::MSG },
  { SystemZ::MSR, SystemZ::MS },
  { SystemZ::MXDBR, SystemZ::MXDB },
  { SystemZ::NGR, SystemZ::NG },
  { SystemZ::NR, SystemZ::N },
  { SystemZ::OGR, SystemZ::OG },
  { SystemZ::OR, SystemZ::O },
  { SystemZ::SDBR, SystemZ::SDB },
  { SystemZ::SEBR, SystemZ::SEB },
  { SystemZ::SGFR, SystemZ::SGF },
  { SystemZ::SGR, SystemZ::SG },
  { SystemZ::SLBR, SystemZ::SLB },
  { SystemZ::SLGBR, SystemZ::SLBG },
  { SystemZ::SLGFR, SystemZ::SLGF },
  { SystemZ::SLGR, SystemZ::SLG },
  { SystemZ::SLR, SystemZ::SL },
  { SystemZ::SQDBR, SystemZ::SQDB },
  { SystemZ::SQEBR, SystemZ::SQEB },
  { SystemZ::SR, SystemZ::S },
  { SystemZ::XGR, SystemZ::XG },
  { SystemZ::XR, SystemZ::X },
}; // End of getMemOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 79;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getMemOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getMemOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getMemOpcodeTable[mid][1];
}

// getThreeOperandOpcode
int getThreeOperandOpcode(uint16_t Opcode) {
static const uint16_t getThreeOperandOpcodeTable[][2] = {
  { SystemZ::AGHI, SystemZ::AGHIK },
  { SystemZ::AGR, SystemZ::AGRK },
  { SystemZ::AHI, SystemZ::AHIK },
  { SystemZ::AHIMux, SystemZ::AHIMuxK },
  { SystemZ::ALGR, SystemZ::ALGRK },
  { SystemZ::ALR, SystemZ::ALRK },
  { SystemZ::AR, SystemZ::ARK },
  { SystemZ::NGR, SystemZ::NGRK },
  { SystemZ::NR, SystemZ::NRK },
  { SystemZ::OGR, SystemZ::OGRK },
  { SystemZ::OR, SystemZ::ORK },
  { SystemZ::SGR, SystemZ::SGRK },
  { SystemZ::SLGR, SystemZ::SLGRK },
  { SystemZ::SLL, SystemZ::SLLK },
  { SystemZ::SLR, SystemZ::SLRK },
  { SystemZ::SR, SystemZ::SRK },
  { SystemZ::SRA, SystemZ::SRAK },
  { SystemZ::SRL, SystemZ::SRLK },
  { SystemZ::XGR, SystemZ::XGRK },
  { SystemZ::XR, SystemZ::XRK },
}; // End of getThreeOperandOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 20;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getThreeOperandOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getThreeOperandOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getThreeOperandOpcodeTable[mid][1];
}

} // End SystemZ namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

