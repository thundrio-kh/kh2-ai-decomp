## trap_obj_hover* (movement)

`syscall 1, 73 ; trap_obj_hover (3 in, 0 out)`

Has the object hover at a given velocity and acceleration

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_193   | An object
| velocity   | float   | Velocity value
| accel   | float   | Acceleration value


### Example Usage From obj\B_EX220\b_ex.bdscript
```plaintext
L150:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromPSpVal 160
 gosub 12, L263
 pushFromPSpVal 160
 pushImm 4006
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L271
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L291
 pushFromFSp 0
 pushFromPAi L4686 ; ___ai 'exec_rc' (L4686)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L322
 pushFromFSp 8
 pushFromPSp 16
 pushImmf 0.7
 syscall 1, 73 ; trap_obj_hover (3 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 gosub 12, L369
 drop 
 pushFromPSpVal 0
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 8
 pushImm L400
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromPSpVal 0
 pushImm 6
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\F_WI070\f_wi.bdscript       | ((F) Toy box (WI))          
| obj\F_WI080\f_wi.bdscript       | ((F) Box with stuff (WI))          
| obj\F_WI090\f_wi.bdscript       | ((F) Sofa 1 (WI))          
| obj\F_WI100\f_wi.bdscript       | ((F) Chair 1 (WI))          
| obj\F_WI110\f_wi.bdscript       | ((F) Chair 2 (WI))          
| obj\F_WI130\f_wi.bdscript       | ((F) Wardrobe 1 (WI))          
| obj\F_WI140\f_wi.bdscript       | ((F) Wardrobe 2 (WI))          
| obj\F_WI150\f_wi.bdscript       | ((F) Wardrobe 3 (WI))          
| obj\F_WI190\f_wi.bdscript       | ((F) Train toy (WI))          
| obj\F_WI200\f_wi.bdscript       | ((F) Stool (WI))          
| obj\F_WI210\f_wi.bdscript       | ((F) Dog bed (WI))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX850\m_ex.bdscript       | ((M) Berserker weapon (Useable))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          



