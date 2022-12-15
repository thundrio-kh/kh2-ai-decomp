---
---
---
name: trap_limit_friend
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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 2, 49 ; trap_limit_friend (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F53E4) ----------------------------------------------------
void __fastcall YS::trap_limit_friend(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(unsigned int)(*(_DWORD *)args + 4 * *(_DWORD *)&(*args)[4] + 16);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

