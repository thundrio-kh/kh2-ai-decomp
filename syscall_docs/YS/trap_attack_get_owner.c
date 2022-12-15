---
---
---
name: trap_attack_get_owner
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
syscall 2, 24 ; trap_attack_get_owner (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4FE0) ----------------------------------------------------
void __fastcall YS::trap_attack_get_owner(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0xCLL);
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

