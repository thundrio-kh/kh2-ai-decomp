## trap_obj_start_mpdrive* (object)

`syscall 1, 353 ; trap_obj_start_mpdrive (2 in, 0 out)`

Starts mpdrive for an object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| ratio   | float   | Ratio mpdrive should start at


### Example Usage From obj\N_HB630\n_hb.bdscript
```plaintext
L5513:
 popToSp 0
 pushFromFSp 0
 gosub 8, L393
 pushFromPSpVal 0
 pushImm 20
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushImm 21
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushImm 22
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 pushImmf 60
 gosub 8, L873
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 1
 sub 
 popToSp 4
 pushFromPSpVal 0
 pushImm 1697
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 8
 pushFromFSp 8
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 8
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushFromFSp 4
 pushImm 0
 sub 
 ipos 
 jz L5685
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 4
 neg 
 pushImm 0
 pushImm 0
 syscall 1, 155 ; trap_obj_add_hp (4 in, 1 out)
 drop 
 gosub 8, L159
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 1
 syscall 1, 353 ; trap_obj_start_mpdrive (2 in, 0 out)
 jmp L5685
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          



