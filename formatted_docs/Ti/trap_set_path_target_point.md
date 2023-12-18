## trap_set_path_target_point* (path)

syscall 5, 13 ; trap_set_path_target_point (2 in, 0 out)

Set a target point on a path

#### Input parameters
| Name | Type | Description
|------|------|------------
| point_index   | label   | call label for point index




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_AL070_BTL\n_al.bdscript       | ((N) Jafar clone (BTL) (AL))          
| obj\N_BB060_BTL\n_bb.bdscript       | ((N) Lumière (BTL) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          

</details>

<details>
	<summary>Example Usage From obj\N_AL070_BTL\n_al.bdscript</summary>
L1140:
 pushFromFSp 0
 gosub 4, L1376
 pushFromFSp 0
 pushFromFSp 0
 pushFromFSp 0
 fetchValue 16
 gosub 4, L1500
 syscall 5, 13 ; trap_set_path_target_point (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 pushImmf 10
 syscall 5, 3 ; trap_get_path_dir (2 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 44
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 jmp L1178
</details>

