## trap_vector_inner_prodcut* (math)

`syscall 0, 91 ; trap_vector_inner_prodcut (2 in, 1 out)`

Calculates the inner product of two vectors

#### Input parameters
| Name | Type | Description
|------|------|------------
| a   | Axa::FVECTOR4   | A vector
| b   | Axa::FVECTOR4   | A vector


#### Return Parameters
| Name | Type
|------|-----
| result   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          

</details>

<details>
	<summary>Example Usage From obj\B_CA050\b_ca.bdscript</summary>
```
L331:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 16, L613
 memcpyToSp 16, 48
 pushFromPSp 48
 gosub 20, L535
 pushFromFSp 8
 pushFromPWp W48
 gosub 16, L577
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)
 pushFromPSp 32
 pushImmf 0
 pushImmf 0
 pushImmf 1
 pushImmf 1
 gosub 16, L550
 pushFromFSp 4
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPWp W48
 gosub 20, L577
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 91 ; trap_vector_inner_prodcut (2 in, 1 out)
 pushImmf 0
 subf 
 supzf 
 jz L448
 pushFromFSp 8
 pushFromPSp 32
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 jmp L454
```
</details>

