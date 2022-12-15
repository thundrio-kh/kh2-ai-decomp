---
---
---
name: trap_limit_time
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
syscall 2, 60 ; trap_limit_time (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F56AC) ----------------------------------------------------
void __fastcall YS::trap_limit_time(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = *(float *)(*(unsigned int *)args + 0xD4LL);
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

