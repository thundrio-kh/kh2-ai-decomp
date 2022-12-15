---
---
---
name: trap_get_start_rtn_action
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
syscall 5, 0 ; trap_get_start_rtn_action (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::NPC::get_start_rtn_action(YS::NPC_0 *const this)
/----- (0000000000658988) ----------------------------------------------------
void __fastcall Ti::trap_get_start_rtn_action(BD_VALUE_26 *args)
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
  *(_DWORD *)args = YS::NPC::get_start_rtn_action((YS::NPC_0 *const)*(unsigned int *)(v2 + 4));
}
// 6589AC: variable 'back_chain' is possibly undefined
->
/----- (00000000004EFF48) ----------------------------------------------------
__int64 __fastcall YS::NPC::get_start_rtn_action(YS::NPC_0 *const this)
{
  __int64 v3; // r29
  kn::FVector *v4; // r4
  YS::ZONE_18 *v5; // r3
  BOOL v6; // r30
  double v7; // fp1

  if ( (*this)[2672] )
    return 0LL;
  v3 = 0LL;
  v4 = (kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)this);
  if ( (*this)[2673] )
    goto LABEL_9;
  v5 = (YS::ZONE_18 *)*(unsigned int *)&(*this)[2656];
  if ( (_DWORD)v5 )
  {
    v6 = *(float *)&(*this)[2668] < 0.5;
    v7 = YS::ZONE::calc_rtn_action_point(v5, v4);
    if ( v6 )
    {
      if ( v7 < *(float *)&(*this)[2664] )
        return v3;
      goto LABEL_9;
    }
    if ( v7 <= *(float *)&(*this)[2664] )
    {
LABEL_9:
      v3 = 1LL;
      (*this)[2672] = 1;
    }
  }
  return v3;
}


---
---
---
appears in:

---
---
---
example usage from NA

