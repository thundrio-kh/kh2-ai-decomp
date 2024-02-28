## *trap_stputf* (debug)

`syscall 0, 25 ; trap_stputf (2 in, 0 out)`

value"

#### Input parameters
| Name | Type | Description
|------|------|------------
| value   | float   | A float
| description   | string   | A string, should be pushed to the stack using pushFromPAi


Example Usage From gumimenu\event\gumi.bdscript
```plaintext
L879:
 popToSp 0
 pushFromFSp 0
 fetchValue 0
 syscall 9, 33 ; ?
 pushFromPSp 16
 pushImmf 1
 gosub 12, L504
 pushFromFSp 0
 fetchValue 0
 pushImm 2
 pushFromPSp 16
 syscall 9, 31 ; ?
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushFromPSp 16
 syscall 9, 23 ; ?
 pushFromPSp 16
 pushImmf 1
 gosub 12, L504
 pushFromFSp 0
 fetchValue 0
 pushImm 4
 pushFromPSp 16
 syscall 9, 31 ; ?
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushFromPSp 16
 syscall 9, 22 ; ?
 pushFromPSp 16
 fetchValue 4
 pushFromPAi L2384 ; ___ai 'pos y' (L2384)
 syscall 0, 25 ; trap_stputf (2 in, 0 out)
 pushFromPWp W0
 fetchValue 0
 syscall 9, 24 ; ?
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| gumimenu\event\gumi.bdscript       |           
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\N_HB590_BTL\n_hb.bdscript       | ((N) Sephiroth (BTL) (HB))          



