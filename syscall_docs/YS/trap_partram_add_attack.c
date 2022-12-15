---
---
---
name: trap_partram_add_attack
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
syscall 0, 92 ; trap_partram_add_attack (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B8EC8) ----------------------------------------------------
void __fastcall YS::trap_partram_add_attack(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 9) += *(_DWORD *)&(*args)[4];
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

