---
---
---
name: trap_obj_hop_direct
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPSpVal: 0)
push unk2 ; (unknown)  (pushFromPSp: 16,48)
push unk3 ; (unknown)  (pushImmf: 30)
push unk4 ; (unknown)  (pushImmf: 0,0.98)
syscall 6, 42 ; trap_obj_hop_direct (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
/----- (0000000000627080) ----------------------------------------------------
void __fastcall Ts::trap_obj_hop_direct(BD_VALUE_25 *args)
{
  __int64 v2; // r31
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
  YS::OBJ::prepare_hop(
    (YS::OBJ_88 *const)*(unsigned int *)(v2 + 4),
    (RCFVector)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
  v4 = *(unsigned int *)args;
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
  YS::OBJ::change_action((YS::OBJ_125 *const)*(unsigned int *)(v4 + 4), HOP);
}
// 6270A4: variable 'back_chain' is possibly undefined
->
/----- (0000000000461364) ----------------------------------------------------
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
{
  YS::ACTION_180 *v4; // r3
  int v5; // r30

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0xCLL))();
  v4 = YS::ACTION::Get(id);
  v5 = (int)v4;
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v4 + 8LL))();
  *(_DWORD *)&(*this)[12] = v5;
}


---
---
---
appears in:
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
---
---
---
example usage from obj\M_EX530\m_ex.bdscript
L8286:
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 150
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 30
 pushImmf 0.98
 syscall 6, 42 ; trap_obj_hop_direct (4 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)
 pushImmf 40
 gosub 12, L1505
