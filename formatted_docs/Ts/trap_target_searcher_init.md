## trap_target_searcher_init* (target)

`syscall 6, 3 ; trap_target_searcher_init (2 in, 0 out)`



#### Input parameters
| Name | Type | Description
|------|------|------------
| num   | int   | Number of targets the target searcher is allowed to have




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX780\m_ex.bdscript       | ((M) Aerial Knocker)          
| obj\M_EX780_HB\m_ex.bdscript       | ((M) Aeriel Champ)          
| obj\M_EX880_DANCER\m_ex.bdscript       | ((M) Demyx’s water form)          
| obj\M_EX880_DANCER_EH\m_ex.bdscript       | ((M) Demyx’s water form (EH))          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_BB000\p_bb.bdscript       | ((P) Beast)          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          
| obj\P_HE000\p_he.bdscript       | ((P) Auron)          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          
| obj\P_MU000\p_mu.bdscript       | ((P) Mulan)          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```
L3932:
 popToSp 0
 pushFromFSp 0
 pushImm 20
 syscall 6, 3 ; trap_target_searcher_init (2 in, 0 out)
 ret
```
</details>

