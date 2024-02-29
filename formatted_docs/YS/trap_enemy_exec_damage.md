## trap_enemy_exec_damage* (enemy)

`syscall 2, 0 ; trap_enemy_exec_damage (2 in, 0 out)`

executes damage

### Input parameters
| Name | Type | Description
|------|------|------------
| enemy_obj   | YS::BTLOBJ *   | A battle object
| damage   | YS::DAMAGE_4 *   | A damage object


### Example Usage From obj\F_MU030\f_mu.bdscript
```plaintext
L31:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 syscall 2, 0 ; trap_enemy_exec_damage (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_MU030\f_mu.bdscript       | ((F) ??? (MU))          



