---
---
---
name: trap_mission_information
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushImm: 12935,12936,14073,14074,14144,14155,14278,14422,14423,15191,15192,15193,16135,16136,16137,16138,16139,16750,16838,17056,17057,17058,17059,17062,17323,17324,17353,17354,18108,18109,18199,18200,18688,18689,18956,18957,19210,19303,19348,19349,19393,19404,19405,19544,19545,19546,19569,19570,19571,19572,19586,19587,19589,19590,19592,19593,19601,19602,19603,19604,20541,20693,20697,21365,21366,21367,21368,21369,21370,21371,21372,21373,21565,21566,21623,21625,21626,21627,21628,48003,48004,52174,7746,7747,7748,7749,7750,7751,8037,8077,8079,8081,8133,8305,9927,L19571) (pushFromFSp: 12,4)
syscall 4, 4 ; trap_mission_information (1 in, 0 out)
---
---
---
description: <check dis notes>
---
---
---
decompiled code:
void __fastcall YS::MISSION::ShowInformation(__int64 message_id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F5FE0) ----------------------------------------------------
void __fastcall YS::trap_mission_information(BD_VALUE_20 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::MISSION::ShowInformation(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (00000000004515F0) ----------------------------------------------------
void __fastcall YS::MISSION::ShowInformation(__int64 message_id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4
  const YS::MESSAGE *v29; // r3

  if ( !(_DWORD)message_id )
  {
    a2 = (unsigned int)YS::Current;
    if ( !YS::Current )
    {
      printf(
        (unsigned int)"[%s:%d]",
        (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp",
        606LL,
        a4,
        a5,
        a6,
        a7,
        a8);
      printf((unsigned int)"\x1B[31m** WARNING! ", v14, v13, v12, v11, v10, v9, v8);
      printf((unsigned int)"no mission", v21, v20, v19, v18, v17, v16, v15);
      printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
      return;
    }
    message_id = *(unsigned __int16 *)(*(unsigned int *)((unsigned int)YS::Current + 8LL) + 6LL);
  }
  if ( (int)message_id > 0 )
  {
    v29 = YS::MESSAGE::GetData(message_id, a2, a3, a4, a5, a6, a7, a8);
    dk::INFORMATION::openInformationWindow(v29);
  }
}
// 451638: variable 'v14' is possibly undefined
// 451638: variable 'v13' is possibly undefined
// 451638: variable 'v12' is possibly undefined
// 451638: variable 'v11' is possibly undefined
// 451638: variable 'v10' is possibly undefined
// 451638: variable 'v9' is possibly undefined
// 451638: variable 'v8' is possibly undefined
// 451648: variable 'v21' is possibly undefined
// 451648: variable 'v20' is possibly undefined
// 451648: variable 'v19' is possibly undefined
// 451648: variable 'v18' is possibly undefined
// 451648: variable 'v17' is possibly undefined
// 451648: variable 'v16' is possibly undefined
// 451648: variable 'v15' is possibly undefined
// 451658: variable 'v28' is possibly undefined
// 451658: variable 'v27' is possibly undefined
// 451658: variable 'v26' is possibly undefined
// 451658: variable 'v25' is possibly undefined
// 451658: variable 'v24' is possibly undefined
// 451658: variable 'v23' is possibly undefined
// 451658: variable 'v22' is possibly undefined
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\AL14_MS_O\al14.bdscript
msn\AL14_MS_S\al14.bdscript
msn\CA07_MS105\ca07.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\HB16_MS404B\hb16.bdscript
msn\HB16_MS404C\hb16.bdscript
msn\HB16_MS404D\hb16.bdscript
msn\HB24_CONFINE\hb24.bdscript
msn\HB24_CONFINE_2\hb24.bdscript
msn\HB25_CONFINE_1\hb25.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\HE05_MS102\he05.bdscript
msn\HE_COLOSSEUM\he_c.bdscript
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COLOSSEUM_8_ONLY\he_c.bdscript
msn\HE_COLOSSEUM_8_PP\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_1_10\he_c.bdscript
msn\HE_COL_1_8\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_1\he_c.bdscript
msn\HE_COL_4_10\he_c.bdscript
msn\HE_COL_4_2\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_4\he_c.bdscript
msn\HE_COL_4_5\he_c.bdscript
msn\HE_COL_4_6\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_4_8\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_5\he_c.bdscript
msn\HE_COL_5_10\he_c.bdscript
msn\HE_COL_5_8\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8PP_BOSS\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\HE_COL_8_10\he_c.bdscript
msn\HE_COL_8_25\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
msn\HE_COL_8_45\he_c.bdscript
msn\HE_COL_8_49\he_c.bdscript
msn\HE_COL_8_5\he_c.bdscript
msn\HE_COL_8_50\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
msn\TR02_MS102A\tr02.bdscript
msn\TR02_MS102B\tr02.bdscript
msn\TR02_MS102_FREE\tr02.bdscript
msn\TR07_MS203\tr07.bdscript
msn\WI06_MS102B\wi06.bdscript
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX250\b_ex.bdscript ((?) Xemna’s dragon’s arms (Anchored))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
---
---
---
example usage from msn\AL13_TRAP\al13.bdscript
L182:
 syscall 1, 154 ; trap_status_secure_mode_start (0 in, 0 out)
 pushFromFWp W8
 pushImm 11
 add 
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushImmf 100
 gosub 4, L255
 pushFromFWp W8
 pushImm 1
 add 
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 pushFromFWp W8
 pushImm 1
 sub 
 eqz 
 jz L221
 pushImm 14144
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 jmp L221
