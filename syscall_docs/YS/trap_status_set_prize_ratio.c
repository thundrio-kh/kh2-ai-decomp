---
---
---
name: trap_status_set_prize_ratio
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
push unk1 ; (unknown)  (pushImmf: 1,2,3,5)
syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STATUS::SetPrizeRatio(double ratio)
/----- (00000000005099B4) ----------------------------------------------------
void __fastcall YS::trap_status_set_prize_ratio(BD_VALUE_21 *args)
{
  YS::STATUS::SetPrizeRatio(*(float *)&(*args)[0]);
}
->
/----- (00000000004A1218) ----------------------------------------------------
void __fastcall YS::STATUS::SetPrizeRatio(double ratio)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( ratio < 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ratio >= 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp",
      227LL,
      "SetPrizeRatio",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp", 227);
  }
  *(float *)&YS::PrizeRatio = ratio;
}
// 4A123C: variable 'back_chain' is possibly undefined
// 2AAD558: using guessed type int YS::PrizeRatio;


---
---
---
appears in:
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
---
---
---
example usage from msn\MU01_MS103C\mu01.bdscript
TR3:
 gosub 4, L239
 pushImmf 100
 pushImm 0
 syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
 pushImmf 5
 syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)
 pushImm 0
 pushImm L247
 pushImm 0
 pushImm 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 pushFromPWp W0
 gosub 4, L270
 ret 
