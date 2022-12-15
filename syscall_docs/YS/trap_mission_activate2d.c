---
---
---
name: trap_mission_activate2d
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
syscall 4, 14 ; trap_mission_activate2d (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::MISSION::Activate2d()
/----- (00000000004F60D8) ----------------------------------------------------
void __fastcall YS::trap_mission_activate2d(BD_VALUE_20 *args)
{
  YS::MISSION::Activate2d();
}
->
/----- (00000000004565B4) ----------------------------------------------------
void __cdecl YS::MISSION::Activate2d()
{
  YS::MISSION *v0; // r30
  __int64 v1; // r29
  YS::MISSION *v2; // r31
  YS::MISSION *v3; // r3

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
    v3 = YS::MISSION::GetCurrent();
    YS::MISSION::activate_2d(v3);
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

