---
---
---
name: trap_sysobj_is_exist
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
syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
/----- (00000000004F7168) ----------------------------------------------------
void __fastcall YS::trap_sysobj_is_exist(BD_VALUE_21 *args)
{
  int v2; // r30
  YS::OBJ_128 *v3; // r3

  v2 = 0;
  v3 = (YS::OBJ_128 *)(*args)[0];
  if ( (_DWORD)v3 && (unsigned int)YS::OBJ::is_exist(v3) )
    v2 = 1;
  *(_DWORD *)args = v2;
}
->
/----- (0000000000464804) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_exist(YS::OBJ_128 *const this)
{
  __int64 v2; // r30
  int v3; // r31

  v2 = 0LL;
  if ( (unsigned int)YS::OBJ::is_valid(this) )
  {
    v3 = *(_DWORD *)&(*this)[264];
    if ( (v3 & 0x80000) == 0 && (v3 & 0x10000000) == 0 )
      v2 = 1LL;
  }
  return v2;
}


---
---
---
appears in:

---
---
---
example usage from NA

