---
---
---
name: trap_vacuum_set_effective_range
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
syscall 7, 32 ; trap_vacuum_set_effective_range (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000006243E8) ----------------------------------------------------
void __fastcall Ts::trap_vacuum_set_effective_range(BD_VALUE_24 *args)
{
  *(float *)(*(unsigned int *)args + 0x14LL) = *(float *)&(*args)[4];
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

