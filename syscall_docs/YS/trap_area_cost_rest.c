---
---
---
name: trap_area_cost_rest
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
syscall 1, 197 ; trap_area_cost_rest (0 in, 1 out)
pop cost_left ; (int) (amount of cost left in the room) 
---
---
---
description: Returns the amount of cost left in the room before the capacity is filled (YS::Capacity - YS::Cost)
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
ard\he05\f_he.bdscript
ard\he07\f_he.bdscript
ard\he11\f_he.bdscript
ard\he15\f_he.bdscript
ard\he16\f_he.bdscript
ard\he17\f_he.bdscript
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\F_HE110\f_he.bdscript ((F) Mist Sphere (HE))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
---
---
---
example usage from ard\he05\f_he.bdscript
L230:
 dup 
 jz L254
 syscall 1, 197 ; trap_area_cost_rest (0 in, 1 out)
 gosub 4, L205
 fetchValue 4
 pushImm 1
 add 
 pushImm 7
 mul 
 sub 
 pushImm 0
 sub 
 ipos 
 eqzv 
