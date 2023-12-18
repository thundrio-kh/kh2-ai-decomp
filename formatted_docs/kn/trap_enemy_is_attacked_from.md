## trap_enemy_is_attacked_from* (enemy)

`syscall 10, 23 ; trap_enemy_is_attacked_from (2 in, 1 out)`

Checks if an enemy is being attacked by the passed in object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_attacked_from   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
```
L6338:
 dup 
 jz L6360
 pushFromFSp 0
 gosub 12, L6383
 memcpyToSp 108, 32
 pushFromPSp 32
 gosub 40, L928
 memcpyToSp 16, 144
 pushFromPSp 144
 syscall 10, 23 ; trap_enemy_is_attacked_from (2 in, 1 out)
 eqzv
```
</details>

