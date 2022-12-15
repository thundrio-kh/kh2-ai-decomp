---
---
---
name: trap_damage_parts
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
syscall 2, 70 ; trap_damage_parts (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F41A4) ----------------------------------------------------
void __fastcall YS::trap_damage_parts(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)args + 0x25LL);
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

