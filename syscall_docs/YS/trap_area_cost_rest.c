---
---
---
name: trap_area_cost_rest
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
syscall 1, 197 ; trap_area_cost_rest (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __cdecl YS::AREADATA::GetCostRest()
/----- (0000000000503078) ----------------------------------------------------
void __fastcall YS::trap_area_cost_rest(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (int)YS::AREADATA::GetCostRest();
}
->
/----- (00000000004058A4) ----------------------------------------------------
float __cdecl YS::AREADATA::GetCostRest()
{
  return YS::Capacity - *(float *)&YS::Cost;
}
// C7813C: using guessed type float YS::Capacity;
// C78140: using guessed type int YS::Cost;


---
---
---
appears in:

---
---
---
example usage from NA

