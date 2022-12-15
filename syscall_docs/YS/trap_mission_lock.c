---
---
---
name: trap_mission_lock
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
syscall 4, 54 ; trap_mission_lock (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MUTEX::lock(YS::MUTEX *const this, int id)
/----- (00000000004F6178) ----------------------------------------------------
void __fastcall YS::trap_mission_lock(BD_VALUE_20 *args)
{
  YS::MUTEX::lock((YS::MUTEX *const)&YS::MUTEX::Mission, 0);
}
// 2A9F320: using guessed type int YS::MUTEX::Mission;
->
/----- (000000000045DAA0) ----------------------------------------------------
void __fastcall YS::MUTEX::lock(YS::MUTEX *const this, int id)
{
  int v3; // r31
  u_int v4; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v3 = 1 << id;
  v4 = this->Lock;
  if ( (this->Lock & v3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(Lock & (1 << id)) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\mutex.cpp",
      21LL,
      "lock",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\mutex.cpp", 21);
    v4 = this->Lock;
  }
  this->Lock = v4 | v3;
}
// 45DAC8: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

