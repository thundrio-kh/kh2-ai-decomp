---
---
---
name: trap_area_set_return_tr
---
---
---
category: mapinfo
---
---
---
documentation level: untested
---
---
---
syscall 1, 352 ; trap_area_set_return_tr (0 in, 0 out)
---
---
---
description: Sets the return point when quitting the light cycle minigame in Tron
---
---
---
decompiled code:

/----- (000000000050312C) ----------------------------------------------------
void __fastcall YS::trap_area_set_return_tr(BD_VALUE_21 *args)
{
  if ( AREA::LastArea.Set.Map < 0x33u )
  {
    *(_WORD *)&AREA::NextArea.World = *(_WORD *)&AREA::LastArea.World;
    AREA::NextArea.Entrance = AREA::LastArea.Entrance;
    AREA::NextArea.Set = AREA::LastArea.Set;
    if ( AREA::LastArea.World == 17 )
    {
      if ( (AREA::NextArea.Entrance = 50, AREA::LastArea.Area == 5) && AREA::LastArea.Set.Event == 21
        || AREA::LastArea.Area == 8 && AREA::LastArea.Set.Event == 22 )
      {
        AREA::NextArea.Entrance = 55;
      }
    }
  }
}

//BASIC
---
---
---
appears in:
msn\TR02_MS102_FREE\tr02.bdscript
---
---
---
example usage from msn\TR02_MS102_FREE\tr02.bdscript
TR2:
 syscall 1, 352 ; trap_area_set_return_tr (0 in, 0 out)
 ret 
