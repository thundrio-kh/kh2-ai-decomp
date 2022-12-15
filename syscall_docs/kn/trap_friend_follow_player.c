---
---
---
name: trap_friend_follow_player
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
syscall 10, 20 ; trap_friend_follow_player (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::followPlayer(kn::Friend_0 *const this)
kn::FVector *__fastcall kn::Friend::getMovement(kn::Friend_0 *const this)
kn::FVector *__fastcall kn::Friend::getInertia(kn::Friend_0 *const this)
/----- (0000000000612260) ----------------------------------------------------
void __fastcall kn::trap_friend_follow_player(BD_VALUE_22 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  kn::Friend_0 *v3; // r31
  const kn::FVector *v4; // r3
  const kn::FVector *v5; // r3
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
  v3 = (kn::Friend_0 *)*(unsigned int *)(v1 + 4);
  kn::Friend::followPlayer(v3);
  v4 = kn::Friend::getMovement(v3);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)v3 + 16), v4);
  v5 = kn::Friend::getInertia(v3);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)v3 + 32), v5);
}
// 612280: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::followPlayer kn::Friend::getMovement kn::Friend::getInertia
->
/----- (00000000000DF980) ----------------------------------------------------
void __fastcall kn::Friend::followPlayer(kn::Friend_0 *const this)
{
  int v2; // r4
  kn::Friend_0 *v3; // r3
  unsigned __int64 v4; // r31
  double v5; // fp1
  kn::Friend_0 *v6; // r3
  unsigned __int64 v7; // r31
  double v8; // fp1

  kn::Friend::followMove(this, (const kn::VecSet *)(unsigned int)((_DWORD)this + 2960));
  v2 = *(_DWORD *)&(*this)[2928];
  if ( v2 == 16 || v2 == 15 )
  {
LABEL_5:
    v3 = this;
    v4 = (unsigned int)((_DWORD)this + 3100);
    if ( *(float *)v4 > (double)*(float *)&(*v3)[272] )
    {
      v5 = Axa::FVECTOR4::getLength((const Axa::FVECTOR4 *const)((unsigned int)kn::Friend::partyChara + 2144));
      if ( v5 > *(float *)v4 )
        *(float *)v4 = (float)v5 + (float)2.0;
    }
    return;
  }
  if ( v2 != 13 )
  {
    if ( v2 != 12 )
      return;
    goto LABEL_5;
  }
  v6 = this;
  v7 = (unsigned int)((_DWORD)this + 3100);
  if ( *(float *)v7 > (double)*(float *)&(*v6)[272] )
  {
    v8 = Axa::FVECTOR4::getLength((const Axa::FVECTOR4 *const)((unsigned int)kn::Friend::partyChara + 2144));
    if ( v8 > *(float *)v7 )
      *(float *)v7 = v8;
  }
}
// 7EF218: using guessed type void *__ptr32 kn::Friend::partyChara;


->
/----- (00000000000E5150) ----------------------------------------------------
kn::FVector *__fastcall kn::Friend::getMovement(kn::Friend_0 *const this)
{
  return (kn::FVector *)(unsigned int)((_DWORD)this + 3088);
}


->
/----- (00000000000E5160) ----------------------------------------------------
kn::FVector *__fastcall kn::Friend::getInertia(kn::Friend_0 *const this)
{
  return (kn::FVector *)(unsigned int)((_DWORD)this + 3120);
}


---
---
---
appears in:

---
---
---
example usage from NA

