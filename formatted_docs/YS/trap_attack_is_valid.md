## trap_attack_is_valid* (attack)

`syscall 2, 96 ; trap_attack_is_valid (1 in, 1 out)`

Checks if an attack is valid

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | An attack object


### Output Parameters
| Name | Type
|------|-----
| result   | bool   
### Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
TR15:
 popToSp 0
 popToSp 4
 pushFromFSp 4
 fetchValue 4
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 dup 
 jz L52
 pushFromFSp 0
 syscall 2, 96 ; trap_attack_is_valid (1 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          



