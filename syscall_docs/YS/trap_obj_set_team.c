---
---
---
name: trap_obj_set_team
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPWp: W152,W348)
push unk2 ; (unknown)  (pushImm: 1,2,3)
syscall 1, 38 ; trap_obj_set_team (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F97E0) ----------------------------------------------------
void __fastcall YS::trap_obj_set_team(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  int v2; // r29
  unsigned __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = *(_DWORD *)&(*args)[4];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
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
  *(_DWORD *)(*(unsigned int *)(v1 + 4) + 0x3B0LL) = v2;
}
// 4F9808: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\B_NM110_R_ARM\b_nm.bdscript ((B) The Experiment (Right Hand))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
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
---
---
---
example usage from obj\B_NM110_HEAD\b_nm.bdscript
L137:
 gosub 12, L380
 jz L150
 pushFromFSp 0
 pushImm 1
 syscall 1, 38 ; trap_obj_set_team (2 in, 0 out)
 jmp L157
