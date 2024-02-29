## trap_enemy_stop_all_end* (enemy)

`syscall 7, 1 ; trap_enemy_stop_all_end (1 in, 0 out)`

Lets all instances of the object start doing things again

### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | ID of an enemy


### Example Usage From obj\B_TR000\b_tr.bdscript
```plaintext
L429:
 pushImm 6
 syscall 7, 1 ; trap_enemy_stop_all_end (1 in, 0 out)
 pushImmf 1
 syscall 1, 326 ; trap_bg_set_animation_speed (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          



