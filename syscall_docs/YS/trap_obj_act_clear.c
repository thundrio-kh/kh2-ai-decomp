---
---
---
name: trap_obj_act_clear
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
syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
---
---
---
description: clears an action
---
---
---
decompiled code:
void __fastcall YS::ACT::clear(YS::ACT_86 *const this)
/----- (00000000004FC21C) ----------------------------------------------------
void __fastcall YS::trap_obj_act_clear(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::clear((YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v1 + 4) + 768));
}
// 4FC23C: variable 'back_chain' is possibly undefined
->
/----- (00000000004002A4) ----------------------------------------------------
void __fastcall YS::ACT::clear(YS::ACT_86 *const this)
{
  YS::VM_377 *v2; // r3
  int v3; // r4
  BD_VALUE_0 v4[4]; // [sp+70h] [-20h] BYREF

  if ( (*(_DWORD *)&(*this)[156] & 1) == 0 )
  {
    v2 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
    if ( (_DWORD)v2 )
    {
      v4[0] = *(BD_VALUE_0 *)&(*this)[136];
      v3 = *(unsigned __int16 *)(*(unsigned int *)&(*this)[144] + 0xALL);
      if ( *(_DWORD *)(*(unsigned int *)(*(_DWORD *)v4 + 4LL) + 0x484LL) != 0 && v3 != 0 )
      {
        YS::VM::syscallback(
          (YS::VM_377 *const)*(unsigned int *)(*(unsigned int *)(*(_DWORD *)v4 + 4LL) + 0x484LL),
          v3,
          v4,
          1,
          0LL);
        v2 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
      }
      YS::VM::destroy(v2);
      *(_DWORD *)&(*this)[148] = 0;
      *(_DWORD *)&(*this)[144] = 0;
    }
    *(_DWORD *)this = 0;
    *(_DWORD *)&(*this)[4] = 0;
    *(_DWORD *)&(*this)[152] = 0;
  }
}


---
---
---
appears in:
limit\tron\limi.bdscript
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\M_EX010\m_ex.bdscript ((M) Soldier)
obj\M_EX010_NM\m_ex.bdscript ((M) Soldier (NM))
obj\M_EX010_TR\m_ex.bdscript ((M) Soldier (TR))
obj\M_EX010_WI\m_ex.bdscript ((M) Soldier (WI))
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\tron\limi.bdscript
L50:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L136
 pushFromPSpVal 20
 syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
 pushFromFSp 0
 gosub 12, L432
 pushFromFSp 0
 gosub 12, L488
 gosub 12, L609
 pushFromPSpVal 48
 pushImm 417
 pushImm 416
 pushImm 419
 gosub 12, L703
 pushFromPSp 16
 pushImmf 1
 gosub 12, L730
 pushFromPSpVal 4
 pushFromPSp 16
 gosub 12, L777
 pushFromFSp 0
 pushImm 96
 pushImm 96
 pushImm 96
 pushImmf 30
 gosub 12, L791
 pushImm 0
 popToSpVal 268
 pushImm 0
 popToSpVal 272
 pushImm 0
 popToSpVal 276
 pushFromFSp 0
 gosub 12, L848
 ret 
