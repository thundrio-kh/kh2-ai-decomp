## trap_obj_set_fall_motion* (motion)

`syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)`

Sets an object to go into a falling animation

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| id   | int   | ID of a specific motion set entry


### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L1258:
 pushFromPWp W0
 pushFromFSp 0
 gosub 52, L1393
 jz L1331
 pushFromPSp 16
 pushImmf 1
 gosub 52, L1889
 pushFromFSp 0
 pushFromPSp 16
 gosub 52, L2589
 pushFromFSp 0
 pushImmf 0
 syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
 pushFromPWp W0
 fetchValue 0
 pushFromFSp 0
 pushImm 255
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 popToSp 188
 pushFromPWp W0
 pushFromFSp 0
 gosub 52, L2649
 pushFromFSp 0
 pushImm 258
 syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)
 pushFromFSp 0
 pushImm 259
 syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 188
 gosub 52, L2603
 drop 
 jmp L1365
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_BB130\f_bb.bdscript       | ((F) ??? - Minigame related? (BB))          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR060\f_tr.bdscript       | ((F) MCP wall (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\M_AL020_ICEE\m_al.bdscript       | ((M) Icy Cube)          
| obj\M_AL020_ICEE_RAW\m_al.bdscript       | ((M) Icy Cube (RAW))          
| obj\M_EX520\m_ex.bdscript       | ((M) Hook Bat)          
| obj\M_EX520_HB\m_ex.bdscript       | ((M) Beffudler)          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX640\m_ex.bdscript       | ((M) Hot Rod)          
| obj\M_EX640_HB\m_ex.bdscript       | ((M) Mad Ride)          
| obj\M_EX640_WI\m_ex.bdscript       | ((M) Hot Rod (WI))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX780\m_ex.bdscript       | ((M) Aerial Knocker)          
| obj\M_EX780_HB\m_ex.bdscript       | ((M) Aeriel Champ)          
| obj\M_EX880\m_ex.bdscript       | ((M) Creeper)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          



