---
---
---
name: trap_obj_get_weight
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
push unk1 ; (unknown)  (pushFromPSp: 0)
syscall 1, 310 ; trap_obj_get_weight (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004FA6D4) ----------------------------------------------------
void __fastcall YS::trap_obj_get_weight(BD_VALUE_21 *args)
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
  *(float *)&(*args)[0] = *(float *)(*(unsigned int *)(*(unsigned int *)(v2 + 4) + 8LL) + 0x50LL);
}
// 4FA6F8: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
msn\TR07_MS203\tr07.bdscript
---
---
---
example usage from msn\TR07_MS203\tr07.bdscript
L240:
 pushFromPSp 0
 gosub 32, L268
 jz L257
 pushFromFSp 108
 pushFromPSp 0
 syscall 1, 310 ; trap_obj_get_weight (1 in, 1 out)
 addf 
 popToSp 108
 jmp L240
