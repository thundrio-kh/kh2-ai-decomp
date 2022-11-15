/----- (00000000004F6178) ----------------------------------------------------
void __fastcall YS::trap_mission_lock(BD_VALUE_20 *args)
{
  YS::MUTEX::lock((YS::MUTEX *const)&YS::MUTEX::Mission, 0);
}
// 2A9F320: using guessed type int YS::MUTEX::Mission;

