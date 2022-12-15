---
---
---
name: trap_clear_active_path
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
push unk1 ; (unknown) 
syscall 5, 15 ; trap_clear_active_path (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::clear_active_path(Ti::Path_3 *const this)
/----- (000000000065A8F0) ----------------------------------------------------
void __fastcall Ti::trap_clear_active_path(BD_VALUE_26 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  Ti::Path_3 *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( !(_DWORD)v3 || !*(_DWORD *)(v3 + 1288) || !*(_BYTE *)(*(unsigned int *)(v3 + 1288) + 0x87LL) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path && obj->Path->is_active()",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      241LL,
      "trap_clear_active_path",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 241);
  }
  if ( (_DWORD)v3 )
  {
    v4 = (Ti::Path_3 *)*(unsigned int *)(v3 + 1288);
    if ( (_DWORD)v4 )
    {
      if ( *(_BYTE *)(*(unsigned int *)(v3 + 1288) + 0x87LL) )
        Ti::Path::clear_active_path(v4);
    }
  }
}
// 65A910: variable 'back_chain' is possibly undefined
->
/----- (0000000000655C58) ----------------------------------------------------
void __fastcall Ti::Path::clear_active_path(Ti::Path_3 *const this)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (unsigned __int8)(*this)[135];
  if ( !(*this)[135] )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "active_",
      "common",
      "C:\\hd25\\kingdom2\\taito\\path.cpp",
      961LL,
      "clear_active_path",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\path.cpp", 961);
    v2 = (unsigned __int8)(*this)[135];
  }
  if ( v2 )
  {
    *(_DWORD *)&(*this)[136] = 0;
    *(_DWORD *)&(*this)[4] = 0;
    *(_DWORD *)&(*this)[8] = 0;
    *(_DWORD *)&(*this)[28] = -1073741824;
    *(_DWORD *)&(*this)[24] = 0;
  }
}
// 655C74: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

