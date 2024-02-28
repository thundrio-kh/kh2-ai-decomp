## trap_target_set_before_player* (target)

`syscall 1, 162 ; trap_target_set_before_player (2 in, 0 out)`

Set the target of an object to be before the player

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| priority   | int   | Priority of the target


### Example Usage From msn\MU01_MS102\mu01.bdscript
```plaintext
TR3:
 pushImm 19155
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 gosub 8, L291
 pushFromPSp 0
 pushImm 100
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L263
 pushFromPSp 0
 pushImm 0
 syscall 1, 162 ; trap_target_set_before_player (2 in, 0 out)
 jmp L263
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\MU01_MS102\mu01.bdscript       |           
| msn\WI04_MS102C\wi04.bdscript       |           
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_HB030\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_MU030\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_WI320\f_wi.bdscript       | ((F) Lilliput houses 1 (WI))          
| obj\F_WI330\f_wi.bdscript       | ((F) Lilliput houses 2 (WI))          
| obj\F_WI340\f_wi.bdscript       | ((F) Lilliput houses 3 (WI))          
| obj\F_WI350\f_wi.bdscript       | ((F) Lilliput houses 4 (WI))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX940_BTL\n_ex.bdscript       | ((N) Riku (coat) (BTL) (EX))          
| obj\N_HE030_BTL\n_he.bdscript       | ((N) Megara (Hydra battle) (BTL) (HE))          
| obj\N_HE030_BTL_DEF\n_he.bdscript       | ((N) Megara (Pete battle) (BTL_DEF) (HE))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          



