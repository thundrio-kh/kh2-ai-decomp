## trap_enemy_get_attacker* (enemy)

`syscall 2, 88 ; trap_enemy_get_attacker (1 in, 1 out)`

Returns the object that last attacked the passed in object

### Input parameters
| Name | Type | Description
|------|------|------------
| enemy_obj   | YS::BTLOBJ *   | A battle object


### Output Parameters
| Name | Type
|------|-----
| attacker   | YS::OBJ_128 *   
### Example Usage From obj\B_HE030_PART\b_he.bdscript
```plaintext
L39:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 2, 88 ; trap_enemy_get_attacker (1 in, 1 out)
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 jz L86
 pushFromFSp 4
 syscall 2, 64 ; trap_damage_orig_reaction (1 in, 1 out)
 syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)
 pushImm 4
 sub 
 eqz 
 dup 
 jz L70
 pushFromFSp 4
 syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK110_PHANTOM\b_lk.bdscript       | ((M) Scar Ghost)          
| obj\M_AL020_FIRE\m_al.bdscript       | ((M) Fiery Globe)          
| obj\M_AL020_FIRE_RAW\m_al.bdscript       | ((M) Fiery Globe (RAW))          
| obj\M_AL020_ICEE\m_al.bdscript       | ((M) Icy Cube)          
| obj\M_AL020_ICEE_RAW\m_al.bdscript       | ((M) Icy Cube (RAW))          
| obj\M_EX020\m_ex.bdscript       | ((M) Shadow)          
| obj\M_EX020_NM\m_ex.bdscript       | ((M) Shadow (NM))          
| obj\M_EX020_NM_RAW\m_ex.bdscript       | ((M) Shadow (NM) (RAW))          
| obj\M_EX020_RAW\m_ex.bdscript       | ((M) Shadow (RAW))          
| obj\M_EX020_WI\m_ex.bdscript       | ((M) Shadow (WI))          
| obj\M_EX020_WI_RAW\m_ex.bdscript       | ((M) Shadow (WI) (RAW))          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\M_EX510\m_ex.bdscript       | ((M) Rabid Dog)          
| obj\M_EX520\m_ex.bdscript       | ((M) Hook Bat)          
| obj\M_EX520_HB\m_ex.bdscript       | ((M) Beffudler)          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX660\m_ex.bdscript       | ((M) Rapid Thruster)          
| obj\M_EX660_WI\m_ex.bdscript       | ((M) Rapid Thruster (WI))          
| obj\M_EX700\m_ex.bdscript       | ((M) Mole Driller)          
| obj\M_EX700_NM\m_ex.bdscript       | ((M) Mole Driller (NM))          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\M_EX930\m_ex.bdscript       | ((M) Dancer)          



