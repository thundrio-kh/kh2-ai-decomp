---
---
---
name: trap_stitch_effect_kill
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
push index ; (int)  (Index of effect to kill)
syscall 10, 16 ; trap_stitch_effect_kill (2 in, 0 out)
---
---
---
description: Kill a stitch effect
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Stitch::killEffect(kn::Stitch *const this, int index)
/----- (0000000000611EE4) ----------------------------------------------------
void __fastcall kn::trap_stitch_effect_kill(BD_VALUE_22 *args)
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
  kn::Stitch::killEffect(v4, *(_DWORD *)&(*args)[4]);
}
// 611F08: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::killEffect
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (0000000000109B34) ----------------------------------------------------
void __fastcall kn::Stitch::killEffect(kn::Stitch *const this, int index)
{
  int v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  if ( index < 0 || index >= 24 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(index >= 0) && (index < EFFECT_MAX)",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
      771LL,
      "killEffect",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 771);
  }
  *(_DWORD *)(unsigned int)(v2 + (index << 6) + 32) |= 0x40000000u;
}
// 109B5C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L3436: ;___label for action pushFromPAi L3827 ; ___ai leave
 popToSp 0
 pushFromFSp 0
 gosub 4, L3514
 pushFromFSpVal 28
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushImm 0
 popToSpVal 28
 pushFromFSpVal 20
 pushImm 0
 sub 
 msbi 
 jz L3468
 pushFromFSp 0
 pushFromFSpVal 20
 syscall 10, 16 ; trap_stitch_effect_kill (2 in, 0 out)
 jmp L3468
