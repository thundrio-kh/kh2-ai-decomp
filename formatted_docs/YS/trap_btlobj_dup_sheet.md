## trap_btlobj_dup_sheet* (btlobj)

`syscall 2, 95 ; trap_btlobj_dup_sheet (2 in, 0 out)`

Duplicates a battle object

#### Input parameters
| Name | Type | Description
|------|------|------------
| btlobj   | YS::PIERROT_6   | the btl object to copy
| param   | int   | Unknown purpose, only used value is 216 (Larxene Datas enmp entry




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          

</details>

<details>
	<summary>Example Usage From obj\B_EX400\b_ex.bdscript</summary>
```
L3817:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L7770
 pushFromFSp 0
 pushFromPWp W320
 gosub 4, L7848
 pushFromFSp 0
 pushFromPWp W320
 syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29922 ; ___ai 'appear' (L29922)
 pushImm 100
 pushImm L7888
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29310 ; ___ai 'leave' (L29310)
 pushImm 196908
 pushImm L8140
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29805 ; ___ai 'freeze' (L29805)
 pushImm 100
 pushImm L8200
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29656 ; ___ai 'event' (L29656)
 pushImm 196908
 pushImm L8217
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L8222
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29662 ; ___ai 'idle_time' (L29662)
 pushImm 100
 pushImm L8237
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29669 ; ___ai 'footwork' (L29669)
 pushImm 100
 pushImm L8423
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29467 ; ___ai 'mode_battle' (L29467)
 pushImm 100
 pushImm L8567
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29789 ; ___ai 'wait' (L29789)
 pushImm 100
 pushImm L8830
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29883 ; ___ai 'combination_start' (L29883)
 pushImm 100
 pushImm L8885
 pushImm L9017
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L9029
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29688 ; ___ai 'bunshin_wait_5' (L29688)
 pushImm 100
 pushImm L9047
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30072 ; ___ai 'bunshin_wait_10' (L30072)
 pushImm 100
 pushImm L9108
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29696 ; ___ai 'bunshin_wait_15' (L29696)
 pushImm 100
 pushImm L9121
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30027 ; ___ai 'bunshin_wait_20' (L30027)
 pushImm 100
 pushImm L9134
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29704 ; ___ai 'bunshin_wait_25' (L29704)
 pushImm 100
 pushImm L9147
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29000 ; ___ai 'bunshin_wait_30' (L29000)
 pushImm 100
 pushImm L9160
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29712 ; ___ai 'bunshin_wait_40' (L29712)
 pushImm 100
 pushImm L9173
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29726 ; ___ai 'bunshin_wait_air_5' (L29726)
 pushImm 65836
 pushImm L9186
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29740 ; ___ai 'bunshin_wait_air_10' (L29740)
 pushImm 65836
 pushImm L9199
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29758 ; ___ai 'bunshin_wait_air_15' (L29758)
 pushImm 65836
 pushImm L9212
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29768 ; ___ai 'bunshin_wait_air_20' (L29768)
 pushImm 65836
 pushImm L9225
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29120 ; ___ai 'bunshin_wait_air_25' (L29120)
 pushImm 65836
 pushImm L9238
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29195 ; ___ai 'bunshin_wait_air_30' (L29195)
 pushImm 65836
 pushImm L9251
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29926 ; ___ai 'atk_craw_a' (L29926)
 pushImm 65736
 pushImm L9264
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30056 ; ___ai 'atk_craw_a2' (L30056)
 pushImm 65736
 pushImm L9633
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30039 ; ___ai 'atk_craw_a_not_fade' (L30039)
 pushImm 65736
 pushImm L9646
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29941 ; ___ai 'atk_craw_c' (L29941)
 pushImm 65736
 pushImm L9659
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30080 ; ___ai 'atk_craw_c_not_fade' (L30080)
 pushImm 65736
 pushImm L9861
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30049 ; ___ai 'atk_craw_end' (L30049)
 pushImm 200
 pushImm L9871
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30016 ; ___ai 'atk_craw_aa' (L30016)
 pushImm 65736
 pushImm L9969
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10066
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30066 ; ___ai 'atk_craw_ac' (L30066)
 pushImm 65736
 pushImm L10150
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10191
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30093 ; ___ai 'atk_craw_aca' (L30093)
 pushImm 65736
 pushImm L10275
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10316
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30100 ; ___ai 'atk_craw_aaac' (L30100)
 pushImm 65736
 pushImm L10406
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10447
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L28994 ; ___ai 'atk_craw_cc' (L28994)
 pushImm 65736
 pushImm L10543
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10584
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29008 ; ___ai 'atk_craw_acaac' (L29008)
 pushImm 65736
 pushImm L10668
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10709
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29016 ; ___ai 'atk_craw_aaaaa' (L29016)
 pushImm 65736
 pushImm L10817
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L10858
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29074 ; ___ai 'atk_rush_not_fade' (L29074)
 pushImm 200
 pushImm L10960
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29029 ; ___ai 'atk_rush' (L29029)
 pushImm 200
 pushImm L11764
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29051 ; ___ai 'atk_rush_start' (L29051)
 pushImm 200
 pushImm L11774
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L11801
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30062 ; ___ai 'vanish' (L30062)
 pushImm 196908
 pushImm L11873
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29095 ; ___ai 'atk_utsusemi_start' (L29095)
 pushImm 200
 pushImm L11882
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L11909
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29167 ; ___ai 'atk_utsusemi_combo_start' (L29167)
 pushImm 200
 pushImm L11987
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L12014
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29229 ; ___ai 'revenge_utsusemi_start' (L29229)
 pushImm 65836
 pushImm L12104
 pushImm L12142
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L12152
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29258 ; ___ai 'revenge_utsusemi_combo_start' (L29258)
 pushImm 65836
 pushImm L12242
 pushImm L12280
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L12290
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29160 ; ___ai 'atk_utsusemi' (L29160)
 pushImm 65736
 pushImm L12392
 pushImm 0
 pushImm 0
 pushImm L12581
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29778 ; ___ai 'atk_utsusemi_not_fade' (L29778)
 pushImm 65736
 pushImm L12627
 pushImm 0
 pushImm 0
 pushImm L12637
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29210 ; ___ai 'atk_utsusemi_low' (L29210)
 pushImm 65736
 pushImm L12672
 pushImm 0
 pushImm 0
 pushImm L12805
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29138 ; ___ai 'atk_utsusemi_low_not_fade' (L29138)
 pushImm 65736
 pushImm L12851
 pushImm 0
 pushImm 0
 pushImm L12861
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29435 ; ___ai 'atk_fdash_a_start' (L29435)
 pushImm 200
 pushImm L12896
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L13404
 pushImm 0
 pushImm L13421
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29473 ; ___ai 'atk_fdash_a' (L29473)
 pushImm 65736
 pushImm L13485
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29521 ; ___ai 'atk_fdash_b_start' (L29521)
 pushImm 200
 pushImm L14129
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L14364
 pushImm 0
 pushImm L14381
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29543 ; ___ai 'atk_fdash_b' (L29543)
 pushImm 65736
 pushImm L14458
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29568 ; ___ai 'atk_thunder' (L29568)
 pushImm 200
 pushImm L14724
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29251 ; ___ai 'atk_thunder_a' (L29251)
 pushImm 200
 pushImm L14819
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29499 ; ___ai 'atk_thunder_a_2' (L29499)
 pushImm 200
 pushImm L14839
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29083 ; ___ai 'atk_thunder_b' (L29083)
 pushImm 200
 pushImm L14859
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29792 ; ___ai 'atk_thunder_b2' (L29792)
 pushImm 200
 pushImm L14869
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29067 ; ___ai 'atk_thunder_c' (L29067)
 pushImm 200
 pushImm L14876
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29580 ; ___ai 'revenge_thunder_air' (L29580)
 pushImm 65836
 pushImm L14886
 pushImm L14960
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29059 ; ___ai 'atk_thunder_ex' (L29059)
 pushImm 65836
 pushImm L14970
 pushImm L15076
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29679 ; ___ai 'atk_jinrai_start' (L29679)
 pushImm 200
 pushImm L15086
 pushImm L15197
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L15233
 pushImm L15303
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29720 ; ___ai 'atk_jinrai' (L29720)
 pushImm 65736
 pushImm L15339
 pushImm L15560
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L15567
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29750 ; ___ai 'atk_jinrai_fin' (L29750)
 pushImm 65736
 pushImm L15574
 pushImm L16079
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L16116
 pushImm L16127
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29841 ; ___ai 'atk_raijin_start' (L29841)
 pushImm 200
 pushImm L16134
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L16263
 pushImm 0
 pushImm L16280
 pushImm L16344
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29875 ; ___ai 'atk_raijin_dash' (L29875)
 pushImm 65736
 pushImm L16409
 pushImm L16676
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L16723
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29932 ; ___ai 'atk_raigou_start' (L29932)
 pushImm 200
 pushImm L16730
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L17576
 pushImm 0
 pushImm L17593
 pushImm L17644
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29947 ; ___ai 'atk_raigou_dash' (L29947)
 pushImm 65736
 pushImm L17721
 pushImm L17970
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L18029
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29800 ; ___ai 'test_fall' (L29800)
 pushImm 100
 pushImm L18036
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29955 ; ___ai 'idle_wait' (L29955)
 pushImm 100
 pushImm L18101
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29090 ; ___ai 'idle_long' (L29090)
 pushImm 100
 pushImm L18172
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29299 ; ___ai 'idle_short' (L29299)
 pushImm 100
 pushImm L18185
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29962 ; ___ai 'move_run' (L29962)
 pushImm 100
 pushImm L18198
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29336 ; ___ai 'move_run_near' (L29336)
 pushImm 100
 pushImm L18631
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29967 ; ___ai 'move_run_angle' (L29967)
 pushImm 100
 pushImm L19044
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29323 ; ___ai 'move_run_angle_para' (L29323)
 pushImm 100
 pushImm L19071
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29241 ; ___ai 'move_run_angle_away' (L29241)
 pushImm 100
 pushImm L19098
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29981 ; ___ai 'move_around' (L29981)
 pushImm 100
 pushImm L19237
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30000 ; ___ai 'step_side' (L30000)
 pushImm 100
 pushImm L19592
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29151 ; ___ai 'step_side_repeat' (L29151)
 pushImm 100
 pushImm L20059
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29809 ; ___ai 'step_side_nt' (L29809)
 pushImm 100
 pushImm L20072
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29816 ; ___ai 'step_side_repeat_nt' (L29816)
 pushImm 100
 pushImm L20085
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29826 ; ___ai 'step_right' (L29826)
 pushImm 100
 pushImm L20098
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29832 ; ___ai 'step_left' (L29832)
 pushImm 100
 pushImm L20173
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30011 ; ___ai 'step_back' (L30011)
 pushImm 100
 pushImm L20183
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L30022 ; ___ai 'step_away' (L30022)
 pushImm 100
 pushImm L20461
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29837 ; ___ai 'test_rc' (L29837)
 pushImm 100
 pushImm L20682
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29674 ; ___ai 'rc_throw' (L29674)
 pushImm 65636
 pushImm L20701
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L20772
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29850 ; ___ai 'rc_throw_hit' (L29850)
 pushImm 65636
 pushImm L20833
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29659 ; ___ai 'idle' (L29659)
 pushImm 65636
 pushImm L21003
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29024 ; ___ai 'test_idle' (L29024)
 pushImm 65636
 pushImm L21020
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L21032
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29046 ; ___ai 'idle_raw' (L29046)
 pushImm 65636
 pushImm L21043
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29039 ; ___ai 'test_idle_raw' (L29039)
 pushImm 65636
 pushImm L21060
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L21072
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29488 ; ___ai 'btl_normal' (L29488)
 pushImm 100
 pushImm L21083
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29515 ; ___ai 'rvg_normal' (L29515)
 pushImm 100
 pushImm L22353
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29494 ; ___ai 'btl_hard' (L29494)
 pushImm 100
 pushImm L22611
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29530 ; ___ai 'rvg_hard' (L29530)
 pushImm 100
 pushImm L24847
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29507 ; ___ai 'btl_super_hard' (L29507)
 pushImm 100
 pushImm L25131
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29535 ; ___ai 'rvg_super_hard' (L29535)
 pushImm 100
 pushImm L27246
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29618 ; ___ai 'weak_mode' (L29618)
 pushImm 100
 pushImm L27470
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29857 ; ___ai 'revenge' (L29857)
 pushImm 65836
 pushImm L27730
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29861 ; ___ai 'battle_start' (L29861)
 pushImm 100
 pushImm L28199
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29639 ; ___ai 'mode_battle_boss' (L29639)
 pushImm 100
 pushImm L28276
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29623 ; ___ai 'mode_revenge_boss' (L29623)
 pushImm 100
 pushImm L28391
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29868 ; ___ai 'mode_revenge' (L29868)
 pushImm 100
 pushImm L28506
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W320
 pushFromPAi L29333 ; ___ai 'dead' (L29333)
 pushImm 196908
 pushImm L28515
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushImm 0
 popToWp W4420
 pushFromFSp 0
 pushImm 216
 syscall 2, 95 ; trap_btlobj_dup_sheet (2 in, 0 out)
 pushFromFSp 0
 pushImm -1
 pushImmf 350
 pushImmf 700
 pushImmf 8
 pushImm -1
 pushImmf 0.75
 pushImmf 0.4
 gosub 4, L28688
 pushFromFSp 0
 pushImm 20
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 pushImm 0
 popToSpVal 136
 pushImm 0
 popToSpVal 140
 gosub 4, L725
 popToSpVal 160
 pushImm 0
 popToSpVal 132
 pushImm 0
 popToSpVal 144
 pushImm 0
 popToSpVal 148
 pushImm 0
 popToSpVal 152
 pushFromFSp 0
 pushImm 2
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 sub 
 eqz 
 jz L7694
 pushFromFSpVal 160
 pushImm 28
 add 
 pushImm 1
 memcpy 0
 jmp L7694
```
</details>

