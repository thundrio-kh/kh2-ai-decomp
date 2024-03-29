---
---
---
name: trap_obj_move_request
---
---
---
category: movement
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push dir ; (kn::FVector)  (A direction vector)
push speed ; (float)  (Speed to travel)
syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
---
---
---
description: Requests the object to move in a direction
---
---
---
decompiled code:
void __fastcall YS::OBJ::move_request(YS::OBJ_133 *const this, const kn::FVector *dir, double speed)
/----- (00000000005065E0) ----------------------------------------------------
void __fastcall YS::trap_obj_move_request(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::move_request(
    (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 506604: variable 'back_chain' is possibly undefined
->
/----- (000000000047144C) ----------------------------------------------------
void __fastcall YS::OBJ::move_request(YS::OBJ_133 *const this, const kn::FVector *dir, double speed)
{
  kn::FVector *v5; // r30

  v5 = (kn::FVector *)(unsigned int)((_DWORD)this + 2176);
  kn::FVector::operator=(v5, dir);
  Axa::FVECTOR4::normalize(v5);
  *(float *)&(*this)[2188] = speed;
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_CA010\f_ca.bdscript ((F) ??? - Something from Black Pearl? (CA))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\M_EX010\m_ex.bdscript ((M) Soldier)
obj\M_EX010_NM\m_ex.bdscript ((M) Soldier (NM))
obj\M_EX010_TR\m_ex.bdscript ((M) Soldier (TR))
obj\M_EX010_WI\m_ex.bdscript ((M) Soldier (WI))
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX870\m_ex.bdscript ((M) Sorcerer v2 - Cubes?)
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L920:
 pushFromFSp 0
 pushFromPSp 48
 pushImm 16
 add 
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 184
 pushImmf 5
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 addf 
 popToSp 184
 pushFromPSp 48
 pushImm 16
 add 
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromFSp 0
 pushFromPSp 48
 pushImm 16
 add 
 pushFromPSp 160
 gosub 52, L2509
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 pushFromPSp 160
 gosub 52, L2509
 pushFromPAi L6877 ; ___ai speed.speed (L6877)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 52, L1889
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 1
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 184
 syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
 halt 
 pushFromPSp 176
 gosub 52, L2555
 drop 
 pushFromFSp 0
 syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 5
 subf 
 infzf 
 jz L1030
 jmp L1049
