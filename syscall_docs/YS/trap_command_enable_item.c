---
---
---
name: trap_command_enable_item
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
syscall 1, 322 ; trap_command_enable_item (0 in, 0 out)
---
---
---
description: Enable the item row on the command menu
---
---
---
decompiled code:

/----- (0000000000508738) ----------------------------------------------------
void __fastcall YS::trap_command_enable_item(BD_VALUE_21 *args)
{
  unsigned __int64 v1; // r3

  v1 = (unsigned int)(*((_DWORD *)YS::PLAYER::Player + 721) + 32);
  *(_DWORD *)v1 &= 0xFFFFFFEF;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

//BASIC
---
---
---
appears in:
msn\TT32_MS303\tt32.bdscript
---
---
---
example usage from msn\TT32_MS303\tt32.bdscript
L60:
 syscall 1, 322 ; trap_command_enable_item (0 in, 0 out)
 pushImm 16130
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 jmp L101
