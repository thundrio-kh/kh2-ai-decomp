---
---
---
name: trap_attack_is_hit_floor
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
syscall 2, 41 ; trap_attack_is_hit_floor (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4770) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_floor(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 0x10) != 0;
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

