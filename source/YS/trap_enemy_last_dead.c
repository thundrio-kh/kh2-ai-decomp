/----- (00000000004F3A5C) ----------------------------------------------------
void __fastcall YS::trap_enemy_last_dead(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ENEMY::GetLastAttacker();
}

