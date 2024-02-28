## trap_obj_set_cannon_camera_offset* (special)

`syscall 1, 330 ; trap_obj_set_cannon_camera_offset (3 in, 0 out)`

Sets the present cannon camera offset

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| offset1   | kn::FVector *   | First offset
| offset2   | kn::FVector *   | Second offset


### Example Usage From obj\F_NM180\f_nm.bdscript
```plaintext
TR0:
 popToSp 0
 pushFromPSp 16
 pushImmf 0
 pushImmf -140
 pushImmf 130
 pushImmf 1
 gosub 16, L714
 pushFromPSp 32
 pushImmf 0
 pushImmf -70
 pushImmf -70
 pushImmf 1
 gosub 16, L714
 pushFromPWp W0
 pushFromFSp 0
 gosub 16, L741
 pushFromPWp W0
 pushFromPSp 16
 pushFromPSp 32
 syscall 1, 330 ; trap_obj_set_cannon_camera_offset (3 in, 0 out)
 pushFromPWp W0
 pushImmf 1
 pushImmf 60
 pushImmf 0
 pushImmf 0
 syscall 1, 333 ; trap_obj_set_cannon_param (5 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\F_NM180\f_nm.bdscript       | ((F) Present minigame (shooting machine) (NM))          



