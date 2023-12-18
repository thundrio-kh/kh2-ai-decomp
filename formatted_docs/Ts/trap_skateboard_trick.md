## trap_skateboard_trick* (special)

`syscall 6, 33 ; trap_skateboard_trick (3 in, 0 out)`

Perform a skateboard trick

#### Input parameters
| Name | Type | Description
|------|------|------------
| blend_time   | float   | Time to blend animations




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_TT010\f_tt.bdscript       | ((F) Skateboard (TT))          
| obj\F_TT010_AL\f_tt.bdscript       | ((F) Skateboard (AL))          
| obj\F_TT010_CA\f_tt.bdscript       | ((F) Skateboard (CA))          
| obj\F_TT010_HE\f_tt.bdscript       | ((F) Skateboard (HE))          
| obj\F_TT010_NM\f_tt.bdscript       | ((F) Skateboard (NM))          
| obj\F_TT010_SORA\f_tt.bdscript       | ((F) Skateboard (SORA) (TT))          
| obj\F_TT010_TR\f_tt.bdscript       | ((F) Skateboard (TR))          
| obj\F_TT010_WI\f_tt.bdscript       | ((F) Skateboard (WI))          
| obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript       | ((N) Dove (TT) (SKATE) (RTN) (EX))          

</details>

<details>
	<summary>Example Usage From obj\F_TT010\f_tt.bdscript</summary>
```
L483:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 4
 gosub 8, L205
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPAi L4920 ; ___ai '00' (L4920)
 pushFromFSp 8
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 pushFromFSp 8
 pushImm 263
 pushImmf 0
 syscall 6, 33 ; trap_skateboard_trick (3 in, 0 out)
 pushFromFSp 8
 pushImmf 0
 syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
 ret
```
</details>

