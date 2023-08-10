---
---
---
name: trap_sysobj_is_blow
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
syscall 10, 22 ; trap_sysobj_is_blow (1 in, 1 out)
pop is_blow ; (bool) 
---
---
---
description: Check if the object is in a blow state
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (0000000000612510) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_blow(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r4
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
      159LL,
      "trap_sysobj_is_blow",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 159);
  }
  v4 = *(unsigned int *)(v2 + 12);
  v5 = 0;
  if ( (_DWORD)v4 && (*(_DWORD *)(v4 + 8) & 0x40) != 0 )
    v5 = 1;
  *(_DWORD *)args = v5;
}
// 612534: variable 'back_chain' is possibly undefined

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
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
---
---
---
example usage from obj\B_EX370\b_ex.bdscript
L26146:
 jz L26172
 pushFromFSp 0
 fetchValue 4
 syscall 10, 22 ; trap_sysobj_is_blow (1 in, 1 out)
 jz L26162
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 jmp L26162
