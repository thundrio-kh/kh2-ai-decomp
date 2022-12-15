---
---
---
name: trap_damage_attack_param_id
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
syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4180) ----------------------------------------------------
void __fastcall YS::trap_damage_attack_param_id(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(unsigned __int16 *)*(unsigned int *)(*(unsigned int *)args + 0x20LL);
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

