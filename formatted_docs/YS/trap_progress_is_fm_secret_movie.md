## trap_progress_is_fm_secret_movie* (save)

`syscall 0, 103 ; trap_progress_is_fm_secret_movie (0 in, 1 out)`

Checks if the Final Mix Secret Movie is unlocked

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| is_unlocked   | bool   
### Example Usage From ard\es00\es_u.bdscript
```plaintext
TR3:
 gosub 4, L39
 syscall 0, 103 ; trap_progress_is_fm_secret_movie (0 in, 1 out)
 jz L30
 pushImm 7
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 jmp L38
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| ard\es00\es_u.bdscript       |           



