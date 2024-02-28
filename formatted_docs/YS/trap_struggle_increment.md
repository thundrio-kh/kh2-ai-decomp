## trap_struggle_increment (special)

`syscall 4, 42 ; trap_struggle_increment (2 in, 1 out)`

Increments the struggle value

#### Input parameters
| Name | Type | Description
|------|------|------------
| stage   | int   | Stage of the struggle tournament the player is at
| won_match   | bool   | If the player won the last match


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\TT04_MS00\tt04.bdscript       |           
| msn\TT04_MS01\tt04.bdscript       |           
| msn\TT04_MS02\tt04.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\TT04_MS00\tt04.bdscript</summary>
```
L172:
 popToSp 0
 pushFromFSpVal 8
 pushImm 0
 syscall 4, 42 ; trap_struggle_increment (2 in, 1 out)
 popToSp 4
 pushFromFSpVal 12
 pushImm 0
 sub 
 msbi 
 dup 
 jz L199
 pushFromFSpVal 12
 syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
 eqz 
 eqzv
```
</details>

