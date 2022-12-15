---
---
---
name: trap_bg_get_random_pos
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
syscall 1, 247 ; trap_bg_get_random_pos (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BG::RandomPos(const kn::FVector *center, const kn::FVector *a2, double near, int type, int a5, double far)
/----- (0000000000503738) ----------------------------------------------------
void __fastcall YS::trap_bg_get_random_pos(BD_VALUE_21 *args, __int64 a2, __int64 a3, int a4)
{
  kn::FVector v5; // [sp+70h] [-30h] BYREF

  YS::BG::RandomPos(&v5, (const kn::FVector *)(*args)[0], *(float *)&(*args)[4], a4, 1, *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
->
/----- (000000000040DFC4) ----------------------------------------------------
void __fastcall YS::BG::RandomPos(const kn::FVector *center, const kn::FVector *a2, double near, int type, int a5, double far)
{
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r7
  __int64 v11; // r6
  __int64 v12; // r5
  YS::BG::RANDOM_POS v13; // [sp+70h] [-40h] BYREF

  YS::BG::RANDOM_POS::RANDOM_POS(&v13, a2, near, far, a5);
  YS::BG::RANDOM_POS::search((YS::BG::RANDOM_POS *const)center, (__int64)&v13, v12, v11, v10, v9, v8, v7);
}
// 40DFF0: variable 'v12' is possibly undefined
// 40DFF0: variable 'v11' is possibly undefined
// 40DFF0: variable 'v10' is possibly undefined
// 40DFF0: variable 'v9' is possibly undefined
// 40DFF0: variable 'v8' is possibly undefined
// 40DFF0: variable 'v7' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

