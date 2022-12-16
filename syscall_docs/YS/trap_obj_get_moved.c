---
---
---
name: trap_obj_get_moved
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
push unk1 ; (unknown)  (pushFromFSp: 0,4,8) (add: ) (pushFromPSpVal: 256) (pushFromPSp: 176,32,48,64) (pushFromPWp: W364)
syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000005046F8) ----------------------------------------------------
void __fastcall YS::trap_obj_get_moved(BD_VALUE_21 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  if ( !LS_475_LV_56 )
  {
    LS_475_LV_56 = 1;
    LS_475_v.z = 0.0;
    LS_475_v.y = 0.0;
    LS_475_v.x = 0.0;
    LS_475_v.w = 1.0;
  }
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
  kn::FVector::operator=(&LS_475_v, (const kn::FVector *)(unsigned int)(*(_DWORD *)(v2 + 4) + 2144));
  *(_DWORD *)args = (unsigned int)&LS_475_v;
}
// 504768: variable 'back_chain' is possibly undefined
// 2B75EC8: using guessed type char LS_475_LV_56;

//BASIC
---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\simba\limi.bdscript
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_NM100\f_nm.bdscript ((F) Oogie’s present (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
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
 pushFromPAi L6877 ; ___ai 'speed.speed' (L6877)
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
