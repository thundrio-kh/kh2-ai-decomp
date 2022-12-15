---
---
---
name: trap_random_get
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
syscall 0, 16 ; trap_random_get (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B7DA8) ----------------------------------------------------
void __fastcall YS::trap_random_get(BD_VALUE_16 *args)
{
  unsigned __int64 v1; // r7

  v1 = *(unsigned int *)args;
  YS::Random *= 69069;
  *(_DWORD *)args = (unsigned int)YS::Random / (((unsigned __int64)(unsigned int)(v1 - 1) + 0x100000000LL) / v1);
}
// 2AB06B0: using guessed type int YS::Random;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

