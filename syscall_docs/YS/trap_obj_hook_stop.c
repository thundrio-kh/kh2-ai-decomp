---
---
---
name: trap_obj_hook_stop
---
---
---
category: friend
---
---
---
documentation level: incomplete
---
---
---
push unk1 ; (unknown)  (pushFromPSpVal: 20,4) (pushFromFSp: 0,4,8) (pushFromPSp: 16,32) (add: )
syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
---
---
---
description: Stops the hook
---
---
---
decompiled code:
void __fastcall YS::PARTY::hook(YS::PARTY_63 *const this, YS::VM_332 *vm)
/----- (00000000004FD3EC) ----------------------------------------------------
void __fastcall YS::trap_obj_hook_stop(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

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
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  YS::PARTY::hook((YS::PARTY_63 *const)v3, 0LL);
}
// 4FD40C: variable 'back_chain' is possibly undefined
->
/----- (0000000000478424) ----------------------------------------------------
void __fastcall YS::PARTY::hook(YS::PARTY_63 *const this, YS::VM_332 *vm)
{
  int v3; // r30
  unsigned int *v4; // r31

  v3 = (int)vm;
  v4 = (unsigned int *)*(unsigned int *)&(*this)[2796];
  if ( (_DWORD)v4 )
  {
    YS::VM::~VM((YS::VM_377 *const)*(unsigned int *)&(*this)[2796]);
    YS::VM::operator delete(v4);
  }
  *(_DWORD *)&(*this)[2796] = v3;
}


---
---
---
appears in:
limit\auron\limi.bdscript
limit\beast\limi.bdscript
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\auron\limi.bdscript
L2149:
 popToSp 0
 pushFromPSpVal 4
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromPSpVal 4
 pushImm 257
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 4
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromPSpVal 20
 pushImm 257
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 20
 pushImm 3
 syscall 1, 115 ; trap_obj_set_jump_motion (2 in, 0 out)
 pushFromPSpVal 20
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPAi L3411 ; ___ai '10' (L3411)
 pushImmf 500
 pushImm 0
 syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
 pushFromPWp W108
 pushImm 44
 add 
 pushImm 0
 memcpy 0
 pushFromPSpVal 4
 gosub 4, L2267
 ret 
