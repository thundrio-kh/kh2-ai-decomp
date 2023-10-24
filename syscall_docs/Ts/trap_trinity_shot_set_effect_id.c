---
---
---
name: trap_trinity_shot_set_effect_id
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push effect_id ; (int) (ID of an effect)
syscall 7, 31 ; trap_trinity_shot_set_effect_id (2 in, 0 out)
---
---
---
description: Set the effect ID of a trinity limit shot
---
---
---
decompiled code:

/----- (0000000000624068) ----------------------------------------------------
void __fastcall Ts::trap_trinity_shot_set_effect_id(BD_VALUE_24 *args)
{
  *(_BYTE *)(*(unsigned int *)args + 0x57LL) = *(_DWORD *)&(*args)[4];
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

