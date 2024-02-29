## *trap_mission_is_activate2d* (mission)

`syscall 4, 21 ; trap_mission_is_activate2d (0 in, 1 out)`

checks if the mission custom hud is activated

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| is_activated   | bool   
### Example Usage From obj\B_EX120\b_ex.bdscript
```plaintext
TR10:
 popToSp 0
 popToSp 4
 syscall 4, 21 ; trap_mission_is_activate2d (0 in, 1 out)
 jz L9584
 pushFromFSp 4
 dup 
 pushImm 75
 sub 
 jz L9548
 jmp L9564
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          



