## trap_thread_start (threading)

`syscall 0, 9 ; trap_thread_start (4 in, 1 out)`

Starts a new thread of execution

Example:

;START THREAD
;This thread will flash the screen white after a 200 frame countdown ends
startThread:
 pushImm 0
 pushImm thread ; code
 pushImm 0
 pushFromFSp 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 ret

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | unknown   | pushImm: 0,1
| code   | label   | Line number for label to execute
| unk3   | unknown   | pushImm: 0
| owner   | YS::OBJ_175   | Object that spawns the thread


#### Return Parameters
| Name | Type
|------|-----
| unk   | unknown   
Example Usage From limit\tron\limi.bdscript
```plaintext
L4479:
 popToSp 0
 pushImm 0
 pushImm L4569
 pushImm 0
 pushFromFSp 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSpVal 32
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSpVal 16, 32
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\tron\limi.bdscript       |           
| msn\AL13_TRAP\al13.bdscript       |           
| msn\AL13_TRAP_FREE\al13.bdscript       |           
| msn\AL13_TRAP_FREE2\al13.bdscript       |           
| msn\CA01_MS204\ca01.bdscript       |           
| msn\CA07_MS105\ca07.bdscript       |           
| msn\CA09_MEDAL\ca_m.bdscript       |           
| msn\CA10_MEDAL\ca_m.bdscript       |           
| msn\CA10_MS107\ca10.bdscript       |           
| msn\CA12_MEDAL\ca_m.bdscript       |           
| msn\CA13_MEDAL\ca_m.bdscript       |           
| msn\CA14_MEDAL\ca_m.bdscript       |           
| msn\CA15_MEDAL\ca_m.bdscript       |           
| msn\DC00_MS101\dc_m.bdscript       |           
| msn\DC02_MS100\dc_m.bdscript       |           
| msn\DC02_MS101\dc_m.bdscript       |           
| msn\EH20_MS113\eh20.bdscript       |           
| msn\EH20_MS113_RE\eh20.bdscript       |           
| msn\HB08_MS102\hb08.bdscript       |           
| msn\HB16_MS404D\hb16.bdscript       |           
| msn\HE00_MS104B\he00.bdscript       |           
| msn\HE02_MS104C\he02.bdscript       |           
| msn\HE02_MS104D\he02.bdscript       |           
| msn\HE08_MS106\he08.bdscript       |           
| msn\HE_COLOSSEUM_2_FOG\he_c.bdscript       |           
| msn\HE_COLOSSEUM_6_FOG\he_c.bdscript       |           
| msn\HE_COL_2_10\he_c.bdscript       |           
| msn\HE_COL_4_9\he_c.bdscript       |           
| msn\HE_COL_6_10\he_c.bdscript       |           
| msn\HE_COL_8_30\he_c.bdscript       |           
| msn\HE_COL_8_6\he_c.bdscript       |           
| msn\LK02_MS102\lk02.bdscript       |           
| msn\MU01_MS102\mu01.bdscript       |           
| msn\MU01_MS103C\mu01.bdscript       |           
| msn\MU02_MS103A\mu02.bdscript       |           
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           
| msn\MU07_MS106\mu07.bdscript       |           
| msn\MU09_KINOKO_VEX\kino.bdscript       |           
| msn\MU09_MS108\mu09.bdscript       |           
| msn\TR01_MS101\tr01.bdscript       |           
| msn\TR04_MS202\tr04.bdscript       |           
| msn\TR07_MS203\tr07.bdscript       |           
| msn\TT04_MS107\tt04.bdscript       |           
| msn\TT12_WORK_BOX\tt12.bdscript       |           
| msn\TT14_MS110\tt14.bdscript       |           
| msn\TT32_MS302\tt32.bdscript       |           
| msn\WI02_MS103\wi02.bdscript       |           
| msn\WI05_MS102D\wi05.bdscript       |           
| msn\WI06_MS102B\wi06.bdscript       |           
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\F_HB100\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_NM080\f_nm.bdscript       | ((F) Oogie’s present box (NM))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR020_CORE\f_tr.bdscript       | ()          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\N_AL070_BTL\n_al.bdscript       | ((N) Jafar clone (BTL) (AL))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          



