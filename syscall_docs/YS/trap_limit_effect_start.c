---
---
---
name: trap_limit_effect_start
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
push unk3 ; (unknown) 
syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
ryj::EFFECT_295 *__fastcall YS::LIMIT::start_effect(YS::LIMIT_1 *const this, __int64 id, int flag, YS::OBJ_114 *obj, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F5494) ----------------------------------------------------
void __fastcall YS::trap_limit_effect_start(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  *(_DWORD *)args = (unsigned int)YS::LIMIT::start_effect(
                                    (YS::LIMIT_1 *const)(*args)[0],
                                    *(int *)&(*args)[4],
                                    *(_DWORD *)&(*args)[8],
                                    0LL,
                                    a5,
                                    a6,
                                    a7,
                                    a8);
}
->
/----- (0000000000440800) ----------------------------------------------------
ryj::EFFECT_295 *__fastcall YS::LIMIT::start_effect(YS::LIMIT_1 *const this, __int64 id, int flag, YS::OBJ_114 *obj, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  return ryj::PAX::start(
           (ryj::PAX_161 *const)(unsigned int)((_DWORD)this + 24),
           id,
           flag,
           1LL,
           30000LL,
           (unsigned int *)obj,
           a7,
           a8);
}


---
---
---
appears in:

---
---
---
example usage from NA

