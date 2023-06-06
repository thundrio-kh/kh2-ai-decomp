---
---
---
name: trap_mission_get_max_combo_counter
---
---
---
category: mission_combocounter
---
---
---
documentation level: untested
---
---
---
syscall 4, 30 ; trap_mission_get_max_combo_counter (0 in, 1 out)
pop max ; (int) 
---
---
---
description: Get the max value the combo counter has gotten to
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetMaxComboCounter(int id)
/----- (00000000004F6850) ----------------------------------------------------
void __fastcall YS::trap_mission_get_max_combo_counter(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetMaxComboCounter(0);
}
->
/----- (00000000004568F0) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetMaxComboCounter(int id)
{
  int v2; // r31
  __int64 result; // r3

  if ( YS::MISSION::IsExec()
    && (v2 = id << 6, (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 608 + 0xCLL) & 1) != 0) )
  {
    result = *(int *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 608 + 0x38LL);
  }
  else
  {
    result = 0LL;
  }
  return result;
}


---
---
---
appears in:
msn\HB09_SKATE_01\hb09.bdscript
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
msn\TT06_PERFORM_01\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT06_WORK_PERFORM\tt06.bdscript
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
---
---
---
example usage from msn\HB09_SKATE_01\hb09.bdscript
L64:
 popToSp 4
 popToSp 0
 pushFromFSpVal 0
 pushFromFSp 4
 syscall 4, 30 ; trap_mission_get_max_combo_counter (0 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L85
 pushImm 0
 syscall 4, 52 ; trap_mission_warning_combo_counter (1 in, 0 out)
 jmp L85
