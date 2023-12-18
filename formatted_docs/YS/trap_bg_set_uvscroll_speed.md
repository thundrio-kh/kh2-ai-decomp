## trap_bg_set_uvscroll_speed (special)

`syscall 1, 159 ; trap_bg_set_uvscroll_speed (1 in, 0 out)`

UNknown. Used only by Oogie Boogie conveyor belts

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | unknown   | pushFromFSp: 0




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_NM140\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM150\f_nm.bdscript       | ((F) ??? (NM))          

</details>

<details>
	<summary>Example Usage From obj\F_NM140\f_nm.bdscript</summary>
```
L2162:
 popToSp 0
 pushFromFSp 0
 syscall 1, 159 ; trap_bg_set_uvscroll_speed (1 in, 0 out)
 pushFromPSp 16
 pushImmf 4.35
 pushFromFSp 0
 mulf 
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 12, L2192
 pushFromPSp 16
 syscall 1, 158 ; trap_bg_set_belt_conveyor (1 in, 0 out)
 ret
```
</details>

