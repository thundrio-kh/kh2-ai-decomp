---
---
---
name: trap_area_map_set
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
syscall 1, 25 ; trap_area_map_set (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000502EEC) ----------------------------------------------------
void __fastcall YS::trap_area_map_set(BD_VALUE_21 *args)
{
  *(_DWORD *)args = AREA::Current.Set.Map;
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

