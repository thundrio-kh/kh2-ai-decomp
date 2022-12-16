---
---
---
name: trap_mission_disable_count
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
push unk1 ; (unknown)  (pushFromFSp: 4)
syscall 4, 44 ; trap_mission_disable_count (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::DisableCount(int id)
/----- (00000000004F6530) ----------------------------------------------------
void __fastcall YS::trap_mission_disable_count(BD_VALUE_20 *args)
{
  YS::MISSION::DisableCount(*(_DWORD *)args);
}
->
/----- (0000000000455B50) ----------------------------------------------------
void __fastcall YS::MISSION::DisableCount(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsExec() )
  {
    v2 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 232 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::disable((YS::MISSION2D_19 *const)(v3 + v2 + 232));
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
---
---
---
example usage from msn\AL00_SKATE_01\al00.bdscript
L191:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 12
 syscall 4, 38 ; trap_score_get (1 in, 1 out)
 popToSpVal 0
 pushFromFSpVal 0
 pushImm 1
 pushImm 0
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 drop 
 pushFromFSp 8
 popToSpVal 4
 pushFromFSpVal 0
 syscall 4, 35 ; trap_score_type (1 in, 1 out)
 pushImm 2
 sub 
 info 
 jz L237
 pushFromFSp 4
 syscall 4, 44 ; trap_mission_disable_count (1 in, 0 out)
 jmp L286
