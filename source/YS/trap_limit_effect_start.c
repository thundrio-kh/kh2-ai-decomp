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

