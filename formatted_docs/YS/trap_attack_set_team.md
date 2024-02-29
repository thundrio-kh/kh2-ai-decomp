## trap_attack_set_team* (attack)

`syscall 2, 37 ; trap_attack_set_team (2 in, 0 out)`

Sets a team for an attack (most likely so that objects on the same team cannot be damaged by this attack)

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC_3 *   | An attack object
| team   | int   | Value to represent which team this attack belongs to


### Example Usage From obj\B_BB110\b_bb.bdscript
```plaintext
L9800:
 pushFromFSpVal 68
 pushFromFSp 68
 pushFromFSp 64
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSpVal 68
 pushFromFSpVal 64
 syscall 2, 37 ; trap_attack_set_team (2 in, 0 out)
 pushFromPSpVal 0
 syscall 1, 238 ; trap_obj_motion_capture_id (1 in, 1 out)
 popToSp 32
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          



