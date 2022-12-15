---
---
---
name: trap_damage_exec_reaction
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
syscall 2, 15 ; trap_damage_exec_reaction (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4140) ----------------------------------------------------
void __fastcall YS::trap_damage_exec_reaction(BD_VALUE_19 *args)
{
  *(_DWORD *)(unsigned int)(*(_DWORD *)args + 24) |= 1u;
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

