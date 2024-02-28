## trap_obj_is_damage_motion* (object)

`syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)`

Checks if an object is playing a damage animation

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_damage_motion   | bool   
Example Usage From obj\B_AL020\b_al.bdscript
```plaintext
L2783:
 pushFromPSp 4
 syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)
 jz L2804
 pushFromPSp 32
 pushImmf 1
 gosub 28, L1838
 pushFromPSp 4
 pushFromPSp 32
 syscall 1, 227 ; trap_obj_jump_direct (2 in, 0 out)
 jmp L2804
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          



