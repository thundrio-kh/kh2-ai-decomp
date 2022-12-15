---
---
---
name: method_obj_is_culling
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
syscall 1, 56 ; method_obj_is_culling (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::OBJ::is_culling(YS::OBJ_128 *const this)
/----- (0000000000504024) ----------------------------------------------------
void __fastcall YS::method_obj_is_culling(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::is_culling((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4));
}
// 504048: variable 'back_chain' is possibly undefined
->
/----- (00000000004656FC) ----------------------------------------------------
bool __fastcall YS::OBJ::is_culling(YS::OBJ_128 *const this)
{
  _BOOL8 result; // r3

  result = 0LL;
  if ( (*(_DWORD *)&(*this)[2040] & 0x400) != 0 )
    result = YS::BG::IsCulling((const dk::Aabbox_0 *)(unsigned int)((_DWORD)this + 1856));
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

