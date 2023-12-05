## trap_flare_free* (special)

syscall 7, 5 ; trap_flare_free (1 in, 0 out)

Free memory associated with Flare Force

#### Input parameters
| Name | Type | Description
|------|------|------------
| flare   | Ts::FLARE_0 *   | Flare Force object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\donald2\limi.bdscript       |           
| limit\donald2_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\donald2\limi.bdscript</summary>
L4019:
 popToSp 0
 pushFromFSpVal 80
 syscall 7, 5 ; trap_flare_free (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L4008
 ret
</details>

