## trap_obj_can_decide_command* (command)

`syscall 1, 221 ; trap_obj_can_decide_command (3 in, 1 out)`

Returns  if the object can decide command.

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_96   | An object
| command_id   | int   | ID of a command
| element   | YS::COMMAND_ELEM   | Command element value


#### Return Parameters
| Name | Type
|------|-----
| can_decide   | bool   
Example Usage From limit\aladdin\limi.bdscript
```plaintext
L5456:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 8
 pushImm 0
 sub 
 neqz 
 dup 
 jz L5490
 pushFromFSp 4
 eqz 
 dup 
 jnz L5489
 pushFromPSpVal 4
 pushFromFSp 8
 pushFromPSpVal 20
 syscall 1, 221 ; trap_obj_can_decide_command (3 in, 1 out)
 neqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX780\m_ex.bdscript       | ((M) Aerial Knocker)          
| obj\M_EX780_HB\m_ex.bdscript       | ((M) Aeriel Champ)          
| obj\M_EX850\m_ex.bdscript       | ((M) Berserker weapon (Useable))          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



