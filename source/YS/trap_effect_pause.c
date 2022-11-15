/----- (00000000004B8B84) ----------------------------------------------------
void __fastcall YS::trap_effect_pause(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT::stop(
    (ryj::EFFECT_144 *const)(*args)[0],
    (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
}

