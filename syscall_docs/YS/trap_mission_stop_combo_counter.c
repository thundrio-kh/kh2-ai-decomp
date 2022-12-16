---
---
---
name: trap_mission_stop_combo_counter
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
syscall 4, 27 ; trap_mission_stop_combo_counter (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::ResetComboCounter(int id)
/----- (00000000004F6828) ----------------------------------------------------
void __fastcall YS::trap_mission_stop_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::ResetComboCounter(0);
}
->
/----- (0000000000456874) ----------------------------------------------------
void __fastcall YS::MISSION::ResetComboCounter(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsActive() )
  {
    v2 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 608 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::COMBOCOUNTER::reset((YS::COMBOCOUNTER_6 *const)(v3 + v2 + 608));
    }
  }
}


---
---
---
appears in:
msn\HB09_SKATE_01\hb09.bdscript
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_PERFORM_01\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
msn\TT06_WORK_PERFORM\tt06.bdscript
---
---
---
example usage from msn\HB09_SKATE_01\hb09.bdscript
L58:
 syscall 4, 27 ; trap_mission_stop_combo_counter (0 in, 0 out)
 jmp L62
