---
---
---
name: trap_command_disable_group
---
---
---
category: command
---
---
---
documentation level: untested
---
---
---
push group ; (int) (Values used by Lingering Will are 1 and 2)  (pushImm: 1,2)
syscall 1, 365 ; trap_command_disable_group (1 in, 0 out)
---
---
---
description: Disables a numbered command group
---
---
---
decompiled code:
void __fastcall YS::FIELD_COMMAND::disable_group(YS::FIELD_COMMAND_1 *const this, int group)
/----- (0000000000508930) ----------------------------------------------------
void __fastcall YS::trap_command_disable_group(BD_VALUE_21 *args)
{
  YS::FIELD_COMMAND::disable_group(
    (YS::FIELD_COMMAND_1 *const)*((unsigned int *)YS::PLAYER::Player + 721),
    *(_DWORD *)args);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (000000000042C588) ----------------------------------------------------
void __fastcall YS::FIELD_COMMAND::disable_group(YS::FIELD_COMMAND_1 *const this, int group)
{
  char v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v3 = group;
  if ( group <= 0 || group >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group > 0 && group < 32",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\fieldcommand.cpp",
      612LL,
      "disable_group",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\fieldcommand.cpp", 612);
  }
  *(_DWORD *)&(*this)[2736] |= 1 << v3;
}
// 42C5B0: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
---
---
---
example usage from obj\B_EX420\b_ex.bdscript
L4680:
 popToSp 0
 gosub32 4, L4674
 eqz 
 jz L4722
 pushImm 21627
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushImm 1
 popToWp W12
 pushFromFSp 0
 gosub32 4, L4723
 pushImm 1
 syscall 1, 365 ; trap_command_disable_group (1 in, 0 out)
 pushImm 72
 pushImm L5760
 pushFromFSp 0
 gosub32 4, L2321
 drop 
 jmp L4722
