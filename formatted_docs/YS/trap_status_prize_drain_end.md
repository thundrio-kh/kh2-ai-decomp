## *trap_status_prize_drain_end* (prize)

`syscall 1, 188 ; trap_status_prize_drain_end (0 in, 0 out)`

End the prize drain effect

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From magic\MAGNET_1\magn.bdscript
```plaintext
L44:
 halt 
 pushFromFSp 0
 gosub 24, L600
 jz L55
 syscall 1, 188 ; trap_status_prize_drain_end (0 in, 0 out)
 jmp L55
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| magic\MAGNET_1\magn.bdscript       |           
| magic\MAGNET_1lk\magn.bdscript       |           
| magic\MAGNET_2\magn.bdscript       |           
| magic\MAGNET_2lk\magn.bdscript       |           
| magic\MAGNET_3\magn.bdscript       |           
| magic\MAGNET_3lk\magn.bdscript       |           
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          



