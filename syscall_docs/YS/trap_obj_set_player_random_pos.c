---
---
---
name: trap_obj_set_player_random_pos
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
syscall 1, 198 ; trap_obj_set_player_random_pos (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_entry_id(YS::OBJ_125 *const this)
void __fastcall YS::UNIT_GROUP::RandomPosPlayer(kn::FVector *id, OBJENTRY_ID a2)
void __fastcall YS::OBJ::set_pos(YS::OBJ_125 *const this, const kn::FVector *pos)
/----- (0000000000500DB8) ----------------------------------------------------
void __fastcall YS::trap_obj_set_player_random_pos(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  YS::OBJ_125 *v3; // r30
  OBJENTRY_ID v4; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v6; // [sp+70h] [-30h] BYREF

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
  v4 = YS::OBJ::get_entry_id(v3);
  YS::UNIT_GROUP::RandomPosPlayer(&v6, v4);
  YS::OBJ::set_pos(v3, &v6);
}
// 500DD8: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_entry_id YS::UNIT_GROUP::RandomPosPlayer YS::OBJ::set_pos
->
/----- (0000000000460824) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_entry_id(YS::OBJ_125 *const this)
{
  return *(unsigned int *)*(unsigned int *)&(*this)[8];
}


->
/----- (00000000004B0CF8) ----------------------------------------------------
void __fastcall YS::UNIT_GROUP::RandomPosPlayer(kn::FVector *id, OBJENTRY_ID a2)
{
  float *v4; // r3
  double v5; // fp2
  double v6; // fp1
  double v7; // fp3
  int v8; // r8
  int v9; // r6
  kn::FVector v10; // [sp+70h] [-40h] BYREF
  kn::FVector v11; // [sp+80h] [-30h] BYREF

  v4 = (float *)YS::OBJ::get_pos((YS::OBJ_125 *const)(unsigned int)YS::PLAYER::Player);
  v5 = v4[1];
  id->x = *v4;
  v6 = v4[2];
  id->y = v5;
  v7 = v4[3];
  id->z = v6;
  id->w = v7;
  id->y = (float)v5 + -200.0;
  if ( (YS::OBJENTRY::Get(a2)->Flag & 8) != 0 )
  {
    YS::BG::RandomPosAir(&v10, id, 150.0, 450.0, -100.0, v8, 65538, 100.0);
    kn::FVector::operator=(id, &v10);
  }
  else
  {
    YS::BG::RandomPos(&v11, id, 150.0, v9, 65537, 450.0);
    kn::FVector::operator=(id, &v11);
  }
}
// 4B0DA4: variable 'v8' is possibly undefined
// 4B0DD4: variable 'v9' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


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

