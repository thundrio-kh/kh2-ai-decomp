## trap_mission_add_gauge* (mission_gauge)

`syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)`

Adds to a gauge on the screen

#### Input parameters
| Name | Type | Description
|------|------|------------
| amount   | float   | amount to add to gauge
| gauge_id   | int   | id of gauge to add to


Example Usage From msn\EH14_MS103\ms_l.bdscript
```plaintext
TR6:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 syscall 2, 72 ; trap_damage_is_cure (1 in, 1 out)
 eqz 
 jz L88
 pushFromFSp 4
 fetchValue 4
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 jz L58
 pushImm 0
 pushFromFSp 0
 syscall 2, 46 ; trap_damage_damage (1 in, 1 out)
 gosub 4, L89
 negf 
 pushImm 0
 syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)
 jmp L86
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\EH14_MS103\ms_l.bdscript       |           
| msn\MU01_MS102\mu01.bdscript       |           
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           
| msn\MU09_MS108\mu09.bdscript       |           
| msn\TR07_MS203\tr07.bdscript       |           
| msn\WI05_MS102D\wi05.bdscript       |           
| msn\WI06_MS102B\wi06.bdscript       |           
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_PO030\f_po.bdscript       | ((F) ??? (PO))          
| obj\F_PO090\f_po.bdscript       | ((PO) Bees (PO))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\F_WI070\f_wi.bdscript       | ((F) Toy box (WI))          
| obj\F_WI080\f_wi.bdscript       | ((F) Box with stuff (WI))          
| obj\F_WI090\f_wi.bdscript       | ((F) Sofa 1 (WI))          
| obj\F_WI100\f_wi.bdscript       | ((F) Chair 1 (WI))          
| obj\F_WI110\f_wi.bdscript       | ((F) Chair 2 (WI))          
| obj\F_WI120\f_wi.bdscript       | ((F) Piano (WI))          
| obj\F_WI130\f_wi.bdscript       | ((F) Wardrobe 1 (WI))          
| obj\F_WI140\f_wi.bdscript       | ((F) Wardrobe 2 (WI))          
| obj\F_WI150\f_wi.bdscript       | ((F) Wardrobe 3 (WI))          
| obj\F_WI160\f_wi.bdscript       | ((F) Ceiling lamp (WI))          
| obj\F_WI170\f_wi.bdscript       | ((F) Fireplace (WI))          
| obj\F_WI180\f_wi.bdscript       | ((F) Chimney (WI))          
| obj\F_WI190\f_wi.bdscript       | ((F) Train toy (WI))          
| obj\F_WI200\f_wi.bdscript       | ((F) Stool (WI))          
| obj\F_WI210\f_wi.bdscript       | ((F) Dog bed (WI))          
| obj\F_WI220\f_wi.bdscript       | ((F) Sofa 2 (WI))          
| obj\F_WI230\f_wi.bdscript       | ((F) Wall deer trophy (WI))          
| obj\F_WI240\f_wi.bdscript       | ((F) Wall lamp (WI))          
| obj\F_WI250\f_wi.bdscript       | ((F) Christmas tree (WI))          
| obj\F_WI260\f_wi.bdscript       | ((F) Drawer (WI))          
| obj\F_WI270\f_wi.bdscript       | ((F) Wardrobe 4 (WI))          
| obj\F_WI280\f_wi.bdscript       | ((F) Wardrobe 5 (WI))          
| obj\F_WI290\f_wi.bdscript       | ((F) Painting (WI))          
| obj\F_WI300\f_wi.bdscript       | ((F) Shelf (WI))          
| obj\F_WI320\f_wi.bdscript       | ((F) Lilliput houses 1 (WI))          
| obj\F_WI330\f_wi.bdscript       | ((F) Lilliput houses 2 (WI))          
| obj\F_WI340\f_wi.bdscript       | ((F) Lilliput houses 3 (WI))          
| obj\F_WI350\f_wi.bdscript       | ((F) Lilliput houses 4 (WI))          
| obj\F_WI360\f_wi.bdscript       | ((F) Building site’s platform (WI))          
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_PO010_BTL\n_po.bdscript       | ((N) Pooh (BTL) (PO))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          



