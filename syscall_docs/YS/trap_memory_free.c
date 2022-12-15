---
---
---
name: trap_memory_free
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
syscall 0, 48 ; trap_memory_free (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall AREA::Free(unsigned int *pt)
/----- (00000000004B8CFC) ----------------------------------------------------
void __fastcall YS::trap_memory_free(BD_VALUE_16 *args)
{
  AREA::Free((unsigned int *)(*args)[0]);
}
->
/----- (0000000000041804) ----------------------------------------------------
void __fastcall AREA::Free(unsigned int *pt)
{
  unsigned __int64 v1; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v1 = (unsigned int)Allocator;
  if ( !Allocator )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Allocator != NULL",
      "common",
      "C:\\hd25\\kingdom2\\common\\area.cpp",
      382LL,
      "Free",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\common\\area.cpp", 382);
    v1 = (unsigned int)Allocator;
  }
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v1 + 0xCLL))();
}
// 41824: variable 'back_chain' is possibly undefined
// 7E95D0: using guessed type void *__ptr32 Allocator;


---
---
---
appears in:

---
---
---
example usage from NA

