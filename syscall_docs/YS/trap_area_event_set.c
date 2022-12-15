---
---
---
name: trap_area_event_set
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
syscall 1, 27 ; trap_area_event_set (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000502F14) ----------------------------------------------------
void __fastcall YS::trap_area_event_set(BD_VALUE_21 *args)
{
  *(_DWORD *)args = AREA::Current.Set.Event;
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

