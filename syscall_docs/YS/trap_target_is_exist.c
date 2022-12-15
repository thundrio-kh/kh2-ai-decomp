---
---
---
name: trap_target_is_exist
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
syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::TARGET::is_exist(const YS::TARGET_108 *const this)
/----- (0000000000508D74) ----------------------------------------------------
void __fastcall YS::trap_target_is_exist(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::TARGET::is_exist((const YS::TARGET_108 *const)(*args)[0]);
}
->
/----- (00000000004A86B8) ----------------------------------------------------
__int64 __fastcall YS::TARGET::is_exist(const YS::TARGET_108 *const this)
{
  __int64 v2; // r30
  unsigned int v3; // r3

  v2 = 0LL;
  if ( *(_DWORD *)&(*this)[8] )
    goto LABEL_7;
  if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*this)[0])
    && YS::OBJ::is_enable_collision((YS::OBJ_128 *const)(*this)[0], *(int *)&(*this)[4]) )
  {
    v3 = (unsigned int)YS::OBJ::get_collision((YS::OBJ_125 *const)(*this)[0], 3, *(_DWORD *)&(*this)[4]);
    if ( !v3 )
      v3 = (unsigned int)YS::OBJ::each_collision((YS::OBJ_125 *const)(*this)[0], 3, 0LL);
    if ( v3 )
LABEL_7:
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

