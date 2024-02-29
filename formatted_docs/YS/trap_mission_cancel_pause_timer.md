## trap_mission_cancel_pause_timer* (mission_timer)

`syscall 4, 24 ; trap_mission_cancel_pause_timer (0 in, 0 out)`

Pauses/stops the onscreen timer

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From obj\M_EX950\m_ex.bdscript
```plaintext
L1183:
 syscall 4, 24 ; trap_mission_cancel_pause_timer (0 in, 0 out)
 pushImm 16
 syscall 6, 47 ; trap_obj_stop_end_all (1 in, 0 out)
 pushFromFSp 4
 pushImm 0
 sub 
 neqz 
 jz L1208
 pushFromFSp 4
 pushImmf 30
 syscall 1, 184 ; trap_light_fadeout (2 in, 0 out)
 jmp L1208
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          



