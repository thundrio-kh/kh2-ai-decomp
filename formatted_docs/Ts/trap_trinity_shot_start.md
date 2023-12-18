## trap_trinity_shot_start* (special)

`syscall 7, 29 ; trap_trinity_shot_start (4 in, 1 out)`

Start a trinity limit shot

#### Input parameters
| Name | Type | Description
|------|------|------------
| dir   | kn::FVector *   | A direction vector


#### Return Parameters
| Name | Type
|------|-----
| result   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
```
L7618:
 pushFromFSp 36
 pushImm 0
 sub 
 ipos 
 jz L7792
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 1
 pushImmf 1
 gosub 12, L435
 pushFromPSp 16
 pushImmf -0.261799
 pushImmf 0.349066
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 syscall 0, 68 ; trap_vector_rotx (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 12
 pushImmf -0.872665
 pushImmf 0.872665
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSpVal 0
 gosub 12, L397
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 20
 addf 
 memcpy 0
 pushFromPSpVal 0
 gosub 12, L7793
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 191 ; trap_obj_lockon_target (1 in, 1 out)
 pushFromFSp 0
 pushImm 32
 add 
 pushFromPSp 16
 syscall 7, 29 ; trap_trinity_shot_start (4 in, 1 out)
 popToSp 32
 pushFromFSp 32
 pushImm 44
 add 
 pushImmf 60
 memcpy 0
 pushFromFSp 32
 pushImm 40
 add 
 pushImmf 14
 memcpy 0
 pushFromFSp 36
 pushImm 1
 sub 
 popToSp 36
 jmp L7618
```
</details>

