## trap_mission_get_gauge_ratio* (mission_gauge)

`syscall 4, 12 ; trap_mission_get_gauge_ratio (1 in, 1 out)`

Returns the a value from 0.0 to 1.0 representing the current progress of the specified gauge

### Input parameters
| Name | Type | Description
|------|------|------------
| gauge_id   | int   | id of a gauge


### Output Parameters
| Name | Type
|------|-----
| value   | float   
### Example Usage From msn\AL00_MS101\ms_a.bdscript
```plaintext
L163:
 popToSp 0
 popToSp 4
 pushFromPSp 16
 pushFromFSp 4
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 syscall 0, 60 ; trap_assert (1 in, 0 out)
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 popToSp 32
 pushFromFSp 32
 pushImm 0
 sub 
 neqz 
 syscall 0, 60 ; trap_assert (1 in, 0 out)
 pushFromFSp 32
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 cfti 
 pushFromFSp 0
 syscall 4, 12 ; trap_mission_get_gauge_ratio (1 in, 1 out)
 mulf 
 citf 
 popToSp 36
 pushFromFSp 36
 pushImm 0
 sub 
 info 
 jz L228
 pushImm 1
 popToSp 36
 jmp L228
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\AL00_MS101\ms_a.bdscript       |           
| msn\BB01_MS101\ms_a.bdscript       |           
| msn\CA01_MS101\ms_a.bdscript       |           
| msn\CA01_MS102\ms_d.bdscript       |           
| msn\HB09_MS101\ms_d.bdscript       |           
| msn\HB09_MS501\ms_d.bdscript       |           
| msn\HB09_MS901\ms_d.bdscript       |           
| msn\HE06_MS101\ms_a.bdscript       |           
| msn\HE19_MS204\ms_a.bdscript       |           
| msn\NM00_MS101\ms_d.bdscript       |           
| msn\TT03_MS601\ms_d.bdscript       |           
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT08_MS701\ms_a.bdscript       |           
| msn\TT14_MS109\tt_d.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT25_MS801\ms_d.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| msn\WI06_MS102B\wi06.bdscript       |           
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\F_TT100\f_tt.bdscript       | ((F) Trashcan (TT))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
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
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\F_WI360\f_wi.bdscript       | ((F) Building site’s platform (WI))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_PO010_BTL\n_po.bdscript       | ((N) Pooh (BTL) (PO))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          



