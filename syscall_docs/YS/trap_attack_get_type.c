---
---
---
name: trap_attack_get_type
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
syscall 2, 34 ; trap_attack_get_type (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F46C0) ----------------------------------------------------
void __fastcall YS::trap_attack_get_type(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)args + 0x28LL) + 4LL);
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

