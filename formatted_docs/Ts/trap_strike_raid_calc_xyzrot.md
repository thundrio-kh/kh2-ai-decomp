## trap_strike_raid_calc_xyzrot* (math)

`syscall 6, 68 ; trap_strike_raid_calc_xyzrot (2 in, 1 out)`

Calculate an xyzrot value for strike raid

### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | unknown   | pushFromPSp: 48,80
| unk2   | unknown   | pushFromPSp: 16,32,48,64


### Output Parameters
| Name | Type
|------|-----
| unk   | unknown   
### Example Usage From obj\B_EX390\b_ex.bdscript
```plaintext
L38553:
 pushFromFSp 0
 pushFromPSpVal 32
 gosub32 32, L36495
 pushFromPSp 48
 pushFromPSp 16
 syscall 6, 68 ; trap_strike_raid_calc_xyzrot (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 32
 pushFromFSp 0
 pushFromPSp 32
 syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)
 halt 
 pushFromFSp 84
 pushImmf 0.001745
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 pushImmf 0.087266
 gosub32 32, L6899
 popToSp 84
 pushFromPSp 92
 gosub32 32, L7164
 drop 
 jmp L38420
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\P_EX100_KH1F\limi.bdscript       | ((P) Sora (Limit))          
| obj\P_EX100_NM_KH1F\limi.bdscript       | ((P) Sora (NM) (Limit))          
| obj\P_EX100_TR_KH1F\limi.bdscript       | ((P) Sora (TR) (Limit))          
| obj\P_EX100_WI_KH1F\limi.bdscript       | ((P) Sora (WI) (Limit))          
| obj\P_EX100_XM_KH1F\limi.bdscript       | ((P) Sora (XM) (Limit))          



