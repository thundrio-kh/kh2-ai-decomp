---
---
---
name: trap_obj_is_unit_active
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
push obj ; (YS::OBJ_125 *)  (An object)
syscall 1, 239 ; trap_obj_is_unit_active (1 in, 1 out)
pop is_unit_active ; (bool) 
---
---
---
description: Returns if the object's unit is active
---
---
---
decompiled code:

/----- (0000000000501598) ----------------------------------------------------
void __fastcall YS::trap_obj_is_unit_active(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r4
  int v5; // r30
  __int64 v6; // r4
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
  v4 = *(unsigned int *)(v2 + 4);
  v5 = 0;
  v6 = *(unsigned int *)(v4 + 2072);
  if ( !(_DWORD)v6 || (*(_DWORD *)(v6 + 4) & 8) != 0 )
    v5 = 1;
  *(_DWORD *)args = v5;
}
// 5015BC: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_TR080\tr_w.bdscript ((F) Light cycle’s wall (TR))
obj\F_TR090\tr_w.bdscript ((F) Light cycle’s wall 2 (TR))
obj\F_TR100\tr_w.bdscript ((F) Light cycle’s wall 3 (single panel) (TR))
obj\F_TR110\tr_b.bdscript ((F) Light cycle’s columns (5) (TR))
obj\F_TR120\tr_b.bdscript ((F) Light cycle’s columns (3) (TR))
obj\F_TR130\tr_b.bdscript ((F) Light cycle’s columns (1) (TR))
---
---
---
example usage from obj\F_CA060\f_ca.bdscript
L143:
 pushFromFSp 0
 syscall 1, 239 ; trap_obj_is_unit_active (1 in, 1 out)
 dup 
 jz L160
 pushFromFSp 0
 fetchValue 24
 pushImm 0
 sub 
 eqz 
 eqzv 
