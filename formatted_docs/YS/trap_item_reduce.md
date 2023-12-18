## trap_item_reduce* (player)

syscall 0, 97 ; trap_item_reduce (2 in, 0 out)

Removes/reduces an item from inventory.

#### Input parameters
| Name | Type | Description
|------|------|------------
| part   | int   | Unknown, game only uses value of 100




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\ca01\ca_d.bdscript       |           
| ard\he13\he_d.bdscript       |           
| ard\he18\he_d.bdscript       |           
| ard\nm07\nm_d.bdscript       |           
| ard\nm08\nm_d.bdscript       |           
| ard\tt02\tt_d.bdscript       |           
| ard\tt02\tt_n.bdscript       |           
| ard\tt08\tt_d_0.bdscript       |           
| ard\tt08\tt_d_1.bdscript       |           
| ard\tt17\tt_d.bdscript       |           

</details>

<details>
	<summary>Example Usage From ard\ca01\ca_d.bdscript</summary>
TR2:
 pushImm 372
 pushImm 100
 syscall 0, 97 ; trap_item_reduce (2 in, 0 out)
 ret
</details>

