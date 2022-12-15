---
---
---
name: trap_score_type
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
syscall 4, 35 ; trap_score_type (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F69D0) ----------------------------------------------------
void __fastcall YS::trap_score_type(BD_VALUE_20 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*args)[0];
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

