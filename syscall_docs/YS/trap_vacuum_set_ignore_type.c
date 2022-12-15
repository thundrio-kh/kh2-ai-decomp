---
---
---
name: trap_vacuum_set_ignore_type
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
syscall 2, 79 ; trap_vacuum_set_ignore_type (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F5834) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_ignore_type(BD_VALUE_19 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x10LL) |= 1 << *(_DWORD *)&(*args)[4];
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

