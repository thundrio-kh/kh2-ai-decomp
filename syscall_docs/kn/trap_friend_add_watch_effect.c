---
---
---
name: trap_friend_add_watch_effect
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
push unk1 ; (unknown)  (pushFromPSpVal: 0,60)
push unk2 ; (unknown)  (pushFromFSp: 52) (pushFromFSpVal: 56)
syscall 10, 53 ; trap_friend_add_watch_effect (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::EffectObserver::addEntry(kn::EffectObserver_0 *const this, ryj::EFFECT_55 *effect, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000006145A4) ----------------------------------------------------
void __fastcall kn::trap_friend_add_watch_effect(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::EffectObserver_0 *v4; // r3
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 v10; // r5
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
  v4 = kn::Friend::getEffectObserver((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::EffectObserver::addEntry(v4, (ryj::EFFECT_55 *)*(unsigned int *)&(*args)[4], v10, v9, v8, v7, v6, v5);
}
// 6145C8: variable 'back_chain' is possibly undefined
// 6146A0: variable 'v10' is possibly undefined
// 6146A0: variable 'v9' is possibly undefined
// 6146A0: variable 'v8' is possibly undefined
// 6146A0: variable 'v7' is possibly undefined
// 6146A0: variable 'v6' is possibly undefined
// 6146A0: variable 'v5' is possibly undefined

//COMPLICATD kn::Friend:getEffectObserver kn::EffectObserver::addEntry
->
/----- (0000000000134F2C) ----------------------------------------------------
void __fastcall kn::EffectObserver::addEntry(kn::EffectObserver_0 *const this, ryj::EFFECT_55 *effect, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  int v17; // r27
  __int64 v18; // r28
  int v19; // r25
  __int64 *v20; // r26
  unsigned __int64 v21; // r24
  int v22; // r23
  ryj::EFFECT_144 *v23; // r22
  unsigned int v24; // r3
  __int64 v25; // r28
  __int64 *v26; // r4
  __int64 v27; // ctr
  __int64 v28; // r6
  unsigned __int64 v29; // r3
  __int8 *v30; // r4
  __int64 v31; // ctr
  unsigned __int64 v32; // r3
  __int64 v33; // r4
  unsigned int v34; // r3
  int v35; // r4
  __int64 back_chain[46]; // [sp+0h] [-1C0h] BYREF

  if ( (_DWORD)effect )
  {
    kn::EffectObserver::removeEntry(this, effect, a3, a4, a5, a6, a7, a8);
    v17 = *(_DWORD *)&(*this)[12];
    if ( v17 == 32 )
    {
      v18 = 0LL;
      v17 = 0;
      v19 = (int)this;
      v20 = back_chain;
      do
      {
        v21 = (unsigned int)(v19 + 16);
        v22 = *(_DWORD *)(unsigned int)(v19 + 20);
        v23 = (ryj::EFFECT_144 *)*(unsigned int *)v21;
        if ( (_DWORD)v23
          && !ryj::EFFECT::is_delete((ryj::EFFECT_144 *const)*(unsigned int *)v21, v16, v15, v14, v13, v12, v11, v10)
          && (unsigned int)ryj::EFFECT::data(v23, v16, v15, v14, v13, v12, v11, v10) == v22 )
        {
          v24 = (unsigned int)v20++;
          ++v17;
          *(_DWORD *)(v24 + 0x70LL) = *(_DWORD *)v21;
          v16 = *(unsigned int *)((unsigned int)(v19 + 16) + 4LL);
          *(_DWORD *)(v24 + 0x74LL) = v16;
        }
        ++v18;
        v19 += 8;
      }
      while ( (int)v18 < *(_DWORD *)&(*this)[12] );
      v25 = 0LL;
      if ( v17 <= 0 )
        goto LABEL_13;
      v15 = (__int64)this;
      v26 = back_chain;
      v27 = (unsigned int)v17;
      do
      {
        v28 = (unsigned int)v26;
        v29 = (unsigned int)(v15 + 16);
        ++v25;
        v15 += 8LL;
        ++v26;
        v13 = *(unsigned int *)(v28 + 112);
        *(_DWORD *)v29 = v13;
        v14 = *(unsigned int *)(v28 + 116);
        *(_DWORD *)(v29 + 4) = v14;
        --v27;
      }
      while ( v27 );
      if ( (int)v25 < 32 )
      {
LABEL_13:
        v30 = &(*this)[8 * v25];
        v31 = (unsigned int)(32 - v25);
        do
        {
          v32 = (unsigned int)((_DWORD)v30 + 16);
          v15 = (unsigned int)((_DWORD)v30 + 20);
          v30 += 8;
          *(_DWORD *)v32 = 0;
          *(_DWORD *)v15 = 0;
          --v31;
        }
        while ( v31 );
      }
      *(_DWORD *)&(*this)[12] = v17;
      if ( v17 == 32 )
      {
        kn::EffectObserver::removeEntry(
          this,
          (ryj::EFFECT_55 *)*(unsigned int *)&(*this)[16],
          v15,
          v14,
          v13,
          v12,
          v11,
          v10);
        v17 = *(_DWORD *)&(*this)[12];
        v11 = (unsigned int)*(_QWORD *)(back_chain[0] + 16);
        if ( v17 >= 32 )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "entryNum_ < MAX",
            "common",
            "C:\\hd25\\kingdom2\\naka\\libkn\\effect_observer.cpp",
            91LL,
            "addEntry",
            (const void *)v11);
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\effect_observer.cpp", 91);
          v17 = *(_DWORD *)&(*this)[12];
        }
      }
    }
    v33 = (unsigned int)((_DWORD)this + 8 * v17 + 16);
    *(_DWORD *)v33 = (_DWORD)effect;
    v34 = (unsigned int)ryj::EFFECT::data(effect, v33, v15, v14, v13, v12, v11, v10);
    v35 = *(_DWORD *)&(*this)[12];
    *(_DWORD *)&(*this)[12] = v35 + 1;
    *(_DWORD *)(unsigned int)((_DWORD)this + 8 * v35 + 20) = v34;
  }
}
// 134FC8: variable 'v16' is possibly undefined
// 134FC8: variable 'v15' is possibly undefined
// 134FC8: variable 'v14' is possibly undefined
// 134FC8: variable 'v13' is possibly undefined
// 134FC8: variable 'v12' is possibly undefined
// 134FC8: variable 'v11' is possibly undefined
// 134FC8: variable 'v10' is possibly undefined


---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L2856:
 pushFromPSpVal 0
 pushImmf 6
 gosub 16, L3797
 jz L3043
 pushFromPSpVal 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 21 ; trap_obj_effect_start (4 in, 1 out)
 popToSp 52
 pushFromPSpVal 0
 pushFromFSp 52
 syscall 10, 53 ; trap_friend_add_watch_effect (2 in, 0 out)
 pushImmf 30
 popToSp 48
