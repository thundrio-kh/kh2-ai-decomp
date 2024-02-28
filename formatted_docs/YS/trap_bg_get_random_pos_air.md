## trap_bg_get_random_pos_air* (position)

`syscall 1, 248 ; trap_bg_get_random_pos_air (5 in, 1 out)`

Gets a random open position in the air

### Input parameters
| Name | Type | Description
|------|------|------------
| center   | kn::FVector *   | center value to use
| near   | float   | how near to the center to look
| far   | float   | how far from the center to look
| low   | float   | how low from the center to look
| high   | float   | how high from the center to look


### Output Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   
### Example Usage From limit\donald\limi.bdscript
```plaintext
L4039:
 popToSp 0
 gosub 12, L1148
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 200
 pushImmf 250
 pushImmf -150
 pushImmf -150
 syscall 1, 248 ; trap_bg_get_random_pos_air (5 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L178
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\donald\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| magic\THUNDER_1\thun.bdscript       |           
| magic\THUNDER_1lk\thun.bdscript       |           
| magic\THUNDER_2\thun.bdscript       |           
| magic\THUNDER_2lk\thun.bdscript       |           
| magic\THUNDER_3\thun.bdscript       |           
| magic\THUNDER_3lk\thun.bdscript       |           
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BOSS\f_wi.bdscript       | ((F) Burning building (BOSS) (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\M_EX130\m_ex.bdscript       | ((M) Crimson Jazz)          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_HE000\p_he.bdscript       | ((P) Auron)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_TR010\p_tr.bdscript       | ((P) ??? (TR))          



