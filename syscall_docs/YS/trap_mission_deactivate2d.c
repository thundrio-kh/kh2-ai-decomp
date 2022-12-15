---
---
---
name: trap_mission_deactivate2d
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
syscall 4, 15 ; trap_mission_deactivate2d (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::MISSION::Deactivate2d()
/----- (00000000004F60FC) ----------------------------------------------------
void __fastcall YS::trap_mission_deactivate2d(BD_VALUE_20 *args)
{
  YS::MISSION::Deactivate2d();
}
->
/----- (0000000000456690) ----------------------------------------------------
void __cdecl YS::MISSION::Deactivate2d()
{
  YS::MISSION *v0; // r30
  __int64 v1; // r29
  YS::MISSION *v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsExec() )
  {
    if ( (*(_DWORD *)&(*YS::MISSION::GetCurrent())[4] & 1) != 0 )
    {
      v0 = YS::MISSION::GetCurrent();
      v1 = 0LL;
      if ( *(int *)&(*v0)[712] > 0 )
      {
        v2 = v0;
        do
        {
          ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)(unsigned int)((_DWORD)v2 + 676)
                                                            + 0x10LL))();
          ++v1;
          v2 = (YS::MISSION *)((char *)v2 + 4);
        }
        while ( (int)v1 < *(_DWORD *)&(*v0)[712] );
      }
      *(_DWORD *)(unsigned int)((_DWORD)v0 + 4) &= 0xFFFFFFFE;
    }
    else
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      *(_DWORD *)(v3 + 4) |= 2u;
    }
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

