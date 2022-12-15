---
---
---
name: trap_trinity_shot_ensure
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
syscall 7, 30 ; trap_trinity_shot_ensure (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl Ts::TRINITY_SHOT_OBJ::Ensure()
/----- (0000000000624044) ----------------------------------------------------
void __fastcall Ts::trap_trinity_shot_ensure(BD_VALUE_24 *args)
{
  Ts::TRINITY_SHOT_OBJ::Ensure();
}
->
/----- (0000000000629480) ----------------------------------------------------
void __cdecl Ts::TRINITY_SHOT_OBJ::Ensure()
{
  if ( Ts::ShotObj )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)(unsigned int)Ts::ShotObj
                                                      + 0x1CLL))();
    Ts::ShotObj = 0;
  }
}
// 807830: using guessed type void *__ptr32 Ts::ShotObj;


---
---
---
appears in:

---
---
---
example usage from NA

