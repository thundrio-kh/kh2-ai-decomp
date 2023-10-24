---
---
---
name: trap_obj_search_by_unit_arg
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push data ; (memory) (variable/stack location where the object will be stored)
push unitnum ; (int)  (Unit number)
push argnum ; (int)  (Argument to search for)
syscall 1, 292 ; trap_obj_search_by_unit_arg (3 in, 0 out)
---
---
---
description: Searches for an object with a specific unit argument
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_unit_arg(YS::OBJ_125 *const this, int num)
/----- (0000000000502014) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_unit_arg(BD_VALUE_21 *args)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_125 *v3; // r3

  v2 = 0LL;
  do
  {
    v3 = YS::OBJ::Each(v2);
    v2 = v3;
  }
  while ( (_DWORD)v3 && (unsigned int)YS::OBJ::get_unit_arg(v3, *(_DWORD *)&(*args)[4]) != *(_DWORD *)&(*args)[8] );
  *(_DWORD *)(*(unsigned int *)args + 4LL) = (_DWORD)v2;
}
->
/----- (0000000000461FC0) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_unit_arg(YS::OBJ_125 *const this, int num)
{
  int v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  if ( num <= 0 || num > 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num > 0 && num <= UNIT_ARG_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1290LL,
      "get_unit_arg",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1290);
  }
  return *(int *)(unsigned int)(v2 + 4 * num + 2076);
}
// 461FE8: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_LK130\b_lk.bdscript ((F) Path for Sora Lion’s groundshaker RC)
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
obj\M_EX620_AL\m_ex.bdscript ((M) Fortuneteller (AL))
obj\M_EX660_AL\m_ex.bdscript ((M) Rapid Thruster (AL))
---
---
---
example usage from obj\B_EX400\b_ex.bdscript
L3195:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 20
 sub 
 eqz 
 jz L3223
 pushFromPSp 16
 pushImm 1
 pushImm 30
 syscall 1, 292 ; trap_obj_search_by_unit_arg (3 in, 0 out)
 jmp L3233
