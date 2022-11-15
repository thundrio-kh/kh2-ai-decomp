/----- (00000000005096BC) ----------------------------------------------------
void __fastcall YS::trap_pax_start(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  *(_DWORD *)args = (unsigned int)ryj::PAX::start(
                                    (ryj::PAX_161 *const)(*args)[0],
                                    *(int *)&(*args)[4],
                                    *(_DWORD *)&(*args)[8],
                                    1LL,
                                    *(int *)&(*args)[12],
                                    0LL,
                                    a7,
                                    a8);
}

