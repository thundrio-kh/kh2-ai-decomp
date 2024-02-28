## trap_lockon_show* (visual)

`syscall 6, 17 ; trap_lockon_show (0 in, 0 out)`

Show the lockon reticle

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
```plaintext
L3641:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3420
 syscall 6, 17 ; trap_lockon_show (0 in, 0 out)
 ret
```
</details>

