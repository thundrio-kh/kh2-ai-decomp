/----- (00000000004B8880) ----------------------------------------------------
void __fastcall YS::trap_effect_is_active(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  *(_DWORD *)args = ryj::EFFECT::is_active((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
}

