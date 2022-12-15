---
---
---
name: trap_status_is_force_leave
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
syscall 1, 206 ; trap_status_is_force_leave (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050995C) ----------------------------------------------------
void __fastcall YS::trap_status_is_force_leave(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (YS::STATUS::Flag & 0x80) != 0;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

