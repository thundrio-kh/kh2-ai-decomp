---
---
---
name: trap_effect_set_type
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
push unk2 ; (unknown) 
syscall 0, 86 ; trap_effect_set_type (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B8C24) ----------------------------------------------------
void __fastcall YS::trap_effect_set_type(BD_VALUE_16 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 4LL) = *(_DWORD *)&(*args)[4];
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

