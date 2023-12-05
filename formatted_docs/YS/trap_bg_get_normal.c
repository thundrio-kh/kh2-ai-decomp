## trap_bg_get_normal* (camera)

syscall 1, 137 ; trap_bg_get_normal (1 in, 1 out)

Return the normal of the background position from the given camera

#### Input parameters
| Name | Type | Description
|------|------|------------
| camera   | int   | Value designating the camera


#### Return Parameters
| Name | Type
|------|-----
| normal   | kn::FVector   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          

</details>

<details>
	<summary>Example Usage From obj\B_EX140\b_ex.bdscript</summary>
L8661:
 pushFromFSp 64
 syscall 1, 137 ; trap_bg_get_normal (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSpVal 80
 pushFromPSp 16
 pushImmf 3.141593
 syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSpVal 16, 80
 pushImm 1
 popToSp 4
</details>

