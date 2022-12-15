---
---
---
name: trap_partram_add_defence
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
syscall 0, 94 ; trap_partram_add_defence (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B8F08) ----------------------------------------------------
void __fastcall YS::trap_partram_add_defence(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 11) += *(_DWORD *)&(*args)[4];
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

