---
---
---
name: trap_score_update
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
push unk1 ; (unknown)  (pushFromFSp: 4) (pushFromFSpVal: 0,8) (pushImm: 4) (fetchValue: 0)
push unk2 ; (unknown)  (pushFromFSpVal: 0,4) (pushImm: 1,2) (pushFromFSp: 4)
push unk3 ; (unknown)  (syscall: 1, 196 ; trap_area_entrance (0 in, 1 out),4, 26 ; trap_mission_get_timer (1 in, 1 out),4, 29 ; trap_mission_get_count (1 in, 1 out),4, 30 ; trap_mission_get_max_combo_counter (0 in, 1 out)) (pushImm: 0)
syscall 4, 37 ; trap_score_update (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
// local variable allocation has failed, the output may be wrong!
/----- (00000000004F69F0) ----------------------------------------------------
void __fastcall YS::trap_score_update(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::SCORE::update((YS::SCORE *const)(*args)[0], *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
->
/----- (000000000050DFEC) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
bool __fastcall YS::SCORE::update(YS::SCORE *const this, int type, u_int score)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v8; // r30
  __int64 v9; // r31
  __int64 v10; // r9
  int v11; // r3
  bool result; // r3
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 back_chain; // [sp+0h] [-90h]

  v8 = *(_QWORD *)&type;
  v9 = *(_QWORD *)&score;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( type <= 0 || type >= 7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "type > TYPE_NULL && type < TYPE_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\score.cpp",
      14LL,
      "update",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\score.cpp", 14);
  }
  v11 = this->Type;
  if ( (int)v8 < v11 )
    return 0;
  if ( (int)v8 > 4 )
  {
    if ( (_DWORD)v8 == 6 )
    {
LABEL_10:
      if ( (_DWORD)v8 == v11 && (unsigned int)v9 >= this->Score )
        return 0;
      goto _noname_;
    }
  }
  else if ( (int)v8 > 3 )
  {
    goto LABEL_10;
  }
  if ( (_DWORD)v8 == v11 && (unsigned int)v9 <= this->Score )
    return 0;
_noname_:
  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\score.cpp", 31LL, v6, v5, v4, v10, v3);
  printf((unsigned int)"SCORE#update(%d -> %d, %d -> %d)\n", this->Type, v8, this->Score, v9, v15, v14, v13);
  this->Type = v8;
  result = 1;
  this->Score = v9;
  return result;
}
// 50DFEC: variables would overlap: r5.4 and r5.8
// 50DFEC: variables would overlap: r4.4 and r4.8


---
---
---
appears in:
msn\AL00_SKATE_01\al00.bdscript
msn\AL10_KINOKO_LEX\kino.bdscript
msn\AL14_MS202_FREE\al14.bdscript
msn\BB13_KINOKO_XAL\kino.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\CA13_KINOKO_LUX\kino.bdscript
msn\EH03_KINOKO_XEM\kino.bdscript
msn\HB04_KINOKO_DEM\kino.bdscript
msn\HB09_SKATE_01\hb09.bdscript
msn\HE02_MS104D\he02.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\HE_COLOSSEUM\he_c.bdscript
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COLOSSEUM_8_ONLY\he_c.bdscript
msn\HE_COLOSSEUM_8_PP\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_1_10\he_c.bdscript
msn\HE_COL_1_8\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_1\he_c.bdscript
msn\HE_COL_4_10\he_c.bdscript
msn\HE_COL_4_2\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_4\he_c.bdscript
msn\HE_COL_4_5\he_c.bdscript
msn\HE_COL_4_6\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_4_8\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_5\he_c.bdscript
msn\HE_COL_5_10\he_c.bdscript
msn\HE_COL_5_8\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8PP_BOSS\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\HE_COL_8_10\he_c.bdscript
msn\HE_COL_8_25\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
msn\HE_COL_8_45\he_c.bdscript
msn\HE_COL_8_49\he_c.bdscript
msn\HE_COL_8_5\he_c.bdscript
msn\HE_COL_8_50\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
msn\NM07_KINOKO_XIG\kino.bdscript
msn\NM09_SKATE_01\nm09.bdscript
msn\NM10_MS203_FREE\nm10.bdscript
msn\PO01_MS501_FREE\po01.bdscript
msn\PO06_MS101_FREE\po06.bdscript
msn\PO07_MS201_FREE\po07.bdscript
msn\PO08_MS301_FREE\po08.bdscript
msn\PO09_MS401_FREE\po09.bdscript
msn\TR02_MS102_FREE\tr02.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_SKATE_01\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
---
---
---
example usage from msn\AL00_SKATE_01\al00.bdscript
L67:
 popToSp 4
 popToSp 0
 pushFromFSpVal 0
 pushFromFSp 4
 pushFromFSpVal 4
 syscall 4, 29 ; trap_mission_get_count (1 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L100
 pushFromFSp 4
 pushImm 3
 sub 
 msbi 
 jz L98
 pushFromFSpVal 4
 syscall 4, 50 ; trap_mission_warning_count (1 in, 0 out)
 jmp L98
