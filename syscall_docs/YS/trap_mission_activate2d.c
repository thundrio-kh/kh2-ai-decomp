---
---
---
name: trap_mission_activate2d
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
syscall 4, 14 ; trap_mission_activate2d (0 in, 0 out)
---
---
---
description: Turns on custom HUD, such as Demyx timer or hud used by Mushrooms
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
msn\AL10_KINOKO_LEX\kino.bdscript
msn\BB13_KINOKO_XAL\kino.bdscript
msn\CA13_KINOKO_LUX\kino.bdscript
msn\EH03_KINOKO_XEM\kino.bdscript
msn\HB04_KINOKO_DEM\kino.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
msn\NM07_KINOKO_XIG\kino.bdscript
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
---
---
---
example usage from msn\AL10_KINOKO_LEX\kino.bdscript
L108:
 syscall 4, 14 ; trap_mission_activate2d (0 in, 0 out)
 ret 
