---
---
---
name: trap_mission_add_combo_counter
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
push amount ; (int)  (amount to add)
push time ; (int) (Time to set to timer associated with counter. Value of 0 or 600 used in game)
syscall 4, 33 ; trap_mission_add_combo_counter (2 in, 0 out)
---
---
---
description: Adds a value to the combo counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::AddComboCounter(int add, double time, int id)
/----- (00000000004F68C0) ----------------------------------------------------
void __fastcall YS::trap_mission_add_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::AddComboCounter(*(_DWORD *)args, *(float *)&(*args)[4], 0);
}
->
/----- (00000000004567D8) ----------------------------------------------------
void __fastcall YS::MISSION::AddComboCounter(int add, double time, int id)
{
  int v6; // r31
  unsigned int v7; // r3

  if ( YS::MISSION::IsActive() )
  {
    v6 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v6 + 608 + 0xCLL) & 1) != 0 )
    {
      v7 = (unsigned int)YS::MISSION::GetCurrent();
      YS::COMBOCOUNTER::add((YS::COMBOCOUNTER_6 *const)(v7 + v6 + 608), add, time);
    }
  }
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
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
---
---
---
example usage from msn\HB09_SKATE_01\hb09.bdscript
L33:
 pushFromFSp 0
 pushImmf 0
 syscall 4, 33 ; trap_mission_add_combo_counter (2 in, 0 out)
 pushFromPWp W8
 pushImm 3
 gosub 4, L64
 jmp L62
