## trap_stitch_get_screen_position* (special)

`syscall 10, 2 ; trap_stitch_get_screen_position (1 in, 1 out)`

Get the position of stitch on the screen

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   
### Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
L3526:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 syscall 10, 2 ; trap_stitch_get_screen_position (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSp 8
 syscall 2, 25 ; trap_attack_get_param_id (1 in, 1 out)
 pushImm 1150
 sub 
 eqz 
 jz L3660
 pushFromPSp 16
 fetchValue 12
 syscall 0, 43 ; trap_fixrad (1 in, 1 out)
 syscall 0, 23 ; trap_absf (1 in, 1 out)
 pushImmf 1.570796
 subf 
 infoezf 
 jz L3609
 pushFromPSp 16
 fetchValue 0
 pushImmf 0
 subf 
 infoezf 
 jz L3595
 pushFromFSp 0
 fetchValue 4
 pushImm 202
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L3607
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



