---
---
---
name: trap_command_slot_set_status
---
---
---
category: command
---
---
---
documentation level: incomplete
---
---
---
push slot ; (int) (slot to set)
push status ; (int) (the status to set)
syscall 1, 346 ; trap_command_slot_set_status (2 in, 0 out)
---
---
---
description: Sets the status for a command slot
---
---
---
decompiled code:

/----- (00000000005089A0) ----------------------------------------------------
void __fastcall YS::trap_command_slot_set_status(BD_VALUE_21 *args)
{
  __int64 v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(unsigned int *)args;
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      758LL,
      "trap_command_slot_set_status",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 758);
    v2 = *(unsigned int *)args;
  }
  *(_BYTE *)(v2 + 5) = *(_DWORD *)&(*args)[4];
}
// 5089BC: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

