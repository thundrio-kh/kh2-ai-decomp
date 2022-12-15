---
---
---
name: trap_set_path_target_point
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
push unk2 ; (unknown) 
syscall 5, 13 ; trap_set_path_target_point (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::set_target_point(Ti::Path_3 *const this, YS::OBJ_273 *obj, int point_index)
/----- (000000000065A590) ----------------------------------------------------
void __fastcall Ti::trap_set_path_target_point(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  Ti::Path_3 *v5; // r3
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
  if ( !(_DWORD)v4 || !*(_DWORD *)(v4 + 1288) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      220LL,
      "trap_set_path_target_point",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 220);
  }
  if ( (_DWORD)v4 )
  {
    v5 = (Ti::Path_3 *)*(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
      Ti::Path::set_target_point(v5, (YS::OBJ_273 *)v4, *(_DWORD *)&(*args)[4]);
  }
}
// 65A5B4: variable 'back_chain' is possibly undefined
->
/----- (0000000000656180) ----------------------------------------------------
void __fastcall Ti::Path::set_target_point(Ti::Path_3 *const this, YS::OBJ_273 *obj, int point_index)
{
  *(_DWORD *)&(*this)[140] = point_index;
}


---
---
---
appears in:

---
---
---
example usage from NA

