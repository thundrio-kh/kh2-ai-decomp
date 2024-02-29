## trap_player_get_rc* (player)

`syscall 1, 297 ; trap_player_get_rc (1 in, 1 out)`

Get the value of the players current rc

### Input parameters
| Name | Type | Description
|------|------|------------
| player   | YS::PLAYER_44 *   | Player object


### Output Parameters
| Name | Type
|------|-----
| rc   | int   
### Example Usage From obj\F_TR010\f_tr.bdscript
```plaintext
L25:
 gosub 4, L99
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 dup 
 jz L54
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 297 ; trap_player_get_rc (1 in, 1 out)
 pushImm 246
 sub 
 eqz 
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_TR010\f_tr.bdscript       | ((F) A Terminal from Space Paranoids (TR))          



