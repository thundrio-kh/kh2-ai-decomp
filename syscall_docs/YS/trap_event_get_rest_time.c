---
---
---
name: trap_event_get_rest_time
---
---
---
category: event
---
---
---
documentation level: untested
---
---
---
syscall 1, 274 ; trap_event_get_rest_time (0 in, 1 out)
pop rest_time ; (float) 
---
---
---
description: Gets the amount of time that the event should rest

/* Pseudopython version of GetRestTime()
def GetRestTime:
  if YS::Current:
    return 0
  if *YS::Current + 12 == 8:
    return sa::EVENT::getRestFrame()
  return 3600
*/
---
---
---
decompiled code:
float __cdecl YS::EVENT::GetRestTime()
/----- (00000000005095E8) ----------------------------------------------------
void __fastcall YS::trap_event_get_rest_time(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::EVENT::GetRestTime();
}
->
/----- (0000000000428FE8) ----------------------------------------------------
float __cdecl YS::EVENT::GetRestTime()
{
  if ( !YS::Current )
    return 0.0;
  if ( *((_DWORD *)YS::Current + 12) == 8 )
    return (float)sa::EVENT::getRestFrame();
  return 3600.0;
}
// 7FE71C: using guessed type void *__ptr32 YS::Current;


---
---
---
appears in:
obj\M_EX660_WI_RAW\m_ex.bdscript ()
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\M_EX660_WI_RAW\m_ex.bdscript
L2592:
 syscall 1, 274 ; trap_event_get_rest_time (0 in, 1 out)
 pushFromFSp 4
 subf 
 supzf 
 jz L2603
 halt 
 jmp L2592
