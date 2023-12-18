## trap_obj_effect_start_bind_other* (effect)

syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)

Starts an effect associated with an object and binds it to another object

#### Input parameters
| Name | Type | Description
|------|------|------------
| other_object   | YS::OBJ_125   | Other object for the effect to be binded to


#### Return Parameters
| Name | Type
|------|-----
| effect   | ryj::EFFECT_310   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\F_CA010\f_ca.bdscript       | ((F) ??? - Something from Black Pearl? (CA))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX850\m_ex.bdscript       | ((M) Berserker weapon (Useable))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_BB080_BTL\n_bb.bdscript       | ((N) Wardrobe maid (BTL) (BB))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\P_EX020\p_ex.bdscript       | ((P) Donald)          
| obj\P_EX020_NM\p_ex.bdscript       | ((P) Donald (NM))          
| obj\P_EX020_TR\p_ex.bdscript       | ((P) Donald (TR))          
| obj\P_EX020_XM\p_ex.bdscript       | ((P) Donald (XM))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          

</details>

<details>
	<summary>Example Usage From obj\B_EX100\b_ex.bdscript</summary>
L15416:
 popToSp 0
 gosub 4, L1075
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushImmf 8
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushFromPWp W976
 pushImm 18
 gosub 4, L1075
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 popToSp 4
 pushImmf 180
 gosub 4, L1474
 pushImmf 180
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 180
 gosub 4, L1474
 pushFromFSp 4
 syscall 0, 44 ; trap_effect_loop_end (1 in, 0 out)
 pushImmf 90
 gosub 4, L1474
 pushImmf 90
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 gosub 4, L1075
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 9
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushFromPWp W976
 gosub 4, L15517
 ret
</details>

