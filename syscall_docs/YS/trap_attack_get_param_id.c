---
---
---
name: trap_attack_get_param_id
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
syscall 2, 25 ; trap_attack_get_param_id (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4FF0) ----------------------------------------------------
void __fastcall YS::trap_attack_get_param_id(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x14LL);
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

