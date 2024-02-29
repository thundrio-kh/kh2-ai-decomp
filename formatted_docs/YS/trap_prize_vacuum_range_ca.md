## trap_prize_vacuum_range_ca* (prize)

`syscall 1, 340 ; trap_prize_vacuum_range_ca (2 in, 0 out)`

Vacuums all medals within a designated range of the object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::BTLOBJ *   | A battle object
| range   | float   | A range value


### Example Usage From obj\B_CA050\b_ca.bdscript
```plaintext
L6370:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L6407
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 jz L6404
 pushFromFSp 0
 pushFromFSp 4
 syscall 1, 340 ; trap_prize_vacuum_range_ca (2 in, 0 out)
 pushFromFSp 4
 pushImmf 50
 addf 
 popToSp 4
 jmp L6404
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          



