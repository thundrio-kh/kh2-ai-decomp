---
---
---
name: trap_obj_show_picture
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
syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
dk::Layout_0 *__fastcall YS::STDOBJ::show_picture(YS::STDOBJ_112 *const this, int num)
/----- (00000000004FA000) ----------------------------------------------------
void __fastcall YS::trap_obj_show_picture(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  if ( (*(_DWORD *)(v4 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  *(_DWORD *)args = (unsigned int)YS::STDOBJ::show_picture((YS::STDOBJ_112 *const)v4, *(_DWORD *)&(*args)[4]);
}
// 4FA024: variable 'back_chain' is possibly undefined
->
/----- (00000000004A2404) ----------------------------------------------------
dk::Layout_0 *__fastcall YS::STDOBJ::show_picture(YS::STDOBJ_112 *const this, int num)
{
  const YS::BINARC_47 *v4; // r3
  unsigned __int64 v5; // r30
  unsigned __int64 v6; // r3
  unsigned __int64 v7; // r29
  unsigned int *v8; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (const YS::BINARC_47 *)*(unsigned int *)&(*this)[1968];
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ObjData.get_apdx() != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      218LL,
      "show_picture",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 218);
    v4 = (const YS::BINARC_47 *)*(unsigned int *)&(*this)[1968];
  }
  v6 = YS::BINARC::get_info(v4, 0x2Eu, 0LL);
  v7 = v6;
  if ( !(_DWORD)v6 || (v8 = (unsigned int *)*(unsigned int *)(v6 + 8), !(_DWORD)v8) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "info->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      220LL,
      "show_picture",
      (const void *)v5);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 220);
    v8 = (unsigned int *)*(unsigned int *)(v7 + 8);
  }
  return dk::Layout::create(v8, num);
}
// 4A242C: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

