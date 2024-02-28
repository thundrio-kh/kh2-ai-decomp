## *trap_sysobj_party* (party)

`syscall 1, 93 ; trap_sysobj_party (1 in, 1 out)`

Get the nth party member

#### Input parameters
| Name | Type | Description
|------|------|------------
| n   | int   | Which number party member to get, the Player is 0


#### Return Parameters
| Name | Type
|------|-----
| party_member   | YS::OBJ_125   
Example Usage From magic\cure1\cure.bdscript
```plaintext
L323:
 popToSp 0
 pushFromPSp 16
 pushImm 4
 add 
 pushFromFSp 0
 syscall 1, 93 ; trap_sysobj_party (1 in, 1 out)
 memcpy 0
 pushFromPSp 16
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| magic\cure1\cure.bdscript       |           
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_AL120\b_al.bdscript       | ((B) Blizzard Lord’s ice spikes)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_EH110\f_eh.bdscript       | ((F) Rising building (EH))          
| obj\F_NM010\f_nm.bdscript       | ((F) ??? (NM))          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          



