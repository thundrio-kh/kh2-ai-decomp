## trap_get_path_point_pos* (path)

`syscall 5, 14 ; trap_get_path_point_pos (2 in, 1 out)`

Get the position of a point on a path.

#### Input parameters
| Name | Type | Description
|------|------|------------
| path   | Ti::Path_3   | Path object
| point_index   | label   | ID of a call label


#### Return Parameters
| Name | Type
|------|-----
| pos   | kn::FVector *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\N_BB060_BTL\n_bb.bdscript       | ((N) Lumière (BTL) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          

</details>

<details>
	<summary>Example Usage From obj\B_LK100\b_lk.bdscript</summary>
```plaintext
L5755:
 popToSp 0
 pushImmf 300
 popToSp 44
 pushImmf 0
 popToSp 40
 pushImmf 200
 popToSp 36
 pushImmf 10000
 popToSp 32
 pushFromFSpVal 296
 jz L5803
 pushFromFSp 0
 gosub 16, L5850
 popToSp 4
 pushFromFSp 0
 pushFromFSp 4
 syscall 5, 14 ; trap_get_path_point_pos (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 jmp L5835
```
</details>

