## trap_prize_appear_tr* (prize)

`syscall 1, 279 ; trap_prize_appear_tr (2 in, 0 out)`

Makes a number of Hostile Program orbs appear at a position

#### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | kn::FVector *   | A position vector
| num   | int   | number of prizes




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          

</details>

<details>
	<summary>Example Usage From obj\B_TR000\b_tr.bdscript</summary>
```
L2202:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 200
 subf 
 memcpy 0
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSpVal 180
 eqz 
 jz L2284
 pushFromFSp 0
 gosub 12, L2304
 pushFromFSp 0
 fetchValue 24
 pushImm 2
 sub 
 neqz 
 jz L2275
 pushFromPSp 16
 pushImm 3
 syscall 1, 279 ; trap_prize_appear_tr (2 in, 0 out)
 jmp L2282
```
</details>

