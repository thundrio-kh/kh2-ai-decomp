---
---
---
name: trap_event_is_exec
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
syscall 4, 2 ; trap_event_is_exec (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::EVENT::IsExec()
/----- (00000000004F5F88) ----------------------------------------------------
void __fastcall YS::trap_event_is_exec(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::EVENT::IsExec();
}


/----- (00000000005095B4) ----------------------------------------------------
void __fastcall YS::trap_event_is_exec(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::EVENT::IsExec();
}
->
/----- (0000000000428F40) ----------------------------------------------------
bool __cdecl YS::EVENT::IsExec()
{
  return (_cntlzw((unsigned int)YS::Current) & 0x20) == 0;
}
// 7FE71C: using guessed type void *__ptr32 YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

