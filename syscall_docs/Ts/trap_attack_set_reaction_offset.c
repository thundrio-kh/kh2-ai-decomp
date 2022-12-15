---
---
---
name: trap_attack_set_reaction_offset
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
syscall 7, 14 ; trap_attack_set_reaction_offset (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623368) ----------------------------------------------------
void __fastcall Ts::trap_attack_set_reaction_offset(BD_VALUE_24 *args)
{
  kn::FVector::operator=(
    (kn::FVector *const)(unsigned int)(*(_DWORD *)args + 304),
    (const kn::FVector *)*(unsigned int *)&(*args)[4]);
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

