---
---
---
name: trap_camera_begin_scope
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
syscall 1, 281 ; trap_camera_begin_scope (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::ScopeCamera::create(YS::OBJ_8 *obj, double heightOffset)
/----- (0000000000509FFC) ----------------------------------------------------
void __fastcall YS::trap_camera_begin_scope(BD_VALUE_21 *args)
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
  dk::ScopeCamera::create((YS::OBJ_8 *)*(unsigned int *)(v2 + 4), *(float *)&(*args)[4]);
}
// 50A020: variable 'back_chain' is possibly undefined
->
/----- (00000000000779C4) ----------------------------------------------------
void __fastcall dk::ScopeCamera::create(YS::OBJ_8 *obj, double heightOffset)
{
  int v3; // r31

  v3 = (int)obj;
  dk::ObjCamera::cancelSubjective(30.0);
  *(_DWORD *)&(*dk::ObjCamera::getInstance())[64] = 7;
  dk::ScopeCamera::s_obj = v3;
  dk::ScopeCamera::s_heightOffset = heightOffset;
  dk::ScopeCamera::s_zoom = 0.5;
  dk::ScopeCamera::s_closeupDistance = 10.0;
  dk::ScopeCamera::s_targetPos = 0.0;
  flt_A0A438 = 0.0;
  flt_A0A434 = 0.0;
  flt_A0A43C = 1.0;
  printf(
    (unsigned int)"ScopeCamera::create\n",
    (__int64)&dk::GS_DEF_ALPHA,
    1056964608LL,
    (__int64)&dk::GS_DEF_ALPHA,
    (__int64)&dk::GS_DEF_ALPHA,
    0LL,
    1092616192LL,
    1065353216LL);
}
// A0A420: using guessed type int dk::ScopeCamera::s_obj;
// A0A424: using guessed type float dk::ScopeCamera::s_heightOffset;
// A0A428: using guessed type float dk::ScopeCamera::s_zoom;
// A0A42C: using guessed type float dk::ScopeCamera::s_closeupDistance;
// A0A430: using guessed type float dk::ScopeCamera::s_targetPos;
// A0A434: using guessed type float flt_A0A434;
// A0A438: using guessed type float flt_A0A438;
// A0A43C: using guessed type float flt_A0A43C;
// A10000: using guessed type __int64 dk::GS_DEF_ALPHA;


---
---
---
appears in:

---
---
---
example usage from NA

