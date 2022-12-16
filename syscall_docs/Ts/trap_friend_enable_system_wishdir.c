---
---
---
name: trap_friend_enable_system_wishdir
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
push unk1 ; (unknown)  (pushFromPSpVal: 0) (pushFromPWp: W364)
syscall 7, 24 ; trap_friend_enable_system_wishdir (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::enableSystemWishDir(kn::Friend_0 *const this)
/----- (0000000000624078) ----------------------------------------------------
void __fastcall Ts::trap_friend_enable_system_wishdir(BD_VALUE_24 *args)
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
  kn::Friend::enableSystemWishDir((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
}
// 624098: variable 'back_chain' is possibly undefined
->
/----- (00000000000E5018) ----------------------------------------------------
void __fastcall kn::Friend::enableSystemWishDir(kn::Friend_0 *const this)
{
  *(_DWORD *)&(*this)[2944] &= 0xFFFFFBFF;
}


---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L3932:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3956
 pushFromPSpVal 0
 syscall 7, 24 ; trap_friend_enable_system_wishdir (1 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 pushImmf 0
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L3970
 ret 
