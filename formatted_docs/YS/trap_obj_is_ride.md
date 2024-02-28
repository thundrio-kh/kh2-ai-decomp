## trap_obj_is_ride* (object)

`syscall 1, 254 ; trap_obj_is_ride (1 in, 1 out)`

Checks if the ride flag is checked on the object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_ride   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\F_WI360\f_wi.bdscript       | ((F) Building site’s platform (WI))          
| obj\F_WI360_PETE\f_wi.bdscript       | ((F) Building site’s platform (PETE) (WI))          

</details>

<details>
	<summary>Example Usage From obj\B_LK120\b_lk.bdscript</summary>
```plaintext
L5360:
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromFSp 0
 gosub 12, L5424
 dup 
 jz L5423
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 12, L3693
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 254 ; trap_obj_is_ride (1 in, 1 out)
 eqzv
```
</details>

