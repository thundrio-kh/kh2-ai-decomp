## trap_prize_appear* (prize)

`syscall 6, 1 ; trap_prize_appear (2 in, 0 out)`

Make a prize appear

#### Input parameters
| Name | Type | Description
|------|------|------------
| prize_id   | int   | ID of the prize to appear




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\F_CA030_DARK\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA030_LIGHT\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA040\f_ca.bdscript       | ((F) Anchor (CA))          
| obj\M_EX590\m_ex.bdscript       | ((M) Bulky Vendor)          
| obj\M_EX590_NM\m_ex.bdscript       | ((M) Bulky Vendor (NM))          
| obj\N_HE030_BTL\n_he.bdscript       | ((N) Megara (Hydra battle) (BTL) (HE))          
| obj\N_HE030_BTL_DEF\n_he.bdscript       | ((N) Megara (Pete battle) (BTL_DEF) (HE))          
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L45:
 pushFromFSp 0
 syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 97
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L158
```
</details>

