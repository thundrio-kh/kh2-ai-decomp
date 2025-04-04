## trap_saveram_increment_friend_recov* (save)

`syscall 0, 100 ; trap_saveram_increment_friend_recov (0 in, 0 out)`

Increments the "Healed Party Members" value on the battle report at the end of the game

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From magic\CURE_1\cure.bdscript
```plaintext
L221:
 drop 
 pushFromFSp 36
 jz L230
 syscall 0, 100 ; trap_saveram_increment_friend_recov (0 in, 0 out)
 jmp L230
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           



