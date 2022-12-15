---
---
---
name: trap_stitch_set_screen_position
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
syscall 10, 1 ; trap_stitch_set_screen_position (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Stitch::set_screen_position(kn::Stitch *const this, const kn::FVector *pos)
/----- (0000000000610CB4) ----------------------------------------------------
void __fastcall kn::trap_stitch_set_screen_position(BD_VALUE_22 *args)
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
  kn::Stitch::set_screen_position(v4, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 610CD8: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::set_screen_position
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (0000000000107DD4) ----------------------------------------------------
void __fastcall kn::Stitch::set_screen_position(kn::Stitch *const this, const kn::FVector *pos)
{
  float *v3; // r30
  unsigned int v4; // r4
  __int16 v5[6]; // [sp+70h] [-20h] BYREF
  float v6; // [sp+7Ch] [-14h]

  this->work_.flag |= 1u;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1600), pos);
  v3 = (float *)(unsigned int)((_DWORD)this + 1612);
  *(_DWORD *)(unsigned int)((_DWORD)this + 1608) = 1149239296;
  *(float *)(unsigned int)((_DWORD)this + 1628) = *v3;
  v4 = *(_DWORD *)&this->baseclass_0[4];
  if ( (*(_DWORD *)(v4 + 0x10CLL) & 0x40) == 0 )
  {
    kn::Stitch::update_obj_pos(this);
    YS::OBJ::attach_camera(
      (YS::OBJ_130 *const)*(unsigned int *)&this->baseclass_0[4],
      (kn::FMatrix *)(unsigned int)((_DWORD)this + 1728));
    v4 = *(_DWORD *)&this->baseclass_0[4];
    *(_DWORD *)(v4 + 1648 + 0x28LL) = 1259902592;
  }
  YS::MOTION::get_trans((YS::MOTION_289 *const)v5, v4 + 320);
  *v3 = *v3 - v6;
}


---
---
---
appears in:

---
---
---
example usage from NA

