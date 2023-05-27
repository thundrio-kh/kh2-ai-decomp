---
---
---
name: trap_damage_is_reaction
---
---
---
category: damage
---
---
---
documentation level: untested
---
---
---
push damage ; (YS::DAMAGE_5 *)  (An object representing damage)
syscall 2, 8 ; trap_damage_is_reaction (1 in, 1 out)
pop shouldreact ; (bool) 
---
---
---
description: Checks if damage from an attack should be reacted to, which it is as long as the reaction type is not 0 or 1
---
---
---
decompiled code:
__int64 __fastcall YS::DAMAGE::GetReactionType(__int64 reaction)
/----- (00000000004F407C) ----------------------------------------------------
void __fastcall YS::trap_damage_is_reaction(BD_VALUE_19 *args)
{
  int v2; // r3
  BOOL v3; // r4

  v2 = YS::DAMAGE::GetReactionType(*(unsigned __int8 *)(*(unsigned int *)args + 0x26LL));
  v3 = v2 <= -1 || v2 > 1;
  *(_DWORD *)args = v3;
}

/* Note the following is a python rewriting of GetReactionType

def YS::DAMAGE::GetReactionType(reaction):
  if reaction < 0 or reaction > 18:
    raiseError()
  if reaction in [1, 12]:
    return 1
  if reaction in [3, 6, 8, 10, 13, 16, 18]:
    return 3
  if reaction in [4, 9]:
    return 4

  // 0 2 5 7 11 14 15 17 all return the input 
  return reaction;
}

*/

->
/----- (0000000000422060) ----------------------------------------------------
__int64 __fastcall YS::DAMAGE::GetReactionType(__int64 reaction)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( (int)reaction > 8 )
  {
    if ( (int)reaction > 13 )
    {
      if ( (int)reaction > 16 )
      {
        if ( (int)reaction > 17 )
        {
          if ( (int)reaction > 18 )
          {
LABEL_32:
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "0",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\damage.cpp",
              109LL,
              "GetReactionType",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\damage.cpp", 109);
            return reaction;
          }
          return 3LL;
        }
      }
      else
      {
        if ( (int)reaction <= 14 )
          return reaction;
        if ( (int)reaction > 15 )
          return 3LL;
      }
    }
    else if ( (int)reaction > 10 )
    {
      if ( (int)reaction > 11 )
      {
        if ( (int)reaction > 12 )
          return 3LL;
        return 1LL;
      }
    }
    else if ( (int)reaction > 9 )
    {
      return 3LL;
    }
    return 4LL;
  }
  if ( (int)reaction > 3 )
  {
    if ( (int)reaction > 5 )
    {
      if ( (int)reaction <= 6 || (int)reaction > 7 )
        return 3LL;
    }
    else if ( (int)reaction > 4 )
    {
      return reaction;
    }
    return 4LL;
  }
  if ( (int)reaction <= 0 )
  {
    if ( (int)reaction > -1 )
      return reaction;
    goto LABEL_32;
  }
  if ( (int)reaction <= 1 )
    return 1LL;
  if ( (int)reaction > 2 )
    return 3LL;
  return reaction;
}
// 422168: variable 'back_chain' is possibly undefined

---
---
---
appears in:
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\F_AL080\f_al.bdscript ((F) ??? (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_CA030_DARK\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA030_LIGHT\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA040\f_ca.bdscript ((F) Anchor (CA))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_NM100\f_nm.bdscript ((F) Oogie’s present (NM))
obj\F_NM110\f_nm.bdscript ((F) Oogie’s bag (NM))
obj\F_NM160\f_nm.bdscript ((F) Lever (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\G_EX250_EH\g_ex.bdscript ()
obj\M_AL020_FIRE\m_al.bdscript ((M) Fiery Globe)
obj\M_AL020_FIRE_RAW\m_al.bdscript ((M) Fiery Globe (RAW))
obj\M_AL020_ICEE\m_al.bdscript ((M) Icy Cube)
obj\M_AL020_ICEE_RAW\m_al.bdscript ((M) Icy Cube (RAW))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
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
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX120\m_ex.bdscript ((M) Emerald Blues)
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX120_NM\m_ex.bdscript ((M) Emerald Blues (NM))
obj\M_EX120_TR\m_ex.bdscript ((M) Emerald Blues (TR))
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX520\m_ex.bdscript ((M) Hook Bat)
obj\M_EX520_HB\m_ex.bdscript ((M) Beffudler)
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX570\m_ex.bdscript ((M) Assault Rider)
obj\M_EX580\m_ex.bdscript ((M) Nightwalker)
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX640\m_ex.bdscript ((M) Hot Rod)
obj\M_EX640_HB\m_ex.bdscript ((M) Mad Ride)
obj\M_EX640_WI\m_ex.bdscript ((M) Hot Rod (WI))
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX660\m_ex.bdscript ((M) Rapid Thruster)
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX660_WI\m_ex.bdscript ((M) Rapid Thruster (WI))
obj\M_EX660_WI_RAW\m_ex.bdscript ()
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX700\m_ex.bdscript ((M) Mole Driller)
obj\M_EX700_NM\m_ex.bdscript ((M) Mole Driller (NM))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\M_EX790\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_CHRISTMAS\m_ex.bdscript ((M) Toy Soldier)
obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript ((M) Toy Soldier (NM))
obj\M_EX790_HALLOWEEN\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript ((M) Graveyard (NM))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX930\m_ex.bdscript ((M) Dancer)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\M_EX960\m_ex.bdscript ((M) Sorcerer)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
obj\N_HB570_BOSS\n_hb.bdscript ((N) Tifa (BOSS) (HB))
obj\N_HB570_BTL\n_hb.bdscript ((N) Tifa (BTL) (HB))
obj\N_HB570_BTL2\n_hb.bdscript ((N) Tifa (BTL2) (HB))
obj\N_HB580_BOSS\n_hb.bdscript ((N) Yuffie (BOSS) (HB))
obj\N_HB580_BTL\n_hb.bdscript ((N) Yuffie (BTL) (HB))
obj\N_HB580_BTL2\n_hb.bdscript ((N) Yuffie (BTL2) (HB))
obj\N_HB590_BTL\n_hb.bdscript ((N) Sephiroth (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX130\p_ex.bdscript ((P) Shadow Roxas)
obj\P_EX230\p_ex.bdscript ((P) Mickey (with Keyblade))
---
---
---
example usage from obj\B_AL100_1ST\b_al.bdscript
L2139:
 pushFromFSp 4
 syscall 2, 8 ; trap_damage_is_reaction (1 in, 1 out)
 jz L2167
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 0
 pushFromPAi L10834 ; ___ai 'mode_revenge_boss' (L10834)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2167
