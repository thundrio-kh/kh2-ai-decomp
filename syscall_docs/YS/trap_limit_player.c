---
---
---
name: trap_limit_player
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
syscall 2, 48 ; trap_limit_player (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F53D4) ----------------------------------------------------
void __fastcall YS::trap_limit_player(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0xCLL);
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

