---
---
---
name: trap_attack_is_hit_bg
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
syscall 2, 29 ; trap_attack_is_hit_bg (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4608) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_bg(BD_VALUE_19 *args)
{
  int v1; // r5
  int v2; // r4

  v1 = 0;
  v2 = *(_DWORD *)(*(unsigned int *)args + 4LL);
  if ( (v2 & 8) != 0 || (v2 & 0x10) != 0 )
    v1 = 1;
  *(_DWORD *)args = v1;
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

