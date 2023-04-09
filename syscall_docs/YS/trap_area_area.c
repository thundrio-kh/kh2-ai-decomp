---
---
---
name: trap_area_area
---
---
---
category: mapinfo
---
---
---
documentation level: untested
---
---
---
syscall 1, 24 ; trap_area_area (0 in, 1 out)
pop area ; (int) (The index for the current map number) 
---
---
---
description: Returns the number representing the current map (ie for ca03 it would return 3)
---
---
---
decompiled code:

/----- (0000000000502ED8) ----------------------------------------------------
void __fastcall YS::trap_area_area(BD_VALUE_21 *args)
{
  *(_DWORD *)args = AREA::Current.Area;
}

//BASIC
---
---
---
appears in:
msn\HE00_MS104B\he00.bdscript
msn\HE02_MS104C\he02.bdscript
msn\HE02_MS104D\he02.bdscript
msn\SHIP_BATTLE\ca_s.bdscript
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\M_EX120\m_ex.bdscript ((M) Emerald Blues)
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX120_NM\m_ex.bdscript ((M) Emerald Blues (NM))
obj\M_EX120_TR\m_ex.bdscript ((M) Emerald Blues (TR))
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
---
---
---
example usage from msn\HE00_MS104B\he00.bdscript
L214:
 pushImm 6
 pushImm 176
 syscall 2, 21 ; trap_teamwork_alloc (2 in, 1 out)
 popToWp W0
 pushFromFWp W0
 fetchValue 0
 eqz 
 jz L637
 syscall 1, 23 ; trap_area_world (0 in, 1 out)
 pushImm 6
 sub 
 eqz 
 dup 
 jz L249
 syscall 1, 24 ; trap_area_area (0 in, 1 out)
 pushImm 2
 sub 
 eqz 
 eqzv 
