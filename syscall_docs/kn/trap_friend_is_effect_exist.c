---
---
---
name: trap_friend_is_effect_exist
---
---
---
category: friend
---
---
---
documentation level: untested
---
---
---
push friend ; (kn::Friend_0 *)  (A friend object)
push effect ; (yj::EFFECT_55)  (An effect object)
syscall 10, 54 ; trap_friend_is_effect_exist (2 in, 1 out)
pop is_effect_exist ; (bool) 
---
---
---
description: Checks if the effect still exists
---
---
---
decompiled code:
kn::EffectObserver *__fastcall kn::Friend::getEffectObserver(kn::Friend_0 *const this)
__int64 __fastcall kn::EffectObserver::getIndex(kn::EffectObserver_0 *const this, ryj::EFFECT_55 *effect, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000006146C8) ----------------------------------------------------
void __fastcall kn::trap_friend_is_effect_exist(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
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
  *(_DWORD *)args = (int)kn::EffectObserver::getIndex(
                           v4,
                           (ryj::EFFECT_55 *)*(unsigned int *)&(*args)[4],
                           v10,
                           v9,
                           v8,
                           v7,
                           v6,
                           v5) >= 0;
}
// 6146EC: variable 'back_chain' is possibly undefined
// 6147C8: variable 'v10' is possibly undefined
// 6147C8: variable 'v9' is possibly undefined
// 6147C8: variable 'v8' is possibly undefined
// 6147C8: variable 'v7' is possibly undefined
// 6147C8: variable 'v6' is possibly undefined
// 6147C8: variable 'v5' is possibly undefined

//COMPLICATED kn::Friend::getEffectObserver kn::EffectObserver::getIndex
->
/----- (00000000000E31D8) ----------------------------------------------------
kn::EffectObserver *__fastcall kn::Friend::getEffectObserver(kn::Friend_0 *const this)
{
  kn::EffectObserver *result; // r3

  result = (kn::EffectObserver *)*(unsigned int *)&(*this)[2912];
  if ( !(_DWORD)result )
  {
    kn::EffectObserver::Create((kn::EffectObserver_0 **)(unsigned int)((_DWORD)this + 2912));
    result = (kn::EffectObserver *)*(unsigned int *)&(*this)[2912];
  }
  return result;
}


->
/----- (00000000001351A4) ----------------------------------------------------
__int64 __fastcall kn::EffectObserver::getIndex(kn::EffectObserver_0 *const this, ryj::EFFECT_55 *effect, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r29
  __int64 v11; // r5
  __int64 v12; // r4
  int v13; // r28
  unsigned int v14; // r3

  v10 = 0LL;
  v11 = *(unsigned int *)&(*this)[12];
  if ( (int)v11 <= 0 )
    return -1LL;
  while ( 1 )
  {
    LODWORD(a4) = 8 * v10;
    a4 += (__int64)this;
    if ( *(_DWORD *)(unsigned int)(a4 + 16) == (_DWORD)effect )
    {
      v12 = (unsigned int)(a4 + 20);
      v13 = *(_DWORD *)v12;
      v14 = (unsigned int)ryj::EFFECT::data(effect, v12, v11, a4, a5, a6, a7, a8);
      v11 = *(unsigned int *)&(*this)[12];
      if ( v13 == v14 )
        break;
    }
    v10 = (int)v10 + 1;
    if ( (int)v10 >= (int)v11 )
      return -1LL;
  }
  return v10;
}
// 1351DC: variable 'a4' is possibly undefined
// 135204: variable 'a5' is possibly undefined
// 135204: variable 'a6' is possibly undefined
// 135204: variable 'a7' is possibly undefined
// 135204: variable 'a8' is possibly undefined


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
L2908:
 dup 
 jz L2918
 pushFromPSpVal 0
 pushFromFSp 52
 syscall 10, 54 ; trap_friend_is_effect_exist (2 in, 1 out)
 eqzv 
