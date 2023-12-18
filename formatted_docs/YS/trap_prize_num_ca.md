## trap_prize_num_ca* (prize)

`syscall 1, 341 ; trap_prize_num_ca (0 in, 1 out)`

Returns the number of port royal medals that are currently spawned

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| num   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          

</details>

<details>
	<summary>Example Usage From obj\B_CA050\b_ca.bdscript</summary>
```
L6551:
 popToSp 0
 syscall 1, 341 ; trap_prize_num_ca (0 in, 1 out)
 pushImm 200
 sub 
 msbi 
 jz L6570
 pushFromFSp 0
 pushFromPAi L11290 ; ___ai 'atk_collect' (L11290)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L6570
```
</details>

