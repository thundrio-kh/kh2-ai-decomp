---
---
---
name: trap_mission_get_combo_counter
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
syscall 4, 31 ; trap_mission_get_combo_counter (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetComboCounter(int id)
/----- (00000000004F6888) ----------------------------------------------------
void __fastcall YS::trap_mission_get_combo_counter(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetComboCounter(0);
}
->
/----- (0000000000456974) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetComboCounter(int id)
{
  int v2; // r31
  __int64 result; // r3

  if ( YS::MISSION::IsExec()
    && (v2 = id << 6, (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 608 + 0xCLL) & 1) != 0) )
  {
    result = *(int *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 608 + 0x2CLL);
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

