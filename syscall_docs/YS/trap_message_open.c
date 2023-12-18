---
---
---
name: trap_message_open
---
---
---
category: menu
---
---
---
documentation level: untested
---
---
---
push message_id ; (int)  (id of a message, looked up in the associated msg file)
push priority ; (int)  (only a value of 0 is used in the game)
syscall 1, 32 ; trap_message_open (2 in, 1 out)
pop window ; (YS::WINDOW_8 *) (a window object)
---
---
---
description: Opens a scrolling text window in the top left of the screen
---
---
---
decompiled code:
void __fastcall YS::WINDOW_BALLOON::WINDOW_BALLOON(YS::WINDOW_BALLOON_0 *const this, __int64 message_id, __int64 priority)
void __fastcall YS::WINDOW_OBJ2D::WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this, YS::WINDOW_8 *window)
/----- (00000000005031B4) ----------------------------------------------------
void __fastcall YS::trap_message_open(BD_VALUE_21 *args)
{
  YS::WINDOW_8 *v2; // r30
  __int64 v3; // r27
  __int64 v4; // r28
  YS::WINDOW_BALLOON_0 *v5; // r3
  YS::WINDOW_8 *v6; // r29
  YS::WINDOW_OBJ2D_1 *v7; // r3

  v2 = 0LL;
  v3 = *(int *)args;
  v4 = *(int *)&(*args)[4];
  v5 = (YS::WINDOW_BALLOON_0 *)AREA::Alloc(0xB6Cu);
  v6 = (YS::WINDOW_8 *)v5;
  if ( (_DWORD)v5 )
  {
    YS::WINDOW_BALLOON::WINDOW_BALLOON(v5, v3, v4);
    v2 = v6;
  }
  v7 = (YS::WINDOW_OBJ2D_1 *)AREA::Alloc(0x1Cu);
  if ( (_DWORD)v7 )
    YS::WINDOW_OBJ2D::WINDOW_OBJ2D(v7, v2);
  *(_DWORD *)args = (_DWORD)v2;
}

//COMPLICATED YS::WINDOW_BALLOON::WINDOW_BALLOON YS::WINDOW_OBJ2D::WINDOW_OBJ2D
->
/----- (00000000004BD3E8) ----------------------------------------------------
void __fastcall YS::WINDOW_BALLOON::WINDOW_BALLOON(YS::WINDOW_BALLOON_0 *const this, __int64 message_id, __int64 priority)
{
  YS::WINDOW_BASE::WINDOW_BASE((YS::WINDOW_BASE_1 *const)this, 3LL, 5LL, message_id, priority, 128LL, 104LL, 0);
  *(_DWORD *)&this->baseclass_0[104] = 1065353216;
  *(_DWORD *)this->baseclass_0 = 7664536;
}


/----- (00000000006CC55C) ----------------------------------------------------
void __fastcall YS::WINDOW_BALLOON::~WINDOW_BALLOON(YS::WINDOW_8 *this)
{
  __int64 v2; // r29
  __int8 *v3; // r31

  v2 = 3LL;
  v3 = &(*this)[1032];
  *(_DWORD *)this = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 1544));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1200));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 848));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 484));
  *(_DWORD *)&(*this)[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 132));
  YS::WINDOW::~WINDOW(this);
}


/----- (00000000006CCBD8) ----------------------------------------------------
void __fastcall YS::WINDOW_BALLOON::~WINDOW_BALLOON(YS::WINDOW_BALLOON *this)
{
  __int64 v2; // r29
  __int8 *v3; // r31

  v2 = 3LL;
  v3 = &this->baseclass_0[1032];
  *(_DWORD *)this->baseclass_0 = 7664472;
  do
  {
    YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)v3 + 1544));
    --v2;
    v3 -= 344;
  }
  while ( (int)v2 >= 0 );
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 1200));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 848));
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE_27 *const)(unsigned int)((_DWORD)this + 484));
  *(_DWORD *)&this->baseclass_0[132] = 7664856;
  YI::SEQUENCE::~SEQUENCE((YI::SEQUENCE *)(unsigned int)((_DWORD)this + 132));
  YS::WINDOW::~WINDOW((YS::WINDOW_8 *const)this);
  AREA::Free((unsigned int *)this);
}


->
/----- (00000000004BC7A0) ----------------------------------------------------
void __fastcall YS::WINDOW_OBJ2D::WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this, YS::WINDOW_8 *window)
{
  int v2; // r4

  *(_DWORD *)&(*this)[24] = (_DWORD)window;
  *(_DWORD *)(unsigned int)((_DWORD)this + 12) = 0;
  v2 = *(_DWORD *)&(*window)[120];
  *(_DWORD *)this = 7664376;
  dk::Obj2D::create((dk::Obj2D_11 *const)this, v2 + 25000, 0);
}


/----- (00000000006CC95C) ----------------------------------------------------
void __fastcall YS::WINDOW_OBJ2D::~WINDOW_OBJ2D(YS::WINDOW_OBJ2D_1 *const this)
{
  unsigned int *v2; // r3
  __int64 v3; // r5

  v2 = (unsigned int *)*(unsigned int *)&(*this)[24];
  if ( (_DWORD)v2 )
  {
    v3 = *v2;
    *(_DWORD *)this = 7664376;
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(v3 + 8))();
  }
  *(_DWORD *)this = 7618296;
}


/----- (00000000006CC9C8) ----------------------------------------------------
void __fastcall YS::WINDOW_OBJ2D::~WINDOW_OBJ2D(YS::WINDOW_OBJ2D *this)
{
  unsigned int *v2; // r3
  __int64 v3; // r5

  v2 = (unsigned int *)*(unsigned int *)&(*this)[24];
  if ( (_DWORD)v2 )
  {
    v3 = *v2;
    *(_DWORD *)this = 7664376;
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(v3 + 8))();
  }
  *(_DWORD *)this = 7618296;
  AREA::Free((unsigned int *)this);
}


---
---
---
appears in:
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX250\b_ex.bdscript ((?) Xemna’s dragon’s arms (Anchored))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030_NPC_QSATO\npc_.bdscript ((B) Hades (NPC_QSATO) (HE))
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
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
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT100\f_tt.bdscript ((F) Trashcan (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\G_EX250_EH\g_ex.bdscript ()
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
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX650_BTL1\tt_a.bdscript ((N) Villager (boy) (BTL1) (EX))
obj\N_EX650_BTL2\tt_a.bdscript ((N) Villager (boy) (BTL2) (EX))
obj\N_EX670_BTL1\tt_a.bdscript ((N) Villager (girl) (BTL1) (EX))
obj\N_EX670_BTL2\tt_a.bdscript ((N) Villager (girl) (BTL2) (EX))
obj\N_EX680_BTL1\tt_a.bdscript ((N) Villager (man) (BTL1) (EX))
obj\N_EX680_BTL2\tt_a.bdscript ((N) Villager (man) (BTL2) (EX))
obj\N_EX690_BTL1\tt_a.bdscript ((N) Villager (woman) (BTL1) (EX))
obj\N_EX690_BTL2\tt_a.bdscript ((N) Villager (woman) (BTL2) (EX))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_HE000_NPC_QSATO\npc_.bdscript ((P) Auron (NPC_QSATO))
---
---
---
example usage from obj\B_CA050\b_ca.bdscript
L4427:
 pushFromFSp 0
 syscall 4, 0 ; ?
 pushFromFSp 4
 pushImm 0
 syscall 1, 32 ; trap_message_open (2 in, 1 out)
 popToSp 48
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromFSp 8
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromFSp 0
 pushFromPSp 32
 pushImm 48
 pushImm 49
 gosub 16, L4564
 pushFromFSp 0
 fetchValue 4
 pushImm 50
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
