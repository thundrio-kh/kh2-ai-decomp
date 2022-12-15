---
---
---
name: trap_damage_is_finish
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
syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::DAMAGE::is_finish(const YS::DAMAGE_5 *const this)
/----- (00000000004F4268) ----------------------------------------------------
void __fastcall YS::trap_damage_is_finish(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::DAMAGE::is_finish((const YS::DAMAGE_5 *const)(*args)[0]);
}
->
/----- (00000000004221FC) ----------------------------------------------------
__int64 __fastcall YS::DAMAGE::is_finish(const YS::DAMAGE_5 *const this)
{
  int v1; // r3

  v1 = (unsigned __int8)(*this)[39];
  if ( v1 > 7 )
  {
    if ( v1 > 9 && v1 <= 11 )
      return 1LL;
  }
  else if ( v1 > 5 )
  {
    return 1LL;
  }
  return 0LL;
}


---
---
---
appears in:

---
---
---
example usage from NA

