## trap_obj_set_pos_trans* (position)

`syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)`

Set the position for an object. This is identical to trap_obj_set_pos but it also performs this transform to the position

*(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 0x1000u;

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| pos   | kn::FVector *   | A position vector


### Example Usage From limit\jack\limi.bdscript
```plaintext
L1483:
 popToSp 0
 pushFromPSpVal 4
 pushFromFSp 0
 gosub 4, L1581
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPSpVal 4
 pushImm 253
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 4
 pushImm L1670
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPSpVal 20
 pushImm 253
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 20
 pushImm L2696
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPAi L4737 ; ___ai '00' (L4737)
 pushImmf 500
 pushImm 0
 syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\jack\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          



