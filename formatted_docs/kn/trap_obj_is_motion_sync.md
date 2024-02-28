## trap_obj_is_motion_sync* (object)

`syscall 10, 40 ; trap_obj_is_motion_sync (2 in, 1 out)`

Checks if the motion of an object is synced with the child object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| child   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   
Example Usage From obj\P_CA000\p_ca.bdscript
```plaintext
L4032:
 pushFromPSp 8
 pushFromPSp 28
 syscall 10, 40 ; trap_obj_is_motion_sync (2 in, 1 out)
 jz L4048
 pushFromPSp 8
 pushFromPSp 28
 syscall 1, 236 ; trap_obj_motion_unsync (2 in, 0 out)
 jmp L4048
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          



