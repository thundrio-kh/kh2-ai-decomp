---
---
---
name: trap_mission_warning_count
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
push unk1 ; (unknown) 
syscall 4, 50 ; trap_mission_warning_count (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::WarningCount(int id, bool flag)
/----- (00000000004F65D0) ----------------------------------------------------
void __fastcall YS::trap_mission_warning_count(BD_VALUE_20 *args)
{
  YS::MISSION::WarningCount(*(_DWORD *)args, 1);
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

---
---
---
example usage from NA

