## *trap_status_prize_drain_start* (prize)

`syscall 1, 187 ; trap_status_prize_drain_start (0 in, 0 out)`

Start the prize drain effect

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From magic\MAGNET_1\magn.bdscript
```plaintext
L23:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 gosub 24, L498
 popToSp 64
 pushFromFSp 0
 gosub 24, L600
 jz L44
 syscall 1, 187 ; trap_status_prize_drain_start (0 in, 0 out)
 jmp L44
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| magic\MAGNET_1\magn.bdscript       |           
| magic\MAGNET_1lk\magn.bdscript       |           
| magic\MAGNET_2\magn.bdscript       |           
| magic\MAGNET_2lk\magn.bdscript       |           
| magic\MAGNET_3\magn.bdscript       |           
| magic\MAGNET_3lk\magn.bdscript       |           
| msn\HB16_MS404D\hb16.bdscript       |           
| msn\TR04_MS202\tr04.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          



