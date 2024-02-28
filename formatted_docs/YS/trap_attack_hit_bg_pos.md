## trap_attack_hit_bg_pos* (attack)

`syscall 2, 42 ; trap_attack_hit_bg_pos (1 in, 1 out)`

Returns the position of when the attack hit the background

### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | unknown   | pushFromFSp: 176,180


### Output Parameters
| Name | Type
|------|-----
| vec   | kn::FVector *   
### Example Usage From limit\goofy2\limi.bdscript
```plaintext
L1263:
 pushFromFSp 176
 syscall 0, 44 ; trap_effect_loop_end (1 in, 0 out)
 pushFromFSp 180
 syscall 2, 40 ; trap_attack_is_hit_wall (1 in, 1 out)
 jz L1339
 pushFromFSp 0
 pushFromFSp 180
 syscall 2, 42 ; trap_attack_hit_bg_pos (1 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 pushFromPSp 64
 pushImm 16
 add 
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 gosub 60, L2155
 pushFromFSp 180
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushFromPSpVal 64
 syscall 1, 133 ; trap_obj_hide (1 in, 0 out)
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\F_NM020\f_nm.bdscript       | ((F) Spitting fountain (NM))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          



