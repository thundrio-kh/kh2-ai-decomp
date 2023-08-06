---
---
---
name: trap_prize_num
---
---
---
category: prize
---
---
---
documentation level: untested
---
---
---
syscall 1, 300 ; trap_prize_num (0 in, 1 out)
pop num ; (int) 
---
---
---
description: Return the number of prizes currently spawned
---
---
---
decompiled code:
int __cdecl YS::PRIZE::GetAppearNum()
/----- (000000000050ADF8) ----------------------------------------------------
void __fastcall YS::trap_prize_num(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::PRIZE::GetAppearNum();
}
->
/----- (0000000000483C50) ----------------------------------------------------
int __cdecl YS::PRIZE::GetAppearNum()
{
  int result; // r3

  if ( YS::Prize )
    result = *(_DWORD *)(*((unsigned int *)YS::Prize + 637) + 0x34LL);
  else
    result = 0;
  return result;
}
// 7FE818: using guessed type void *__ptr32 YS::Prize;


---
---
---
appears in:

---
---
---
example usage from NA

