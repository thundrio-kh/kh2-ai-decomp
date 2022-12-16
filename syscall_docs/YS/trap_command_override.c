---
---
---
name: trap_command_override
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
push unk1 ; (unknown)  (pushFromFSp: 0,12,16) (pushImm: 0,1,2) (pushFromPWp: W0)
push unk2 ; (unknown)  (pushFromFSp: 12,4,8) (pushImm: 113,146,147,20,270,271,276,321,335,346,397,4,434,466,507,508,561,646,647,650,651,655,682,714) (fetchValue: 164)
push unk3 ; (unknown)  (pushFromPSpVal: 0,112,20) (pushFromFSp: 0,8) (pushFromPWp: W0,W4) (add: ) (pushFromPSp: 16)
push unk4 ; (unknown)  (pushImm: 1,2) (gosub: 4, L2828,4, L788)
syscall 1, 165 ; trap_command_override (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
YS::COMMAND_SLOT_14 *__fastcall YS::PLAYER_COMMAND::override(YS::PLAYER_COMMAND_12 *const this, int n, __int64 command, const YS::TARGET_89 *target, int num, int priority)
/----- (0000000000508488) ----------------------------------------------------
void __fastcall YS::trap_command_override(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-B0h]
  YS::TARGET_108 v5; // [sp+70h] [-40h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v5);
  v2 = *(unsigned int *)&(*args)[8];
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
  YS::TARGET::set_obj((YS::TARGET_108 *const)v5, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4), 0);
  YS::PLAYER_COMMAND::override(
    (YS::PLAYER_COMMAND_12 *const)*((unsigned int *)YS::PLAYER::Player + 721),
    *(_DWORD *)args,
    *(int *)&(*args)[4],
    (const YS::TARGET_89 *)v5,
    *(_DWORD *)&(*args)[12],
    100);
}
// 5084C0: variable 'back_chain' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

//COMPLICATED YS::TARGET::clear YS::TARGET::set_obj YS::PLAYER_COMMAND::override
->
/----- (00000000004A8118) ----------------------------------------------------
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
}


->
/----- (00000000004A8134) ----------------------------------------------------
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
{
  int v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v5 = (int)obj;
  if ( group < 0 || group >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group >= 0 && group < COLLISION::GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp",
      264LL,
      "set_obj",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp", 264);
  }
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
  *(_DWORD *)this = v5;
  *(_DWORD *)&(*this)[4] = group;
}
// 4A8164: variable 'back_chain' is possibly undefined


->
/----- (0000000000480A58) ----------------------------------------------------
YS::COMMAND_SLOT_14 *__fastcall YS::PLAYER_COMMAND::override(YS::PLAYER_COMMAND_12 *const this, int n, __int64 command, const YS::TARGET_89 *target, int num, int priority)
{
  YS::COMMAND_SLOT_14 *result; // r3

  result = 0LL;
  if ( (*(_DWORD *)(*(unsigned int *)&(*this)[2528] + 0x588LL) & 0x2000000) == 0 )
    result = YS::PLAYER_COMMAND::force_override(this, n, command, target, num, priority);
  return result;
}


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
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\trinity_zz\limi.bdscript
limit\tron\limi.bdscript
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\F_TT100\f_tt.bdscript ((F) Trashcan (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from limit\aladdin\limi.bdscript
L5490:
 jz L5505
 pushFromFSp 12
 pushFromFSp 8
 pushFromPSpVal 20
 pushImm 1
 syscall 1, 165 ; trap_command_override (4 in, 0 out)
 jmp L5505
