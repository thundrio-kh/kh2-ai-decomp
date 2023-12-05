## trap_lockon_hide* (visual)

syscall 6, 18 ; trap_lockon_hide (0 in, 0 out)

Hide the lockon reticle

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
L3650:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3241
 syscall 6, 18 ; trap_lockon_hide (0 in, 0 out)
 ret
</details>

