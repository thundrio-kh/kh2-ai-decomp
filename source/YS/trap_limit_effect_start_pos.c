/----- (00000000004F54E0) ----------------------------------------------------
void __fastcall YS::trap_limit_effect_start_pos(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
  __int64 v14; // r5
  __int64 v15; // r4
  ryj::EFFECT_144 *v16; // r3
  int v17; // r30
  kn::FVector *v18; // r3

  v16 = YS::LIMIT::start_effect(
          (YS::LIMIT_1 *const)(*args)[0],
          *(int *)&(*args)[4],
          *(_DWORD *)&(*args)[12],
          0LL,
          a5,
          a6,
          a7,
          a8);
  v17 = (int)v16;
  if ( (_DWORD)v16 )
  {
    v18 = (kn::FVector *)ryj::EFFECT::pos(v16, v15, v14, v13, v12, v11, v10, v9);
    kn::FVector::operator=(v18, (const kn::FVector *)*(unsigned int *)&(*args)[8]);
  }
  *(_DWORD *)args = v17;
}
// 4F5528: variable 'v15' is possibly undefined
// 4F5528: variable 'v14' is possibly undefined
// 4F5528: variable 'v13' is possibly undefined
// 4F5528: variable 'v12' is possibly undefined
// 4F5528: variable 'v11' is possibly undefined
// 4F5528: variable 'v10' is possibly undefined
// 4F5528: variable 'v9' is possibly undefined

