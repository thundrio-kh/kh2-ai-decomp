---
---
---
name: trap_command_enable_group
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
push group ; (int)  (Enables a numbered command group. Only value used ingame is 0)
syscall 1, 366 ; trap_command_enable_group (1 in, 0 out)
---
---
---
description: Enables a numbered command group. 0 enables everything.
---
---
---
decompiled code:
void __fastcall YS::FIELD_COMMAND::enable_group(YS::FIELD_COMMAND_1 *const this, int group)
/----- (0000000000508968) ----------------------------------------------------
void __fastcall YS::trap_command_enable_group(BD_VALUE_21 *args)
{
  YS::FIELD_COMMAND::enable_group(
    (YS::FIELD_COMMAND_1 *const)*((unsigned int *)YS::PLAYER::Player + 721),
    *(_DWORD *)args);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (000000000042C644) ----------------------------------------------------
void __fastcall YS::FIELD_COMMAND::enable_group(YS::FIELD_COMMAND_1 *const this, int group)
{
  char v2; // r31
  int v4; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = group;
  if ( group )
  {
    if ( group <= 0 || group >= 32 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "group > 0 && group < 32",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\fieldcommand.cpp",
        623LL,
        "enable_group",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\fieldcommand.cpp", 623);
    }
    v4 = *(_DWORD *)&(*this)[2736] & ~(1 << v2);
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)&(*this)[2736] = v4;
}
// 42C67C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
---
---
---
example usage from obj\B_EX420\b_ex.bdscript
L5811:
 pushImm 0
 syscall 1, 366 ; trap_command_enable_group (1 in, 0 out)
 pushFromFSpVal 64
 pushImmf -1
 gosub32 4, L2268
 pushFromPSpVal 0
 pushImm 35
 gosub32 4, L2256
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
