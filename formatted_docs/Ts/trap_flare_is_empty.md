## trap_flare_is_empty* (special)

`syscall 7, 11 ; trap_flare_is_empty (0 in, 1 out)`

Check if the Flare Force gauge is empty

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| is_empty   | bool   
### Example Usage From limit\donald2\limi.bdscript
```plaintext
L7062:
 syscall 7, 11 ; trap_flare_is_empty (0 in, 1 out)
 eqz 
 jz L7070
 halt 
 jmp L7062
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           



