## trap_player_lockon* (player)

`syscall 1, 321 ; trap_player_lockon (3 in, 0 out)`

Locks the player onto an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| player   | YS::PLAYER_44 *   | Player object
| mode   | int   | lock on mode
| target   | YS::OBJ_168 *   | Target object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\TT04_MS107\tt04.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\TT04_MS107\tt04.bdscript</summary>
```
L63:
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 8
 pushFromPSp 8
 pushImm 1
 pushFromPWp W16
 syscall 1, 321 ; trap_player_lockon (3 in, 0 out)
 jmp L79
```
</details>

