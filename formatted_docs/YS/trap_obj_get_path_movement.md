## trap_obj_get_path_movement* (movement)

syscall 1, 178 ; trap_obj_get_path_movement (1 in, 1 out)

Gets a movement vector along a specific path

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| pos   | kn::FVector   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          

</details>

<details>
	<summary>Example Usage From obj\N_AL090_BTL\n_al.bdscript</summary>
L3262:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L3307
 pushFromFSp 0
 syscall 1, 178 ; trap_obj_get_path_movement (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 3.141593
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 4 ; trap_obj_wish_dir (2 in, 0 out)
 halt 
 jmp L3262
</details>

