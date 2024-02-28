## trap_bghit_check_line* (collision)

`syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)`

Collision check along a line

### Input parameters
| Name | Type | Description
|------|------|------------
| bghit   | YS::BGHIT_0 *   | A BGHIT object
| from   | kn::FVector *   | A position vector specifying the from point
| to   | kn::FVector *   | A position vector specifying the to point
| type   | int   | Type of hit to check


### Output Parameters
| Name | Type
|------|-----
| is_collision   | bool   
### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L2954:
 popToSp 0
 pushFromPSpVal 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -100
 addf 
 memcpy 0
 pushFromPSp 80
 memcpyToSp 16, 64
 pushFromPSp 64
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 40000
 addf 
 memcpy 0
 pushFromPSp 16
 pushFromPSp 80
 pushFromPSp 64
 pushImm 65536
 syscall 6, 51 ; trap_bghit_check_line (4 in, 1 out)
 jz L3028
 pushFromPSp 16
 syscall 6, 54 ; trap_bghit_get_cross_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 48
 jmp L3040
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\M_EX540\m_ex.bdscript       | ((M) Aeroplane)          
| obj\M_EX540_WI\m_ex.bdscript       | ((M) Aeroplane (WI))          
| obj\M_EX610\m_ex.bdscript       | ((M) Strafer)          
| obj\M_EX610_RAW\m_ex.bdscript       | ((M) Strafer (RAW))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX020\p_ex.bdscript       | ((P) Donald)          
| obj\P_EX020_NM\p_ex.bdscript       | ((P) Donald (NM))          
| obj\P_EX020_TR\p_ex.bdscript       | ((P) Donald (TR))          
| obj\P_EX020_XM\p_ex.bdscript       | ((P) Donald (XM))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_NM000\p_nm.bdscript       | ((P) Jack Skellington)          
| obj\P_NM000_SANTA\p_nm.bdscript       | ((P) Jack Skellington (XM))          
| obj\P_TR010\p_tr.bdscript       | ((P) ??? (TR))          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          



