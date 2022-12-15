---
---
---
name: trap_obj_detach_camera
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
syscall 6, 36 ; trap_obj_detach_camera (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::detach_camera(YS::OBJ_130 *const this)
/----- (0000000000626A00) ----------------------------------------------------
void __fastcall Ts::trap_obj_detach_camera(BD_VALUE_25 *args)
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
  YS::OBJ::detach_camera((YS::OBJ_130 *const)*(unsigned int *)(v1 + 4));
}
// 626A20: variable 'back_chain' is possibly undefined
->
/----- (0000000000469CEC) ----------------------------------------------------
void __fastcall YS::OBJ::detach_camera(YS::OBJ_130 *const this)
{
  unsigned int *v1; // r4
  int v2; // r7

  v1 = (unsigned int *)(unsigned int)((_DWORD)this + 268);
  v2 = *v1;
  *(_DWORD *)&(*this)[1936] = 0;
  *v1 = v2 & 0xFFFFFFBF;
  *(_DWORD *)(unsigned int)((_DWORD)this + 1896) &= 0xFFFFEFFF;
}


---
---
---
appears in:

---
---
---
example usage from NA

