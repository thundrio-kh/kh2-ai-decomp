## trap_skateboard_edge_jump* (special)

`syscall 6, 41 ; trap_skateboard_edge_jump (3 in, 0 out)`

Have the skateboard perform an edge jump

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| v   | kn::FVector   | A velocity vector
| motion_id   | int   | Animation id to play


### Example Usage From obj\F_TT010\f_tt.bdscript
```plaintext
L970:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 pushImm 12
 add 
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 200
 memcpy 0
 pushFromFSp 4
 pushFromPSp 16
 pushImm 255
 syscall 6, 41 ; trap_skateboard_edge_jump (3 in, 0 out)
 ret
```


### Appears in:
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



