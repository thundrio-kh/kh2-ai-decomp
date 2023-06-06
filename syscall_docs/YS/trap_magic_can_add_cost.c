---
---
---
name: trap_magic_can_add_cost
---
---
---
category: unused
---
---
---
documentation level: untested
---
---
---
push magic ; (YS::MAGIC_85 *) (A magic object) 
syscall 2, 69 ; trap_magic_can_add_cost (1 in, 1 out)
pop allowed ; (bool) 
---
---
---
description: Check if the cost for this magic object can be added to the areas current cost
---
---
---
decompiled code:
bool __fastcall YS::MAGIC::CanAddCost(double cost)
/----- (00000000004F5158) ----------------------------------------------------
void __fastcall YS::trap_magic_can_add_cost(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::MAGIC::CanAddCost(*(float *)&(*args)[0]);
}
->
/----- (00000000004479A8) ----------------------------------------------------
bool __fastcall YS::MAGIC::CanAddCost(double cost)
{
  return cost <= (float)(YS::AREADATA::GetCostRest() + 2.0);
}


---
---
---
appears in:

---
---
---
example usage from NA

