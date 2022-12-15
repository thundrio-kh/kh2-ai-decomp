---
---
---
name: trap_set_path_by_id
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
syscall 5, 23 ; trap_set_path_by_id (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::set_path_by_id(YS::OBJ_133 *const this, __int64 id)
/----- (000000000065B4F0) ----------------------------------------------------
void __fastcall Ti::trap_set_path_by_id(BD_VALUE_26 *args)
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
  *(_DWORD *)args = YS::OBJ::set_path_by_id((YS::OBJ_133 *const)*(unsigned int *)(v2 + 4), *(int *)&(*args)[4]);
}
// 65B514: variable 'back_chain' is possibly undefined
->
/----- (0000000000471A78) ----------------------------------------------------
__int64 __fastcall YS::OBJ::set_path_by_id(YS::OBJ_133 *const this, __int64 id)
{
  unsigned int *v4; // r29
  const YS::UNIT_DATA_PATH_0 *v5; // r28
  YS::UNIT_GROUP_8 *v6; // r3
  const kn::FVector *v7; // r3

  v4 = (unsigned int *)*(unsigned int *)&(*this)[1288];
  if ( (_DWORD)v4 )
  {
    Ti::Path::~Path((Ti::Path_3 *const)*(unsigned int *)&(*this)[1288]);
    AREA::Free(v4);
    *(_DWORD *)&(*this)[1288] = 0;
  }
  v5 = 0LL;
  v6 = (YS::UNIT_GROUP_8 *)*(unsigned int *)&(*this)[2072];
  if ( !(_DWORD)v6 || (v5 = YS::UNIT_GROUP::get_path_by_id(v6, id), !(_DWORD)v5) )
  {
    if ( (*(_DWORD *)&(*this)[1416] & 0x80) != 0 )
      v5 = YS::UNIT::GetPathByID(id);
  }
  if ( !(_DWORD)v5 )
    return 0LL;
  v7 = (const kn::FVector *)YS::OBJ::get_pos(this);
  *(_DWORD *)&(*this)[1288] = (unsigned int)Ti::Path::Create(this, v5, v7, 8.0);
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

