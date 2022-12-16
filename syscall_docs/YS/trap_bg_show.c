---
---
---
name: trap_bg_show
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
push unk1 ; (unknown)  (pushFromFSp: 4,8) (add: ) (pushImm: 0,1,10,11,12,13,14,15,16,17,18,19,2,20,21,22,23,24,25,26,27,28,29,3,30,31,32,33,34,35,36,37,39,4,41,42,43,45,47,49,5,51,6,61,62,63,7,8,9) (pushFromFWp: W4256,W788) (gosub: 12, L20671) (pushFromFSpVal: 132,136,140) (syscall: 1, 39 ; trap_obj_unit_arg (2 in, 1 out))
syscall 1, 37 ; trap_bg_show (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Map::setVisibleGroup(u_int groupNumber)
/----- (00000000005032E8) ----------------------------------------------------
void __fastcall YS::trap_bg_show(BD_VALUE_21 *args)
{
  dk::Map::setVisibleGroup(*(_DWORD *)args);
}
->
/----- (000000000005FD28) ----------------------------------------------------
void __fastcall dk::Map::setVisibleGroup(u_int groupNumber)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( groupNumber >= 0x40 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "groupNumber < (u_int)GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp",
      123LL,
      "setVisibleGroup",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp", 123);
  }
  dk::Map::s_groupOnBit |= 1LL << groupNumber;
  dk::Octree::visible(groupNumber);
  dk::PointLight::setVisibleGroup(groupNumber);
  dk::ObjEntry::show(groupNumber);
  if ( dk::Map::paxInit == 1 )
    ryj::PAX::start_group((ryj::PAX_161 *const)dk::Map::pax, groupNumber, 1, 2, 0, 0LL);
}
// 5FD44: variable 'back_chain' is possibly undefined
// A08ADC: using guessed type char dk::Map::paxInit;
// A08AE0: using guessed type __int64 dk::Map::s_groupOnBit;


---
---
---
appears in:
ard\he03\he_t.bdscript
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\HB16_MS404A\hb16.bdscript
msn\HB16_MS404B\hb16.bdscript
msn\HB16_MS404C\hb16.bdscript
msn\HB16_MS404D\hb16.bdscript
msn\HB24_CONFINE\hb24.bdscript
msn\HB24_CONFINE_2\hb24.bdscript
msn\HB24_CONFINE_3\hb24.bdscript
msn\HB25_CONFINE_1\hb25.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\HB25_CONFINE_4\hb25.bdscript
msn\HE05_MS102\he05.bdscript
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
obj\F_HB070\f_hb.bdscript ((F) CoR’s droppable spike (HB))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_HB130\f_hb.bdscript ((F) ??? (HB))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
---
---
---
example usage from ard\he03\he_t.bdscript
L100:
 popToSp 0
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 pushFromFSp 16
 syscall 0, 89 ; trap_menuflag_check (1 in, 1 out)
 jz L122
 pushFromFSp 8
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 jmp L122
