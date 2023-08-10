---
---
---
name: trap_target_set_before_player
---
---
---
category: target
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push priority ; (int)  (Priority of the target)
syscall 1, 162 ; trap_target_set_before_player (2 in, 0 out)
---
---
---
description: Set the target of an object to be before the player
---
---
---
decompiled code:
void __fastcall YS::TARGET::SetBeforePlayer(YS::OBJ_168 *obj, int pri)
/----- (0000000000508ECC) ----------------------------------------------------
void __fastcall YS::trap_target_set_before_player(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
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
  YS::TARGET::SetBeforePlayer((YS::OBJ_168 *)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 508EF0: variable 'back_chain' is possibly undefined
->
/----- (00000000004AA4C8) ----------------------------------------------------
void __fastcall YS::TARGET::SetBeforePlayer(YS::OBJ_168 *obj, int pri)
{
  YS::PRIORITYTARGET::set((YS::PRIORITYTARGET_0 *const)&YS::BeforePlayer, pri, obj);
}


---
---
---
appears in:
msn\MU01_MS102\mu01.bdscript
msn\WI04_MS102C\wi04.bdscript
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_HB030\f_hb.bdscript ((F) ??? (HB))
obj\F_MU030\f_mu.bdscript ((F) ??? (MU))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
---
---
---
example usage from msn\MU01_MS102\mu01.bdscript
TR3:
 pushImm 19155
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 gosub 8, L291
 pushFromPSp 0
 pushImm 100
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L263
 pushFromPSp 0
 pushImm 0
 syscall 1, 162 ; trap_target_set_before_player (2 in, 0 out)
 jmp L263
