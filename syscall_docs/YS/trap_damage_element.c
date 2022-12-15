---
---
---
name: trap_damage_element
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
syscall 2, 85 ; trap_damage_element (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F41E0) ----------------------------------------------------
void __fastcall YS::trap_damage_element(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 9LL);
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

