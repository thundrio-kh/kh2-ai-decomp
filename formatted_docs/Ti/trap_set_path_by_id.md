## trap_set_path_by_id* (path)

`syscall 5, 23 ; trap_set_path_by_id (2 in, 1 out)`

Set a path for an object by ID

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | ID number of a path


#### Return Parameters
| Name | Type
|------|-----
| path   | Ti::Path_3   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          

</details>

<details>
	<summary>Example Usage From obj\F_TT110\f_tt.bdscript</summary>
```
L4131:
 pushFromFSpVal 120
 popToSpVal 116
 pushFromFSp 0
 pushFromPAi L5026 ; ___ai 'toward' (L5026)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 pushFromFSp 0
 pushFromFSpVal 116
 syscall 5, 23 ; trap_set_path_by_id (2 in, 1 out)
 drop 
 jmp L4236
```
</details>
