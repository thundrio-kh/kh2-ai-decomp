---
---
---
name: trap_status_is_battle
---
---
---
category: status
---
---
---
documentation level: complete
---
---
---
syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
pop is_battle ; (bool) 
---
---
---
description: Returns if a battle is going on
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
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\F_HB020\f_hb.bdscript
L2276:
 popToSp 0
 syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
 dup 
 jz L2295
 gosub 4, L82
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 eqzv 
