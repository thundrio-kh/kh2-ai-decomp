## trap_chickenlittle_set_shoot_target* (special)

`syscall 10, 59 ; trap_chickenlittle_set_shoot_target (2 in, 0 out)`

Have chicken little set the destination to shoot

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| target_pos   | kn::FVector *   | pushFromPSp: 16


### Example Usage From obj\P_EX350\p_ex.bdscript
```plaintext
L409:
 syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
 jz L422
 pushFromPWp W0
 pushFromPSp 16
 syscall 10, 59 ; trap_chickenlittle_set_shoot_target (2 in, 0 out)
 halt 
 jmp L409
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



