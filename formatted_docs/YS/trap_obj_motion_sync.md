## trap_obj_motion_sync* (mset)

`syscall 1, 126 ; trap_obj_motion_sync (2 in, 0 out)`

Syncs two motion sets

### Input parameters
| Name | Type | Description
|------|------|------------
| parent   | YS::MOTION_289   | A motion set
| child   | YS::MOTION_289   | A motion set


### Example Usage From limit\donald2\limi.bdscript
```plaintext
L4229:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromPSp 12
 pushFromFSp 8
 fetchValue 4
 gosub 12, L221
 pushFromFSp 0
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 eqz 
 jz L4279
 pushFromPSp 12
 pushFromFSp 0
 syscall 1, 126 ; trap_obj_motion_sync (2 in, 0 out)
 pushFromFSp 0
 pushFromPSp 12
 pushFromPSp 12
 pushFromFSp 4
 syscall 1, 235 ; trap_party_hand_to_bone (2 in, 1 out)
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 jmp L4279
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_HE000_NPC_QSATO\npc_.bdscript       | ((P) Auron (NPC_QSATO))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          



