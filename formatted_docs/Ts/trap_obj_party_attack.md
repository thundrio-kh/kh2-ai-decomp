## trap_obj_party_attack* (attack)

`syscall 6, 67 ; trap_obj_party_attack (2 in, 0 out)`

Activate a party attack

#### Input parameters
| Name | Type | Description
|------|------|------------
| target   | YS::TARGET_108 *   | A target object
| id   | int   | id of the attack to activate


Example Usage From obj\P_EX100_KH1F\limi.bdscript
```plaintext
L1683:
 popToSp 0
 pushFromFSp 0
 pushImm 241
 pushImmf 0
 gosub 4, L1994
 pushFromFSp 0
 gosub 4, L2015
 jz L1754
 pushFromFSp 0
 pushImm 52
 syscall 6, 67 ; trap_obj_party_attack (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImmf 0
 gosub 4, L1994
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 1
 add 
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 4
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 jmp L1756
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          



