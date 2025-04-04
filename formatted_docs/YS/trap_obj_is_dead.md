## trap_obj_is_dead* (object)

`syscall 1, 272 ; trap_obj_is_dead (1 in, 1 out)`

Returns if the object is dead

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


### Output Parameters
| Name | Type
|------|-----
| is_dead   | bool   
### Example Usage From msn\CA10_MS107\ca10.bdscript
```plaintext
L98:
 pushFromPSp 0
 pushImm 8
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromPSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 dup 
 jz L119
 pushFromPSp 0
 syscall 1, 272 ; trap_obj_is_dead (1 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\CA10_MS107\ca10.bdscript       |           
| msn\EH20_MS113\eh20.bdscript       |           
| msn\EH20_MS113_RE\eh20.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\F_TR080\tr_w.bdscript       | ((F) Light cycle’s wall (TR))          
| obj\F_TR090\tr_w.bdscript       | ((F) Light cycle’s wall 2 (TR))          
| obj\F_TR100\tr_w.bdscript       | ((F) Light cycle’s wall 3 (single panel) (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



