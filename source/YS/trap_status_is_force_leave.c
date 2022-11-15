/----- (000000000050995C) ----------------------------------------------------
void __fastcall YS::trap_status_is_force_leave(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (YS::STATUS::Flag & 0x80) != 0;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

