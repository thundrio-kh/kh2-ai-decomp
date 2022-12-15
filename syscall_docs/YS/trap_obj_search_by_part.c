---
---
---
name: trap_obj_search_by_part
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
syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ_125 *__fastcall YS::OBJ::SearchByPart(int part)
/----- (0000000000501FD8) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_part(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchByPart(*(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004607D8) ----------------------------------------------------
YS::OBJ_125 *__fastcall YS::OBJ::SearchByPart(int part)
{
  YS::OBJ_125 *result; // r3

  result = 0LL;
  do
    result = YS::OBJ::Each(result);
  while ( (_DWORD)result && *(unsigned __int16 *)(*(unsigned int *)&(*result)[8] + 0x4CLL) != part );
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

