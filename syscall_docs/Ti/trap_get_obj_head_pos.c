---
---
---
name: trap_get_obj_head_pos
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
syscall 5, 34 ; trap_get_obj_head_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_head_pos(YS::OBJ_125 *const this, __int64 a2)
/----- (0000000000659830) ----------------------------------------------------
void __fastcall Ti::trap_get_obj_head_pos(BD_VALUE_26 *args)
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
  YS::OBJ::get_head_pos((YS::OBJ_125 *const)&v5, *(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
}
// 659860: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (00000000004619F4) ----------------------------------------------------
void __fastcall YS::OBJ::get_head_pos(YS::OBJ_125 *const this, __int64 a2)
{
  const YS::COLLISION_ELEM_0 *v2; // r29
  YS::COLLISION_DATA_0 *v5; // r3
  BOOL v6; // r4
  int v7[8]; // [sp+70h] [-50h] BYREF
  YS::TARGET_108 v8; // [sp+90h] [-30h] BYREF

  v2 = 0LL;
  v7[3] = 0;
  v7[6] = 0;
  v7[5] = 0;
  v7[4] = 0;
  v7[7] = 1065353216;
  v5 = (YS::COLLISION_DATA_0 *)*(unsigned int *)(a2 + 2264);
  if ( !(_DWORD)v5 )
    goto LABEL_6;
  do
  {
    v2 = (const YS::COLLISION_ELEM_0 *)YS::COLLISION_DATA::next_elem(v5, 17, v2);
    if ( !(_DWORD)v2 )
      break;
    v6 = YS::OBJ::is_enable_collision((YS::OBJ_128 *const)a2, v2->Group);
    v5 = (YS::COLLISION_DATA_0 *)*(unsigned int *)(a2 + 2264);
  }
  while ( !v6 );
  if ( (_DWORD)v2 )
  {
    YS::COLLISION::set((YS::COLLISION_33 *const)v7, (YS::OBJ_95 *)a2, v2);
    *(float *)&(*this)[0] = *(float *)&v7[4];
    *(float *)&(*this)[4] = *(float *)&v7[5];
    *(float *)&(*this)[8] = *(float *)&v7[6];
    *(float *)&(*this)[12] = *(float *)&v7[7];
  }
  else
  {
LABEL_6:
    YS::TARGET::clear((YS::TARGET_108 *const)v8);
    YS::TARGET::set_obj((YS::TARGET_108 *const)v8, (YS::OBJ_168 *)a2, 0);
    YS::TARGET::get_pos((const YS::TARGET_108 *const)this, (const YS::TARGET_108 *)v8);
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

