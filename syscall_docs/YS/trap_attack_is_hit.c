---
---
---
name: trap_attack_is_hit
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
syscall 2, 14 ; trap_attack_is_hit (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F45A8) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::ATTACK::is_hit((YS::ATTACK_10 *const)(*args)[0]);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

