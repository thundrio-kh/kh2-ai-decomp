---
---
---
name: trap_command_limit_trinity_commbo_start
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
syscall 6, 43 ; trap_command_limit_trinity_commbo_start (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SPECIAL_COMMAND::LimitTrinityComboStart(int n)
/----- (0000000000627274) ----------------------------------------------------
void __fastcall Ts::trap_command_limit_trinity_commbo_start(BD_VALUE_25 *args)
{
  YS::SPECIAL_COMMAND::LimitTrinityComboStart(*(_DWORD *)args);
}
->
/----- (00000000004A0320) ----------------------------------------------------
void __fastcall YS::SPECIAL_COMMAND::LimitTrinityComboStart(int n)
{
  __int64 v1; // r31

  v1 = 2 * n;
  if ( REGION::Get() && REGION::Get() != 7 )
    YS::LimitTrinity_US[v1] = 488;
  else
    YS::LimitTrinity_JP[v1] = 488;
}
// 2AAD490: using guessed type __int16 YS::LimitTrinity_JP[];
// 2AAD4A0: using guessed type __int16 YS::LimitTrinity_US[];


---
---
---
appears in:

---
---
---
example usage from NA

