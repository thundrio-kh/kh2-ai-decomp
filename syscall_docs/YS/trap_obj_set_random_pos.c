---
---
---
name: trap_obj_set_random_pos
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
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 1, 199 ; trap_obj_set_random_pos (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_entry_id(YS::OBJ_125 *const this)
void __fastcall YS::UNIT_GROUP::RandomPos(const kn::FVector *id, const kn::FVector *pos, const kn::FVector *a3, double range, double height)
void __fastcall YS::OBJ::set_pos(YS::OBJ_125 *const this, const kn::FVector *pos)
/----- (0000000000500EEC) ----------------------------------------------------
void __fastcall YS::trap_obj_set_random_pos(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  YS::OBJ_125 *v4; // r29
  const kn::FVector *v5; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v7; // [sp+70h] [-30h] BYREF

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
  v4 = (YS::OBJ_125 *)*(unsigned int *)(v2 + 4);
  v5 = (const kn::FVector *)YS::OBJ::get_entry_id(v4);
  YS::UNIT_GROUP::RandomPos(
    &v7,
    v5,
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
  YS::OBJ::set_pos(v4, &v7);
}
// 500F10: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_entry_id YS::UNIT_GROUP::RandomPos YS::OBJ::set_pos
->
/----- (0000000000460824) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_entry_id(YS::OBJ_125 *const this)
{
  return *(unsigned int *)*(unsigned int *)&(*this)[8];
}


->
/----- (00000000004B0C28) ----------------------------------------------------
void __fastcall YS::UNIT_GROUP::RandomPos(const kn::FVector *id, const kn::FVector *pos, const kn::FVector *a3, double range, double height)
{
  int v9; // r8
  int v10; // r6

  if ( (YS::OBJENTRY::Get((OBJENTRY_ID)pos)->Flag & 8) != 0 )
    YS::BG::RandomPosAir(id, a3, 0.0, range, -height, v9, 2, height);
  else
    YS::BG::RandomPos(id, a3, 0.0, v10, 1, range);
}
// 4B0C98: variable 'v9' is possibly undefined
// 4B0CB4: variable 'v10' is possibly undefined


->
/----- (000000000045EA04) ----------------------------------------------------
void __fastcall YS::OBJ::set_pos(YS::OBJ_125 *const this, const kn::FVector *pos)
{
  unsigned __int64 v4; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_valid(this) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      604LL,
      "set_pos",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 604);
  }
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1344), pos);
  *(_DWORD *)&(*this)[1356] = 1065353216;
  YS::OBJ::make_matrix(this);
}
// 45EA28: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

