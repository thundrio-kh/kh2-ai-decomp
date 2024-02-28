## trap_vector_div* (math)

`syscall 0, 37 ; trap_vector_div (2 in, 1 out)`

Divides the values of two vectors

#### Input parameters
| Name | Type | Description
|------|------|------------
| vec1   | kn::FVector *   | A vector
| vec2   | kn::FVector *   | A vector


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
```
L7250:
 pushFromFSp 0
 gosub 48, L7443
 eqz 
 jz L7332
 pushFromPSp 16
 pushFromFSp 12
 pushFromPSpVal 32
 pushFromPSpVal 32
 fetchValue 12
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 pushFromFSp 8
 pushFromPSp 160
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 pushFromFSpVal 12
 gosub 56, L7453
 pushFromPSp 16
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 gosub 48, L7747
 memcpyToSp 16, 176
 pushFromPSp 176
 pushFromFSp 12
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 syscall 0, 37 ; trap_vector_div (2 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 memcpyToSp 16, 160
 pushFromFSpVal 12
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSpVal 12
 jmp L7348
```
</details>

