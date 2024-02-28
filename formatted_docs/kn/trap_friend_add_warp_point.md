## trap_friend_add_warp_point* (friend)

`syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)`

Add a friend warp point at a position

#### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | kn::FVector *   | A position vector


Example Usage From obj\B_EX260\b_ex.bdscript
```plaintext
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
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          



