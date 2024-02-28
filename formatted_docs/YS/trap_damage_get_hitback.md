## trap_damage_get_hitback* (attack)

`syscall 2, 86 ; trap_damage_get_hitback (1 in, 1 out)`

Get the hitback value of damage

#### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


#### Return Parameters
| Name | Type
|------|-----
| hitback   | float   
Example Usage From obj\B_CA010\b_ca.bdscript
```plaintext
L1729:
 jz L1743
 pushFromFSp 0
 pushFromFSp 4
 pushFromFSp 4
 syscall 2, 86 ; trap_damage_get_hitback (1 in, 1 out)
 syscall 2, 3 ; trap_enemy_exec_damage_hitback (3 in, 0 out)
 jmp L1784
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          



