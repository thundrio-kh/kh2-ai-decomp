---
---
---
name: trap_mission_get_max_combo_counter
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
syscall 4, 30 ; trap_mission_get_max_combo_counter (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
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

---
---
---
example usage from NA

