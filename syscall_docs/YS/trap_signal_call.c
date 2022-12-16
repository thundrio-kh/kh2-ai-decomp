---
---
---
name: trap_signal_call
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
push unk1 ; (unknown)  (pushImm: 10,11,12,130,15,152,153,154,155,159,160,174,4,7,75,8,82,83,9,92,93,94,96) (pushFromFSp: 0,4) (pushFromPWp: W0)
push unk2 ; (unknown)  (pushImm: -1,0) (syscall: 1, 144 ; trap_obj_serial (1 in, 1 out))
syscall 1, 41 ; trap_signal_call (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::SIGNAL::Call(int signal, int arg)
/----- (0000000000503854) ----------------------------------------------------
void __fastcall YS::trap_signal_call(BD_VALUE_21 *args)
{
  YS::SIGNAL::Call(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000049B708) ----------------------------------------------------
bool __fastcall YS::SIGNAL::Call(int signal, int arg)
{
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 v10; // r5
  __int64 v11; // r4
  __int64 v12; // r29

  if ( YS::CHECK_CACHEBUFF::IsExec() )
    return 0LL;
  YS::SIGNAL::ClearReserve(signal);
  v12 = 1LL;
  if ( signal <= 101 )
  {
    if ( signal <= 86 )
    {
      if ( signal != 79 && signal != 70 && signal != 22 )
      {
        if ( signal != 19 )
          goto LABEL_25;
        goto LABEL_23;
      }
LABEL_24:
      Tz::SubMenu::StartBySignal(signal);
      return v12;
    }
    if ( signal > 99 || signal <= 89 || signal == 98 )
      goto LABEL_24;
LABEL_25:
    if ( signal > 8 )
    {
      if ( signal == 130 )
        goto LABEL_29;
    }
    else if ( signal > 7 )
    {
LABEL_29:
      if ( arg )
        YS::SIGNAL::LastGimmick = (unsigned int)YS::OBJ::SearchBySerial(arg);
      goto _noname_;
    }
_noname_:
    YS::UNITSCRIPT::Signal(signal, arg);
    YS::OBJ::Signal(signal, arg);
    return YS::SIGNAL_HOOK::SignalCall(signal, arg);
  }
  if ( signal > 117 )
  {
    if ( signal <= 130 )
    {
      if ( signal > 128 )
      {
        if ( signal <= 129 )
          goto LABEL_24;
      }
      else if ( signal <= 118 )
      {
        goto LABEL_24;
      }
      goto LABEL_25;
    }
    if ( signal > 133 && signal != 138 )
      goto LABEL_25;
  }
LABEL_23:
  SHOP::StartMenu(signal, v11, v10, v9, v8, v7, v6, v5);
  return v12;
}
// 49B7E0: variable 'v11' is possibly undefined
// 49B7E0: variable 'v10' is possibly undefined
// 49B7E0: variable 'v9' is possibly undefined
// 49B7E0: variable 'v8' is possibly undefined
// 49B7E0: variable 'v7' is possibly undefined
// 49B7E0: variable 'v6' is possibly undefined
// 49B7E0: variable 'v5' is possibly undefined
// 2AACA60: using guessed type int YS::SIGNAL::LastGimmick;


---
---
---
appears in:
ard\al09\al09.bdscript
ard\es00\es_s.bdscript
ard\es00\es_u.bdscript
msn\TT04_MS00\tt04.bdscript
msn\TT04_MS01\tt04.bdscript
msn\TT04_MS02\tt04.bdscript
msn\TT05_MS401\ms_s.bdscript
msn\TT05_MS402\ms_s.bdscript
msn\TT05_MS405\ms_s.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT32_MS302\tt32.bdscript
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_AL030\f_al.bdscript ((F) ??? (AL))
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\F_HE020_A1\f_he.bdscript ((F) Rock 1 (grey) (HE))
obj\F_HE020_A2\f_he.bdscript ((F) Rock 2 (grey) (HE))
obj\F_HE020_B1\f_he.bdscript ((F) Rock 1 (green) (HE))
obj\F_HE020_B2\f_he.bdscript ((F) Rock 2 (green) (HE))
obj\F_HE020_C1\f_he.bdscript ((F) Rock 1 (blue) (HE))
obj\F_HE020_C2\f_he.bdscript ((F) Rock 2 (blue) (HE))
obj\F_HE020_PETE\f_he.bdscript ((F) Falling boulder (Pete battle) (HE))
obj\F_HE020_PO\f_he.bdscript ((F) Falling crystal (PO))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT030\f_tt.bdscript ((F) Cargo Climb’s cart (TT))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
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
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX500_MONEY_RTN\n_ex.bdscript ((N) Hayner (MONEY) (RTN) (EX))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
---
---
---
example usage from ard\al09\al09.bdscript
L72:
 jz L84
 pushImm 9
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 jmp L84
