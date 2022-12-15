---
---
---
name: trap_stitch_effect_start
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
push unk3 ; (unknown) 
push unk4 ; (unknown) 
push unk5 ; (unknown) 
push unk6 ; (unknown) 
push unk7 ; (unknown) 
push unk8 ; (unknown) 
syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
__int64 __fastcall kn::Stitch::startEffect(kn::Stitch *const this, int id, YS::OBJ_36 *obj, int bone, int motion, bool use_bone_rotation, int flag, int priority)
/----- (0000000000611A60) ----------------------------------------------------
void __fastcall kn::trap_stitch_effect_start(BD_VALUE_22 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  kn::Stitch *v4; // r28
  __int64 v5; // r31
  YS::OBJ_36 *v6; // r5
  int v7; // r29
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v5 = *(unsigned int *)&(*args)[8];
  v6 = 0LL;
  v7 = *(_DWORD *)&(*args)[4];
  if ( (_DWORD)v5 )
  {
    if ( (v5 & 3) != 0 )
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
    v6 = (YS::OBJ_36 *)*(unsigned int *)(v5 + 4);
  }
  *(_DWORD *)args = kn::Stitch::startEffect(
                      v4,
                      v7,
                      v6,
                      *(_DWORD *)&(*args)[12],
                      *(_DWORD *)&(*args)[16],
                      (_cntlzw(*(_DWORD *)&(*args)[20]) & 0x20) == 0,
                      *(_DWORD *)&(*args)[24],
                      *(_DWORD *)&(*args)[28]);
}
// 611A84: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::startEffect
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (000000000010A6E4) ----------------------------------------------------
__int64 __fastcall kn::Stitch::startEffect(kn::Stitch *const this, int id, YS::OBJ_36 *obj, int bone, int motion, bool use_bone_rotation, int flag, int priority)
{
  __int64 v8; // r29
  int v14; // r28
  int v17; // r11
  unsigned __int64 v18; // r21
  int v19; // r3
  int *v20; // r26
  int *v21; // r5
  int *v22; // r7
  unsigned __int64 v23; // r6
  unsigned __int64 v24; // r3
  unsigned int v25; // r3
  int v26; // r5
  __int64 back_chain; // [sp+0h] [-D0h]

  v8 = 0LL;
  v14 = (int)obj;
  do
  {
    v17 = (_DWORD)this + ((_DWORD)v8 << 6);
    if ( *(int *)(unsigned int)(v17 + 36) < 0 && !*(_DWORD *)(unsigned int)(v17 + 40) )
      break;
    v8 = (int)v8 + 1;
  }
  while ( (int)v8 < 24 );
  v18 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (int)v8 >= 24 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "i < EFFECT_MAX",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
      717LL,
      "alloc_effect_work",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 717);
  }
  v19 = (_DWORD)this + ((_DWORD)v8 << 6);
  v20 = (int *)(unsigned int)(v19 + 32);
  *v20 = 0;
  *(_DWORD *)(unsigned int)(v19 + 52) = motion;
  v21 = (int *)(unsigned int)(v19 + 48);
  v22 = (int *)(unsigned int)(v19 + 44);
  *(_DWORD *)(unsigned int)(v19 + 36) = id;
  v23 = (unsigned int)(v19 + 64);
  *(_DWORD *)(unsigned int)(v19 + 56) = bone;
  v24 = (unsigned int)(v19 + 80);
  *v22 = flag;
  *v21 = priority;
  *(_DWORD *)(v23 + 12) = 0;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 4) = 0;
  *(_DWORD *)v23 = 0;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 4) = 0;
  *(_DWORD *)v24 = 0;
  *(_DWORD *)(v24 + 12) = 1065353216;
  if ( v14 )
  {
    v25 = (unsigned int)kn::Friend::getPartyChara(0);
    if ( v14 == *(_DWORD *)&this->baseclass_0[4] )
    {
      v26 = *v20;
      *v20 |= 1u;
      if ( !id )
        *v20 = v26 | 0x21;
    }
    else if ( v14 == v25 )
    {
      *v20 |= 2u;
    }
    else
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "0",
        "common",
        "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
        763LL,
        "startEffect",
        (const void *)v18);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 763);
    }
  }
  if ( use_bone_rotation )
    *v20 |= 8u;
  return v8;
}
// 10A790: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

