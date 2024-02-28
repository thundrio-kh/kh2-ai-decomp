## trap_pax_start_bind* (animation)

`syscall 1, 139 ; trap_pax_start_bind (5 in, 1 out)`

Starts and binds a PAX effect

#### Input parameters
| Name | Type | Description
|------|------|------------
| pax   | ryj::PAX_161 *   | A PAX effect object
| id   | int   | ID of the animation to start
| obj   | YS::OBJ_125   | Object to bind to
| flag   | int   | Flag to set, possibly a boolean as 0 and 1 are only values used in game
| priority   | int   | Priority for the animation


#### Return Parameters
| Name | Type
|------|-----
| effect   | ryj::EFFECT_145 *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| magic\blizzard1\bliz.bdscript       |           
| magic\BLIZZARD_1\bliz.bdscript       |           
| magic\BLIZZARD_1lk\bliz.bdscript       |           
| magic\BLIZZARD_2\bliz.bdscript       |           
| magic\BLIZZARD_2lk\bliz.bdscript       |           
| magic\BLIZZARD_3\bliz.bdscript       |           
| magic\BLIZZARD_3lk\bliz.bdscript       |           
| magic\cure1\cure.bdscript       |           
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           
| magic\fire1\fire.bdscript       |           
| magic\FIRE_1\fire.bdscript       |           
| magic\FIRE_1lk\fire.bdscript       |           
| magic\FIRE_2\fire.bdscript       |           
| magic\FIRE_2lk\fire.bdscript       |           
| magic\FIRE_3\fire.bdscript       |           
| magic\FIRE_3lk\fire.bdscript       |           
| magic\LK_BLIZZARD_1\bliz.bdscript       |           
| magic\magnet1\magn.bdscript       |           
| magic\MAGNET_1\magn.bdscript       |           
| magic\MAGNET_1lk\magn.bdscript       |           
| magic\MAGNET_2\magn.bdscript       |           
| magic\MAGNET_2lk\magn.bdscript       |           
| magic\MAGNET_3\magn.bdscript       |           
| magic\MAGNET_3lk\magn.bdscript       |           
| magic\reflect1\refl.bdscript       |           
| magic\REFLECT_1\refl.bdscript       |           
| magic\REFLECT_1lk\refl.bdscript       |           
| magic\REFLECT_2\refl.bdscript       |           
| magic\REFLECT_2lk\refl.bdscript       |           
| magic\REFLECT_3\refl.bdscript       |           
| magic\REFLECT_3lk\refl.bdscript       |           
| magic\thunder1\thun.bdscript       |           
| magic\THUNDER_1\thun.bdscript       |           
| magic\THUNDER_1lk\thun.bdscript       |           
| magic\THUNDER_2\thun.bdscript       |           
| magic\THUNDER_2lk\thun.bdscript       |           
| magic\THUNDER_3\thun.bdscript       |           
| magic\THUNDER_3lk\thun.bdscript       |           

</details>

<details>
	<summary>Example Usage From magic\blizzard1\bliz.bdscript</summary>
```
L362:
 pushFromFSpVal 16
 pushFromFSp 4
 pushFromPSpVal 0
 pushImm 1
 pushImm 0
 syscall 1, 139 ; trap_pax_start_bind (5 in, 1 out)
 ret
```
</details>

