---
---
---
name: trap_stitch_shot_effect
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
push unk1 ; (unknown)  (pushFromPWp: W108)
push unk2 ; (unknown)  (pushFromFSp: 0)
syscall 10, 13 ; trap_stitch_shot_effect (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Stitch::shotEffect(kn::Stitch *a1, int a2)
/----- (0000000000611C44) ----------------------------------------------------
void __fastcall kn::trap_stitch_shot_effect(BD_VALUE_22 *args)
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
  kn::Stitch::shotEffect(v4, *(_DWORD *)&(*args)[4]);
}
// 611C68: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::shotEffect
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (000000000010C5E0) ----------------------------------------------------
void __fastcall kn::Stitch::shotEffect(kn::Stitch *a1, int a2)
{
  __int64 v2; // ctr
  char v3; // cr32

  do
    --v2;
  while ( v2 && !v3 );
  do
    --v2;
  while ( !v2 );
  kn::Stitch::shotEffect(a1, a2);
}
// 10C5E4: variable 'v2' is possibly undefined
// 10C5E4: variable 'v3' is possibly undefined


/----- (000000000010C5F0) ----------------------------------------------------
void __fastcall kn::Stitch::shotEffect(kn::Stitch *const this, int n)
{
  __int64 v4; // r29
  YS::OBJ_36 *v5; // r27
  int v6; // r3
  int v7; // r29
  unsigned __int64 v8; // r26
  int v9; // r3
  __int64 v10; // r4
  int v11; // r3
  int v12; // r27
  int v13; // r3
  int v14; // r29
  unsigned __int64 v15; // r26
  int v16; // r3
  __int64 v17; // r4
  int v18; // r3
  int v19; // r27
  int v20; // r5
  const YS::TARGET_108 *v21; // r28
  const YS::TARGET_108 *v22; // r28
  const kn::Camera *v23; // r3
  int v24; // r3
  __int64 v25; // r29
  double v26; // fp28
  double v27; // fp1
  double v28; // fp27
  double v29; // fp1
  kn::Friend_0 *v30; // r3
  int v31; // r3
  __int64 back_chain; // [sp+0h] [-F0h]
  kn::FVector v33; // [sp+70h] [-80h] BYREF
  kn::FVector v34; // [sp+80h] [-70h] BYREF

  v4 = 0LL;
  v5 = (YS::OBJ_36 *)kn::Friend::getPartyChara(0);
  if ( n > 1 )
  {
    if ( n > 2 )
    {
      if ( n > 3 )
        goto _noname_;
      goto LABEL_17;
    }
  }
  else
  {
    if ( n <= -1 )
      goto _noname_;
    if ( n > 0 )
    {
LABEL_17:
      v13 = kn::Stitch::startEffect(this, 1, (YS::OBJ_36 *)*(unsigned int *)&this->baseclass_0[4], 54, -1, 0, 1, 0);
      v14 = v13;
      v15 = (unsigned int)*(_QWORD *)(back_chain + 16);
      if ( v13 < 0 || v13 >= 24 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "(index >= 0) && (index < EFFECT_MAX)",
          "common",
          "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
          788LL,
          "setEffectBindOnlyFirst",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 788);
      }
      v16 = v14 << 6;
      v4 = 1LL;
      v17 = (unsigned int)(*(_DWORD *)&this->baseclass_0[4] + 264);
      *(_DWORD *)(unsigned int)((_DWORD)this + v16 + 32) |= 0x10u;
      if ( (*(_DWORD *)(v17 + 4) & 0x10000) != 0 && n != 3 )
      {
        v18 = kn::Stitch::startEffect(this, 1, v5, 16387, -1, 0, 1, 0);
        v19 = v18;
        if ( v18 < 0 || v18 >= 24 )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "(index >= 0) && (index < EFFECT_MAX)",
            "common",
            "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
            788LL,
            "setEffectBindOnlyFirst",
            (const void *)v15);
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 788);
        }
        v4 = 2LL;
        *(_DWORD *)(unsigned int)((_DWORD)this + (v19 << 6) + 32) |= 0x10u;
      }
      goto _noname_;
    }
  }
  v6 = kn::Stitch::startEffect(this, 1, (YS::OBJ_36 *)*(unsigned int *)&this->baseclass_0[4], 108, -1, 0, 1, 0);
  v7 = v6;
  v8 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( v6 < 0 || v6 >= 24 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(index >= 0) && (index < EFFECT_MAX)",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
      788LL,
      "setEffectBindOnlyFirst",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 788);
  }
  v9 = v7 << 6;
  v4 = 1LL;
  v10 = (unsigned int)(*(_DWORD *)&this->baseclass_0[4] + 264);
  *(_DWORD *)(unsigned int)((_DWORD)this + v9 + 32) |= 0x10u;
  if ( (*(_DWORD *)(v10 + 4) & 0x10000) != 0 && n != 2 )
  {
    v11 = kn::Stitch::startEffect(this, 1, v5, 16387, -1, 0, 1, 0);
    v12 = v11;
    if ( v11 < 0 || v11 >= 24 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(index >= 0) && (index < EFFECT_MAX)",
        "common",
        "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
        788LL,
        "setEffectBindOnlyFirst",
        (const void *)v8);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 788);
    }
    v4 = 2LL;
    *(_DWORD *)(unsigned int)((_DWORD)this + (v12 << 6) + 32) |= 0x10u;
  }
_noname_:
  v20 = *(_DWORD *)&this->baseclass_0[4];
  if ( (*(_DWORD *)((unsigned int)(v20 + 264) + 4LL) & 0x10000) != 0 )
  {
    v21 = (const YS::TARGET_108 *)(unsigned int)(v20 + 2548);
    if ( !(unsigned int)YS::TARGET::is_exist(v21)
      || !*(_DWORD *)v21
      || !(unsigned int)YS::TARGET::can_attack((const YS::TARGET_108 *const)(unsigned int)(*(_DWORD *)&this->baseclass_0[4]
                                                                                         + 2548)) )
    {
      kn::Stitch::set_target(this);
    }
    v22 = (const YS::TARGET_108 *)(unsigned int)(*(_DWORD *)&this->baseclass_0[4] + 2548);
    if ( (unsigned int)YS::TARGET::is_exist(v22) )
    {
      if ( *(_DWORD *)v22 )
      {
        if ( (unsigned int)YS::TARGET::can_attack((const YS::TARGET_108 *const)(unsigned int)(*(_DWORD *)&this->baseclass_0[4]
                                                                                            + 2548)) )
        {
          v33.z = 0.0;
          v33.y = 0.0;
          v33.x = 0.0;
          v33.w = 1.0;
          v23 = kn::getCamera(1);
          kn::Camera::getPosition(v23, &v33);
          v24 = v4;
          v25 = v4 - 1;
          if ( v24 > 0 )
          {
            do
            {
              v34.z = 0.0;
              v34.y = 0.0;
              v34.x = 0.0;
              v34.w = 1.0;
              kn::FVector::operator=(&v34, &v33);
              v26 = v34.x;
              v27 = kn::Friend::getFRand();
              v28 = v34.y;
              v34.x = (float)((float)((float)((float)v27 - (float)0.5) * (float)2.0) * (float)200.0) + (float)v26;
              v29 = kn::Friend::getFRand();
              v30 = (kn::Friend_0 *)*(unsigned int *)&this->baseclass_0[4];
              v34.y = (float)((float)((float)((float)v29 - (float)0.5) * (float)2.0) * (float)200.0) + (float)v28;
              kn::Friend::strike(v30, &v34, (YS::TARGET_10 *)(unsigned int)((_DWORD)v30 + 2548), 883LL, -1, 2LL);
              v31 = v25--;
            }
            while ( v31 > 0 );
          }
        }
      }
    }
  }
  else if ( !n )
  {
    ++this->work_.lottery_count;
  }
}
// 10C6AC: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L1141:
 pushFromPWp W108
 pushFromFSp 0
 syscall 10, 13 ; trap_stitch_shot_effect (2 in, 0 out)
 jmp L1149
