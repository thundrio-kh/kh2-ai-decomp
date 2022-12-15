---
---
---
name: trap_mission_is_lock
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
syscall 4, 55 ; trap_mission_is_lock (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::MUTEX::is_lock(YS::MUTEX *const this, int id)
/----- (00000000004F61A8) ----------------------------------------------------
void __fastcall YS::trap_mission_is_lock(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MUTEX::is_lock((YS::MUTEX *const)&YS::MUTEX::Mission, 0);
}
// 2A9F320: using guessed type int YS::MUTEX::Mission;
->
/----- (000000000045DA28) ----------------------------------------------------
bool __fastcall YS::MUTEX::is_lock(YS::MUTEX *const this, int id)
{
  unsigned int v5; // r30

  if ( YS::CHECK_CACHEBUFF::IsExec() )
    return 1;
  if ( id )
    v5 = this->Lock & (1 << id);
  else
    v5 = this->Lock;
  return (_cntlzw(v5) & 0x20) == 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

