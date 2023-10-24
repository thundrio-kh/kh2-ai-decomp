---
---
---
name: trap_reset_path_current_pointer
---
---
---
category: path
---
---
---
documentation level: untested
---
---
---
push path ; (Ti::Path_3) (Path object)
syscall 5, 18 ; trap_reset_path_current_pointer (1 in, 0 out)
---
---
---
description: Reset the current pointer of the path
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
void __fastcall Ti::Path::reset_current_pointer(Ti::Path_3 *const this, const kn::FVector *pos)
/----- (0000000000659EFC) ----------------------------------------------------
void __fastcall Ti::trap_reset_path_current_pointer(BD_VALUE_26 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  YS::OBJ_125 *v3; // r3
  Ti::Path_3 *v4; // r31
  const kn::FVector *v5; // r3
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
  v3 = (YS::OBJ_125 *)*(unsigned int *)(v1 + 4);
  if ( (_DWORD)v3 )
  {
    v4 = (Ti::Path_3 *)*(unsigned int *)(*(unsigned int *)(v1 + 4) + 0x508LL);
    if ( (_DWORD)v4 )
    {
      v5 = (const kn::FVector *)YS::OBJ::get_pos(v3);
      Ti::Path::reset_current_pointer(v4, v5);
    }
  }
}
// 659F1C: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_pos Ti::Path::reset_current_pointer
->
/----- (000000000045E178) ----------------------------------------------------
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
{
  unsigned __int64 result; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1306LL,
      "get_pos",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1306);
  }
  if ( YS::OBJ::is_attach(this) )
    result = (unsigned int)((_DWORD)this + 112);
  else
    result = (unsigned int)((_DWORD)this + 1344);
  return result;
}
// 45E194: variable 'back_chain' is possibly undefined


->
/----- (00000000006567F8) ----------------------------------------------------
void __fastcall Ti::Path::reset_current_pointer(Ti::Path_3 *const this, const kn::FVector *pos)
{
  Ti::Path::reset_current(this, pos);
}


---
---
---
appears in:

---
---
---
example usage from NA

