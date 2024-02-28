## *trap_bg_set_animation_speed* (map)

`syscall 1, 326 ; trap_bg_set_animation_speed (1 in, 0 out)`

Sets the background animation speed of the map. Only used by Hostile Program to stop the animation of the walls when Hostile Program has been frozen.

#### Input parameters
| Name | Type | Description
|------|------|------------
| ratio   | float   | ratio to set for animation speed. Used values are 0 and 1




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          

</details>

<details>
	<summary>Example Usage From obj\B_TR000\b_tr.bdscript</summary>
```plaintext
L402:
 gosub 12, L440
 pushImm 6
 syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)
 pushImmf 0
 syscall 1, 326 ; trap_bg_set_animation_speed (1 in, 0 out)
```
</details>

