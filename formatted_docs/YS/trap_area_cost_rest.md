## *trap_area_cost_rest* (mapinfo)

`syscall 1, 197 ; trap_area_cost_rest (0 in, 1 out)`

Returns the amount of cost left in the room before the capacity is filled (YS::Capacity - YS::Cost)

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| cost_left   | int   
### Example Usage From ard\he05\f_he.bdscript
```plaintext
L230:
 dup 
 jz L254
 syscall 1, 197 ; trap_area_cost_rest (0 in, 1 out)
 gosub 4, L205
 fetchValue 4
 pushImm 1
 add 
 pushImm 7
 mul 
 sub 
 pushImm 0
 sub 
 ipos 
 eqzv
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\he05\f_he.bdscript       |           
| ard\he07\f_he.bdscript       |           
| ard\he11\f_he.bdscript       |           
| ard\he15\f_he.bdscript       |           
| ard\he16\f_he.bdscript       |           
| ard\he17\f_he.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\F_HE110\f_he.bdscript       | ((F) Mist Sphere (HE))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          



