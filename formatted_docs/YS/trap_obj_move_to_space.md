## trap_obj_move_to_space* (movement)

`syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)`

Moves to a random space within the given radius

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133   | An object
| radius   | float   | Radius value
| is_air   | bool   | Is the space to move in the air


### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L3079:
 pushFromPSpVal 4
 gosub 12, L3189
 gosub 12, L3400
 pushImmf 94
 gosub 12, L3378
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1889
 pushFromPSpVal 4
 pushFromFSp 0
 pushImm 80
 add 
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 4
 pushImmf 500
 pushImm 1
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromPSpVal 4
 gosub 12, L3499
 pushFromPSpVal 4
 pushFromFSp 0
 gosub 12, L2954
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromPSpVal 4
 pushFromFSp 0
 fetchValue 0
 pushImm 1
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushImmf 3600
 gosub 12, L3536
 pushFromFSp 0
 gosub 12, L3659
 pushImmf 60
 gosub 12, L3378
 pushFromFSp 0
 gosub 12, L3670
 pushImmf 20
 gosub 12, L3378
 pushFromFSp 0
 gosub 12, L3681
 halt 
 gosub 12, L3406
 gosub 12, L3414
 pushFromPSpVal 20
 gosub 12, L5024
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



