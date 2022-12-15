---
---
---
name: trap_status_is_battle
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
syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::STATUS::IsBattleMode()
/----- (0000000000509980) ----------------------------------------------------
void __fastcall YS::trap_status_is_battle(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::STATUS::IsBattleMode();
}
->
/----- (00000000004A0E64) ----------------------------------------------------
bool __cdecl YS::STATUS::IsBattleMode()
{
  bool result; // r3

  result = 0;
  if ( (dword_B61DC4 & 0x100) == 0 )
    result = (_cntlzw(YS::Mode) & 0x20) == 0;
  return result;
}
// B61DC4: using guessed type int dword_B61DC4;
// 2AAD54C: using guessed type int YS::Mode;


---
---
---
appears in:

---
---
---
example usage from NA

