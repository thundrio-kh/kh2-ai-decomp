---
---
---
name: trap_attack_is_finish
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
push unk1 ; (unknown)  (pushFromFSp: 0)
syscall 10, 38 ; trap_attack_is_finish (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::ATTACK::is_finish(const YS::ATTACK_10 *const this)
/----- (000000000061368C) ----------------------------------------------------
void __fastcall kn::trap_attack_is_finish(BD_VALUE_22 *args)
{
  *(_DWORD *)args = YS::ATTACK::is_finish((const YS::ATTACK_10 *const)(*args)[0]);
}
->
/----- (0000000000408730) ----------------------------------------------------
__int64 __fastcall YS::ATTACK::is_finish(const YS::ATTACK_10 *const this)
{
  return YS::DAMAGE::IsFinish(*(unsigned __int8 *)(*(unsigned int *)&(*this)[40] + 0xALL));
}


---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L135:
 pushFromFSp 0
 gosub 4, L170
 dup 
 jz L147
 pushFromFSp 0
 syscall 10, 38 ; trap_attack_is_finish (1 in, 1 out)
 eqzv 
