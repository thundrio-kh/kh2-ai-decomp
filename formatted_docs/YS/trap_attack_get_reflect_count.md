## trap_attack_get_reflect_count* (attack)

`syscall 2, 66 ; trap_attack_get_reflect_count (1 in, 1 out)`

Returns the count for the current reflect attack

#### Input parameters
| Name | Type | Description
|------|------|------------
| attack   | YS::ATTACK_MAGIC *   | a reflect attack


#### Return Parameters
| Name | Type
|------|-----
| count   | int   
Example Usage From magic\reflect1\refl.bdscript
```plaintext
L125:
 halt 
 pushFromFSpVal 28
 syscall 2, 66 ; trap_attack_get_reflect_count (1 in, 1 out)
 pushFromFSp 12
 sub 
 ipos 
 jz L175
 pushFromFSp 8
 pushImm 0
 sub 
 eqz 
 jz L167
 pushFromFSpVal 16
 pushFromFSp 4
 pushImm 1
 add 
 pushFromPSpVal 0
 pushImm 1
 pushImm 0
 syscall 1, 139 ; trap_pax_start_bind (5 in, 1 out)
 popToSp 8
 jmp L167
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| magic\reflect1\refl.bdscript       |           
| magic\REFLECT_1\refl.bdscript       |           
| magic\REFLECT_1lk\refl.bdscript       |           
| magic\REFLECT_2\refl.bdscript       |           
| magic\REFLECT_2lk\refl.bdscript       |           
| magic\REFLECT_3\refl.bdscript       |           
| magic\REFLECT_3lk\refl.bdscript       |           



