---
---
---
name: trap_area_cost_ratio
---
---
---
category: mapinfo
---
---
---
documentation level: complete
---
---
---
syscall 1, 303 ; trap_area_cost_ratio (0 in, 1 out)
pop percentage ; (percentage of rooms capacity that is currently used) 
---
---
---
description: Divides the total cost of all objects currently spawned by the capacity of the room (YS::Cost / YS::Capacity)
---
---
---
decompiled code:
float __cdecl YS::AREADATA::GetCostRatio()
/----- (00000000005030F8) ----------------------------------------------------
void __fastcall YS::trap_area_cost_ratio(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::AREADATA::GetCostRatio();
}
->
/----- (0000000000405990) ----------------------------------------------------
float __cdecl YS::AREADATA::GetCostRatio()
{
  return *(float *)&YS::Cost / YS::Capacity;
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

