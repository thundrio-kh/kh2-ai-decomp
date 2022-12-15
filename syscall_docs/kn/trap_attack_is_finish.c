---
---
---
name: trap_attack_is_finish
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
syscall 10, 38 ; trap_attack_is_finish (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::ATTACK::is_finish(const YS::ATTACK_10 *const this)
/----- (000000000061368C) ----------------------------------------------------
void __fastcall kn::trap_attack_is_finish(BD_VALUE_22 *args)
{
  *(_DWORD *)args = YS::ATTACK::is_finish((const YS::ATTACK_10 *const)(*args)[0]);
}
->
/----- (0000000000408730) ----------------------------------------------------
__int64 __fastcall YS::ATTACK::is_finish(const YS::ATTACK_10 *const this)
{
  return YS::DAMAGE::IsFinish(*(unsigned __int8 *)(*(unsigned int *)&(*this)[40] + 0xALL));
}


---
---
---
appears in:

---
---
---
example usage from NA

