---
---
---
name: trap_puts
---
---
---
category: debug
---
---
---
documentation level: complete
---
---
---
push description ; (string)  (A string, should be pushed to the stack using pushFromPAi)
syscall 0, 2 ; trap_puts (1 in, 0 out)
---
---
---
description: Normally does nothing in production game. When running the PC version of the game with this mod (MainMemory/KH2AIDebug), it prints a string to the console that can be opened with F2
---
---
---
decompiled code:

/----- (00000000004B6CE0) ----------------------------------------------------
void __fastcall YS::trap_puts(BD_VALUE_16 *args)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 v8; // r4
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r7
  __int64 v17; // r6
  __int64 v18; // r5
  __int64 v19; // r4

  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
  {
    printf((unsigned int)"\x1B[34m", v8, v7, v6, v5, v4, v3, v2);
    printf(
      (unsigned int)"[%s]%s\n",
      *(unsigned int *)(unsigned int)YS::VM::Current,
      *(unsigned int *)args,
      (unsigned int)YS::VM::Current,
      v12,
      v11,
      v10,
      v9);
    printf((unsigned int)"\x1B[0m", v19, v18, v17, v16, v15, v14, v13);
  }
}
// 4B6D24: variable 'v8' is possibly undefined
// 4B6D24: variable 'v7' is possibly undefined
// 4B6D24: variable 'v6' is possibly undefined
// 4B6D24: variable 'v5' is possibly undefined
// 4B6D24: variable 'v4' is possibly undefined
// 4B6D24: variable 'v3' is possibly undefined
// 4B6D24: variable 'v2' is possibly undefined
// 4B6D44: variable 'v12' is possibly undefined
// 4B6D44: variable 'v11' is possibly undefined
// 4B6D44: variable 'v10' is possibly undefined
// 4B6D44: variable 'v9' is possibly undefined
// 4B6D54: variable 'v19' is possibly undefined
// 4B6D54: variable 'v18' is possibly undefined
// 4B6D54: variable 'v17' is possibly undefined
// 4B6D54: variable 'v16' is possibly undefined
// 4B6D54: variable 'v15' is possibly undefined
// 4B6D54: variable 'v14' is possibly undefined
// 4B6D54: variable 'v13' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC
---
---
---
appears in:
gumimenu\event\gumi.bdscript
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
msn\CA07_MS105\ca07.bdscript
msn\EH14_MS103\ms_l.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103B\mu02.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_BB130\b_bb.bdscript ((B) Thresholder’s possessor?)
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_RTN\rtn_.bdscript ((B) Axel (Scene day he freezes) (RTN))
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
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX170_RTN\rtn_.bdscript ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX280\b_ex.bdscript ((F) Xemnas armor - Saïx’s claymore)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE030_RTN\rtn_.bdscript ((RTN) Hades (HE))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK100_00_RTN\rtn_.bdscript ((RTN) Shenzi)
obj\B_LK100_10_RTN\rtn_.bdscript ((RTN) Banzai)
obj\B_LK100_20_RTN\rtn_.bdscript ((RTN) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU100_RTN\rtn_.bdscript ((RTN) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\B_TR020\b_tr.bdscript ((B) MCP)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_AL090_01\f_al.bdscript ((F) Falling pillar 1 (AL))
obj\F_AL090_02\f_al.bdscript ((F) Falling pillar 2 (AL))
obj\F_AL090_03\f_al.bdscript ((F) Falling pillar 3 (AL))
obj\F_AL100\f_al.bdscript ((F) Sandstorm (AL))
obj\F_AL140\f_al.bdscript ((F) Boxes and rugs (AL))
obj\F_AL150\f_al.bdscript ((F) Piece of stone wall (AL))
obj\F_AL160\f_al.bdscript ((F) Building floor (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_BB090\f_bb.bdscript ((F) ??? (BB))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_BB130\f_bb.bdscript ((F) ??? - Minigame related? (BB))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
obj\F_CA710_RTN\rtn_.bdscript ((F) Jack Sparrow’s compass (RTN))
obj\F_EH000\f_eh.bdscript ((F) Crooked Ascension room (EH))
obj\F_EH010\f_eh.bdscript ((F) Twilight’s View room (EH))
obj\F_EH020\f_eh.bdscript ((F) Big vertical white line (EH))
obj\F_EH030\f_eh.bdscript ((F) Crooked Ascension room’s horizontal columns (EH))
obj\F_EH040\f_eh.bdscript ((F) White and green beam (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_EX210\f_ex.bdscript ((F) Vexen’s Absent Silhouette portal (can’t be used))
obj\F_EX220\f_ex.bdscript ((F) Lexeus’ Absent Silhouette portal (can’t be used))
obj\F_EX230\f_ex.bdscript ((F) Zexion’s Absent Silhouette portal (can’t be used))
obj\F_EX240\f_ex.bdscript ((F) Marluxia’s Absent Silhouette portal (can’t be used))
obj\F_EX250\f_ex.bdscript ((F) Larxene’s Absent Silhouette portal (can’t be used))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
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
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_NM100\f_nm.bdscript ((F) Oogie’s present (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM180\f_nm.bdscript ((F) Present minigame (shooting machine) (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
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
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_TT140\rtn_.bdscript ((F) Dream Sword (TT))
obj\F_TT150\rtn_.bdscript ((F) Dream Shield (TT))
obj\F_TT160\rtn_.bdscript ((F) Dream Rod (TT))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BOSS\f_wi.bdscript ((F) Burning building (BOSS) (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\F_WI070\f_wi.bdscript ((F) Toy box (WI))
obj\F_WI080\f_wi.bdscript ((F) Box with stuff (WI))
obj\F_WI090\f_wi.bdscript ((F) Sofa 1 (WI))
obj\F_WI100\f_wi.bdscript ((F) Chair 1 (WI))
obj\F_WI110\f_wi.bdscript ((F) Chair 2 (WI))
obj\F_WI130\f_wi.bdscript ((F) Wardrobe 1 (WI))
obj\F_WI140\f_wi.bdscript ((F) Wardrobe 2 (WI))
obj\F_WI150\f_wi.bdscript ((F) Wardrobe 3 (WI))
obj\F_WI190\f_wi.bdscript ((F) Train toy (WI))
obj\F_WI200\f_wi.bdscript ((F) Stool (WI))
obj\F_WI210\f_wi.bdscript ((F) Dog bed (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\F_WI380\f_wi.bdscript ((F) Steamboat with Corner stone in cage (WI))
obj\F_WI380_RTN\f_wi.bdscript ((F) Steamboat with Corner stone in cage (RTN) (WI))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX520_HB\m_ex.bdscript ((M) Beffudler)
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX640\m_ex.bdscript ((M) Hot Rod)
obj\M_EX640_HB\m_ex.bdscript ((M) Mad Ride)
obj\M_EX640_WI\m_ex.bdscript ((M) Hot Rod (WI))
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
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\M_EX870\m_ex.bdscript ((M) Sorcerer v2 - Cubes?)
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\M_EX960\m_ex.bdscript ((M) Sorcerer)
obj\M_EX990_RTN\rtn_.bdscript ((M) Dusk (RTN))
obj\M_EX990_RTN_FIXCOLOR\rtn_.bdscript ((M) Dusk (RTN) (FIXCOLOR) (EX))
obj\M_EX990_ZIPPER_RTN\rtn_.bdscript ((P) Dusk (ZIPPER) (RTN) (EX))
obj\N_AL010_RTN\rtn_.bdscript ((N) Magic Carpet (RTN) (AL))
obj\N_AL020_RTN\rtn_.bdscript ((N) Iago (RTN) (AL))
obj\N_AL030_RTN\rtn_.bdscript ((N) Abu (RTN) (AL))
obj\N_AL040_RTN\rtn_.bdscript ((N) Jasmine (RTN) (AL))
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL080_RTN\rtn_.bdscript ((N) Peddler (RTN) (AL))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB010_RTN\rtn_.bdscript ((N) Belle (RTN) (BB))
obj\N_BB010_SIT_RTN\rtn_.bdscript ((N) Belle (sitting) (RTN) (BB))
obj\N_BB020_RTN\rtn_.bdscript ((N) Beast (Prince Outfit) (RTN) (BB))
obj\N_BB040_RTN\rtn_.bdscript ((N) Chip (RTN) (BB))
obj\N_BB050_RTN\rtn_.bdscript ((N) Cogsworth (RTN) (BB))
obj\N_BB050_SAD_RTN\rtn_.bdscript ((N) Cogsworth (SAD) (RTN) (BB))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB060_RTN\rtn_.bdscript ((N) Lumière (RTN) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_BB070_RTN\rtn_.bdscript ((N) Mrs. Potts (RTN) (BB))
obj\N_BB080_RTN\rtn_.bdscript ((N) Wardrobe maid (RTN) (BB))
obj\N_CA010_RTN\rtn_.bdscript ((N) Elizabeth (RTN) (CA))
obj\N_CA010_SAD_RTN\rtn_.bdscript ((N) Elizabeth (SAD) (RTN) (CA))
obj\N_CA020_KAJI_RTN\rtn_.bdscript ((N) Will Turner (KAJI) (RTN) (CA))
obj\N_CA020_RTN\rtn_.bdscript ((N) Will Turner (RTN) (CA))
obj\N_CA020_SIT_RTN\rtn_.bdscript ((N) Will Turner (sitting) (RTN) (CA))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_RTN\rtn_.bdscript ((N) Minnie (RTN) (DC))
obj\N_DC020_RTN\rtn_.bdscript ((N) Daisy (RTN) (DC))
obj\N_DC030_RTN\rtn_.bdscript ((N) Chip (RTN) (DC))
obj\N_DC040_RTN\rtn_.bdscript ((N) Dale (RTN) (DC))
obj\N_DC050_RTN\rtn_.bdscript ((N) Magic Broom (RTN) (DC))
obj\N_EX500_ANGER_RAW_RTN\rtn_.bdscript ((N) Heyner (ANGER) (RAW) (RTN) (EX))
obj\N_EX500_ANGER_RTN\rtn_.bdscript ((N) Heyner (ANGER) (RTN) (EX))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX500_RAW_RTN\rtn_.bdscript ((N) Hayner (RAW) (RTN) (EX))
obj\N_EX500_RTN\rtn_.bdscript ((N) Hayner (RTN) (EX))
obj\N_EX510_RAW_RTN\rtn_.bdscript ((N) Pence (RAW) (RTN) (EX))
obj\N_EX510_RTN\rtn_.bdscript ((N) Pence (RTN) (EX))
obj\N_EX520_RAW_RTN\rtn_.bdscript ((N) Olette (RAW) (RTN) (EX))
obj\N_EX520_RTN\rtn_.bdscript ((N) Olette (RTN) (EX))
obj\N_EX560_RTN\rtn_.bdscript ((N) Kairi (RTN) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX570_RAW_RTN\rtn_.bdscript ((N) Seifer (RAW) (RTN) (EX))
obj\N_EX570_RTN\rtn_.bdscript ((N) Seifer (RTN) (EX))
obj\N_EX580_RAW_RTN\rtn_.bdscript ((N) Raijin (RAW) (RTN) (EX))
obj\N_EX580_RTN\rtn_.bdscript ((N) Raijin (RTN) (EX))
obj\N_EX590_RAW_RTN\rtn_.bdscript ((N) Fujin (RAW) (RTN) (EX))
obj\N_EX590_RTN\rtn_.bdscript ((N) Fujin (RTN) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX600_RAW_RTN\rtn_.bdscript ((N) Setzer (RAW) (RTN) (EX))
obj\N_EX600_RTN\rtn_.bdscript ((N) Setzer (RTN) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX610_RAW_RTN\rtn_.bdscript ((N) Vivi (RAW) (RTN) (EX))
obj\N_EX610_RTN\rtn_.bdscript ((N) Vivi (RTN) (EX))
obj\N_EX620_RTN\rtn_.bdscript ((N) Naminé (RTN) (EX))
obj\N_EX640_MOOGLE_RTN\rtn_.bdscript ((N) Moogle (MOOGLE) (RTN) (EX))
obj\N_EX640_SHOP_RTN\rtn_.bdscript ((N) Moogle (SHOP) (RTN) (EX))
obj\N_EX650_BTL1\tt_a.bdscript ((N) Villager (boy) (BTL1) (EX))
obj\N_EX650_BTL2\tt_a.bdscript ((N) Villager (boy) (BTL2) (EX))
obj\N_EX650_HB_BOY_A_RTN\rtn_.bdscript ((N) Villager (boy) (HB_BOY_A) (RTN) (EX))
obj\N_EX650_HB_ITEM_RTN\rtn_.bdscript ((N) Villager (boy) (HB_ITEM) (RTN) (EX))
obj\N_EX650_HB_PROTECT_RTN\rtn_.bdscript ((N) Villager (boy) (HB_PROTECT) (RTN) (EX))
obj\N_EX650_TT_BOY_A_RTN\rtn_.bdscript ((N) Villager (boy) (TT_BOY_A) (RTN) (EX))
obj\N_EX650_TT_BOY_B_RTN\rtn_.bdscript ((N) Villager (boy) (TT_BOY_B) (RTN) (EX))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX650_TT_ITEM_RTN\rtn_.bdscript ((N) Villager (boy) (TT_ITEM) (RTN) (EX))
obj\N_EX650_TT_PROTECT_RTN\rtn_.bdscript ((N) Villager (boy) (TT_PROTECT) (RTN) (EX))
obj\N_EX660_HB_LADY_A_RTN\rtn_.bdscript ((N) Villager (lady) (HB_LADY_A) (RTN) (EX))
obj\N_EX660_TT_LADY_A_RTN\rtn_.bdscript ((N) Villager (lady) (TT_LADY_A) (RTN) (EX))
obj\N_EX670_BTL1\tt_a.bdscript ((N) Villager (girl) (BTL1) (EX))
obj\N_EX670_BTL2\tt_a.bdscript ((N) Villager (girl) (BTL2) (EX))
obj\N_EX670_HB_GIRL_A_RTN\rtn_.bdscript ((N) Villager (girl) (HB_GIRL_A) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX670_TT_GIRL_A_RTN\rtn_.bdscript ((N) Villager (girl) (TT_GIRL_A) (RTN) (EX))
obj\N_EX670_TT_GIRL_B_RTN\rtn_.bdscript ((N) Villager (girl) (TT_GIRL_B) (RTN) (EX))
obj\N_EX680_BTL1\tt_a.bdscript ((N) Villager (man) (BTL1) (EX))
obj\N_EX680_BTL2\tt_a.bdscript ((N) Villager (man) (BTL2) (EX))
obj\N_EX680_HB_ITEM_RTN\rtn_.bdscript ((N) Villager (man) (HB_ITEM) (RTN) (EX))
obj\N_EX680_HB_MAN_A_RTN\rtn_.bdscript ((N) Villager (man) (HB_MAN_A) (RTN) (EX))
obj\N_EX680_HB_MAN_B_RTN\rtn_.bdscript ((N) Villager (man) (HB_MAN_B) (RTN) (EX))
obj\N_EX680_HB_PROTECT_RTN\rtn_.bdscript ((N) Villager (man) (HB_PROTECT) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX680_TT_ITEM_RTN\rtn_.bdscript ((N) Villager (man) (TT_ITEM) (RTN) (EX))
obj\N_EX680_TT_MAN_A_RTN\rtn_.bdscript ((N) Villager (man) (TT_MAN_A) (RTN) (EX))
obj\N_EX680_TT_MAN_B_RTN\rtn_.bdscript ((N) Villager (man) (TT_MAN_B) (RTN) (EX))
obj\N_EX680_TT_PROTECT_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_PROTECT) (RAW) (RTN) (EX))
obj\N_EX680_TT_PROTECT_RTN\rtn_.bdscript ((N) Villager (man) (TT_PROTECT) (RTN) (EX))
obj\N_EX680_TT_PRT_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_PRT) (RAW) (RTN) (EX))
obj\N_EX680_TT_REFEREE_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_REFEREE) (RAW) (RTN) (EX))
obj\N_EX680_TT_REFEREE_RTN\rtn_.bdscript ((N) Villager (man) (TT_REFEREE) (RTN) (EX))
obj\N_EX680_TT_REF_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_REF) (RAW) (RTN) (EX))
obj\N_EX690_BTL1\tt_a.bdscript ((N) Villager (woman) (BTL1) (EX))
obj\N_EX690_BTL2\tt_a.bdscript ((N) Villager (woman) (BTL2) (EX))
obj\N_EX690_HB_ACCE_RTN\rtn_.bdscript ((N) Villager (woman) (HB_ACCE) (RTN) (EX))
obj\N_EX690_HB_WOMAN_A_RTN\rtn_.bdscript ((N) Villager (man) (HB_WOMAN_A) (RTN) (EX))
obj\N_EX690_HB_WOMAN_B_RTN\rtn_.bdscript ((N) Villager (man) (HB_WOMAN_B) (RTN) (EX))
obj\N_EX690_TT_ACCE_RAW_RTN\rtn_.bdscript ((N) Villager (woman) (TT_ACCE) (RAW) (RTN) (EX))
obj\N_EX690_TT_ACCE_RTN\rtn_.bdscript ((N) Villager (woman) (TT_ACCE) (RTN) (EX))
obj\N_EX690_TT_ACC_RAW_RTN\rtn_.bdscript ((N) Villager (woman) (TT_ACC) (RAW) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript ((N) Villager (woman) (TT_TUTOR) (RTN) (EX))
obj\N_EX690_TT_WOMAN_A_RTN\rtn_.bdscript ((N) Villager (woman) (TT_WOMAN_A) (RTN) (EX))
obj\N_EX690_TT_WOMAN_B_RTN\rtn_.bdscript ((N) Villager (woman) (TT_WOMAN_B) (RTN) (EX))
obj\N_EX700_HB_WEAPON_RTN\rtn_.bdscript ((N) Villager (gentleman) (HB_WEAPON) (RTN) (EX))
obj\N_EX700_TT_GENTL_A_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_GENTL_A) (RTN) (EX))
obj\N_EX700_TT_GENTL_B_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_GENTL_B) (RTN) (EX))
obj\N_EX700_TT_SPONSOR_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_SPONSOR) (RTN) (EX))
obj\N_EX700_TT_SPO_RAW_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_SPO) (RAW) (RTN) (EX))
obj\N_EX700_TT_SPO_RW2_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_SPO) (RW2) (RTN) (EX))
obj\N_EX700_TT_WEAPON_RAW_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_WEAPON) (RAW) (RTN) (EX))
obj\N_EX700_TT_WEAPON_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_WEAPON) (RTN) (EX))
obj\N_EX700_TT_WPN_RAW_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_WPN) (RAW) (RTN) (EX))
obj\N_EX710_HB_OLD_F_A_RTN\rtn_.bdscript ((N) Villager (old woman) (HB_OLD_F_A) (RTN) (EX))
obj\N_EX710_TT_OLD_F_A_RTN\rtn_.bdscript ((N) Villager (old man) (TT_OLD_F_A) (RTN) (EX))
obj\N_EX710_TT_SWEETS_RAW_RTN\rtn_.bdscript ((N) Villager (old woman) (TT_SWEETS) (RAW) (RTN) (EX))
obj\N_EX710_TT_SWEETS_RTN\rtn_.bdscript ((N) Villager (old woman) (TT_SWEETS) (RTN) (EX))
obj\N_EX710_TT_SWT_RAW_RTN\rtn_.bdscript ((N) Villager (old woman) (TT_SWT) (RAW) (RTN) (EX))
obj\N_EX720_RTN\rtn_.bdscript ((N) Dog (RTN))
obj\N_EX730_RTN\rtn_.bdscript ((N) Cat (RTN))
obj\N_EX730_TUTORIAL_RTN\rtn_.bdscript ((N) Cat (TUTORIAL) (RTN))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX760_RTN\rtn_.bdscript ((N) Pete (RTN) (EX))
obj\N_EX810_HB_OLD_M_A_RTN\rtn_.bdscript ((N) Villager (old man) (HB_OLD_M_A) (RTN) (EX))
obj\N_EX810_TT_OLD_M_A_RTN\rtn_.bdscript ((N) Villager (old man) (TT_OLD_M_A) (RTN) (EX))
obj\N_EX900_RTN\rtn_.bdscript ((N) Riku (Ansem form) (RTN) (EX))
obj\N_HB010_RTN\rtn_.bdscript ((N) Scrooge (RTN) (HB))
obj\N_HB020_DEWEY_RTN\rtn_.bdscript ((N) Dewey (RTN) (HB))
obj\N_HB020_HUEY_RTN\rtn_.bdscript ((N) Huey (RTN) (HB))
obj\N_HB020_LOUIE_RTN\rtn_.bdscript ((N) Louie (RTN) (HB))
obj\N_HB030_RTN\rtn_.bdscript ((N) Merlin (RTN) (HB))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB530_RTN\rtn_.bdscript ((N) Squall / Leon (RTN) (HB))
obj\N_HB540_RTN\rtn_.bdscript ((N) Cid (RTN) (HB))
obj\N_HB540_SIT_RTN\rtn_.bdscript ((N) Cid (sitting) (RTN) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
obj\N_HB550_RTN\rtn_.bdscript ((N) Cloud (RTN) (HB))
obj\N_HB550_STAND_RTN\rtn_.bdscript ((N) Cloud (STAND) (RTN) (HB))
obj\N_HB560_RTN\rtn_.bdscript ((N) Aerith (RTN) (HB))
obj\N_HB570_BTL2\n_hb.bdscript ((N) Tifa (BTL2) (HB))
obj\N_HB570_RTN\rtn_.bdscript ((N) Tifa (RTN) (HB))
obj\N_HB580_BOSS\n_hb.bdscript ((N) Yuffie (BOSS) (HB))
obj\N_HB580_BTL\n_hb.bdscript ((N) Yuffie (BTL) (HB))
obj\N_HB580_BTL2\n_hb.bdscript ((N) Yuffie (BTL2) (HB))
obj\N_HB580_RTN\rtn_.bdscript ((N) Yuffie (RTN) (HB))
obj\N_HB590_RTN\rtn_.bdscript ((N) Sephiroth (RTN) (HB))
obj\N_HB600_RTN\rtn_.bdscript ((N) Yuna (RTN) (HB))
obj\N_HB610_RTN\rtn_.bdscript ((N) Rikku (RTN) (HB))
obj\N_HB620_RTN\rtn_.bdscript ((N) Paine (RTN) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_HE010_RTN\rtn_.bdscript ((N) Hercules (RTN) (HE))
obj\N_HE010_SIT_RTN\rtn_.bdscript ((N) Hercules (sitting) (RTN) (HE))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\N_HE020_MENU_RTN\rtn_.bdscript ((N) Phil (MENU) (RTN) (HE))
obj\N_HE020_RTN\rtn_.bdscript ((N) Phil (RTN) (HE))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\N_HE030_RTN\rtn_.bdscript ((N) Megara (RTN) (HE))
obj\N_HE040_RTN\rtn_.bdscript ((N) Pegasus (RTN) (HE))
obj\N_HE050_RTN\rtn_.bdscript ((N) Pain (RTN) (HE))
obj\N_HE060_RTN\rtn_.bdscript ((N) Panic (RTN) (HE))
obj\N_LK010_RTN\rtn_.bdscript ((N) Timon (RTN) (LK))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
obj\N_LK020_RTN\rtn_.bdscript ((N) Pumba (RTN) (LK))
obj\N_LK030_RTN\rtn_.bdscript ((N) Nala (RTN) (LK))
obj\N_LK050_RTN\rtn_.bdscript ((N) Lioness (RTN) (LK))
obj\N_LK120_RTN\rtn_.bdscript ((N) Rafiki (RTN) (LK))
obj\N_LM010_RTN\rtn_.bdscript ((N) Donald (RTN) (LM))
obj\N_LM020_RTN\rtn_.bdscript ((N) Goofy (RTN) (LM))
obj\N_LM030_RTN\rtn_.bdscript ((N) Ariel (RTN) (LM))
obj\N_LM040_RTN\rtn_.bdscript ((N) Poseidon (RTN) (LM))
obj\N_LM050_RTN\rtn_.bdscript ((N) Sebastian (RTN) (LM))
obj\N_LM060_RTN\rtn_.bdscript ((N) Flounder (RTN) (LM))
obj\N_MU010_RTN\rtn_.bdscript ((N) Li Shang (RTN) (MU))
obj\N_MU020_RTN\rtn_.bdscript ((N) Yao (RTN) (MU))
obj\N_MU030_RTN\rtn_.bdscript ((N) Chien-Po (RTN) (MU))
obj\N_MU040_RTN\rtn_.bdscript ((N) Ling (RTN) (MU))
obj\N_MU050_RTN\rtn_.bdscript ((N) Emperor of China (RTN) (MU))
obj\N_MU060_RTN\rtn_.bdscript ((N) Chinese Soldier 1 (RTN) (MU))
obj\N_MU070_RTN\rtn_.bdscript ((N) Chinese Soldier 2 (RTN) (MU))
obj\N_NM010_RTN\rtn_.bdscript ((N) Sally (RTN) (NM))
obj\N_NM010_SIT_RTN\rtn_.bdscript ((N) Sally (sitting) (RTN) (NM))
obj\N_NM020_RTN\rtn_.bdscript ((N) Dr. Finkelstein (RTN) (NM))
obj\N_NM030_RTN\rtn_.bdscript ((N) Zero (RTN) (NM))
obj\N_NM040_RTN\rtn_.bdscript ((N) The Mayor (RTN) (NM))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_RTN\rtn_.bdscript ((N) Lock (RTN) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_RTN\rtn_.bdscript ((N) Shock (RTN) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_RTN\rtn_.bdscript ((N) Barrel (RTN) (NM))
obj\N_NM090_RTN\rtn_.bdscript ((N) Santa Claus (RTN) (NM))
obj\N_NM100_RTN\rtn_.bdscript ((N) Elf (male) (RTN) (NM))
obj\N_NM110_RTN\rtn_.bdscript ((N) Elf (female) (RTN) (NM))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
obj\N_PO010_RTN\rtn_.bdscript ((N) Pooh (RTN) (PO))
obj\N_PO010_SIT_RTN\rtn_.bdscript ((N) Pooh (sitting) (RTN) (PO))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO020_RTN\rtn_.bdscript ((N) Tigger (RTN) (PO))
obj\N_PO030_AIR_RTN\rtn_.bdscript ((N) Piglet (AIR) (RTN) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO030_RTN\rtn_.bdscript ((N) Pigglet (RTN) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO040_RTN\rtn_.bdscript ((N) Eeyore (RTN) (PO))
obj\N_PO050_RTN\rtn_.bdscript ((N) Rabbit (RTN) (PO))
obj\N_PO060_RTN\rtn_.bdscript ((N) Owl (RTN) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\N_PO070_RTN\rtn_.bdscript ((N) Roo (RTN) (PO))
obj\N_PO080_RTN\rtn_.bdscript ((N) Kanga (RTN) (PO))
obj\N_PO090_RTN\rtn_.bdscript ((N) Gopher (RTN) (PO))
obj\N_PO100_RTN\rtn_.bdscript ((N) Kanga & Roo (RTN) (PO))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\N_TT010_RTN\rtn_.bdscript ((N) Yen Sid (RTN) (TT))
obj\N_TT010_SIT_RTN\rtn_.bdscript ((N) Yen Sid (sitting) (RTN) (TT))
obj\N_TT020_RTN\rtn_.bdscript ((N) Flora (RTN) (TT))
obj\N_TT030_RTN\rtn_.bdscript ((N) Fauna (RTN) (TT))
obj\N_TT040_RTN\rtn_.bdscript ((N) Merryweather (RTN) (TT))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\N_WI010_RTN\rtn_.bdscript ((N) Pete (captain) (RTN) (WI))
obj\N_WI020_RTN\rtn_.bdscript ((N) Horace (RTN) (WI))
obj\N_WI030_RTN\rtn_.bdscript ((N) Clarabelle (RTN) (WI))
obj\N_WI040_RTN\rtn_.bdscript ((N) Clara (RTN) (WI))
obj\P_AL000_RTN\rtn_.bdscript ((P) Aladdin (RTN) (AL))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_BB000_RTN\rtn_.bdscript ((N) ??? (RTN) (BB))
obj\P_CA000_KAJI_BP_RTN\rtn_.bdscript ((P) Jack Sparrow steering ship (Black Pearl) (RTN) (CA))
obj\P_CA000_KAJI_IS_RTN\rtn_.bdscript ((P) Jack Sparrow steering ship (Interceptor) (RTN) (CA))
obj\P_CA000_KAJI_RTN\rtn_.bdscript ((P) Jack Sparrow (KAJI) (RTN) (CA))
obj\P_CA000_KAJI_SKL_RTN\rtn_.bdscript ((P) Jack Sparrow stearing ship (Skelleton) (RTN) (CA))
obj\P_CA000_RTN\rtn_.bdscript ((P) Jack Sparrow (RTN))
obj\P_CA000_SKL_RTN\rtn_.bdscript ((P) Jack Sparrow (skeleton) (RTN))
obj\P_CA000_SK_RTN\rtn_.bdscript ()
obj\P_EH000_RTN\rtn_.bdscript ((P) Riku (RTN))
obj\P_EX020_NM_RTN\rtn_.bdscript ((P) Donald (NM) (RTN))
obj\P_EX020_NOBG_RTN\rtn_.bdscript ((P) Donald (NOBG) (RTN) (EX))
obj\P_EX020_RTN\rtn_.bdscript ((N) Donald (RTN))
obj\P_EX020_TR_RTN\rtn_.bdscript ((P) Donald (TR) (RTN))
obj\P_EX020_XM_RTN\rtn_.bdscript ((P) Donald (XM) (RTN))
obj\P_EX030_NM_RTN\rtn_.bdscript ((P) Goofy (NM) (RTN))
obj\P_EX030_NOBG_RTN\rtn_.bdscript ((P) Goofy (NOBG) (RTN) (EX))
obj\P_EX030_RTN\rtn_.bdscript ((N) Goofy (RTN))
obj\P_EX030_TR_RTN\rtn_.bdscript ((P) Goofy (TR) (RTN))
obj\P_EX030_XM_RTN\rtn_.bdscript ((P) Goofy (XM) (RTN))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX210_RTN\rtn_.bdscript ((P) Mickey (coat) (RTN))
obj\P_EX220_RTN\rtn_.bdscript ((P) Mickey (RTN))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_HE000_RTN\rtn_.bdscript ((P) Auron (RTN))
obj\P_LK000_RTN\rtn_.bdscript ((P) Simba (RTN))
obj\P_LK020_RTN\rtn_.bdscript ((P) Donald (RTN) (LK))
obj\P_LK030_RTN\rtn_.bdscript ((P) Goofy (RTN) (LK))
obj\P_MU000_RTN\rtn_.bdscript ((P) Mulan (RTN))
obj\P_MU010_RTN\rtn_.bdscript ((P) Ping (RTN))
obj\P_NM000_RTN\rtn_.bdscript ((P) Jack Skellington (RTN))
obj\P_NM000_SANTA_RTN\rtn_.bdscript ((P) Jack Skellington (XM) (RTN))
obj\P_TR000_RTN\rtn_.bdscript ((P) Tron (RTN))
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
obj\P_WI020_RTN\rtn_.bdscript ((P) Donald (WI) (RTN))
obj\P_WI030_RTN\rtn_.bdscript ((P) Goofy (WI) (RTN))
obj\W_EX010_U0_RTN\rtn_.bdscript ((W) Struggle Hammer (RTN))
obj\W_EX010_V0_RTN\rtn_.bdscript ((W) Struggle Wand (RTN))
obj\W_EX010_W0_RTN\rtn_.bdscript ((W) Struggle Sword (RTN))
---
---
---
example usage from gumimenu\event\gumi.bdscript
L19:
 popToSp 0
 pushFromFSp 0
 gosub 8, L382
 pushImm 0
 popToSp 12
 pushImm 0
 popToSp 16
 pushImmf 0
 popToSp 8
 pushImmf 0
 popToSp 4
 pushFromPAi L2470 ; ___ai main (L2470)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
