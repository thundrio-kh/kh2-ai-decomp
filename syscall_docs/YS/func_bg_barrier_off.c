---
---
---
name: func_bg_barrier_off
---
---
---
category: map
---
---
---
documentation level: untested
---
---
---
syscall 1, 47 ; func_bg_barrier_off (0 in, 0 out)
---
---
---
description: Turns off all barriers spawned in to the map.
---
---
---
decompiled code:
void __cdecl YS::BARRIER::AllOff()
/----- (00000000005038F8) ----------------------------------------------------
void __fastcall YS::func_bg_barrier_off(BD_VALUE_21 *args)
{
  YS::BARRIER::AllOff();
}
->
/----- (000000000050D8DC) ----------------------------------------------------
void __cdecl YS::BARRIER::AllOff()
{
  signed int i; // r31

  for ( i = 0; i < 64; ++i )
  {
    if ( (YS::AREADATA::BarrierFlag & (1LL << i)) != 0 )
      dk::Map::setHideGroup(i);
  }
}
// C78110: using guessed type __int64 YS::AREADATA::BarrierFlag;


---
---
---
appears in:

---
---
---
example usage from NA

