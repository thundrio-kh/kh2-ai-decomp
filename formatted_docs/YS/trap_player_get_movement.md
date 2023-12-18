## trap_player_get_movement* (player)

`syscall 1, 113 ; trap_player_get_movement (1 in, 1 out)`

Get the position that the player is moving to

#### Input parameters
| Name | Type | Description
|------|------|------------
| player   | YS::PLAYER_44 *   | Player object


#### Return Parameters
| Name | Type
|------|-----
| pos   |  kn::FVector   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\goofy\limi.bdscript       |           
| limit\goofy_wi\limi.bdscript       |           
| limit\jack\limi.bdscript       |           
| limit\mulan\limi.bdscript       |           
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX730\m_ex.bdscript       | ((M) Tornado Step)          

</details>

<details>
	<summary>Example Usage From limit\goofy\limi.bdscript</summary>
```
L1410:
 jz L1742
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 1, 113 ; trap_player_get_movement (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 64
 pushFromPSp 64
 fetchValue 12
 pushImmf 0.1
 subf 
 infzf 
 jz L1452
 pushImmf 0.1
 popToSp 84
 pushImmf 0
 popToSp 80
 jmp L1473
```
</details>

