---
---
---
name: trap_chickenlittle_set_shoot_target
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
push unk2 ; (unknown)  (pushFromPSp: 16)
syscall 10, 59 ; trap_chickenlittle_set_shoot_target (2 in, 0 out)

---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::ChickenLittle::set_shoot_target(kn::ChickenLittle *const this, const kn::FVector *target_pos)
/----- (00000000006149B0) ----------------------------------------------------
void __fastcall kn::trap_chickenlittle_set_shoot_target(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::ChickenLittle *v4; // r3
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
  v4 = (kn::ChickenLittle *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::ChickenLittle::set_shoot_target(v4, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 6149D4: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::ChickenLittle::set_shoot_target
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (0000000000133530) ----------------------------------------------------
void __fastcall kn::ChickenLittle::set_shoot_target(kn::ChickenLittle *const this, const kn::FVector *target_pos)
{
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 64), target_pos);
}


---
---
---
appears in:
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EX350\p_ex.bdscript
L409:
 syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
 jz L422
 pushFromPWp W0
 pushFromPSp 16
 syscall 10, 59 ; trap_chickenlittle_set_shoot_target (2 in, 0 out)
 halt 
 jmp L409
