---
---
---
name: trap_flare_set_target
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
push unk1 ; (unknown)  (memcpyToSp: 16, 16)
push unk2 ; (unknown)  (pushFromPSp: 16)
syscall 7, 9 ; trap_flare_set_target (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623490) ----------------------------------------------------
void __fastcall Ts::trap_flare_set_target(BD_VALUE_24 *args)
{
  __int64 v1; // r30
  __int64 v2; // r29
  unsigned __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)&(*args)[4];
  v2 = *(unsigned int *)args;
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
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v1 + 4);
}
// 6234B8: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
---
---
---
example usage from limit\donald2\limi.bdscript
L1573:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1616
 pushFromFSpVal 48
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 160 ; trap_target_set_obj (2 in, 0 out)
 syscall 7, 4 ; trap_flare_new (0 in, 1 out)
 popToSpVal 80
 pushFromFSpVal 80
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 7, 9 ; trap_flare_set_target (2 in, 0 out)
 pushFromFSpVal 80
 pushImmf 60
 pushImmf 60
 syscall 7, 7 ; trap_flare_set_radius (3 in, 0 out)
 ret 
