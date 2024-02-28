## trap_obj_scatter_prize_tr* (prize)

`syscall 1, 278 ; trap_obj_scatter_prize_tr (2 in, 0 out)`

Scatter a number of tron orbs from an enemy

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| num   | int   | Number to scatter


Example Usage From obj\F_TR020\f_tr.bdscript
```plaintext
L636:
 gosub 4, L675
 pushFromFSpVal 120
 jz L656
 pushImm 0
 popToSpVal 120
 pushFromFSp 0
 pushImm 4
 syscall 1, 278 ; trap_obj_scatter_prize_tr (2 in, 0 out)
 jmp L656
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\M_EX610\m_ex.bdscript       | ((M) Strafer)          
| obj\M_EX610_RAW\m_ex.bdscript       | ((M) Strafer (RAW))          



