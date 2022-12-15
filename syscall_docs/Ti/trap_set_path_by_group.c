---
---
---
name: trap_set_path_by_group
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
syscall 5, 24 ; trap_set_path_by_group (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::UNIT_GROUP_8 *__fastcall YS::UNIT_GROUP::Search(int id)
__int64 __fastcall YS::OBJ::set_path(YS::OBJ_133 *const this, __int64 serial, YS::UNIT_GROUP_3 *group)
/----- (000000000065B614) ----------------------------------------------------
void __fastcall Ti::trap_set_path_by_group(BD_VALUE_26 *args)
{
  int v2; // r30
  YS::UNIT_GROUP_3 *v3; // r29
  __int64 v4; // r30
  unsigned __int64 v5; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0;
  v3 = YS::UNIT_GROUP::Search(*(_DWORD *)&(*args)[4] & 0xFFFEFFFF);
  if ( (_DWORD)v3 )
  {
    v4 = *(unsigned int *)args;
    v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( !(_DWORD)v4 )
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
    if ( (v4 & 3) != 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(((u_int)arg) & 3) == 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        49LL,
        "ToOBJ",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
    }
    v2 = YS::OBJ::set_path((YS::OBJ_133 *const)*(unsigned int *)(v4 + 4), -1LL, v3);
  }
  *(_DWORD *)args = v2;
}
// 65B668: variable 'back_chain' is possibly undefined

//COMPLICATED YS::UNIT_GROUP::Search YS::OBJ::set_path
->
/----- (00000000004B245C) ----------------------------------------------------
YS::UNIT_GROUP_8 *__fastcall YS::UNIT_GROUP::Search(int id)
{
  int v1; // r8
  void *v2; // r4

  v1 = 0;
  if ( YS::GroupPt <= 0 )
    return 0LL;
  v2 = &YS::Group;
  while ( *(unsigned __int16 *)(*(unsigned int *)((unsigned int)v2 + 8LL) + 2LL) != id )
  {
    ++v1;
    LODWORD(v2) = (_DWORD)v2 + 56;
    if ( YS::GroupPt <= v1 )
      return 0LL;
  }
  return (YS::UNIT_GROUP_8 *)((unsigned int)&YS::Group + 56 * v1);
}
// 7FE858: using guessed type int YS::GroupPt;


->
/----- (0000000000471958) ----------------------------------------------------
__int64 __fastcall YS::OBJ::set_path(YS::OBJ_133 *const this, __int64 serial, YS::UNIT_GROUP_3 *group)
{
  YS::UNIT_GROUP_3 *v4; // r31
  unsigned int *v6; // r28
  const YS::UNIT_DATA_PATH_0 *v7; // r27
  const kn::FVector *v8; // r3

  v4 = group;
  v6 = (unsigned int *)*(unsigned int *)&(*this)[1288];
  if ( !(_DWORD)group )
    v4 = (YS::UNIT_GROUP_3 *)*(unsigned int *)&(*this)[2072];
  if ( (_DWORD)v6 )
  {
    Ti::Path::~Path((Ti::Path_3 *const)*(unsigned int *)&(*this)[1288]);
    AREA::Free(v6);
    *(_DWORD *)&(*this)[1288] = 0;
  }
  v7 = 0LL;
  if ( !(_DWORD)v4 || (v7 = YS::UNIT_GROUP::get_path(v4, serial), !(_DWORD)v7) )
  {
    if ( (*(_DWORD *)&(*this)[1416] & 0x80) != 0 )
      v7 = YS::UNIT::GetPath(serial);
  }
  if ( !(_DWORD)v7 )
    return 0LL;
  v8 = (const kn::FVector *)YS::OBJ::get_pos(this);
  *(_DWORD *)&(*this)[1288] = (unsigned int)Ti::Path::Create(this, v7, v8, 8.0);
  return 1LL;
}


---
---
---
appears in:

---
---
---
example usage from NA

