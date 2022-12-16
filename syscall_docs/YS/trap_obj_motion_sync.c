---
---
---
name: trap_obj_motion_sync
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
push unk1 ; (unknown)  (pushFromPSp: 12) (pushFromPSpVal: 0) (pushFromFSp: 0)
push unk2 ; (unknown)  (pushFromFSp: 0,8) (pushFromPSpVal: 160,64) (pushFromPSp: 16,4)
syscall 1, 126 ; trap_obj_motion_sync (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::sync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
/----- (00000000004FF258) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_sync(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r31
  YS::MOTION_289 *v5; // r30
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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v2 + 4) + 320);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
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
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::MOTION::sync(v5, (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v4 + 4) + 320));
}
// 4FF27C: variable 'back_chain' is possibly undefined
->
/----- (000000000045C890) ----------------------------------------------------
void __fastcall YS::MOTION::sync(YS::MOTION_289 *const this, YS::MOTION_289 *child)
{
  int v2; // r5
  unsigned __int64 v3; // r6

  v2 = *(_DWORD *)&(*this)[152];
  v3 = (unsigned int)((_DWORD)child + 156);
  if ( v2 )
  {
    *(_DWORD *)(unsigned int)(v2 + 156) = (_DWORD)child;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)&(*this)[152] = (_DWORD)child;
  }
  else
  {
    *(_DWORD *)&(*this)[152] = (_DWORD)child;
    *(_DWORD *)&(*this)[148] = (_DWORD)child;
    *(_DWORD *)v3 = 0;
  }
}


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
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
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
obj\P_HE000_NPC_QSATO\npc_.bdscript ((P) Auron (NPC_QSATO))
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
