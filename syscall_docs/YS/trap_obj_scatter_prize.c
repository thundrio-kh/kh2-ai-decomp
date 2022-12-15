---
---
---
name: trap_obj_scatter_prize
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
syscall 1, 92 ; trap_obj_scatter_prize (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::scatter_prize(YS::OBJ_125 *const this, int id)
/----- (00000000004FCE9C) ----------------------------------------------------
void __fastcall YS::trap_obj_scatter_prize(BD_VALUE_21 *args)
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
  YS::OBJ::scatter_prize((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 4FCEC0: variable 'back_chain' is possibly undefined
->
/----- (0000000000461C08) ----------------------------------------------------
void __fastcall YS::OBJ::scatter_prize(YS::OBJ_125 *const this, int id)
{
  double v4; // fp2
  double v5; // fp1
  kn::FVector v6; // [sp+70h] [-70h] BYREF
  YS::TARGET_108 v7; // [sp+80h] [-60h] BYREF
  int v8; // [sp+94h] [-4Ch]
  int v9; // [sp+98h] [-48h]
  int v10; // [sp+9Ch] [-44h]
  YS::TARGET_108 v11; // [sp+B0h] [-30h] BYREF

  v9 = 0;
  v8 = 0;
  *(_DWORD *)&v7[16] = 0;
  v10 = 1065353216;
  v4 = *(float *)&(*this)[1532];
  v6.x = *(float *)(unsigned int)((_DWORD)this + 1344);
  v5 = (float)(*(float *)((unsigned int)((_DWORD)this + 1344) + 4LL) - (float)v4);
  v6.z = *(float *)((unsigned int)((_DWORD)this + 1344) + 8LL);
  v6.w = *(float *)((unsigned int)((_DWORD)this + 1344) + 0xCLL);
  v6.y = v5;
  YS::TARGET::clear((YS::TARGET_108 *const)v11);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v11, this, 0);
  YS::TARGET::get_pos((const YS::TARGET_108 *const)v7, (const YS::TARGET_108 *)v11);
  if ( YS::BGHIT::check_line((YS::BGHIT_0 *const)&v7[16], &v6, (const kn::FVector *)v7, 6) )
    kn::FVector::operator=((kn::FVector *const)v7, (const kn::FVector *)&v7[16]);
  YS::PRIZE::Appear((const kn::FVector *)v7, id);
}


---
---
---
appears in:

---
---
---
example usage from NA

