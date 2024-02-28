## trap_attack_set_effect* (attack)

`syscall 2, 61 ; trap_attack_set_effect (2 in, 0 out)`

Applies an object effect to an attack

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | an attack object
| effect   | ryj::EFFECT *   | an object effect to apply to an attack


### Example Usage From limit\beast\limi.bdscript
```plaintext
L39:
 pushFromFSp 8
 pushImm 497
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 12
 pushFromFSp 12
 pushFromFSp 0
 syscall 2, 61 ; trap_attack_set_effect (2 in, 0 out)
 pushFromFSp 12
 pushImmf 450
 pushImmf 50
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 12
 pushImmf 55
 pushImmf 100
 pushImmf 0
 syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
 jmp L85
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\beast\limi.bdscript       |           
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_LK130\b_lk.bdscript       | ((F) Path for Sora Lion’s groundshaker RC)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX560\m_ex.bdscript       | ((M) Hammer Frame)          
| obj\M_EX560_HB\m_ex.bdscript       | ((M) Iron Hammer)          
| obj\M_EX560_WI\m_ex.bdscript       | ((M) Hammer Frame (WI))          
| obj\M_EX630\m_ex.bdscript       | ((M) Luna Bandit)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX940\m_ex.bdscript       | ((M) Berserker)          



