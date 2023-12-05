## trap_bg_cross_pos (vector)

syscall 1, 135 ; trap_bg_cross_pos (4 in, 1 out)

Checks if the cross vector hits the line drawn between from and to. Unknown what type does.

#### Input parameters
| Name | Type | Description
|------|------|------------
| type   | int   | Also passed as 'collbcharacter'. Used values are either 1 or 4


#### Return Parameters
| Name | Type
|------|-----
| res_y   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          
| obj\F_TT170\f_tt.bdscript       | ((F) ??? - flying attack balls - bees? (TT))          

</details>

<details>
	<summary>Example Usage From obj\B_CA040_PUB\b_ca.bdscript</summary>
L5052:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 gosub 20, L4946
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromPSp 48
 pushFromPSp 32
 pushFromPSp 16
 pushImm 1
 syscall 1, 135 ; trap_bg_cross_pos (4 in, 1 out)
 pushImm 0
 sub 
 msbi 
 ret
</details>

