---
---
---
name: trap_summon_is_exec
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
syscall 7, 35 ; trap_summon_is_exec (0 in, 1 out)
pop is_summon ; (bool) 
---
---
---
description: Is there currently a summon
---
---
---
decompiled code:
int __cdecl YS::SUMMON::GetMode()
/----- (000000000062462C) ----------------------------------------------------
void __fastcall Ts::trap_summon_is_exec(BD_VALUE_24 *args)
{
  *(_DWORD *)args = (_cntlzw(YS::SUMMON::GetMode()) & 0x20) == 0;
}
->
/----- (00000000004A4EEC) ----------------------------------------------------
int __cdecl YS::SUMMON::GetMode()
{
  return YS::SummonMode;
}
// 2AAD8D0: using guessed type int YS::SummonMode;


---
---
---
appears in:

---
---
---
example usage from NA

