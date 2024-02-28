## trap_saveflag_set* (save)

`syscall 0, 57 ; trap_saveflag_set (1 in, 0 out)`

Sets a flag value to true

### Input parameters
| Name | Type | Description
|------|------|------------
| flag_num   | int   | A flag number


### Example Usage From ard\al09\al09.bdscript
```plaintext
L29:
 pushImm 64
 syscall 0, 57 ; trap_saveflag_set (1 in, 0 out)
 gosub 4, L58
 jmp L56
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\al09\al09.bdscript       |           
| ard\bb03\bb.bdscript       |           
| ard\eh18\full.bdscript       |           
| ard\hb10\moog.bdscript       |           
| ard\hb13\magi.bdscript       |           
| ard\mu00\chan.bdscript       |           
| ard\mu07\limi.bdscript       |           
| ard\tt06\camp.bdscript       |           
| ard\tt14\jimi.bdscript       |           
| ard\tt28\driv.bdscript       |           
| ard\tt32\game.bdscript       |           
| msn\TT02_MS201\save.bdscript       |           
| obj\F_AL030\f_al.bdscript       | ((F) ??? (AL))          



