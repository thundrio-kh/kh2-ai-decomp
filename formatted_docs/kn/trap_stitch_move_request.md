## trap_stitch_move_request* (special)

`syscall 10, 32 ; trap_stitch_move_request (2 in, 0 out)`

Request stitch move (to the target)

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| move_target   | int   | Target number stitch should move to


Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
L3314:
 popToSp 0
 gosub 12, L1348
 memcpyToSp 16, 32
 pushFromPSp 32
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSp 16
 pushImmf -400
 pushImmf 200
 pushImmf 0
 pushImmf 0
 gosub 12, L403
 pushFromFSp 0
 pushFromPSp 16
 syscall 10, 1 ; trap_stitch_set_screen_position (2 in, 0 out)
 pushFromFSp 0
 pushImm 8
 pushFromFSp 0
 pushImm 16384
 pushImm -1
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 0
 pushFromFSp 0
 pushImm 16384
 pushImm -1
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
 popToSpVal 20
 pushFromFSp 0
 pushImm 0
 syscall 10, 32 ; trap_stitch_move_request (2 in, 0 out)
 pushFromFSp 0
 pushImm 13
 pushImm 0
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



