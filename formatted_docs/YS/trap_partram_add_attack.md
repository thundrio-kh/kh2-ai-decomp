## trap_partram_add_attack* (save)

`syscall 0, 92 ; trap_partram_add_attack (2 in, 0 out)`

Gives attack to the player

### Input parameters
| Name | Type | Description
|------|------|------------
| partram   | YS::PARTRAM *   | Partram object
| amt   | int   | Amount of attack to add


### Example Usage From ard\tt04\tt04.bdscript
```plaintext
L36:
 pushImm 1
 pushImm 384
 pushImm 0
 syscall 0, 75 ; trap_saveram_set_weapon (3 in, 0 out)
 pushFromFSp 8
 pushImm 1
 syscall 0, 92 ; trap_partram_add_attack (2 in, 0 out)
 jmp L114
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| ard\tt04\tt04.bdscript       |           



