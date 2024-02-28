## trap_enemy_exec_damage_small* (enemy)

`syscall 2, 2 ; trap_enemy_exec_damage_small (3 in, 0 out)`

executes a small amount of damage

### Input parameters
| Name | Type | Description
|------|------|------------
| enemy_obj   | YS::BTLOBJ *   | A battle object
| damage   | YS::DAMAGE_4 *   | A damage object
| power   | float   | amount of power for the damage, value of 100 is the only one used in game


### Example Usage From obj\B_CA020\b_ca.bdscript
```plaintext
L730:
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L761
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 100
 syscall 2, 2 ; trap_enemy_exec_damage_small (3 in, 0 out)
 pushFromFSp 0
 syscall 1, 209 ; trap_obj_dead (1 in, 0 out)
 jmp L938
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          



