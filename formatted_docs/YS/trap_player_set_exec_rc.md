## trap_player_set_exec_rc* (player)

`syscall 1, 263 ; trap_player_set_exec_rc (2 in, 0 out)`

Sets the player to be executing a reaction command

### Input parameters
| Name | Type | Description
|------|------|------------
| player   | YS::PLAYER_44 *   | Player object
| command   | int   | Reaction command ID


### Example Usage From limit\aladdin\limi.bdscript
```plaintext
L342:
 popToSp 4
 popToSp 0
 pushFromPSp 8
 pushFromPSpVal 4
 fetchValue 4
 gosub 8, L361
 pushFromPSp 8
 pushFromFSp 4
 syscall 1, 263 ; trap_player_set_exec_rc (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\donald\limi.bdscript       |           
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| limit\goofy\limi.bdscript       |           
| limit\goofy2\limi.bdscript       |           
| limit\goofy2_wi\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\trinity_zz\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



