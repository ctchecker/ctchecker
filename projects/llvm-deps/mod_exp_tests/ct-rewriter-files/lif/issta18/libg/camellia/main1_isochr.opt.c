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
struct l_array_24_uint8_t;
struct l_array_4_uint8_t;
struct l_array_256_uint32_t;
struct l_array_50_uint32_t;

/* Function definitions */
typedef uint32_t l_fptr_5(uint8_t*, uint64_t, bool);

typedef uint32_t l_fptr_1(void);

typedef void l_fptr_2(uint8_t*, uint8_t*, uint64_t, bool);

typedef void l_fptr_3(uint8_t*, uint8_t, uint64_t, bool);

typedef uint32_t l_fptr_8(uint32_t);

typedef uint8_t* l_fptr_10(uint8_t*, uint32_t, uint64_t);

typedef void l_fptr_7(uint8_t*, uint64_t, uint32_t*, uint64_t);

typedef uint8_t* l_fptr_9(uint8_t*, uint8_t*, uint64_t);

typedef void l_fptr_6(uint8_t*, uint64_t, uint32_t);

typedef uint32_t l_fptr_4(uint8_t*, ...);


/* Types Definitions */
struct l_array_24_uint8_t {
  uint8_t array[24];
};
struct l_array_4_uint8_t {
  uint8_t array[4];
};
struct l_array_256_uint32_t {
  uint32_t array[256];
};
struct l_array_50_uint32_t {
  uint32_t array[50];
};

/* External Global Variable Declarations */

/* Function Declarations */
int main(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(uint8_t*, ...) __ATTRIBUTELIST__((nothrow));
uint32_t buf_get_be32(uint8_t*, uint64_t, bool) __ATTRIBUTELIST__((noinline, nothrow, pure));
void buf_put_be32(uint8_t*, uint64_t, uint32_t) __ATTRIBUTELIST__((noinline, nothrow));
void camellia_setup128(uint8_t*, uint64_t, uint32_t*, uint64_t) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t putchar(uint32_t) __ATTRIBUTELIST__((nothrow));
uint8_t* memcpy(uint8_t*, uint8_t*, uint64_t);
uint8_t* memset(uint8_t*, uint32_t, uint64_t);


/* Global Variable Definitions and Initialization */
static const __MSALIGN__(64) struct l_array_24_uint8_t __const_OC_main_OC_in_key __attribute__((aligned(64))) = { "\xE6\xCE\xCC\x63\xDE\xAE\x0F\x63\xC2\xC8{\xE9\x91T\xA0\x95\xDBr&\xB9\x1F\x36\xB9(" };
static const struct l_array_4_uint8_t _OC_str = { "%d " };
static const __MSALIGN__(64) struct l_array_256_uint32_t camellia_sp1110 __attribute__((aligned(64))) = { { 1886416896u, 2189591040u, 741092352, -320017408, 3014898432u, 656877312, -1061109760, -437918464, -454761472, 2240120064u, 1465341696u, 892679424, -353703424, 202116096, 2930683392u, 1094795520u, 589505280, -269488384, 1802201856u, 2475922176u, 1162167552u, 421075200, 2779096320u, 555819264, -303174400, 235802112, 1330597632u, 1313754624u, 488447232, 1701143808u, 2459079168u, 3183328512u, 2256963072u, 3099113472u, 2947526400u, 2408550144u, 2088532992u, -336860416, 522133248, -825307648, 1044266496, 808464384, -589505536, 1600085760u, 1583242752u, -976894720, 185273088, 437918208, 2795939328u, -505290496, 960051456, -892679680, -707406592, 1195853568u, 1566399744u, 1027423488, -640034560, 16843008, 1515870720u, -690563584, 1364283648u, 1448498688u, 1819044864u, 1296911616u, 2341178112u, 218959104, 2593823232u, 1717986816u, -67372288, -858993664, 2964369408u, 757935360, 1953788928u, 303174144, 724249344, 538976256, -252645376, 2981212416u, 2223277056u, 2576980224u, -538976512, 1280068608u, -875836672, -1027423744, 875836416, 2122219008u, 1987474944u, 84215040, 1835887872u, 3082270464u, 2846468352u, 825307392, -774778624, 387389184, 67372032, -673720576, 336860160, 1482184704u, 976894464, 1633771776u, -555819520, 454761216, 286331136, 471604224, 842150400, 252645120, 2627509248u, 370546176, 1397969664u, 404232192, -218959360, 572662272, -16843264, 1145324544u, -808464640, 2998055424u, -1010580736, 3048584448u, 2054846976u, 2442236160u, 606348288, 134744064, -387389440, 2829625344u, 1616928768u, -50529280, 1768515840u, 1347440640u, 2863311360u, -791621632, 2694881280u, 2105376000u, 2711724288u, 2307492096u, 1650614784u, 2543294208u, 1414812672u, 1532713728u, 505290240, 2509608192u, -522133504, -256, 1684300800u, -757935616, 269488128, -993737728, 0, 1212696576u, 2745410304u, -134744320, 1970631936u, -606348544, 2324335104u, 50529024, -421075456, -623191552, 151587072, 1061109504, -572662528, 2492765184u, 2273806080u, 1549556736u, 2206434048u, 33686016, -842150656, 1246382592u, 2425393152u, 858993408, 1936945920u, 1734829824u, -151587328, -202116352, 2644352256u, 2139062016u, 3217014528u, -488447488, 1381126656u, 2610666240u, -656877568, 640034304, -926365696, 926365440, -960051712, 993737472, 2172748032u, 2526451200u, 1869573888u, 1263225600u, 320017152, 3200171520u, 1667457792u, 774778368, -370546432, 2038003968u, 2812782336u, 2358021120u, 2678038272u, 1852730880u, 3166485504u, 2391707136u, 690563328, -168430336, -101058304, 3065427456u, 791621376, -33686272, 3031741440u, 1499027712u, 2021160960u, 2560137216u, 101058048, 1785358848u, -404232448, 1179010560u, 1903259904u, 3132799488u, -724249600, 623191296, 2880154368u, 1111638528u, 2290649088u, 2728567296u, 2374864128u, -84215296, 1920102912u, 117901056, 3115956480u, 1431655680u, -117901312, -286331392, 2896997376u, 168430080, 909522432, 1229539584u, 707406336, 1751672832u, 1010580480, 943208448, -235802368, 2762253312u, 1077952512u, 673720320, -741092608, 2071689984u, 3149642496u, -909522688, 1128481536u, -1044266752, 353703168, -471604480, 2913840384u, -185273344, 2004317952u, -943208704, 2155905024u, 2661195264u } };
static const __MSALIGN__(64) struct l_array_256_uint32_t camellia_sp0222 __attribute__((aligned(64))) = { { 14737632, 328965, 5789784, 14277081, 6776679, 5131854, 8487297, 13355979, 13224393, 723723, 11447982, 6974058, 14013909, 1579032, 6118749, 8553090, 4605510, 14671839, 14079702, 2565927, 9079434, 3289650, 4934475, 4342338, 14408667, 1842204, 10395294, 10263708, 3815994, 13290186, 2434341, 8092539, 855309, 7434609, 6250335, 2039583, 16316664, 14145495, 4079166, 10329501, 8158332, 6316128, 12171705, 12500670, 12369084, 9145227, 1447446, 3421236, 5066061, 12829635, 7500402, 9803157, 11250603, 9342606, 12237498, 8026746, 11776947, 131586, 11842740, 11382189, 10658466, 11316396, 14211288, 10132122, 1513239, 1710618, 3487029, 13421772, 16250871, 10066329, 6381921, 5921370, 15263976, 2368548, 5658198, 4210752, 14803425, 6513507, 592137, 3355443, 12566463, 10000536, 9934743, 8750469, 6842472, 16579836, 15527148, 657930, 14342874, 7303023, 5460819, 6447714, 10724259, 3026478, 526344, 11513775, 2631720, 11579568, 7631988, 12763842, 12434877, 3552822, 2236962, 3684408, 6579300, 1973790, 3750201, 2894892, 10921638, 3158064, 15066597, 4473924, 16645629, 8947848, 10461087, 6645093, 8882055, 7039851, 16053492, 2302755, 4737096, 1052688, 13750737, 5329233, 12632256, 16382457, 13816530, 10526880, 5592405, 10592673, 4276545, 16448250, 4408131, 1250067, 12895428, 3092271, 11053224, 11974326, 3947580, 2829099, 12698049, 16777215, 13158600, 10855845, 2105376, 9013641, 0, 9474192, 4671303, 15724527, 15395562, 12040119, 1381653, 394758, 13487565, 11908533, 1184274, 8289918, 12303291, 2697513, 986895, 12105912, 460551, 263172, 10197915, 9737364, 2171169, 6710886, 15132390, 13553358, 15592941, 15198183, 3881787, 16711422, 8355711, 12961221, 10790052, 3618615, 11645361, 5000268, 9539985, 7237230, 9276813, 7763574, 197379, 2960685, 14606046, 9868950, 2500134, 8224125, 13027014, 6052956, 13882323, 15921906, 5197647, 1644825, 4144959, 14474460, 7960953, 1907997, 5395026, 15461355, 15987699, 7171437, 6184542, 16514043, 6908265, 11711154, 15790320, 3223857, 789516, 13948116, 13619151, 9211020, 14869218, 7697781, 11119017, 4868682, 5723991, 8684676, 1118481, 4539717, 1776411, 16119285, 15000804, 921102, 7566195, 11184810, 15856113, 14540253, 5855577, 1315860, 7105644, 9605778, 5526612, 13684944, 7895160, 7368816, 14935011, 4802889, 8421504, 5263440, 10987431, 16185078, 7829367, 9671571, 8816262, 8618883, 2763306, 13092807, 5987163, 15329769, 15658734, 9408399, 65793, 4013373 } };
static const __MSALIGN__(64) struct l_array_256_uint32_t camellia_sp3033 __attribute__((aligned(64))) = { { 939538488, 1090535745u, 369104406, 1979741814u, -654255655, 2466288531u, 1610637408u, -234818830, 1912631922u, -1040137534, 2868947883u, 2583730842u, 1962964341u, 100664838, 1459640151u, 2684395680u, 2432733585u, -150931465, 3036722613u, -922695223, 2717950626u, 2348846220u, -771697966, 2415956112u, -167708938, 117442311, 2801837991u, 654321447, 2382401166u, 2986390194u, 1224755529u, -570368290, 1124090691u, 1543527516u, -687810601, -956250169, 1040203326, -184486411, 2399178639u, 1728079719u, 520101663, 402659352, 1845522030u, 2936057775u, 788541231, -503258398, 2231403909u, 218107149, 1392530259u, -268373776, 2617285788u, 1694524773u, -369038614, 2734728099u, 2919280302u, 2650840734u, -335483668, 2147516544u, 754986285, 1795189611u, 2818615464u, 721431339, 905983542, 2785060518u, -989805115, 2248181382u, 1291865421u, 855651123, -50266627, 1711302246u, 1476417624u, 2516620950u, 973093434, 150997257, 2499843477u, 268439568, 2013296760u, -671033128, 1107313218u, -872362804, -285151249, 637543974, -452925979, 1627414881u, 436214298, 1056980799, 989870907, 2181071490u, 3053500086u, -620700709, -738143020, 2550175896u, -402593560, 2332068747u, 33554946, -352261141, 167774730, 738208812, 486546717, 2952835248u, 1862299503u, 2365623693u, 2281736328u, 234884622, 419436825, 2264958855u, 1308642894u, 184552203, 2835392937u, 201329676, 2030074233u, 285217041, 2130739071u, 570434082, -419371033, 1493195097u, -520035871, -637478182, 1023425853, -939472696, 301994514, 67109892, 1946186868u, 1409307732u, 805318704, 2113961598u, 3019945140u, 671098920, 1426085205u, 1744857192u, 1342197840u, 3187719870u, -805252912, -1006582588, 822096177, -889140277, 704653866, 2902502829u, 251662095, -905917750, 1879076976u, -16711681, 838873650, 1761634665u, 134219784, 1644192354u, 0, 603989028, -788475439, -83821573, 3120609978u, -318706195, 1157645637u, 2164294017u, 1929409395u, 1828744557u, 2214626436u, 2667618207u, -301928722, 1241533002u, -1023360061, 771763758, -1056915007, 16777473, -436148506, 620766501, 1207978056u, 2566953369u, 3103832505u, 3003167667u, 2063629179u, -117376519, -838807858, 3204497343u, -553590817, 1895854449u, 687876393, -855585331, 1811967084u, 318771987, 1677747300u, 2600508315u, 1660969827u, 2634063261u, -1073692480, 1258310475u, 3070277559u, 2768283045u, 2298513801u, 1593859935u, 2969612721u, 385881879, -201263884, 3154164924u, -754920493, 1174423110u, -822030385, 922761015, 1577082462u, 1191200583u, 2483066004u, -100599046, -67044100, 1526750043u, 2533398423u, -33489154, 1509972570u, 2885725356u, 1006648380, 1275087948u, 50332419, 889206069, -218041357, 587211555, 3087055032u, 1560304989u, 1778412138u, 2449511058u, -721365547, 553656609, 1140868164u, 1358975313u, -973027642, 2097184125u, 956315961, 2197848963u, -603923236, 2852170410u, 2080406652u, 1996519287u, 1442862678u, 83887365, 452991771, 2751505572u, 352326933, 872428596, 503324190, 469769244, -134153992, 1375752786u, 536879136, 335549460, -385816087, 3170942397u, -587145763, -469703452, 2701173153u, -536813344, 2315291274u, -251596303, -704588074, 2046851706u, 3137387451u, -486480925, 1073758272u, 1325420367u } };
static const __MSALIGN__(64) struct l_array_256_uint32_t camellia_sp4404 __attribute__((aligned(64))) = { { 1886388336u, 741081132, 3014852787u, -1061158720, -454819612, 1465319511u, -353763094, 2930639022u, 589496355, 1802174571u, 1162149957u, 2779054245u, -303234835, 1330577487u, 488439837, 2459041938u, 2256928902u, 2947481775u, 2088501372u, 522125343, 1044250686, -589561636, 1583218782u, 185270283, 2795896998u, 960036921, -707460907, 1566376029u, -640089895, 1515847770u, 1364262993u, 1819017324u, 2341142667u, 2593783962u, -67436293, 2964324528u, 1953759348u, 724238379, -252706576, 2223243396u, -539033377, -875888437, 875823156, 1987444854u, 1835860077u, 2846425257u, -774831919, 67371012, 336855060, 976879674, -555876130, 286326801, 842137650, 2627469468u, 1397948499u, -219021070, -16908034, -808517425, -1010630461, 2054815866u, 606339108, -387448600, 1616904288u, 1768489065u, 2863268010u, 2694840480u, 2711683233u, 1650589794u, 1414791252u, 505282590, -522190624, 1684275300u, 269484048, 0, 2745368739u, 1970602101u, 2324299914u, -421134106, 151584777, -572718883, 2273771655u, 2206400643u, -842202931, 2425356432u, 1936916595u, -151650058, 2644312221u, 3216965823u, 1381105746u, -656932648, -926416696, -960102202, 2172715137u, 1869545583u, 320012307, 1667432547u, -370605847, 2812739751u, 2677997727u, 3166437564u, 690552873, -101121799, 791609391, 3031695540u, 2021130360u, 101056518, -404291353, 1903231089u, -724303660, 2880110763u, 2290614408u, 2374828173u, 1920073842u, 3115909305u, -117964552, 2896953516u, 909508662, 707395626, 1010565180, -235863823, 1077936192u, -741146413, 3149594811u, 1128464451u, 353697813, 2913796269u, 2004287607u, 2155872384u, 2189557890u, -320077588, 656867367, -437976859, 2240086149u, 892665909, 202113036, 1094778945u, -269549329, 2475884691u, 421068825, 555810849, 235798542, 1313734734u, 1701118053u, 3183280317u, 3099066552u, 2408513679u, -336920341, -825360178, 808452144, 1600061535u, -976944955, 437911578, -505347871, -892731190, 1195835463u, 1027407933, 16842753, -690618154, 1448476758u, 1296891981u, 218955789, 1717960806u, -859045684, 757923885, 303169554, 538968096, 2981167281u, 2576941209u, 1280049228u, -1027473214, 2122186878u, 84213765, 3082223799u, 825294897, 387383319, -673775401, 1482162264u, 1633747041u, 454754331, 471597084, 252641295, 370540566, 404226072, 572653602, 1145307204u, 2998010034u, 3048538293u, 2442199185u, 134742024, 2829582504u, -50593540, 1347420240u, -791674672, 2105344125u, 2307457161u, 2543255703u, 1532690523u, 2509570197u, -65281, -757989166, -993787708, 1212678216u, -134807305, -606404389, 50528259, -623247142, 1061093439, 2492727444u, 1549533276u, 33685506, 1246363722u, 858980403, 1734803559u, -202178317, 2139029631u, -488505118, 2610626715u, 640024614, 926351415, 993722427, 2526412950u, 1263206475u, 3200123070u, 774766638, 2037973113u, 2357985420u, 1852702830u, 2391670926u, -168492811, 3065381046u, -33750787, 1499005017u, 2560098456u, 1785331818u, 1178992710u, 3132752058u, 623181861, 1111621698u, 2728525986u, -84279046, 117899271, 1431634005u, -286392082, 168427530, 1229520969u, 1751646312u, 943194168, 2762211492u, 673710120, 2071658619u, -909573943, -1044315967, -471662365, -185335564, -943259449, 2661154974u } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint8_t* llvm_select_pu8(bool condition, uint8_t* iftrue, uint8_t* ifnot) {
  uint8_t* r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

int main(void) {
  __MSALIGN__(64) struct l_array_24_uint8_t _1 __attribute__((aligned(64)));    /* Address-exposed local */
  __MSALIGN__(16) struct l_array_50_uint32_t _2 __attribute__((aligned(16)));    /* Address-exposed local */
  uint8_t* _3;
  uint8_t* _4;
  uint8_t* _5;
  uint8_t _6;
  uint32_t _7;
  uint8_t _8;
  uint32_t _9;
  uint8_t _10;
  uint32_t _11;
  uint8_t _12;
  uint32_t _13;
  uint8_t _14;
  uint32_t _15;
  uint8_t _16;
  uint32_t _17;
  uint8_t _18;
  uint32_t _19;
  uint8_t _20;
  uint32_t _21;
  uint8_t _22;
  uint32_t _23;
  uint8_t _24;
  uint32_t _25;
  uint8_t _26;
  uint32_t _27;
  uint8_t _28;
  uint32_t _29;
  uint8_t _30;
  uint32_t _31;
  uint8_t _32;
  uint32_t _33;
  uint8_t _34;
  uint32_t _35;
  uint8_t _36;
  uint32_t _37;
  uint8_t _38;
  uint32_t _39;
  uint8_t _40;
  uint32_t _41;
  uint8_t _42;
  uint32_t _43;
  uint8_t _44;
  uint32_t _45;
  uint8_t _46;
  uint32_t _47;
  uint8_t _48;
  uint32_t _49;
  uint8_t _50;
  uint32_t _51;
  uint8_t _52;
  uint32_t _53;
  uint32_t llvm_cbe_putchar;
  uint64_t llvm_cbe__2e_08;
  uint64_t llvm_cbe__2e_08__PHI_TEMPORARY;
  uint32_t _54;
  uint32_t _55;
  uint64_t _56;
  uint32_t llvm_cbe_putchar7;

  _3 = (&_1.array[((int64_t)0)]);
  _4 = memcpy(_3, ((&__const_OC_main_OC_in_key.array[((int64_t)0)])), 24);
  _5 = memset((((uint8_t*)(&_2))), 0, 200);
  camellia_setup128(_3, 24, ((&_2.array[((int64_t)0)])), /*UNDEF*/0);
  _6 = *((&_1.array[((int64_t)0)]));
  _7 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_6)));
  _8 = *((&_1.array[((int64_t)1)]));
  _9 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_8)));
  _10 = *((&_1.array[((int64_t)2)]));
  _11 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_10)));
  _12 = *((&_1.array[((int64_t)3)]));
  _13 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_12)));
  _14 = *((&_1.array[((int64_t)4)]));
  _15 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_14)));
  _16 = *((&_1.array[((int64_t)5)]));
  _17 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_16)));
  _18 = *((&_1.array[((int64_t)6)]));
  _19 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_18)));
  _20 = *((&_1.array[((int64_t)7)]));
  _21 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_20)));
  _22 = *((&_1.array[((int64_t)8)]));
  _23 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_22)));
  _24 = *((&_1.array[((int64_t)9)]));
  _25 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_24)));
  _26 = *((&_1.array[((int64_t)10)]));
  _27 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_26)));
  _28 = *((&_1.array[((int64_t)11)]));
  _29 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_28)));
  _30 = *((&_1.array[((int64_t)12)]));
  _31 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_30)));
  _32 = *((&_1.array[((int64_t)13)]));
  _33 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_32)));
  _34 = *((&_1.array[((int64_t)14)]));
  _35 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_34)));
  _36 = *((&_1.array[((int64_t)15)]));
  _37 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_36)));
  _38 = *((&_1.array[((int64_t)16)]));
  _39 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_38)));
  _40 = *((&_1.array[((int64_t)17)]));
  _41 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_40)));
  _42 = *((&_1.array[((int64_t)18)]));
  _43 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_42)));
  _44 = *((&_1.array[((int64_t)19)]));
  _45 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_44)));
  _46 = *((&_1.array[((int64_t)20)]));
  _47 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_46)));
  _48 = *((&_1.array[((int64_t)21)]));
  _49 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_48)));
  _50 = *((&_1.array[((int64_t)22)]));
  _51 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_50)));
  _52 = *((&_1.array[((int64_t)23)]));
  _53 = printf(((&_OC_str.array[((int64_t)0)])), (((uint32_t)(uint8_t)_52)));
  llvm_cbe_putchar = putchar(10);
  llvm_cbe__2e_08__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _57;

  do {     /* Syntactic loop '' to make GCC happy */
_57:
  llvm_cbe__2e_08 = llvm_cbe__2e_08__PHI_TEMPORARY;
  _54 = *((&_2.array[((int64_t)llvm_cbe__2e_08)]));
  _55 = printf(((&_OC_str.array[((int64_t)0)])), _54);
  _56 = llvm_add_u64(llvm_cbe__2e_08, 1);
  if ((((_56 == UINT64_C(50))&1))) {
    goto _58;
  } else {
    llvm_cbe__2e_08__PHI_TEMPORARY = _56;   /* for PHI node */
    goto _57;
  }

  } while (1); /* end of syntactic loop '' */
_58:
  llvm_cbe_putchar7 = putchar(10);
  return 0;
}


uint32_t buf_get_be32(uint8_t* _59, uint64_t llvm_cbe_N, bool llvm_cbe__2e_cond) {
  __MSALIGN__(8) uint8_t llvm_cbe_shadow_2e_sroa_2e_0 __attribute__((aligned(8)));    /* Address-exposed local */
  uint8_t _60;
  uint8_t _61;
  uint8_t _62;
  uint8_t _63;

  _60 = *(llvm_select_pu8(((((((((int64_t)llvm_cbe_N) > ((int64_t)UINT64_C(0)))&1)) | llvm_cbe__2e_cond)&1)), _59, (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _61 = *(llvm_select_pu8(((((((((int64_t)llvm_cbe_N) > ((int64_t)UINT64_C(1)))&1)) | llvm_cbe__2e_cond)&1)), ((&_59[((int64_t)1)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _62 = *(llvm_select_pu8(((((((((int64_t)llvm_cbe_N) > ((int64_t)UINT64_C(2)))&1)) | llvm_cbe__2e_cond)&1)), ((&_59[((int64_t)2)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  _63 = *(llvm_select_pu8(((((((((int64_t)llvm_cbe_N) > ((int64_t)UINT64_C(3)))&1)) | llvm_cbe__2e_cond)&1)), ((&_59[((int64_t)3)])), (&llvm_cbe_shadow_2e_sroa_2e_0)));
  return (((((((uint32_t)(uint8_t)_61)) << 16) | ((((uint32_t)(uint8_t)_60)) << 24)) | ((((uint32_t)(uint8_t)_62)) << 8)) | (((uint32_t)(uint8_t)_63)));
}


void buf_put_be32(uint8_t* _64, uint64_t llvm_cbe_N, uint32_t _65) {
  *_64 = (((uint8_t)(llvm_lshr_u32(_65, 24))));
  *((&_64[((int64_t)1)])) = (((uint8_t)(llvm_lshr_u32(_65, 16))));
  *((&_64[((int64_t)2)])) = (((uint8_t)(llvm_lshr_u32(_65, 8))));
  *((&_64[((int64_t)3)])) = (((uint8_t)_65));
}


void camellia_setup128(uint8_t* _66, uint64_t llvm_cbe_N, uint32_t* _67, uint64_t llvm_cbe_N1) {
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
  uint32_t _133;
  uint32_t _134;
  uint32_t _135;
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

  _68 = buf_get_be32(_66, llvm_cbe_N, 1);
  _69 = buf_get_be32(((&_66[((int64_t)4)])), llvm_cbe_N, 1);
  _70 = buf_get_be32(((&_66[((int64_t)8)])), llvm_cbe_N, 1);
  _71 = buf_get_be32(((&_66[((int64_t)12)])), llvm_cbe_N, 1);
  _72 = llvm_lshr_u32(_69, 17);
  _73 = _72 | (_68 << 15);
  _74 = llvm_lshr_u32(_70, 17);
  _75 = _74 | (_69 << 15);
  _76 = llvm_lshr_u32(_71, 17);
  _77 = _76 | (_70 << 15);
  _78 = llvm_lshr_u32(_68, 17);
  _79 = (_71 << 15) | _78;
  _80 = llvm_lshr_u32(_75, 2);
  _81 = _80 | (_72 << 30);
  _82 = llvm_lshr_u32(_77, 2);
  _83 = _82 | (_74 << 30);
  _84 = llvm_lshr_u32(_79, 2);
  _85 = _84 | (_76 << 30);
  _86 = llvm_lshr_u32(_73, 2);
  _87 = _86 | (_78 << 30);
  _88 = (_84 << 15) | (llvm_lshr_u32(_87, 17));
  _89 = (llvm_lshr_u32(_81, 17)) | (_86 << 15);
  _90 = llvm_lshr_u32(_85, 15);
  _91 = _90 | (_82 << 17);
  _92 = llvm_lshr_u32(_87, 15);
  _93 = (_84 << 17) | _92;
  _94 = llvm_lshr_u32(_81, 15);
  _95 = _94 | (_86 << 17);
  _96 = llvm_lshr_u32(_83, 15);
  _97 = _96 | (_80 << 17);
  _98 = (_90 << 17) | (llvm_lshr_u32(_93, 15));
  _99 = (llvm_lshr_u32(_95, 15)) | (_92 << 17);
  _100 = (llvm_lshr_u32(_97, 15)) | (_94 << 17);
  _101 = (llvm_lshr_u32(_91, 15)) | (_96 << 17);
  _102 = _68 ^ 2694735487u;
  _103 = _69 ^ 1003262091;
  _104 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(_103 & 255))))]));
  _105 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_103, 24)))))]));
  _106 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_103, 16)) & 255))))]));
  _107 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_103, 8)) & 255))))]));
  _108 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_102, 24)))))]));
  _109 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_102, 16)) & 255))))]));
  _110 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_102, 8)) & 255))))]));
  _111 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)(_102 & 255))))]));
  _112 = ((_109 ^ _108) ^ _110) ^ _111;
  _113 = (((_105 ^ _104) ^ _106) ^ _107) ^ _112;
  _114 = ((llvm_lshr_u32(_112, 8)) | (_112 << 24)) ^ _113;
  _115 = (_70 ^ 3061508184u) ^ _113;
  _116 = (_71 ^ 1286239154u) ^ _114;
  _117 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(_116 & 255))))]));
  _118 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_116, 24)))))]));
  _119 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_116, 16)) & 255))))]));
  _120 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_116, 8)) & 255))))]));
  _121 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_115, 24)))))]));
  _122 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_115, 16)) & 255))))]));
  _123 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_115, 8)) & 255))))]));
  _124 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)(_115 & 255))))]));
  _125 = ((_122 ^ _121) ^ _123) ^ _124;
  _126 = (((_118 ^ _117) ^ _119) ^ _120) ^ _125;
  _127 = ((llvm_lshr_u32(_125, 8)) | (_125 << 24)) ^ _126;
  _128 = _126 ^ -957401297;
  _129 = _127 ^ -380665154;
  _130 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(_129 & 255))))]));
  _131 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_129, 24)))))]));
  _132 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_129, 16)) & 255))))]));
  _133 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_129, 8)) & 255))))]));
  _134 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_128, 24)))))]));
  _135 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_128, 16)) & 255))))]));
  _136 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_128, 8)) & 255))))]));
  _137 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)(_128 & 255))))]));
  _138 = ((_135 ^ _134) ^ _136) ^ _137;
  _139 = (((_131 ^ _130) ^ _132) ^ _133) ^ _138;
  _140 = _139 ^ _113;
  _141 = (_139 ^ _114) ^ ((llvm_lshr_u32(_138, 8)) | (_138 << 24));
  _142 = _140 ^ 1426019237u;
  _143 = _141 ^ -237801700;
  _144 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(_143 & 255))))]));
  _145 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_143, 24)))))]));
  _146 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_143, 16)) & 255))))]));
  _147 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_143, 8)) & 255))))]));
  _148 = *((&camellia_sp1110.array[((int64_t)(((uint64_t)(uint32_t)(llvm_lshr_u32(_142, 24)))))]));
  _149 = *((&camellia_sp0222.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_142, 16)) & 255))))]));
  _150 = *((&camellia_sp3033.array[((int64_t)(((uint64_t)(uint32_t)((llvm_lshr_u32(_142, 8)) & 255))))]));
  _151 = *((&camellia_sp4404.array[((int64_t)(((uint64_t)(uint32_t)(_142 & 255))))]));
  _152 = ((_149 ^ _148) ^ _150) ^ _151;
  _153 = (((_145 ^ _144) ^ _146) ^ _147) ^ _152;
  _154 = _153 ^ _126;
  _155 = (_153 ^ _127) ^ ((llvm_lshr_u32(_152, 8)) | (_152 << 24));
  _156 = (llvm_lshr_u32(_155, 17)) | (_154 << 15);
  _157 = (_155 << 15) | (llvm_lshr_u32(_140, 17));
  _158 = (llvm_lshr_u32(_141, 17)) | (_140 << 15);
  _159 = (llvm_lshr_u32(_154, 17)) | (_141 << 15);
  _160 = llvm_lshr_u32(_155, 2);
  _161 = (_156 << 15) | (_160 & 32767);
  _162 = llvm_lshr_u32(_140, 2);
  _163 = (_157 << 15) | (_162 & 32767);
  _164 = llvm_lshr_u32(_141, 2);
  _165 = (_158 << 15) | (_164 & 32767);
  _166 = llvm_lshr_u32(_154, 2);
  _167 = (_159 << 15) | (_166 & 32767);
  _168 = (_161 << 15) | ((llvm_lshr_u32(_157, 2)) & 32767);
  _169 = (_163 << 15) | ((llvm_lshr_u32(_158, 2)) & 32767);
  _170 = (_168 << 15) | ((llvm_lshr_u32(_163, 2)) & 32767);
  _171 = (_169 << 15) | ((llvm_lshr_u32(_165, 2)) & 32767);
  _172 = (((_159 << 13) & 1073709056) | (_164 << 30)) | ((llvm_lshr_u32(_167, 2)) & 32767);
  _173 = (((_156 << 13) & 1073709056) | (_166 << 30)) | ((llvm_lshr_u32(_161, 2)) & 32767);
  _174 = (_171 << 2) | (_164 & 3);
  _175 = (_172 << 2) | (_166 & 3);
  _176 = (_173 << 2) | (_160 & 3);
  _177 = (_170 << 2) | (_162 & 3);
  _178 = (_176 << 17) | ((llvm_lshr_u32(_170, 13)) & 131071);
  _179 = (_177 << 17) | ((llvm_lshr_u32(_171, 13)) & 131071);
  _180 = _159 ^ _71;
  _181 = ~(_167);
  _182 = (_71 & _181) ^ _70;
  _183 = _182 & _165;
  _184 = ((_183 << 1) | (llvm_lshr_u32(_183, 31))) ^ _71;
  _185 = ~(_81);
  _186 = (_184 & _185) ^ _182;
  _187 = _186 & _87;
  _188 = _179 ^ _93;
  _189 = ~(_85);
  _190 = (_179 & _189) ^ _178;
  _191 = _190 & _83;
  _192 = ((_191 << 1) | (llvm_lshr_u32(_191, 31))) ^ _179;
  _193 = ~(_163);
  _194 = (_192 & _193) ^ _190;
  _195 = _194 & _161;
  *_67 = (_154 ^ _68);
  *((&_67[((int64_t)1)])) = (_155 ^ _69);
  *((&_67[((int64_t)4)])) = (_140 ^ _70);
  *((&_67[((int64_t)5)])) = (_141 ^ _71);
  *((&_67[((int64_t)6)])) = (_154 ^ _73);
  *((&_67[((int64_t)7)])) = (_155 ^ _75);
  *((&_67[((int64_t)8)])) = (_140 ^ _77);
  *((&_67[((int64_t)9)])) = (_141 ^ _79);
  *((&_67[((int64_t)10)])) = (_156 ^ _73);
  *((&_67[((int64_t)11)])) = (_157 ^ _75);
  *((&_67[((int64_t)12)])) = (_158 ^ _77);
  *((&_67[((int64_t)13)])) = (_159 ^ _79);
  _196 = (_190 ^ _81) ^ ((_192 ^ _83) & _193);
  _197 = _196 & _161;
  *((&_67[((int64_t)14)])) = ((_194 ^ _156) ^ _196);
  *((&_67[((int64_t)15)])) = (((_157 ^ _83) ^ ((_195 << 1) | (llvm_lshr_u32(_195, 31)))) ^ ((_197 << 1) | (llvm_lshr_u32(_197, 31))));
  *((&_67[((int64_t)16)])) = _161;
  *((&_67[((int64_t)17)])) = _163;
  *((&_67[((int64_t)18)])) = _165;
  *((&_67[((int64_t)19)])) = _167;
  _198 = (_158 ^ _70) ^ (_180 & _181);
  _199 = _198 & _165;
  *((&_67[((int64_t)20)])) = ((_182 ^ _85) ^ _198);
  *((&_67[((int64_t)21)])) = (((_180 ^ _87) ^ ((_199 << 1) | (llvm_lshr_u32(_199, 31)))) ^ _184);
  *((&_67[((int64_t)22)])) = (_168 ^ _81);
  *((&_67[((int64_t)23)])) = (_169 ^ _83);
  *((&_67[((int64_t)24)])) = (_88 ^ _85);
  *((&_67[((int64_t)25)])) = (_89 ^ _87);
  *((&_67[((int64_t)26)])) = (_170 ^ _168);
  *((&_67[((int64_t)27)])) = (_171 ^ _169);
  *((&_67[((int64_t)28)])) = (_172 ^ _88);
  *((&_67[((int64_t)29)])) = (_173 ^ _89);
  _200 = (_178 ^ _91) ^ (_188 & _189);
  _201 = _200 & _83;
  *((&_67[((int64_t)30)])) = ((_190 ^ _170) ^ _200);
  *((&_67[((int64_t)31)])) = (((_188 ^ _171) ^ _192) ^ ((_201 << 1) | (llvm_lshr_u32(_201, 31))));
  *((&_67[((int64_t)32)])) = _83;
  *((&_67[((int64_t)33)])) = _85;
  *((&_67[((int64_t)34)])) = _87;
  *((&_67[((int64_t)35)])) = _81;
  _202 = (_172 ^ _182) ^ ((_184 ^ _173) & _185);
  _203 = _202 & _87;
  *((&_67[((int64_t)36)])) = ((_186 ^ _95) ^ _202);
  *((&_67[((int64_t)37)])) = (((_97 ^ _173) ^ ((_187 << 1) | (llvm_lshr_u32(_187, 31)))) ^ ((_203 << 1) | (llvm_lshr_u32(_203, 31))));
  *((&_67[((int64_t)38)])) = (_174 ^ _91);
  *((&_67[((int64_t)39)])) = (_175 ^ _93);
  *((&_67[((int64_t)40)])) = (_176 ^ _95);
  *((&_67[((int64_t)41)])) = (_177 ^ _97);
  *((&_67[((int64_t)42)])) = (_174 ^ _98);
  *((&_67[((int64_t)43)])) = (_175 ^ _99);
  *((&_67[((int64_t)44)])) = (_176 ^ _100);
  *((&_67[((int64_t)45)])) = (_177 ^ _101);
  *((&_67[((int64_t)46)])) = (_178 ^ _98);
  *((&_67[((int64_t)47)])) = (_179 ^ _99);
  *((&_67[((int64_t)48)])) = (((_174 << 17) | ((llvm_lshr_u32(_172, 13)) & 131071)) ^ _100);
  *((&_67[((int64_t)49)])) = ((((llvm_lshr_u32(_173, 13)) & 131071) | (_175 << 17)) ^ _101);
}

