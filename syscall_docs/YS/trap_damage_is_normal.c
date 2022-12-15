---
---
---
name: trap_damage_is_normal
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
syscall 2, 93 ; trap_damage_is_normal (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::DAMAGE::is_normal(const YS::DAMAGE_5 *const this)
/----- (00000000004F42A0) ----------------------------------------------------
void __fastcall YS::trap_damage_is_normal(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::DAMAGE::is_normal((const YS::DAMAGE_5 *const)(*args)[0]);
}
->
/----- (0000000000422250) ----------------------------------------------------
bool __fastcall YS::DAMAGE::is_normal(const YS::DAMAGE_5 *const this)
{
  int v1; // r3

  v1 = (unsigned __int8)(*this)[39];
  if ( v1 <= 5 )
    return v1 <= 1 || v1 > 2 && v1 <= 4;
  if ( v1 > 14 )
    return v1 <= 15 || v1 <= 16;
  return v1 <= 7;
}
// 42226C: conditional instruction was optimized away because of 'r3.4<2u'


---
---
---
appears in:

---
---
---
example usage from NA

