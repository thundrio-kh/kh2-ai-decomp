## trap_picture_set_pos* (visual)

`syscall 1, 315 ; trap_picture_set_pos (3 in, 0 out)`

Set the position of a picture for a layout object

#### Input parameters
| Name | Type | Description
|------|------|------------
| layout   | dk::Layout *   | A layout object
| x   | float   | X coordinate
| y   | float   | Y coordinate


Example Usage From obj\B_EX140\b_ex.bdscript
```plaintext
L21874:
 popToSp 0
 pushFromFSpVal 212
 cfti 
 pushImmf 3
 divf 
 popToSp 4
 pushImmf 0
 pushImmf 2
 pushFromFSp 4
 gosub 8, L21962
 popToSp 12
 pushImmf 32
 pushImmf 40
 pushFromFSp 4
 gosub 8, L21962
 popToSp 8
 pushFromPSpVal 92
 pushFromFSp 12
 pushFromFSp 8
 gosub 8, L21053
 pushImmf 4
 pushImmf 12
 pushFromFSp 4
 gosub 8, L21962
 popToSp 12
 pushImmf 182
 pushImmf 104
 pushFromFSp 4
 gosub 8, L21962
 popToSp 8
 pushFromPSpVal 104
 pushFromFSp 12
 pushFromFSp 8
 gosub 8, L21053
 pushFromFSpVal 88
 pushFromPSpVal 92
 gosub 8, L21980
 pushFromPSpVal 104
 gosub 8, L21980
 syscall 1, 315 ; trap_picture_set_pos (3 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          



