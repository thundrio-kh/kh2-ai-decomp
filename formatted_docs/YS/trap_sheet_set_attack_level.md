## *trap_sheet_set_attack_level* (sheet)

`syscall 1, 358 ; trap_sheet_set_attack_level (2 in, 0 out)`

Set the attack level of an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet
| level   | int   | The new attack level




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From obj\N_CM020_BTL\n_cm.bdscript</summary>
```
L5357:
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 358 ; trap_sheet_set_attack_level (2 in, 0 out)
 pushImm 0
 popToSpVal 168
 jmp L5491
```
</details>

