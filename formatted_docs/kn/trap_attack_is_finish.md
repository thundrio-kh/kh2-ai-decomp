## trap_attack_is_finish* (attack)

`syscall 10, 38 ; trap_attack_is_finish (1 in, 1 out)`

Returns if an attack is a finisher

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_10 *   | An attack object


#### Return Parameters
| Name | Type
|------|-----
| is_finish   | bool   
Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L135:
 pushFromFSp 0
 gosub 4, L170
 dup 
 jz L147
 pushFromFSp 0
 syscall 10, 38 ; trap_attack_is_finish (1 in, 1 out)
 eqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          



