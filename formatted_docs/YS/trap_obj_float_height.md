## trap_obj_float_height* (object)

`syscall 1, 99 ; trap_obj_float_height (1 in, 1 out)`

Returns the height the object is floating above the ground.

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| height   | float   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\F_BB120\f_bb.bdscript       | ((F) Minigame’s box (BB))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_PO090\f_po.bdscript       | ((PO) Bees (PO))          
| obj\F_PO090_ETC\f_po.bdscript       | ((F) Bees (ETC) (PO))          
| obj\F_PO090_TT\f_po.bdscript       | ((F) Bees (TT) (PO))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\M_EX520\m_ex.bdscript       | ((M) Hook Bat)          
| obj\M_EX520_HB\m_ex.bdscript       | ((M) Beffudler)          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX580\m_ex.bdscript       | ((M) Nightwalker)          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX660\m_ex.bdscript       | ((M) Rapid Thruster)          
| obj\M_EX660_RAW\m_ex.bdscript       | ((M) Rapid Thruster (RAW))          
| obj\M_EX660_WI\m_ex.bdscript       | ((M) Rapid Thruster (WI))          
| obj\M_EX660_WI_RAW\m_ex.bdscript       | ()          
| obj\M_EX700\m_ex.bdscript       | ((M) Mole Driller)          
| obj\M_EX700_NM\m_ex.bdscript       | ((M) Mole Driller (NM))          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX960\m_ex.bdscript       | ((M) Sorcerer)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          

</details>

<details>
	<summary>Example Usage From obj\B_AL100_1ST\b_al.bdscript</summary>
```
L6649:
 jz L6704
 halt 
 pushFromFSp 0
 syscall 1, 99 ; trap_obj_float_height (1 in, 1 out)
 pushFromPAi L10696 ; ___ai 'self.float_height' (L10696)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 dup 
 jz L6680
 pushFromFSp 0
 syscall 1, 99 ; trap_obj_float_height (1 in, 1 out)
 pushImmf -500
 subf 
 supzf 
 eqzv
```
</details>

