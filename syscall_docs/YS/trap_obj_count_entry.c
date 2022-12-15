---
---
---
name: trap_obj_count_entry
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
syscall 1, 323 ; trap_obj_count_entry (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::CountEntry(OBJENTRY_ID id)
/----- (000000000050214C) ----------------------------------------------------
void __fastcall YS::trap_obj_count_entry(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::OBJ::CountEntry(*(_DWORD *)args);
}
->
/----- (00000000004625A8) ----------------------------------------------------
__int64 __fastcall YS::OBJ::CountEntry(OBJENTRY_ID id)
{
  __int64 v1; // r30
  YS::OBJ_132 *v3; // r4
  YS::OBJ_132 *v4; // r3

  v1 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = YS::OBJ::Each(v3);
    v3 = v4;
    if ( !(_DWORD)v4 )
      break;
    if ( *(_DWORD *)*(unsigned int *)&(*v4)[8] == id )
      v1 = (int)v1 + 1;
  }
  return v1;
}


---
---
---
appears in:

---
---
---
example usage from NA

