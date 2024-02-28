## trap_skateboard_ride* (special)

`syscall 6, 32 ; trap_skateboard_ride (2 in, 0 out)`

Attach an object to a board

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| board   | YS::OBJ_125   | An board object




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

</details>

<details>
	<summary>Example Usage From obj\F_TT010\f_tt.bdscript</summary>
```
L45:
 pushFromFSp 8
 syscall 1, 101 ; trap_obj_motion_is_capture (1 in, 1 out)
 eqz 
 jz L124
 pushFromFSp 8
 pushFromFSp 0
 gosub 8, L179
 pushFromFSp 0
 gosub 8, L205
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
 drop 
 pushFromFSp 0
 gosub 8, L205
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 8
 pushImm 16386
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPWp W48
 pushFromFSp 8
 syscall 6, 32 ; trap_skateboard_ride (2 in, 0 out)
 pushFromPWp W48
 pushFromPAi L5089 ; ___ai 'ride' (L5089)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 8
 pushImm 1
 syscall 1, 302 ; trap_obj_set_skateboard_mode (2 in, 0 out)
 jmp L124
```
</details>

