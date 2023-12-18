## trap_bg_set_belt_conveyor (special)

`syscall 1, 158 ; trap_bg_set_belt_conveyor (1 in, 0 out)`

Unknown. Used by conveyor belts in Oogie Boogie boss room

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | unknown   | pushFromPSp: 16




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_HB110\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_NM140\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM150\f_nm.bdscript       | ((F) ??? (NM))          

</details>

<details>
	<summary>Example Usage From obj\F_HB110\f_hb.bdscript</summary>
```
L2054:
 popToSp 0
 pushFromPSp 16
 pushFromFSp 0
 negf 
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 12, L2092
 pushFromPSp 16
 pushImmf 1.570796
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 158 ; trap_bg_set_belt_conveyor (1 in, 0 out)
 ret
```
</details>

