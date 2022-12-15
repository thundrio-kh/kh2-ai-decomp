---
---
---
name: trap_bg_get_random_pos_air
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
push unk4 ; (unknown) 
push unk5 ; (unknown) 
syscall 1, 248 ; trap_bg_get_random_pos_air (5 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BG::RandomPosAir(const kn::FVector *center, const kn::FVector *a2, double near, double far, double low, int type, int a7, double high)
/----- (00000000005037AC) ----------------------------------------------------
void __fastcall YS::trap_bg_get_random_pos_air(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  kn::FVector v7; // [sp+70h] [-30h] BYREF

  YS::BG::RandomPosAir(
    &v7,
    (const kn::FVector *)(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    a6,
    2,
    *(float *)&(*args)[16]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v7);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
->
/----- (000000000040E478) ----------------------------------------------------
void __fastcall YS::BG::RandomPosAir(const kn::FVector *center, const kn::FVector *a2, double near, double far, double low, int type, int a7, double high)
{
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  YS::BG::RANDOM_POS v15; // [sp+70h] [-50h] BYREF

  YS::BG::RANDOM_POS::RANDOM_POS(&v15, a2, near, far, a7);
  YS::BG::RANDOM_POS::search_air((YS::BG::RANDOM_POS *const)center, (__int64)&v15, low, high, v14, v13, v12, v11);
}
// 40E4C0: variable 'v14' is possibly undefined
// 40E4C0: variable 'v13' is possibly undefined
// 40E4C0: variable 'v12' is possibly undefined
// 40E4C0: variable 'v11' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

