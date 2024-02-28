## trap_create_active_path* (path)

`syscall 5, 8 ; trap_create_active_path (2 in, 0 out)`

Creates an active path from one object to another

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| target_obj   | YS::OBJ_125   | An target object to path to


Example Usage From obj\M_EX900\m_ex.bdscript
```plaintext
L5933:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 pushFromFSp 12
 syscall 5, 8 ; trap_create_active_path (2 in, 0 out)
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 0
 memcpy 0
 pushFromFSp 0
 pushImmf 10
 syscall 5, 3 ; trap_get_path_dir (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromFSp 12
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 popToSp 64
 pushImm 1
 popToSp 16
 pushFromPSp 32
 fetchValue 12
 pushImmf 0
 subf 
 supzf 
 jz L6245
 pushFromFSp 0
 pushFromPSp 32
 pushFromFSp 8
 fetchValue 8
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 100
 memcpy 0
 pushFromFSp 0
 pushFromPSp 32
 pushFromFSp 8
 fetchValue 0
 pushFromFSp 8
 fetchValue 4
 syscall 1, 119 ; trap_obj_check_step (4 in, 1 out)
 popToSp 20
 pushFromFSp 20
 dup 
 pushImm 1
 sub 
 jz L6077
 dup 
 pushImm 2
 sub 
 jz L6077
 jmp L6198
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          



