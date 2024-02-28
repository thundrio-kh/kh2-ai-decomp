## trap_trinity_shot_init* (special)

`syscall 7, 28 ; trap_trinity_shot_init (0 in, 0 out)`

Initialize a trinity limit shot

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
```plaintext
L9026:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L9092
 pushFromPSpVal 80
 pushFromFSp 4
 pushImm 1
 syscall 2, 49 ; trap_limit_friend (2 in, 1 out)
 gosub 4, L388
 pushFromPSpVal 80
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 131 ; trap_target_dup (1 in, 1 out)
 popToSpVal 96
 pushFromPSpVal 20
 pushImm 2
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromPSpVal 80
 pushImm 3
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushImm 0
 popToSpVal 100
 pushImm -1
 popToSpVal 104
 pushImmf -1
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSpVal 108
 syscall 7, 28 ; trap_trinity_shot_init (0 in, 0 out)
 ret
```
</details>

