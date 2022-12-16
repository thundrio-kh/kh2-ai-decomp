---
---
---
name: trap_friend_add_warp_point
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
push unk1 ; (unknown)  (pushFromPSp: 48,80)
syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::addWarpPoint(const kn::FVector *point)
/----- (0000000000614868) ----------------------------------------------------
void __fastcall kn::trap_friend_add_warp_point(BD_VALUE_22 *args)
{
  kn::Friend::addWarpPoint((const kn::FVector *)(*args)[0]);
}
->
/----- (00000000000E3350) ----------------------------------------------------
void __fastcall kn::Friend::addWarpPoint(const kn::FVector *point)
{
  kn::PositionBuffer::entry((kn::PositionBuffer *const)&kn::player_position, point);
}
// A1CBA0: using guessed type char kn::player_position;


---
---
---
appears in:
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
---
---
---
example usage from obj\B_EX260\b_ex.bdscript
L873:
 pushFromPSp 48
 pushImmf 0
 pushImmf 160
 pushImmf 800
 pushImmf 1
 gosub 20, L1156
 pushFromPSp 32
 pushImm 62
 pushFromPSp 48
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImmf 200
 syscall 10, 56 ; trap_friend_invalidate_warp_point (2 in, 0 out)
 pushFromPSp 48
 pushImmf 0
 pushImmf 2000
 pushImmf 800
 pushImmf 1
 gosub 20, L1156
 pushFromPSp 32
 pushImm 62
 pushFromPSp 48
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)
 pushFromPSp 48
 pushImmf 600
 pushImmf 160
 pushImmf 800
 pushImmf 1
 gosub 20, L1156
 pushFromPSp 32
 pushImm 62
 pushFromPSp 48
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)
 pushFromPSp 48
 pushImmf -600
 pushImmf 160
 pushImmf 800
 pushImmf 1
 gosub 20, L1156
 pushFromPSp 32
 pushImm 62
 pushFromPSp 48
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)
 pushFromPSp 48
 pushImmf 0
 pushImmf 160
 pushImmf 1300
 pushImmf 1
 gosub 20, L1156
 pushFromPSp 32
 pushImm 62
 pushFromPSp 48
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)
 jmp L1090
