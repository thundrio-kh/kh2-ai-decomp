## trap_limit_effect_start* (limit)

`syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)`

Starts a limit effect

#### Input parameters
| Name | Type | Description
|------|------|------------
| limit_obj   | YS::LIMIT_1 *   | A limit object
| id   | int   | id of the effect to start
| flag   | int   | set the flag to 0 or 1


#### Return Parameters
| Name | Type
|------|-----
| effect   | ryj::EFFECT_145 *   
Example Usage From limit\aladdin\limi.bdscript
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





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
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
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          



