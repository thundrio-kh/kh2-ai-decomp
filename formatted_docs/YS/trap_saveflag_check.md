## trap_saveflag_check* (save)

`syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)`

Returns the value of a save flag

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag_num   | int   | A flag number


#### Return Parameters
| Name | Type
|------|-----
| value   | bool   
Example Usage From ard\al09\al09.bdscript
```plaintext
L58:
 pushImm 64
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 dup 
 jz L72
 pushImm 65
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqzv
```





	Appears in:
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



