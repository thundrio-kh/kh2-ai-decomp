## trap_attack_set_hitmark_pos* (attack)

`syscall 2, 71 ; trap_attack_set_hitmark_pos (2 in, 0 out)`

Sets a hitmark pos

#### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | Vector *   | Position vector
| dir   | Vector *   | Direction vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          

</details>

<details>
	<summary>Example Usage From obj\B_MU120\b_mu.bdscript</summary>
```plaintext
L11772:
 pushFromFSp 4
 jz L11891
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 20, L797
 pushImm 44
 popToSp 8
 pushFromFSp 0
 pushFromFSp 8
 pushFromPSp 16
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 48
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 48
 pushImmf 1.5
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 gosub 20, L3803
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImm 600
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 64
 pushFromFSp 64
 pushFromFSp 0
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromPSp 48
 pushFromPSp 32
 syscall 2, 71 ; trap_attack_set_hitmark_pos (2 in, 0 out)
 pushFromFSp 64
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 jmp L11891
```
</details>

