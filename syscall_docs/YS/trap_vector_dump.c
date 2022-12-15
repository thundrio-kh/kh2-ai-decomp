---
---
---
name: trap_vector_dump
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
syscall 0, 8 ; trap_vector_dump (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B7428) ----------------------------------------------------
void __fastcall YS::trap_vector_dump(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  printf(
    (unsigned int)"%s = (%f, %f, %f, %f)\n",
    *(unsigned int *)&(*args)[4],
    COERCE__INT64(*(float *)(*args)[0]),
    COERCE__INT64(*(float *)(*(unsigned int *)args + 4LL)),
    COERCE__INT64(*(float *)(*(unsigned int *)args + 8LL)),
    COERCE__INT64(*(float *)(*(unsigned int *)args + 0xCLL)),
    a7,
    a8);
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

