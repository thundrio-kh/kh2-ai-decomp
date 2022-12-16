---
---
---
name: trap_obj_effect_start_bind_other
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
push unk1 ; (unknown)  (gosub: 12, L735,16, L777,28, L608,4, L1075,4, L2182,...) (pushFromPWp: W0,W160,W16560,W4) (pushFromFSp: 0,16,4) (syscall: 1, 3 ; trap_sysobj_player (0 in, 1 out)) (gosub32: 4, L2256,4, L299) (pushFromPSp: 16) (pushFromPSpVal: 0) (add: )
push unk2 ; (unknown)  (memcpyToSp: 16, 112,16, 16,16, 32,16, 4,16, 48,...) (pushImm: 16,17,2,27,28,4,7,70,8,9) (pushFromFSp: 48,8)
push unk3 ; (unknown)  (pushFromPSp: 112,16,32,4,48,...) (pushFromFSp: 0,12,4,8) (pushFromPSpVal: 64)
push unk4 ; (unknown)  (pushImm: 0,1)
push unk5 ; (unknown)  (pushImm: 0) (pushFromFSp: 4)
syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_bind(YS::OBJ_125 *const this, __int64 id, int flag, __int64 priority, YS::OBJ_125 *obj, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FFF98) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_start_bind_other(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r26
  unsigned __int64 v10; // r25
  YS::OBJ_125 *v11; // r26
  __int64 v12; // r27
  __int64 v13; // r30
  int v14; // r28
  __int64 v15; // r29
  __int64 back_chain; // [sp+0h] [-B0h]

  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v11 = (YS::OBJ_125 *)*(unsigned int *)(v9 + 4);
  v12 = *(int *)&(*args)[4];
  v13 = *(unsigned int *)&(*args)[8];
  v14 = *(_DWORD *)&(*args)[12];
  v15 = *(int *)&(*args)[16];
  if ( !(_DWORD)v13 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v13 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)YS::OBJ::start_effect_bind(
                                    v11,
                                    v12,
                                    v14,
                                    v15,
                                    (YS::OBJ_125 *)*(unsigned int *)(v13 + 4),
                                    a6,
                                    a7,
                                    a8);
}
// 4FFFBC: variable 'back_chain' is possibly undefined
// 500184: variable 'a6' is possibly undefined
// 500184: variable 'a7' is possibly undefined
// 500184: variable 'a8' is possibly undefined
->
/----- (00000000004614FC) ----------------------------------------------------
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_bind(YS::OBJ_125 *const this, __int64 id, int flag, __int64 priority, YS::OBJ_125 *obj, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int *v8; // r8

  v8 = (unsigned int *)obj;
  if ( !*(_DWORD *)&(*this)[128] )
    return 0LL;
  if ( !(_DWORD)obj )
    v8 = (unsigned int *)this;
  return ryj::PAX::start((ryj::PAX_161 *const)(unsigned int)((_DWORD)this + 128), id, flag, 1LL, priority, v8, a7, a8);
}


---
---
---
appears in:
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\F_CA010\f_ca.bdscript ((F) ??? - Something from Black Pearl? (CA))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from obj\B_EX100\b_ex.bdscript
L15416:
 popToSp 0
 gosub 4, L1075
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushImmf 8
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushFromPWp W976
 pushImm 18
 gosub 4, L1075
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 popToSp 4
 pushImmf 180
 gosub 4, L1474
 pushImmf 180
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 180
 gosub 4, L1474
 pushFromFSp 4
 syscall 0, 44 ; trap_effect_loop_end (1 in, 0 out)
 pushImmf 90
 gosub 4, L1474
 pushImmf 90
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 gosub 4, L1075
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 9
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 212 ; trap_obj_pattern_disable (2 in, 0 out)
 pushFromPWp W976
 gosub 4, L15517
 ret 
