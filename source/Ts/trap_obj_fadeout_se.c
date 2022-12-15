/----- (0000000000628B00) ----------------------------------------------------
void __fastcall Ts::trap_obj_fadeout_se(BD_VALUE_25 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  SOUND::destroySe(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(unsigned int *)&(*args)[4], a4, a5, a6, a7, a8);
}

