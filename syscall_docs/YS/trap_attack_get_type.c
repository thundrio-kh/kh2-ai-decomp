---
---
---
name: trap_attack_get_type
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push attack ; (YS::ATTACK_MAGIC *) (an attack object) 
syscall 2, 34 ; trap_attack_get_type (1 in, 1 out)
pop type ; (int) (type of attack)
---
---
---
description: returns the type of the passed in attack
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

