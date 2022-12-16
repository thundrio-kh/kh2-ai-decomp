---
---
---
name: trap_genie_change_form
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
push unk1 ; (unknown)  (pushFromPWp: W312)
push unk2 ; (unknown)  (pushFromFSp: 4)
syscall 10, 9 ; trap_genie_change_form (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Genie::changeForm(kn::Genie *const this, int formCommand)
/----- (00000000006116F0) ----------------------------------------------------
void __fastcall kn::trap_genie_change_form(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::Genie *v4; // r3
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
  v4 = (kn::Genie *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::Genie::changeForm(v4, *(_DWORD *)&(*args)[4]);
}
// 611714: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Genie::changeForm
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (00000000000E8D90) ----------------------------------------------------
void __fastcall kn::Genie::changeForm(kn::Genie *const this, int formCommand)
{
  __int64 v3; // r28
  int v4; // r30
  __int64 v5; // r27
  int v6; // r28

  v3 = 0LL;
  v4 = 0;
  this->formCommand_ = formCommand;
  v5 = 0LL;
  do
  {
    YS::OBJ::hide_part(
      (YS::OBJ_130 *const)*(unsigned int *)&this->baseclass_0[4],
      *(__int16 *)((char *)&kn::command + (int)v5 + 4));
    ++v3;
    v5 += 6LL;
  }
  while ( (int)v3 < 6 );
  v6 = 0;
  while ( this->formCommand_ != *(__int16 *)((char *)&kn::command + v4) )
  {
    ++v6;
    v4 += 6;
    if ( v6 >= 6 )
      goto _noname_;
  }
  YS::OBJ::show_part(
    (YS::OBJ_130 *const)*(unsigned int *)&this->baseclass_0[4],
    *((__int16 *)&kn::command + 3 * v6 + 2));
_noname_:
  YS::SUMMON::ChangeGenieForm(v6 + 1);
}
// 7F5728: using guessed type void *kn::command;


---
---
---
appears in:
obj\P_AL010\p_al.bdscript ((P) Genie)
---
---
---
example usage from obj\P_AL010\p_al.bdscript
L68:
 pushFromPWp W312
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPWp W312
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPWp W312
 pushFromFSp 4
 syscall 10, 9 ; trap_genie_change_form (2 in, 0 out)
 pushFromPWp W312
 fetchValue 24
 pushImm 0
 sub 
 neqz 
 jz L137
 pushFromPWp W312
 fetchValue 24
 syscall 0, 51 ; trap_effect_kill (1 in, 0 out)
 pushFromPWp W312
 pushImm 24
 add 
 pushImm 0
 memcpy 0
 pushFromPWp W312
 pushImm 20
 add 
 pushImm 1
 memcpy 0
 jmp L137
