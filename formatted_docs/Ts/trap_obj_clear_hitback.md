## trap_obj_clear_hitback* (object)

`syscall 6, 66 ; trap_obj_clear_hitback (1 in, 0 out)`

Clear the hitback flag for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


Example Usage From obj\B_MU100\b_mu.bdscript
```plaintext
L201:
 popToSp 0
 popToSp 4
 pushFromPWp W4
 pushFromFSp 0
 gosub 12, L284
 pushFromFSp 4
 pushImmf 500
 pushImm 0
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 1000
 pushImmf 1
 gosub 12, L320
 pushFromFSp 4
 pushFromFSp 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 4
 syscall 6, 66 ; trap_obj_clear_hitback (1 in, 0 out)
 pushFromFSp 4
 pushImm L347
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L8549 ; ___ai 'rush_guard_start' (L8549)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          



