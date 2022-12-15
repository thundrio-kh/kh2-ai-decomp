---
---
---
name: trap_abs
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
syscall 0, 22 ; trap_abs (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6EE8) ----------------------------------------------------
void __fastcall YS::trap_abs(BD_VALUE_16 *args)
{
  *(_DWORD *)args += (*(int *)args >> 31) & (-*(_DWORD *)args - *(_DWORD *)args);
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

