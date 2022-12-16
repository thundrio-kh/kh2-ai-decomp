---
---
---
name: trap_obj_set_unit_arg
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
push unk1 ; (unknown)  (pushFromPSp: 0,112,128,16,32,...) (add: ) (pushFromPSpVal: 112,128,144,256,272,...) (pushFromFSp: 0,4) (pushFromPWp: W0,W4400,W4416,W4432) (pushImm: 1,10) (syscall: 1, 39 ; trap_obj_unit_arg (2 in, 1 out))
push unk2 ; (unknown)  (pushImm: 0,1,2) (pushFromPSp: 32) (syscall: 0, 16 ; trap_random_get (1 in, 1 out))
push unk3 ; (unknown)  (pushImm: -1,0,1,10,100,11,12,13,2,20,3,30,4,5,98,99) (pushFromFSp: 12,32,36,4,48,...) (syscall: 1, 213 ; trap_obj_part (1 in, 1 out),4, 29 ; trap_mission_get_count (1 in, 1 out)) (add: )
syscall 1, 218 ; trap_obj_set_unit_arg (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_unit_arg(YS::OBJ_125 *const this, int num, int value)
/----- (000000000050139C) ----------------------------------------------------
void __fastcall YS::trap_obj_set_unit_arg(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
    goto LABEL_5;
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4)) )
  {
LABEL_5:
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && ToOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      720LL,
      "trap_obj_set_unit_arg",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 720);
  }
  v4 = *(unsigned int *)args;
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v4 & 3) != 0 )
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
  YS::OBJ::set_unit_arg((YS::OBJ_125 *const)*(unsigned int *)(v4 + 4), *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
// 5013C0: variable 'back_chain' is possibly undefined
->
/----- (0000000000462080) ----------------------------------------------------
void __fastcall YS::OBJ::set_unit_arg(YS::OBJ_125 *const this, int num, int value)
{
  int v3; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v3 = (int)this;
  if ( num <= 0 || num > 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num > 0 && num <= UNIT_ARG_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1298LL,
      "set_unit_arg",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1298);
  }
  *(_DWORD *)(unsigned int)(v3 + 4 * num + 2076) = value;
}
// 4620B0: variable 'back_chain' is possibly undefined


---
---
---
appears in:
msn\HE00_MS104B\he00.bdscript
msn\HE02_MS104C\he02.bdscript
msn\HE02_MS104D\he02.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX360\b_ex.bdscript ((B) ??? - Invisible enemy, can’t be hurt. (EX))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_NM110\f_nm.bdscript ((F) Oogie’s bag (NM))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI020_BOSS\f_wi.bdscript ((F) Burning building (BOSS) (WI))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
---
---
---
example usage from msn\HE00_MS104B\he00.bdscript
L725:
 pushFromFWp W12
 pushImm 0
 sub 
 ipos 
 jz L838
 gosub 16, L1132
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf -150
 pushImmf 0
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 32
 pushFromPSp 32
 fetchValue 0
 pushImmf 150
 subf 
 pushFromPSp 32
 fetchValue 0
 pushImmf 150
 addf 
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 32
 pushImm 8
 add 
 pushFromPSp 32
 fetchValue 8
 pushImmf 150
 subf 
 pushFromPSp 32
 fetchValue 8
 pushImmf 150
 addf 
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushImm 800
 gosub 16, L1142
 pushFromPSp 16
 pushFromPSp 32
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSp 16
 pushImm 1
 pushImm 1
 syscall 1, 218 ; trap_obj_set_unit_arg (3 in, 0 out)
 pushFromFWp W12
 pushImm 1
 sub 
 popToWp W12
 jmp L725
