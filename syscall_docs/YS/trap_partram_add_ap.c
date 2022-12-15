---
---
---
name: trap_partram_add_ap
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
syscall 0, 96 ; trap_partram_add_ap (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B8F90) ----------------------------------------------------
void __fastcall YS::trap_partram_add_ap(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 8) += *(_DWORD *)&(*args)[4];
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

