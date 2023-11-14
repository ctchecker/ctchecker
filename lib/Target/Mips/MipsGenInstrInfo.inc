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

namespace Mips {
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
    ABSQ_S_PH	= 22,
    ABSQ_S_QB	= 23,
    ABSQ_S_W	= 24,
    ADD	= 25,
    ADDIUPC	= 26,
    ADDIUPC_MM	= 27,
    ADDIUR1SP_MM	= 28,
    ADDIUR2_MM	= 29,
    ADDIUS5_MM	= 30,
    ADDIUSP_MM	= 31,
    ADDQH_PH	= 32,
    ADDQH_R_PH	= 33,
    ADDQH_R_W	= 34,
    ADDQH_W	= 35,
    ADDQ_PH	= 36,
    ADDQ_S_PH	= 37,
    ADDQ_S_W	= 38,
    ADDSC	= 39,
    ADDS_A_B	= 40,
    ADDS_A_D	= 41,
    ADDS_A_H	= 42,
    ADDS_A_W	= 43,
    ADDS_S_B	= 44,
    ADDS_S_D	= 45,
    ADDS_S_H	= 46,
    ADDS_S_W	= 47,
    ADDS_U_B	= 48,
    ADDS_U_D	= 49,
    ADDS_U_H	= 50,
    ADDS_U_W	= 51,
    ADDU16_MM	= 52,
    ADDUH_QB	= 53,
    ADDUH_R_QB	= 54,
    ADDU_PH	= 55,
    ADDU_QB	= 56,
    ADDU_S_PH	= 57,
    ADDU_S_QB	= 58,
    ADDVI_B	= 59,
    ADDVI_D	= 60,
    ADDVI_H	= 61,
    ADDVI_W	= 62,
    ADDV_B	= 63,
    ADDV_D	= 64,
    ADDV_H	= 65,
    ADDV_W	= 66,
    ADDWC	= 67,
    ADD_A_B	= 68,
    ADD_A_D	= 69,
    ADD_A_H	= 70,
    ADD_A_W	= 71,
    ADD_MM	= 72,
    ADDi	= 73,
    ADDi_MM	= 74,
    ADDiu	= 75,
    ADDiu_MM	= 76,
    ADDu	= 77,
    ADDu_MM	= 78,
    ADJCALLSTACKDOWN	= 79,
    ADJCALLSTACKUP	= 80,
    ALIGN	= 81,
    ALUIPC	= 82,
    AND	= 83,
    AND16_MM	= 84,
    AND64	= 85,
    ANDI16_MM	= 86,
    ANDI_B	= 87,
    AND_MM	= 88,
    AND_V	= 89,
    AND_V_D_PSEUDO	= 90,
    AND_V_H_PSEUDO	= 91,
    AND_V_W_PSEUDO	= 92,
    ANDi	= 93,
    ANDi64	= 94,
    ANDi_MM	= 95,
    APPEND	= 96,
    ASUB_S_B	= 97,
    ASUB_S_D	= 98,
    ASUB_S_H	= 99,
    ASUB_S_W	= 100,
    ASUB_U_B	= 101,
    ASUB_U_D	= 102,
    ASUB_U_H	= 103,
    ASUB_U_W	= 104,
    ATOMIC_CMP_SWAP_I16	= 105,
    ATOMIC_CMP_SWAP_I32	= 106,
    ATOMIC_CMP_SWAP_I64	= 107,
    ATOMIC_CMP_SWAP_I8	= 108,
    ATOMIC_LOAD_ADD_I16	= 109,
    ATOMIC_LOAD_ADD_I32	= 110,
    ATOMIC_LOAD_ADD_I64	= 111,
    ATOMIC_LOAD_ADD_I8	= 112,
    ATOMIC_LOAD_AND_I16	= 113,
    ATOMIC_LOAD_AND_I32	= 114,
    ATOMIC_LOAD_AND_I64	= 115,
    ATOMIC_LOAD_AND_I8	= 116,
    ATOMIC_LOAD_NAND_I16	= 117,
    ATOMIC_LOAD_NAND_I32	= 118,
    ATOMIC_LOAD_NAND_I64	= 119,
    ATOMIC_LOAD_NAND_I8	= 120,
    ATOMIC_LOAD_OR_I16	= 121,
    ATOMIC_LOAD_OR_I32	= 122,
    ATOMIC_LOAD_OR_I64	= 123,
    ATOMIC_LOAD_OR_I8	= 124,
    ATOMIC_LOAD_SUB_I16	= 125,
    ATOMIC_LOAD_SUB_I32	= 126,
    ATOMIC_LOAD_SUB_I64	= 127,
    ATOMIC_LOAD_SUB_I8	= 128,
    ATOMIC_LOAD_XOR_I16	= 129,
    ATOMIC_LOAD_XOR_I32	= 130,
    ATOMIC_LOAD_XOR_I64	= 131,
    ATOMIC_LOAD_XOR_I8	= 132,
    ATOMIC_SWAP_I16	= 133,
    ATOMIC_SWAP_I32	= 134,
    ATOMIC_SWAP_I64	= 135,
    ATOMIC_SWAP_I8	= 136,
    AUI	= 137,
    AUIPC	= 138,
    AVER_S_B	= 139,
    AVER_S_D	= 140,
    AVER_S_H	= 141,
    AVER_S_W	= 142,
    AVER_U_B	= 143,
    AVER_U_D	= 144,
    AVER_U_H	= 145,
    AVER_U_W	= 146,
    AVE_S_B	= 147,
    AVE_S_D	= 148,
    AVE_S_H	= 149,
    AVE_S_W	= 150,
    AVE_U_B	= 151,
    AVE_U_D	= 152,
    AVE_U_H	= 153,
    AVE_U_W	= 154,
    AddiuRxImmX16	= 155,
    AddiuRxPcImmX16	= 156,
    AddiuRxRxImm16	= 157,
    AddiuRxRxImmX16	= 158,
    AddiuRxRyOffMemX16	= 159,
    AddiuSpImm16	= 160,
    AddiuSpImmX16	= 161,
    AdduRxRyRz16	= 162,
    AndRxRxRy16	= 163,
    B	= 164,
    B16_MM	= 165,
    BADDu	= 166,
    BAL	= 167,
    BALC	= 168,
    BALIGN	= 169,
    BAL_BR	= 170,
    BBIT0	= 171,
    BBIT032	= 172,
    BBIT1	= 173,
    BBIT132	= 174,
    BC	= 175,
    BC1EQZ	= 176,
    BC1F	= 177,
    BC1FL	= 178,
    BC1F_MM	= 179,
    BC1NEZ	= 180,
    BC1T	= 181,
    BC1TL	= 182,
    BC1T_MM	= 183,
    BC2EQZ	= 184,
    BC2NEZ	= 185,
    BCLRI_B	= 186,
    BCLRI_D	= 187,
    BCLRI_H	= 188,
    BCLRI_W	= 189,
    BCLR_B	= 190,
    BCLR_D	= 191,
    BCLR_H	= 192,
    BCLR_W	= 193,
    BEQ	= 194,
    BEQ64	= 195,
    BEQC	= 196,
    BEQL	= 197,
    BEQZ16_MM	= 198,
    BEQZALC	= 199,
    BEQZC	= 200,
    BEQZC_MM	= 201,
    BEQ_MM	= 202,
    BGEC	= 203,
    BGEUC	= 204,
    BGEZ	= 205,
    BGEZ64	= 206,
    BGEZAL	= 207,
    BGEZALC	= 208,
    BGEZALL	= 209,
    BGEZALS_MM	= 210,
    BGEZAL_MM	= 211,
    BGEZC	= 212,
    BGEZL	= 213,
    BGEZ_MM	= 214,
    BGTZ	= 215,
    BGTZ64	= 216,
    BGTZALC	= 217,
    BGTZC	= 218,
    BGTZL	= 219,
    BGTZ_MM	= 220,
    BINSLI_B	= 221,
    BINSLI_D	= 222,
    BINSLI_H	= 223,
    BINSLI_W	= 224,
    BINSL_B	= 225,
    BINSL_D	= 226,
    BINSL_H	= 227,
    BINSL_W	= 228,
    BINSRI_B	= 229,
    BINSRI_D	= 230,
    BINSRI_H	= 231,
    BINSRI_W	= 232,
    BINSR_B	= 233,
    BINSR_D	= 234,
    BINSR_H	= 235,
    BINSR_W	= 236,
    BITREV	= 237,
    BITSWAP	= 238,
    BLEZ	= 239,
    BLEZ64	= 240,
    BLEZALC	= 241,
    BLEZC	= 242,
    BLEZL	= 243,
    BLEZ_MM	= 244,
    BLTC	= 245,
    BLTUC	= 246,
    BLTZ	= 247,
    BLTZ64	= 248,
    BLTZAL	= 249,
    BLTZALC	= 250,
    BLTZALL	= 251,
    BLTZALS_MM	= 252,
    BLTZAL_MM	= 253,
    BLTZC	= 254,
    BLTZL	= 255,
    BLTZ_MM	= 256,
    BMNZI_B	= 257,
    BMNZ_V	= 258,
    BMZI_B	= 259,
    BMZ_V	= 260,
    BNE	= 261,
    BNE64	= 262,
    BNEC	= 263,
    BNEGI_B	= 264,
    BNEGI_D	= 265,
    BNEGI_H	= 266,
    BNEGI_W	= 267,
    BNEG_B	= 268,
    BNEG_D	= 269,
    BNEG_H	= 270,
    BNEG_W	= 271,
    BNEL	= 272,
    BNEZ16_MM	= 273,
    BNEZALC	= 274,
    BNEZC	= 275,
    BNEZC_MM	= 276,
    BNE_MM	= 277,
    BNVC	= 278,
    BNZ_B	= 279,
    BNZ_D	= 280,
    BNZ_H	= 281,
    BNZ_V	= 282,
    BNZ_W	= 283,
    BOVC	= 284,
    BPOSGE32	= 285,
    BPOSGE32_PSEUDO	= 286,
    BREAK	= 287,
    BREAK16_MM	= 288,
    BREAK_MM	= 289,
    BSELI_B	= 290,
    BSEL_D_PSEUDO	= 291,
    BSEL_FD_PSEUDO	= 292,
    BSEL_FW_PSEUDO	= 293,
    BSEL_H_PSEUDO	= 294,
    BSEL_V	= 295,
    BSEL_W_PSEUDO	= 296,
    BSETI_B	= 297,
    BSETI_D	= 298,
    BSETI_H	= 299,
    BSETI_W	= 300,
    BSET_B	= 301,
    BSET_D	= 302,
    BSET_H	= 303,
    BSET_W	= 304,
    BZ_B	= 305,
    BZ_D	= 306,
    BZ_H	= 307,
    BZ_V	= 308,
    BZ_W	= 309,
    B_MM_Pseudo	= 310,
    BeqzRxImm16	= 311,
    BeqzRxImmX16	= 312,
    Bimm16	= 313,
    BimmX16	= 314,
    BnezRxImm16	= 315,
    BnezRxImmX16	= 316,
    Break16	= 317,
    Bteqz16	= 318,
    BteqzT8CmpX16	= 319,
    BteqzT8CmpiX16	= 320,
    BteqzT8SltX16	= 321,
    BteqzT8SltiX16	= 322,
    BteqzT8SltiuX16	= 323,
    BteqzT8SltuX16	= 324,
    BteqzX16	= 325,
    Btnez16	= 326,
    BtnezT8CmpX16	= 327,
    BtnezT8CmpiX16	= 328,
    BtnezT8SltX16	= 329,
    BtnezT8SltiX16	= 330,
    BtnezT8SltiuX16	= 331,
    BtnezT8SltuX16	= 332,
    BtnezX16	= 333,
    BuildPairF64	= 334,
    BuildPairF64_64	= 335,
    CACHE	= 336,
    CACHE_MM	= 337,
    CACHE_R6	= 338,
    CEIL_L_D64	= 339,
    CEIL_L_S	= 340,
    CEIL_W_D32	= 341,
    CEIL_W_D64	= 342,
    CEIL_W_MM	= 343,
    CEIL_W_S	= 344,
    CEIL_W_S_MM	= 345,
    CEQI_B	= 346,
    CEQI_D	= 347,
    CEQI_H	= 348,
    CEQI_W	= 349,
    CEQ_B	= 350,
    CEQ_D	= 351,
    CEQ_H	= 352,
    CEQ_W	= 353,
    CFC1	= 354,
    CFC1_MM	= 355,
    CFCMSA	= 356,
    CINS	= 357,
    CINS32	= 358,
    CLASS_D	= 359,
    CLASS_S	= 360,
    CLEI_S_B	= 361,
    CLEI_S_D	= 362,
    CLEI_S_H	= 363,
    CLEI_S_W	= 364,
    CLEI_U_B	= 365,
    CLEI_U_D	= 366,
    CLEI_U_H	= 367,
    CLEI_U_W	= 368,
    CLE_S_B	= 369,
    CLE_S_D	= 370,
    CLE_S_H	= 371,
    CLE_S_W	= 372,
    CLE_U_B	= 373,
    CLE_U_D	= 374,
    CLE_U_H	= 375,
    CLE_U_W	= 376,
    CLO	= 377,
    CLO_MM	= 378,
    CLO_R6	= 379,
    CLTI_S_B	= 380,
    CLTI_S_D	= 381,
    CLTI_S_H	= 382,
    CLTI_S_W	= 383,
    CLTI_U_B	= 384,
    CLTI_U_D	= 385,
    CLTI_U_H	= 386,
    CLTI_U_W	= 387,
    CLT_S_B	= 388,
    CLT_S_D	= 389,
    CLT_S_H	= 390,
    CLT_S_W	= 391,
    CLT_U_B	= 392,
    CLT_U_D	= 393,
    CLT_U_H	= 394,
    CLT_U_W	= 395,
    CLZ	= 396,
    CLZ_MM	= 397,
    CLZ_R6	= 398,
    CMPGDU_EQ_QB	= 399,
    CMPGDU_LE_QB	= 400,
    CMPGDU_LT_QB	= 401,
    CMPGU_EQ_QB	= 402,
    CMPGU_LE_QB	= 403,
    CMPGU_LT_QB	= 404,
    CMPU_EQ_QB	= 405,
    CMPU_LE_QB	= 406,
    CMPU_LT_QB	= 407,
    CMP_EQ_D	= 408,
    CMP_EQ_PH	= 409,
    CMP_EQ_S	= 410,
    CMP_F_D	= 411,
    CMP_F_S	= 412,
    CMP_LE_D	= 413,
    CMP_LE_PH	= 414,
    CMP_LE_S	= 415,
    CMP_LT_D	= 416,
    CMP_LT_PH	= 417,
    CMP_LT_S	= 418,
    CMP_SAF_D	= 419,
    CMP_SAF_S	= 420,
    CMP_SEQ_D	= 421,
    CMP_SEQ_S	= 422,
    CMP_SLE_D	= 423,
    CMP_SLE_S	= 424,
    CMP_SLT_D	= 425,
    CMP_SLT_S	= 426,
    CMP_SUEQ_D	= 427,
    CMP_SUEQ_S	= 428,
    CMP_SULE_D	= 429,
    CMP_SULE_S	= 430,
    CMP_SULT_D	= 431,
    CMP_SULT_S	= 432,
    CMP_SUN_D	= 433,
    CMP_SUN_S	= 434,
    CMP_UEQ_D	= 435,
    CMP_UEQ_S	= 436,
    CMP_ULE_D	= 437,
    CMP_ULE_S	= 438,
    CMP_ULT_D	= 439,
    CMP_ULT_S	= 440,
    CMP_UN_D	= 441,
    CMP_UN_S	= 442,
    CONSTPOOL_ENTRY	= 443,
    COPY_FD_PSEUDO	= 444,
    COPY_FW_PSEUDO	= 445,
    COPY_S_B	= 446,
    COPY_S_D	= 447,
    COPY_S_H	= 448,
    COPY_S_W	= 449,
    COPY_U_B	= 450,
    COPY_U_D	= 451,
    COPY_U_H	= 452,
    COPY_U_W	= 453,
    CTC1	= 454,
    CTC1_MM	= 455,
    CTCMSA	= 456,
    CVT_D32_S	= 457,
    CVT_D32_W	= 458,
    CVT_D32_W_MM	= 459,
    CVT_D64_L	= 460,
    CVT_D64_S	= 461,
    CVT_D64_W	= 462,
    CVT_D_S_MM	= 463,
    CVT_L_D64	= 464,
    CVT_L_D64_MM	= 465,
    CVT_L_S	= 466,
    CVT_L_S_MM	= 467,
    CVT_S_D32	= 468,
    CVT_S_D32_MM	= 469,
    CVT_S_D64	= 470,
    CVT_S_L	= 471,
    CVT_S_W	= 472,
    CVT_S_W_MM	= 473,
    CVT_W_D32	= 474,
    CVT_W_D64	= 475,
    CVT_W_MM	= 476,
    CVT_W_S	= 477,
    CVT_W_S_MM	= 478,
    C_EQ_D32	= 479,
    C_EQ_D64	= 480,
    C_EQ_S	= 481,
    C_F_D32	= 482,
    C_F_D64	= 483,
    C_F_S	= 484,
    C_LE_D32	= 485,
    C_LE_D64	= 486,
    C_LE_S	= 487,
    C_LT_D32	= 488,
    C_LT_D64	= 489,
    C_LT_S	= 490,
    C_NGE_D32	= 491,
    C_NGE_D64	= 492,
    C_NGE_S	= 493,
    C_NGLE_D32	= 494,
    C_NGLE_D64	= 495,
    C_NGLE_S	= 496,
    C_NGL_D32	= 497,
    C_NGL_D64	= 498,
    C_NGL_S	= 499,
    C_NGT_D32	= 500,
    C_NGT_D64	= 501,
    C_NGT_S	= 502,
    C_OLE_D32	= 503,
    C_OLE_D64	= 504,
    C_OLE_S	= 505,
    C_OLT_D32	= 506,
    C_OLT_D64	= 507,
    C_OLT_S	= 508,
    C_SEQ_D32	= 509,
    C_SEQ_D64	= 510,
    C_SEQ_S	= 511,
    C_SF_D32	= 512,
    C_SF_D64	= 513,
    C_SF_S	= 514,
    C_UEQ_D32	= 515,
    C_UEQ_D64	= 516,
    C_UEQ_S	= 517,
    C_ULE_D32	= 518,
    C_ULE_D64	= 519,
    C_ULE_S	= 520,
    C_ULT_D32	= 521,
    C_ULT_D64	= 522,
    C_ULT_S	= 523,
    C_UN_D32	= 524,
    C_UN_D64	= 525,
    C_UN_S	= 526,
    CmpRxRy16	= 527,
    CmpiRxImm16	= 528,
    CmpiRxImmX16	= 529,
    Constant32	= 530,
    DADD	= 531,
    DADDi	= 532,
    DADDiu	= 533,
    DADDu	= 534,
    DAHI	= 535,
    DALIGN	= 536,
    DATI	= 537,
    DAUI	= 538,
    DBITSWAP	= 539,
    DCLO	= 540,
    DCLO_R6	= 541,
    DCLZ	= 542,
    DCLZ_R6	= 543,
    DDIV	= 544,
    DDIVU	= 545,
    DERET	= 546,
    DERET_MM	= 547,
    DEXT	= 548,
    DEXTM	= 549,
    DEXTU	= 550,
    DI	= 551,
    DINS	= 552,
    DINSM	= 553,
    DINSU	= 554,
    DIV	= 555,
    DIVU	= 556,
    DIV_S_B	= 557,
    DIV_S_D	= 558,
    DIV_S_H	= 559,
    DIV_S_W	= 560,
    DIV_U_B	= 561,
    DIV_U_D	= 562,
    DIV_U_H	= 563,
    DIV_U_W	= 564,
    DI_MM	= 565,
    DLSA	= 566,
    DLSA_R6	= 567,
    DMFC0	= 568,
    DMFC1	= 569,
    DMFC2	= 570,
    DMOD	= 571,
    DMODU	= 572,
    DMTC0	= 573,
    DMTC1	= 574,
    DMTC2	= 575,
    DMUH	= 576,
    DMUHU	= 577,
    DMUL	= 578,
    DMULT	= 579,
    DMULTu	= 580,
    DMULU	= 581,
    DMUL_R6	= 582,
    DOTP_S_D	= 583,
    DOTP_S_H	= 584,
    DOTP_S_W	= 585,
    DOTP_U_D	= 586,
    DOTP_U_H	= 587,
    DOTP_U_W	= 588,
    DPADD_S_D	= 589,
    DPADD_S_H	= 590,
    DPADD_S_W	= 591,
    DPADD_U_D	= 592,
    DPADD_U_H	= 593,
    DPADD_U_W	= 594,
    DPAQX_SA_W_PH	= 595,
    DPAQX_S_W_PH	= 596,
    DPAQ_SA_L_W	= 597,
    DPAQ_S_W_PH	= 598,
    DPAU_H_QBL	= 599,
    DPAU_H_QBR	= 600,
    DPAX_W_PH	= 601,
    DPA_W_PH	= 602,
    DPOP	= 603,
    DPSQX_SA_W_PH	= 604,
    DPSQX_S_W_PH	= 605,
    DPSQ_SA_L_W	= 606,
    DPSQ_S_W_PH	= 607,
    DPSUB_S_D	= 608,
    DPSUB_S_H	= 609,
    DPSUB_S_W	= 610,
    DPSUB_U_D	= 611,
    DPSUB_U_H	= 612,
    DPSUB_U_W	= 613,
    DPSU_H_QBL	= 614,
    DPSU_H_QBR	= 615,
    DPSX_W_PH	= 616,
    DPS_W_PH	= 617,
    DROTR	= 618,
    DROTR32	= 619,
    DROTRV	= 620,
    DSBH	= 621,
    DSDIV	= 622,
    DSHD	= 623,
    DSLL	= 624,
    DSLL32	= 625,
    DSLL64_32	= 626,
    DSLLV	= 627,
    DSRA	= 628,
    DSRA32	= 629,
    DSRAV	= 630,
    DSRL	= 631,
    DSRL32	= 632,
    DSRLV	= 633,
    DSUB	= 634,
    DSUBu	= 635,
    DUDIV	= 636,
    DivRxRy16	= 637,
    DivuRxRy16	= 638,
    EHB	= 639,
    EHB_MM	= 640,
    EI	= 641,
    EI_MM	= 642,
    ERET	= 643,
    ERET_MM	= 644,
    EXT	= 645,
    EXTP	= 646,
    EXTPDP	= 647,
    EXTPDPV	= 648,
    EXTPV	= 649,
    EXTRV_RS_W	= 650,
    EXTRV_R_W	= 651,
    EXTRV_S_H	= 652,
    EXTRV_W	= 653,
    EXTR_RS_W	= 654,
    EXTR_R_W	= 655,
    EXTR_S_H	= 656,
    EXTR_W	= 657,
    EXTS	= 658,
    EXTS32	= 659,
    EXT_MM	= 660,
    ExtractElementF64	= 661,
    ExtractElementF64_64	= 662,
    FABS_D	= 663,
    FABS_D32	= 664,
    FABS_D64	= 665,
    FABS_MM	= 666,
    FABS_S	= 667,
    FABS_S_MM	= 668,
    FABS_W	= 669,
    FADD_D	= 670,
    FADD_D32	= 671,
    FADD_D64	= 672,
    FADD_MM	= 673,
    FADD_S	= 674,
    FADD_S_MM	= 675,
    FADD_W	= 676,
    FCAF_D	= 677,
    FCAF_W	= 678,
    FCEQ_D	= 679,
    FCEQ_W	= 680,
    FCLASS_D	= 681,
    FCLASS_W	= 682,
    FCLE_D	= 683,
    FCLE_W	= 684,
    FCLT_D	= 685,
    FCLT_W	= 686,
    FCMP_D32	= 687,
    FCMP_D32_MM	= 688,
    FCMP_D64	= 689,
    FCMP_S32	= 690,
    FCMP_S32_MM	= 691,
    FCNE_D	= 692,
    FCNE_W	= 693,
    FCOR_D	= 694,
    FCOR_W	= 695,
    FCUEQ_D	= 696,
    FCUEQ_W	= 697,
    FCULE_D	= 698,
    FCULE_W	= 699,
    FCULT_D	= 700,
    FCULT_W	= 701,
    FCUNE_D	= 702,
    FCUNE_W	= 703,
    FCUN_D	= 704,
    FCUN_W	= 705,
    FDIV_D	= 706,
    FDIV_D32	= 707,
    FDIV_D64	= 708,
    FDIV_MM	= 709,
    FDIV_S	= 710,
    FDIV_S_MM	= 711,
    FDIV_W	= 712,
    FEXDO_H	= 713,
    FEXDO_W	= 714,
    FEXP2_D	= 715,
    FEXP2_D_1_PSEUDO	= 716,
    FEXP2_W	= 717,
    FEXP2_W_1_PSEUDO	= 718,
    FEXUPL_D	= 719,
    FEXUPL_W	= 720,
    FEXUPR_D	= 721,
    FEXUPR_W	= 722,
    FFINT_S_D	= 723,
    FFINT_S_W	= 724,
    FFINT_U_D	= 725,
    FFINT_U_W	= 726,
    FFQL_D	= 727,
    FFQL_W	= 728,
    FFQR_D	= 729,
    FFQR_W	= 730,
    FILL_B	= 731,
    FILL_D	= 732,
    FILL_FD_PSEUDO	= 733,
    FILL_FW_PSEUDO	= 734,
    FILL_H	= 735,
    FILL_W	= 736,
    FLOG2_D	= 737,
    FLOG2_W	= 738,
    FLOOR_L_D64	= 739,
    FLOOR_L_S	= 740,
    FLOOR_W_D32	= 741,
    FLOOR_W_D64	= 742,
    FLOOR_W_MM	= 743,
    FLOOR_W_S	= 744,
    FLOOR_W_S_MM	= 745,
    FMADD_D	= 746,
    FMADD_W	= 747,
    FMAX_A_D	= 748,
    FMAX_A_W	= 749,
    FMAX_D	= 750,
    FMAX_W	= 751,
    FMIN_A_D	= 752,
    FMIN_A_W	= 753,
    FMIN_D	= 754,
    FMIN_W	= 755,
    FMOV_D32	= 756,
    FMOV_D32_MM	= 757,
    FMOV_D64	= 758,
    FMOV_S	= 759,
    FMOV_S_MM	= 760,
    FMSUB_D	= 761,
    FMSUB_W	= 762,
    FMUL_D	= 763,
    FMUL_D32	= 764,
    FMUL_D64	= 765,
    FMUL_MM	= 766,
    FMUL_S	= 767,
    FMUL_S_MM	= 768,
    FMUL_W	= 769,
    FNEG_D32	= 770,
    FNEG_D64	= 771,
    FNEG_MM	= 772,
    FNEG_S	= 773,
    FNEG_S_MM	= 774,
    FRCP_D	= 775,
    FRCP_W	= 776,
    FRINT_D	= 777,
    FRINT_W	= 778,
    FRSQRT_D	= 779,
    FRSQRT_W	= 780,
    FSAF_D	= 781,
    FSAF_W	= 782,
    FSEQ_D	= 783,
    FSEQ_W	= 784,
    FSLE_D	= 785,
    FSLE_W	= 786,
    FSLT_D	= 787,
    FSLT_W	= 788,
    FSNE_D	= 789,
    FSNE_W	= 790,
    FSOR_D	= 791,
    FSOR_W	= 792,
    FSQRT_D	= 793,
    FSQRT_D32	= 794,
    FSQRT_D64	= 795,
    FSQRT_MM	= 796,
    FSQRT_S	= 797,
    FSQRT_S_MM	= 798,
    FSQRT_W	= 799,
    FSUB_D	= 800,
    FSUB_D32	= 801,
    FSUB_D64	= 802,
    FSUB_MM	= 803,
    FSUB_S	= 804,
    FSUB_S_MM	= 805,
    FSUB_W	= 806,
    FSUEQ_D	= 807,
    FSUEQ_W	= 808,
    FSULE_D	= 809,
    FSULE_W	= 810,
    FSULT_D	= 811,
    FSULT_W	= 812,
    FSUNE_D	= 813,
    FSUNE_W	= 814,
    FSUN_D	= 815,
    FSUN_W	= 816,
    FTINT_S_D	= 817,
    FTINT_S_W	= 818,
    FTINT_U_D	= 819,
    FTINT_U_W	= 820,
    FTQ_H	= 821,
    FTQ_W	= 822,
    FTRUNC_S_D	= 823,
    FTRUNC_S_W	= 824,
    FTRUNC_U_D	= 825,
    FTRUNC_U_W	= 826,
    GotPrologue16	= 827,
    HADD_S_D	= 828,
    HADD_S_H	= 829,
    HADD_S_W	= 830,
    HADD_U_D	= 831,
    HADD_U_H	= 832,
    HADD_U_W	= 833,
    HSUB_S_D	= 834,
    HSUB_S_H	= 835,
    HSUB_S_W	= 836,
    HSUB_U_D	= 837,
    HSUB_U_H	= 838,
    HSUB_U_W	= 839,
    ILVEV_B	= 840,
    ILVEV_D	= 841,
    ILVEV_H	= 842,
    ILVEV_W	= 843,
    ILVL_B	= 844,
    ILVL_D	= 845,
    ILVL_H	= 846,
    ILVL_W	= 847,
    ILVOD_B	= 848,
    ILVOD_D	= 849,
    ILVOD_H	= 850,
    ILVOD_W	= 851,
    ILVR_B	= 852,
    ILVR_D	= 853,
    ILVR_H	= 854,
    ILVR_W	= 855,
    INS	= 856,
    INSERT_B	= 857,
    INSERT_B_VIDX_PSEUDO	= 858,
    INSERT_D	= 859,
    INSERT_D_VIDX_PSEUDO	= 860,
    INSERT_FD_PSEUDO	= 861,
    INSERT_FD_VIDX_PSEUDO	= 862,
    INSERT_FW_PSEUDO	= 863,
    INSERT_FW_VIDX_PSEUDO	= 864,
    INSERT_H	= 865,
    INSERT_H_VIDX_PSEUDO	= 866,
    INSERT_W	= 867,
    INSERT_W_VIDX_PSEUDO	= 868,
    INSV	= 869,
    INSVE_B	= 870,
    INSVE_D	= 871,
    INSVE_H	= 872,
    INSVE_W	= 873,
    INS_MM	= 874,
    J	= 875,
    JAL	= 876,
    JALR	= 877,
    JALR16_MM	= 878,
    JALR64	= 879,
    JALR64Pseudo	= 880,
    JALRPseudo	= 881,
    JALRS16_MM	= 882,
    JALRS_MM	= 883,
    JALR_HB	= 884,
    JALR_MM	= 885,
    JALS_MM	= 886,
    JALX	= 887,
    JALX_MM	= 888,
    JAL_MM	= 889,
    JIALC	= 890,
    JIC	= 891,
    JR	= 892,
    JR16_MM	= 893,
    JR64	= 894,
    JRADDIUSP	= 895,
    JRC16_MM	= 896,
    JR_HB	= 897,
    JR_HB_R6	= 898,
    JR_MM	= 899,
    J_MM	= 900,
    Jal16	= 901,
    JalB16	= 902,
    JalOneReg	= 903,
    JalTwoReg	= 904,
    JrRa16	= 905,
    JrcRa16	= 906,
    JrcRx16	= 907,
    JumpLinkReg16	= 908,
    LB	= 909,
    LB64	= 910,
    LBU16_MM	= 911,
    LBUX	= 912,
    LB_MM	= 913,
    LBu	= 914,
    LBu64	= 915,
    LBu_MM	= 916,
    LD	= 917,
    LDC1	= 918,
    LDC164	= 919,
    LDC1_MM	= 920,
    LDC2	= 921,
    LDC2_R6	= 922,
    LDC3	= 923,
    LDI_B	= 924,
    LDI_D	= 925,
    LDI_H	= 926,
    LDI_W	= 927,
    LDL	= 928,
    LDPC	= 929,
    LDR	= 930,
    LDXC1	= 931,
    LDXC164	= 932,
    LD_B	= 933,
    LD_D	= 934,
    LD_H	= 935,
    LD_W	= 936,
    LEA_ADDiu	= 937,
    LEA_ADDiu64	= 938,
    LEA_ADDiu_MM	= 939,
    LH	= 940,
    LH64	= 941,
    LHU16_MM	= 942,
    LHX	= 943,
    LH_MM	= 944,
    LHu	= 945,
    LHu64	= 946,
    LHu_MM	= 947,
    LI16_MM	= 948,
    LL	= 949,
    LLD	= 950,
    LLD_R6	= 951,
    LL_MM	= 952,
    LL_R6	= 953,
    LOAD_ACC128	= 954,
    LOAD_ACC64	= 955,
    LOAD_ACC64DSP	= 956,
    LOAD_CCOND_DSP	= 957,
    LONG_BRANCH_ADDiu	= 958,
    LONG_BRANCH_DADDiu	= 959,
    LONG_BRANCH_LUi	= 960,
    LSA	= 961,
    LSA_R6	= 962,
    LUXC1	= 963,
    LUXC164	= 964,
    LUXC1_MM	= 965,
    LUi	= 966,
    LUi64	= 967,
    LUi_MM	= 968,
    LW	= 969,
    LW16_MM	= 970,
    LW64	= 971,
    LWC1	= 972,
    LWC1_MM	= 973,
    LWC2	= 974,
    LWC2_R6	= 975,
    LWC3	= 976,
    LWGP_MM	= 977,
    LWL	= 978,
    LWL64	= 979,
    LWL_MM	= 980,
    LWM16_MM	= 981,
    LWM32_MM	= 982,
    LWM_MM	= 983,
    LWPC	= 984,
    LWP_MM	= 985,
    LWR	= 986,
    LWR64	= 987,
    LWR_MM	= 988,
    LWSP_MM	= 989,
    LWUPC	= 990,
    LWU_MM	= 991,
    LWX	= 992,
    LWXC1	= 993,
    LWXC1_MM	= 994,
    LWXS_MM	= 995,
    LW_MM	= 996,
    LWu	= 997,
    LbRxRyOffMemX16	= 998,
    LbuRxRyOffMemX16	= 999,
    LhRxRyOffMemX16	= 1000,
    LhuRxRyOffMemX16	= 1001,
    LiRxImm16	= 1002,
    LiRxImmAlignX16	= 1003,
    LiRxImmX16	= 1004,
    LoadAddrImm32	= 1005,
    LoadAddrReg32	= 1006,
    LoadImm32	= 1007,
    LoadImm64	= 1008,
    LwConstant32	= 1009,
    LwRxPcTcp16	= 1010,
    LwRxPcTcpX16	= 1011,
    LwRxRyOffMemX16	= 1012,
    LwRxSpImmX16	= 1013,
    MADD	= 1014,
    MADDF_D	= 1015,
    MADDF_S	= 1016,
    MADDR_Q_H	= 1017,
    MADDR_Q_W	= 1018,
    MADDU	= 1019,
    MADDU_DSP	= 1020,
    MADDU_MM	= 1021,
    MADDV_B	= 1022,
    MADDV_D	= 1023,
    MADDV_H	= 1024,
    MADDV_W	= 1025,
    MADD_D32	= 1026,
    MADD_D32_MM	= 1027,
    MADD_D64	= 1028,
    MADD_DSP	= 1029,
    MADD_MM	= 1030,
    MADD_Q_H	= 1031,
    MADD_Q_W	= 1032,
    MADD_S	= 1033,
    MADD_S_MM	= 1034,
    MAQ_SA_W_PHL	= 1035,
    MAQ_SA_W_PHR	= 1036,
    MAQ_S_W_PHL	= 1037,
    MAQ_S_W_PHR	= 1038,
    MAXA_D	= 1039,
    MAXA_S	= 1040,
    MAXI_S_B	= 1041,
    MAXI_S_D	= 1042,
    MAXI_S_H	= 1043,
    MAXI_S_W	= 1044,
    MAXI_U_B	= 1045,
    MAXI_U_D	= 1046,
    MAXI_U_H	= 1047,
    MAXI_U_W	= 1048,
    MAX_A_B	= 1049,
    MAX_A_D	= 1050,
    MAX_A_H	= 1051,
    MAX_A_W	= 1052,
    MAX_D	= 1053,
    MAX_S	= 1054,
    MAX_S_B	= 1055,
    MAX_S_D	= 1056,
    MAX_S_H	= 1057,
    MAX_S_W	= 1058,
    MAX_U_B	= 1059,
    MAX_U_D	= 1060,
    MAX_U_H	= 1061,
    MAX_U_W	= 1062,
    MFC0	= 1063,
    MFC1	= 1064,
    MFC1_MM	= 1065,
    MFC2	= 1066,
    MFHC1_D32	= 1067,
    MFHC1_D64	= 1068,
    MFHC1_MM	= 1069,
    MFHI	= 1070,
    MFHI16_MM	= 1071,
    MFHI64	= 1072,
    MFHI_DSP	= 1073,
    MFHI_MM	= 1074,
    MFLO	= 1075,
    MFLO16_MM	= 1076,
    MFLO64	= 1077,
    MFLO_DSP	= 1078,
    MFLO_MM	= 1079,
    MINA_D	= 1080,
    MINA_S	= 1081,
    MINI_S_B	= 1082,
    MINI_S_D	= 1083,
    MINI_S_H	= 1084,
    MINI_S_W	= 1085,
    MINI_U_B	= 1086,
    MINI_U_D	= 1087,
    MINI_U_H	= 1088,
    MINI_U_W	= 1089,
    MIN_A_B	= 1090,
    MIN_A_D	= 1091,
    MIN_A_H	= 1092,
    MIN_A_W	= 1093,
    MIN_D	= 1094,
    MIN_S	= 1095,
    MIN_S_B	= 1096,
    MIN_S_D	= 1097,
    MIN_S_H	= 1098,
    MIN_S_W	= 1099,
    MIN_U_B	= 1100,
    MIN_U_D	= 1101,
    MIN_U_H	= 1102,
    MIN_U_W	= 1103,
    MIPSeh_return32	= 1104,
    MIPSeh_return64	= 1105,
    MOD	= 1106,
    MODSUB	= 1107,
    MODU	= 1108,
    MOD_S_B	= 1109,
    MOD_S_D	= 1110,
    MOD_S_H	= 1111,
    MOD_S_W	= 1112,
    MOD_U_B	= 1113,
    MOD_U_D	= 1114,
    MOD_U_H	= 1115,
    MOD_U_W	= 1116,
    MOVE16_MM	= 1117,
    MOVEP_MM	= 1118,
    MOVE_V	= 1119,
    MOVF_D32	= 1120,
    MOVF_D32_MM	= 1121,
    MOVF_D64	= 1122,
    MOVF_I	= 1123,
    MOVF_I64	= 1124,
    MOVF_I_MM	= 1125,
    MOVF_S	= 1126,
    MOVF_S_MM	= 1127,
    MOVN_I64_D64	= 1128,
    MOVN_I64_I	= 1129,
    MOVN_I64_I64	= 1130,
    MOVN_I64_S	= 1131,
    MOVN_I_D32	= 1132,
    MOVN_I_D32_MM	= 1133,
    MOVN_I_D64	= 1134,
    MOVN_I_I	= 1135,
    MOVN_I_I64	= 1136,
    MOVN_I_MM	= 1137,
    MOVN_I_S	= 1138,
    MOVN_I_S_MM	= 1139,
    MOVT_D32	= 1140,
    MOVT_D32_MM	= 1141,
    MOVT_D64	= 1142,
    MOVT_I	= 1143,
    MOVT_I64	= 1144,
    MOVT_I_MM	= 1145,
    MOVT_S	= 1146,
    MOVT_S_MM	= 1147,
    MOVZ_I64_D64	= 1148,
    MOVZ_I64_I	= 1149,
    MOVZ_I64_I64	= 1150,
    MOVZ_I64_S	= 1151,
    MOVZ_I_D32	= 1152,
    MOVZ_I_D32_MM	= 1153,
    MOVZ_I_D64	= 1154,
    MOVZ_I_I	= 1155,
    MOVZ_I_I64	= 1156,
    MOVZ_I_MM	= 1157,
    MOVZ_I_S	= 1158,
    MOVZ_I_S_MM	= 1159,
    MSUB	= 1160,
    MSUBF_D	= 1161,
    MSUBF_S	= 1162,
    MSUBR_Q_H	= 1163,
    MSUBR_Q_W	= 1164,
    MSUBU	= 1165,
    MSUBU_DSP	= 1166,
    MSUBU_MM	= 1167,
    MSUBV_B	= 1168,
    MSUBV_D	= 1169,
    MSUBV_H	= 1170,
    MSUBV_W	= 1171,
    MSUB_D32	= 1172,
    MSUB_D32_MM	= 1173,
    MSUB_D64	= 1174,
    MSUB_DSP	= 1175,
    MSUB_MM	= 1176,
    MSUB_Q_H	= 1177,
    MSUB_Q_W	= 1178,
    MSUB_S	= 1179,
    MSUB_S_MM	= 1180,
    MTC0	= 1181,
    MTC1	= 1182,
    MTC1_MM	= 1183,
    MTC2	= 1184,
    MTHC1_D32	= 1185,
    MTHC1_D64	= 1186,
    MTHC1_MM	= 1187,
    MTHI	= 1188,
    MTHI64	= 1189,
    MTHI_DSP	= 1190,
    MTHI_MM	= 1191,
    MTHLIP	= 1192,
    MTLO	= 1193,
    MTLO64	= 1194,
    MTLO_DSP	= 1195,
    MTLO_MM	= 1196,
    MTM0	= 1197,
    MTM1	= 1198,
    MTM2	= 1199,
    MTP0	= 1200,
    MTP1	= 1201,
    MTP2	= 1202,
    MUH	= 1203,
    MUHU	= 1204,
    MUL	= 1205,
    MULEQ_S_W_PHL	= 1206,
    MULEQ_S_W_PHR	= 1207,
    MULEU_S_PH_QBL	= 1208,
    MULEU_S_PH_QBR	= 1209,
    MULQ_RS_PH	= 1210,
    MULQ_RS_W	= 1211,
    MULQ_S_PH	= 1212,
    MULQ_S_W	= 1213,
    MULR_Q_H	= 1214,
    MULR_Q_W	= 1215,
    MULSAQ_S_W_PH	= 1216,
    MULSA_W_PH	= 1217,
    MULT	= 1218,
    MULTU_DSP	= 1219,
    MULT_DSP	= 1220,
    MULT_MM	= 1221,
    MULTu	= 1222,
    MULTu_MM	= 1223,
    MULU	= 1224,
    MULV_B	= 1225,
    MULV_D	= 1226,
    MULV_H	= 1227,
    MULV_W	= 1228,
    MUL_MM	= 1229,
    MUL_PH	= 1230,
    MUL_Q_H	= 1231,
    MUL_Q_W	= 1232,
    MUL_R6	= 1233,
    MUL_S_PH	= 1234,
    Mfhi16	= 1235,
    Mflo16	= 1236,
    Move32R16	= 1237,
    MoveR3216	= 1238,
    MultRxRy16	= 1239,
    MultRxRyRz16	= 1240,
    MultuRxRy16	= 1241,
    MultuRxRyRz16	= 1242,
    NLOC_B	= 1243,
    NLOC_D	= 1244,
    NLOC_H	= 1245,
    NLOC_W	= 1246,
    NLZC_B	= 1247,
    NLZC_D	= 1248,
    NLZC_H	= 1249,
    NLZC_W	= 1250,
    NMADD_D32	= 1251,
    NMADD_D32_MM	= 1252,
    NMADD_D64	= 1253,
    NMADD_S	= 1254,
    NMADD_S_MM	= 1255,
    NMSUB_D32	= 1256,
    NMSUB_D32_MM	= 1257,
    NMSUB_D64	= 1258,
    NMSUB_S	= 1259,
    NMSUB_S_MM	= 1260,
    NOP	= 1261,
    NOR	= 1262,
    NOR64	= 1263,
    NORI_B	= 1264,
    NOR_MM	= 1265,
    NOR_V	= 1266,
    NOR_V_D_PSEUDO	= 1267,
    NOR_V_H_PSEUDO	= 1268,
    NOR_V_W_PSEUDO	= 1269,
    NOT16_MM	= 1270,
    NegRxRy16	= 1271,
    NotRxRy16	= 1272,
    OR	= 1273,
    OR16_MM	= 1274,
    OR64	= 1275,
    ORI_B	= 1276,
    OR_MM	= 1277,
    OR_V	= 1278,
    OR_V_D_PSEUDO	= 1279,
    OR_V_H_PSEUDO	= 1280,
    OR_V_W_PSEUDO	= 1281,
    ORi	= 1282,
    ORi64	= 1283,
    ORi_MM	= 1284,
    OrRxRxRy16	= 1285,
    PACKRL_PH	= 1286,
    PAUSE	= 1287,
    PAUSE_MM	= 1288,
    PCKEV_B	= 1289,
    PCKEV_D	= 1290,
    PCKEV_H	= 1291,
    PCKEV_W	= 1292,
    PCKOD_B	= 1293,
    PCKOD_D	= 1294,
    PCKOD_H	= 1295,
    PCKOD_W	= 1296,
    PCNT_B	= 1297,
    PCNT_D	= 1298,
    PCNT_H	= 1299,
    PCNT_W	= 1300,
    PICK_PH	= 1301,
    PICK_QB	= 1302,
    POP	= 1303,
    PRECEQU_PH_QBL	= 1304,
    PRECEQU_PH_QBLA	= 1305,
    PRECEQU_PH_QBR	= 1306,
    PRECEQU_PH_QBRA	= 1307,
    PRECEQ_W_PHL	= 1308,
    PRECEQ_W_PHR	= 1309,
    PRECEU_PH_QBL	= 1310,
    PRECEU_PH_QBLA	= 1311,
    PRECEU_PH_QBR	= 1312,
    PRECEU_PH_QBRA	= 1313,
    PRECRQU_S_QB_PH	= 1314,
    PRECRQ_PH_W	= 1315,
    PRECRQ_QB_PH	= 1316,
    PRECRQ_RS_PH_W	= 1317,
    PRECR_QB_PH	= 1318,
    PRECR_SRA_PH_W	= 1319,
    PRECR_SRA_R_PH_W	= 1320,
    PREF	= 1321,
    PREF_MM	= 1322,
    PREF_R6	= 1323,
    PREPEND	= 1324,
    PseudoCMPU_EQ_QB	= 1325,
    PseudoCMPU_LE_QB	= 1326,
    PseudoCMPU_LT_QB	= 1327,
    PseudoCMP_EQ_PH	= 1328,
    PseudoCMP_LE_PH	= 1329,
    PseudoCMP_LT_PH	= 1330,
    PseudoCVT_D32_W	= 1331,
    PseudoCVT_D64_L	= 1332,
    PseudoCVT_D64_W	= 1333,
    PseudoCVT_S_L	= 1334,
    PseudoCVT_S_W	= 1335,
    PseudoDMULT	= 1336,
    PseudoDMULTu	= 1337,
    PseudoDSDIV	= 1338,
    PseudoDUDIV	= 1339,
    PseudoIndirectBranch	= 1340,
    PseudoIndirectBranch64	= 1341,
    PseudoMADD	= 1342,
    PseudoMADDU	= 1343,
    PseudoMFHI	= 1344,
    PseudoMFHI64	= 1345,
    PseudoMFLO	= 1346,
    PseudoMFLO64	= 1347,
    PseudoMSUB	= 1348,
    PseudoMSUBU	= 1349,
    PseudoMTLOHI	= 1350,
    PseudoMTLOHI64	= 1351,
    PseudoMTLOHI_DSP	= 1352,
    PseudoMULT	= 1353,
    PseudoMULTu	= 1354,
    PseudoPICK_PH	= 1355,
    PseudoPICK_QB	= 1356,
    PseudoReturn	= 1357,
    PseudoReturn64	= 1358,
    PseudoSDIV	= 1359,
    PseudoSELECTFP_F_D32	= 1360,
    PseudoSELECTFP_F_D64	= 1361,
    PseudoSELECTFP_F_I	= 1362,
    PseudoSELECTFP_F_I64	= 1363,
    PseudoSELECTFP_F_S	= 1364,
    PseudoSELECTFP_T_D32	= 1365,
    PseudoSELECTFP_T_D64	= 1366,
    PseudoSELECTFP_T_I	= 1367,
    PseudoSELECTFP_T_I64	= 1368,
    PseudoSELECTFP_T_S	= 1369,
    PseudoSELECT_D32	= 1370,
    PseudoSELECT_D64	= 1371,
    PseudoSELECT_I	= 1372,
    PseudoSELECT_I64	= 1373,
    PseudoSELECT_S	= 1374,
    PseudoUDIV	= 1375,
    RADDU_W_QB	= 1376,
    RDDSP	= 1377,
    RDHWR	= 1378,
    RDHWR64	= 1379,
    RDHWR_MM	= 1380,
    REPLV_PH	= 1381,
    REPLV_QB	= 1382,
    REPL_PH	= 1383,
    REPL_QB	= 1384,
    RINT_D	= 1385,
    RINT_S	= 1386,
    ROTR	= 1387,
    ROTRV	= 1388,
    ROTRV_MM	= 1389,
    ROTR_MM	= 1390,
    ROUND_L_D64	= 1391,
    ROUND_L_S	= 1392,
    ROUND_W_D32	= 1393,
    ROUND_W_D64	= 1394,
    ROUND_W_MM	= 1395,
    ROUND_W_S	= 1396,
    ROUND_W_S_MM	= 1397,
    Restore16	= 1398,
    RestoreX16	= 1399,
    RetRA	= 1400,
    RetRA16	= 1401,
    SAT_S_B	= 1402,
    SAT_S_D	= 1403,
    SAT_S_H	= 1404,
    SAT_S_W	= 1405,
    SAT_U_B	= 1406,
    SAT_U_D	= 1407,
    SAT_U_H	= 1408,
    SAT_U_W	= 1409,
    SB	= 1410,
    SB16_MM	= 1411,
    SB64	= 1412,
    SB_MM	= 1413,
    SC	= 1414,
    SCD	= 1415,
    SCD_R6	= 1416,
    SC_MM	= 1417,
    SC_R6	= 1418,
    SD	= 1419,
    SDBBP	= 1420,
    SDBBP16_MM	= 1421,
    SDBBP_MM	= 1422,
    SDBBP_R6	= 1423,
    SDC1	= 1424,
    SDC164	= 1425,
    SDC1_MM	= 1426,
    SDC2	= 1427,
    SDC2_R6	= 1428,
    SDC3	= 1429,
    SDIV	= 1430,
    SDIV_MM	= 1431,
    SDL	= 1432,
    SDR	= 1433,
    SDXC1	= 1434,
    SDXC164	= 1435,
    SEB	= 1436,
    SEB64	= 1437,
    SEB_MM	= 1438,
    SEH	= 1439,
    SEH64	= 1440,
    SEH_MM	= 1441,
    SELEQZ	= 1442,
    SELEQZ64	= 1443,
    SELEQZ_D	= 1444,
    SELEQZ_S	= 1445,
    SELNEZ	= 1446,
    SELNEZ64	= 1447,
    SELNEZ_D	= 1448,
    SELNEZ_S	= 1449,
    SEL_D	= 1450,
    SEL_S	= 1451,
    SEQ	= 1452,
    SEQi	= 1453,
    SH	= 1454,
    SH16_MM	= 1455,
    SH64	= 1456,
    SHF_B	= 1457,
    SHF_H	= 1458,
    SHF_W	= 1459,
    SHILO	= 1460,
    SHILOV	= 1461,
    SHLLV_PH	= 1462,
    SHLLV_QB	= 1463,
    SHLLV_S_PH	= 1464,
    SHLLV_S_W	= 1465,
    SHLL_PH	= 1466,
    SHLL_QB	= 1467,
    SHLL_S_PH	= 1468,
    SHLL_S_W	= 1469,
    SHRAV_PH	= 1470,
    SHRAV_QB	= 1471,
    SHRAV_R_PH	= 1472,
    SHRAV_R_QB	= 1473,
    SHRAV_R_W	= 1474,
    SHRA_PH	= 1475,
    SHRA_QB	= 1476,
    SHRA_R_PH	= 1477,
    SHRA_R_QB	= 1478,
    SHRA_R_W	= 1479,
    SHRLV_PH	= 1480,
    SHRLV_QB	= 1481,
    SHRL_PH	= 1482,
    SHRL_QB	= 1483,
    SH_MM	= 1484,
    SLDI_B	= 1485,
    SLDI_D	= 1486,
    SLDI_H	= 1487,
    SLDI_W	= 1488,
    SLD_B	= 1489,
    SLD_D	= 1490,
    SLD_H	= 1491,
    SLD_W	= 1492,
    SLL	= 1493,
    SLL16_MM	= 1494,
    SLL64_32	= 1495,
    SLL64_64	= 1496,
    SLLI_B	= 1497,
    SLLI_D	= 1498,
    SLLI_H	= 1499,
    SLLI_W	= 1500,
    SLLV	= 1501,
    SLLV_MM	= 1502,
    SLL_B	= 1503,
    SLL_D	= 1504,
    SLL_H	= 1505,
    SLL_MM	= 1506,
    SLL_W	= 1507,
    SLT	= 1508,
    SLT64	= 1509,
    SLT_MM	= 1510,
    SLTi	= 1511,
    SLTi64	= 1512,
    SLTi_MM	= 1513,
    SLTiu	= 1514,
    SLTiu64	= 1515,
    SLTiu_MM	= 1516,
    SLTu	= 1517,
    SLTu64	= 1518,
    SLTu_MM	= 1519,
    SNE	= 1520,
    SNEi	= 1521,
    SNZ_B_PSEUDO	= 1522,
    SNZ_D_PSEUDO	= 1523,
    SNZ_H_PSEUDO	= 1524,
    SNZ_V_PSEUDO	= 1525,
    SNZ_W_PSEUDO	= 1526,
    SPLATI_B	= 1527,
    SPLATI_D	= 1528,
    SPLATI_H	= 1529,
    SPLATI_W	= 1530,
    SPLAT_B	= 1531,
    SPLAT_D	= 1532,
    SPLAT_H	= 1533,
    SPLAT_W	= 1534,
    SRA	= 1535,
    SRAI_B	= 1536,
    SRAI_D	= 1537,
    SRAI_H	= 1538,
    SRAI_W	= 1539,
    SRARI_B	= 1540,
    SRARI_D	= 1541,
    SRARI_H	= 1542,
    SRARI_W	= 1543,
    SRAR_B	= 1544,
    SRAR_D	= 1545,
    SRAR_H	= 1546,
    SRAR_W	= 1547,
    SRAV	= 1548,
    SRAV_MM	= 1549,
    SRA_B	= 1550,
    SRA_D	= 1551,
    SRA_H	= 1552,
    SRA_MM	= 1553,
    SRA_W	= 1554,
    SRL	= 1555,
    SRL16_MM	= 1556,
    SRLI_B	= 1557,
    SRLI_D	= 1558,
    SRLI_H	= 1559,
    SRLI_W	= 1560,
    SRLRI_B	= 1561,
    SRLRI_D	= 1562,
    SRLRI_H	= 1563,
    SRLRI_W	= 1564,
    SRLR_B	= 1565,
    SRLR_D	= 1566,
    SRLR_H	= 1567,
    SRLR_W	= 1568,
    SRLV	= 1569,
    SRLV_MM	= 1570,
    SRL_B	= 1571,
    SRL_D	= 1572,
    SRL_H	= 1573,
    SRL_MM	= 1574,
    SRL_W	= 1575,
    SSNOP	= 1576,
    SSNOP_MM	= 1577,
    STORE_ACC128	= 1578,
    STORE_ACC64	= 1579,
    STORE_ACC64DSP	= 1580,
    STORE_CCOND_DSP	= 1581,
    ST_B	= 1582,
    ST_D	= 1583,
    ST_H	= 1584,
    ST_W	= 1585,
    SUB	= 1586,
    SUBQH_PH	= 1587,
    SUBQH_R_PH	= 1588,
    SUBQH_R_W	= 1589,
    SUBQH_W	= 1590,
    SUBQ_PH	= 1591,
    SUBQ_S_PH	= 1592,
    SUBQ_S_W	= 1593,
    SUBSUS_U_B	= 1594,
    SUBSUS_U_D	= 1595,
    SUBSUS_U_H	= 1596,
    SUBSUS_U_W	= 1597,
    SUBSUU_S_B	= 1598,
    SUBSUU_S_D	= 1599,
    SUBSUU_S_H	= 1600,
    SUBSUU_S_W	= 1601,
    SUBS_S_B	= 1602,
    SUBS_S_D	= 1603,
    SUBS_S_H	= 1604,
    SUBS_S_W	= 1605,
    SUBS_U_B	= 1606,
    SUBS_U_D	= 1607,
    SUBS_U_H	= 1608,
    SUBS_U_W	= 1609,
    SUBU16_MM	= 1610,
    SUBUH_QB	= 1611,
    SUBUH_R_QB	= 1612,
    SUBU_PH	= 1613,
    SUBU_QB	= 1614,
    SUBU_S_PH	= 1615,
    SUBU_S_QB	= 1616,
    SUBVI_B	= 1617,
    SUBVI_D	= 1618,
    SUBVI_H	= 1619,
    SUBVI_W	= 1620,
    SUBV_B	= 1621,
    SUBV_D	= 1622,
    SUBV_H	= 1623,
    SUBV_W	= 1624,
    SUB_MM	= 1625,
    SUBu	= 1626,
    SUBu_MM	= 1627,
    SUXC1	= 1628,
    SUXC164	= 1629,
    SUXC1_MM	= 1630,
    SW	= 1631,
    SW16_MM	= 1632,
    SW64	= 1633,
    SWC1	= 1634,
    SWC1_MM	= 1635,
    SWC2	= 1636,
    SWC2_R6	= 1637,
    SWC3	= 1638,
    SWL	= 1639,
    SWL64	= 1640,
    SWL_MM	= 1641,
    SWM16_MM	= 1642,
    SWM32_MM	= 1643,
    SWM_MM	= 1644,
    SWP_MM	= 1645,
    SWR	= 1646,
    SWR64	= 1647,
    SWR_MM	= 1648,
    SWSP_MM	= 1649,
    SWXC1	= 1650,
    SWXC1_MM	= 1651,
    SW_MM	= 1652,
    SYNC	= 1653,
    SYNCI	= 1654,
    SYNC_MM	= 1655,
    SYSCALL	= 1656,
    SYSCALL_MM	= 1657,
    SZ_B_PSEUDO	= 1658,
    SZ_D_PSEUDO	= 1659,
    SZ_H_PSEUDO	= 1660,
    SZ_V_PSEUDO	= 1661,
    SZ_W_PSEUDO	= 1662,
    Save16	= 1663,
    SaveX16	= 1664,
    SbRxRyOffMemX16	= 1665,
    SebRx16	= 1666,
    SehRx16	= 1667,
    SelBeqZ	= 1668,
    SelBneZ	= 1669,
    SelTBteqZCmp	= 1670,
    SelTBteqZCmpi	= 1671,
    SelTBteqZSlt	= 1672,
    SelTBteqZSlti	= 1673,
    SelTBteqZSltiu	= 1674,
    SelTBteqZSltu	= 1675,
    SelTBtneZCmp	= 1676,
    SelTBtneZCmpi	= 1677,
    SelTBtneZSlt	= 1678,
    SelTBtneZSlti	= 1679,
    SelTBtneZSltiu	= 1680,
    SelTBtneZSltu	= 1681,
    ShRxRyOffMemX16	= 1682,
    SllX16	= 1683,
    SllvRxRy16	= 1684,
    SltCCRxRy16	= 1685,
    SltRxRy16	= 1686,
    SltiCCRxImmX16	= 1687,
    SltiRxImm16	= 1688,
    SltiRxImmX16	= 1689,
    SltiuCCRxImmX16	= 1690,
    SltiuRxImm16	= 1691,
    SltiuRxImmX16	= 1692,
    SltuCCRxRy16	= 1693,
    SltuRxRy16	= 1694,
    SltuRxRyRz16	= 1695,
    SraX16	= 1696,
    SravRxRy16	= 1697,
    SrlX16	= 1698,
    SrlvRxRy16	= 1699,
    SubuRxRyRz16	= 1700,
    SwRxRyOffMemX16	= 1701,
    SwRxSpImmX16	= 1702,
    TAILCALL	= 1703,
    TAILCALL64_R	= 1704,
    TAILCALL_R	= 1705,
    TEQ	= 1706,
    TEQI	= 1707,
    TEQI_MM	= 1708,
    TEQ_MM	= 1709,
    TGE	= 1710,
    TGEI	= 1711,
    TGEIU	= 1712,
    TGEIU_MM	= 1713,
    TGEI_MM	= 1714,
    TGEU	= 1715,
    TGEU_MM	= 1716,
    TGE_MM	= 1717,
    TLBP	= 1718,
    TLBP_MM	= 1719,
    TLBR	= 1720,
    TLBR_MM	= 1721,
    TLBWI	= 1722,
    TLBWI_MM	= 1723,
    TLBWR	= 1724,
    TLBWR_MM	= 1725,
    TLT	= 1726,
    TLTI	= 1727,
    TLTIU_MM	= 1728,
    TLTI_MM	= 1729,
    TLTU	= 1730,
    TLTU_MM	= 1731,
    TLT_MM	= 1732,
    TNE	= 1733,
    TNEI	= 1734,
    TNEI_MM	= 1735,
    TNE_MM	= 1736,
    TRAP	= 1737,
    TRUNC_L_D64	= 1738,
    TRUNC_L_S	= 1739,
    TRUNC_W_D32	= 1740,
    TRUNC_W_D64	= 1741,
    TRUNC_W_MM	= 1742,
    TRUNC_W_S	= 1743,
    TRUNC_W_S_MM	= 1744,
    TTLTIU	= 1745,
    UDIV	= 1746,
    UDIV_MM	= 1747,
    V3MULU	= 1748,
    VMM0	= 1749,
    VMULU	= 1750,
    VSHF_B	= 1751,
    VSHF_D	= 1752,
    VSHF_H	= 1753,
    VSHF_W	= 1754,
    WAIT	= 1755,
    WAIT_MM	= 1756,
    WRDSP	= 1757,
    WSBH	= 1758,
    WSBH_MM	= 1759,
    XOR	= 1760,
    XOR16_MM	= 1761,
    XOR64	= 1762,
    XORI_B	= 1763,
    XOR_MM	= 1764,
    XOR_V	= 1765,
    XOR_V_D_PSEUDO	= 1766,
    XOR_V_H_PSEUDO	= 1767,
    XOR_V_W_PSEUDO	= 1768,
    XORi	= 1769,
    XORi64	= 1770,
    XORi_MM	= 1771,
    XorRxRxRy16	= 1772,
    INSTRUCTION_LIST_END = 1773
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDU	= 1,
    II_ADDIU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_EXT	= 20,
    II_INS	= 21,
    II_DMFC1	= 22,
    II_DMTC1	= 23,
    II_DMUL	= 24,
    II_DMULT	= 25,
    II_DMULTU	= 26,
    II_POP	= 27,
    II_DROTR	= 28,
    II_DROTR32	= 29,
    II_DROTRV	= 30,
    II_DDIV	= 31,
    II_DSLL	= 32,
    II_DSLL32	= 33,
    II_DSLLV	= 34,
    II_DSRA	= 35,
    II_DSRA32	= 36,
    II_DSRAV	= 37,
    II_DSRL	= 38,
    II_DSRL32	= 39,
    II_DSRLV	= 40,
    II_DSUB	= 41,
    II_DSUBU	= 42,
    II_DDIVU	= 43,
    II_ABS	= 44,
    II_ADD_D	= 45,
    II_ADD_S	= 46,
    II_DIV_D	= 47,
    II_DIV_S	= 48,
    II_FLOOR	= 49,
    II_MOV_D	= 50,
    II_MOV_S	= 51,
    II_MUL_D	= 52,
    II_MUL_S	= 53,
    II_NEG	= 54,
    II_SQRT_D	= 55,
    II_SQRT_S	= 56,
    II_SUB_D	= 57,
    II_SUB_S	= 58,
    II_LB	= 59,
    II_LBU	= 60,
    II_LD	= 61,
    II_LDC1	= 62,
    II_LDL	= 63,
    II_LDR	= 64,
    II_LDXC1	= 65,
    II_LH	= 66,
    II_LHU	= 67,
    II_LUXC1	= 68,
    II_LUI	= 69,
    II_LW	= 70,
    II_LWC1	= 71,
    II_LWL	= 72,
    II_LWR	= 73,
    II_LWU	= 74,
    II_LWXC1	= 75,
    II_MADD	= 76,
    II_MADDU	= 77,
    II_MADD_D	= 78,
    II_MADD_S	= 79,
    II_MFC1	= 80,
    II_MFHC1	= 81,
    II_MFHI_MFLO	= 82,
    II_MOVF_D	= 83,
    II_MOVF	= 84,
    II_MOVF_S	= 85,
    II_MOVN_D	= 86,
    II_MOVN	= 87,
    II_MOVN_S	= 88,
    II_MOVT_D	= 89,
    II_MOVT	= 90,
    II_MOVT_S	= 91,
    II_MOVZ_D	= 92,
    II_MOVZ	= 93,
    II_MOVZ_S	= 94,
    II_MSUB	= 95,
    II_MSUBU	= 96,
    II_MSUB_D	= 97,
    II_MSUB_S	= 98,
    II_MTC1	= 99,
    II_MTHC1	= 100,
    II_MTHI_MTLO	= 101,
    II_MUL	= 102,
    II_MULT	= 103,
    II_MULTU	= 104,
    II_NMADD_D	= 105,
    II_NMADD_S	= 106,
    II_NMSUB_D	= 107,
    II_NMSUB_S	= 108,
    II_NOR	= 109,
    II_OR	= 110,
    II_ORI	= 111,
    II_DIV	= 112,
    II_DIVU	= 113,
    II_RDHWR	= 114,
    II_ROTR	= 115,
    II_ROTRV	= 116,
    II_ROUND	= 117,
    II_RESTORE	= 118,
    II_SB	= 119,
    II_SD	= 120,
    II_SDC1	= 121,
    II_SDL	= 122,
    II_SDR	= 123,
    II_SDXC1	= 124,
    II_SEB	= 125,
    II_SEH	= 126,
    II_SEQ_SNE	= 127,
    II_SEQI_SNEI	= 128,
    II_SH	= 129,
    II_SLL	= 130,
    II_SLLV	= 131,
    II_SLT_SLTU	= 132,
    II_SLTI_SLTIU	= 133,
    II_SRA	= 134,
    II_SRAV	= 135,
    II_SRL	= 136,
    II_SRLV	= 137,
    II_SUBU	= 138,
    II_SUXC1	= 139,
    II_SW	= 140,
    II_SWC1	= 141,
    II_SWL	= 142,
    II_SWR	= 143,
    II_SWXC1	= 144,
    II_SAVE	= 145,
    II_TRUNC	= 146,
    II_XOR	= 147,
    II_XORI	= 148,
    SCHED_LIST_END = 149
  };
} // End Sched namespace
} // End Mips namespace
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

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo186[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
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
  { 22,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #22 = ABSQ_S_PH
  { 23,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #23 = ABSQ_S_QB
  { 24,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #24 = ABSQ_S_W
  { 25,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #25 = ADD
  { 26,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #26 = ADDIUPC
  { 27,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #27 = ADDIUPC_MM
  { 28,	2,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #28 = ADDIUR1SP_MM
  { 29,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #29 = ADDIUR2_MM
  { 30,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #30 = ADDIUS5_MM
  { 31,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #31 = ADDIUSP_MM
  { 32,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #32 = ADDQH_PH
  { 33,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #33 = ADDQH_R_PH
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #34 = ADDQH_R_W
  { 35,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #35 = ADDQH_W
  { 36,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #36 = ADDQ_PH
  { 37,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #37 = ADDQ_S_PH
  { 38,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #38 = ADDQ_S_W
  { 39,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #39 = ADDSC
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #40 = ADDS_A_B
  { 41,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #41 = ADDS_A_D
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #42 = ADDS_A_H
  { 43,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #43 = ADDS_A_W
  { 44,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #44 = ADDS_S_B
  { 45,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #45 = ADDS_S_D
  { 46,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #46 = ADDS_S_H
  { 47,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #47 = ADDS_S_W
  { 48,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #48 = ADDS_U_B
  { 49,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #49 = ADDS_U_D
  { 50,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #50 = ADDS_U_H
  { 51,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #51 = ADDS_U_W
  { 52,	3,	1,	1,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #52 = ADDU16_MM
  { 53,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #53 = ADDUH_QB
  { 54,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #54 = ADDUH_R_QB
  { 55,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #55 = ADDU_PH
  { 56,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #56 = ADDU_QB
  { 57,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #57 = ADDU_S_PH
  { 58,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #58 = ADDU_S_QB
  { 59,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #59 = ADDVI_B
  { 60,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #60 = ADDVI_D
  { 61,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #61 = ADDVI_H
  { 62,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #62 = ADDVI_W
  { 63,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #63 = ADDV_B
  { 64,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #64 = ADDV_D
  { 65,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #65 = ADDV_H
  { 66,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #66 = ADDV_W
  { 67,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #67 = ADDWC
  { 68,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #68 = ADD_A_B
  { 69,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #69 = ADD_A_D
  { 70,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #70 = ADD_A_H
  { 71,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #71 = ADD_A_W
  { 72,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #72 = ADD_MM
  { 73,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #73 = ADDi
  { 74,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #74 = ADDi_MM
  { 75,	3,	1,	2,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #75 = ADDiu
  { 76,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #76 = ADDiu_MM
  { 77,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #77 = ADDu
  { 78,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #78 = ADDu_MM
  { 79,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #79 = ADJCALLSTACKDOWN
  { 80,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8,0,nullptr },  // Inst #80 = ADJCALLSTACKUP
  { 81,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #81 = ALIGN
  { 82,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #82 = ALUIPC
  { 83,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #83 = AND
  { 84,	3,	1,	4,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #84 = AND16_MM
  { 85,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #85 = AND64
  { 86,	3,	1,	4,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #86 = ANDI16_MM
  { 87,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #87 = ANDI_B
  { 88,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #88 = AND_MM
  { 89,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #89 = AND_V
  { 90,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #90 = AND_V_D_PSEUDO
  { 91,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #91 = AND_V_H_PSEUDO
  { 92,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #92 = AND_V_W_PSEUDO
  { 93,	3,	1,	5,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #93 = ANDi
  { 94,	3,	1,	4,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #94 = ANDi64
  { 95,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #95 = ANDi_MM
  { 96,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #96 = APPEND
  { 97,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #97 = ASUB_S_B
  { 98,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #98 = ASUB_S_D
  { 99,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #99 = ASUB_S_H
  { 100,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #100 = ASUB_S_W
  { 101,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #101 = ASUB_U_B
  { 102,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #102 = ASUB_U_D
  { 103,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #103 = ASUB_U_H
  { 104,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #104 = ASUB_U_W
  { 105,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #105 = ATOMIC_CMP_SWAP_I16
  { 106,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #106 = ATOMIC_CMP_SWAP_I32
  { 107,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #107 = ATOMIC_CMP_SWAP_I64
  { 108,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #108 = ATOMIC_CMP_SWAP_I8
  { 109,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #109 = ATOMIC_LOAD_ADD_I16
  { 110,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #110 = ATOMIC_LOAD_ADD_I32
  { 111,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #111 = ATOMIC_LOAD_ADD_I64
  { 112,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #112 = ATOMIC_LOAD_ADD_I8
  { 113,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #113 = ATOMIC_LOAD_AND_I16
  { 114,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #114 = ATOMIC_LOAD_AND_I32
  { 115,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #115 = ATOMIC_LOAD_AND_I64
  { 116,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #116 = ATOMIC_LOAD_AND_I8
  { 117,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #117 = ATOMIC_LOAD_NAND_I16
  { 118,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #118 = ATOMIC_LOAD_NAND_I32
  { 119,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #119 = ATOMIC_LOAD_NAND_I64
  { 120,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #120 = ATOMIC_LOAD_NAND_I8
  { 121,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #121 = ATOMIC_LOAD_OR_I16
  { 122,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #122 = ATOMIC_LOAD_OR_I32
  { 123,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #123 = ATOMIC_LOAD_OR_I64
  { 124,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #124 = ATOMIC_LOAD_OR_I8
  { 125,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #125 = ATOMIC_LOAD_SUB_I16
  { 126,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #126 = ATOMIC_LOAD_SUB_I32
  { 127,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #127 = ATOMIC_LOAD_SUB_I64
  { 128,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #128 = ATOMIC_LOAD_SUB_I8
  { 129,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #129 = ATOMIC_LOAD_XOR_I16
  { 130,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #130 = ATOMIC_LOAD_XOR_I32
  { 131,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #131 = ATOMIC_LOAD_XOR_I64
  { 132,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #132 = ATOMIC_LOAD_XOR_I8
  { 133,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #133 = ATOMIC_SWAP_I16
  { 134,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #134 = ATOMIC_SWAP_I32
  { 135,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #135 = ATOMIC_SWAP_I64
  { 136,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #136 = ATOMIC_SWAP_I8
  { 137,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #137 = AUI
  { 138,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #138 = AUIPC
  { 139,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #139 = AVER_S_B
  { 140,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #140 = AVER_S_D
  { 141,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #141 = AVER_S_H
  { 142,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #142 = AVER_S_W
  { 143,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #143 = AVER_U_B
  { 144,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #144 = AVER_U_D
  { 145,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #145 = AVER_U_H
  { 146,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #146 = AVER_U_W
  { 147,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #147 = AVE_S_B
  { 148,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #148 = AVE_S_D
  { 149,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #149 = AVE_S_H
  { 150,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #150 = AVE_S_W
  { 151,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #151 = AVE_U_B
  { 152,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #152 = AVE_U_D
  { 153,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #153 = AVE_U_H
  { 154,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #154 = AVE_U_W
  { 155,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #155 = AddiuRxImmX16
  { 156,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #156 = AddiuRxPcImmX16
  { 157,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #157 = AddiuRxRxImm16
  { 158,	3,	1,	6,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #158 = AddiuRxRxImmX16
  { 159,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #159 = AddiuRxRyOffMemX16
  { 160,	1,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #160 = AddiuSpImm16
  { 161,	1,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #161 = AddiuSpImmX16
  { 162,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #162 = AdduRxRyRz16
  { 163,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #163 = AndRxRxRy16
  { 164,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #164 = B
  { 165,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #165 = B16_MM
  { 166,	3,	1,	8,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #166 = BADDu
  { 167,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #167 = BAL
  { 168,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #168 = BALC
  { 169,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #169 = BALIGN
  { 170,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #170 = BAL_BR
  { 171,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #171 = BBIT0
  { 172,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #172 = BBIT032
  { 173,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #173 = BBIT1
  { 174,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #174 = BBIT132
  { 175,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #175 = BC
  { 176,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #176 = BC1EQZ
  { 177,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #177 = BC1F
  { 178,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #178 = BC1FL
  { 179,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #179 = BC1F_MM
  { 180,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #180 = BC1NEZ
  { 181,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #181 = BC1T
  { 182,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #182 = BC1TL
  { 183,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #183 = BC1T_MM
  { 184,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #184 = BC2EQZ
  { 185,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #185 = BC2NEZ
  { 186,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #186 = BCLRI_B
  { 187,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #187 = BCLRI_D
  { 188,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #188 = BCLRI_H
  { 189,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #189 = BCLRI_W
  { 190,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #190 = BCLR_B
  { 191,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #191 = BCLR_D
  { 192,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #192 = BCLR_H
  { 193,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #193 = BCLR_W
  { 194,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #194 = BEQ
  { 195,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #195 = BEQ64
  { 196,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #196 = BEQC
  { 197,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #197 = BEQL
  { 198,	2,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51,0,nullptr },  // Inst #198 = BEQZ16_MM
  { 199,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #199 = BEQZALC
  { 200,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #200 = BEQZC
  { 201,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #201 = BEQZC_MM
  { 202,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #202 = BEQ_MM
  { 203,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #203 = BGEC
  { 204,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #204 = BGEUC
  { 205,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #205 = BGEZ
  { 206,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #206 = BGEZ64
  { 207,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #207 = BGEZAL
  { 208,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #208 = BGEZALC
  { 209,	2,	0,	7,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #209 = BGEZALL
  { 210,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #210 = BGEZALS_MM
  { 211,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #211 = BGEZAL_MM
  { 212,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #212 = BGEZC
  { 213,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #213 = BGEZL
  { 214,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #214 = BGEZ_MM
  { 215,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #215 = BGTZ
  { 216,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #216 = BGTZ64
  { 217,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #217 = BGTZALC
  { 218,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #218 = BGTZC
  { 219,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #219 = BGTZL
  { 220,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #220 = BGTZ_MM
  { 221,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #221 = BINSLI_B
  { 222,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #222 = BINSLI_D
  { 223,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #223 = BINSLI_H
  { 224,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #224 = BINSLI_W
  { 225,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #225 = BINSL_B
  { 226,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #226 = BINSL_D
  { 227,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #227 = BINSL_H
  { 228,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #228 = BINSL_W
  { 229,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #229 = BINSRI_B
  { 230,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #230 = BINSRI_D
  { 231,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #231 = BINSRI_H
  { 232,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #232 = BINSRI_W
  { 233,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #233 = BINSR_B
  { 234,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #234 = BINSR_D
  { 235,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #235 = BINSR_H
  { 236,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #236 = BINSR_W
  { 237,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #237 = BITREV
  { 238,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #238 = BITSWAP
  { 239,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #239 = BLEZ
  { 240,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #240 = BLEZ64
  { 241,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #241 = BLEZALC
  { 242,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #242 = BLEZC
  { 243,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #243 = BLEZL
  { 244,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #244 = BLEZ_MM
  { 245,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #245 = BLTC
  { 246,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #246 = BLTUC
  { 247,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #247 = BLTZ
  { 248,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #248 = BLTZ64
  { 249,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #249 = BLTZAL
  { 250,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #250 = BLTZALC
  { 251,	2,	0,	7,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #251 = BLTZALL
  { 252,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #252 = BLTZALS_MM
  { 253,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #253 = BLTZAL_MM
  { 254,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #254 = BLTZC
  { 255,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #255 = BLTZL
  { 256,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #256 = BLTZ_MM
  { 257,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #257 = BMNZI_B
  { 258,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #258 = BMNZ_V
  { 259,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #259 = BMZI_B
  { 260,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #260 = BMZ_V
  { 261,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #261 = BNE
  { 262,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #262 = BNE64
  { 263,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #263 = BNEC
  { 264,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #264 = BNEGI_B
  { 265,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #265 = BNEGI_D
  { 266,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #266 = BNEGI_H
  { 267,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #267 = BNEGI_W
  { 268,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #268 = BNEG_B
  { 269,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #269 = BNEG_D
  { 270,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #270 = BNEG_H
  { 271,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #271 = BNEG_W
  { 272,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #272 = BNEL
  { 273,	2,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51,0,nullptr },  // Inst #273 = BNEZ16_MM
  { 274,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #274 = BNEZALC
  { 275,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #275 = BNEZC
  { 276,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #276 = BNEZC_MM
  { 277,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #277 = BNE_MM
  { 278,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #278 = BNVC
  { 279,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #279 = BNZ_B
  { 280,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63,0,nullptr },  // Inst #280 = BNZ_D
  { 281,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64,0,nullptr },  // Inst #281 = BNZ_H
  { 282,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #282 = BNZ_V
  { 283,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65,0,nullptr },  // Inst #283 = BNZ_W
  { 284,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #284 = BOVC
  { 285,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #285 = BPOSGE32
  { 286,	1,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo66,0,nullptr },  // Inst #286 = BPOSGE32_PSEUDO
  { 287,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #287 = BREAK
  { 288,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #288 = BREAK16_MM
  { 289,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #289 = BREAK_MM
  { 290,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #290 = BSELI_B
  { 291,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #291 = BSEL_D_PSEUDO
  { 292,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #292 = BSEL_FD_PSEUDO
  { 293,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #293 = BSEL_FW_PSEUDO
  { 294,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #294 = BSEL_H_PSEUDO
  { 295,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #295 = BSEL_V
  { 296,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #296 = BSEL_W_PSEUDO
  { 297,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #297 = BSETI_B
  { 298,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #298 = BSETI_D
  { 299,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #299 = BSETI_H
  { 300,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #300 = BSETI_W
  { 301,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #301 = BSET_B
  { 302,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #302 = BSET_D
  { 303,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #303 = BSET_H
  { 304,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #304 = BSET_W
  { 305,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #305 = BZ_B
  { 306,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63,0,nullptr },  // Inst #306 = BZ_D
  { 307,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64,0,nullptr },  // Inst #307 = BZ_H
  { 308,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #308 = BZ_V
  { 309,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65,0,nullptr },  // Inst #309 = BZ_W
  { 310,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #310 = B_MM_Pseudo
  { 311,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #311 = BeqzRxImm16
  { 312,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #312 = BeqzRxImmX16
  { 313,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #313 = Bimm16
  { 314,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #314 = BimmX16
  { 315,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #315 = BnezRxImm16
  { 316,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #316 = BnezRxImmX16
  { 317,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #317 = Break16
  { 318,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #318 = Bteqz16
  { 319,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #319 = BteqzT8CmpX16
  { 320,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #320 = BteqzT8CmpiX16
  { 321,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #321 = BteqzT8SltX16
  { 322,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #322 = BteqzT8SltiX16
  { 323,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #323 = BteqzT8SltiuX16
  { 324,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #324 = BteqzT8SltuX16
  { 325,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #325 = BteqzX16
  { 326,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #326 = Btnez16
  { 327,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #327 = BtnezT8CmpX16
  { 328,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #328 = BtnezT8CmpiX16
  { 329,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #329 = BtnezT8SltX16
  { 330,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #330 = BtnezT8SltiX16
  { 331,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #331 = BtnezT8SltiuX16
  { 332,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #332 = BtnezT8SltuX16
  { 333,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #333 = BtnezX16
  { 334,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #334 = BuildPairF64
  { 335,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #335 = BuildPairF64_64
  { 336,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #336 = CACHE
  { 337,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #337 = CACHE_MM
  { 338,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #338 = CACHE_R6
  { 339,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #339 = CEIL_L_D64
  { 340,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #340 = CEIL_L_S
  { 341,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #341 = CEIL_W_D32
  { 342,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #342 = CEIL_W_D64
  { 343,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #343 = CEIL_W_MM
  { 344,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #344 = CEIL_W_S
  { 345,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #345 = CEIL_W_S_MM
  { 346,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #346 = CEQI_B
  { 347,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #347 = CEQI_D
  { 348,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #348 = CEQI_H
  { 349,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #349 = CEQI_W
  { 350,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #350 = CEQ_B
  { 351,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #351 = CEQ_D
  { 352,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #352 = CEQ_H
  { 353,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #353 = CEQ_W
  { 354,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #354 = CFC1
  { 355,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #355 = CFC1_MM
  { 356,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #356 = CFCMSA
  { 357,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #357 = CINS
  { 358,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #358 = CINS32
  { 359,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #359 = CLASS_D
  { 360,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #360 = CLASS_S
  { 361,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #361 = CLEI_S_B
  { 362,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #362 = CLEI_S_D
  { 363,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #363 = CLEI_S_H
  { 364,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #364 = CLEI_S_W
  { 365,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #365 = CLEI_U_B
  { 366,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #366 = CLEI_U_D
  { 367,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #367 = CLEI_U_H
  { 368,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #368 = CLEI_U_W
  { 369,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #369 = CLE_S_B
  { 370,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #370 = CLE_S_D
  { 371,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #371 = CLE_S_H
  { 372,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #372 = CLE_S_W
  { 373,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #373 = CLE_U_B
  { 374,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #374 = CLE_U_D
  { 375,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #375 = CLE_U_H
  { 376,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #376 = CLE_U_W
  { 377,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #377 = CLO
  { 378,	2,	1,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #378 = CLO_MM
  { 379,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #379 = CLO_R6
  { 380,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #380 = CLTI_S_B
  { 381,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #381 = CLTI_S_D
  { 382,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #382 = CLTI_S_H
  { 383,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #383 = CLTI_S_W
  { 384,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #384 = CLTI_U_B
  { 385,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #385 = CLTI_U_D
  { 386,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #386 = CLTI_U_H
  { 387,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #387 = CLTI_U_W
  { 388,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #388 = CLT_S_B
  { 389,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #389 = CLT_S_D
  { 390,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #390 = CLT_S_H
  { 391,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #391 = CLT_S_W
  { 392,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #392 = CLT_U_B
  { 393,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #393 = CLT_U_D
  { 394,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #394 = CLT_U_H
  { 395,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #395 = CLT_U_W
  { 396,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #396 = CLZ
  { 397,	2,	1,	12,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #397 = CLZ_MM
  { 398,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #398 = CLZ_R6
  { 399,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo82,0,nullptr },  // Inst #399 = CMPGDU_EQ_QB
  { 400,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo82,0,nullptr },  // Inst #400 = CMPGDU_LE_QB
  { 401,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo82,0,nullptr },  // Inst #401 = CMPGDU_LT_QB
  { 402,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #402 = CMPGU_EQ_QB
  { 403,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #403 = CMPGU_LE_QB
  { 404,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #404 = CMPGU_LT_QB
  { 405,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #405 = CMPU_EQ_QB
  { 406,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #406 = CMPU_LE_QB
  { 407,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #407 = CMPU_LT_QB
  { 408,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #408 = CMP_EQ_D
  { 409,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #409 = CMP_EQ_PH
  { 410,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #410 = CMP_EQ_S
  { 411,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #411 = CMP_F_D
  { 412,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #412 = CMP_F_S
  { 413,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #413 = CMP_LE_D
  { 414,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #414 = CMP_LE_PH
  { 415,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #415 = CMP_LE_S
  { 416,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #416 = CMP_LT_D
  { 417,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #417 = CMP_LT_PH
  { 418,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #418 = CMP_LT_S
  { 419,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #419 = CMP_SAF_D
  { 420,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #420 = CMP_SAF_S
  { 421,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #421 = CMP_SEQ_D
  { 422,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #422 = CMP_SEQ_S
  { 423,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #423 = CMP_SLE_D
  { 424,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #424 = CMP_SLE_S
  { 425,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #425 = CMP_SLT_D
  { 426,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #426 = CMP_SLT_S
  { 427,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #427 = CMP_SUEQ_D
  { 428,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #428 = CMP_SUEQ_S
  { 429,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #429 = CMP_SULE_D
  { 430,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #430 = CMP_SULE_S
  { 431,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #431 = CMP_SULT_D
  { 432,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #432 = CMP_SULT_S
  { 433,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #433 = CMP_SUN_D
  { 434,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #434 = CMP_SUN_S
  { 435,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #435 = CMP_UEQ_D
  { 436,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #436 = CMP_UEQ_S
  { 437,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #437 = CMP_ULE_D
  { 438,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #438 = CMP_ULE_S
  { 439,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #439 = CMP_ULT_D
  { 440,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #440 = CMP_ULT_S
  { 441,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #441 = CMP_UN_D
  { 442,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #442 = CMP_UN_S
  { 443,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #443 = CONSTPOOL_ENTRY
  { 444,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #444 = COPY_FD_PSEUDO
  { 445,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #445 = COPY_FW_PSEUDO
  { 446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #446 = COPY_S_B
  { 447,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #447 = COPY_S_D
  { 448,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #448 = COPY_S_H
  { 449,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #449 = COPY_S_W
  { 450,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #450 = COPY_U_B
  { 451,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #451 = COPY_U_D
  { 452,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #452 = COPY_U_H
  { 453,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #453 = COPY_U_W
  { 454,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #454 = CTC1
  { 455,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #455 = CTC1_MM
  { 456,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #456 = CTCMSA
  { 457,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #457 = CVT_D32_S
  { 458,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #458 = CVT_D32_W
  { 459,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #459 = CVT_D32_W_MM
  { 460,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #460 = CVT_D64_L
  { 461,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #461 = CVT_D64_S
  { 462,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #462 = CVT_D64_W
  { 463,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #463 = CVT_D_S_MM
  { 464,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #464 = CVT_L_D64
  { 465,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #465 = CVT_L_D64_MM
  { 466,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #466 = CVT_L_S
  { 467,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #467 = CVT_L_S_MM
  { 468,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #468 = CVT_S_D32
  { 469,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #469 = CVT_S_D32_MM
  { 470,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #470 = CVT_S_D64
  { 471,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #471 = CVT_S_L
  { 472,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #472 = CVT_S_W
  { 473,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #473 = CVT_S_W_MM
  { 474,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #474 = CVT_W_D32
  { 475,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #475 = CVT_W_D64
  { 476,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #476 = CVT_W_MM
  { 477,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #477 = CVT_W_S
  { 478,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #478 = CVT_W_S_MM
  { 479,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #479 = C_EQ_D32
  { 480,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #480 = C_EQ_D64
  { 481,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #481 = C_EQ_S
  { 482,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #482 = C_F_D32
  { 483,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #483 = C_F_D64
  { 484,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #484 = C_F_S
  { 485,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #485 = C_LE_D32
  { 486,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #486 = C_LE_D64
  { 487,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #487 = C_LE_S
  { 488,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #488 = C_LT_D32
  { 489,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #489 = C_LT_D64
  { 490,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #490 = C_LT_S
  { 491,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #491 = C_NGE_D32
  { 492,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #492 = C_NGE_D64
  { 493,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #493 = C_NGE_S
  { 494,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #494 = C_NGLE_D32
  { 495,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #495 = C_NGLE_D64
  { 496,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #496 = C_NGLE_S
  { 497,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #497 = C_NGL_D32
  { 498,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #498 = C_NGL_D64
  { 499,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #499 = C_NGL_S
  { 500,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #500 = C_NGT_D32
  { 501,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #501 = C_NGT_D64
  { 502,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #502 = C_NGT_S
  { 503,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #503 = C_OLE_D32
  { 504,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #504 = C_OLE_D64
  { 505,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #505 = C_OLE_S
  { 506,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #506 = C_OLT_D32
  { 507,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #507 = C_OLT_D64
  { 508,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #508 = C_OLT_S
  { 509,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #509 = C_SEQ_D32
  { 510,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #510 = C_SEQ_D64
  { 511,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #511 = C_SEQ_S
  { 512,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #512 = C_SF_D32
  { 513,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #513 = C_SF_D64
  { 514,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #514 = C_SF_S
  { 515,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #515 = C_UEQ_D32
  { 516,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #516 = C_UEQ_D64
  { 517,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #517 = C_UEQ_S
  { 518,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #518 = C_ULE_D32
  { 519,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #519 = C_ULE_D64
  { 520,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #520 = C_ULE_S
  { 521,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #521 = C_ULT_D32
  { 522,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #522 = C_ULT_D64
  { 523,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #523 = C_ULT_S
  { 524,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #524 = C_UN_D32
  { 525,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #525 = C_UN_D64
  { 526,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #526 = C_UN_S
  { 527,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo95,0,nullptr },  // Inst #527 = CmpRxRy16
  { 528,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #528 = CmpiRxImm16
  { 529,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #529 = CmpiRxImmX16
  { 530,	1,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #530 = Constant32
  { 531,	3,	1,	17,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #531 = DADD
  { 532,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #532 = DADDi
  { 533,	3,	1,	18,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #533 = DADDiu
  { 534,	3,	1,	19,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #534 = DADDu
  { 535,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #535 = DAHI
  { 536,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #536 = DALIGN
  { 537,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #537 = DATI
  { 538,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #538 = DAUI
  { 539,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #539 = DBITSWAP
  { 540,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #540 = DCLO
  { 541,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #541 = DCLO_R6
  { 542,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #542 = DCLZ
  { 543,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #543 = DCLZ_R6
  { 544,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #544 = DDIV
  { 545,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #545 = DDIVU
  { 546,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #546 = DERET
  { 547,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #547 = DERET_MM
  { 548,	4,	1,	20,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #548 = DEXT
  { 549,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #549 = DEXTM
  { 550,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #550 = DEXTU
  { 551,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #551 = DI
  { 552,	5,	1,	21,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #552 = DINS
  { 553,	5,	1,	21,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #553 = DINSM
  { 554,	5,	1,	21,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #554 = DINSU
  { 555,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #555 = DIV
  { 556,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #556 = DIVU
  { 557,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #557 = DIV_S_B
  { 558,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #558 = DIV_S_D
  { 559,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #559 = DIV_S_H
  { 560,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #560 = DIV_S_W
  { 561,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #561 = DIV_U_B
  { 562,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #562 = DIV_U_D
  { 563,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #563 = DIV_U_H
  { 564,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #564 = DIV_U_W
  { 565,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #565 = DI_MM
  { 566,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #566 = DLSA
  { 567,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #567 = DLSA_R6
  { 568,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #568 = DMFC0
  { 569,	2,	1,	22,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #569 = DMFC1
  { 570,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #570 = DMFC2
  { 571,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #571 = DMOD
  { 572,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #572 = DMODU
  { 573,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #573 = DMTC0
  { 574,	2,	1,	23,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #574 = DMTC1
  { 575,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #575 = DMTC2
  { 576,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #576 = DMUH
  { 577,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #577 = DMUHU
  { 578,	3,	1,	24,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo32,0,nullptr },  // Inst #578 = DMUL
  { 579,	2,	0,	25,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #579 = DMULT
  { 580,	2,	0,	26,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #580 = DMULTu
  { 581,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #581 = DMULU
  { 582,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #582 = DMUL_R6
  { 583,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #583 = DOTP_S_D
  { 584,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #584 = DOTP_S_H
  { 585,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #585 = DOTP_S_W
  { 586,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #586 = DOTP_U_D
  { 587,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #587 = DOTP_U_H
  { 588,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #588 = DOTP_U_W
  { 589,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #589 = DPADD_S_D
  { 590,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #590 = DPADD_S_H
  { 591,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #591 = DPADD_S_W
  { 592,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #592 = DPADD_U_D
  { 593,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #593 = DPADD_U_H
  { 594,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #594 = DPADD_U_W
  { 595,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #595 = DPAQX_SA_W_PH
  { 596,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #596 = DPAQX_S_W_PH
  { 597,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #597 = DPAQ_SA_L_W
  { 598,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #598 = DPAQ_S_W_PH
  { 599,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #599 = DPAU_H_QBL
  { 600,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #600 = DPAU_H_QBR
  { 601,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #601 = DPAX_W_PH
  { 602,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #602 = DPA_W_PH
  { 603,	2,	1,	27,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #603 = DPOP
  { 604,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #604 = DPSQX_SA_W_PH
  { 605,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #605 = DPSQX_S_W_PH
  { 606,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #606 = DPSQ_SA_L_W
  { 607,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #607 = DPSQ_S_W_PH
  { 608,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #608 = DPSUB_S_D
  { 609,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #609 = DPSUB_S_H
  { 610,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #610 = DPSUB_S_W
  { 611,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #611 = DPSUB_U_D
  { 612,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #612 = DPSUB_U_H
  { 613,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #613 = DPSUB_U_W
  { 614,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #614 = DPSU_H_QBL
  { 615,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #615 = DPSU_H_QBR
  { 616,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #616 = DPSX_W_PH
  { 617,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #617 = DPS_W_PH
  { 618,	3,	1,	28,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #618 = DROTR
  { 619,	3,	1,	29,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #619 = DROTR32
  { 620,	3,	1,	30,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #620 = DROTRV
  { 621,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #621 = DSBH
  { 622,	2,	0,	31,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #622 = DSDIV
  { 623,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #623 = DSHD
  { 624,	3,	1,	32,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #624 = DSLL
  { 625,	3,	1,	33,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #625 = DSLL32
  { 626,	2,	1,	32,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #626 = DSLL64_32
  { 627,	3,	1,	34,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #627 = DSLLV
  { 628,	3,	1,	35,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #628 = DSRA
  { 629,	3,	1,	36,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #629 = DSRA32
  { 630,	3,	1,	37,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #630 = DSRAV
  { 631,	3,	1,	38,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #631 = DSRL
  { 632,	3,	1,	39,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #632 = DSRL32
  { 633,	3,	1,	40,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #633 = DSRLV
  { 634,	3,	1,	41,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #634 = DSUB
  { 635,	3,	1,	42,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #635 = DSUBu
  { 636,	2,	0,	43,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #636 = DUDIV
  { 637,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #637 = DivRxRy16
  { 638,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #638 = DivuRxRy16
  { 639,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #639 = EHB
  { 640,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #640 = EHB_MM
  { 641,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #641 = EI
  { 642,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #642 = EI_MM
  { 643,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #643 = ERET
  { 644,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #644 = ERET_MM
  { 645,	4,	1,	20,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #645 = EXT
  { 646,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo112,0,nullptr },  // Inst #646 = EXTP
  { 647,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo112,0,nullptr },  // Inst #647 = EXTPDP
  { 648,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo113,0,nullptr },  // Inst #648 = EXTPDPV
  { 649,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo113,0,nullptr },  // Inst #649 = EXTPV
  { 650,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #650 = EXTRV_RS_W
  { 651,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #651 = EXTRV_R_W
  { 652,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #652 = EXTRV_S_H
  { 653,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #653 = EXTRV_W
  { 654,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #654 = EXTR_RS_W
  { 655,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #655 = EXTR_R_W
  { 656,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #656 = EXTR_S_H
  { 657,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #657 = EXTR_W
  { 658,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #658 = EXTS
  { 659,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #659 = EXTS32
  { 660,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #660 = EXT_MM
  { 661,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #661 = ExtractElementF64
  { 662,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #662 = ExtractElementF64_64
  { 663,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #663 = FABS_D
  { 664,	2,	1,	44,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #664 = FABS_D32
  { 665,	2,	1,	44,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #665 = FABS_D64
  { 666,	2,	1,	44,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #666 = FABS_MM
  { 667,	2,	1,	44,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #667 = FABS_S
  { 668,	2,	1,	44,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #668 = FABS_S_MM
  { 669,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #669 = FABS_W
  { 670,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #670 = FADD_D
  { 671,	3,	1,	45,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #671 = FADD_D32
  { 672,	3,	1,	45,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #672 = FADD_D64
  { 673,	3,	1,	45,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #673 = FADD_MM
  { 674,	3,	1,	46,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #674 = FADD_S
  { 675,	3,	1,	46,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #675 = FADD_S_MM
  { 676,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #676 = FADD_W
  { 677,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #677 = FCAF_D
  { 678,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #678 = FCAF_W
  { 679,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #679 = FCEQ_D
  { 680,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #680 = FCEQ_W
  { 681,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #681 = FCLASS_D
  { 682,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #682 = FCLASS_W
  { 683,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #683 = FCLE_D
  { 684,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #684 = FCLE_W
  { 685,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #685 = FCLT_D
  { 686,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #686 = FCLT_W
  { 687,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo121,0,nullptr },  // Inst #687 = FCMP_D32
  { 688,	3,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo121,0,nullptr },  // Inst #688 = FCMP_D32_MM
  { 689,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo122,0,nullptr },  // Inst #689 = FCMP_D64
  { 690,	3,	0,	16,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo123,0,nullptr },  // Inst #690 = FCMP_S32
  { 691,	3,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo123,0,nullptr },  // Inst #691 = FCMP_S32_MM
  { 692,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #692 = FCNE_D
  { 693,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #693 = FCNE_W
  { 694,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #694 = FCOR_D
  { 695,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #695 = FCOR_W
  { 696,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #696 = FCUEQ_D
  { 697,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #697 = FCUEQ_W
  { 698,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #698 = FCULE_D
  { 699,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #699 = FCULE_W
  { 700,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #700 = FCULT_D
  { 701,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #701 = FCULT_W
  { 702,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #702 = FCUNE_D
  { 703,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #703 = FCUNE_W
  { 704,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #704 = FCUN_D
  { 705,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #705 = FCUN_W
  { 706,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #706 = FDIV_D
  { 707,	3,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #707 = FDIV_D32
  { 708,	3,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #708 = FDIV_D64
  { 709,	3,	1,	47,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #709 = FDIV_MM
  { 710,	3,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #710 = FDIV_S
  { 711,	3,	1,	48,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #711 = FDIV_S_MM
  { 712,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #712 = FDIV_W
  { 713,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #713 = FEXDO_H
  { 714,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #714 = FEXDO_W
  { 715,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #715 = FEXP2_D
  { 716,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #716 = FEXP2_D_1_PSEUDO
  { 717,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #717 = FEXP2_W
  { 718,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #718 = FEXP2_W_1_PSEUDO
  { 719,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #719 = FEXUPL_D
  { 720,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #720 = FEXUPL_W
  { 721,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #721 = FEXUPR_D
  { 722,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #722 = FEXUPR_W
  { 723,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #723 = FFINT_S_D
  { 724,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #724 = FFINT_S_W
  { 725,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #725 = FFINT_U_D
  { 726,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #726 = FFINT_U_W
  { 727,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #727 = FFQL_D
  { 728,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #728 = FFQL_W
  { 729,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #729 = FFQR_D
  { 730,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #730 = FFQR_W
  { 731,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #731 = FILL_B
  { 732,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo129,0,nullptr },  // Inst #732 = FILL_D
  { 733,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #733 = FILL_FD_PSEUDO
  { 734,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #734 = FILL_FW_PSEUDO
  { 735,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #735 = FILL_H
  { 736,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #736 = FILL_W
  { 737,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #737 = FLOG2_D
  { 738,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #738 = FLOG2_W
  { 739,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #739 = FLOOR_L_D64
  { 740,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #740 = FLOOR_L_S
  { 741,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #741 = FLOOR_W_D32
  { 742,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #742 = FLOOR_W_D64
  { 743,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #743 = FLOOR_W_MM
  { 744,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #744 = FLOOR_W_S
  { 745,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #745 = FLOOR_W_S_MM
  { 746,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #746 = FMADD_D
  { 747,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #747 = FMADD_W
  { 748,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #748 = FMAX_A_D
  { 749,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #749 = FMAX_A_W
  { 750,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #750 = FMAX_D
  { 751,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #751 = FMAX_W
  { 752,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #752 = FMIN_A_D
  { 753,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #753 = FMIN_A_W
  { 754,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #754 = FMIN_D
  { 755,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #755 = FMIN_W
  { 756,	2,	1,	50,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #756 = FMOV_D32
  { 757,	2,	1,	50,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #757 = FMOV_D32_MM
  { 758,	2,	1,	50,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #758 = FMOV_D64
  { 759,	2,	1,	51,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #759 = FMOV_S
  { 760,	2,	1,	51,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #760 = FMOV_S_MM
  { 761,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #761 = FMSUB_D
  { 762,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #762 = FMSUB_W
  { 763,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #763 = FMUL_D
  { 764,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #764 = FMUL_D32
  { 765,	3,	1,	52,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #765 = FMUL_D64
  { 766,	3,	1,	52,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #766 = FMUL_MM
  { 767,	3,	1,	53,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #767 = FMUL_S
  { 768,	3,	1,	53,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #768 = FMUL_S_MM
  { 769,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #769 = FMUL_W
  { 770,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #770 = FNEG_D32
  { 771,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #771 = FNEG_D64
  { 772,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #772 = FNEG_MM
  { 773,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #773 = FNEG_S
  { 774,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #774 = FNEG_S_MM
  { 775,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #775 = FRCP_D
  { 776,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #776 = FRCP_W
  { 777,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #777 = FRINT_D
  { 778,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #778 = FRINT_W
  { 779,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #779 = FRSQRT_D
  { 780,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #780 = FRSQRT_W
  { 781,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #781 = FSAF_D
  { 782,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #782 = FSAF_W
  { 783,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #783 = FSEQ_D
  { 784,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #784 = FSEQ_W
  { 785,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #785 = FSLE_D
  { 786,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #786 = FSLE_W
  { 787,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #787 = FSLT_D
  { 788,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #788 = FSLT_W
  { 789,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #789 = FSNE_D
  { 790,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #790 = FSNE_W
  { 791,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #791 = FSOR_D
  { 792,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #792 = FSOR_W
  { 793,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #793 = FSQRT_D
  { 794,	2,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #794 = FSQRT_D32
  { 795,	2,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #795 = FSQRT_D64
  { 796,	2,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #796 = FSQRT_MM
  { 797,	2,	1,	56,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #797 = FSQRT_S
  { 798,	2,	1,	56,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #798 = FSQRT_S_MM
  { 799,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #799 = FSQRT_W
  { 800,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #800 = FSUB_D
  { 801,	3,	1,	57,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #801 = FSUB_D32
  { 802,	3,	1,	57,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #802 = FSUB_D64
  { 803,	3,	1,	57,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #803 = FSUB_MM
  { 804,	3,	1,	58,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #804 = FSUB_S
  { 805,	3,	1,	58,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #805 = FSUB_S_MM
  { 806,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #806 = FSUB_W
  { 807,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #807 = FSUEQ_D
  { 808,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #808 = FSUEQ_W
  { 809,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #809 = FSULE_D
  { 810,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #810 = FSULE_W
  { 811,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #811 = FSULT_D
  { 812,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #812 = FSULT_W
  { 813,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #813 = FSUNE_D
  { 814,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #814 = FSUNE_W
  { 815,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #815 = FSUN_D
  { 816,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #816 = FSUN_W
  { 817,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #817 = FTINT_S_D
  { 818,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #818 = FTINT_S_W
  { 819,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #819 = FTINT_U_D
  { 820,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #820 = FTINT_U_W
  { 821,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #821 = FTQ_H
  { 822,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #822 = FTQ_W
  { 823,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #823 = FTRUNC_S_D
  { 824,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #824 = FTRUNC_S_W
  { 825,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #825 = FTRUNC_U_D
  { 826,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #826 = FTRUNC_U_W
  { 827,	4,	2,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #827 = GotPrologue16
  { 828,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #828 = HADD_S_D
  { 829,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #829 = HADD_S_H
  { 830,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #830 = HADD_S_W
  { 831,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #831 = HADD_U_D
  { 832,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #832 = HADD_U_H
  { 833,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #833 = HADD_U_W
  { 834,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #834 = HSUB_S_D
  { 835,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #835 = HSUB_S_H
  { 836,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #836 = HSUB_S_W
  { 837,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #837 = HSUB_U_D
  { 838,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #838 = HSUB_U_H
  { 839,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #839 = HSUB_U_W
  { 840,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #840 = ILVEV_B
  { 841,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #841 = ILVEV_D
  { 842,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #842 = ILVEV_H
  { 843,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #843 = ILVEV_W
  { 844,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #844 = ILVL_B
  { 845,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #845 = ILVL_D
  { 846,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #846 = ILVL_H
  { 847,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #847 = ILVL_W
  { 848,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #848 = ILVOD_B
  { 849,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #849 = ILVOD_D
  { 850,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #850 = ILVOD_H
  { 851,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #851 = ILVOD_W
  { 852,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #852 = ILVR_B
  { 853,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #853 = ILVR_D
  { 854,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #854 = ILVR_H
  { 855,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #855 = ILVR_W
  { 856,	5,	1,	21,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #856 = INS
  { 857,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #857 = INSERT_B
  { 858,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #858 = INSERT_B_VIDX_PSEUDO
  { 859,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #859 = INSERT_D
  { 860,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #860 = INSERT_D_VIDX_PSEUDO
  { 861,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo140,0,nullptr },  // Inst #861 = INSERT_FD_PSEUDO
  { 862,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #862 = INSERT_FD_VIDX_PSEUDO
  { 863,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #863 = INSERT_FW_PSEUDO
  { 864,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #864 = INSERT_FW_VIDX_PSEUDO
  { 865,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #865 = INSERT_H
  { 866,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #866 = INSERT_H_VIDX_PSEUDO
  { 867,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #867 = INSERT_W
  { 868,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #868 = INSERT_W_VIDX_PSEUDO
  { 869,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo148,0,nullptr },  // Inst #869 = INSV
  { 870,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #870 = INSVE_B
  { 871,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #871 = INSVE_D
  { 872,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #872 = INSVE_H
  { 873,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #873 = INSVE_W
  { 874,	5,	1,	21,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #874 = INS_MM
  { 875,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #875 = J
  { 876,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #876 = JAL
  { 877,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #877 = JALR
  { 878,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66,0,nullptr },  // Inst #878 = JALR16_MM
  { 879,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo98,0,nullptr },  // Inst #879 = JALR64
  { 880,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo153,0,nullptr },  // Inst #880 = JALR64Pseudo
  { 881,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66,0,nullptr },  // Inst #881 = JALRPseudo
  { 882,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo66,0,nullptr },  // Inst #882 = JALRS16_MM
  { 883,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #883 = JALRS_MM
  { 884,	2,	1,	0,	4,	0|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #884 = JALR_HB
  { 885,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #885 = JALR_MM
  { 886,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #886 = JALS_MM
  { 887,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #887 = JALX
  { 888,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #888 = JALX_MM
  { 889,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #889 = JAL_MM
  { 890,	2,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo15,0,nullptr },  // Inst #890 = JIALC
  { 891,	2,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo15,0,nullptr },  // Inst #891 = JIC
  { 892,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #892 = JR
  { 893,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #893 = JR16_MM
  { 894,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #894 = JR64
  { 895,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #895 = JRADDIUSP
  { 896,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #896 = JRC16_MM
  { 897,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #897 = JR_HB
  { 898,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #898 = JR_HB_R6
  { 899,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #899 = JR_MM
  { 900,	1,	0,	7,	4,	0|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #900 = J_MM
  { 901,	1,	0,	6,	6,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #901 = Jal16
  { 902,	1,	0,	6,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #902 = JalB16
  { 903,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #903 = JalOneReg
  { 904,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #904 = JalTwoReg
  { 905,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #905 = JrRa16
  { 906,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #906 = JrcRa16
  { 907,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #907 = JrcRx16
  { 908,	1,	0,	7,	2,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo154,0,nullptr },  // Inst #908 = JumpLinkReg16
  { 909,	3,	1,	59,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #909 = LB
  { 910,	3,	1,	59,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #910 = LB64
  { 911,	3,	1,	60,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #911 = LBU16_MM
  { 912,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #912 = LBUX
  { 913,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #913 = LB_MM
  { 914,	3,	1,	60,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #914 = LBu
  { 915,	3,	1,	60,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #915 = LBu64
  { 916,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #916 = LBu_MM
  { 917,	3,	1,	61,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #917 = LD
  { 918,	3,	1,	62,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #918 = LDC1
  { 919,	3,	1,	62,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #919 = LDC164
  { 920,	3,	1,	62,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #920 = LDC1_MM
  { 921,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #921 = LDC2
  { 922,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #922 = LDC2_R6
  { 923,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #923 = LDC3
  { 924,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #924 = LDI_B
  { 925,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #925 = LDI_D
  { 926,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #926 = LDI_H
  { 927,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #927 = LDI_W
  { 928,	4,	1,	63,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #928 = LDL
  { 929,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #929 = LDPC
  { 930,	4,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #930 = LDR
  { 931,	3,	1,	65,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #931 = LDXC1
  { 932,	3,	1,	65,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #932 = LDXC164
  { 933,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #933 = LD_B
  { 934,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #934 = LD_D
  { 935,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #935 = LD_H
  { 936,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #936 = LD_W
  { 937,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #937 = LEA_ADDiu
  { 938,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #938 = LEA_ADDiu64
  { 939,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #939 = LEA_ADDiu_MM
  { 940,	3,	1,	66,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #940 = LH
  { 941,	3,	1,	66,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #941 = LH64
  { 942,	3,	1,	67,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #942 = LHU16_MM
  { 943,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #943 = LHX
  { 944,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #944 = LH_MM
  { 945,	3,	1,	67,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #945 = LHu
  { 946,	3,	1,	67,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #946 = LHu64
  { 947,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #947 = LHu_MM
  { 948,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #948 = LI16_MM
  { 949,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #949 = LL
  { 950,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #950 = LLD
  { 951,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #951 = LLD_R6
  { 952,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #952 = LL_MM
  { 953,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #953 = LL_R6
  { 954,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #954 = LOAD_ACC128
  { 955,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #955 = LOAD_ACC64
  { 956,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #956 = LOAD_ACC64DSP
  { 957,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #957 = LOAD_CCOND_DSP
  { 958,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #958 = LONG_BRANCH_ADDiu
  { 959,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #959 = LONG_BRANCH_DADDiu
  { 960,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #960 = LONG_BRANCH_LUi
  { 961,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #961 = LSA
  { 962,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #962 = LSA_R6
  { 963,	3,	1,	68,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #963 = LUXC1
  { 964,	3,	1,	68,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #964 = LUXC164
  { 965,	3,	1,	68,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #965 = LUXC1_MM
  { 966,	2,	1,	69,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #966 = LUi
  { 967,	2,	1,	69,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #967 = LUi64
  { 968,	2,	1,	69,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #968 = LUi_MM
  { 969,	3,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #969 = LW
  { 970,	3,	1,	70,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #970 = LW16_MM
  { 971,	3,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #971 = LW64
  { 972,	3,	1,	71,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #972 = LWC1
  { 973,	3,	1,	71,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #973 = LWC1_MM
  { 974,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #974 = LWC2
  { 975,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #975 = LWC2_R6
  { 976,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #976 = LWC3
  { 977,	3,	1,	70,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #977 = LWGP_MM
  { 978,	4,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #978 = LWL
  { 979,	4,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #979 = LWL64
  { 980,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #980 = LWL_MM
  { 981,	3,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #981 = LWM16_MM
  { 982,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #982 = LWM32_MM
  { 983,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #983 = LWM_MM
  { 984,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #984 = LWPC
  { 985,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #985 = LWP_MM
  { 986,	4,	1,	73,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #986 = LWR
  { 987,	4,	1,	73,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #987 = LWR64
  { 988,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #988 = LWR_MM
  { 989,	3,	1,	70,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #989 = LWSP_MM
  { 990,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #990 = LWUPC
  { 991,	3,	1,	74,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #991 = LWU_MM
  { 992,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #992 = LWX
  { 993,	3,	1,	75,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #993 = LWXC1
  { 994,	3,	1,	75,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #994 = LWXC1_MM
  { 995,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #995 = LWXS_MM
  { 996,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #996 = LW_MM
  { 997,	3,	1,	74,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #997 = LWu
  { 998,	4,	1,	59,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #998 = LbRxRyOffMemX16
  { 999,	4,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #999 = LbuRxRyOffMemX16
  { 1000,	4,	1,	66,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1000 = LhRxRyOffMemX16
  { 1001,	4,	1,	67,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1001 = LhuRxRyOffMemX16
  { 1002,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #1002 = LiRxImm16
  { 1003,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #1003 = LiRxImmAlignX16
  { 1004,	2,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #1004 = LiRxImmX16
  { 1005,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1005 = LoadAddrImm32
  { 1006,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1006 = LoadAddrReg32
  { 1007,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1007 = LoadImm32
  { 1008,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1008 = LoadImm64
  { 1009,	3,	1,	3,	2,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1009 = LwConstant32
  { 1010,	3,	1,	70,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1010 = LwRxPcTcp16
  { 1011,	3,	1,	70,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1011 = LwRxPcTcpX16
  { 1012,	4,	1,	70,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1012 = LwRxRyOffMemX16
  { 1013,	3,	1,	70,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo192,0,nullptr },  // Inst #1013 = LwRxSpImmX16
  { 1014,	2,	0,	76,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1014 = MADD
  { 1015,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1015 = MADDF_D
  { 1016,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1016 = MADDF_S
  { 1017,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1017 = MADDR_Q_H
  { 1018,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1018 = MADDR_Q_W
  { 1019,	2,	0,	77,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1019 = MADDU
  { 1020,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1020 = MADDU_DSP
  { 1021,	2,	0,	77,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1021 = MADDU_MM
  { 1022,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1022 = MADDV_B
  { 1023,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #1023 = MADDV_D
  { 1024,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1024 = MADDV_H
  { 1025,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1025 = MADDV_W
  { 1026,	4,	1,	78,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1026 = MADD_D32
  { 1027,	4,	1,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1027 = MADD_D32_MM
  { 1028,	4,	1,	78,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1028 = MADD_D64
  { 1029,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1029 = MADD_DSP
  { 1030,	2,	0,	76,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1030 = MADD_MM
  { 1031,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1031 = MADD_Q_H
  { 1032,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1032 = MADD_Q_W
  { 1033,	4,	1,	79,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1033 = MADD_S
  { 1034,	4,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1034 = MADD_S_MM
  { 1035,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1035 = MAQ_SA_W_PHL
  { 1036,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1036 = MAQ_SA_W_PHR
  { 1037,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1037 = MAQ_S_W_PHL
  { 1038,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1038 = MAQ_S_W_PHR
  { 1039,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1039 = MAXA_D
  { 1040,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1040 = MAXA_S
  { 1041,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1041 = MAXI_S_B
  { 1042,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1042 = MAXI_S_D
  { 1043,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1043 = MAXI_S_H
  { 1044,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1044 = MAXI_S_W
  { 1045,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1045 = MAXI_U_B
  { 1046,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1046 = MAXI_U_D
  { 1047,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1047 = MAXI_U_H
  { 1048,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1048 = MAXI_U_W
  { 1049,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1049 = MAX_A_B
  { 1050,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1050 = MAX_A_D
  { 1051,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1051 = MAX_A_H
  { 1052,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1052 = MAX_A_W
  { 1053,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1053 = MAX_D
  { 1054,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1054 = MAX_S
  { 1055,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1055 = MAX_S_B
  { 1056,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1056 = MAX_S_D
  { 1057,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1057 = MAX_S_H
  { 1058,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1058 = MAX_S_W
  { 1059,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1059 = MAX_U_B
  { 1060,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1060 = MAX_U_D
  { 1061,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1061 = MAX_U_H
  { 1062,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1062 = MAX_U_W
  { 1063,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1063 = MFC0
  { 1064,	2,	1,	80,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1064 = MFC1
  { 1065,	2,	1,	80,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1065 = MFC1_MM
  { 1066,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1066 = MFC2
  { 1067,	2,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1067 = MFHC1_D32
  { 1068,	2,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1068 = MFHC1_D64
  { 1069,	2,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1069 = MFHC1_MM
  { 1070,	1,	1,	82,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1070 = MFHI
  { 1071,	1,	1,	82,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1071 = MFHI16_MM
  { 1072,	1,	1,	82,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo153,0,nullptr },  // Inst #1072 = MFHI64
  { 1073,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1073 = MFHI_DSP
  { 1074,	1,	1,	82,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1074 = MFHI_MM
  { 1075,	1,	1,	82,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1075 = MFLO
  { 1076,	1,	1,	82,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1076 = MFLO16_MM
  { 1077,	1,	1,	82,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo153,0,nullptr },  // Inst #1077 = MFLO64
  { 1078,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1078 = MFLO_DSP
  { 1079,	1,	1,	82,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1079 = MFLO_MM
  { 1080,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1080 = MINA_D
  { 1081,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1081 = MINA_S
  { 1082,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1082 = MINI_S_B
  { 1083,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1083 = MINI_S_D
  { 1084,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1084 = MINI_S_H
  { 1085,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1085 = MINI_S_W
  { 1086,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1086 = MINI_U_B
  { 1087,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1087 = MINI_U_D
  { 1088,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1088 = MINI_U_H
  { 1089,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1089 = MINI_U_W
  { 1090,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1090 = MIN_A_B
  { 1091,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1091 = MIN_A_D
  { 1092,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1092 = MIN_A_H
  { 1093,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1093 = MIN_A_W
  { 1094,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1094 = MIN_D
  { 1095,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1095 = MIN_S
  { 1096,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1096 = MIN_S_B
  { 1097,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1097 = MIN_S_D
  { 1098,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1098 = MIN_S_H
  { 1099,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1099 = MIN_S_W
  { 1100,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1100 = MIN_U_B
  { 1101,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1101 = MIN_U_D
  { 1102,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1102 = MIN_U_H
  { 1103,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1103 = MIN_U_W
  { 1104,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo13,0,nullptr },  // Inst #1104 = MIPSeh_return32
  { 1105,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo98,0,nullptr },  // Inst #1105 = MIPSeh_return64
  { 1106,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1106 = MOD
  { 1107,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1107 = MODSUB
  { 1108,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1108 = MODU
  { 1109,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1109 = MOD_S_B
  { 1110,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1110 = MOD_S_D
  { 1111,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1111 = MOD_S_H
  { 1112,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1112 = MOD_S_W
  { 1113,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1113 = MOD_U_B
  { 1114,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1114 = MOD_U_D
  { 1115,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1115 = MOD_U_H
  { 1116,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1116 = MOD_U_W
  { 1117,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1117 = MOVE16_MM
  { 1118,	4,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1118 = MOVEP_MM
  { 1119,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1119 = MOVE_V
  { 1120,	4,	1,	83,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1120 = MOVF_D32
  { 1121,	4,	1,	83,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1121 = MOVF_D32_MM
  { 1122,	4,	1,	83,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1122 = MOVF_D64
  { 1123,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1123 = MOVF_I
  { 1124,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1124 = MOVF_I64
  { 1125,	4,	1,	84,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1125 = MOVF_I_MM
  { 1126,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1126 = MOVF_S
  { 1127,	4,	1,	85,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1127 = MOVF_S_MM
  { 1128,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1128 = MOVN_I64_D64
  { 1129,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1129 = MOVN_I64_I
  { 1130,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1130 = MOVN_I64_I64
  { 1131,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1131 = MOVN_I64_S
  { 1132,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1132 = MOVN_I_D32
  { 1133,	4,	1,	86,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1133 = MOVN_I_D32_MM
  { 1134,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1134 = MOVN_I_D64
  { 1135,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1135 = MOVN_I_I
  { 1136,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1136 = MOVN_I_I64
  { 1137,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1137 = MOVN_I_MM
  { 1138,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1138 = MOVN_I_S
  { 1139,	4,	1,	88,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1139 = MOVN_I_S_MM
  { 1140,	4,	1,	89,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1140 = MOVT_D32
  { 1141,	4,	1,	89,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1141 = MOVT_D32_MM
  { 1142,	4,	1,	89,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1142 = MOVT_D64
  { 1143,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1143 = MOVT_I
  { 1144,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1144 = MOVT_I64
  { 1145,	4,	1,	90,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1145 = MOVT_I_MM
  { 1146,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1146 = MOVT_S
  { 1147,	4,	1,	91,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1147 = MOVT_S_MM
  { 1148,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1148 = MOVZ_I64_D64
  { 1149,	4,	1,	93,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1149 = MOVZ_I64_I
  { 1150,	4,	1,	93,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1150 = MOVZ_I64_I64
  { 1151,	4,	1,	94,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1151 = MOVZ_I64_S
  { 1152,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1152 = MOVZ_I_D32
  { 1153,	4,	1,	92,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1153 = MOVZ_I_D32_MM
  { 1154,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1154 = MOVZ_I_D64
  { 1155,	4,	1,	93,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1155 = MOVZ_I_I
  { 1156,	4,	1,	93,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1156 = MOVZ_I_I64
  { 1157,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1157 = MOVZ_I_MM
  { 1158,	4,	1,	94,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1158 = MOVZ_I_S
  { 1159,	4,	1,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1159 = MOVZ_I_S_MM
  { 1160,	2,	0,	95,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1160 = MSUB
  { 1161,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1161 = MSUBF_D
  { 1162,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1162 = MSUBF_S
  { 1163,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1163 = MSUBR_Q_H
  { 1164,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1164 = MSUBR_Q_W
  { 1165,	2,	0,	96,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1165 = MSUBU
  { 1166,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1166 = MSUBU_DSP
  { 1167,	2,	0,	96,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1167 = MSUBU_MM
  { 1168,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1168 = MSUBV_B
  { 1169,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #1169 = MSUBV_D
  { 1170,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1170 = MSUBV_H
  { 1171,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1171 = MSUBV_W
  { 1172,	4,	1,	97,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1172 = MSUB_D32
  { 1173,	4,	1,	97,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1173 = MSUB_D32_MM
  { 1174,	4,	1,	97,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1174 = MSUB_D64
  { 1175,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1175 = MSUB_DSP
  { 1176,	2,	0,	95,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1176 = MSUB_MM
  { 1177,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1177 = MSUB_Q_H
  { 1178,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1178 = MSUB_Q_W
  { 1179,	4,	1,	98,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1179 = MSUB_S
  { 1180,	4,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1180 = MSUB_S_MM
  { 1181,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1181 = MTC0
  { 1182,	2,	1,	99,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1182 = MTC1
  { 1183,	2,	1,	99,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1183 = MTC1_MM
  { 1184,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1184 = MTC2
  { 1185,	3,	1,	100,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1185 = MTHC1_D32
  { 1186,	3,	1,	100,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1186 = MTHC1_D64
  { 1187,	3,	1,	100,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1187 = MTHC1_MM
  { 1188,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66,0,nullptr },  // Inst #1188 = MTHI
  { 1189,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo153,0,nullptr },  // Inst #1189 = MTHI64
  { 1190,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1190 = MTHI_DSP
  { 1191,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66,0,nullptr },  // Inst #1191 = MTHI_MM
  { 1192,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo222,0,nullptr },  // Inst #1192 = MTHLIP
  { 1193,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66,0,nullptr },  // Inst #1193 = MTLO
  { 1194,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo153,0,nullptr },  // Inst #1194 = MTLO64
  { 1195,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1195 = MTLO_DSP
  { 1196,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66,0,nullptr },  // Inst #1196 = MTLO_MM
  { 1197,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo153,0,nullptr },  // Inst #1197 = MTM0
  { 1198,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo153,0,nullptr },  // Inst #1198 = MTM1
  { 1199,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo153,0,nullptr },  // Inst #1199 = MTM2
  { 1200,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo153,0,nullptr },  // Inst #1200 = MTP0
  { 1201,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo153,0,nullptr },  // Inst #1201 = MTP1
  { 1202,	1,	0,	101,	4,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo153,0,nullptr },  // Inst #1202 = MTP2
  { 1203,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1203 = MUH
  { 1204,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1204 = MUHU
  { 1205,	3,	1,	102,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo14,0,nullptr },  // Inst #1205 = MUL
  { 1206,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo82,0,nullptr },  // Inst #1206 = MULEQ_S_W_PHL
  { 1207,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo82,0,nullptr },  // Inst #1207 = MULEQ_S_W_PHR
  { 1208,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1208 = MULEU_S_PH_QBL
  { 1209,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1209 = MULEU_S_PH_QBR
  { 1210,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1210 = MULQ_RS_PH
  { 1211,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1211 = MULQ_RS_W
  { 1212,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1212 = MULQ_S_PH
  { 1213,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1213 = MULQ_S_W
  { 1214,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1214 = MULR_Q_H
  { 1215,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1215 = MULR_Q_W
  { 1216,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1216 = MULSAQ_S_W_PH
  { 1217,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1217 = MULSA_W_PH
  { 1218,	2,	0,	103,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1218 = MULT
  { 1219,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1219 = MULTU_DSP
  { 1220,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1220 = MULT_DSP
  { 1221,	2,	0,	103,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1221 = MULT_MM
  { 1222,	2,	0,	104,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1222 = MULTu
  { 1223,	2,	0,	104,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1223 = MULTu_MM
  { 1224,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1224 = MULU
  { 1225,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1225 = MULV_B
  { 1226,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1226 = MULV_D
  { 1227,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1227 = MULV_H
  { 1228,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1228 = MULV_W
  { 1229,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1229 = MUL_MM
  { 1230,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1230 = MUL_PH
  { 1231,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1231 = MUL_Q_H
  { 1232,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1232 = MUL_Q_W
  { 1233,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1233 = MUL_R6
  { 1234,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1234 = MUL_S_PH
  { 1235,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo154,0,nullptr },  // Inst #1235 = Mfhi16
  { 1236,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo154,0,nullptr },  // Inst #1236 = Mflo16
  { 1237,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1237 = Move32R16
  { 1238,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1238 = MoveR3216
  { 1239,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #1239 = MultRxRy16
  { 1240,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42,0,nullptr },  // Inst #1240 = MultRxRyRz16
  { 1241,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #1241 = MultuRxRy16
  { 1242,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42,0,nullptr },  // Inst #1242 = MultuRxRyRz16
  { 1243,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1243 = NLOC_B
  { 1244,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1244 = NLOC_D
  { 1245,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1245 = NLOC_H
  { 1246,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #1246 = NLOC_W
  { 1247,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1247 = NLZC_B
  { 1248,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1248 = NLZC_D
  { 1249,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1249 = NLZC_H
  { 1250,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #1250 = NLZC_W
  { 1251,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1251 = NMADD_D32
  { 1252,	4,	1,	105,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1252 = NMADD_D32_MM
  { 1253,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1253 = NMADD_D64
  { 1254,	4,	1,	106,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1254 = NMADD_S
  { 1255,	4,	1,	106,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1255 = NMADD_S_MM
  { 1256,	4,	1,	107,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1256 = NMSUB_D32
  { 1257,	4,	1,	107,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1257 = NMSUB_D32_MM
  { 1258,	4,	1,	107,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1258 = NMSUB_D64
  { 1259,	4,	1,	108,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1259 = NMSUB_S
  { 1260,	4,	1,	108,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1260 = NMSUB_S_MM
  { 1261,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1261 = NOP
  { 1262,	3,	1,	109,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1262 = NOR
  { 1263,	3,	1,	109,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1263 = NOR64
  { 1264,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1264 = NORI_B
  { 1265,	3,	1,	109,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1265 = NOR_MM
  { 1266,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1266 = NOR_V
  { 1267,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1267 = NOR_V_D_PSEUDO
  { 1268,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1268 = NOR_V_H_PSEUDO
  { 1269,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1269 = NOR_V_W_PSEUDO
  { 1270,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1270 = NOT16_MM
  { 1271,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #1271 = NegRxRy16
  { 1272,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #1272 = NotRxRy16
  { 1273,	3,	1,	110,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1273 = OR
  { 1274,	3,	1,	110,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1274 = OR16_MM
  { 1275,	3,	1,	110,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1275 = OR64
  { 1276,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1276 = ORI_B
  { 1277,	3,	1,	110,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1277 = OR_MM
  { 1278,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1278 = OR_V
  { 1279,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1279 = OR_V_D_PSEUDO
  { 1280,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1280 = OR_V_H_PSEUDO
  { 1281,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1281 = OR_V_W_PSEUDO
  { 1282,	3,	1,	111,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1282 = ORi
  { 1283,	3,	1,	110,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1283 = ORi64
  { 1284,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1284 = ORi_MM
  { 1285,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1285 = OrRxRxRy16
  { 1286,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1286 = PACKRL_PH
  { 1287,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1287 = PAUSE
  { 1288,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1288 = PAUSE_MM
  { 1289,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1289 = PCKEV_B
  { 1290,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1290 = PCKEV_D
  { 1291,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1291 = PCKEV_H
  { 1292,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1292 = PCKEV_W
  { 1293,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1293 = PCKOD_B
  { 1294,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1294 = PCKOD_D
  { 1295,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1295 = PCKOD_H
  { 1296,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1296 = PCKOD_W
  { 1297,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1297 = PCNT_B
  { 1298,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1298 = PCNT_D
  { 1299,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1299 = PCNT_H
  { 1300,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #1300 = PCNT_W
  { 1301,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo19,0,nullptr },  // Inst #1301 = PICK_PH
  { 1302,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo19,0,nullptr },  // Inst #1302 = PICK_QB
  { 1303,	2,	1,	27,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1303 = POP
  { 1304,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1304 = PRECEQU_PH_QBL
  { 1305,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1305 = PRECEQU_PH_QBLA
  { 1306,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1306 = PRECEQU_PH_QBR
  { 1307,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1307 = PRECEQU_PH_QBRA
  { 1308,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1308 = PRECEQ_W_PHL
  { 1309,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1309 = PRECEQ_W_PHR
  { 1310,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1310 = PRECEU_PH_QBL
  { 1311,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1311 = PRECEU_PH_QBLA
  { 1312,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1312 = PRECEU_PH_QBR
  { 1313,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1313 = PRECEU_PH_QBRA
  { 1314,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo19,0,nullptr },  // Inst #1314 = PRECRQU_S_QB_PH
  { 1315,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1315 = PRECRQ_PH_W
  { 1316,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1316 = PRECRQ_QB_PH
  { 1317,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo230,0,nullptr },  // Inst #1317 = PRECRQ_RS_PH_W
  { 1318,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1318 = PRECR_QB_PH
  { 1319,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1319 = PRECR_SRA_PH_W
  { 1320,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1320 = PRECR_SRA_R_PH_W
  { 1321,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1321 = PREF
  { 1322,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #1322 = PREF_MM
  { 1323,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1323 = PREF_R6
  { 1324,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #1324 = PREPEND
  { 1325,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1325 = PseudoCMPU_EQ_QB
  { 1326,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1326 = PseudoCMPU_LE_QB
  { 1327,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1327 = PseudoCMPU_LT_QB
  { 1328,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1328 = PseudoCMP_EQ_PH
  { 1329,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1329 = PseudoCMP_LE_PH
  { 1330,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1330 = PseudoCMP_LT_PH
  { 1331,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1331 = PseudoCVT_D32_W
  { 1332,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #1332 = PseudoCVT_D64_L
  { 1333,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1333 = PseudoCVT_D64_W
  { 1334,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #1334 = PseudoCVT_S_L
  { 1335,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1335 = PseudoCVT_S_W
  { 1336,	3,	1,	25,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1336 = PseudoDMULT
  { 1337,	3,	1,	26,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1337 = PseudoDMULTu
  { 1338,	3,	1,	31,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1338 = PseudoDSDIV
  { 1339,	3,	1,	43,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1339 = PseudoDUDIV
  { 1340,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1340 = PseudoIndirectBranch
  { 1341,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1341 = PseudoIndirectBranch64
  { 1342,	4,	1,	76,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1342 = PseudoMADD
  { 1343,	4,	1,	77,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1343 = PseudoMADDU
  { 1344,	2,	1,	82,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1344 = PseudoMFHI
  { 1345,	2,	1,	82,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1345 = PseudoMFHI64
  { 1346,	2,	1,	82,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1346 = PseudoMFLO
  { 1347,	2,	1,	82,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1347 = PseudoMFLO64
  { 1348,	4,	1,	95,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1348 = PseudoMSUB
  { 1349,	4,	1,	96,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1349 = PseudoMSUBU
  { 1350,	3,	1,	101,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1350 = PseudoMTLOHI
  { 1351,	3,	1,	101,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1351 = PseudoMTLOHI64
  { 1352,	3,	1,	101,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1352 = PseudoMTLOHI_DSP
  { 1353,	3,	1,	103,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1353 = PseudoMULT
  { 1354,	3,	1,	104,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1354 = PseudoMULTu
  { 1355,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1355 = PseudoPICK_PH
  { 1356,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1356 = PseudoPICK_QB
  { 1357,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1357 = PseudoReturn
  { 1358,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1358 = PseudoReturn64
  { 1359,	3,	1,	112,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1359 = PseudoSDIV
  { 1360,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1360 = PseudoSELECTFP_F_D32
  { 1361,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1361 = PseudoSELECTFP_F_D64
  { 1362,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1362 = PseudoSELECTFP_F_I
  { 1363,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1363 = PseudoSELECTFP_F_I64
  { 1364,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1364 = PseudoSELECTFP_F_S
  { 1365,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1365 = PseudoSELECTFP_T_D32
  { 1366,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1366 = PseudoSELECTFP_T_D64
  { 1367,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1367 = PseudoSELECTFP_T_I
  { 1368,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1368 = PseudoSELECTFP_T_I64
  { 1369,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1369 = PseudoSELECTFP_T_S
  { 1370,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1370 = PseudoSELECT_D32
  { 1371,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1371 = PseudoSELECT_D64
  { 1372,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1372 = PseudoSELECT_I
  { 1373,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1373 = PseudoSELECT_I64
  { 1374,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1374 = PseudoSELECT_S
  { 1375,	3,	1,	113,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1375 = PseudoUDIV
  { 1376,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1376 = RADDU_W_QB
  { 1377,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1377 = RDDSP
  { 1378,	2,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1378 = RDHWR
  { 1379,	2,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1379 = RDHWR64
  { 1380,	2,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1380 = RDHWR_MM
  { 1381,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1381 = REPLV_PH
  { 1382,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1382 = REPLV_QB
  { 1383,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1383 = REPL_PH
  { 1384,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1384 = REPL_QB
  { 1385,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1385 = RINT_D
  { 1386,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1386 = RINT_S
  { 1387,	3,	1,	115,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1387 = ROTR
  { 1388,	3,	1,	116,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1388 = ROTRV
  { 1389,	3,	1,	116,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1389 = ROTRV_MM
  { 1390,	3,	1,	115,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1390 = ROTR_MM
  { 1391,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1391 = ROUND_L_D64
  { 1392,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #1392 = ROUND_L_S
  { 1393,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1393 = ROUND_W_D32
  { 1394,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #1394 = ROUND_W_D64
  { 1395,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1395 = ROUND_W_MM
  { 1396,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1396 = ROUND_W_S
  { 1397,	2,	1,	117,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1397 = ROUND_W_S_MM
  { 1398,	0,	0,	118,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1398 = Restore16
  { 1399,	0,	0,	118,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1399 = RestoreX16
  { 1400,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1400 = RetRA
  { 1401,	0,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1401 = RetRA16
  { 1402,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1402 = SAT_S_B
  { 1403,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1403 = SAT_S_D
  { 1404,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1404 = SAT_S_H
  { 1405,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1405 = SAT_S_W
  { 1406,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1406 = SAT_U_B
  { 1407,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1407 = SAT_U_D
  { 1408,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1408 = SAT_U_H
  { 1409,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1409 = SAT_U_W
  { 1410,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1410 = SB
  { 1411,	3,	0,	119,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1411 = SB16_MM
  { 1412,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1412 = SB64
  { 1413,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1413 = SB_MM
  { 1414,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1414 = SC
  { 1415,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1415 = SCD
  { 1416,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1416 = SCD_R6
  { 1417,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1417 = SC_MM
  { 1418,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1418 = SC_R6
  { 1419,	3,	0,	120,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1419 = SD
  { 1420,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1420 = SDBBP
  { 1421,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1421 = SDBBP16_MM
  { 1422,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1422 = SDBBP_MM
  { 1423,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1423 = SDBBP_R6
  { 1424,	3,	0,	121,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1424 = SDC1
  { 1425,	3,	0,	121,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #1425 = SDC164
  { 1426,	3,	0,	121,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1426 = SDC1_MM
  { 1427,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1427 = SDC2
  { 1428,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1428 = SDC2_R6
  { 1429,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1429 = SDC3
  { 1430,	2,	0,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1430 = SDIV
  { 1431,	2,	0,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1431 = SDIV_MM
  { 1432,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1432 = SDL
  { 1433,	3,	0,	123,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1433 = SDR
  { 1434,	3,	0,	124,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1434 = SDXC1
  { 1435,	3,	0,	124,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1435 = SDXC164
  { 1436,	2,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1436 = SEB
  { 1437,	2,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1437 = SEB64
  { 1438,	2,	1,	125,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1438 = SEB_MM
  { 1439,	2,	1,	126,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1439 = SEH
  { 1440,	2,	1,	126,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1440 = SEH64
  { 1441,	2,	1,	126,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1441 = SEH_MM
  { 1442,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1442 = SELEQZ
  { 1443,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1443 = SELEQZ64
  { 1444,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1444 = SELEQZ_D
  { 1445,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1445 = SELEQZ_S
  { 1446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1446 = SELNEZ
  { 1447,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1447 = SELNEZ64
  { 1448,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1448 = SELNEZ_D
  { 1449,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1449 = SELNEZ_S
  { 1450,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1450 = SEL_D
  { 1451,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1451 = SEL_S
  { 1452,	3,	1,	127,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1452 = SEQ
  { 1453,	3,	1,	128,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1453 = SEQi
  { 1454,	3,	0,	129,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1454 = SH
  { 1455,	3,	0,	129,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1455 = SH16_MM
  { 1456,	3,	0,	129,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1456 = SH64
  { 1457,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1457 = SHF_B
  { 1458,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1458 = SHF_H
  { 1459,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1459 = SHF_W
  { 1460,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1460 = SHILO
  { 1461,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1461 = SHILOV
  { 1462,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo257,0,nullptr },  // Inst #1462 = SHLLV_PH
  { 1463,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo257,0,nullptr },  // Inst #1463 = SHLLV_QB
  { 1464,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo257,0,nullptr },  // Inst #1464 = SHLLV_S_PH
  { 1465,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo14,0,nullptr },  // Inst #1465 = SHLLV_S_W
  { 1466,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo258,0,nullptr },  // Inst #1466 = SHLL_PH
  { 1467,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo258,0,nullptr },  // Inst #1467 = SHLL_QB
  { 1468,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo258,0,nullptr },  // Inst #1468 = SHLL_S_PH
  { 1469,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo29,0,nullptr },  // Inst #1469 = SHLL_S_W
  { 1470,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1470 = SHRAV_PH
  { 1471,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1471 = SHRAV_QB
  { 1472,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1472 = SHRAV_R_PH
  { 1473,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1473 = SHRAV_R_QB
  { 1474,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1474 = SHRAV_R_W
  { 1475,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1475 = SHRA_PH
  { 1476,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1476 = SHRA_QB
  { 1477,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1477 = SHRA_R_PH
  { 1478,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1478 = SHRA_R_QB
  { 1479,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1479 = SHRA_R_W
  { 1480,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1480 = SHRLV_PH
  { 1481,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1481 = SHRLV_QB
  { 1482,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1482 = SHRL_PH
  { 1483,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1483 = SHRL_QB
  { 1484,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1484 = SH_MM
  { 1485,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #1485 = SLDI_B
  { 1486,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #1486 = SLDI_D
  { 1487,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #1487 = SLDI_H
  { 1488,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1488 = SLDI_W
  { 1489,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo259,0,nullptr },  // Inst #1489 = SLD_B
  { 1490,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1490 = SLD_D
  { 1491,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1491 = SLD_H
  { 1492,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1492 = SLD_W
  { 1493,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1493 = SLL
  { 1494,	3,	1,	130,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1494 = SLL16_MM
  { 1495,	2,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1495 = SLL64_32
  { 1496,	2,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1496 = SLL64_64
  { 1497,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1497 = SLLI_B
  { 1498,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1498 = SLLI_D
  { 1499,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1499 = SLLI_H
  { 1500,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1500 = SLLI_W
  { 1501,	3,	1,	131,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1501 = SLLV
  { 1502,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1502 = SLLV_MM
  { 1503,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1503 = SLL_B
  { 1504,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1504 = SLL_D
  { 1505,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1505 = SLL_H
  { 1506,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1506 = SLL_MM
  { 1507,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1507 = SLL_W
  { 1508,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1508 = SLT
  { 1509,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1509 = SLT64
  { 1510,	3,	1,	132,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1510 = SLT_MM
  { 1511,	3,	1,	133,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1511 = SLTi
  { 1512,	3,	1,	133,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1512 = SLTi64
  { 1513,	3,	1,	133,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1513 = SLTi_MM
  { 1514,	3,	1,	133,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1514 = SLTiu
  { 1515,	3,	1,	133,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1515 = SLTiu64
  { 1516,	3,	1,	133,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1516 = SLTiu_MM
  { 1517,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1517 = SLTu
  { 1518,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1518 = SLTu64
  { 1519,	3,	1,	132,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1519 = SLTu_MM
  { 1520,	3,	1,	127,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1520 = SNE
  { 1521,	3,	1,	128,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1521 = SNEi
  { 1522,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1522 = SNZ_B_PSEUDO
  { 1523,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1523 = SNZ_D_PSEUDO
  { 1524,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267,0,nullptr },  // Inst #1524 = SNZ_H_PSEUDO
  { 1525,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1525 = SNZ_V_PSEUDO
  { 1526,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo268,0,nullptr },  // Inst #1526 = SNZ_W_PSEUDO
  { 1527,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1527 = SPLATI_B
  { 1528,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1528 = SPLATI_D
  { 1529,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1529 = SPLATI_H
  { 1530,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1530 = SPLATI_W
  { 1531,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo269,0,nullptr },  // Inst #1531 = SPLAT_B
  { 1532,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1532 = SPLAT_D
  { 1533,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1533 = SPLAT_H
  { 1534,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1534 = SPLAT_W
  { 1535,	3,	1,	134,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1535 = SRA
  { 1536,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1536 = SRAI_B
  { 1537,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1537 = SRAI_D
  { 1538,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1538 = SRAI_H
  { 1539,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1539 = SRAI_W
  { 1540,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1540 = SRARI_B
  { 1541,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1541 = SRARI_D
  { 1542,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1542 = SRARI_H
  { 1543,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1543 = SRARI_W
  { 1544,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1544 = SRAR_B
  { 1545,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1545 = SRAR_D
  { 1546,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1546 = SRAR_H
  { 1547,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1547 = SRAR_W
  { 1548,	3,	1,	135,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1548 = SRAV
  { 1549,	3,	1,	135,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1549 = SRAV_MM
  { 1550,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1550 = SRA_B
  { 1551,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1551 = SRA_D
  { 1552,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1552 = SRA_H
  { 1553,	3,	1,	134,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1553 = SRA_MM
  { 1554,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1554 = SRA_W
  { 1555,	3,	1,	136,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1555 = SRL
  { 1556,	3,	1,	136,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1556 = SRL16_MM
  { 1557,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1557 = SRLI_B
  { 1558,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1558 = SRLI_D
  { 1559,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1559 = SRLI_H
  { 1560,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1560 = SRLI_W
  { 1561,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1561 = SRLRI_B
  { 1562,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1562 = SRLRI_D
  { 1563,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1563 = SRLRI_H
  { 1564,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1564 = SRLRI_W
  { 1565,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1565 = SRLR_B
  { 1566,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1566 = SRLR_D
  { 1567,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1567 = SRLR_H
  { 1568,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1568 = SRLR_W
  { 1569,	3,	1,	137,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1569 = SRLV
  { 1570,	3,	1,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1570 = SRLV_MM
  { 1571,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1571 = SRL_B
  { 1572,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1572 = SRL_D
  { 1573,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1573 = SRL_H
  { 1574,	3,	1,	136,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1574 = SRL_MM
  { 1575,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1575 = SRL_W
  { 1576,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1576 = SSNOP
  { 1577,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1577 = SSNOP_MM
  { 1578,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #1578 = STORE_ACC128
  { 1579,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1579 = STORE_ACC64
  { 1580,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1580 = STORE_ACC64DSP
  { 1581,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #1581 = STORE_CCOND_DSP
  { 1582,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #1582 = ST_B
  { 1583,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #1583 = ST_D
  { 1584,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #1584 = ST_H
  { 1585,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #1585 = ST_W
  { 1586,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1586 = SUB
  { 1587,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1587 = SUBQH_PH
  { 1588,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1588 = SUBQH_R_PH
  { 1589,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1589 = SUBQH_R_W
  { 1590,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1590 = SUBQH_W
  { 1591,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1591 = SUBQ_PH
  { 1592,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1592 = SUBQ_S_PH
  { 1593,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1593 = SUBQ_S_W
  { 1594,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1594 = SUBSUS_U_B
  { 1595,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1595 = SUBSUS_U_D
  { 1596,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1596 = SUBSUS_U_H
  { 1597,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1597 = SUBSUS_U_W
  { 1598,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1598 = SUBSUU_S_B
  { 1599,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1599 = SUBSUU_S_D
  { 1600,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1600 = SUBSUU_S_H
  { 1601,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1601 = SUBSUU_S_W
  { 1602,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1602 = SUBS_S_B
  { 1603,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1603 = SUBS_S_D
  { 1604,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1604 = SUBS_S_H
  { 1605,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1605 = SUBS_S_W
  { 1606,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1606 = SUBS_U_B
  { 1607,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1607 = SUBS_U_D
  { 1608,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1608 = SUBS_U_H
  { 1609,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1609 = SUBS_U_W
  { 1610,	3,	1,	138,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1610 = SUBU16_MM
  { 1611,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1611 = SUBUH_QB
  { 1612,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1612 = SUBUH_R_QB
  { 1613,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1613 = SUBU_PH
  { 1614,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1614 = SUBU_QB
  { 1615,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1615 = SUBU_S_PH
  { 1616,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1616 = SUBU_S_QB
  { 1617,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1617 = SUBVI_B
  { 1618,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1618 = SUBVI_D
  { 1619,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1619 = SUBVI_H
  { 1620,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1620 = SUBVI_W
  { 1621,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1621 = SUBV_B
  { 1622,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1622 = SUBV_D
  { 1623,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1623 = SUBV_H
  { 1624,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1624 = SUBV_W
  { 1625,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1625 = SUB_MM
  { 1626,	3,	1,	138,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1626 = SUBu
  { 1627,	3,	1,	138,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1627 = SUBu_MM
  { 1628,	3,	0,	139,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1628 = SUXC1
  { 1629,	3,	0,	139,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1629 = SUXC164
  { 1630,	3,	0,	139,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1630 = SUXC1_MM
  { 1631,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1631 = SW
  { 1632,	3,	0,	140,	2,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1632 = SW16_MM
  { 1633,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1633 = SW64
  { 1634,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1634 = SWC1
  { 1635,	3,	0,	141,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1635 = SWC1_MM
  { 1636,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1636 = SWC2
  { 1637,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1637 = SWC2_R6
  { 1638,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1638 = SWC3
  { 1639,	3,	0,	142,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1639 = SWL
  { 1640,	3,	0,	142,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1640 = SWL64
  { 1641,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1641 = SWL_MM
  { 1642,	3,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1642 = SWM16_MM
  { 1643,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1643 = SWM32_MM
  { 1644,	3,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1644 = SWM_MM
  { 1645,	4,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1645 = SWP_MM
  { 1646,	3,	0,	143,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1646 = SWR
  { 1647,	3,	0,	143,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1647 = SWR64
  { 1648,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1648 = SWR_MM
  { 1649,	3,	0,	140,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1649 = SWSP_MM
  { 1650,	3,	0,	144,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1650 = SWXC1
  { 1651,	3,	0,	144,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1651 = SWXC1_MM
  { 1652,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1652 = SW_MM
  { 1653,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1653 = SYNC
  { 1654,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273,0,nullptr },  // Inst #1654 = SYNCI
  { 1655,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1655 = SYNC_MM
  { 1656,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1656 = SYSCALL
  { 1657,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1657 = SYSCALL_MM
  { 1658,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1658 = SZ_B_PSEUDO
  { 1659,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1659 = SZ_D_PSEUDO
  { 1660,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267,0,nullptr },  // Inst #1660 = SZ_H_PSEUDO
  { 1661,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1661 = SZ_V_PSEUDO
  { 1662,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo268,0,nullptr },  // Inst #1662 = SZ_W_PSEUDO
  { 1663,	0,	0,	145,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1663 = Save16
  { 1664,	0,	0,	145,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1664 = SaveX16
  { 1665,	4,	0,	119,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1665 = SbRxRyOffMemX16
  { 1666,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo274,0,nullptr },  // Inst #1666 = SebRx16
  { 1667,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo274,0,nullptr },  // Inst #1667 = SehRx16
  { 1668,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo275,0,nullptr },  // Inst #1668 = SelBeqZ
  { 1669,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo275,0,nullptr },  // Inst #1669 = SelBneZ
  { 1670,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1670 = SelTBteqZCmp
  { 1671,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1671 = SelTBteqZCmpi
  { 1672,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1672 = SelTBteqZSlt
  { 1673,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1673 = SelTBteqZSlti
  { 1674,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1674 = SelTBteqZSltiu
  { 1675,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1675 = SelTBteqZSltu
  { 1676,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1676 = SelTBtneZCmp
  { 1677,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1677 = SelTBtneZCmpi
  { 1678,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1678 = SelTBtneZSlt
  { 1679,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1679 = SelTBtneZSlti
  { 1680,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1680 = SelTBtneZSltiu
  { 1681,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1681 = SelTBtneZSltu
  { 1682,	4,	0,	129,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1682 = ShRxRyOffMemX16
  { 1683,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1683 = SllX16
  { 1684,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1684 = SllvRxRy16
  { 1685,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1685 = SltCCRxRy16
  { 1686,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo95,0,nullptr },  // Inst #1686 = SltRxRy16
  { 1687,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1687 = SltiCCRxImmX16
  { 1688,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1688 = SltiRxImm16
  { 1689,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1689 = SltiRxImmX16
  { 1690,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1690 = SltiuCCRxImmX16
  { 1691,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1691 = SltiuRxImm16
  { 1692,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1692 = SltiuRxImmX16
  { 1693,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1693 = SltuCCRxRy16
  { 1694,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo95,0,nullptr },  // Inst #1694 = SltuRxRy16
  { 1695,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42,0,nullptr },  // Inst #1695 = SltuRxRyRz16
  { 1696,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1696 = SraX16
  { 1697,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1697 = SravRxRy16
  { 1698,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1698 = SrlX16
  { 1699,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1699 = SrlvRxRy16
  { 1700,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1700 = SubuRxRyRz16
  { 1701,	4,	0,	140,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1701 = SwRxRyOffMemX16
  { 1702,	3,	0,	140,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1702 = SwRxSpImmX16
  { 1703,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #1703 = TAILCALL
  { 1704,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo153,0,nullptr },  // Inst #1704 = TAILCALL64_R
  { 1705,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo66,0,nullptr },  // Inst #1705 = TAILCALL_R
  { 1706,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1706 = TEQ
  { 1707,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1707 = TEQI
  { 1708,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1708 = TEQI_MM
  { 1709,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1709 = TEQ_MM
  { 1710,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1710 = TGE
  { 1711,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1711 = TGEI
  { 1712,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1712 = TGEIU
  { 1713,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1713 = TGEIU_MM
  { 1714,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1714 = TGEI_MM
  { 1715,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1715 = TGEU
  { 1716,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1716 = TGEU_MM
  { 1717,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1717 = TGE_MM
  { 1718,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1718 = TLBP
  { 1719,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1719 = TLBP_MM
  { 1720,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1720 = TLBR
  { 1721,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1721 = TLBR_MM
  { 1722,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1722 = TLBWI
  { 1723,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1723 = TLBWI_MM
  { 1724,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1724 = TLBWR
  { 1725,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1725 = TLBWR_MM
  { 1726,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1726 = TLT
  { 1727,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1727 = TLTI
  { 1728,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1728 = TLTIU_MM
  { 1729,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1729 = TLTI_MM
  { 1730,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1730 = TLTU
  { 1731,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1731 = TLTU_MM
  { 1732,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1732 = TLT_MM
  { 1733,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1733 = TNE
  { 1734,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1734 = TNEI
  { 1735,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1735 = TNEI_MM
  { 1736,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1736 = TNE_MM
  { 1737,	0,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1737 = TRAP
  { 1738,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1738 = TRUNC_L_D64
  { 1739,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #1739 = TRUNC_L_S
  { 1740,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1740 = TRUNC_W_D32
  { 1741,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #1741 = TRUNC_W_D64
  { 1742,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1742 = TRUNC_W_MM
  { 1743,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1743 = TRUNC_W_S
  { 1744,	2,	1,	146,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1744 = TRUNC_W_S_MM
  { 1745,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1745 = TTLTIU
  { 1746,	2,	0,	113,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1746 = UDIV
  { 1747,	2,	0,	113,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1747 = UDIV_MM
  { 1748,	3,	1,	24,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo32,0,nullptr },  // Inst #1748 = V3MULU
  { 1749,	3,	1,	24,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo32,0,nullptr },  // Inst #1749 = VMM0
  { 1750,	3,	1,	24,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo32,0,nullptr },  // Inst #1750 = VMULU
  { 1751,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1751 = VSHF_B
  { 1752,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #1752 = VSHF_D
  { 1753,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1753 = VSHF_H
  { 1754,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1754 = VSHF_W
  { 1755,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1755 = WAIT
  { 1756,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1756 = WAIT_MM
  { 1757,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1757 = WRDSP
  { 1758,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1758 = WSBH
  { 1759,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1759 = WSBH_MM
  { 1760,	3,	1,	147,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1760 = XOR
  { 1761,	3,	1,	147,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1761 = XOR16_MM
  { 1762,	3,	1,	147,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1762 = XOR64
  { 1763,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1763 = XORI_B
  { 1764,	3,	1,	147,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1764 = XOR_MM
  { 1765,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1765 = XOR_V
  { 1766,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1766 = XOR_V_D_PSEUDO
  { 1767,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1767 = XOR_V_H_PSEUDO
  { 1768,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1768 = XOR_V_W_PSEUDO
  { 1769,	3,	1,	148,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1769 = XORi
  { 1770,	3,	1,	147,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1770 = XORi64
  { 1771,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1771 = XORi_MM
  { 1772,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1772 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'B', 'B', 'I', 'T', '0', 0,
  /* 33 */ 'L', 'D', 'C', '1', 0,
  /* 38 */ 'S', 'D', 'C', '1', 0,
  /* 43 */ 'C', 'F', 'C', '1', 0,
  /* 48 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 54 */ 'C', 'T', 'C', '1', 0,
  /* 59 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 65 */ 'L', 'W', 'C', '1', 0,
  /* 70 */ 'S', 'W', 'C', '1', 0,
  /* 75 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 87 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 99 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 111 */ 'M', 'T', 'M', '1', 0,
  /* 116 */ 'M', 'T', 'P', '1', 0,
  /* 121 */ 'B', 'B', 'I', 'T', '1', 0,
  /* 127 */ 'B', 'B', 'I', 'T', '0', '3', '2', 0,
  /* 135 */ 'B', 'B', 'I', 'T', '1', '3', '2', 0,
  /* 143 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 150 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 160 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 170 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 179 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 189 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 198 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 208 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 218 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 229 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 239 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 249 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 258 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 267 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 276 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 284 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '3', '2', 0,
  /* 305 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 314 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 325 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 336 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 355 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 364 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 373 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 383 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 393 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 402 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 411 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 421 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '3', '2', 0,
  /* 438 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 448 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 458 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 468 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 477 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 487 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 496 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '3', '2', 0,
  /* 517 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 526 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 535 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 547 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 559 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 570 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 582 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 592 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 621 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 641 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 662 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 682 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 698 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 718 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 738 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 757 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 764 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 771 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 779 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 786 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 793 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 802 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 812 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '3', '2', 0,
  /* 826 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 0,
  /* 836 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '3', '2', 0,
  /* 850 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 866 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 879 */ 'L', 'D', 'C', '2', 0,
  /* 884 */ 'S', 'D', 'C', '2', 0,
  /* 889 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 895 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 901 */ 'L', 'W', 'C', '2', 0,
  /* 906 */ 'S', 'W', 'C', '2', 0,
  /* 911 */ 'M', 'T', 'M', '2', 0,
  /* 916 */ 'M', 'T', 'P', '2', 0,
  /* 921 */ 'L', 'D', 'C', '3', 0,
  /* 926 */ 'S', 'D', 'C', '3', 0,
  /* 931 */ 'L', 'W', 'C', '3', 0,
  /* 936 */ 'S', 'W', 'C', '3', 0,
  /* 941 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 948 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 955 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 963 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 971 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 979 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 987 */ 'S', 'E', 'B', '6', '4', 0,
  /* 993 */ 'L', 'B', '6', '4', 0,
  /* 998 */ 'S', 'B', '6', '4', 0,
  /* 1003 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1014 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1026 */ 'A', 'N', 'D', '6', '4', 0,
  /* 1032 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1042 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1052 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1065 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1078 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1087 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1097 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1106 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1116 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1126 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1137 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1147 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1157 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1166 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1175 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1184 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1192 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1213 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1222 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1233 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1244 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1254 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1263 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1275 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1287 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1298 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1310 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1320 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1329 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1338 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1348 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1358 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1367 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1376 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1386 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '6', '4', 0,
  /* 1403 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1413 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1423 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1433 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1442 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1452 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1461 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '6', '4', 0,
  /* 1482 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1491 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1500 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1512 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1524 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1535 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1547 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1557 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1563 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1576 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1594 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1600 */ 'L', 'H', '6', '4', 0,
  /* 1605 */ 'S', 'H', '6', '4', 0,
  /* 1610 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1623 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1638 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1645 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1658 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1671 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1691 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1711 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1732 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1752 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1761 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', '6', '4', 0,
  /* 1782 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1793 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1804 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1820 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1840 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1860 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1879 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 1896 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1905 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', '6', '4', 0,
  /* 1926 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1932 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1938 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1951 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1958 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1964 */ 'J', 'R', '6', '4', 0,
  /* 1969 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1976 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1982 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1988 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1996 */ 'L', 'W', 'R', '6', '4', 0,
  /* 2002 */ 'S', 'W', 'R', '6', '4', 0,
  /* 2008 */ 'S', 'L', 'T', '6', '4', 0,
  /* 2014 */ 'L', 'W', '6', '4', 0,
  /* 2019 */ 'S', 'W', '6', '4', 0,
  /* 2024 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 2031 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 2038 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 2047 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 2056 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 2063 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 2070 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 2086 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 2107 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 2116 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 2139 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 2146 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 2153 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 2160 */ 'L', 'U', 'i', '6', '4', 0,
  /* 2166 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 0,
  /* 2176 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2191 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2207 */ 'L', 'B', 'u', '6', '4', 0,
  /* 2213 */ 'L', 'H', 'u', '6', '4', 0,
  /* 2219 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 2226 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 2238 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 2246 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2256 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2264 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2271 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2291 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2311 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2332 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2352 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2368 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2388 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2408 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2427 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2437 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2444 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2455 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2463 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2478 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2493 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2508 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2523 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2530 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2537 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2553 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2569 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2585 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2601 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2618 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2635 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2654 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2670 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2686 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2702 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2716 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2729 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2742 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2757 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2773 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2784 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2797 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2810 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2824 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2838 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2854 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2867 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2880 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2888 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2904 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2917 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2931 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2945 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2959 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2973 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2989 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3005 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3020 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3035 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 3044 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 3053 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 3061 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 3068 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 3078 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 3092 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 3099 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 3113 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 3120 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 3128 */ 'J', 'a', 'l', '1', '6', 0,
  /* 3134 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 3147 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3157 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3169 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3181 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3194 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3209 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3221 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3233 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 3240 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 3247 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3259 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3267 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3275 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3283 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3295 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3308 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3318 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3328 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3338 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3349 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3359 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3370 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3382 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3393 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3404 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3414 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3425 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3436 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3448 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3459 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3471 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3484 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3497 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3510 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3523 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3537 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3545 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3553 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3561 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3569 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3577 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3585 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 3593 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 3602 */ 'S', 'C', '_', 'R', '6', 0,
  /* 3608 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 3615 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 3622 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 3631 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 3639 */ 'L', 'L', '_', 'R', '6', 0,
  /* 3645 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 3653 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 3661 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 3670 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 3678 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3690 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3703 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 3722 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 3741 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3761 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3780 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3795 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3814 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 3833 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 3851 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3866 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3882 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3897 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3913 */ 'D', 'S', 'R', 'A', 0,
  /* 3918 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3924 */ 'D', 'L', 'S', 'A', 0,
  /* 3929 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 3936 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 3943 */ 'S', 'E', 'B', 0,
  /* 3947 */ 'E', 'H', 'B', 0,
  /* 3951 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 3957 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 3965 */ 'L', 'B', 0,
  /* 3968 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3976 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3989 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4001 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4018 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4027 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4036 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 4050 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 4058 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 4066 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 4074 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4087 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4099 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4116 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 4126 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4137 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4148 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 4159 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 4169 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4179 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4189 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4202 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4214 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4231 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 4239 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 4247 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4256 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4265 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4274 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4283 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4294 */ 'S', 'B', 0,
  /* 4297 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4304 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4315 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 4321 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 4329 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 4337 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 4346 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 4354 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 4361 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 4368 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 4374 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 4382 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 4390 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 4398 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 4405 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 4412 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 4419 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 4426 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 4433 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 4441 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 4449 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 4456 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 4463 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 4472 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 4479 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 4487 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 4495 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 4503 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 4510 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 4517 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 4526 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 4535 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 4543 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 4551 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 4559 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 4566 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 4574 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 4581 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 4587 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 4593 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 4601 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 4608 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 4614 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 4621 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 4628 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 4635 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 4643 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 4650 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 4659 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 4667 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 4675 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 4683 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 4692 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 4701 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 4710 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 4719 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 4727 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 4736 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 4745 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 4754 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 4762 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 4770 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 4781 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 4789 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 4797 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 4806 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 4814 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 4821 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 4828 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 4837 */ 'S', 'T', '_', 'B', 0,
  /* 4842 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 4851 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 4859 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 4867 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 4875 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 4884 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 4893 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 4902 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 4911 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 4919 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 4928 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 4937 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 4946 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 4957 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 4965 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 4973 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 4981 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 4989 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 4998 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 5006 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 5014 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 5022 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 5030 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 5037 */ 'B', 'Z', '_', 'B', 0,
  /* 5042 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 5048 */ 'B', 'C', 0,
  /* 5051 */ 'B', 'G', 'E', 'C', 0,
  /* 5056 */ 'B', 'N', 'E', 'C', 0,
  /* 5061 */ 'J', 'I', 'C', 0,
  /* 5065 */ 'B', 'A', 'L', 'C', 0,
  /* 5070 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 5076 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5084 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5092 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5100 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 5108 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5116 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5124 */ 'S', 'Y', 'N', 'C', 0,
  /* 5129 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 5141 */ 'L', 'D', 'P', 'C', 0,
  /* 5146 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 5152 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 5159 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 5167 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 5173 */ 'L', 'W', 'P', 'C', 0,
  /* 5178 */ 'B', 'E', 'Q', 'C', 0,
  /* 5183 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 5189 */ 'B', 'L', 'T', 'C', 0,
  /* 5194 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 5200 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 5206 */ 'B', 'N', 'V', 'C', 0,
  /* 5211 */ 'B', 'O', 'V', 'C', 0,
  /* 5216 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 5222 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 5228 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 5234 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 5240 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 5246 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 5252 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 5258 */ 'S', 'C', 'D', 0,
  /* 5262 */ 'D', 'A', 'D', 'D', 0,
  /* 5267 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5278 */ 'D', 'S', 'H', 'D', 0,
  /* 5283 */ 'L', 'L', 'D', 0,
  /* 5287 */ 'A', 'N', 'D', 0,
  /* 5291 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5299 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 5306 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 5319 */ 'D', 'M', 'O', 'D', 0,
  /* 5324 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 5341 */ 'S', 'D', 0,
  /* 5344 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 5352 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 5360 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 5367 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 5373 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 5380 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 5388 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 5397 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 5406 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 5415 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 5422 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 5430 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 5437 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 5444 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 5451 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 5459 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 5465 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 5473 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 5481 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 5488 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 5495 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 5505 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 5513 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5521 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5532 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 5542 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 5551 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 5558 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 5565 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 5573 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 5581 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 5589 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 5596 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 5603 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 5613 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 5621 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 5629 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 5636 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 5644 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 5651 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 5658 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 5665 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 5673 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 5680 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 5687 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 5696 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 5703 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 5711 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 5719 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 5727 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 5736 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 5745 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 5753 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 5761 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 5769 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 5775 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 5782 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 5788 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 5797 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 5804 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 5810 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 5818 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 5825 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 5832 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 5839 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 5846 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 5853 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 5863 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 5872 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 5879 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 5886 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5893 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5903 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5911 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5919 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5930 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5940 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 5949 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 5956 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 5963 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 5970 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 5977 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 5984 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 5993 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 6000 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 6008 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 6015 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 6022 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 6031 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6040 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6049 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6059 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 6070 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6079 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6089 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 6097 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 6105 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 6113 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 6122 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 6131 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 6140 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 6149 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 6157 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 6166 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 6175 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 6184 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 6193 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 6201 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 6209 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6219 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6229 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 6240 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 6248 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 6256 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 6265 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 6273 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 6280 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6287 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6294 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6304 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 6312 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6320 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6331 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 6341 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 6350 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 6357 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 6365 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 6374 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6382 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6391 */ 'S', 'T', '_', 'D', 0,
  /* 6396 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6405 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6414 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6424 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 6435 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6444 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6454 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 6462 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 6470 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 6478 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 6487 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 6496 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 6505 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 6514 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 6522 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 6531 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 6540 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 6549 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 6558 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 6569 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 6577 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 6585 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6595 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6605 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 6613 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 6621 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 6630 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 6638 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 6646 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 6654 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 6662 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 6669 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 6676 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 6683 */ 'B', 'Z', '_', 'D', 0,
  /* 6688 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 6697 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 6703 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 6712 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 6725 */ 'T', 'G', 'E', 0,
  /* 6729 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 6735 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 6742 */ 'B', 'N', 'E', 0,
  /* 6746 */ 'S', 'N', 'E', 0,
  /* 6750 */ 'T', 'N', 'E', 0,
  /* 6754 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 6760 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 6770 */ 'B', 'C', '1', 'F', 0,
  /* 6775 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 6788 */ 'P', 'R', 'E', 'F', 0,
  /* 6793 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6808 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6822 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 6836 */ 'D', 'S', 'B', 'H', 0,
  /* 6841 */ 'W', 'S', 'B', 'H', 0,
  /* 6846 */ 'S', 'E', 'H', 0,
  /* 6850 */ 'L', 'H', 0,
  /* 6853 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 6861 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6874 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6886 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6902 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 6918 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6927 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6936 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 6950 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 6958 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 6966 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 6974 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 6984 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 6991 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 6999 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 7007 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 7023 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 7033 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7044 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7055 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 7066 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 7077 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7087 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7096 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7106 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7116 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7126 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7136 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7146 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7156 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 7167 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 7183 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 7191 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 7199 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 7208 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 7217 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 7226 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 7235 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7244 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7255 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7269 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7283 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7292 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7304 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7318 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7330 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7343 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7356 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7366 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7376 */ 'S', 'H', 0,
  /* 7379 */ 'D', 'M', 'U', 'H', 0,
  /* 7384 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 7390 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 7398 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 7406 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 7415 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 7423 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 7430 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 7437 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 7443 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 7451 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 7459 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 7467 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 7474 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 7481 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 7488 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 7495 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 7503 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 7510 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 7517 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 7526 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 7533 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 7541 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 7549 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 7557 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 7566 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 7575 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 7583 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 7591 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 7599 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 7606 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 7612 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 7618 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 7626 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 7633 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 7641 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 7647 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 7653 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 7662 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 7671 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 7679 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 7689 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 7699 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 7708 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 7715 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 7722 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 7729 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 7737 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 7744 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7753 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7762 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7772 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7781 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7791 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 7799 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 7807 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 7815 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 7824 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 7833 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 7842 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 7851 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 7859 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 7868 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 7877 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 7886 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 7895 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 7904 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 7912 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 7920 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 7931 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 7939 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 7949 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 7957 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 7966 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 7974 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 7981 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 7988 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 7997 */ 'S', 'T', '_', 'H', 0,
  /* 8002 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8011 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8020 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8030 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8039 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8049 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 8057 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 8065 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 8073 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 8082 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 8091 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 8100 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 8109 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 8117 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 8126 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 8135 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 8144 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 8153 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 8164 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 8172 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 8180 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 8188 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 8196 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 8205 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 8213 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 8221 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 8229 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 8237 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 8244 */ 'B', 'Z', '_', 'H', 0,
  /* 8249 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 8255 */ 'S', 'Y', 'N', 'C', 'I', 0,
  /* 8261 */ 'D', 'I', 0,
  /* 8264 */ 'T', 'G', 'E', 'I', 0,
  /* 8269 */ 'T', 'N', 'E', 'I', 0,
  /* 8274 */ 'D', 'A', 'H', 'I', 0,
  /* 8279 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 8290 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 8303 */ 'P', 'H', 'I', 0,
  /* 8307 */ 'M', 'T', 'H', 'I', 0,
  /* 8312 */ 'T', 'E', 'Q', 'I', 0,
  /* 8317 */ 'D', 'A', 'T', 'I', 0,
  /* 8322 */ 'T', 'L', 'T', 'I', 0,
  /* 8327 */ 'D', 'A', 'U', 'I', 0,
  /* 8332 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 8338 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8349 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8360 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 8367 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', 0,
  /* 8386 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 8395 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 8404 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', 0,
  /* 8419 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 8426 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', 0,
  /* 8445 */ 'J', 0,
  /* 8447 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 8453 */ 'B', 'A', 'L', 0,
  /* 8457 */ 'J', 'A', 'L', 0,
  /* 8461 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 8468 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 8475 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8490 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8504 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8519 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8530 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8541 */ 'L', 'D', 'L', 0,
  /* 8545 */ 'S', 'D', 'L', 0,
  /* 8549 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8558 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8567 */ 'B', 'N', 'E', 'L', 0,
  /* 8572 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 8578 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8591 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8604 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8616 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8630 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 8639 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 8647 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 8655 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 8663 */ 'K', 'I', 'L', 'L', 0,
  /* 8668 */ 'D', 'S', 'L', 'L', 0,
  /* 8673 */ 'B', 'E', 'Q', 'L', 0,
  /* 8678 */ 'D', 'S', 'R', 'L', 0,
  /* 8683 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 8689 */ 'D', 'M', 'U', 'L', 0,
  /* 8694 */ 'L', 'W', 'L', 0,
  /* 8698 */ 'S', 'W', 'L', 0,
  /* 8702 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 8708 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 8714 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 8720 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 8726 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 8742 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 8756 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8764 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8772 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8780 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8788 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8797 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8806 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8814 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8822 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8830 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8838 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8847 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8856 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8865 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8874 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8887 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8900 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8912 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8926 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8940 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8952 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8965 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8977 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8989 */ 'L', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 8998 */ 'S', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 9007 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 9019 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 9030 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 9043 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 9054 */ 'S', 'B', '1', '6', '_', 'M', 'M', 0,
  /* 9062 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 9071 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 9080 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 9090 */ 'S', 'H', '1', '6', '_', 'M', 'M', 0,
  /* 9098 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9108 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9118 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9126 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 0,
  /* 9137 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9146 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9155 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9164 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9173 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 9183 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 0,
  /* 9194 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9202 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9212 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9221 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 9232 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 9241 */ 'L', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9250 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9260 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9270 */ 'L', 'H', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9279 */ 'L', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 9287 */ 'S', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 9295 */ 'B', 'N', 'E', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 9305 */ 'B', 'E', 'Q', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 9315 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 9322 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 9329 */ 'E', 'H', 'B', '_', 'M', 'M', 0,
  /* 9336 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 9342 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 9348 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 9356 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 9364 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 9372 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 0,
  /* 9383 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 9389 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 9398 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 9407 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 9415 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 9423 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 9430 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 9437 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 0,
  /* 9446 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 9453 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 9460 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 0,
  /* 9469 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 9477 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 0,
  /* 9485 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 9493 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 9501 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 9508 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 9514 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 9520 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 9526 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 9534 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 9542 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 9550 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 9558 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 9566 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 9574 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 9583 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 9593 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 9603 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 9613 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 9623 */ 'J', '_', 'M', 'M', 0,
  /* 9628 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 9637 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 9644 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 9654 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 9664 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 9675 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 9682 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 9689 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 9697 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 9704 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 9711 */ 'L', 'W', 'M', '_', 'M', 'M', 0,
  /* 9718 */ 'S', 'W', 'M', '_', 'M', 'M', 0,
  /* 9725 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 9732 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 9740 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 9748 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 0,
  /* 9757 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 9765 */ 'M', 'O', 'V', 'E', 'P', '_', 'M', 'M', 0,
  /* 9774 */ 'L', 'W', 'G', 'P', '_', 'M', 'M', 0,
  /* 9782 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 0,
  /* 9791 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 9804 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 9815 */ 'L', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 9823 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 9831 */ 'L', 'W', 'P', '_', 'M', 'M', 0,
  /* 9838 */ 'S', 'W', 'P', '_', 'M', 'M', 0,
  /* 9845 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9852 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9859 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 9867 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 9873 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 9881 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 9888 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 9895 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 9903 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 9912 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 0,
  /* 9921 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 9928 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 9935 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 9943 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9951 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9962 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9973 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 9980 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 9989 */ 'L', 'W', 'X', 'S', '_', 'M', 'M', 0,
  /* 9997 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 10007 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 10018 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10028 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10039 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10050 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 10060 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 10070 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10082 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10094 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10104 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10115 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 10125 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10136 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10146 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10156 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10166 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10179 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10192 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10204 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10217 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10228 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 10236 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 10245 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 10253 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 10260 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 10267 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 10275 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 10284 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 10291 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 10300 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 10309 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 10317 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 10326 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 10335 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 10343 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 10350 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 10358 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10366 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10374 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10382 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 10390 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 10398 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 10407 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 10413 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 10419 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 10432 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 10443 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 10454 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 10464 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 10475 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 10486 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 10495 */ 'J', 'A', 'L', 'X', '_', 'M', 'M', 0,
  /* 10503 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 10511 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 10519 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 10526 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 10534 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 10542 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 10550 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 10558 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 10566 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 10574 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 10581 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 10588 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 10596 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 10604 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 10611 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 10619 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 10628 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 10641 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 10650 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 10660 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 10666 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 10672 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 10679 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 10686 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 10702 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 10719 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10736 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10753 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10769 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10782 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10794 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10809 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10824 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10841 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10856 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10870 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10885 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10900 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10915 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10928 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10940 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10954 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10969 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10984 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10999 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11012 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11024 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11037 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11049 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11064 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11079 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11096 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11111 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11125 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11140 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11155 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11170 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11183 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11195 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11216 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11238 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11259 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11280 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11302 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11323 */ 'D', 'C', 'L', 'O', 0,
  /* 11328 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 11339 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 11345 */ 'M', 'T', 'L', 'O', 0,
  /* 11350 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 11359 */ 'T', 'R', 'A', 'P', 0,
  /* 11364 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 11373 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 11379 */ 'T', 'L', 'B', 'P', 0,
  /* 11384 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 11391 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 11398 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 11404 */ 'D', 'P', 'O', 'P', 0,
  /* 11409 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 11423 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 11438 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 11444 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 11450 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 11459 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 11468 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 11483 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 11499 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 11508 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 11525 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 11534 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 11543 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 11552 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 11561 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 11571 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 11581 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 11591 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 11601 */ 'E', 'X', 'T', 'P', 0,
  /* 11606 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 11621 */ 'B', 'E', 'Q', 0,
  /* 11625 */ 'S', 'E', 'Q', 0,
  /* 11629 */ 'T', 'E', 'Q', 0,
  /* 11633 */ 'T', 'L', 'B', 'R', 0,
  /* 11638 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11653 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11667 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11682 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11693 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11704 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 11711 */ 'L', 'D', 'R', 0,
  /* 11715 */ 'S', 'D', 'R', 0,
  /* 11719 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11732 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11745 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11757 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11771 */ 'J', 'R', 0,
  /* 11774 */ 'J', 'A', 'L', 'R', 0,
  /* 11779 */ 'N', 'O', 'R', 0,
  /* 11783 */ 'X', 'O', 'R', 0,
  /* 11787 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 11793 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 11799 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 11805 */ 'L', 'W', 'R', 0,
  /* 11809 */ 'S', 'W', 'R', 0,
  /* 11813 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 11826 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 11837 */ 'C', 'I', 'N', 'S', 0,
  /* 11842 */ 'D', 'I', 'N', 'S', 0,
  /* 11847 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 11864 */ 'E', 'X', 'T', 'S', 0,
  /* 11869 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 11879 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 11889 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 11900 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 11911 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 11918 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 11925 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 11932 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 11940 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 11947 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 11955 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 11963 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 11972 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 11980 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 11990 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 12001 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 12009 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 12019 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 12026 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 12035 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 12045 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 12053 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 12061 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 12068 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 12075 */ 'C', '_', 'F', '_', 'S', 0,
  /* 12081 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'S', 0,
  /* 12100 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 12108 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 12115 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 12124 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 12133 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 12139 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 12147 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 12154 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 12164 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 12174 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 12183 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 12193 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 12201 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 12207 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 12217 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 12224 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 12233 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 12241 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 12251 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12262 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12270 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12280 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 12287 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 12296 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 12303 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 12311 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'S', 0,
  /* 12326 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 12334 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 12342 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 12352 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 12363 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 12371 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 12381 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 12388 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 12397 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 12404 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 12412 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 12419 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'S', 0,
  /* 12438 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 12445 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 12452 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 12462 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 12472 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 12481 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 12491 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 12499 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 12505 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 12514 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 12523 */ 'B', 'C', '1', 'T', 0,
  /* 12528 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 12534 */ 'W', 'A', 'I', 'T', 0,
  /* 12539 */ 'S', 'L', 'T', 0,
  /* 12543 */ 'T', 'L', 'T', 0,
  /* 12547 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 12559 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 12570 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 12581 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 12592 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 12607 */ 'D', 'E', 'X', 'T', 0,
  /* 12612 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 12624 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 12636 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 12642 */ 'T', 'G', 'E', 'U', 0,
  /* 12647 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 12653 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 12659 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 12666 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 12673 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 12679 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 12685 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 12691 */ 'T', 'L', 'T', 'U', 0,
  /* 12696 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 12702 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 12708 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 12714 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 12721 */ 'D', 'D', 'I', 'V', 0,
  /* 12726 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 12738 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 12749 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 12761 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 12772 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 12778 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 12784 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 12791 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 12799 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 12805 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 12812 */ 'I', 'N', 'S', 'V', 0,
  /* 12817 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 12823 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 12830 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 12837 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 12843 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 12849 */ 'B', 'Z', '_', 'V', 0,
  /* 12854 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 12860 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 12866 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 12873 */ 'L', 'W', 0,
  /* 12876 */ 'S', 'W', 0,
  /* 12879 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 12895 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 12903 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 12911 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 12927 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 12933 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 12941 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 12950 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 12959 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 12968 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 12975 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 12983 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 12990 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 12997 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 13004 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 13012 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 13018 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 13026 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 13034 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 13041 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 13048 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 13056 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 13064 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 13071 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 13078 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 13086 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 13094 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 13102 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 13109 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 13116 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 13123 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 13130 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 13145 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 13157 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 13174 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 13189 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 13197 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 13205 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 13212 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 13219 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 13227 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 13234 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 13241 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 13250 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 13257 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 13265 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 13273 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 13281 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 13290 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 13299 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 13307 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 13315 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 13323 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 13330 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 13336 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 13345 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 13352 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 13358 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 13366 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 13373 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 13380 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 13392 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 13404 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 13411 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 13418 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 13425 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 13433 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 13440 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 13447 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 13454 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 13462 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 13470 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 13476 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 13485 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 13494 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 13502 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 13512 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 13522 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 13531 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 13538 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 13545 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 13552 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 13559 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 13566 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 13575 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 13582 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 13590 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 13597 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 13604 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 13613 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 13623 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 13633 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 13642 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 13652 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 13662 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 13669 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 13679 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 13689 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 13700 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 13709 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13718 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13727 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13737 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 13748 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 13757 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 13767 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 13775 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 13783 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 13791 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 13800 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 13809 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 13818 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 13827 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 13836 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 13844 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 13853 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 13862 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 13871 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 13880 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 13889 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 13898 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 13907 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 13916 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 13924 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 13932 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 13942 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 13952 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 13966 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 13977 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 13985 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 13995 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 14003 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 14012 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 14020 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 14027 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 14034 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 14041 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 14049 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 14057 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 14064 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 14072 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 14081 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 14089 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 14098 */ 'S', 'T', '_', 'W', 0,
  /* 14103 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14112 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14121 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14131 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 14142 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 14151 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 14161 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 14169 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 14177 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 14185 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 14194 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 14203 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 14212 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 14221 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 14229 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 14238 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 14247 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 14256 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 14265 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 14276 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 14284 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 14292 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 14302 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 14312 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 14320 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 14328 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 14337 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 14345 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 14353 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 14361 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 14369 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 14376 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 14383 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 14391 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 14398 */ 'B', 'Z', '_', 'W', 0,
  /* 14403 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 14409 */ 'L', 'H', 'X', 0,
  /* 14413 */ 'J', 'A', 'L', 'X', 0,
  /* 14418 */ 'L', 'B', 'U', 'X', 0,
  /* 14423 */ 'L', 'W', 'X', 0,
  /* 14427 */ 'C', 'O', 'P', 'Y', 0,
  /* 14432 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 14448 */ 'B', 'G', 'E', 'Z', 0,
  /* 14453 */ 'B', 'L', 'E', 'Z', 0,
  /* 14458 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 14465 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 14472 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 14479 */ 'D', 'C', 'L', 'Z', 0,
  /* 14484 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 14491 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 14498 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 14505 */ 'B', 'G', 'T', 'Z', 0,
  /* 14510 */ 'B', 'L', 'T', 'Z', 0,
  /* 14515 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 14523 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 14531 */ 'J', 'a', 'l', 'O', 'n', 'e', 'R', 'e', 'g', 0,
  /* 14541 */ 'J', 'a', 'l', 'T', 'w', 'o', 'R', 'e', 'g', 0,
  /* 14551 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 14572 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 14578 */ 'A', 'N', 'D', 'i', 0,
  /* 14583 */ 'S', 'N', 'E', 'i', 0,
  /* 14588 */ 'S', 'E', 'Q', 'i', 0,
  /* 14593 */ 'X', 'O', 'R', 'i', 0,
  /* 14598 */ 'S', 'L', 'T', 'i', 0,
  /* 14603 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 14619 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 14633 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 14647 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 14661 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 14675 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 14688 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14701 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14712 */ 'B', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14724 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 14737 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 14750 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 14763 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 14776 */ 'L', 'B', 'u', 0,
  /* 14780 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 14786 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 14792 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 14798 */ 'L', 'H', 'u', 0,
  /* 14802 */ 'S', 'L', 'T', 'u', 0,
  /* 14807 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 14820 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 14832 */ 'L', 'W', 'u', 0,
  /* 14836 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14855 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14865 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14883 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 14889 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 14904 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 14919 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 14933 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    8303U, 10650U, 10686U, 8558U, 8549U, 8663U, 6793U, 6808U, 
    6775U, 6822U, 11847U, 6760U, 6712U, 14427U, 6735U, 12592U, 
    5306U, 11350U, 12581U, 5324U, 12570U, 5129U, 7126U, 4159U, 
    13880U, 5263U, 5159U, 9372U, 9791U, 9019U, 9043U, 9804U, 
    6927U, 7044U, 13623U, 13197U, 6999U, 7106U, 13862U, 5183U, 
    4337U, 5397U, 7406U, 12950U, 4745U, 6184U, 7895U, 13907U, 
    4937U, 6549U, 8144U, 14256U, 9260U, 4027U, 4137U, 7191U, 
    4239U, 7146U, 4179U, 4551U, 5761U, 7591U, 13315U, 5007U, 
    6639U, 8214U, 14346U, 5216U, 4321U, 5380U, 7390U, 12933U, 
    9408U, 14573U, 10542U, 14849U, 10632U, 14787U, 10596U, 10702U, 
    11606U, 10673U, 5152U, 5287U, 9071U, 1026U, 9098U, 4426U, 
    9423U, 12817U, 10870U, 10954U, 11125U, 14578U, 2139U, 10550U, 
    5299U, 4650U, 6031U, 7744U, 13709U, 4842U, 6396U, 8002U, 
    14103U, 2368U, 698U, 1820U, 3795U, 2291U, 621U, 1691U, 
    3722U, 2332U, 662U, 1732U, 3761U, 2311U, 641U, 1711U, 
    3741U, 2408U, 738U, 1860U, 3833U, 2271U, 601U, 1671U, 
    3703U, 2388U, 718U, 1840U, 3814U, 2352U, 682U, 1804U, 
    3780U, 8328U, 5146U, 4727U, 6166U, 7868U, 13889U, 4919U, 
    6531U, 8126U, 14238U, 4675U, 6105U, 7807U, 13783U, 4867U, 
    6470U, 8065U, 14177U, 2810U, 2686U, 3194U, 2838U, 2635U, 
    3134U, 2702U, 3497U, 3436U, 3945U, 9055U, 14786U, 8453U, 
    5065U, 10672U, 11704U, 27U, 127U, 121U, 135U, 5048U, 
    14484U, 6770U, 8572U, 9469U, 14458U, 12523U, 8683U, 10228U, 
    14491U, 14465U, 4487U, 5711U, 7541U, 13265U, 4621U, 5956U, 
    7715U, 13538U, 11621U, 1958U, 5178U, 8673U, 9305U, 5100U, 
    5240U, 9398U, 9845U, 5051U, 5194U, 14448U, 2024U, 8461U, 
    5076U, 8647U, 9951U, 9644U, 5222U, 8702U, 10503U, 14505U, 
    2056U, 5108U, 5246U, 8714U, 10526U, 4463U, 5687U, 7517U, 
    13241U, 4593U, 5810U, 7618U, 13358U, 4517U, 5727U, 7557U, 
    13281U, 4635U, 6000U, 7729U, 13582U, 12714U, 11365U, 14453U, 
    2031U, 5084U, 5228U, 8708U, 10511U, 5189U, 5200U, 14510U, 
    2063U, 8468U, 5116U, 8655U, 9962U, 9654U, 5252U, 8720U, 
    10534U, 4566U, 12866U, 4559U, 12854U, 6742U, 1557U, 5056U, 
    4433U, 5665U, 7495U, 13219U, 4405U, 5644U, 7474U, 13123U, 
    8567U, 9295U, 5092U, 5234U, 9389U, 9446U, 5206U, 5042U, 
    6697U, 8249U, 12860U, 14403U, 5211U, 592U, 10753U, 8447U, 
    9126U, 9628U, 4441U, 10856U, 10794U, 11049U, 10940U, 12830U, 
    11111U, 4535U, 5745U, 7575U, 13299U, 4814U, 6273U, 7974U, 
    14020U, 5037U, 6683U, 8244U, 12849U, 14398U, 14712U, 3221U, 
    2867U, 3233U, 2880U, 3209U, 2854U, 3120U, 3545U, 2931U, 
    2478U, 2959U, 2508U, 2989U, 3020U, 3044U, 3537U, 2917U, 
    2463U, 2945U, 2493U, 2973U, 3005U, 3035U, 1563U, 2070U, 
    6729U, 9437U, 3622U, 1287U, 12174U, 559U, 1524U, 10454U, 
    12472U, 10192U, 4472U, 5696U, 7526U, 13250U, 4608U, 5880U, 
    7641U, 13441U, 43U, 8772U, 3929U, 11837U, 779U, 6023U, 
    12303U, 4683U, 6113U, 7815U, 13791U, 4875U, 6478U, 8073U, 
    14185U, 4667U, 6097U, 7799U, 13775U, 4859U, 6462U, 8057U, 
    14169U, 11324U, 9725U, 3654U, 4701U, 6131U, 7833U, 13809U, 
    4893U, 6496U, 8091U, 14203U, 4762U, 6201U, 7912U, 13924U, 
    4965U, 6577U, 8172U, 14284U, 14480U, 10519U, 3671U, 4074U, 
    3976U, 4189U, 4087U, 3989U, 4202U, 4105U, 4007U, 4220U, 
    5940U, 7013U, 12287U, 5636U, 12100U, 5542U, 6908U, 12026U, 
    6341U, 7173U, 12388U, 5603U, 12035U, 5893U, 12241U, 5495U, 
    11980U, 6294U, 12342U, 5919U, 12251U, 5521U, 11990U, 6320U, 
    12352U, 5853U, 12207U, 5930U, 12270U, 5532U, 12009U, 6331U, 
    12371U, 5863U, 12224U, 14432U, 10841U, 11096U, 4797U, 6256U, 
    7957U, 14003U, 4989U, 6621U, 8196U, 14328U, 54U, 8806U, 
    3936U, 11869U, 12885U, 10419U, 8732U, 11879U, 12917U, 10039U, 
    1310U, 9030U, 12193U, 10104U, 411U, 8952U, 1376U, 8748U, 
    13958U, 10475U, 582U, 1547U, 10486U, 12491U, 10217U, 393U, 
    1358U, 12280U, 276U, 1184U, 12075U, 249U, 1157U, 12019U, 
    468U, 1433U, 12381U, 208U, 1116U, 11955U, 218U, 1126U, 
    11963U, 336U, 1244U, 12139U, 438U, 1403U, 12326U, 229U, 
    1137U, 11972U, 448U, 1413U, 12334U, 373U, 1338U, 12233U, 
    258U, 1166U, 12061U, 383U, 1348U, 12262U, 239U, 1147U, 
    12001U, 458U, 1423U, 12363U, 355U, 1320U, 12217U, 3318U, 
    3157U, 2784U, 868U, 5262U, 14572U, 14848U, 14792U, 8274U, 
    10679U, 8317U, 8327U, 11364U, 11323U, 3653U, 14479U, 3670U, 
    12721U, 12702U, 12528U, 10236U, 12607U, 10666U, 12696U, 8261U, 
    11842U, 10660U, 12685U, 12722U, 12703U, 4781U, 6240U, 7931U, 
    13977U, 4973U, 6605U, 8180U, 14312U, 9520U, 3924U, 3585U, 
    0U, 48U, 889U, 5319U, 12636U, 6U, 59U, 895U, 
    7379U, 12647U, 8689U, 12553U, 14813U, 12673U, 3645U, 6157U, 
    7859U, 13844U, 6522U, 8117U, 14229U, 6079U, 7781U, 13757U, 
    6444U, 8039U, 14151U, 7255U, 7330U, 13380U, 7292U, 8519U, 
    11682U, 7356U, 7235U, 11404U, 7269U, 7343U, 13392U, 7318U, 
    6049U, 7762U, 13727U, 6414U, 8020U, 14121U, 8530U, 11693U, 
    7366U, 7283U, 11787U, 771U, 12805U, 6836U, 12732U, 5278U, 
    8668U, 757U, 802U, 12772U, 3913U, 143U, 12708U, 8678U, 
    764U, 12778U, 4299U, 14780U, 12755U, 3404U, 3382U, 3947U, 
    9329U, 8266U, 9528U, 12529U, 10237U, 12608U, 11601U, 11384U, 
    12791U, 12799U, 13689U, 13652U, 7939U, 14383U, 13679U, 13633U, 
    7877U, 13590U, 11864U, 786U, 10284U, 1576U, 2086U, 6015U, 
    402U, 1367U, 9935U, 12296U, 10115U, 13662U, 5444U, 189U, 
    1097U, 9407U, 11940U, 10018U, 12997U, 5589U, 13102U, 5879U, 
    13440U, 6022U, 13700U, 5481U, 13034U, 6280U, 14027U, 364U, 
    8940U, 1329U, 793U, 9007U, 5551U, 13064U, 5970U, 13552U, 
    5903U, 13454U, 5505U, 13048U, 6304U, 14041U, 5565U, 13078U, 
    5839U, 13411U, 6662U, 517U, 1482U, 10358U, 12438U, 10146U, 
    14369U, 7633U, 13425U, 5352U, 10719U, 12903U, 10736U, 5788U, 
    13336U, 5984U, 13566U, 6209U, 13932U, 6585U, 14292U, 5797U, 
    13345U, 5993U, 13575U, 4574U, 5775U, 10809U, 11064U, 7599U, 
    13323U, 5344U, 12895U, 1298U, 12183U, 570U, 1535U, 10464U, 
    12481U, 10204U, 5451U, 13004U, 5406U, 12959U, 6676U, 14391U, 
    5388U, 12941U, 5832U, 13404U, 526U, 8977U, 1491U, 12445U, 
    10156U, 5422U, 12975U, 5818U, 346U, 1254U, 9689U, 12147U, 
    10094U, 13366U, 305U, 1213U, 9485U, 12108U, 10060U, 5872U, 
    13433U, 6357U, 14064U, 6382U, 14089U, 5596U, 13109U, 5886U, 
    13447U, 5488U, 13041U, 6287U, 14034U, 5558U, 13071U, 5977U, 
    13559U, 6374U, 477U, 1442U, 10275U, 12404U, 10125U, 14081U, 
    5415U, 170U, 1078U, 9348U, 11925U, 9997U, 12968U, 5911U, 
    13462U, 5513U, 13056U, 6312U, 14049U, 5573U, 13086U, 5846U, 
    13418U, 6219U, 13942U, 6595U, 14302U, 7647U, 13470U, 6059U, 
    13737U, 6424U, 14131U, 3078U, 6070U, 7772U, 13748U, 6435U, 
    8030U, 14142U, 6040U, 7753U, 13718U, 6405U, 8011U, 14112U, 
    5022U, 6654U, 8229U, 14361U, 4601U, 5825U, 7626U, 13373U, 
    4382U, 5473U, 7451U, 13026U, 4643U, 6008U, 7737U, 13597U, 
    11838U, 4828U, 11195U, 6365U, 11238U, 10824U, 11216U, 11079U, 
    11280U, 7988U, 11259U, 14072U, 11302U, 12812U, 4390U, 5581U, 
    7459U, 13094U, 9973U, 8445U, 8457U, 11774U, 9202U, 1969U, 
    14688U, 14701U, 9221U, 9980U, 3957U, 9873U, 9943U, 14413U, 
    10495U, 9637U, 5070U, 5061U, 11771U, 9194U, 1964U, 11591U, 
    9062U, 3951U, 3593U, 9867U, 9623U, 3128U, 2264U, 14531U, 
    14541U, 3061U, 3053U, 3267U, 3099U, 3965U, 993U, 9241U, 
    14418U, 9336U, 14776U, 2207U, 10581U, 5284U, 33U, 941U, 
    8756U, 879U, 3553U, 921U, 4420U, 5659U, 7489U, 13213U, 
    8541U, 5141U, 11711U, 75U, 955U, 4369U, 5460U, 7438U, 
    13013U, 14855U, 2226U, 10628U, 6850U, 1600U, 9270U, 14409U, 
    9508U, 14798U, 2213U, 10604U, 9118U, 8636U, 5283U, 3615U, 
    9669U, 3639U, 3678U, 1003U, 11409U, 11468U, 14865U, 14836U, 
    14603U, 3925U, 3586U, 87U, 971U, 8838U, 14615U, 2160U, 
    10574U, 12873U, 9279U, 2014U, 65U, 8822U, 901U, 3569U, 
    931U, 9774U, 8694U, 1926U, 9697U, 9155U, 8989U, 9711U, 
    5173U, 9831U, 11805U, 1996U, 9921U, 9815U, 5167U, 10343U, 
    14423U, 99U, 8856U, 9989U, 10407U, 14832U, 2537U, 2601U, 
    2569U, 2618U, 3147U, 2888U, 2773U, 836U, 812U, 826U, 
    2166U, 866U, 3247U, 2904U, 2654U, 2716U, 5273U, 5621U, 
    12053U, 7689U, 13512U, 12630U, 11571U, 10300U, 5006U, 6638U, 
    8213U, 14345U, 199U, 8888U, 1107U, 11459U, 9415U, 7662U, 
    13485U, 11948U, 10029U, 8578U, 11719U, 8604U, 11745U, 5373U, 
    11918U, 4710U, 6140U, 7842U, 13818U, 4902U, 6505U, 8100U, 
    14212U, 4346U, 5407U, 7415U, 12960U, 6677U, 12499U, 4789U, 
    6248U, 7949U, 13995U, 4981U, 6613U, 8188U, 14320U, 1U, 
    49U, 8780U, 890U, 150U, 1032U, 8788U, 8285U, 9108U, 
    1616U, 11499U, 9542U, 11334U, 9173U, 1944U, 11534U, 9732U, 
    5360U, 11911U, 4692U, 6122U, 7824U, 13800U, 4884U, 6487U, 
    8082U, 14194U, 4329U, 5389U, 7398U, 12942U, 5833U, 12201U, 
    4719U, 6149U, 7851U, 13836U, 4911U, 6514U, 8109U, 14221U, 
    850U, 2191U, 5320U, 4297U, 12637U, 4659U, 6089U, 7791U, 
    13767U, 4851U, 6454U, 8049U, 14161U, 9080U, 9765U, 12823U, 
    267U, 8900U, 1175U, 8360U, 1752U, 9583U, 12068U, 10050U, 
    1052U, 8338U, 1645U, 11889U, 314U, 8912U, 1222U, 8386U, 
    1782U, 9593U, 12115U, 10070U, 487U, 8965U, 1452U, 8419U, 
    1896U, 9603U, 12412U, 10136U, 1065U, 8349U, 1658U, 11900U, 
    325U, 8926U, 1233U, 8395U, 1793U, 9613U, 12124U, 10082U, 
    4310U, 5613U, 12045U, 7679U, 13502U, 12618U, 11561U, 10291U, 
    4998U, 6630U, 8205U, 14337U, 180U, 8875U, 1088U, 11450U, 
    9356U, 7653U, 13476U, 11933U, 10008U, 7U, 60U, 8814U, 
    896U, 160U, 1042U, 8797U, 8307U, 1638U, 11525U, 9550U, 
    11391U, 11345U, 1951U, 11543U, 9740U, 17U, 111U, 911U, 
    22U, 116U, 916U, 7380U, 12648U, 8690U, 8616U, 11757U, 
    8475U, 11638U, 7066U, 13669U, 7116U, 13871U, 7699U, 13522U, 
    7304U, 7244U, 12554U, 11581U, 11552U, 10267U, 14814U, 10619U, 
    12668U, 5030U, 6669U, 8237U, 14376U, 9690U, 6984U, 7671U, 
    13494U, 3646U, 7087U, 3113U, 3240U, 2427U, 2246U, 3338U, 
    3471U, 3370U, 3523U, 4354U, 5430U, 7423U, 12983U, 4361U, 
    5437U, 7430U, 12990U, 198U, 8887U, 1106U, 11947U, 10028U, 
    179U, 8874U, 1087U, 11932U, 10007U, 11400U, 11779U, 1976U, 
    4503U, 9881U, 12837U, 10885U, 10969U, 11140U, 9232U, 3308U, 
    3349U, 11780U, 9213U, 1977U, 4504U, 9882U, 12838U, 10886U, 
    10970U, 11141U, 14594U, 2147U, 10559U, 3448U, 6974U, 6754U, 
    9460U, 5014U, 6646U, 8221U, 14353U, 4374U, 5465U, 7443U, 
    13018U, 4821U, 6350U, 7981U, 14057U, 6942U, 4042U, 11405U, 
    8504U, 3866U, 11667U, 3897U, 8591U, 11732U, 8490U, 3851U, 
    11653U, 3882U, 6886U, 13145U, 6861U, 13174U, 6874U, 13130U, 
    13157U, 6788U, 9477U, 3631U, 5291U, 4099U, 4001U, 4214U, 
    7007U, 6902U, 7167U, 12879U, 8726U, 12911U, 8742U, 13952U, 
    12547U, 14807U, 12726U, 12749U, 14551U, 2116U, 5267U, 12624U, 
    8279U, 1610U, 11328U, 1938U, 4304U, 12612U, 8290U, 1623U, 
    11508U, 12559U, 14820U, 6936U, 4036U, 14675U, 2176U, 12738U, 
    284U, 1192U, 8367U, 1761U, 12081U, 496U, 1461U, 8426U, 
    1905U, 12419U, 421U, 1386U, 8404U, 1879U, 12311U, 12761U, 
    4283U, 11438U, 11799U, 1988U, 9912U, 7217U, 4265U, 6958U, 
    4058U, 6358U, 12397U, 11788U, 12806U, 10398U, 9895U, 1275U, 
    12164U, 547U, 1512U, 10443U, 12462U, 10179U, 3068U, 2444U, 
    3918U, 2256U, 4754U, 6193U, 7904U, 13916U, 4957U, 6569U, 
    8164U, 14276U, 4294U, 9054U, 998U, 9342U, 5186U, 5258U, 
    3608U, 9383U, 3602U, 5341U, 11373U, 9183U, 9748U, 3661U, 
    38U, 948U, 8764U, 884U, 3561U, 926U, 12733U, 10366U, 
    8545U, 11715U, 81U, 963U, 3943U, 987U, 9322U, 6846U, 
    1594U, 9501U, 14498U, 2047U, 6703U, 12514U, 14472U, 2038U, 
    6688U, 12505U, 5769U, 12133U, 11625U, 14588U, 7376U, 9090U, 
    1605U, 4399U, 7468U, 13117U, 11339U, 12784U, 7208U, 4256U, 
    7156U, 13985U, 6950U, 4050U, 7077U, 13827U, 7199U, 4247U, 
    7055U, 4148U, 13642U, 6853U, 3968U, 7023U, 4116U, 13604U, 
    7226U, 4274U, 6966U, 4066U, 9514U, 4419U, 5658U, 7488U, 
    13212U, 4368U, 5459U, 7437U, 13012U, 8669U, 9137U, 803U, 
    2107U, 4449U, 5673U, 7503U, 13227U, 12773U, 10382U, 4581U, 
    5782U, 7606U, 9675U, 13330U, 12539U, 2008U, 10253U, 14598U, 
    2153U, 10566U, 14883U, 2238U, 10641U, 14802U, 2219U, 10611U, 
    6746U, 14583U, 10769U, 10915U, 10999U, 11024U, 11170U, 4526U, 
    5736U, 7566U, 13290U, 4806U, 6265U, 7966U, 14012U, 3914U, 
    4412U, 5651U, 7481U, 13205U, 4479U, 5703U, 7533U, 13257U, 
    4614U, 5949U, 7708U, 13531U, 12709U, 10350U, 4315U, 5367U, 
    7384U, 9315U, 12927U, 8679U, 9146U, 4456U, 5680U, 7510U, 
    13234U, 4495U, 5719U, 7549U, 13273U, 4628U, 5963U, 7722U, 
    13545U, 12779U, 10390U, 4587U, 5804U, 7612U, 9682U, 13352U, 
    11398U, 9782U, 3690U, 1014U, 11423U, 11483U, 4837U, 6391U, 
    7997U, 14098U, 4300U, 6918U, 7033U, 13613U, 13189U, 6991U, 
    7096U, 13853U, 4946U, 6558U, 8153U, 14265U, 4770U, 6229U, 
    7920U, 13966U, 4736U, 6175U, 7886U, 13898U, 4928U, 6540U, 
    8135U, 14247U, 9250U, 4018U, 4126U, 7183U, 4231U, 7136U, 
    4169U, 4543U, 5753U, 7583U, 13307U, 4999U, 6631U, 8206U, 
    14338U, 9349U, 14781U, 10588U, 93U, 979U, 8847U, 12876U, 
    9287U, 2019U, 70U, 8830U, 906U, 3577U, 936U, 8698U, 
    1932U, 9704U, 9164U, 8998U, 9718U, 9838U, 11809U, 2002U, 
    9928U, 9823U, 105U, 8865U, 10413U, 5124U, 8255U, 9364U, 
    8639U, 9664U, 10782U, 10928U, 11012U, 11037U, 11183U, 3092U, 
    2455U, 2553U, 3259U, 3275U, 14523U, 14515U, 14737U, 14633U, 
    14763U, 14661U, 14904U, 14933U, 14724U, 14619U, 14750U, 14647U, 
    14889U, 14919U, 2585U, 2523U, 3414U, 3283U, 3328U, 2742U, 
    3169U, 2797U, 2757U, 3181U, 2824U, 3295U, 3359U, 3510U, 
    2437U, 3393U, 2530U, 3425U, 3484U, 2670U, 2729U, 8630U, 
    11813U, 11826U, 11629U, 8312U, 9558U, 9852U, 6725U, 8264U, 
    12653U, 10317U, 9526U, 12642U, 10309U, 9430U, 11379U, 9757U, 
    11633U, 9859U, 8332U, 9574U, 11793U, 9903U, 12543U, 8322U, 
    10326U, 9566U, 12691U, 10335U, 10260U, 6750U, 8269U, 9534U, 
    9453U, 11359U, 1263U, 12154U, 535U, 1500U, 10432U, 12452U, 
    10166U, 12659U, 12756U, 10374U, 12666U, 12U, 12679U, 4398U, 
    5629U, 7467U, 13116U, 12534U, 10245U, 11444U, 6841U, 9493U, 
    11783U, 9212U, 1982U, 4510U, 9888U, 12843U, 10900U, 10984U, 
    11155U, 14593U, 2146U, 10558U, 3459U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1773);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1773);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget10_mm = 5,
  brtarget21 = 6,
  brtarget26 = 7,
  brtarget7_mm = 8,
  brtarget_mm = 9,
  calloffset16 = 10,
  calltarget = 11,
  calltarget_mm = 12,
  condcode = 13,
  cpinst_operand = 14,
  f32imm = 15,
  f64imm = 16,
  i16imm = 17,
  i1imm = 18,
  i32imm = 19,
  i64imm = 20,
  i8imm = 21,
  imm32 = 22,
  imm64 = 23,
  jmpoffset16 = 24,
  jmptarget = 25,
  jmptarget_mm = 26,
  li_simm7 = 27,
  mem = 28,
  mem16 = 29,
  mem16_ea = 30,
  mem_ea = 31,
  mem_mm_12 = 32,
  mem_mm_4 = 33,
  mem_mm_4_lsl1 = 34,
  mem_mm_4_lsl2 = 35,
  mem_mm_4sp = 36,
  mem_mm_gp_imm7_lsl2 = 37,
  mem_mm_sp_imm5_lsl2 = 38,
  mem_msa = 39,
  mem_simm11 = 40,
  mem_simm16 = 41,
  mem_simm9 = 42,
  movep_regpair = 43,
  pcrel16 = 44,
  reglist = 45,
  reglist16 = 46,
  regpair = 47,
  simm10 = 48,
  simm10_64 = 49,
  simm11 = 50,
  simm12 = 51,
  simm16 = 52,
  simm16_64 = 53,
  simm18_lsl3 = 54,
  simm19_lsl2 = 55,
  simm20 = 56,
  simm23_lsl2 = 57,
  simm3_lsa2 = 58,
  simm4 = 59,
  simm5 = 60,
  simm7 = 61,
  simm9 = 62,
  simm9_addiusp = 63,
  size_ext = 64,
  size_ins = 65,
  uimm10 = 66,
  uimm16 = 67,
  uimm16_64 = 68,
  uimm2 = 69,
  uimm20 = 70,
  uimm3 = 71,
  uimm3_shift = 72,
  uimm4 = 73,
  uimm4_andi = 74,
  uimm5 = 75,
  uimm5_64 = 76,
  uimm5_lsl2 = 77,
  uimm6 = 78,
  uimm6_lsl2 = 79,
  uimm8 = 80,
  uimmz = 81,
  vsplat_simm10 = 82,
  vsplat_simm5 = 83,
  vsplat_uimm1 = 84,
  vsplat_uimm2 = 85,
  vsplat_uimm3 = 86,
  vsplat_uimm4 = 87,
  vsplat_uimm5 = 88,
  vsplat_uimm6 = 89,
  vsplat_uimm8 = 90,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CACHE, Mips::CACHE, Mips::CACHE_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EHB, Mips::EHB, Mips::EHB_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JALX, Mips::JALX, Mips::JALX_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MM },
  { Mips::PREF, Mips::PREF, Mips::PREF_MM },
  { Mips::RDHWR, Mips::RDHWR, Mips::RDHWR_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDBBP, Mips::SDBBP, Mips::SDBBP_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYNCI, Mips::SYNCI, (uint16_t)-1U },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 178;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

