## trap_attack_dup* (attack)

`syscall 2, 31 ; trap_attack_dup (2 in, 1 out)`

Duplicates a magic attack

### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | attack magic object to be duplicated
| param_id   | unknown   | pushImm: 1165,1181,249,502


### Output Parameters
| Name | Type
|------|-----
| attack_dup   | struct *   
### Example Usage From magic\FIRE_1\fire.bdscript
```plaintext
L227:
 halt 
 pushFromFSp 0
 pushImm 502
 gosub 12, L517
 popToSpVal 32
 pushFromFSpVal 32
 pushFromFSpVal 24
 fetchValue 0
 pushFromFSpVal 24
 fetchValue 4
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L505
 jz L305
 pushFromFSpVal 32
 pushImm 502
 syscall 2, 31 ; trap_attack_dup (2 in, 1 out)
 popToSp 24
 pushFromFSp 24
 pushFromFSpVal 24
 fetchValue 0
 pushImmf 30
 subf 
 pushFromFSpVal 24
 fetchValue 4
 pushImmf 30
 subf 
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L464
 jz L303
 pushFromFSpVal 32
 pushImmf 450
 pushFromFSpVal 24
 fetchValue 4
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 jmp L303
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| magic\FIRE_1\fire.bdscript       |           
| magic\FIRE_1lk\fire.bdscript       |           
| magic\FIRE_2\fire.bdscript       |           
| magic\FIRE_2lk\fire.bdscript       |           
| magic\FIRE_3\fire.bdscript       |           
| magic\FIRE_3lk\fire.bdscript       |           
| magic\thunder1\thun.bdscript       |           
| magic\THUNDER_1\thun.bdscript       |           
| magic\THUNDER_1lk\thun.bdscript       |           
| magic\THUNDER_2\thun.bdscript       |           
| magic\THUNDER_2lk\thun.bdscript       |           
| magic\THUNDER_3\thun.bdscript       |           
| magic\THUNDER_3lk\thun.bdscript       |           
| obj\P_EX020\p_ex.bdscript       | ((P) Donald)          
| obj\P_EX020_NM\p_ex.bdscript       | ((P) Donald (NM))          
| obj\P_EX020_TR\p_ex.bdscript       | ((P) Donald (TR))          
| obj\P_EX020_XM\p_ex.bdscript       | ((P) Donald (XM))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          



