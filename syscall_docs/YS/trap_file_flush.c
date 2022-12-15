---
---
---
name: trap_file_flush
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
syscall 0, 12 ; trap_file_flush (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::CACHE_BUFF::Flush(TASK_139 *task)
/----- (00000000004B7C70) ----------------------------------------------------
void __fastcall YS::trap_file_flush(BD_VALUE_16 *args)
{
  YS::CACHE_BUFF::Flush(0LL);
}
->
/----- (0000000000416F9C) ----------------------------------------------------
void __fastcall YS::CACHE_BUFF::Flush(TASK_139 *task)
{
  YS::CACHE_BUFF::Dump();
  if ( (_DWORD)task )
  {
    while ( YS::CACHE_BUFF::IsFlushing() )
      TASK::sleep(task, 0);
  }
  YS::CACHE_BUFF::FlushCompaction();
  YS::CACHE_BUFF::FlushRead();
  if ( (_DWORD)task )
  {
    while ( YS::CACHE_BUFF::IsFlushing() )
      TASK::sleep(task, 0);
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

