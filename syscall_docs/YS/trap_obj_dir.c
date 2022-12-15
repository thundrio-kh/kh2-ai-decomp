---
---
---
name: trap_obj_dir
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
syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_dir(YS::OBJ_125 *const this, YS::OBJ_126 *a2)
/----- (00000000004F88A4) ----------------------------------------------------
void __fastcall YS::trap_obj_dir(BD_VALUE_21 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r29
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v5; // [sp+70h] [-40h] BYREF

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
  YS::OBJ::get_dir((YS::OBJ_125 *const)&v5, (YS::OBJ_126 *)*(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 4F88D4: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;
->
/----- (0000000000460ED8) ----------------------------------------------------
void __fastcall YS::OBJ::get_dir(YS::OBJ_125 *const this, YS::OBJ_126 *a2)
{
  int v2; // r31
  double v4; // fp31
  double v5; // fp1
  float v6[6]; // [sp+70h] [-30h] BYREF

  v2 = (int)a2;
  if ( YS::OBJ::is_attach(a2) )
  {
    v4 = f_atan2f(-*(float *)(unsigned int)(v2 + 96), -*(float *)((unsigned int)(v2 + 96) + 8LL));
    YS::MATH::RotToDir(v6, v4);
    *(float *)&(*this)[0] = v6[0];
    *(float *)&(*this)[4] = v6[1];
    v5 = v6[2];
    *(float *)&(*this)[12] = v4;
    *(float *)&(*this)[8] = v5;
  }
  else
  {
    *(float *)&(*this)[0] = *(float *)(unsigned int)(v2 + 1360);
    *(float *)&(*this)[4] = *(float *)((unsigned int)(v2 + 1360) + 4LL);
    *(float *)&(*this)[8] = *(float *)((unsigned int)(v2 + 1360) + 8LL);
    *(float *)&(*this)[12] = *(float *)((unsigned int)(v2 + 1360) + 0xCLL);
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

