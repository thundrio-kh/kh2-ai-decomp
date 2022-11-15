/----- (00000000004B8970) ----------------------------------------------------
void __fastcall YS::trap_effect_fadeout(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  if ( *(_DWORD *)&(*args)[8] )
    ryj::EFFECT::fadeout_kill(
      (ryj::EFFECT_144 *const)(*args)[0],
      *(unsigned int *)args,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(float *)&(*args)[4]);
  else
    ryj::EFFECT::fadeout_free(
      (ryj::EFFECT_144 *const)(*args)[0],
      *(unsigned int *)args,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(float *)&(*args)[4]);
}

