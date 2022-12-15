---
---
---
name: trap_status_set_lockon_ratio
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
syscall 1, 250 ; trap_status_set_lockon_ratio (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STATUS::SetLockOnRatio(double ratio)
/----- (00000000005099DC) ----------------------------------------------------
void __fastcall YS::trap_status_set_lockon_ratio(BD_VALUE_21 *args)
{
  YS::STATUS::SetLockOnRatio(*(float *)&(*args)[0]);
}
->
/----- (00000000004A0CA0) ----------------------------------------------------
void __fastcall YS::STATUS::SetLockOnRatio(double ratio)
{
  unsigned __int64 v2; // r31
  double v3; // fp30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( ratio < 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ratio >= 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp",
      247LL,
      "SetLockOnRatio",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp", 247);
  }
  YS::LockOnRatio = ratio;
  v3 = (float)(*(float *)((unsigned int)YS::PREF::System + 0x50LL) * (float)ratio);
  if ( v3 <= 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "range > 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp",
      261LL,
      "SetLockOutRange",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp", 261);
  }
  YS::LockOutRange = v3;
}
// 4A0CCC: variable 'back_chain' is possibly undefined
// 2AA1548: using guessed type int YS::PREF::System;
// 2AAD55C: using guessed type float YS::LockOnRatio;
// 2AAD560: using guessed type float YS::LockOutRange;


---
---
---
appears in:

---
---
---
example usage from NA

