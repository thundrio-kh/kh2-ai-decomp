## trap_sheet_get_drive_time* (sheet)

`syscall 10, 45 ; trap_sheet_get_drive_time (1 in, 1 out)`

Get the amount of drive time left

#### Input parameters
| Name | Type | Description
|------|------|------------
| sheet   | YS::SHEET_44 *   | An object stat sheet


#### Return Parameters
| Name | Type
|------|-----
| time   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\N_HB040_BTL\n_hb.bdscript</summary>
```
L1306:
 gosub 8, L1348
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 syscall 10, 45 ; trap_sheet_get_drive_time (1 in, 1 out)
 pushImmf 0
 subf 
 infoezf 
 jz L1328
 jmp L1345
```
</details>

