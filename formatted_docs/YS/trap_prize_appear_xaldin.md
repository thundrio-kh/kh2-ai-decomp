## trap_prize_appear_xaldin* (prize)

`syscall 1, 363 ; trap_prize_appear_xaldin (2 in, 0 out)`

Makes a number of prizes for mushroom 3 appear at a position

### Input parameters
| Name | Type | Description
|------|------|------------
| pos   | kn::FVector *   | A position vector
| num   | int   | number of prizes


### Example Usage From obj\M_EX350_03\m_ex.bdscript
```plaintext
L440:
 jz L474
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 1
 syscall 1, 363 ; trap_prize_appear_xaldin (2 in, 0 out)
 pushFromFSpVal 436
 pushImm 1
 sub 
 popToSpVal 436
 pushFromFSp 12
 pushImm 1
 sub 
 popToSp 12
 jmp L418
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX350_03\m_ex.bdscript       | ((M) Mushroom 3 (EX))          



