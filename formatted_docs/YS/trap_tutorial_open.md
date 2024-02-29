## trap_tutorial_open* (status)

`syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)`

Open a tutorial window displaying a message

### Input parameters
| Name | Type | Description
|------|------|------------
| message_id   | int   | Message ID


### Example Usage From ard\bb03\bb.bdscript
```plaintext
TR3:
 pushImm 39
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqz 
 jz L56
 syscall 1, 337 ; trap_command_set_side_b (0 in, 0 out)
 pushImm 38
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqz 
 jz L39
 pushImm 17627
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 jmp L44
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| ard\bb03\bb.bdscript       |           
| ard\eh18\full.bdscript       |           
| ard\hb10\moog.bdscript       |           
| ard\hb13\magi.bdscript       |           
| ard\mu00\chan.bdscript       |           
| ard\mu07\limi.bdscript       |           
| ard\tt06\camp.bdscript       |           
| ard\tt14\jimi.bdscript       |           
| ard\tt28\driv.bdscript       |           
| ard\tt28\jigs.bdscript       |           
| ard\tt32\game.bdscript       |           
| msn\HB13_MS902\hb13.bdscript       |           
| msn\LM02_MS101\lm02.bdscript       |           
| msn\MU01_MS102\mu01.bdscript       |           
| msn\TT02_MS201\save.bdscript       |           
| msn\TT04_MS107\tt04.bdscript       |           
| msn\TT07_MS101\tt07.bdscript       |           
| msn\TT07_MS103\tt07.bdscript       |           
| msn\TT07_MS105\tt07.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| msn\TT32_MS303\tt32.bdscript       |           



