---
---
---
name: trap_attack_hit_mark_pos
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
syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623318) ----------------------------------------------------
void __fastcall Ts::trap_attack_hit_mark_pos(BD_VALUE_24 *args)
{
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, (const kn::FVector *)&YS::ATTACK::HitmarkPos);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// C78350: using guessed type float YS::ATTACK::HitmarkPos;
// 3EAD500: using guessed type int Ts::ResultVector;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

