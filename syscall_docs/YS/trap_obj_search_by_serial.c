---
---
---
name: trap_obj_search_by_serial
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
push unk2 ; (unknown) 
syscall 1, 143 ; trap_obj_search_by_serial (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ_125 *__fastcall YS::OBJ::SearchBySerial(int serial)
/----- (0000000000501F9C) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_serial(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchBySerial(*(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000460704) ----------------------------------------------------
YS::OBJ_125 *__fastcall YS::OBJ::SearchBySerial(int serial)
{
  YS::OBJ_125 *result; // r3
  int v3; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !serial )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "serial != 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      971LL,
      "SearchBySerial",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 971);
  }
  result = 0LL;
  do
  {
    result = YS::OBJ::Each(result);
    if ( !(_DWORD)result )
      break;
    v3 = 0;
    if ( *(_DWORD *)&(*result)[2076] )
      v3 = *(unsigned __int16 *)(*(unsigned int *)&(*result)[2076] + 0x1ELL);
  }
  while ( v3 != serial );
  return result;
}
// 460720: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

