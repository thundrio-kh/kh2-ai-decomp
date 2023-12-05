---
---
---
name: trap_obj_is_hover
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
push obj ; (YS::OBJ_125) (An object)
syscall 1, 208 ; trap_obj_is_hover (1 in, 1 out)
pop is_hover ; (bool) 
---
---
---
description: Returns if the object is hovering
---
---
---
decompiled code:
bool __fastcall YS::OBJ::is_hover(YS::OBJ_193 *const this)
/----- (00000000004FE820) ----------------------------------------------------
void __fastcall YS::trap_obj_is_hover(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = YS::OBJ::is_hover((YS::OBJ_193 *const)*(unsigned int *)(v2 + 4));
}
// 4FE844: variable 'back_chain' is possibly undefined
->
/----- (00000000004CF310) ----------------------------------------------------
bool __fastcall YS::OBJ::is_hover(YS::OBJ_193 *const this)
{
  return *(_DWORD *)(*(unsigned int *)&(*this)[12] + 4LL) == 6;
}


---
---
---
appears in:
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
---
---
---
example usage from obj\F_HB090\f_hb.bdscript
L442:
 pushFromFSp 0
 syscall 1, 208 ; trap_obj_is_hover (1 in, 1 out)
 jz L454
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 jmp L454
