---
---
---
name: trap_mission_get_count
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
syscall 4, 29 ; trap_mission_get_count (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetCount(int id)
/----- (00000000004F64C0) ----------------------------------------------------
void __fastcall YS::trap_mission_get_count(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetCount(*(_DWORD *)args);
}
->
/----- (0000000000455A28) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetCount(int id)
{
  int v2; // r31
  __int64 result; // r3

  if ( YS::MISSION::IsExec()
    && (v2 = 56 * id, (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 232 + 0xCLL) & 1) != 0) )
  {
    result = *(int *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 276);
  }
  else
  {
    result = 0LL;
  }
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

