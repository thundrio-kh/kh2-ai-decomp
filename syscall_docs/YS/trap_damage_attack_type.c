---
---
---
name: trap_damage_attack_type
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
syscall 2, 35 ; trap_damage_attack_type (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F412C) ----------------------------------------------------
void __fastcall YS::trap_damage_attack_type(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 4LL);
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

