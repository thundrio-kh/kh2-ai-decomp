## trap_vector_outer_product* (math)

`syscall 0, 82 ; trap_vector_outer_product (2 in, 1 out)`

Calulates the outer product of two vectors

### Input parameters
| Name | Type | Description
|------|------|------------
| vec1   | kn::FVector *   | A vector
| vec2   | kn::FVector *   | A vector


### Output Parameters
| Name | Type
|------|-----
| res   | float   
### Example Usage From obj\B_CA000\b_ca.bdscript
```plaintext
L2000:
 popToSp 0
 pushImmf 30
 popToSp 48
 pushFromFSp 0
 pushImm 0
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromPWp W4224
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPWp W4448
 pushFromPWp W4224
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 82 ; trap_vector_outer_product (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromFSp 0
 gosub 16, L2197
 pushFromPSp 32
 fetchValue 4
 pushImmf 0
 subf 
 infzf 
 jz L2126
 pushFromFSp 0
 fetchValue 4
 pushImm 153
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L2138
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_CA000\b_ca.bdscript       | ((B) Illuminator)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\G_EX240\g_ex.bdscript       | ()          
| obj\G_EX240_G\g_ex.bdscript       | ()          
| obj\G_EX240_R\g_ex.bdscript       | ()          
| obj\G_EX250_1\g_ex.bdscript       | ()          
| obj\G_EX250_1_G\g_ex.bdscript       | ()          
| obj\G_EX250_1_R\g_ex.bdscript       | ()          
| obj\G_EX260\g_ex.bdscript       | ()          
| obj\G_EX260_G\g_ex.bdscript       | ()          
| obj\G_EX260_R\g_ex.bdscript       | ()          
| obj\G_EX900_COMBAT\g_ex.bdscript       | ()          
| obj\G_EX900_COMBAT_HARD\g_ex.bdscript       | ()          
| obj\G_EX900_FINAL\g_ex.bdscript       | ()          
| obj\G_EX900_FLIGHT\g_ex.bdscript       | ()          
| obj\G_EX900_FLIGHT_HARD\g_ex.bdscript       | ()          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX940_BTL\n_ex.bdscript       | ((N) Riku (coat) (BTL) (EX))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          



