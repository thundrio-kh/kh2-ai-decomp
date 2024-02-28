## trap_obj_limit_mulan_idle* (special)

`syscall 6, 38 ; trap_obj_limit_mulan_idle (1 in, 0 out)`

Change the mulan limit action to idle

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\mulan\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\mulan\limi.bdscript</summary>
```plaintext
L5649:
 popToSp 0
 gosub 12, L5675
 pushFromPSp 16
 pushImmf 1
 gosub 12, L3754
 pushFromFSp 0
 pushFromPSp 16
 gosub 12, L1582
 pushFromFSp 0
 syscall 6, 38 ; trap_obj_limit_mulan_idle (1 in, 0 out)
 pushFromFSp 0
 gosub 12, L2011
 ret
```
</details>

