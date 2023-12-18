---
---
---
name: trap_mission_deactivate2d
---
---
---
category: mission
---
---
---
documentation level: untested
---
---
---
syscall 4, 15 ; trap_mission_deactivate2d (0 in, 0 out)
---
---
---
description: deactiates custom HUD, such as Demyx timer or hud used by Mushrooms
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
msn\AL10_KINOKO_LEX\kino.bdscript
msn\BB13_KINOKO_XAL\kino.bdscript
msn\CA03_MS106\ca03.bdscript
msn\CA07_MS105\ca07.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_KINOKO_LUX\kino.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\EH03_KINOKO_XEM\kino.bdscript
msn\HB04_KINOKO_DEM\kino.bdscript
msn\HB04_MS403\hb04.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\HE17_MS105\he17.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
msn\NM07_KINOKO_XIG\kino.bdscript
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
---
---
---
example usage from msn\AL10_KINOKO_LEX\kino.bdscript
L329:
 syscall 4, 15 ; trap_mission_deactivate2d (0 in, 0 out)
 ret 
