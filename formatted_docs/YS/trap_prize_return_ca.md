## trap_prize_return_ca* (prize)

`syscall 1, 338 ; trap_prize_return_ca (3 in, 1 out)`

Moves a number of medals from the player to the target battle object

### Input parameters
| Name | Type | Description
|------|------|------------
| player   | YS::PLAYER_44 *   | Player object
| btlobj   | YS::BTLOBJ *   | A battle object
| num   | int   | number of prizes


### Output Parameters
| Name | Type
|------|-----
| all_returned   | bool   
### Example Usage From obj\F_CA690_BTL\f_ca.bdscript
```plaintext
L278:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushFromPSpVal 0
 pushImm 10
 syscall 1, 338 ; trap_prize_return_ca (3 in, 1 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          



