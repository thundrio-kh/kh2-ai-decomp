---
---
---
name: trap_bghit_get_cross_pos
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
syscall 6, 54 ; trap_bghit_get_cross_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000006277A8) ----------------------------------------------------
void __fastcall Ts::trap_bghit_get_cross_pos(BD_VALUE_25 *args)
{
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, (const kn::FVector *)(*args)[0]);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD630: using guessed type int Ts::ResultVector;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

