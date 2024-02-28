## trap_enemy_summon_entry* (object)

`syscall 7, 33 ; trap_enemy_summon_entry (1 in, 1 out)`

Summon a new instance of an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_254 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| new_obj   | YS::OBJ_254 *   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          

</details>

<details>
	<summary>Example Usage From obj\M_EX740\m_ex.bdscript</summary>
```plaintext
L1922:
 popToSp 0
 pushFromFSp 0
 syscall 7, 33 ; trap_enemy_summon_entry (1 in, 1 out)
 popToSp 48
 pushFromFSp 48
 pushFromPAi L5588 ; ___ai 'INT' (L5588)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromPSp 32
 pushFromFSp 48
 gosub 16, L2011
 pushFromPSp 32
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L2010
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 50
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -250
 addf 
 memcpy 0
 pushFromPSp 32
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 jmp L2010
```
</details>

