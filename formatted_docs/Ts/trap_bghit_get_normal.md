## trap_bghit_get_normal* (collision)

`syscall 6, 52 ; trap_bghit_get_normal (1 in, 1 out)`

Get the normal vector of a bghit

#### Input parameters
| Name | Type | Description
|------|------|------------
| bghit   | YS::BGHIT_0 *   | A BGHIT object


#### Return Parameters
| Name | Type
|------|-----
| normal   | kn::FVector *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\mulan\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          

</details>

<details>
	<summary>Example Usage From limit\mulan\limi.bdscript</summary>
```plaintext
L298:
 pushFromFSp 88
 pushImmf 0
 subf 
 supzf 
 jz L470
 pushFromFSp 84
 pushImmf 0
 subf 
 infoezf 
 jz L453
 pushImmf 200
 pushImmf 500
 gosub 28, L471
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 gosub 28, L541
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromPSp 32
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 128
 pushFromPSp 128
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -50
 addf 
 memcpy 0
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 10000
 addf 
 memcpy 0
 pushFromPSp 48
 pushFromPSp 32
 pushFromPSp 16
 pushImm 65540
 syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
 jz L451
 pushFromFSp 0
 fetchValue 64
 pushImm 17
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 popToSp 80
 pushFromFSp 80
 pushFromPSp 48
 syscall 6, 54 ; trap_bghit_get_cross_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromFSp 80
 pushFromPSp 48
 syscall 6, 52 ; trap_bghit_get_normal (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 41 ; trap_effect_set_dir (2 in, 0 out)
 pushImmf 3
 popToSp 84
 jmp L451
```
</details>

