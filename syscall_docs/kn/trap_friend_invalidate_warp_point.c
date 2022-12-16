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
push unk1 ; (unknown)  (pushFromPSp: 32,48,64,80,96) (pushFromFSp: 4)
push unk2 ; (unknown)  (pushImmf: 0,100,200)
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
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L17950:
 pushFromPSp 80
 pushImmf 100
 syscall 10, 56 ; trap_friend_invalidate_warp_point (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToWp 16, W800
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 gosub 40, L608
 memcpyToSp 16, 144
 pushFromPSp 144
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 160
 pushFromPSp 160
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 gosub 28, L18418
 pushFromFSp 8
 jz L18028
 pushFromFSp 0
 pushImm 1
 pushImm 0
 gosub 28, L13940
 jmp L18038
