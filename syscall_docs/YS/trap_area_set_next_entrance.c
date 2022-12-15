---
---
---
name: trap_area_set_next_entrance
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
syscall 1, 299 ; trap_area_set_next_entrance (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000005030B0) ----------------------------------------------------
void __fastcall YS::trap_area_set_next_entrance(BD_VALUE_21 *args)
{
  AREA::NextArea.World = AREA::Current.World;
  AREA::NextArea.Area = AREA::Current.Area;
  AREA::NextArea.Set = AREA::Current.Set;
  AREA::NextArea.Entrance = AREA::Current.Entrance + 1;
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

