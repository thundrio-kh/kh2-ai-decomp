## trap_flare_init* (special)

`syscall 7, 3 ; trap_flare_init (0 in, 0 out)`

Initialize Flare Force

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\donald2\limi.bdscript</summary>
```plaintext
L5986:
 syscall 7, 3 ; trap_flare_init (0 in, 0 out)
 pushImm 0
 popToWp W64
 pushImm 0
 popToSp 0
 pushImm 16
```
</details>

