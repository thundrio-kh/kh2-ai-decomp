## trap_obj_set_land_motion* (mset)

`syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)`

Sets an object to go into a landing animation

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
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
| obj\M_AL020_ICEE\m_al.bdscript       | ((M) Icy Cube)          
| obj\M_AL020_ICEE_RAW\m_al.bdscript       | ((M) Icy Cube (RAW))          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          



