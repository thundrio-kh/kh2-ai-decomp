---
---
---
name: trap_target_attack
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
syscall 1, 166 ; trap_target_attack (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000005090E0) ----------------------------------------------------
void __fastcall YS::trap_target_attack(BD_VALUE_21 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 8LL);
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

