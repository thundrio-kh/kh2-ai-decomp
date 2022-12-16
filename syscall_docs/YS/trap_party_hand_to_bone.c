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
push unk1 ; (unknown)  (pushFromPSp: 12,8) (pushFromFSp: 0)
push unk2 ; (unknown)  (pushFromFSp: 4) (pushImm: 0)
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
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\riku\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\donald2\limi.bdscript
L4229:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromPSp 12
 pushFromFSp 8
 fetchValue 4
 gosub 12, L221
 pushFromFSp 0
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 eqz 
 jz L4279
 pushFromPSp 12
 pushFromFSp 0
 syscall 1, 126 ; trap_obj_motion_sync (2 in, 0 out)
 pushFromFSp 0
 pushFromPSp 12
 pushFromPSp 12
 pushFromFSp 4
 syscall 1, 235 ; trap_party_hand_to_bone (2 in, 1 out)
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 jmp L4279
