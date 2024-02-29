## trap_obj_rc_stop_all* (object)

`syscall 6, 46 ; trap_obj_rc_stop_all (4 in, 0 out)`

Stop the object from doing anything else due to an RC

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| id   | int   | unknown
| time   | float   | Time that object should remain stopped
| force   | bool   | If the stop should be forced?


### Example Usage From obj\B_EX120\b_ex.bdscript
```plaintext
L9190:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushImm 14
 pushImmf 0
 pushFromPSpVal 0
 syscall 6, 46 ; trap_obj_rc_stop_all (4 in, 0 out)
 pushFromFSp 0
 pushFromPAi L18270 ; ___ai '10' (L18270)
 pushFromPSpVal 0
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 pushFromPSpVal 0
 pushImmf 300
 pushImm 0
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromFSp 4
 pushFromPSpVal 0
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 gosub 4, L9304
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 253
 pushImmf 0
 gosub 12, L9316
 drop 
 pushFromPSpVal 0
 gosub 4, L9347
 pushFromFSp 4
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 4
 pushImm L9443
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromPSpVal 0
 pushFromPAi L18279 ; ___ai 'rc_dance_counter' (L18279)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromPAi L18296 ; ___ai 'set star' (L18296)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPSpVal 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          



