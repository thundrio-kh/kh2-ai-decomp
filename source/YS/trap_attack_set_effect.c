/----- (00000000004F48A4) ----------------------------------------------------
void __fastcall YS::trap_attack_set_effect(BD_VALUE_19 *args)
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
    YS::ATTACK_MAGIC::set_effect(v2, (ryj::EFFECT_431 *)*(unsigned int *)&(*args)[4]);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      477LL,
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
// 4F48FC: variable 'v7' is possibly undefined
// 4F48FC: variable 'v6' is possibly undefined
// 4F48FC: variable 'v5' is possibly undefined
// 4F48FC: variable 'v4' is possibly undefined
// 4F48FC: variable 'v3' is possibly undefined
// 4F490C: variable 'v14' is possibly undefined
// 4F490C: variable 'v13' is possibly undefined
// 4F490C: variable 'v12' is possibly undefined
// 4F490C: variable 'v11' is possibly undefined
// 4F490C: variable 'v10' is possibly undefined
// 4F490C: variable 'v9' is possibly undefined
// 4F490C: variable 'v8' is possibly undefined
// 4F491C: variable 'v21' is possibly undefined
// 4F491C: variable 'v20' is possibly undefined
// 4F491C: variable 'v19' is possibly undefined
// 4F491C: variable 'v18' is possibly undefined
// 4F491C: variable 'v17' is possibly undefined
// 4F491C: variable 'v16' is possibly undefined
// 4F491C: variable 'v15' is possibly undefined
// 4F492C: variable 'v28' is possibly undefined
// 4F492C: variable 'v27' is possibly undefined
// 4F492C: variable 'v26' is possibly undefined
// 4F492C: variable 'v25' is possibly undefined
// 4F492C: variable 'v24' is possibly undefined
// 4F492C: variable 'v23' is possibly undefined
// 4F492C: variable 'v22' is possibly undefined

//CHEAT YS::ATTACK_MAGIC::set_effect