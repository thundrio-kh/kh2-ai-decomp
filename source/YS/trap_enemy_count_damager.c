/----- (00000000004F3A90) ----------------------------------------------------
void __fastcall YS::trap_enemy_count_damager(BD_VALUE_19 *args)
{
  int v1; // r30
  YS::ENEMY_0 *v3; // r29
  YS::BTLOBJ *v4; // r3

  v1 = 0;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (YS::BTLOBJ *)YS::ENEMY::Each(v3);
    v3 = (YS::ENEMY_0 *)v4;
    if ( !(_DWORD)v4 )
      break;
    if ( (unsigned int)YS::BTLOBJ::is_damage_motion(v4) )
      ++v1;
  }
  *(_DWORD *)args = v1;
}

