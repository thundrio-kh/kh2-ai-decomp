## trap_menuflag_check* (menu)

`syscall 0, 89 ; trap_menuflag_check (1 in, 1 out)`

checks if a menuflag is activated

#### Input parameters
| Name | Type | Description
|------|------|------------
| flag   | int   | a number representing a specific menuflag


#### Return Parameters
| Name | Type
|------|-----
| is_checked   | bool   
Example Usage From ard\he03\he_t.bdscript
```plaintext
L100:
 popToSp 0
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 pushFromFSp 16
 syscall 0, 89 ; trap_menuflag_check (1 in, 1 out)
 jz L122
 pushFromFSp 8
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 jmp L122
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\he03\he_t.bdscript       |           
| msn\TT04_MS00\tt04.bdscript       |           
| msn\TT04_MS01\tt04.bdscript       |           
| msn\TT04_MS02\tt04.bdscript       |           



