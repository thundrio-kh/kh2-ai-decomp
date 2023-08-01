---
---
---
name: trap_obj_is_pirate_shade
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
syscall 1, 40 ; trap_obj_is_pirate_shade (1 in, 1 out)
pop is_pirate_shade ; (bool) 
---
---
---
description: Returns if the object is in shade
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_pirate_shade(YS::OBJ_128 *const this)
/----- (00000000004F98F4) ----------------------------------------------------
void __fastcall YS::trap_obj_is_pirate_shade(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::is_pirate_shade((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4));
}
// 4F9918: variable 'back_chain' is possibly undefined
->
/----- (0000000000465744) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_pirate_shade(YS::OBJ_128 *const this)
{
  __int64 v1; // r4

  v1 = 0LL;
  if ( (*(_WORD *)(*(unsigned int *)&(*this)[8] + 0x48LL) & 0x20) != 0 && (*this)[2268] == 1 )
    v1 = 1LL;
  return v1;
}


---
---
---
appears in:
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
---
---
---
example usage from obj\B_CA010\b_ca.bdscript
L1544:
 pushFromFSp 0
 fetchValue 132
 eqz 
 dup 
 jz L1557
 pushFromFSp 0
 syscall 1, 40 ; trap_obj_is_pirate_shade (1 in, 1 out)
 eqzv 
