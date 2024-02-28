## trap_sysobj_is_sora* (player)

`syscall 1, 319 ; trap_sysobj_is_sora (1 in, 1 out)`

Returns true if the object is Sora

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_sora   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          

</details>

<details>
	<summary>Example Usage From obj\B_EX130\b_ex.bdscript</summary>
```plaintext
L2835:
 gosub 4, L2828
 pushImm 0
 sub 
 ipos 
 jz L2885
 gosub 4, L319
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 1, 319 ; trap_sysobj_is_sora (1 in, 1 out)
 eqz 
 dup 
 jnz L2862
 gosub 12, L2886
 neqzv
```
</details>

