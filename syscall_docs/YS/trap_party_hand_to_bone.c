---
---
---
name: trap_party_hand_to_bone
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
syscall 1, 235 ; trap_party_hand_to_bone (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::PARTY::hand_to_bone(YS::PARTY_63 *const this, int hand)
/----- (000000000050AC3C) ----------------------------------------------------
void __fastcall YS::trap_party_hand_to_bone(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  *(_DWORD *)args = YS::PARTY::hand_to_bone((YS::PARTY_63 *const)v4, *(_DWORD *)&(*args)[4]);
}
// 50AC60: variable 'back_chain' is possibly undefined
->
/----- (0000000000478180) ----------------------------------------------------
__int64 __fastcall YS::PARTY::hand_to_bone(YS::PARTY_63 *const this, int hand)
{
  int v3; // r3
  unsigned int v4; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v3 = YS::OBJ::get_skeleton_num((YS::OBJ_125 *const)this);
  v4 = (unsigned int)YS::SKELETON::Get(v3);
  if ( !v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "skeleton != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\party.cpp",
      380LL,
      "hand_to_bone",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\party.cpp", 380);
  }
  return *(__int16 *)(v4 + 2 * hand + 4);
}
// 4781B8: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

