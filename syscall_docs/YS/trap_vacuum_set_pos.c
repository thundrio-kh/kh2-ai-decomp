---
---
---
name: trap_vacuum_set_pos
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
syscall 2, 80 ; trap_vacuum_set_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F5854) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_pos(BD_VALUE_19 *args)
{
  kn::FVector::operator=((kn::FVector *const)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
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

