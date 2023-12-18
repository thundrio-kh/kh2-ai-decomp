## trap_chickenlittle_get_shoot_target* (special)

`syscall 10, 5 ; trap_chickenlittle_get_shoot_target (1 in, 1 out)`

Have Chicken Little shoot in the direction of the target

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


#### Return Parameters
| Name | Type
|------|-----
| shoot_dir   | kn::FVector   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\P_EX350\p_ex.bdscript</summary>
```
L518:
 popToSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromFSp 0
 syscall 10, 5 ; trap_chickenlittle_get_shoot_target (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushImmf 1
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0.5
 subf 
 infzf 
 jz L575
 pushFromFSp 0
 pushFromPSp 32
 pushFromPSp 16
 gosub 16, L584
 jmp L583
```
</details>

