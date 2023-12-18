## trap_obj_reset_parts_color* (bones)

`syscall 1, 186 ; trap_obj_reset_parts_color (3 in, 0 out)`

Resets the color of an object part

#### Input parameters
| Name | Type | Description
|------|------|------------
| time   | float   | Time in frames for the color transition to happen




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\F_NM080\f_nm.bdscript       | ((F) Oogie’s present box (NM))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          

</details>

<details>
	<summary>Example Usage From obj\B_CA050\b_ca.bdscript</summary>
```
L5082:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L5249
 pushFromFSp 0
 pushImm 1
 syscall 1, 151 ; trap_obj_motion_check_trigger (2 in, 1 out)
 jz L5246
 pushFromFSp 0
 pushImm 3145756
 pushImm 8421504
 pushImmf 20
 syscall 1, 185 ; trap_obj_set_parts_color (4 in, 0 out)
 pushFromFSp 0
 pushImm 3072
 pushImmf 20
 syscall 1, 186 ; trap_obj_reset_parts_color (3 in, 0 out)
 pushImm 0
 popToWp W16
 pushFromFSp 0
 pushImm 16
 add 
 pushImm -1
 memcpy 0
 pushFromFSp 0
 pushImm 20
 add 
 pushImm -1
 memcpy 0
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushFromFWp W32
 sub 
 ipos 
 jz L5176
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFWp W32
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 jmp L5216
```
</details>

