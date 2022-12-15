---
---
---
name: trap_friend_invalidate_warp_point
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
syscall 10, 56 ; trap_friend_invalidate_warp_point (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::invalidateWarpPoint(const kn::FVector *center, double range)
/----- (0000000000614838) ----------------------------------------------------
void __fastcall kn::trap_friend_invalidate_warp_point(BD_VALUE_22 *args)
{
  kn::Friend::invalidateWarpPoint((const kn::FVector *)(*args)[0], *(float *)&(*args)[4]);
}
->
/----- (00000000000E322C) ----------------------------------------------------
void __fastcall kn::Friend::invalidateWarpPoint(const kn::FVector *center, double range)
{
  __int64 v2; // r28
  double v3; // fp31
  unsigned int v5; // r31
  Axa::FVECTOR4 *v6; // r3
  kn::FVector v7; // [sp+70h] [-60h] BYREF
  kn::FVector v8; // [sp+80h] [-50h] BYREF
  Axa::FVECTOR4 v9; // [sp+90h] [-40h] BYREF

  v2 = 0LL;
  v3 = (float)((float)range * (float)range);
  v7.z = 0.0;
  v7.y = 0.0;
  v7.x = 0.0;
  v7.w = 1.0;
  kn::PositionBuffer::entry((kn::PositionBuffer *const)&kn::player_position, center);
  v5 = 10603440;
  do
  {
    v9.x = *(float *)v5;
    v9.y = *(float *)(v5 + 4LL);
    v9.z = *(float *)(v5 + 8LL);
    v9.w = *(float *)(v5 + 0xCLL);
    v6 = Axa::FVECTOR4::operator-=(&v9, center);
    v8.x = v6->x;
    v8.y = v6->y;
    v8.z = v6->z;
    v8.w = v6->w;
    kn::FVector::operator=(&v7, &v8);
    if ( kn::FVector::getLengthSquare(&v7) > v3 )
      kn::FVector::operator=((kn::FVector *const)v5, center);
    ++v2;
    v5 += 16;
  }
  while ( (int)v2 < 32 );
}
// A1CBA0: using guessed type char kn::player_position;


---
---
---
appears in:

---
---
---
example usage from NA

