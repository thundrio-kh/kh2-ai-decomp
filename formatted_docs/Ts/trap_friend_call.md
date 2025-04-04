## trap_friend_call* (friend)

`syscall 7, 26 ; trap_friend_call (2 in, 1 out)`

make a call to a friend script

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| no   | int   | A line number?


### Output Parameters
| Name | Type
|------|-----
| result   | int   
### Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
L69:
 pushFromFSp 0
 fetchValue 0
 syscall 2, 60 ; trap_limit_time (1 in, 1 out)
 pushImmf 0
 subf 
 supzf 
 jz L92
 pushFromPSpVal 80
 pushImm 525
 syscall 7, 26 ; trap_friend_call (2 in, 1 out)
 drop 
 jmp L92
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



