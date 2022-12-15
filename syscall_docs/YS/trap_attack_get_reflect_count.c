---
---
---
name: trap_attack_get_reflect_count
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
syscall 2, 66 ; trap_attack_get_reflect_count (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F501C) ----------------------------------------------------
void __fastcall YS::trap_attack_get_reflect_count(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)args + 0xA4LL);
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

