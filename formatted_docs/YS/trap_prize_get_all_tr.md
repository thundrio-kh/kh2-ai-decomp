## trap_prize_get_all_tr* (prize)

`syscall 1, 327 ; trap_prize_get_all_tr (1 in, 0 out)`

Make all the hostile program orbs that are out disappear?

#### Input parameters
| Name | Type | Description
|------|------|------------
| btlobj   | YS::BTLOBJ *   | A battle object


Example Usage From obj\B_TR000\b_tr.bdscript
```plaintext
L10470:
 pushFromFSp 0
 syscall 1, 327 ; trap_prize_get_all_tr (1 in, 0 out)
 pushFromFSp 0
 pushImm 240
 pushImmf 60
 pushImm 3
 pushImm 0
 gosub 4, L9731
 pushFromFSp 0
 pushImm 240
 pushImm 241
 pushImmf 4
 gosub 4, L8109
 jz L10520
 pushFromFSp 0
 pushImm 241
 pushImm 3
 pushImm 0
 gosub 4, L8154
 jmp L10520
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          



