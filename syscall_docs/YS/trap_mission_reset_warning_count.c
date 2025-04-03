---
---
---
name: trap_mission_reset_warning_count
---
---
---
category: mission_counter
---
---
---
documentation level: untested
---
---
---
push counter_id ; (int)  (id of a counter)
syscall 4, 58 ; trap_mission_reset_warning_count (1 in, 0 out)
---
---
---
description: Reset the warning flag for a counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::WarningCount(int id, bool flag)
/----- (00000000004F6600) ----------------------------------------------------
void __fastcall YS::trap_mission_reset_warning_count(BD_VALUE_20 *args)
{
  YS::MISSION::WarningCount(*(_DWORD *)args, 0);
}
->
/----- (0000000000455D60) ----------------------------------------------------
void __fastcall YS::MISSION::WarningCount(int id, bool flag)
{
  unsigned int *v3; // r30
  unsigned int v4; // r5

  v3 = (unsigned int *)((unsigned int)YS::MISSION::GetCurrent() + 56 * id + 232);
  if ( YS::MISSION::IsExec() )
  {
    v4 = v3[3];
    if ( (v4 & 1) != 0 )
    {
      if ( flag )
      {
        if ( (v4 & 8) == 0 )
          ((void (__fastcall *)(unsigned int *))*(unsigned int *)*(unsigned int *)(*v3 + 0x14LL))(v3);
      }
      else if ( (v4 & 8) != 0 )
      {
        ((void (__fastcall *)(unsigned int *))*(unsigned int *)*(unsigned int *)(*v3 + 0x18LL))(v3);
      }
    }
  }
}


---
---
---
appears in:
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
---
---
---
example usage from obj\N_CM020_BTL\n_cm.bdscript
L5144:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L5241
 gosub 4, L4390
 jz L5238
 pushFromFWp W0
 gosub 4, L3953
 popToSp 4
 pushFromFWp W0
 pushFromFWp W4
 gosub 4, L3953
 gosub 4, L5242
 pushImm 0
 syscall 4, 58 ; trap_mission_reset_warning_count (1 in, 0 out)
 pushImm 0
 syscall 4, 50 ; trap_mission_warning_count (1 in, 0 out)
 pushFromFWp W0
 pushImm 72
 add 
 pushFromFWp W4
 gosub 4, L3953
 citf 
 pushImmf 15
 divf 
 cfti 
 memcpy 0
