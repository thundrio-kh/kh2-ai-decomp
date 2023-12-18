## trap_saveram_set_weapon* (save)

`syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)`



#### Input parameters
| Name | Type | Description
|------|------|------------
| ability_id   | int   | ID of the ability to grant




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| 00common       |           
| ard\tt04\tt04.bdscript       |           
| 00common       |           

</details>

<details>
	<summary>Example Usage From 00common</summary>
```
L193:
 pushImm 1
 pushImm 41
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 2
 pushImm 75
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 3
 pushImm 49
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 4
 pushImm 81
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 5
 pushImm 54
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 6
 pushImm 55
 pushImm 80
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 7
 pushImm 72
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 8
 pushImm 62
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 9
 pushImm 59
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 10
 pushImm 60
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 11
 pushImm 61
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 12
 pushImm 74
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 13
 pushImm 73
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushImm 1
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 2
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 3
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 4
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 5
 pushImm 0
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 6
 pushImm 71
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 pushImm 10
 pushImm 42
 syscall 0, 76 ; trap_saveram_set_form_weapon (2 in, 0 out)
 ret
```
</details>

