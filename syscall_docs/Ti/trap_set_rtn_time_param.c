---
---
---
name: trap_set_rtn_time_param
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
syscall 5, 33 ; trap_set_rtn_time_param (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::NPC::set_time_param(YS::NPC_0 *const this, YS::NPC::TIME_PARAM *time_param)
/----- (000000000065B00C) ----------------------------------------------------
void __fastcall Ti::trap_set_rtn_time_param(BD_VALUE_26 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 8) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "npc->is_npc()",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      273LL,
      "trap_set_rtn_time_param",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 273);
  }
  YS::NPC::set_time_param((YS::NPC_0 *const)v4, (YS::NPC::TIME_PARAM *)*(unsigned int *)&(*args)[4]);
}
// 65B030: variable 'back_chain' is possibly undefined
->
/----- (00000000004F09FC) ----------------------------------------------------
void __fastcall YS::NPC::set_time_param(YS::NPC_0 *const this, YS::NPC::TIME_PARAM *time_param)
{
  __int64 v3; // r6
  float v4; // r5
  float v5; // r7
  float v6; // r8
  float v7; // r7
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r7

  v3 = (unsigned int)((_DWORD)this + 2832);
  v4 = time_param->encount_player_max_;
  v5 = time_param->encount_player_cancel_;
  v6 = time_param->encount_friend_min_;
  *(float *)v3 = time_param->encount_player_min_;
  *(float *)(v3 + 4) = v4;
  *(float *)(v3 + 8) = v5;
  *(float *)(v3 + 0xC) = v6;
  v7 = time_param->encount_friend_cancel_;
  v8 = LODWORD(time_param->etc_action_min_);
  v9 = LODWORD(time_param->etc_action_max_);
  *(float *)(v3 + 0x10) = time_param->encount_friend_max_;
  *(float *)(v3 + 0x14) = v7;
  *(_DWORD *)(v3 + 0x18) = v8;
  *(_DWORD *)(v3 + 0x1C) = v9;
  v10 = LODWORD(time_param->etc_action_cancel_);
  *(_DWORD *)(v3 + 0x20) = v10;
  printf(
    (unsigned int)"[%s:%d]",
    (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\npc.cpp",
    88LL,
    v3,
    v10,
    (__int64)"BA image",
    v8,
    v9);
  printf(
    (unsigned int)"rtn time param :\n p(%f,%f,%f)\n f(%f,%f,%f)\n e(%f,%f,%f)\n",
    COERCE__INT64(*(float *)&(*this)[2832]),
    COERCE__INT64(*(float *)&(*this)[2836]),
    COERCE__INT64(*(float *)&(*this)[2840]),
    COERCE__INT64(*(float *)&(*this)[2844]),
    COERCE__INT64(*(float *)&(*this)[2848]),
    COERCE__INT64(*(float *)&(*this)[2852]),
    COERCE__INT64(*(float *)&(*this)[2856]));
}


---
---
---
appears in:

---
---
---
example usage from NA

