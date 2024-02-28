## trap_enemy_exec_damage_hitback* (enemy)

`syscall 2, 3 ; trap_enemy_exec_damage_hitback (3 in, 0 out)`

executes hitback damage against an enemy

### Input parameters
| Name | Type | Description
|------|------|------------
| enemy_obj   | YS::BTLOBJ *   | A battle object
| damage   | YS::DAMAGE_4 *   | A damage object
| power   | float   | amount of power for the damage


### Example Usage From obj\B_AL100_1ST\b_al.bdscript
```plaintext
L2116:
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 0
 syscall 2, 3 ; trap_enemy_exec_damage_hitback (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L10954 ; ___ai 'fear' (L10954)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L10676 ; ___ai 'move_back' (L10676)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L2167
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\F_TT030\f_tt.bdscript       | ((F) Cargo Climb’s cart (TT))          
| obj\F_TT040\f_tt.bdscript       | ((F) Junk (TT))          
| obj\F_TT120\f_tt.bdscript       | ((F) Junk 2 (TT))          
| obj\F_TT130\f_tt.bdscript       | ((F) Junk 3 (TT))          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          



