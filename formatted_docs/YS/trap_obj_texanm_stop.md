## trap_obj_texanm_stop* (animation)

`syscall 1, 86 ; trap_obj_texanm_stop (2 in, 0 out)`

Stops a specific animation

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| id   | int   | ID of the animation


### Example Usage From obj\B_EX110\b_ex.bdscript
```plaintext
L11734:
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L5869
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L11854
 pushImmf 72
 gosub 4, L328
 pushFromFSp 0
 pushImm 28
 pushImm 0
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 pushFromFSp 0
 pushImm 33
 syscall 1, 85 ; trap_obj_texanm_start (2 in, 0 out)
 pushImmf 96
 gosub 4, L328
 pushFromFSp 0
 pushImm 33
 syscall 1, 86 ; trap_obj_texanm_stop (2 in, 0 out)
 pushImmf 74
 gosub 4, L328
 pushFromFSp 0
 fetchValue 4
 pushImm 207
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushImmf 60
 gosub 4, L328
 pushImmf 40
 gosub 4, L328
 pushFromFSp 0
 gosub 4, L9049
 pushFromFSp 0
 fetchValue 4
 gosub 4, L6904
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L11939
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          



