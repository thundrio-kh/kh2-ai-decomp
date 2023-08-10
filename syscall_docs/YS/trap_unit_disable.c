---
---
---
name: trap_unit_disable
---
---
---
category: spawn
---
---
---
documentation level: untested
---
---
---
push id ; (id)  (Unit group ID)
syscall 1, 202 ; trap_unit_disable (1 in, 0 out)
---
---
---
description: Disable a unit group from being able to spawn
---
---
---
decompiled code:
void __fastcall YS::UNIT_GROUP::Disable(int id)
/----- (000000000050A404) ----------------------------------------------------
void __fastcall YS::trap_unit_disable(BD_VALUE_21 *args)
{
  YS::UNIT_GROUP::Disable(*(_DWORD *)args);
}
->
/----- (00000000004B24C4) ----------------------------------------------------
void __fastcall YS::UNIT_GROUP::Disable(int id)
{
  __int64 v1; // r5
  void *v2; // r6
  char *v3; // r31
  __int64 back_chain; // [sp+0h] [-80h]

  v1 = 0LL;
  if ( YS::GroupPt <= 0 )
  {
LABEL_6:
    LODWORD(v3) = 0;
  }
  else
  {
    v2 = &YS::Group;
    while ( *(unsigned __int16 *)(*(unsigned int *)((unsigned int)v2 + 8LL) + 2LL) != id )
    {
      ++v1;
      LODWORD(v2) = (_DWORD)v2 + 56;
      if ( YS::GroupPt <= (int)v1 )
        goto LABEL_6;
    }
    v3 = (char *)&YS::Group + 56 * v1;
  }
  if ( !(_DWORD)v3 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\unitgroup.cpp",
      1012LL,
      "Disable",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\unitgroup.cpp", 1012);
  }
  *(_DWORD *)(unsigned int)((_DWORD)v3 + 4) |= 1u;
}
// 4B2540: variable 'back_chain' is possibly undefined
// 7FE858: using guessed type int YS::GroupPt;


---
---
---
appears in:
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\MU07_MS106\mu07.bdscript
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_HB550_BOSS\n_hb.bdscript ((N) Cloud (BOSS) (HB))
obj\N_HB550_BTL\n_hb.bdscript ((N) Cloud (BTL) (HB))
---
---
---
example usage from msn\MU02_MS103B\mu02.bdscript
TR3:
 gosub 4, L329
 pushImm 417
 syscall 1, 202 ; trap_unit_disable (1 in, 0 out)
 pushImmf 50
 pushImm 0
 syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
 pushImmf 1
 syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)
 pushImm 0
 pushImm L337
 pushImm 0
 pushImm 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 pushFromPWp W0
 gosub 4, L341
 ret 
