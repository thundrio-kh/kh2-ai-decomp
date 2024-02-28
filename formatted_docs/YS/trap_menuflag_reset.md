## trap_menuflag_reset* (menu)

`syscall 0, 73 ; trap_menuflag_reset (1 in, 0 out)`

resets a menu flag to the default state

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag   | int   | a number representing a specific menuflag




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          

</details>

<details>
	<summary>Example Usage From obj\F_AL070_BLIZZARD\f_al.bdscript</summary>
```plaintext
L3817:
 popToSp 0
 pushFromFSp 0
 pushImm 66
 syscall 1, 85 ; trap_obj_texanm_start (2 in, 0 out)
 pushFromFSp 0
 pushImmf 1
 pushImmf 0
 pushImmf 60
 syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 1
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 3
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 4
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 6
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 fetchValue 4
 pushImm 191
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFWp W4208
 pushImm 0
 sub 
 eqz 
 jz L3972
 pushImm 60
 syscall 0, 73 ; trap_menuflag_reset (1 in, 0 out)
 jmp L4004
```
</details>

