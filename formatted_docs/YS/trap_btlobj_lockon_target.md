## trap_btlobj_lockon_target (btlobj)

`syscall 2, 56 ; trap_btlobj_lockon_target (1 in, 1 out)`



### Input parameters
| Name | Type | Description
|------|------|------------
| btlobj   | YS::TARGET_108 *   | Object to lock on to


### Output Parameters
| Name | Type
|------|-----
| unk   | unknown   
### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L468:
 pushFromFSp 180
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L489
 pushFromFSp 180
 pushFromPWp W0
 pushImm 4
 add 
 syscall 2, 56 ; trap_btlobj_lockon_target (1 in, 1 out)
 gosub 52, L1675
 jmp L489
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          
| obj\P_EX200\mick.bdscript       | ((P) Micky (hood))          
| obj\P_EX220\mick.bdscript       | ((P) Mickey)          



