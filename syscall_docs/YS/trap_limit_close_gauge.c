---
---
---
name: trap_limit_close_gauge
---
---
---
category: limit
---
---
---
documentation level: untested
---
---
---
push limit_obj ; (YS::LIMIT_1 *)  (A limit object) 
syscall 2, 90 ; trap_limit_close_gauge (1 in, 0 out)
---
---
---
description: Closes the limit gauge
---
---
---
decompiled code:
void __fastcall YS::LIMIT::close_gauge(YS::LIMIT_1 *const this)
/----- (00000000004F56F4) ----------------------------------------------------
void __fastcall YS::trap_limit_close_gauge(BD_VALUE_19 *args)
{
  YS::LIMIT::close_gauge((YS::LIMIT_1 *const)(*args)[0]);
}
->
/----- (000000000043FB18) ----------------------------------------------------
void __fastcall YS::LIMIT::close_gauge(YS::LIMIT_1 *const this)
{
  if ( (*(_DWORD *)&(*this)[180] & 4) != 0 )
    YS::MISSION_GAUGE::deactivate((YS::MISSION_GAUGE_3 *const)(unsigned int)((_DWORD)this + 168));
}


---
---
---
appears in:

---
---
---
example usage from NA

