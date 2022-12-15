---
---
---
name: trap_obj_search_by_entry
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
syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ_125 *__fastcall YS::OBJ::SearchByEntry(OBJENTRY_ID id)
/----- (0000000000501F64) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_entry(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchByEntry(*(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000460684) ----------------------------------------------------
YS::OBJ_125 *__fastcall YS::OBJ::SearchByEntry(OBJENTRY_ID id)
{
  YS::OBJ_125 *result; // r3
  unsigned int v2; // r31

  if ( id == 566 )
    return (YS::OBJ_125 *)(unsigned int)YS::PLAYER::Player;
  v2 = (unsigned int)YS::OBJENTRY::Get(id);
  result = 0LL;
  do
    result = YS::OBJ::Each(result);
  while ( (_DWORD)result && *(_DWORD *)&(*result)[8] != v2 );
  return result;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

