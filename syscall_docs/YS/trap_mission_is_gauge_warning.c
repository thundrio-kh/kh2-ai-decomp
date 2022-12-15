---
---
---
name: trap_mission_is_gauge_warning
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
push unk1 ; (unknown) 
syscall 4, 34 ; trap_mission_is_gauge_warning (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::MISSION::IsGaugeWarning(int id)
/----- (00000000004F6780) ----------------------------------------------------
void __fastcall YS::trap_mission_is_gauge_warning(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::IsGaugeWarning(*(_DWORD *)args);
}
->
/----- (0000000000456334) ----------------------------------------------------
bool __fastcall YS::MISSION::IsGaugeWarning(int id)
{
  int v2; // r31
  _BOOL8 result; // r3

  if ( YS::MISSION::IsExec()
    && (v2 = 52 * id, (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 400 + 0xCLL) & 1) != 0) )
  {
    result = (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 400 + 0xCLL) & 8) != 0;
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

