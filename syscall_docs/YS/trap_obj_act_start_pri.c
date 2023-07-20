---
---
---
name: trap_obj_act_start_pri
---
---
---
category: action
---
---
---
documentation level: untested
---
---
---
push act ; (YS::ACT_86 *)  (An action object)
push unk2 ; (string)  (A label for an action)
syscall 1, 167 ; trap_obj_act_start_pri (2 in, 0 out)
---
---
---
description: Starts an action (with priority?)
---
---
---
decompiled code:
void __fastcall YS::ACT::pri_start(YS::ACT_86 *const this, const char *label, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
/----- (00000000004FC7D4) ----------------------------------------------------
void __fastcall YS::trap_obj_act_start_pri(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r29
  unsigned __int64 v8; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v7 = *(unsigned int *)args;
  v8 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v7 )
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
  if ( (v7 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v8);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::pri_start(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v7 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4],
    a3,
    a4,
    a5,
    a6);
}
// 4FC7F8: variable 'back_chain' is possibly undefined
// 4FC8D0: variable 'a3' is possibly undefined
// 4FC8D0: variable 'a4' is possibly undefined
// 4FC8D0: variable 'a5' is possibly undefined
// 4FC8D0: variable 'a6' is possibly undefined
->
/----- (00000000004013CC) ----------------------------------------------------
void __fastcall YS::ACT::pri_start(YS::ACT_86 *const this, const char *label, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // r31
  unsigned __int64 v8; // r28
  unsigned __int64 v9; // r9
  __int64 v10; // r29
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 back_chain; // [sp+0h] [-90h]

  v7 = (char *)label;
  v8 = *(unsigned int *)&(*this)[140];
  v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "CurrentTable != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp",
      349LL,
      "pri_start",
      (const void *)v9);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 349);
    v8 = *(unsigned int *)&(*this)[140];
  }
  if ( (*(_DWORD *)&(*this)[156] & 1) == 0 )
  {
    if ( !(_DWORD)v8 )
      goto LABEL_14;
    v10 = 0LL;
    while ( 1 )
    {
      label = (const char *)*(unsigned int *)v8;
      if ( (_DWORD)label )
      {
        if ( !(unsigned int)strcmp(v7, label) )
          break;
      }
      ++v10;
      v8 = (unsigned int)(v8 + 32);
      if ( (int)v10 >= 128 )
        goto LABEL_14;
    }
    if ( (_DWORD)v8 )
    {
      if ( *(unsigned __int16 *)(v8 + 4) >= *(int *)&(*this)[152] )
      {
        YS::ACT::clear(this);
        YS::ACT::start(this, (const YS::ACT::TABLE::ELEM_86 *)v8, v16, v15, v14, v13, v12, v11);
      }
    }
    else
    {
LABEL_14:
      ErrorPrintf("*ERROR! ", label, a3, a4, a5, a6, v9);
      ErrorPrintf("no such act, '%s'", v7);
      ErrorPrintf(" *\n");
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 363);
    }
  }
}
// 4013F4: variable 'back_chain' is possibly undefined
// 4014DC: variable 'v16' is possibly undefined
// 4014DC: variable 'v15' is possibly undefined
// 4014DC: variable 'v14' is possibly undefined
// 4014DC: variable 'v13' is possibly undefined
// 4014DC: variable 'v12' is possibly undefined
// 4014DC: variable 'v11' is possibly undefined
// 4014EC: variable 'label' is possibly undefined
// 4014EC: variable 'a3' is possibly undefined
// 4014EC: variable 'a4' is possibly undefined
// 4014EC: variable 'a5' is possibly undefined
// 4014EC: variable 'a6' is possibly undefined
// 4014EC: variable 'v9' is possibly undefined


---
---
---
appears in:
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX930\m_ex.bdscript ((M) Dancer)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\B_EX210\b_ex.bdscript
L3972:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromPAi L6378 ; ___ai 'rush_start' (L6378)
 syscall 1, 167 ; trap_obj_act_start_pri (2 in, 0 out)
 ret 
