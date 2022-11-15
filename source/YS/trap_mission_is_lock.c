/----- (00000000004F61A8) ----------------------------------------------------
void __fastcall YS::trap_mission_is_lock(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MUTEX::is_lock((YS::MUTEX *const)&YS::MUTEX::Mission, 0);
}
// 2A9F320: using guessed type int YS::MUTEX::Mission;

