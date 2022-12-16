---
---
---
name: trap_stitch_move_request
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
push unk1 ; (unknown)  (pushFromFSp: 0)
push unk2 ; (unknown)  (pushImm: 0)
syscall 10, 32 ; trap_stitch_move_request (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Stitch::move_request(kn::Stitch *const this, int move_target)
/----- (0000000000613138) ----------------------------------------------------
void __fastcall kn::trap_stitch_move_request(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::Stitch *v4; // r3
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
  v4 = (kn::Stitch *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::Stitch::move_request(v4, *(_DWORD *)&(*args)[4]);
}
// 61315C: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::move_request
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (000000000010C520) ----------------------------------------------------
void __fastcall kn::Stitch::move_request(kn::Stitch *const this, int move_target)
{
  kn::FriendAction *v3; // r3
  kn::Friend_0 *v4; // r31
  int v5; // r3

  kn::Stitch::calc_move_target(this, move_target);
  YS::MOTION::change((YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)&this->baseclass_0[4] + 320), 161, 4.0, 0.0);
  v3 = kn::FriendPersonality::proc2Action((kn::FriendPersonality_0 *const)this, (FriendActionProc)LS_169_LV_52);
  if ( (_DWORD)v3 )
  {
    kn::Friend::setLastAction((kn::Friend_0 *const)*(unsigned int *)&this->baseclass_0[4], v3, 0LL);
    v4 = (kn::Friend_0 *)*(unsigned int *)&this->baseclass_0[4];
    v5 = kn::Friend::getFlag(v4);
    kn::Friend::setFlag(v4, v5 | 4);
  }
}
// 7F65B8: using guessed type void *LS_169_LV_52;


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L3314:
 popToSp 0
 gosub 12, L1348
 memcpyToSp 16, 32
 pushFromPSp 32
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSp 16
 pushImmf -400
 pushImmf 200
 pushImmf 0
 pushImmf 0
 gosub 12, L403
 pushFromFSp 0
 pushFromPSp 16
 syscall 10, 1 ; trap_stitch_set_screen_position (2 in, 0 out)
 pushFromFSp 0
 pushImm 8
 pushFromFSp 0
 pushImm 16384
 pushImm -1
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 0
 pushFromFSp 0
 pushImm 16384
 pushImm -1
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
 popToSpVal 20
 pushFromFSp 0
 pushImm 0
 syscall 10, 32 ; trap_stitch_move_request (2 in, 0 out)
 pushFromFSp 0
 pushImm 13
 pushImm 0
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 ret 
