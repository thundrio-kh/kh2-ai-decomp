---
---
---
name: trap_attack_new
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushFromPSpVal: 0,100,112,252,4,...) (pushFromFSp: 0,12,16,4,8) (add: ) (pushFromPSp: 16,32,4,48,64,...) (pushImm: 1465,1812,1813,1814,1815,185) (pushFromPWp: W0,W148,W16,W160,W172,...)
push unk2 ; (unknown)  (pushImm: -1,0,100,1000,1002,1012,1013,1015,1020,1027,1028,1031,1032,1033,1041,105,1050,1054,1055,1056,1069,1086,1114,1140,1150,1151,1155,1161,1163,1164,1165,1169,1170,1172,1173,1176,1177,1178,1181,1182,1188,1189,1200,1201,1202,1203,1204,1238,1239,1242,1244,1247,1248,1249,1260,1261,1268,1269,13,1305,1306,1307,1308,1319,1320,1322,1339,1342,1354,1361,1362,1367,1373,1441,1442,1443,1444,1445,1446,1447,1448,1451,1452,1453,1454,1464,1488,1492,1525,1526,1527,1528,1529,1531,1539,1547,1556,1557,1567,1568,1569,1592,1593,1594,1595,1596,1597,1598,1599,1600,1601,1603,1604,1605,1606,1609,1610,1611,1613,1614,1632,1635,1636,1637,1643,1691,1693,1697,1700,1702,1703,1704,1705,1706,1709,1711,1713,1716,1717,1718,1721,1732,1738,1801,1816,1833,1839,184,1842,1845,1846,1851,1862,1863,1866,1867,1907,1908,1913,1925,1926,1930,1931,1939,1940,1953,1965,1966,1979,1980,1981,1984,1987,1991,1993,2,2005,2006,2009,2010,2015,2023,2024,2029,2030,2031,2032,2041,2043,2048,2052,2053,2060,2062,2063,212,213,226,229,24,240,254,264,269,27,279,285,286,289,290,291,292,293,294,295,296,297,298,300,301,302,304,306,307,308,310,315,316,317,322,329,330,331,334,34,340,341,342,355,357,358,361,363,364,374,375,376,386,388,39,410,411,412,413,415,416,419,422,424,429,432,436,445,46,464,465,466,468,469,47,470,472,473,490,497,503,506,507,508,509,510,511,517,518,519,520,521,522,523,524,53,535,536,537,539,541,55,560,568,569,58,582,584,585,587,600,605,606,609,614,616,617,618,619,625,626,627,628,629,630,631,645,654,664,665,670,671,672,675,68,681,685,689,694,695,71,711,718,719,72,723,725,728,743,744,745,751,758,760,766,768,769,771,773,776,778,779,782,783,792,804,805,816,823,840,841,844,845,846,850,851,859,867,892,896,897,898,902,905,913,914,918,920,922,928,929,934,938,939,942,943,980,983,99,991,994) (pushFromFSp: 0,12,4,8) (pushFromFSpVal: 120,136,64,68) (fetchValue: 16) (pushFromPWp: W0,W4) (pushFromFWp: W0)
push unk3 ; (unknown)  (pushImm: -1) (pushFromFSpVal: 100,104,132,176,184,...) (pushFromFSp: 0,176,20,32,4,...) (fetchValue: 116,72) (syscall: 1, 39 ; trap_obj_unit_arg (2 in, 1 out),2, 67 ; trap_attack_new_combo_group (0 in, 1 out)) (pushFromFWp: W0,W16,W4,W7584,W8) (gosub: 12, L1248,20, L1248,32, L1248)
push unk4 ; (unknown)  (pushImm: 0) (pushFromFSpVal: 100,168,20,244,260,...) (pushFromFSp: 4)
syscall 2, 10 ; trap_attack_new (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::ATTACK_MAGIC(YS::ATTACK_MAGIC_3 *const this, YS::BTLOBJ *owner, __int64 param_id, int combo_group, __int64 level, int attack_id)
/----- (00000000004F42D8) ----------------------------------------------------
void __fastcall YS::trap_attack_new(BD_VALUE_19 *args)
{
  int v2; // r30
  YS::ATTACK_MAGIC_3 *v3; // r29
  __int64 v4; // r30
  unsigned __int64 v5; // r28
  __int64 v6; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0;
  v3 = (YS::ATTACK_MAGIC_3 *)AREA::Alloc(0x140u);
  if ( (_DWORD)v3 )
  {
    v4 = *(unsigned int *)args;
    v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v4 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v4 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    v6 = *(unsigned int *)(v4 + 4);
    if ( (*(_DWORD *)(v6 + 1416) & 2) == 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "TOOBJ(obj)->is_btlobj()",
        "common",
        "../../yasui/libys/btlobj.h",
        178LL,
        "TOBTLOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
    }
    YS::ATTACK_MAGIC::ATTACK_MAGIC(
      v3,
      (YS::BTLOBJ *)v6,
      *(int *)&(*args)[4],
      *(_DWORD *)&(*args)[8],
      *(int *)&(*args)[12],
      -1);
    v2 = (int)v3;
  }
  *(_DWORD *)args = v2;
}
// 4F4324: variable 'back_chain' is possibly undefined
->
/----- (000000000050C3AC) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::ATTACK_MAGIC(YS::ATTACK_MAGIC_3 *const this, YS::BTLOBJ *owner, __int64 param_id, int combo_group, __int64 level, int attack_id)
{
  int *v7; // r5
  int v8; // r4

  YS::ATTACK::ATTACK((YS::ATTACK *)this, owner, (YS::STDOBJ *)owner, param_id, level, attack_id, combo_group);
  *(_DWORD *)&(*this)[196] = 0;
  *(_DWORD *)&(*this)[200] = 0;
  *(_DWORD *)this = 7671784;
  v7 = (int *)(unsigned int)((_DWORD)this + 4);
  *(_DWORD *)&(*this)[204] = 0;
  *(_DWORD *)&(*this)[216] = 0;
  *(_DWORD *)&(*this)[212] = 0;
  *(_DWORD *)&(*this)[208] = 0;
  *(_DWORD *)&(*this)[220] = 1065353216;
  *(_DWORD *)&(*this)[232] = 0;
  *(_DWORD *)&(*this)[228] = 0;
  *(_DWORD *)&(*this)[280] = 0;
  *(_DWORD *)&(*this)[224] = 0;
  *(_DWORD *)&(*this)[236] = 1065353216;
  *(_DWORD *)&(*this)[248] = 0;
  *(_DWORD *)&(*this)[244] = 0;
  *(_DWORD *)&(*this)[240] = 0;
  *(_DWORD *)&(*this)[252] = 1065353216;
  *(_DWORD *)&(*this)[256] = 0;
  *(_DWORD *)&(*this)[260] = 0;
  *(_DWORD *)&(*this)[264] = 0;
  v8 = *v7;
  *(_DWORD *)&(*this)[268] = 0;
  *(_DWORD *)&(*this)[304] = 0;
  *(_DWORD *)&(*this)[308] = 0;
  *(_DWORD *)&(*this)[312] = 0;
  *(_DWORD *)&(*this)[316] = 0;
  *v7 = v8 | 0x100;
}


/----- (00000000006D4704) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::~ATTACK_MAGIC(YS::ATTACK_MAGIC *this)
{
  *(_DWORD *)this->baseclass_0 = 7671784;
  YS::ATTACK::~ATTACK((YS::ATTACK *)this);
}


/----- (00000000006D4760) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::~ATTACK_MAGIC(YS::ATTACK_MAGIC *this)
{
  *(_DWORD *)this->baseclass_0 = 7671784;
  YS::ATTACK::~ATTACK((YS::ATTACK *)this);
  AREA::Free((unsigned int *)this);
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
magic\blizzard1\bliz.bdscript
magic\BLIZZARD_1\bliz.bdscript
magic\BLIZZARD_1lk\bliz.bdscript
magic\BLIZZARD_2\bliz.bdscript
magic\BLIZZARD_2lk\bliz.bdscript
magic\BLIZZARD_3\bliz.bdscript
magic\BLIZZARD_3lk\bliz.bdscript
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
magic\fire1\fire.bdscript
magic\FIRE_1\fire.bdscript
magic\FIRE_1lk\fire.bdscript
magic\FIRE_2\fire.bdscript
magic\FIRE_2lk\fire.bdscript
magic\FIRE_3\fire.bdscript
magic\FIRE_3lk\fire.bdscript
magic\LK_BLIZZARD_1\bliz.bdscript
magic\magnet1\magn.bdscript
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
magic\reflect1\refl.bdscript
magic\REFLECT_1\refl.bdscript
magic\REFLECT_1lk\refl.bdscript
magic\REFLECT_2\refl.bdscript
magic\REFLECT_2lk\refl.bdscript
magic\REFLECT_3\refl.bdscript
magic\REFLECT_3lk\refl.bdscript
magic\thunder1\thun.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord???s lava pool)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord???s ice spikes)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can???t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Sa??x)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Sa??x (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory???s Contortion))
obj\B_EX180\b_ex.bdscript ((?) Xemnas???s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord???s card (attack))
obj\B_EX220\b_ex.bdscript ((F) Saix???s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix???s claymore limit cut (Usable))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas???s dragon sidecar)
obj\B_EX280\b_ex.bdscript ((F) Xemnas armor - Sa??x???s claymore)
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar???s arrowgun)
obj\B_EX330\b_ex.bdscript ((F) Xemnas???s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion???s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_LK130\b_lk.bdscript ((F) Path for Sora Lion???s groundshaker RC)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL100\f_al.bdscript ((F) Sandstorm (AL))
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker???s ground trap (BB))
obj\F_BB090\f_bb.bdscript ((F) ??? (BB))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_EH070\f_eh.bdscript ((F) Xemnas???s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas???s dragon core cylinder (left) (EH))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_HB090\f_hb.bdscript ((F) CoR???s whirlwind (jumpable) (HB))
obj\F_HB100\f_hb.bdscript ((F) ??? (HB))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_NM080\f_nm.bdscript ((F) Oogie???s present box (NM))
obj\F_NM180\f_nm.bdscript ((F) Present minigame (shooting machine) (NM))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\F_TT100\f_tt.bdscript ((F) Trashcan (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX570\m_ex.bdscript ((M) Assault Rider)
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX660\m_ex.bdscript ((M) Rapid Thruster)
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX660_WI\m_ex.bdscript ((M) Rapid Thruster (WI))
obj\M_EX660_WI_RAW\m_ex.bdscript ()
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_MAGF\wisd.bdscript ((P) Sora (Wisdom))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_NM_MAGF\wisd.bdscript ((P) Sora (NM) (Wisdom))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_TR_MAGF\wisd.bdscript ((P) Sora (TR) (Wisdom))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_WI_MAGF\wisd.bdscript ((P) Sora (WI) (Wisdom))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX100_XM_MAGF\wisd.bdscript ((P) Sora (XM) (Wisdom))
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L3275:
 popToSp 0
 pushFromPSpVal 32
 pushImmf 150
 pushImmf 50
 pushImmf 600
 pushImmf 1
 gosub 4, L1909
 pushFromPSpVal 0
 pushImm 16384
 pushFromPSpVal 32
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 memcpyToSpVal 16, 32
 pushFromPSpVal 0
 pushImm 375
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 4
 pushImmf 98
 gosub 4, L3378
 pushFromFSp 4
 pushFromPSpVal 32
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSp 4
 pushImmf 5000
 pushImmf 5000
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 4
 pushImmf 90
 pushImmf 0
 pushImmf 0
 syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
 pushImmf 90
 gosub 4, L3378
 halt 
 pushFromFSpVal 64
 jz L3377
 gosub 4, L3400
 gosub 4, L3406
 gosub 4, L3414
 jmp L3377
