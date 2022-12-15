---
---
---
name: trap_attack_set_hitmark_pos
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
syscall 2, 71 ; trap_attack_set_hitmark_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK::SetHitmarkPos(const kn::FVector *pos, const kn::FVector *dir)
/----- (00000000004F5060) ----------------------------------------------------
void __fastcall YS::trap_attack_set_hitmark_pos(BD_VALUE_19 *args)
{
  YS::ATTACK::SetHitmarkPos((const kn::FVector *)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
->
/----- (0000000000406AEC) ----------------------------------------------------
void __fastcall YS::ATTACK::SetHitmarkPos(const kn::FVector *pos, const kn::FVector *dir)
{
  kn::FVector::operator=((kn::FVector *const)&YS::ATTACK::HitmarkPos, pos);
  kn::FVector::operator=((kn::FVector *const)&YS::ATTACK::HitmarkDir, dir);
}
// C78350: using guessed type float YS::ATTACK::HitmarkPos;
// C78360: using guessed type int YS::ATTACK::HitmarkDir;


---
---
---
appears in:

---
---
---
example usage from NA

