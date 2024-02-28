## trap_damage_parts* (attack)

`syscall 2, 70 ; trap_damage_parts (1 in, 1 out)`

Get the parts value of the attack, which is the "Element" value defined in its Atkp entry found in 00battle.bin

#### Input parameters
| Name | Type | Description
|------|------|------------
| damage   | YS::DAMAGE_5 *   | An object representing damage


#### Return Parameters
| Name | Type
|------|-----
| parts   | int   
Example Usage From obj\B_AL020\b_al.bdscript
```plaintext
L3611:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 4
 syscall 2, 70 ; trap_damage_parts (1 in, 1 out)
 dup 
 pushImm 0
 sub 
 jz L3649
 dup 
 pushImm 1
 sub 
 jz L3649
 jmp L3693
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          



