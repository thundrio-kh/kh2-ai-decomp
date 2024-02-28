## trap_progress_is_secret_movie* (save)

`syscall 0, 101 ; trap_progress_is_secret_movie (0 in, 1 out)`

Checks if the secret movie is unlocked

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   
Example Usage From ard\es00\es_s.bdscript
```plaintext
TR3:
 gosub 4, L39
 syscall 0, 101 ; trap_progress_is_secret_movie (0 in, 1 out)
 jz L30
 pushImm 7
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 jmp L38
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\es00\es_s.bdscript       |           



