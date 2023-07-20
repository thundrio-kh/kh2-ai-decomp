---
---
---
name: trap_mission_warning_count
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
push unk1 ; (unknown)  (pushFromFSpVal: 4) (pushImm: 0,1)
syscall 4, 50 ; trap_mission_warning_count (1 in, 0 out)
---
---
---
description: mission_counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::WarningCount(int id, bool flag)
/----- (00000000004F65D0) ----------------------------------------------------
void __fastcall YS::trap_mission_warning_count(BD_VALUE_20 *args)
{
  YS::MISSION::WarningCount(*(_DWORD *)args, 1);
}
->
/----- (0000000000455D60) ----------------------------------------------------
void __fastcall YS::MISSION::WarningCount(int id, bool flag)
{
  unsigned int *v3; // r30
  unsigned int v4; // r5

  v3 = (unsigned int *)((unsigned int)YS::MISSION::GetCurrent() + 56 * id + 232);
  if ( YS::MISSION::IsExec() )
  {
    v4 = v3[3];
    if ( (v4 & 1) != 0 )
    {
      if ( flag )
      {
        if ( (v4 & 8) == 0 )
          ((void (__fastcall *)(unsigned int *))*(unsigned int *)*(unsigned int *)(*v3 + 0x14LL))(v3);
      }
      else if ( (v4 & 8) != 0 )
      {
        ((void (__fastcall *)(unsigned int *))*(unsigned int *)*(unsigned int *)(*v3 + 0x18LL))(v3);
      }
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
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_SKATE_01\tt07.bdscript
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
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
