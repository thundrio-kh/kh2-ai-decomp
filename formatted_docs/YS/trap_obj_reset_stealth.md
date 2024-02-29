## trap_obj_reset_stealth* (object)

`syscall 1, 195 ; trap_obj_reset_stealth (2 in, 0 out)`

Resets the stealth value of an object back to default

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| partnum   | int   | Part number


### Example Usage From obj\B_BB110\b_bb.bdscript
```plaintext
L1144:
 pushFromFSp 4
 syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)
 pushImm 583
 sub 
 eqz 
 jz L1330
 pushFromPAi L12784 ; ___ai 'turn_revenge' (L12784)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromFWp W4512
 pushImm 0
 sub 
 eqz 
 jz L1315
 pushFromFSp 0
 pushImm 58
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 59
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 60
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 61
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 62
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 63
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 64
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 65
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 66
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushImm 1
 popToWp W4512
 pushFromFSp 0
 pushImm -1
 syscall 1, 195 ; trap_obj_reset_stealth (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 jmp L1315
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          



