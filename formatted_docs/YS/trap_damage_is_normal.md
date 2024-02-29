## trap_damage_is_normal (attack)

`syscall 2, 93 ; trap_damage_is_normal (1 in, 1 out)`

Returns if the damage from an attack is normal type

### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


### Output Parameters
| Name | Type
|------|-----
| unk   | unknown   
### Example Usage From obj\F_CA060\f_ca.bdscript
```plaintext
L31:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 syscall 2, 93 ; trap_damage_is_normal (1 in, 1 out)
 eqz 
 dup 
 jnz L48
 pushFromFSp 4
 syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
 neqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          



