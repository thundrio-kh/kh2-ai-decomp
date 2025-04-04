## trap_larxene_dead* (special)

`syscall 6, 69 ; trap_larxene_dead (1 in, 0 out)`

Mark all copies of larxene as dead

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Example Usage From obj\B_EX400\b_ex.bdscript
```plaintext
L28537:
 pushFromFSp 0
 syscall 6, 69 ; trap_larxene_dead (1 in, 0 out)
 pushFromFSpVal 160
 pushImm 16
 add 
 pushImm 1
 memcpy 0
 pushImm 1
 popToSpVal 132
 pushFromFSp 0
 pushImm 0
 pushImm 0
 gosub 4, L28567
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          



