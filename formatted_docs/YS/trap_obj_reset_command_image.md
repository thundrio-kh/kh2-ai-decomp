## trap_obj_reset_command_image* (command)

`syscall 1, 360 ; trap_obj_reset_command_image (1 in, 0 out)`

Resets the image on the command menu

#### Input parameters
| Name | Type | Description
|------|------|------------
| stdobj   | YS::STDOBJ_112 *   | An stdobj


Example Usage From obj\B_EX370\b_ex.bdscript
```plaintext
L2350:
 pushFromFSp 0
 syscall 1, 360 ; trap_obj_reset_command_image (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          



