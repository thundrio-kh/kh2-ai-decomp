---
---
---
name: trap_unit_enable
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
push unk1 ; (unknown)  (pushImm: 100,101,102,103,104,117,148,152,173,24,244,245,246,247,25,26,27,36,417,452,453,454,455,461,462,463,464,465,50,52,82,83,88,89,90,92,97,98,99)
syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::UNIT_GROUP::Enable(int id)
/----- (000000000050A430) ----------------------------------------------------
void __fastcall YS::trap_unit_enable(BD_VALUE_21 *args)
{
  YS::UNIT_GROUP::Enable(*(_DWORD *)args);
}
->
/----- (00000000004B25C8) ----------------------------------------------------
void __fastcall YS::UNIT_GROUP::Enable(int id)
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
      1020LL,
      "Enable",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\unitgroup.cpp", 1020);
  }
  *(_DWORD *)(unsigned int)((_DWORD)v3 + 4) &= 0xFFFFFFFE;
}
// 4B2644: variable 'back_chain' is possibly undefined
// 7FE858: using guessed type int YS::GroupPt;


---
---
---
appears in:
msn\MU02_MS103B\mu02.bdscript
msn\MU07_MS106\mu07.bdscript
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX300\b_ex.bdscript ((?) Xemnas armor - ???)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH040\f_eh.bdscript ((F) White and green beam (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
---
---
---
example usage from msn\MU02_MS103B\mu02.bdscript
L204:
 pushImm 417
 syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
 jmp L229
