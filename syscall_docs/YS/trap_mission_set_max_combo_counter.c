---
---
---
name: trap_mission_set_max_combo_counter
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
push unk1 ; (unknown)  (fetchValue: 12)
push unk2 ; (unknown)  (pushImm: 0)
syscall 4, 43 ; trap_mission_set_max_combo_counter (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetMaxComboCounter(int value, int id)
/----- (00000000004F68F4) ----------------------------------------------------
void __fastcall YS::trap_mission_set_max_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::SetMaxComboCounter(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004569F8) ----------------------------------------------------
void __fastcall YS::MISSION::SetMaxComboCounter(int value, int id)
{
  int v4; // r31
  unsigned int v5; // r3

  if ( YS::MISSION::IsExec() )
  {
    v4 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 608 + 0xCLL) & 1) != 0 )
    {
      v5 = (unsigned int)YS::MISSION::GetCurrent();
      YS::COMBOCOUNTER::set_combo_max((YS::COMBOCOUNTER_6 *const)(v5 + v4 + 608), value);
    }
  }
}


---
---
---
appears in:
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
---
---
---
example usage from msn\HE_COLOSSEUM\he_c.bdscript
L307:
 popToSp 0
 syscall 1, 299 ; trap_area_set_next_entrance (0 in, 0 out)
 pushFromFSp 0
 gosub 4, L340
 syscall 1, 298 ; trap_worldwork_get (0 in, 1 out)
 popToSpVal 8
 pushFromFSpVal 8
 fetchValue 4
 pushImm 0
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushFromFSpVal 8
 fetchValue 12
 pushImm 0
 syscall 4, 43 ; trap_mission_set_max_combo_counter (2 in, 0 out)
 syscall 1, 317 ; trap_status_no_gameover (0 in, 0 out)
 ret 
