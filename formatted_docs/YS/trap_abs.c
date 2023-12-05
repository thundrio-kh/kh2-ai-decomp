## trap_abs* (math)

syscall 0, 22 ; trap_abs (1 in, 1 out)

Takes a integer and returns the absolute value of that integer

#### Input parameters
| Name | Type | Description
|------|------|------------
| value   | int   | A positive or negative signed integer


#### Return Parameters
| Name | Type
|------|-----
| abs_value   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          

</details>

<details>
	<summary>Example Usage From obj\F_TR150\f_tr.bdscript</summary>
L2016:
 jz L2056
 pushFromFSpVal 136
 gosub 8, L1576
 fetchValue 4
 sub 
 pushImm 24
 add 
 pushImm 12
 add 
 pushImm 24
 mod 
 popToSp 8
 pushFromFSp 8
 pushImm 12
 sub 
 syscall 0, 22 ; trap_abs (1 in, 1 out)
 pushImm 3
 sub 
 msb 
 popToSp 4
 jmp L2056
</details>

