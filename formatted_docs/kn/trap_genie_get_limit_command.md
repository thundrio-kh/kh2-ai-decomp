## trap_genie_get_limit_command* (special)

`syscall 10, 10 ; trap_genie_get_limit_command (1 in, 1 out)`

Have genie get the limit command

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


### Output Parameters
| Name | Type
|------|-----
| command_id   | int   
### Example Usage From obj\P_AL010\p_al.bdscript
```plaintext
L4091:
 pushFromFSp 0
 pushFromFSp 0
 syscall 10, 10 ; trap_genie_get_limit_command (1 in, 1 out)
 gosub 4, L4216
 drop 
 halt 
 jmp L4070
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          



