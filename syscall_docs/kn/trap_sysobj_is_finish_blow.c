---
---
---
name: trap_sysobj_is_finish_blow
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
syscall 10, 30 ; trap_sysobj_is_finish_blow (1 in, 1 out)
pop is_finish_blow ; (bool) 
---
---
---
description: Check if the object is in a finish blow state
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (0000000000612F74) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_finish_blow(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  int v4; // r5
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)v2) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp",
      204LL,
      "trap_sysobj_is_finish_blow",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 204);
  }
  v4 = 0;
  if ( *(_DWORD *)(v2 + 12)
    && (*(_DWORD *)(*(unsigned int *)(v2 + 12) + 8LL) & 0x40) != 0
    && (*(_DWORD *)(v2 + 268) & 0x20000) != 0 )
  {
    v4 = 1;
  }
  *(_DWORD *)args = v4;
}
// 612F98: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist
->
/----- (0000000000464804) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
{
  __int64 v2; // r30
  int v3; // r31

  v2 = 0LL;
  if ( (unsigned int)YS::OBJ::is_valid(this) )
  {
    v3 = *(_DWORD *)&(*this)[264];
    if ( (v3 & 0x80000) == 0 && (v3 & 0x10000000) == 0 )
      v2 = 1LL;
  }
  return v2;
}


---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L6309:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 dup 
 jz L6338
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L209
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 10, 30 ; trap_sysobj_is_finish_blow (1 in, 1 out)
 eqzv 
