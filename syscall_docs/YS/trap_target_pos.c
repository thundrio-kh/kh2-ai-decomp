---
---
---
name: trap_target_pos
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
syscall 1, 120 ; trap_target_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::get_pos(const YS::TARGET_108 *const this, const YS::TARGET_108 *a2)
/----- (0000000000508B7C) ----------------------------------------------------
void __fastcall YS::trap_target_pos(BD_VALUE_21 *args)
{
  YS::TARGET_108 v2; // [sp+70h] [-30h] BYREF

  YS::TARGET::get_pos((const YS::TARGET_108 *const)v2, (const YS::TARGET_108 *)(*args)[0]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, (const kn::FVector *)v2);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;

//CHEAT YS::TARGET::get_pos
->
/----- (00000000004A8B30) ----------------------------------------------------
void __fastcall YS::TARGET::get_pos(const YS::TARGET_108 *const this, const YS::TARGET_108 *a2)
{
  int v3[10]; // [sp+70h] [-30h] BYREF

  v3[3] = 0;
  v3[6] = 0;
  v3[5] = 0;
  v3[4] = 0;
  v3[7] = 1065353216;
  YS::TARGET::make_collision(a2, (YS::COLLISION_52 *)v3);
  *(float *)&(*this)[0] = *(float *)&v3[4];
  *(float *)&(*this)[4] = *(float *)&v3[5];
  *(float *)&(*this)[8] = *(float *)&v3[6];
  *(float *)&(*this)[12] = *(float *)&v3[7];
}


---
---
---
appears in:

---
---
---
example usage from NA

