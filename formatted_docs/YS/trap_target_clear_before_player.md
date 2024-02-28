## trap_target_clear_before_player* (target)

`syscall 1, 245 ; trap_target_clear_before_player (0 in, 0 out)`

Clear the target before the player

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          

</details>

<details>
	<summary>Example Usage From obj\N_EX760_BTL_MEGARA\n_ex.bdscript</summary>
```plaintext
L5513:
 popToSp 0
 pushFromPAi L11211 ; ___ai 'target_player' (L11211)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 syscall 1, 245 ; trap_target_clear_before_player (0 in, 0 out)
 pushImm 1
 popToWp W4404
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 fetchValue 4
 pushImm 232
 pushFromFSp 0
 fetchValue 36
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L3863
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 ret
```
</details>

