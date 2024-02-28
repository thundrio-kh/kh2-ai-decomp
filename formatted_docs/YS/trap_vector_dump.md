## *trap_vector_dump* (debug)

`syscall 0, 8 ; trap_vector_dump (2 in, 0 out)`

Normally does nothing in production game. When running the PC version of the game with this mod (MainMemory/KH2AIDebug), it prints each component of the vector to the screen, one per line

#### Input parameters
| Name | Type | Description
|------|------|------------
| vec   | kn::FVector *   | A vector
| description   | string   | A string, should be pushed to the stack using pushFromPAi




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_CA060\b_ca.bdscript       | ((?) Port Royal enemy?)          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\F_HB050\f_hb.bdscript       | ((F) CoR’s pushing pillar (HB))          
| obj\F_HB050_23\f_hb.bdscript       | ((F) CoR’s pushing pillar 2 (HB))          
| obj\F_HB060\f_hb.bdscript       | ((F) CoR’s rising pillar (HB))          
| obj\F_HB140\f_hb.bdscript       | ((F) Cavern of Remembrance big pushing block (HB))          
| obj\F_NM020\f_nm.bdscript       | ((F) Spitting fountain (NM))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_TR010\p_tr.bdscript       | ((P) ??? (TR))          

</details>

<details>
	<summary>Example Usage From obj\B_AL020\b_al.bdscript</summary>
```plaintext
L3114:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L3311
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L3296
 pushFromPSpVal 176
 pushImm 360
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSpVal 176
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPSpVal 176
 fetchValue 4
 pushImm 151
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 4
 gosub 12, L3311
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPAi L11299 ; ___ai 'target pos' (L11299)
 syscall 0, 8 ; trap_vector_dump (2 in, 0 out)
 pushFromFSp 8
 pushFromPSpVal 0
 pushImmf 0
 gosub 12, L3322
 pushFromFSp 8
 pushImm L3360
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 0
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1838
 pushFromFSp 8
 pushFromPSp 16
 gosub 12, L3043
 pushFromFSp 0
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 gosub 12, L3454
 drop 
 pushFromFSp 8
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L11322 ; ___ai 'rc_roll_up' (L11322)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L11339 ; ___ai '00' (L11339)
 pushFromFSp 8
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 ret
```
</details>

