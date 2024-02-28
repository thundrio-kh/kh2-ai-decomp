## trap_camera_watch* (camera)

`syscall 1, 207 ; trap_camera_watch (1 in, 0 out)`

Sets a "reaction" view camera to watch a target

#### Input parameters
| Name | Type | Description
|------|------|------------
| target   | YS::TARGET_3 *   | target for the camera to watch


Example Usage From ard\hb10\moog.bdscript
```plaintext
L55:
 pushFromPSp 0
 pushImm 1295
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 0
 syscall 1, 207 ; trap_camera_watch (1 in, 0 out)
 pushImm 36
 pushImm 17626
 gosub 8, L75
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\hb10\moog.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_PO010_BTL\n_po.bdscript       | ((N) Pooh (BTL) (PO))          



