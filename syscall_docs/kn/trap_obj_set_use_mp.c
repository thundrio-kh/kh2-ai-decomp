---
---
---
name: trap_obj_set_use_mp
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push mp ; (float)  (Value to set MP to)
syscall 10, 43 ; trap_obj_set_use_mp (2 in, 0 out)
---
---
---
description: Sets an object to use its MP
---
---
---
decompiled code:

/----- (0000000000613BF8) ----------------------------------------------------
void __fastcall kn::trap_obj_set_use_mp(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  *(_BYTE *)(v4 + 2804) = *(_DWORD *)&(*args)[4];
}
// 613C1C: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L4060:
 popToSp 0
 pushImm 1
 popToSpVal 24
 pushFromFSp 0
 pushFromFSpVal 28
 syscall 10, 43 ; trap_obj_set_use_mp (2 in, 0 out)
 pushFromPWp W4136
 pushFromPWp W0
 gosub 4, L4080
 ret 
