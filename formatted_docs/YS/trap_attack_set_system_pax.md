## trap_attack_set_system_pax* (attack)

`syscall 2, 94 ; trap_attack_set_system_pax (1 in, 0 out)`

Attach a system PAX effect to an attack

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC_3 *   | An attack object


### Example Usage From magic\CURE_1\cure.bdscript
```plaintext
L612:
 popToSp 0
 pushFromPSpVal 0
 pushImm 1247
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 syscall 2, 94 ; trap_attack_set_system_pax (1 in, 0 out)
 pushFromFSp 4
 pushImmf 100
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushImmf 60
 popToSp 8
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           



