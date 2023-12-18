## trap_obj_reset_command_image* (command)

syscall 1, 360 ; trap_obj_reset_command_image (1 in, 0 out)

Resets the image on the command menu

#### Input parameters
| Name | Type | Description
|------|------|------------
| stdobj   | YS::STDOBJ_112 *   | An stdobj




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          

</details>

<details>
	<summary>Example Usage From obj\B_EX370\b_ex.bdscript</summary>
L2350:
 pushFromFSp 0
 syscall 1, 360 ; trap_obj_reset_command_image (1 in, 0 out)
 ret
</details>

