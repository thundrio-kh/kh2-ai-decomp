## *trap_jigsaw_get* (system)

`syscall 1, 364 ; trap_jigsaw_get (2 in, 0 out)`

Gives a jigsaw piece

#### Input parameters
| Name | Type | Description
|------|------|------------
| picture   | int   | puzzle that the piece is a part of
| piece   | int   | number piece in the puzzle


Example Usage From ard\tt28\jigs.bdscript
```plaintext
TR2:
 pushImm 0
 pushImm 4
 syscall 1, 364 ; trap_jigsaw_get (2 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\tt28\jigs.bdscript       |           



