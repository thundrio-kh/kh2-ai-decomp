---
---
---
name: trap_limit_start_command
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
syscall 7, 27 ; trap_limit_start_command (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __cdecl YS::LIMIT::GetExecCommand()
/----- (00000000006243B4) ----------------------------------------------------
void __fastcall Ts::trap_limit_start_command(BD_VALUE_24 *args)
{
  *(_DWORD *)args = YS::LIMIT::GetExecCommand();
}
->
/----- (0000000000440FB4) ----------------------------------------------------
int __cdecl YS::LIMIT::GetExecCommand()
{
  int result; // r3

  if ( YS::Limit && (*(_DWORD *)((unsigned int)YS::Limit + 0x40LL) & 4) == 0 )
    result = *(unsigned __int16 *)(*(unsigned int *)(unsigned int)YS::Limit + 0x28LL);
  else
    result = 0;
  return result;
}
// 2A9D718: using guessed type int YS::Limit;


---
---
---
appears in:

---
---
---
example usage from NA

