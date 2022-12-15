---
---
---
name: trap_attack_is_valid
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
syscall 2, 96 ; trap_attack_is_valid (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F50B4) ----------------------------------------------------
void __fastcall YS::trap_attack_is_valid(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 0x1000) != 0;
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

