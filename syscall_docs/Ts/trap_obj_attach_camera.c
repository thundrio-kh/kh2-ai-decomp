---
---
---
name: trap_obj_attach_camera
---
---
---
category: camera
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 6, 35 ; trap_obj_attach_camera (1 in, 0 out)
---
---
---
description: attach the camera to an object
---
---
---
decompiled code:
void __fastcall YS::OBJ::attach_camera(YS::OBJ_130 *const this, kn::FMatrix *matrix)
/----- (00000000006268F0) ----------------------------------------------------
void __fastcall Ts::trap_obj_attach_camera(BD_VALUE_25 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
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
  YS::OBJ::attach_camera((YS::OBJ_130 *const)*(unsigned int *)(v1 + 4), 0LL);
}
// 626910: variable 'back_chain' is possibly undefined
->
/----- (0000000000469CBC) ----------------------------------------------------
void __fastcall YS::OBJ::attach_camera(YS::OBJ_130 *const this, kn::FMatrix *matrix)
{
  int *v2; // r5
  int v3; // r7

  v2 = (int *)(unsigned int)((_DWORD)this + 268);
  v3 = *v2;
  *(_DWORD *)&(*this)[1936] = (_DWORD)matrix;
  *v2 = v3 | 0x40;
  *(_DWORD *)(unsigned int)((_DWORD)this + 1896) |= 0x1000u;
}


---
---
---
appears in:

---
---
---
example usage from NA

