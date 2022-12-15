---
---
---
name: trap_attack_dup
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
syscall 2, 31 ; trap_attack_dup (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::ATTACK_MAGIC_3 *__fastcall YS::ATTACK_MAGIC::dup(YS::ATTACK_MAGIC_3 *const this, __int64 param_id)
/----- (00000000004F4680) ----------------------------------------------------
void __fastcall YS::trap_attack_dup(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ATTACK_MAGIC::dup((YS::ATTACK_MAGIC_3 *const)(*args)[0], *(int *)&(*args)[4]);
}
->
/----- (000000000050CD10) ----------------------------------------------------
YS::ATTACK_MAGIC_3 *__fastcall YS::ATTACK_MAGIC::dup(YS::ATTACK_MAGIC_3 *const this, __int64 param_id)
{
  YS::ATTACK_MAGIC_3 *v4; // r28
  YS::ATTACK_MAGIC_3 *v5; // r3
  YS::ATTACK_MAGIC_3 *v6; // r29
  YS::ATTACK_MAGIC_3 *result; // r3

  v4 = 0LL;
  v5 = (YS::ATTACK_MAGIC_3 *)AREA::Alloc(0x140u);
  v6 = v5;
  if ( (_DWORD)v5 )
  {
    YS::ATTACK_MAGIC::ATTACK_MAGIC(
      v5,
      (YS::BTLOBJ *)*(unsigned int *)&(*this)[12],
      param_id,
      *(_DWORD *)&(*this)[32],
      *(int *)&(*this)[24],
      *(_DWORD *)&(*this)[28]);
    v4 = v6;
  }
  result = v4;
  *(_DWORD *)&(*v4)[36] = *(_DWORD *)&(*this)[36];
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

