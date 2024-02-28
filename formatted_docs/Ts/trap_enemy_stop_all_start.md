## trap_enemy_stop_all_start* (enemy)

`syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)`

Stops all instances of an object from doing anything, until trap_enemy_stop_all_end is run

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | ID of an enemy




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\aladdin\limi.bdscript       |           
| limit\auron\limi.bdscript       |           
| limit\beast\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\riku\limi.bdscript       |           
| limit\simba\limi.bdscript       |           
| limit\sparrow\limi.bdscript       |           
| limit\tron\limi.bdscript       |           
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          

</details>

<details>
	<summary>Example Usage From limit\aladdin\limi.bdscript</summary>
```plaintext
L3400:
 pushImm 17
 syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)
 ret
```
</details>

