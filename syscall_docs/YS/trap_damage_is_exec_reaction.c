---
---
---
name: trap_damage_is_exec_reaction
---
---
---
category: attack
---
---
---
documentation level: incomplete
---
---
---
push damage ; (YS::DAMAGE_5 *)  (An object representing damage)
syscall 2, 16 ; trap_damage_is_exec_reaction (1 in, 1 out)
pop is_exec_reaction ; (bool) 
---
---
---
description: Unused. 
---
---
---
decompiled code:

/----- (00000000004F415C) ----------------------------------------------------
void __fastcall YS::trap_damage_is_exec_reaction(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x18LL) & 1) != 0;
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

