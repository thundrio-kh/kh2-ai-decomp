## trap_obj_enable_occ* (culling)

`syscall 1, 256 ; trap_obj_enable_occ (1 in, 0 out)`

enable occlusion culling for all bones in an culling object

### Input parameters
| Name | Type | Description
|------|------|------------
| objocc   | YS::OBJOCC_133 *   | an occlusion culling object


### Example Usage From obj\B_LK120\b_lk.bdscript
```plaintext
TR14:
 pushFromPWp W576
 gosub 4, L4604
 pushFromPWp W576
 gosub 4, L4615
 pushFromPWp W576
 syscall 1, 256 ; trap_obj_enable_occ (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          



