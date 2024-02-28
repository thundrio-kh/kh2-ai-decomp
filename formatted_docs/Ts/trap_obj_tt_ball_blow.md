## trap_obj_tt_ball_blow (special)

`syscall 6, 25 ; trap_obj_tt_ball_blow (4 in, 0 out)`

Make the twilight town minigame ball perform a blow

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| vec   | kn::FVector   | A vector
| unk1   | unknown   | Unknown
| unk2   | unknown   | UNknown




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          

</details>

<details>
	<summary>Example Usage From obj\F_TT020\f_tt.bdscript</summary>
```
L165:
 drop 
 pushFromFSp 4
 memcpyToSpVal 16, 112
 pushFromPSpVal 112
 pushImm 12
 add 
 pushImmf 0
 memcpy 0
 pushImm 153
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 0
 gosub 8, L504
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqz 
 jz L240
 pushFromPSpVal 112
 pushImm 4
 add 
 pushImmf 60
 memcpy 0
 pushFromFSp 0
 pushFromPSpVal 112
 pushFromPSpVal 112
 fetchValue 4
 pushFromPSpVal 112
 fetchValue 12
 syscall 6, 25 ; trap_obj_tt_ball_blow (4 in, 0 out)
 jmp L475
```
</details>

