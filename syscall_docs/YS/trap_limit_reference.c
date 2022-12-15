---
---
---
name: trap_limit_reference
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
syscall 2, 63 ; trap_limit_reference (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F56BC) ----------------------------------------------------
void __fastcall YS::trap_limit_reference(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x3CLL);
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

