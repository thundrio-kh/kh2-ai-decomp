## *trap_obj_jump_height_to_uptime* (Math)

`syscall 1, 100 ; trap_obj_jump_height_to_uptime (1 in, 1 out)`

Converts jump height to uptime using the following formula: `math.sqrt(math.abs(height * 2.0) / 0.40816328)`

#### Input parameters
| Name | Type | Description
|------|------|------------
| height   | float   | Height Value


#### Return Parameters
| Name | Type
|------|-----
| uptime   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\goofy\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
| obj\M_AL020_ICEE\m_al.bdscript       | ((M) Icy Cube)          
| obj\M_AL020_ICEE_RAW\m_al.bdscript       | ((M) Icy Cube (RAW))          
| obj\M_EX700\m_ex.bdscript       | ((M) Mole Driller)          
| obj\M_EX700_NM\m_ex.bdscript       | ((M) Mole Driller (NM))          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          

</details>

<details>
	<summary>Example Usage From limit\goofy\limi.bdscript</summary>
```
L1794:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 gosub 4, L1819
 pushFromFSp 4
 pushFromPAi L2962 ; ___ai 'height' (L2962)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromFSp 4
 popToSpVal 8
 pushFromFSp 4
 syscall 1, 100 ; trap_obj_jump_height_to_uptime (1 in, 1 out)
 popToSpVal 16
 ret
```
</details>

