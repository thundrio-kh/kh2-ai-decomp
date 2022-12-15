---
---
---
name: trap_memory_alloc
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
syscall 0, 47 ; trap_memory_alloc (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
unsigned int *__fastcall AREA::Alloc(size_t size)
/----- (00000000004B8CC4) ----------------------------------------------------
void __fastcall YS::trap_memory_alloc(BD_VALUE_16 *args)
{
  *(_DWORD *)args = (unsigned int)AREA::Alloc(*(_DWORD *)args);
}
->
/----- (000000000004172C) ----------------------------------------------------
unsigned int *__fastcall AREA::Alloc(size_t size)
{
  unsigned __int64 v1; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = (unsigned int)Allocator;
  if ( !Allocator )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Allocator != NULL",
      "common",
      "C:\\hd25\\kingdom2\\common\\area.cpp",
      372LL,
      "Alloc",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\common\\area.cpp", 372);
    v1 = (unsigned int)Allocator;
  }
  return (unsigned int *)((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v1 + 8LL))();
}
// 41750: variable 'back_chain' is possibly undefined
// 7E95D0: using guessed type void *__ptr32 Allocator;


---
---
---
appears in:

---
---
---
example usage from NA

