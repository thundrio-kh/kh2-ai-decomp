---
---
---
name: trap_absf
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
syscall 0, 23 ; trap_absf (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6F14) ----------------------------------------------------
void __fastcall YS::trap_absf(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = __fabs(*(float *)&(*args)[0]);
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

