## trap_obj_play_se* (sound)

`syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)`

Plays a sound effect

#### Input parameters
| Name | Type | Description
|------|------|------------
| num   | int   | Sound effect number to play




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\F_HB050\f_hb.bdscript       | ((F) CoR’s pushing pillar (HB))          
| obj\F_HB050_23\f_hb.bdscript       | ((F) CoR’s pushing pillar 2 (HB))          
| obj\F_HB060\f_hb.bdscript       | ((F) CoR’s rising pillar (HB))          
| obj\F_HB140\f_hb.bdscript       | ((F) Cavern of Remembrance big pushing block (HB))          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
```
L8150:
 pushFromFSp 4
 jz L8183
 pushFromFSp 0
 pushImm 409020
 syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
 pushImmf 60
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 60
 gosub 4, L5452
 pushImm 1
 syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)
 pushImmf 30
 gosub 4, L5452
 jmp L8188
```
</details>

