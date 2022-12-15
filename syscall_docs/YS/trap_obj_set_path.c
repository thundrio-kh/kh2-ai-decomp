---
---
---
name: trap_obj_set_path
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
syscall 1, 177 ; trap_obj_set_path (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::set_path(YS::OBJ_133 *const this, __int64 serial, YS::UNIT_GROUP_3 *group)
/----- (0000000000500B4C) ----------------------------------------------------
void __fastcall YS::trap_obj_set_path(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::set_path((YS::OBJ_133 *const)*(unsigned int *)(v2 + 4), *(int *)&(*args)[4], 0LL);
}
// 500B70: variable 'back_chain' is possibly undefined
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

