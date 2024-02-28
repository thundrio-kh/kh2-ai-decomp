## trap_effect_pause (effect)

`syscall 0, 66 ; trap_effect_pause (2 in, 0 out)`

pause an effect under certain condictions

#### Input parameters
| Name | Type | Description
|------|------|------------
| effect   | ryj::EFFECT_144 *   | an effect object
| unk   | int   | Only known used value is 1




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          

</details>

<details>
	<summary>Example Usage From obj\B_EX100\b_ex.bdscript</summary>
```
L1827:
 pushFromFSpVal 64
 pushImm 1
 syscall 0, 66 ; trap_effect_pause (2 in, 0 out)
 pushImmf 120
 gosub 20, L1474
 pushFromFSpVal 64
 pushImmf 12
 gosub 20, L1940
```
</details>

