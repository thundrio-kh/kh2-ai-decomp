---
---
---
name: trap_damage_damage
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
syscall 2, 46 ; trap_damage_damage (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4194) ----------------------------------------------------
void __fastcall YS::trap_damage_damage(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x28LL);
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

