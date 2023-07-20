---
---
---
name: trap_mission_set_count
---
---
---
category: mission_counter
---
---
---
documentation level: untested
---
---
---
push counter ; (int) (Value to set the counter to)
push id ; (int)  (id of a counter)
syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
---
---
---
description: Set the counter to a specific value.
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetCount(int value, int id)
/----- (00000000004F63E4) ----------------------------------------------------
void __fastcall YS::trap_mission_set_count(BD_VALUE_20 *args)
{
  YS::MISSION::SetCount(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000045575C) ----------------------------------------------------
void __fastcall YS::MISSION::SetCount(int value, int id)
{
  int v4; // r31
  unsigned int v5; // r3

  if ( YS::MISSION::IsActive() )
  {
    v4 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0 )
    {
      v5 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_COUNT::set((YS::MISSION_COUNT_3 *const)(v5 + v4 + 232), value);
    }
  }
}


---
---
---
appears in:
msn\AL00_SKATE_01\al00.bdscript
msn\AL14_MS202_FREE\al14.bdscript
msn\BB13_KINOKO_XAL\kino.bdscript
msn\CA01_MS204\ca01.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\EH03_KINOKO_XEM\kino.bdscript
msn\HB04_KINOKO_DEM\kino.bdscript
msn\HB09_SKATE_01\hb09.bdscript
msn\HE02_MS104D\he02.bdscript
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
msn\TR02_MS102_FREE\tr02.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_SKATE_01\tt07.bdscript
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
---
---
---
example usage from msn\AL00_SKATE_01\al00.bdscript
L268:
 pushFromFSp 0
 fetchValue 0
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushFromFSp 4
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushImm 10
 pushImm 0
 syscall 4, 46 ; trap_mission_set_warning_se (2 in, 0 out)
