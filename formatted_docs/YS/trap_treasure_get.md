## *trap_treasure_get* (save)

`syscall 1, 362 ; trap_treasure_get (1 in, 0 out)`

Get a treasure

### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | Treasure location ID


### Example Usage From obj\M_EX350_13\m_ex.bdscript
```plaintext
L7928:
 popToSp 0
 pushImm 588
 syscall 1, 362 ; trap_treasure_get (1 in, 0 out)
 pushImm 589
 syscall 1, 362 ; trap_treasure_get (1 in, 0 out)
 pushImm 7
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L9397 ; ___ai 'light_return_wait' (L9397)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 gosub 4, L2575
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          



