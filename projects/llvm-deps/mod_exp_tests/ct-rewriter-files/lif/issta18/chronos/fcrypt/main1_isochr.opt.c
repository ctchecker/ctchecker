/* Provide Declarations */
#include <stdint.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#ifdef _MSC_VER
#define __MSALIGN__(X) __declspec(align(X))
#else
#define __MSALIGN__(X)
#endif



/* Global Declarations */

/* Types Declarations */
struct l_array_16_uint32_t;
struct l_struct_struct_OC_fcrypt_ctx;
struct l_array_32_uint8_t;
struct l_array_4_uint8_t;
struct l_array_256_uint32_t;
struct l_array_64_uint8_t;

/* Function definitions */
typedef uint32_t l_fptr_7(uint32_t);

typedef uint32_t l_fptr_6(uint8_t*, uint64_t, struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint32_t);

typedef void l_fptr_3(uint8_t*, uint8_t, uint64_t, bool);

typedef void l_fptr_2(uint8_t*, uint8_t*, uint64_t, bool);

typedef uint32_t l_fptr_4(uint8_t*, ...);

typedef uint8_t* l_fptr_9(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_5(struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint8_t*, uint64_t, uint8_t*, uint64_t);

typedef uint32_t l_fptr_1(void);

typedef uint8_t* l_fptr_8(uint8_t*, uint8_t*, uint64_t);


/* Types Definitions */
struct l_array_16_uint32_t {
  uint32_t array[16];
};
struct l_struct_struct_OC_fcrypt_ctx {
  struct l_array_16_uint32_t field0;
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_4_uint8_t {
  uint8_t array[4];
};
struct l_array_256_uint32_t {
  uint32_t array[256];
};
struct l_array_64_uint8_t {
  uint8_t array[64];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(uint8_t*, ...) __ATTRIBUTELIST__((nothrow));
void fcrypt_encrypt(struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint8_t*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
void fcrypt_decrypt(struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint8_t*, uint64_t, uint8_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t fcrypt_setkey(uint8_t*, uint64_t, struct l_struct_struct_OC_fcrypt_ctx*, uint64_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t putchar(uint32_t) __ATTRIBUTELIST__((nothrow));
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static const __MSALIGN__(16) struct l_array_32_uint8_t __const_OC_main_OC_in_key __attribute__((aligned(16))) = { "\xE4\x9F\xEDW\xC6%\xC6\xBF\xCAM7AR\x1C\xEFl\xFA#8\x1Ao\xF4m,\xF8\x02\x00=\xAExu\xA6" };
static const struct l_array_4_uint8_t _OC_str = { "%d " };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox0 __attribute__((aligned(64))) = { { 1872, 1016, 1424, 800, 1256, 1408, 1736, 136, 1640, 1072, 1072, 1160, 80, 1424, 1176, 48, 112, 48, 1680, 808, 920, 1576, 320, 768, 1936, 256, 1448, 448, 1008, 1744, 1272, 1816, 1680, 1656, 1568, 480, 776, 2040, 592, 592, 424, 1376, 1360, 760, 344, 1496, 1504, 664, 624, 1256, 960, 1304, 1760, 72, 400, 128, 1584, 888, 816, 1712, 1368, 1352, 1400, 2024, 472, 1192, 1856, 416, 1232, 1032, 912, 1024, 1248, 1944, 1888, 1744, 1272, 304, 944, 168, 496, 680, 616, 1776, 1056, 1904, 1384, 1592, 1928, 856, 488, 1688, 32, 584, 1360, 288, 88, 1104, 1048, 1488, 2000, 1064, 1280, 1344, 1416, 1696, 8, 1728, 896, 800, 1920, 648, 1680, 1560, 1336, 936, 1120, 1320, 800, 1912, 128, 624, 1464, 1584, 776, 24, 1880, 544, 488, 1832, 1432, 728, 112, 1704, 1384, 232, 2000, 720, 240, 408, 1368, 1176, 1296, 1464, 1848, 1344, 552, 1312, 1640, 328, 792, 544, 1456, 840, 1008, 368, 784, 24, 1600, 1792, 184, 1496, 1592, 1944, 504, 432, 1488, 904, 1136, 1208, 808, 768, 840, 1456, 1968, 1840, 880, 1792, 1032, 712, 1856, 1400, 1768, 1192, 272, 1224, 2024, 792, 200, 928, 776, 1416, 1456, 728, 1392, 672, 1432, 896, 2040, 1584, 472, 496, 1544, 1720, 1800, 112, 944, 1832, 432, 632, 712, 1592, 64, 880, 1040, 1328, 1176, 1568, 1360, 304, 584, 1792, 264, 800, 56, 1272, 800, 1032, 1248, 1528, 1992, 1672, 536, 1984, 1456, 1480, 1928, 288, 936, 24, 1824, 1408, 1224, 560, 488, 1960, 1672, 456, 912, 144, 1968, 1488, 96, 104, 528, 368 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox1 __attribute__((aligned(64))) = { { 3087007747u, 2684354560u, 805306373, -268435449, 2415919109u, -268435454, 1610612740u, -268435455, 939524099, 1610612739u, 134217733, 1744830464u, 268435462, 268435461, 134217734, 671088644, 1610612739u, -671088637, 939524099, 805306374, 402653185, 402653191, 2415919111u, 1207959556u, 2147483650u, -536870908, 402653184, 3087007749u, 2550136835u, 805306375, 134217735, -939524095, 2281701377u, 1610612737u, 939524097, -134217724, 671088645, 1207959555u, 536870914, 2952790022u, 402653185, 402653188, -1073741820, -402653181, -536870911, 2684354565u, 1744830465u, -939524092, -536870912, -134217728, 1610612740u, 1, 402653184, -536870909, -134217726, 1744830469u, 2684354567u, -805306361, 2818572292u, 1342177286u, 2952790019u, 536870914, 1744830470u, 2952790021u, -1073741819, 134217733, 134217733, -268435451, -268435452, 2684354562u, 2013265924u, 1476395008u, 2952790016u, 2684354563u, 2281701377u, 1342177284u, 402653185, 3087007744u, 536870912, -805306361, -939524093, 536870916, 2281701381u, 2818572295u, 2550136832u, 1476395013u, 2818572293u, 1879048193u, 1342177285u, 1610612736u, 3, 1476395011u, -671088638, 536870918, 1476395010u, -536870907, 268435463, 2013265925u, 671088642, 2550136835u, -805306361, 1207959558u, 1207959554u, 1744830470u, 0, 2415919108u, -402653181, 3087007748u, -805306365, -1073741824, 3, -402653183, 2013265926u, -671088638, -268435450, 805306374, 268435463, 805306375, -671088635, 1476395012u, 805306368, -805306362, 1073741824u, 2818572288u, -671088640, 1073741828u, 1342177283u, 3087007744u, 1207959556u, 2147483654u, 1207959557u, 134217734, 1207959558u, 2147483651u, 1476395011u, 671088647, 402653186, 2684354567u, 1073741827u, 1073741830u, 2550136838u, 536870916, 1073741825u, 1342177280u, 2415919106u, 805306371, 402653189, 1342177286u, 2415919111u, 402653191, -134217725, -805306365, 2281701377u, 3087007751u, 1073741828u, 2684354564u, -268435454, -536870908, 402653187, 2818572294u, 536870913, 805306371, -536870905, 2550136837u, 3087007746u, 671088641, -268435451, 1207959556u, 536870914, 536870918, 7, 2013265924u, 402653185, -536870911, 2415919104u, 2415919106u, 2818572295u, -268435456, 2684354567u, 1476395014u, -1073741824, 2550136833u, -134217728, -1073741817, 1207959555u, 2147483648u, -402653180, 2550136838u, 3087007751u, 1073741825u, -1073741817, 2147483649u, 671088640, -268435454, 2415919105u, 6, 2818572294u, -939524096, -402653179, 671088642, 1476395012u, -671088638, -402653177, -536870907, 268435463, -536870910, 1207959557u, 2952790020u, 2013265927u, 2147483651u, 2013265926u, 268435462, 1342177281u, 2550136837u, 134217731, 1744830469u, 4, 1073741826u, 134217732, 3087007749u, -402653184, 402653186, -939524090, 3087007750u, 671088642, 2147483655u, -1073741818, 1342177284u, -939524094, -536870909, 3087007746u, 134217734, -939524093, 939524102, 2684354561u, 2952790022u, 402653186, -134217722, 536870919, -1073741821, 2952790016u, 805306368, -805306362, 2415919108u, 2952790019u, 2281701378u, 134217735, 2684354566u, 2147483651u, 402653184, 7, 2013265921u, 2952790020u, 2281701380u, 268435460, 4 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox2 __attribute__((aligned(64))) = { { 491520, 112640, 73728, 169984, 86016, 6144, 268288, 274432, 428032, 483328, 163840, 491520, 135168, 245760, 96256, 223232, 391168, 262144, 276480, 79872, 305152, 462848, 403456, 190464, 509952, 227328, 448512, 368640, 206848, 225280, 473088, 73728, 409600, 53248, 382976, 149504, 370688, 20480, 256000, 378880, 475136, 450560, 374784, 444416, 141312, 65536, 55296, 421888, 182272, 321536, 219136, 387072, 28672, 292864, 333824, 346112, 385024, 237568, 339968, 503808, 260096, 194560, 362496, 212992, 270336, 385024, 346112, 518144, 174080, 163840, 477184, 372736, 38912, 192512, 14336, 376832, 305152, 4096, 393216, 425984, 217088, 53248, 272384, 387072, 372736, 518144, 520192, 47104, 129024, 18432, 333824, 288768, 514048, 485376, 446464, 59392, 223232, 57344, 221184, 2048, 184320, 468992, 231424, 126976, 284672, 219136, 389120, 83968, 481280, 36864, 51200, 106496, 419840, 366592, 387072, 108544, 479232, 153600, 436224, 356352, 86016, 247808, 184320, 337920, 102400, 36864, 251904, 450560, 90112, 425984, 69632, 153600, 362496, 272384, 182272, 262144, 393216, 98304, 325632, 235520, 432128, 40960, 147456, 131072, 14336, 92160, 292864, 262144, 30720, 421888, 22528, 192512, 374784, 192512, 352256, 73728, 303104, 151552, 49152, 43008, 10240, 475136, 4096, 243712, 346112, 407552, 131072, 141312, 280576, 428032, 479232, 454656, 24576, 247808, 86016, 313344, 221184, 126976, 305152, 452608, 286720, 256000, 354304, 227328, 450560, 522240, 518144, 200704, 145408, 366592, 67584, 282624, 483328, 290816, 51200, 49152, 368640, 225280, 124928, 518144, 237568, 172032, 61440, 8192, 272384, 442368, 385024, 63488, 176128, 473088, 118784, 176128, 210944, 438272, 409600, 337920, 497664, 290816, 454656, 356352, 112640, 149504, 374784, 512000, 409600, 499712, 63488, 458752, 86016, 317440, 43008, 428032, 106496, 28672, 370688, 458752, 139264, 245760, 270336, 182272, 176128, 212992, 243712, 337920, 40960, 12288, 501760, 96256, 286720, 282624, 235520, 262144, 241664, 368640, 32768, 274432 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t sbox3 __attribute__((aligned(64))) = { { 88604672, 22020096, 37748736, 42467328, 69206016, 66060288, 38273024, 118489088, 94896128, 95944704, 34603008, 26738688, 65536000, 48758784, 87031808, 9437184, 35651584, 37748736, 57147392, 20971520, 89128960, 16777216, 57147392, 45613056, 112197632, 56098816, 48758784, 59768832, 125829120, 76546048, 47185920, 14155776, 43515904, 67108864, 18874368, 58720256, 80740352, 106954752, 87556096, 53477376, 84410368, 524288, 86507520, 34078720, 79167488, 34078720, 25690112, 68157440, 126353408, 10485760, 108527616, 43515904, 6815744, 83886080, 8388608, 106954752, 22020096, 65536000, 110100480, 100139008, 39321600, 13631488, 114819072, 11534336, 37224448, 128974848, 42467328, 28311552, 124256256, 127401984, 96993280, 13631488, 87556096, 116916224, 21495808, 35127296, 524288, 44040192, 58720256, 85983232, 100139008, 111149056, 5767168, 43515904, 35651584, 50331648, 82837504, 18350080, 84410368, 12582912, 54525952, 41418752, 125829120, 24641536, 68157440, 101711872, 22020096, 34078720, 93323264, 34603008, 6291456, 124256256, 6291456, 15204352, 9961472, 30408704, 31457280, 57671680, 27787264, 115343360, 50331648, 52953088, 69730304, 122159104, 52428800, 1048576, 80740352, 33030144, 83361792, 70778880, 78643200, 116916224, 99614720, 126877696, 106430464, 120061952, 56623104, 111149056, 47185920, 68681728, 100139008, 76546048, 14155776, 77594624, 0, 34603008, 108527616, 39321600, 0, 61341696, 97517568, 74973184, 61865984, 49807360, 48758784, 30408704, 40370176, 4718592, 9437184, 4194304, 29360128, 78118912, 12058624, 119537664, 524288, 15204352, 39845888, 88604672, 106954752, 69730304, 68157440, 39845888, 82313216, 24641536, 30932992, 53477376, 84410368, 27262976, 8388608, 107479040, 46661632, 71827456, 86507520, 25690112, 108527616, 2621440, 104857600, 69206016, 131072000, 104333312, 97517568, 40894464, 72876032, 13631488, 13107200, 126353408, 84410368, 30932992, 12582912, 9437184, 12058624, 92274688, 79691776, 73924608, 5767168, 18350080, 102236160, 30408704, 23592960, 16777216, 116916224, 9961472, 83886080, 88080384, 39845888, 6815744, 56623104, 24641536, 37224448, 9961472, 9961472, 42991616, 16252928, 23592960, 128450560, 63438848, 31981568, 84934656, 44040192, 99090432, 55050240, 104857600, 56098816, 127401984, 2621440, 20971520, 126353408, 11534336, 36700160, 33554432, 92274688, 8912896, 110624768, 95944704, 78118912, 38273024, 108527616, 102236160, 15204352, 74973184, 113246208, 117964800, 60293120, 114819072, 90701824, 104857600, 105381888, 88604672, 84410368, 101711872, 103284736, 119013376, 97517568, 132120576, 7340032, 19398656 } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint8_t llvm_lshr_u8(uint8_t a, uint8_t b) {
  uint8_t r = a >> b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

int main(void) {
  __MSALIGN__(16) struct l_array_32_uint8_t _1 __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_64_uint8_t _2 __attribute__((aligned(16)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_64_uint8_t _3 __attribute__((aligned(16)));    /* Address-exposed local */
  struct l_struct_struct_OC_fcrypt_ctx _4;    /* Address-exposed local */
  uint8_t* _5;
  uint8_t* _6;
  uint8_t* _7;
  uint8_t* _8;
  uint8_t* _9;
  uint8_t* _10;
  uint32_t _11;
  uint64_t llvm_cbe__2e_03;
  uint64_t llvm_cbe__2e_03__PHI_TEMPORARY;
  uint8_t _12;
  uint32_t _13;
  uint64_t _14;
  uint32_t llvm_cbe_putchar;

  _5 = (&_1.array[((int64_t)0)]);
  _6 = memcpy(_5, ((&__const_OC_main_OC_in_key.array[((int64_t)0)])), 32);
  _7 = (&_2.array[((int64_t)0)]);
  _8 = memset(_7, 0, 64);
  _9 = (&_3.array[((int64_t)0)]);
  _10 = memset(_9, 0, 64);
  _11 = fcrypt_setkey(_5, /*UNDEF*/0, (&_4), /*UNDEF*/0, /*UNDEF*/0);
  fcrypt_encrypt((&_4), /*UNDEF*/0, _9, /*UNDEF*/0, _7, /*UNDEF*/0);
  llvm_cbe__2e_03__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _15;

  do {     /* Syntactic loop '' to make GCC happy */
_15:
  llvm_cbe__2e_03 = llvm_cbe__2e_03__PHI_TEMPORARY;
  _12 = *((&_3.array[((int64_t)llvm_cbe__2e_03)]));
  _13 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_12)));
  _14 = llvm_add_u64(llvm_cbe__2e_03, 1);
  if ((((_14 == UINT64_C(32))&1))) {
    goto _16;
  } else {
    llvm_cbe__2e_03__PHI_TEMPORARY = _14;   /* for PHI node */
    goto _15;
  }

  } while (1); /* end of syntactic loop '' */
_16:
  llvm_cbe_putchar = putchar(10);
  return 0;
}


void fcrypt_encrypt(struct l_struct_struct_OC_fcrypt_ctx* _17, uint64_t llvm_cbe_N, uint8_t* _18, uint64_t llvm_cbe_N1, uint8_t* _19, uint64_t llvm_cbe_N2) {
  uint32_t _20;
  uint32_t _21;
  uint32_t _22;
  uint32_t _23;
  uint32_t _24;
  uint32_t _25;
  uint32_t _26;
  uint32_t _27;
  uint32_t _28;
  uint32_t _29;
  uint32_t _30;
  uint32_t _31;
  uint32_t _32;
  uint32_t _33;
  uint32_t _34;
  uint32_t _35;
  uint32_t _36;
  uint32_t _37;
  uint32_t _38;
  uint32_t _39;
  uint32_t _40;
  uint32_t _41;
  uint32_t _42;
  uint32_t _43;
  uint32_t _44;
  uint32_t _45;
  uint32_t _46;
  uint32_t _47;
  uint32_t _48;
  uint32_t _49;
  uint32_t _50;
  uint32_t _51;
  uint32_t _52;
  uint32_t _53;
  uint32_t _54;
  uint32_t _55;
  uint32_t _56;
  uint32_t _57;
  uint32_t _58;
  uint32_t _59;
  uint32_t _60;
  uint32_t _61;
  uint32_t _62;
  uint32_t _63;
  uint32_t _64;
  uint32_t _65;
  uint32_t _66;
  uint32_t _67;
  uint32_t _68;
  uint32_t _69;
  uint32_t _70;
  uint32_t _71;
  uint32_t _72;
  uint32_t _73;
  uint32_t _74;
  uint32_t _75;
  uint32_t _76;
  uint32_t _77;
  uint32_t _78;
  uint32_t _79;
  uint32_t _80;
  uint32_t _81;
  uint32_t _82;
  uint32_t _83;
  uint32_t _84;
  uint32_t _85;
  uint32_t _86;
  uint32_t _87;
  uint32_t _88;
  uint32_t _89;
  uint32_t _90;
  uint32_t _91;
  uint32_t _92;
  uint32_t _93;
  uint32_t _94;
  uint32_t _95;
  uint32_t _96;
  uint32_t _97;
  uint32_t _98;
  uint32_t _99;
  uint32_t _100;
  uint32_t _101;
  uint32_t _102;
  uint32_t _103;
  uint32_t _104;
  uint32_t _105;
  uint32_t _106;
  uint32_t _107;
  uint32_t _108;
  uint32_t _109;
  uint32_t _110;
  uint32_t _111;
  uint32_t _112;
  uint32_t _113;
  uint32_t _114;
  uint32_t _115;
  uint32_t _116;
  uint32_t _117;
  uint32_t _118;
  uint32_t _119;
  uint32_t _120;
  uint32_t _121;
  uint32_t _122;
  uint32_t _123;
  uint32_t _124;
  uint32_t _125;
  uint32_t _126;
  uint32_t _127;
  uint32_t _128;
  uint32_t _129;
  uint32_t _130;
  uint32_t _131;
  uint32_t _132;

  _20 = *(((uint32_t*)_19));
  _21 = *(((uint32_t*)((&_19[((int64_t)4)]))));
  _22 = *((&_17->field0.array[((int64_t)0)]));
  _23 = _22 ^ _21;
  _24 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_23 & 255))))]));
  _25 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 8)) & 255))))]));
  _26 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_23, 16)) & 255))))]));
  _27 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_23, 24)))))]));
  _28 = (((_24 ^ _20) ^ _25) ^ _26) ^ _27;
  _29 = *((&_17->field0.array[((int64_t)1)]));
  _30 = _28 ^ _29;
  _31 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_30 & 255))))]));
  _32 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_30, 8)) & 255))))]));
  _33 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_30, 16)) & 255))))]));
  _34 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_30, 24)))))]));
  _35 = (((_31 ^ _21) ^ _32) ^ _33) ^ _34;
  _36 = *((&_17->field0.array[((int64_t)2)]));
  _37 = _35 ^ _36;
  _38 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_37 & 255))))]));
  _39 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_37, 8)) & 255))))]));
  _40 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_37, 16)) & 255))))]));
  _41 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_37, 24)))))]));
  _42 = (((_38 ^ _28) ^ _39) ^ _40) ^ _41;
  _43 = *((&_17->field0.array[((int64_t)3)]));
  _44 = _42 ^ _43;
  _45 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_44 & 255))))]));
  _46 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_44, 8)) & 255))))]));
  _47 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_44, 16)) & 255))))]));
  _48 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_44, 24)))))]));
  _49 = (((_45 ^ _35) ^ _46) ^ _47) ^ _48;
  _50 = *((&_17->field0.array[((int64_t)4)]));
  _51 = _49 ^ _50;
  _52 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_51 & 255))))]));
  _53 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_51, 8)) & 255))))]));
  _54 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_51, 16)) & 255))))]));
  _55 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_51, 24)))))]));
  _56 = (((_52 ^ _42) ^ _53) ^ _54) ^ _55;
  _57 = *((&_17->field0.array[((int64_t)5)]));
  _58 = _56 ^ _57;
  _59 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_58 & 255))))]));
  _60 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_58, 8)) & 255))))]));
  _61 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_58, 16)) & 255))))]));
  _62 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_58, 24)))))]));
  _63 = (((_59 ^ _49) ^ _60) ^ _61) ^ _62;
  _64 = *((&_17->field0.array[((int64_t)6)]));
  _65 = _63 ^ _64;
  _66 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_65 & 255))))]));
  _67 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_65, 8)) & 255))))]));
  _68 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_65, 16)) & 255))))]));
  _69 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_65, 24)))))]));
  _70 = (((_66 ^ _56) ^ _67) ^ _68) ^ _69;
  _71 = *((&_17->field0.array[((int64_t)7)]));
  _72 = _70 ^ _71;
  _73 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_72 & 255))))]));
  _74 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_72, 8)) & 255))))]));
  _75 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_72, 16)) & 255))))]));
  _76 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_72, 24)))))]));
  _77 = (((_73 ^ _63) ^ _74) ^ _75) ^ _76;
  _78 = *((&_17->field0.array[((int64_t)8)]));
  _79 = _77 ^ _78;
  _80 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_79 & 255))))]));
  _81 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_79, 8)) & 255))))]));
  _82 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_79, 16)) & 255))))]));
  _83 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_79, 24)))))]));
  _84 = (((_80 ^ _70) ^ _81) ^ _82) ^ _83;
  _85 = *((&_17->field0.array[((int64_t)9)]));
  _86 = _84 ^ _85;
  _87 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_86 & 255))))]));
  _88 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_86, 8)) & 255))))]));
  _89 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_86, 16)) & 255))))]));
  _90 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_86, 24)))))]));
  _91 = (((_87 ^ _77) ^ _88) ^ _89) ^ _90;
  _92 = *((&_17->field0.array[((int64_t)10)]));
  _93 = _91 ^ _92;
  _94 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_93 & 255))))]));
  _95 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_93, 8)) & 255))))]));
  _96 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_93, 16)) & 255))))]));
  _97 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_93, 24)))))]));
  _98 = (((_94 ^ _84) ^ _95) ^ _96) ^ _97;
  _99 = *((&_17->field0.array[((int64_t)11)]));
  _100 = _98 ^ _99;
  _101 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_100 & 255))))]));
  _102 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_100, 8)) & 255))))]));
  _103 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_100, 16)) & 255))))]));
  _104 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_100, 24)))))]));
  _105 = (((_101 ^ _91) ^ _102) ^ _103) ^ _104;
  _106 = *((&_17->field0.array[((int64_t)12)]));
  _107 = _105 ^ _106;
  _108 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_107 & 255))))]));
  _109 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_107, 8)) & 255))))]));
  _110 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_107, 16)) & 255))))]));
  _111 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_107, 24)))))]));
  _112 = (((_108 ^ _98) ^ _109) ^ _110) ^ _111;
  _113 = *((&_17->field0.array[((int64_t)13)]));
  _114 = _112 ^ _113;
  _115 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_114 & 255))))]));
  _116 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_114, 8)) & 255))))]));
  _117 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_114, 16)) & 255))))]));
  _118 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_114, 24)))))]));
  _119 = (((_115 ^ _105) ^ _116) ^ _117) ^ _118;
  _120 = *((&_17->field0.array[((int64_t)14)]));
  _121 = _119 ^ _120;
  _122 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_121 & 255))))]));
  _123 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_121, 8)) & 255))))]));
  _124 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_121, 16)) & 255))))]));
  _125 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_121, 24)))))]));
  _126 = (((_122 ^ _112) ^ _123) ^ _124) ^ _125;
  _127 = *((&_17->field0.array[((int64_t)15)]));
  _128 = _126 ^ _127;
  _129 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_128 & 255))))]));
  _130 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_128, 8)) & 255))))]));
  _131 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_128, 16)) & 255))))]));
  _132 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_128, 24)))))]));
  *(((uint32_t*)_18)) = _126;
  *(((uint32_t*)((&_18[((int64_t)4)])))) = ((((_129 ^ _119) ^ _130) ^ _131) ^ _132);
}


void fcrypt_decrypt(struct l_struct_struct_OC_fcrypt_ctx* _133, uint64_t llvm_cbe_N, uint8_t* _134, uint64_t llvm_cbe_N1, uint8_t* _135, uint64_t llvm_cbe_N2) {
  uint32_t _136;
  uint32_t _137;
  uint32_t _138;
  uint32_t _139;
  uint32_t _140;
  uint32_t _141;
  uint32_t _142;
  uint32_t _143;
  uint32_t _144;
  uint32_t _145;
  uint32_t _146;
  uint32_t _147;
  uint32_t _148;
  uint32_t _149;
  uint32_t _150;
  uint32_t _151;
  uint32_t _152;
  uint32_t _153;
  uint32_t _154;
  uint32_t _155;
  uint32_t _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t _159;
  uint32_t _160;
  uint32_t _161;
  uint32_t _162;
  uint32_t _163;
  uint32_t _164;
  uint32_t _165;
  uint32_t _166;
  uint32_t _167;
  uint32_t _168;
  uint32_t _169;
  uint32_t _170;
  uint32_t _171;
  uint32_t _172;
  uint32_t _173;
  uint32_t _174;
  uint32_t _175;
  uint32_t _176;
  uint32_t _177;
  uint32_t _178;
  uint32_t _179;
  uint32_t _180;
  uint32_t _181;
  uint32_t _182;
  uint32_t _183;
  uint32_t _184;
  uint32_t _185;
  uint32_t _186;
  uint32_t _187;
  uint32_t _188;
  uint32_t _189;
  uint32_t _190;
  uint32_t _191;
  uint32_t _192;
  uint32_t _193;
  uint32_t _194;
  uint32_t _195;
  uint32_t _196;
  uint32_t _197;
  uint32_t _198;
  uint32_t _199;
  uint32_t _200;
  uint32_t _201;
  uint32_t _202;
  uint32_t _203;
  uint32_t _204;
  uint32_t _205;
  uint32_t _206;
  uint32_t _207;
  uint32_t _208;
  uint32_t _209;
  uint32_t _210;
  uint32_t _211;
  uint32_t _212;
  uint32_t _213;
  uint32_t _214;
  uint32_t _215;
  uint32_t _216;
  uint32_t _217;
  uint32_t _218;
  uint32_t _219;
  uint32_t _220;
  uint32_t _221;
  uint32_t _222;
  uint32_t _223;
  uint32_t _224;
  uint32_t _225;
  uint32_t _226;
  uint32_t _227;
  uint32_t _228;
  uint32_t _229;
  uint32_t _230;
  uint32_t _231;
  uint32_t _232;
  uint32_t _233;
  uint32_t _234;
  uint32_t _235;
  uint32_t _236;
  uint32_t _237;
  uint32_t _238;
  uint32_t _239;
  uint32_t _240;
  uint32_t _241;
  uint32_t _242;
  uint32_t _243;
  uint32_t _244;
  uint32_t _245;
  uint32_t _246;
  uint32_t _247;
  uint32_t _248;

  _136 = *(((uint32_t*)_135));
  _137 = *(((uint32_t*)((&_135[((int64_t)4)]))));
  _138 = *((&_133->field0.array[((int64_t)15)]));
  _139 = _138 ^ _136;
  _140 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_139 & 255))))]));
  _141 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_139, 8)) & 255))))]));
  _142 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_139, 16)) & 255))))]));
  _143 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_139, 24)))))]));
  _144 = (((_140 ^ _137) ^ _141) ^ _142) ^ _143;
  _145 = *((&_133->field0.array[((int64_t)14)]));
  _146 = _144 ^ _145;
  _147 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_146 & 255))))]));
  _148 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_146, 8)) & 255))))]));
  _149 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_146, 16)) & 255))))]));
  _150 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_146, 24)))))]));
  _151 = (((_147 ^ _136) ^ _148) ^ _149) ^ _150;
  _152 = *((&_133->field0.array[((int64_t)13)]));
  _153 = _151 ^ _152;
  _154 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_153 & 255))))]));
  _155 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_153, 8)) & 255))))]));
  _156 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_153, 16)) & 255))))]));
  _157 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_153, 24)))))]));
  _158 = (((_154 ^ _144) ^ _155) ^ _156) ^ _157;
  _159 = *((&_133->field0.array[((int64_t)12)]));
  _160 = _158 ^ _159;
  _161 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_160 & 255))))]));
  _162 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_160, 8)) & 255))))]));
  _163 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_160, 16)) & 255))))]));
  _164 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_160, 24)))))]));
  _165 = (((_161 ^ _151) ^ _162) ^ _163) ^ _164;
  _166 = *((&_133->field0.array[((int64_t)11)]));
  _167 = _165 ^ _166;
  _168 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_167 & 255))))]));
  _169 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_167, 8)) & 255))))]));
  _170 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_167, 16)) & 255))))]));
  _171 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_167, 24)))))]));
  _172 = (((_168 ^ _158) ^ _169) ^ _170) ^ _171;
  _173 = *((&_133->field0.array[((int64_t)10)]));
  _174 = _172 ^ _173;
  _175 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_174 & 255))))]));
  _176 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_174, 8)) & 255))))]));
  _177 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_174, 16)) & 255))))]));
  _178 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_174, 24)))))]));
  _179 = (((_175 ^ _165) ^ _176) ^ _177) ^ _178;
  _180 = *((&_133->field0.array[((int64_t)9)]));
  _181 = _179 ^ _180;
  _182 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_181 & 255))))]));
  _183 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_181, 8)) & 255))))]));
  _184 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_181, 16)) & 255))))]));
  _185 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_181, 24)))))]));
  _186 = (((_182 ^ _172) ^ _183) ^ _184) ^ _185;
  _187 = *((&_133->field0.array[((int64_t)8)]));
  _188 = _186 ^ _187;
  _189 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_188 & 255))))]));
  _190 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_188, 8)) & 255))))]));
  _191 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_188, 16)) & 255))))]));
  _192 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_188, 24)))))]));
  _193 = (((_189 ^ _179) ^ _190) ^ _191) ^ _192;
  _194 = *((&_133->field0.array[((int64_t)7)]));
  _195 = _193 ^ _194;
  _196 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_195 & 255))))]));
  _197 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_195, 8)) & 255))))]));
  _198 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_195, 16)) & 255))))]));
  _199 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_195, 24)))))]));
  _200 = (((_196 ^ _186) ^ _197) ^ _198) ^ _199;
  _201 = *((&_133->field0.array[((int64_t)6)]));
  _202 = _200 ^ _201;
  _203 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_202 & 255))))]));
  _204 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_202, 8)) & 255))))]));
  _205 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_202, 16)) & 255))))]));
  _206 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_202, 24)))))]));
  _207 = (((_203 ^ _193) ^ _204) ^ _205) ^ _206;
  _208 = *((&_133->field0.array[((int64_t)5)]));
  _209 = _207 ^ _208;
  _210 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_209 & 255))))]));
  _211 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_209, 8)) & 255))))]));
  _212 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_209, 16)) & 255))))]));
  _213 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_209, 24)))))]));
  _214 = (((_210 ^ _200) ^ _211) ^ _212) ^ _213;
  _215 = *((&_133->field0.array[((int64_t)4)]));
  _216 = _214 ^ _215;
  _217 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_216 & 255))))]));
  _218 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_216, 8)) & 255))))]));
  _219 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_216, 16)) & 255))))]));
  _220 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_216, 24)))))]));
  _221 = (((_217 ^ _207) ^ _218) ^ _219) ^ _220;
  _222 = *((&_133->field0.array[((int64_t)3)]));
  _223 = _221 ^ _222;
  _224 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_223 & 255))))]));
  _225 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_223, 8)) & 255))))]));
  _226 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_223, 16)) & 255))))]));
  _227 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_223, 24)))))]));
  _228 = (((_224 ^ _214) ^ _225) ^ _226) ^ _227;
  _229 = *((&_133->field0.array[((int64_t)2)]));
  _230 = _228 ^ _229;
  _231 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_230 & 255))))]));
  _232 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_230, 8)) & 255))))]));
  _233 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_230, 16)) & 255))))]));
  _234 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_230, 24)))))]));
  _235 = (((_231 ^ _221) ^ _232) ^ _233) ^ _234;
  _236 = *((&_133->field0.array[((int64_t)1)]));
  _237 = _235 ^ _236;
  _238 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_237 & 255))))]));
  _239 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_237, 8)) & 255))))]));
  _240 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_237, 16)) & 255))))]));
  _241 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_237, 24)))))]));
  _242 = (((_238 ^ _228) ^ _239) ^ _240) ^ _241;
  _243 = *((&_133->field0.array[((int64_t)0)]));
  _244 = _242 ^ _243;
  _245 = *((&sbox0.array[((int64_t)(((uint64_t)(uint32_t)(_244 & 255))))]));
  _246 = *((&sbox1.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_244, 8)) & 255))))]));
  _247 = *((&sbox2.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_244, 16)) & 255))))]));
  _248 = *((&sbox3.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_244, 24)))))]));
  *(((uint32_t*)_134)) = ((((_245 ^ _235) ^ _246) ^ _247) ^ _248);
  *(((uint32_t*)((&_134[((int64_t)4)])))) = _242;
}


uint32_t fcrypt_setkey(uint8_t* _249, uint64_t llvm_cbe_N, struct l_struct_struct_OC_fcrypt_ctx* _250, uint64_t llvm_cbe_N1, uint32_t _251) {
  uint8_t _252;
  uint8_t _253;
  uint32_t _254;
  uint8_t _255;
  uint8_t _256;
  uint32_t _257;
  uint8_t _258;
  uint8_t _259;
  uint8_t _260;
  uint32_t _261;
  uint8_t _262;
  uint32_t _263;
  uint32_t _264;
  uint32_t _265;
  uint32_t _266;
  uint32_t _267;
  uint32_t _268;
  uint32_t _269;
  uint32_t _270;
  uint32_t _271;
  uint32_t _272;
  uint32_t _273;
  uint32_t _274;
  uint32_t _275;
  uint32_t _276;
  uint32_t _277;
  uint32_t _278;
  uint32_t _279;
  uint32_t _280;
  uint32_t _281;
  uint32_t _282;
  uint32_t _283;
  uint32_t _284;
  uint32_t _285;
  uint32_t _286;
  uint32_t _287;
  uint32_t _288;
  uint32_t _289;
  uint32_t _290;
  uint32_t _291;
  uint32_t _292;
  uint32_t _293;
  uint32_t _294;
  uint32_t _295;
  uint32_t _296;
  uint32_t _297;
  uint32_t _298;
  uint32_t _299;
  uint32_t _300;
  uint32_t _301;
  uint32_t _302;

  _252 = *_249;
  _253 = *((&_249[((int64_t)1)]));
  _254 = ((((uint32_t)(uint8_t)(llvm_lshr_u8(_253, 1)))) << 7) | ((((uint32_t)(uint8_t)(llvm_lshr_u8(_252, 1)))) << 14);
  _255 = *((&_249[((int64_t)2)]));
  _256 = *((&_249[((int64_t)3)]));
  _257 = ((uint32_t)(uint8_t)(llvm_lshr_u8(_256, 1)));
  _258 = *((&_249[((int64_t)4)]));
  _259 = *((&_249[((int64_t)5)]));
  _260 = *((&_249[((int64_t)6)]));
  _261 = (((((uint32_t)(uint8_t)(llvm_lshr_u8(_259, 1)))) << 7) | (((uint32_t)(uint8_t)(llvm_lshr_u8(_260, 1))))) | ((((_257 << 7) & 1920) | (((uint32_t)(uint8_t)(llvm_lshr_u8(_258, 1))))) << 14);
  _262 = *((&_249[((int64_t)7)]));
  _263 = (_261 << 7) | (((uint32_t)(uint8_t)(llvm_lshr_u8(_262, 1))));
  *((&_250->field0.array[((int64_t)0)])) = _263;
  _264 = llvm_lshr_u32(_261, 4);
  _265 = _264 | ((llvm_lshr_u32((((_254 | (((uint32_t)(uint8_t)(llvm_lshr_u8(_255, 1))))) << 7) | _257), 4)) << 21);
  _266 = llvm_lshr_u32(_254, 8);
  *((&_250->field0.array[((int64_t)1)])) = _265;
  _267 = llvm_lshr_u32(_265, 11);
  _268 = _267 | (_266 << 21);
  _269 = llvm_lshr_u32((((_263 << 13) & 16769024) | _266), 11);
  *((&_250->field0.array[((int64_t)2)])) = _268;
  _270 = llvm_lshr_u32(_268, 11);
  _271 = (_269 << 21) | _270;
  _272 = llvm_lshr_u32((_269 | ((_264 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)3)])) = _271;
  _273 = llvm_lshr_u32(_271, 11);
  _274 = _273 | (_272 << 21);
  _275 = llvm_lshr_u32((_272 | ((_267 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)4)])) = _274;
  _276 = llvm_lshr_u32(_274, 11);
  _277 = _276 | (_275 << 21);
  _278 = llvm_lshr_u32((_275 | ((_270 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)5)])) = _277;
  _279 = llvm_lshr_u32(_277, 11);
  _280 = _279 | (_278 << 21);
  _281 = llvm_lshr_u32((_278 | ((_273 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)6)])) = _280;
  _282 = llvm_lshr_u32(_280, 11);
  _283 = _282 | (_281 << 21);
  _284 = llvm_lshr_u32((_281 | ((_276 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)7)])) = _283;
  _285 = llvm_lshr_u32(_283, 11);
  _286 = _285 | (_284 << 21);
  _287 = llvm_lshr_u32((_284 | ((_279 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)8)])) = _286;
  _288 = llvm_lshr_u32(_286, 11);
  _289 = _288 | (_287 << 21);
  _290 = llvm_lshr_u32((_287 | ((_282 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)9)])) = _289;
  _291 = llvm_lshr_u32(_289, 11);
  _292 = _291 | (_290 << 21);
  _293 = llvm_lshr_u32((_290 | ((_285 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)10)])) = _292;
  _294 = llvm_lshr_u32(_292, 11);
  _295 = _294 | (_293 << 21);
  _296 = llvm_lshr_u32((_293 | ((_288 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)11)])) = _295;
  _297 = llvm_lshr_u32(_295, 11);
  _298 = _297 | (_296 << 21);
  _299 = llvm_lshr_u32((_296 | ((_291 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)12)])) = _298;
  _300 = (llvm_lshr_u32(_298, 11)) | (_299 << 21);
  _301 = llvm_lshr_u32((_299 | ((_294 << 13) & 16769024)), 11);
  *((&_250->field0.array[((int64_t)13)])) = _300;
  _302 = (llvm_lshr_u32(_300, 11)) | (_301 << 21);
  *((&_250->field0.array[((int64_t)14)])) = _302;
  *((&_250->field0.array[((int64_t)15)])) = ((llvm_lshr_u32(_302, 11)) | ((llvm_lshr_u32((_301 | (_297 << 13)), 11)) << 21));
  return 0;
}

