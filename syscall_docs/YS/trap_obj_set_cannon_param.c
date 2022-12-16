---
---
---
name: trap_obj_set_cannon_param
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
push unk1 ; (unknown)  (pushFromPWp: W0)
push unk2 ; (unknown)  (pushImmf: 1)
push unk3 ; (unknown)  (pushImmf: 60)
push unk4 ; (unknown)  (pushImmf: 0)
push unk5 ; (unknown)  (pushImmf: 0)
syscall 1, 333 ; trap_obj_set_cannon_param (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::NMPLAYER::set_param(YS::NMPLAYER_1 *const this, double h_speed, double h_limit, double v_speed, double v_limit)
/----- (00000000004FAE94) ----------------------------------------------------
void __fastcall YS::trap_obj_set_cannon_param(BD_VALUE_21 *args)
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
  YS::NMPLAYER::set_param(
    (YS::NMPLAYER_1 *const)*(unsigned int *)(v2 + 4),
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    *(float *)&(*args)[16]);
}
// 4FAEB8: variable 'back_chain' is possibly undefined
->
/----- (00000000004EE5A8) ----------------------------------------------------
void __fastcall YS::NMPLAYER::set_param(YS::NMPLAYER_1 *const this, double h_speed, double h_limit, double v_speed, double v_limit)
{
  this->HRotSpeed = (float)h_speed * (float)0.017453292;
  this->HRotLimit = (float)h_limit * (float)0.017453292;
  this->VRotSpeed = (float)v_speed * (float)0.017453292;
  this->VRotLimit = (float)v_limit * (float)0.017453292;
}


---
---
---
appears in:
obj\F_NM180\f_nm.bdscript ((F) Present minigame (shooting machine) (NM))
---
---
---
example usage from obj\F_NM180\f_nm.bdscript
TR0:
 popToSp 0
 pushFromPSp 16
 pushImmf 0
 pushImmf -140
 pushImmf 130
 pushImmf 1
 gosub 16, L714
 pushFromPSp 32
 pushImmf 0
 pushImmf -70
 pushImmf -70
 pushImmf 1
 gosub 16, L714
 pushFromPWp W0
 pushFromFSp 0
 gosub 16, L741
 pushFromPWp W0
 pushFromPSp 16
 pushFromPSp 32
 syscall 1, 330 ; trap_obj_set_cannon_camera_offset (3 in, 0 out)
 pushFromPWp W0
 pushImmf 1
 pushImmf 60
 pushImmf 0
 pushImmf 0
 syscall 1, 333 ; trap_obj_set_cannon_param (5 in, 0 out)
 ret 
