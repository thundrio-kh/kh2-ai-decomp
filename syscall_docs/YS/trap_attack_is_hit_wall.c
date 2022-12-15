---
---
---
name: trap_attack_is_hit_wall
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
syscall 2, 40 ; trap_attack_is_hit_wall (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F474C) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_wall(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 8) != 0;
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

