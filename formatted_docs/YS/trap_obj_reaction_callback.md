## trap_obj_reaction_callback* (object)

`syscall 1, 325 ; trap_obj_reaction_callback (4 in, 0 out)`

Set a reaction callback for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object
| obj2   | YS::OBJ_125 *   | A second object to receive the RC?
| command   | int   | pushImm: 327
| target_obj   | YS::OBJ_125 *   | Object for the reaction to target




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\AL00_SKATE_01\al00.bdscript       |           
| msn\CA02_SKATE_01\ca02.bdscript       |           
| msn\HB09_SKATE_01\hb09.bdscript       |           
| msn\NM09_SKATE_01\nm09.bdscript       |           
| msn\TT06_LETTER_01\tt06.bdscript       |           
| msn\TT06_LETTER_02\tt06.bdscript       |           
| msn\TT06_WORK_LETTER\tt06.bdscript       |           
| msn\TT07_SKATE_01\tt07.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\AL00_SKATE_01\al00.bdscript</summary>
```plaintext
L145:
 pushFromPSp 0
 pushImm 5067
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromPSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L178
 pushFromPSp 0
 gosub 8, L179
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 327
 pushFromPSp 0
 syscall 1, 325 ; trap_obj_reaction_callback (4 in, 0 out)
 jmp L178
```
</details>

