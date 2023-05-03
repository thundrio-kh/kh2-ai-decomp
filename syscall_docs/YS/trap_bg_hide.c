---
---
---
name: trap_bg_hide
---
---
---
category: map
---
---
---
documentation level: untested
---
---
---
push groupNumber ; (int)  (groupNumber to hide)
syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
---
---
---
description: Hides a specific part of the map
---
---
---
decompiled code:
void __fastcall dk::Map::setHideGroup(u_int groupNumber)
/----- (00000000005032C0) ----------------------------------------------------
void __fastcall YS::trap_bg_hide(BD_VALUE_21 *args)
{
  dk::Map::setHideGroup(*(_DWORD *)args);
}
->
/----- (000000000005FC30) ----------------------------------------------------
void __fastcall dk::Map::setHideGroup(u_int groupNumber)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  if ( groupNumber >= 0x40 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "groupNumber < (u_int)GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp",
      108LL,
      "setHideGroup",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp", 108);
  }
  dk::Map::s_groupOnBit &= ~(1LL << groupNumber);
  dk::Octree::hide(groupNumber);
  dk::PointLight::setHideGroup(groupNumber);
  dk::ObjEntry::hide(groupNumber);
  if ( dk::Map::paxInit == 1 )
    ryj::PAX::kill_group((ryj::PAX_161 *const)dk::Map::pax, (int)groupNumber, v7, v6, v5, v4, v3, v2);
}
// 5FC4C: variable 'back_chain' is possibly undefined
// 5FD08: variable 'v7' is possibly undefined
// 5FD08: variable 'v6' is possibly undefined
// 5FD08: variable 'v5' is possibly undefined
// 5FD08: variable 'v4' is possibly undefined
// 5FD08: variable 'v3' is possibly undefined
// 5FD08: variable 'v2' is possibly undefined
// A08ADC: using guessed type char dk::Map::paxInit;
// A08AE0: using guessed type __int64 dk::Map::s_groupOnBit;


---
---
---
appears in:
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\HB16_MS404B\hb16.bdscript
msn\HB16_MS404C\hb16.bdscript
msn\HB16_MS404D\hb16.bdscript
msn\HB24_CONFINE_2\hb24.bdscript
msn\HB24_CONFINE_3\hb24.bdscript
msn\HB25_CONFINE_1\hb25.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\HB25_CONFINE_4\hb25.bdscript
msn\HE05_MS102\he05.bdscript
msn\MU03_MS104\mu03.bdscript
msn\TR04_MS202\tr04.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_BB000\f_bb.bdscript ((F) ??? (BB))
obj\F_BB010\f_bb.bdscript ((F) ??? (BB))
obj\F_BB020\f_bb.bdscript ((F) ??? (BB))
obj\F_BB030\f_bb.bdscript ((F) ??? (BB))
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA020\f_ca.bdscript ((F) Isla de Muerta’s chest’s lid (CA))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_EH000\f_eh.bdscript ((F) Crooked Ascension room (EH))
obj\F_EH010\f_eh.bdscript ((F) Twilight’s View room (EH))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_HB030\f_hb.bdscript ((F) ??? (HB))
obj\F_HB070\f_hb.bdscript ((F) CoR’s droppable spike (HB))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_HB130\f_hb.bdscript ((F) ??? (HB))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM040_00\f_nm.bdscript ((F) Statue (horse) (NM))
obj\F_NM040_10\f_nm.bdscript ((F) Statue (human) (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_WI070\f_wi.bdscript ((F) Toy box (WI))
obj\F_WI080\f_wi.bdscript ((F) Box with stuff (WI))
obj\F_WI090\f_wi.bdscript ((F) Sofa 1 (WI))
obj\F_WI100\f_wi.bdscript ((F) Chair 1 (WI))
obj\F_WI110\f_wi.bdscript ((F) Chair 2 (WI))
obj\F_WI120\f_wi.bdscript ((F) Piano (WI))
obj\F_WI130\f_wi.bdscript ((F) Wardrobe 1 (WI))
obj\F_WI140\f_wi.bdscript ((F) Wardrobe 2 (WI))
obj\F_WI150\f_wi.bdscript ((F) Wardrobe 3 (WI))
obj\F_WI160\f_wi.bdscript ((F) Ceiling lamp (WI))
obj\F_WI170\f_wi.bdscript ((F) Fireplace (WI))
obj\F_WI180\f_wi.bdscript ((F) Chimney (WI))
obj\F_WI190\f_wi.bdscript ((F) Train toy (WI))
obj\F_WI200\f_wi.bdscript ((F) Stool (WI))
obj\F_WI210\f_wi.bdscript ((F) Dog bed (WI))
obj\F_WI220\f_wi.bdscript ((F) Sofa 2 (WI))
obj\F_WI230\f_wi.bdscript ((F) Wall deer trophy (WI))
obj\F_WI240\f_wi.bdscript ((F) Wall lamp (WI))
obj\F_WI250\f_wi.bdscript ((F) Christmas tree (WI))
obj\F_WI260\f_wi.bdscript ((F) Drawer (WI))
obj\F_WI270\f_wi.bdscript ((F) Wardrobe 4 (WI))
obj\F_WI280\f_wi.bdscript ((F) Wardrobe 5 (WI))
obj\F_WI290\f_wi.bdscript ((F) Painting (WI))
obj\F_WI300\f_wi.bdscript ((F) Shelf (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
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
