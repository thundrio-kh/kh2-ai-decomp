## trap_enemy_each* (enemy)

`syscall 2, 4 ; trap_enemy_each (1 in, 1 out)`

seems to return an array of all instances of an enemy

#### Input parameters
| Name | Type | Description
|------|------|------------
| enemy   | YS::ENEMY_0 *   | A type of enemy


#### Return Parameters
| Name | Type
|------|-----
| enemy_array   | an array of all instances of this enemy   
Example Usage From limit\auron\limi.bdscript
```plaintext
L1759:
 popToSp 0
 pushFromFSpVal 4
 syscall 2, 4 ; trap_enemy_each (1 in, 1 out)
 popToSpVal 4
 pushFromFSpVal 4
 pushImm 0
 sub 
 neqz 
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\auron\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| msn\CA07_MS105\ca07.bdscript       |           
| msn\TR07_MS203\tr07.bdscript       |           
| obj\F_NM000\f_nm.bdscript       | ((F) Guillotine blade (NM))          
| obj\F_NM010\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM030\f_nm.bdscript       | ((F) Swinging gates (NM))          
| obj\F_NM040_00\f_nm.bdscript       | ((F) Statue (horse) (NM))          
| obj\F_NM040_10\f_nm.bdscript       | ((F) Statue (human) (NM))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          
| obj\P_TR010\p_tr.bdscript       | ((P) ??? (TR))          



