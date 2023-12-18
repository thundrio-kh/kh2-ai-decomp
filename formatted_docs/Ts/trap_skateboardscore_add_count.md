## trap_skateboardscore_add_count* (special)

`syscall 6, 48 ; trap_skateboardscore_add_count (2 in, 0 out)`

Add to the skateboard count score

#### Input parameters
| Name | Type | Description
|------|------|------------
| time   | float   | Time to take (in frames




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
L522:
 popToSp 0
 pushImm 20
 pushImmf 60
 syscall 6, 48 ; trap_skateboardscore_add_count (2 in, 0 out)
 pushImm 0
 pushImm 0
 sub 
 ipos 
 jz L555
 pushImm 64
 pushImm L556
 pushFromFSp 0
 gosub 4, L757
 drop 
 jmp L555
```
</details>

