## trap_mission_set_count_figure_num* (mission_counter)

`syscall 4, 48 ; trap_mission_set_count_figure_num (3 in, 0 out)`

Sets a specific digit in the counter to a value

### Input parameters
| Name | Type | Description
|------|------|------------
| figure   | int   | digit to set
| num   | int   | number to set it to
| id   | int   | id of a counter


### Example Usage From obj\B_LK100\b_lk.bdscript
```plaintext
L8060:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 0
 sub 
 ipos 
 jz L8109
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 sub 
 pushImm 8
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 2
 mul 
 sub 
 pushImm 0
 syscall 4, 48 ; trap_mission_set_count_figure_num (3 in, 0 out)
 jmp L8109
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          



