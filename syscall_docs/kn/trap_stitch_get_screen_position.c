---
---
---
name: trap_stitch_get_screen_position
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push friend ; (kn::Friend_0 *)  (A friend object)
syscall 10, 2 ; trap_stitch_get_screen_position (1 in, 1 out)
pop pos ; (kn::FVector *)
---
---
---
description: Get the position of stitch on the screen
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Stitch::get_screen_position(kn::Stitch *const this, int a2)
/----- (0000000000610DD8) ----------------------------------------------------
void __fastcall kn::trap_stitch_get_screen_position(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  int v4; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v6; // [sp+70h] [-30h] BYREF

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
  v4 = (unsigned int)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::Stitch::get_screen_position((kn::Stitch *const)&v6, v4);
  kn::FVector::operator=((kn::FVector *const)&kn::resultVector, &v6);
  *(_DWORD *)args = (unsigned int)&kn::resultVector;
}
// 610DFC: variable 'back_chain' is possibly undefined
// 3EAC580: using guessed type int kn::resultVector;

//COMPLICATED kn::Friend::getPersonality kn::Stitch::get_screen_position
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (000000000010A6B8) ----------------------------------------------------
void __fastcall kn::Stitch::get_screen_position(kn::Stitch *const this, int a2)
{
  float *v2; // r4
  double v3; // fp2
  double v4; // fp1
  double v5; // fp2

  v2 = (float *)(unsigned int)(a2 + 1600);
  v3 = v2[1];
  *(float *)this->baseclass_0 = *v2;
  v4 = v2[2];
  *(float *)&this->baseclass_0[4] = v3;
  v5 = v2[3];
  *(float *)&this->baseclass_0[8] = v4;
  *(float *)&this->baseclass_0[12] = v5;
}


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L3526:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 syscall 10, 2 ; trap_stitch_get_screen_position (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSp 8
 syscall 2, 25 ; trap_attack_get_param_id (1 in, 1 out)
 pushImm 1150
 sub 
 eqz 
 jz L3660
 pushFromPSp 16
 fetchValue 12
 syscall 0, 43 ; trap_fixrad (1 in, 1 out)
 syscall 0, 23 ; trap_absf (1 in, 1 out)
 pushImmf 1.570796
 subf 
 infoezf 
 jz L3609
 pushFromPSp 16
 fetchValue 0
 pushImmf 0
 subf 
 infoezf 
 jz L3595
 pushFromFSp 0
 fetchValue 4
 pushImm 202
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L3607
