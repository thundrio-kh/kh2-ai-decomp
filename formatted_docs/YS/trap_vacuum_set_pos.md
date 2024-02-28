## trap_vacuum_set_pos* (vacuum)

`syscall 2, 80 ; trap_vacuum_set_pos (2 in, 0 out)`

Set the position of a vacuum

#### Input parameters
| Name | Type | Description
|------|------|------------
| vacuum   | YS::VACUUM::VACUUM   | A vacuum object
| pos   | kn::FVector *   | A position vector




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX880_DANCER\m_ex.bdscript       | ((M) Demyx’s water form)          
| obj\M_EX880_DANCER_EH\m_ex.bdscript       | ((M) Demyx’s water form (EH))          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          

</details>

<details>
	<summary>Example Usage From obj\M_EX210\m_ex.bdscript</summary>
```plaintext
L5866:
 pushFromFSpVal 108
 pushImm 0
 sub 
 neqz 
 jz L5896
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSpVal 108
 pushFromPSp 16
 syscall 2, 80 ; trap_vacuum_set_pos (2 in, 0 out)
 halt 
 jmp L5866
```
</details>

