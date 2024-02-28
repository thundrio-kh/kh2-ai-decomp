## trap_obj_set_bg_collision_type* (map)

`syscall 1, 200 ; trap_obj_set_bg_collision_type (2 in, 0 out)`

Sets how an object will collide with the map

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| coll_type   | int   | Collision type. Only a value of 2 is used in game




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_HE030_L\f_he.bdscript       | ((F) Phil minigame L (HE))          
| obj\F_HE030_L_FREE\f_he.bdscript       | ((F) Phil minigame L (FREE) (HE))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          

</details>

<details>
	<summary>Example Usage From obj\F_HE030_L\f_he.bdscript</summary>
```
L2612:
 popToSp 0
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushImm 75
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 syscall 1, 200 ; trap_obj_set_bg_collision_type (2 in, 0 out)
 ret
```
</details>

