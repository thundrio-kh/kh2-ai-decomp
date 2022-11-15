/----- (00000000004F44A4) ----------------------------------------------------
void __fastcall YS::trap_attack_set_radius(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC_3 *v2; // r30
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r7
  __int64 v7; // r6
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4

  v2 = (YS::ATTACK_MAGIC_3 *)(*args)[0];
  if ( (unsigned int)YS::ATTACK::is_exist((YS::ATTACK_10 *const)v2) )
  {
    YS::ATTACK_MAGIC::set_size(v2, *(float *)&(*args)[4], *(float *)&(*args)[8]);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      343LL,
      v7,
      v6,
      v5,
      v4,
      v3);
    printf((unsigned int)"\x1B[41m** CAUTION! ", v14, v13, v12, v11, v10, v9, v8);
    printf((unsigned int)"no such attack", v21, v20, v19, v18, v17, v16, v15);
    printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
  }
}
// 4F4500: variable 'v7' is possibly undefined
// 4F4500: variable 'v6' is possibly undefined
// 4F4500: variable 'v5' is possibly undefined
// 4F4500: variable 'v4' is possibly undefined
// 4F4500: variable 'v3' is possibly undefined
// 4F4510: variable 'v14' is possibly undefined
// 4F4510: variable 'v13' is possibly undefined
// 4F4510: variable 'v12' is possibly undefined
// 4F4510: variable 'v11' is possibly undefined
// 4F4510: variable 'v10' is possibly undefined
// 4F4510: variable 'v9' is possibly undefined
// 4F4510: variable 'v8' is possibly undefined
// 4F4520: variable 'v21' is possibly undefined
// 4F4520: variable 'v20' is possibly undefined
// 4F4520: variable 'v19' is possibly undefined
// 4F4520: variable 'v18' is possibly undefined
// 4F4520: variable 'v17' is possibly undefined
// 4F4520: variable 'v16' is possibly undefined
// 4F4520: variable 'v15' is possibly undefined
// 4F4530: variable 'v28' is possibly undefined
// 4F4530: variable 'v27' is possibly undefined
// 4F4530: variable 'v26' is possibly undefined
// 4F4530: variable 'v25' is possibly undefined
// 4F4530: variable 'v24' is possibly undefined
// 4F4530: variable 'v23' is possibly undefined
// 4F4530: variable 'v22' is possibly undefined

