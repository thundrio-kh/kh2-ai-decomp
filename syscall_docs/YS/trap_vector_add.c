---
---
---
name: trap_vector_add
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
push unk1 ; (unknown)  (pushFromPSp: 112,128,16,160,208,...) (pushFromPSpVal: 0,112,16,32,48,...) (memcpyToSp: 16, 112,16, 128,16, 144,16, 16,16, 160,...) (pushImm: 32,64,80) (add: ) (pushFromFSp: 12,20,4,8) (dup: )
push unk2 ; (unknown)  (pushFromPSpVal: 112,144,16,160,32,...) (pushFromPSp: 112,128,144,16,160,...) (add: ) (pushFromPWp: W384) (pushFromFSp: 16,4,8)
syscall 0, 4 ; trap_vector_add (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6F24) ----------------------------------------------------
void __fastcall YS::trap_vector_add(BD_VALUE_16 *args)
{
  FLOAT *v2; // r6
  const Axa::FVECTOR4 *v3; // r4
  Axa::FVECTOR4 *v4; // r3
  kn::FVector v5; // [sp+70h] [-30h] BYREF
  Axa::FVECTOR4 v6; // [sp+80h] [-20h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v3 = (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4];
  if ( !LS_65_LV_5_0 )
  {
    LS_65_LV_5_0 = 1;
    LS_65_result.z = 0.0;
    LS_65_result.y = 0.0;
    LS_65_result.x = 0.0;
    LS_65_result.w = 1.0;
  }
  v6.x = *v2;
  v6.y = v2[1];
  v6.z = v2[2];
  v6.w = v2[3];
  v4 = Axa::FVECTOR4::operator+=(&v6, v3);
  v5.x = v4->x;
  v5.y = v4->y;
  v5.z = v4->z;
  v5.w = v4->w;
  kn::FVector::operator=(&LS_65_result, &v5);
  *(_DWORD *)args = (unsigned int)&LS_65_result;
}
// 2AB07E8: using guessed type char LS_65_LV_5_0;

//BASIC
---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
magic\blizzard1\bliz.bdscript
magic\LK_BLIZZARD_1\bliz.bdscript
magic\thunder1\thun.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB130\b_bb.bdscript ((B) Thresholder’s possessor?)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
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
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL140\f_al.bdscript ((F) Boxes and rugs (AL))
obj\F_AL150\f_al.bdscript ((F) Piece of stone wall (AL))
obj\F_AL160\f_al.bdscript ((F) Building floor (AL))
obj\F_AL170\f_al.bdscript ((F) Tip of tower (AL))
obj\F_BB090\f_bb.bdscript ((F) ??? (BB))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_HB050\f_hb.bdscript ((F) CoR’s pushing pillar (HB))
obj\F_HB050_23\f_hb.bdscript ((F) CoR’s pushing pillar 2 (HB))
obj\F_HB060\f_hb.bdscript ((F) CoR’s rising pillar (HB))
obj\F_HB100\f_hb.bdscript ((F) ??? (HB))
obj\F_HB140\f_hb.bdscript ((F) Cavern of Remembrance big pushing block (HB))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\F_WI380\f_wi.bdscript ((F) Steamboat with Corner stone in cage (WI))
obj\F_WI380_RTN\f_wi.bdscript ((F) Steamboat with Corner stone in cage (RTN) (WI))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\G_EC129\g_ec.bdscript ()
obj\G_EC130\g_ec.bdscript ()
obj\G_ED120\g_ed.bdscript ()
obj\G_EX220\g_ex.bdscript ()
obj\G_EX220_G\g_ex.bdscript ()
obj\G_EX220_R\g_ex.bdscript ()
obj\G_EX240\g_ex.bdscript ()
obj\G_EX240_G\g_ex.bdscript ()
obj\G_EX240_R\g_ex.bdscript ()
obj\G_EX250_1\g_ex.bdscript ()
obj\G_EX250_1_G\g_ex.bdscript ()
obj\G_EX250_1_R\g_ex.bdscript ()
obj\G_EX260\g_ex.bdscript ()
obj\G_EX260_G\g_ex.bdscript ()
obj\G_EX260_R\g_ex.bdscript ()
obj\G_EX900_COMBAT\g_ex.bdscript ()
obj\G_EX900_COMBAT_HARD\g_ex.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\G_EX900_FLIGHT\g_ex.bdscript ()
obj\G_EX900_FLIGHT_HARD\g_ex.bdscript ()
obj\G_OA100\g_oa.bdscript ()
obj\G_OA200\g_oa.bdscript ()
obj\G_OE160\g_oe.bdscript ()
obj\G_OE180\g_oe.bdscript ()
obj\M_AL020_FIRE\m_al.bdscript ((M) Fiery Globe)
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_FIRE_RAW\m_al.bdscript ((M) Fiery Globe (RAW))
obj\M_AL020_ICEE\m_al.bdscript ((M) Icy Cube)
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
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
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
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
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX510\m_ex.bdscript ((M) Rabid Dog)
obj\M_EX520\m_ex.bdscript ((M) Hook Bat)
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
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
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX620_AL\m_ex.bdscript ((M) Fortuneteller (AL))
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX640\m_ex.bdscript ((M) Hot Rod)
obj\M_EX640_HB\m_ex.bdscript ((M) Mad Ride)
obj\M_EX640_WI\m_ex.bdscript ((M) Hot Rod (WI))
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX660\m_ex.bdscript ((M) Rapid Thruster)
obj\M_EX660_AL\m_ex.bdscript ((M) Rapid Thruster (AL))
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
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM010_BTL\n_cm.bdscript ((N) Larxene (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB550_BOSS\n_hb.bdscript ((N) Cloud (BOSS) (HB))
obj\N_HB550_BTL\n_hb.bdscript ((N) Cloud (BTL) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
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
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX130\p_ex.bdscript ((P) Shadow Roxas)
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_TR010\p_tr.bdscript ((P) ??? (TR))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L1951:
 popToSp 4
 popToSp 0
 pushImmf 100000
 popToSpVal 76
 pushFromFSpVal 88
 jz L2053
 pushFromFSp 0
 gosub 12, L2088
 jz L2010
 pushFromFSpVal 64
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSpVal 32
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromFSp 4
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromFSp 4
 pushFromPSp 16
 gosub 12, L2106
 jmp L2051
