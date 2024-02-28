## trap_camera_reset* (camera)

`syscall 1, 295 ; trap_camera_reset (0 in, 0 out)`

Resets the camera position

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\B_AL100_1ST\b_al.bdscript
```plaintext
L1887:
 popToSp 0
 popToSp 4
 pushFromFSp 4
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 syscall 1, 295 ; trap_camera_reset (0 in, 0 out)
 pushFromFSp 4
 pushFromFSp 4
 gosub 4, L1647
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPWp W176
 pushFromFSp 4
 pushImm 253
 pushImmf 0
 gosub 4, L1787
 drop 
 pushFromPWp W176
 pushFromPAi L10686 ; ___ai 'rc_swing_end' (L10686)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 4
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



