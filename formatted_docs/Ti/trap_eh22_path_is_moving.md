## trap_eh22_path_is_moving* (special)

syscall 5, 30 ; trap_eh22_path_is_moving (1 in, 1 out)

Return if the path is moving during the dragon xemnas fight

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_moving   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          

</details>

<details>
	<summary>Example Usage From obj\B_EX330\b_ex.bdscript</summary>
L829:
 pushFromFSpVal 124
 pushImm 0
 sub 
 neqz 
 jz L880
 pushFromFSp 4
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 addf 
 popToSp 4
 pushFromFSp 4
 pushImmf 360
 subf 
 supoezf 
 dup 
 jnz L860
 pushFromFSp 0
 syscall 5, 30 ; trap_eh22_path_is_moving (1 in, 1 out)
 neqzv
</details>

