/----- (0000000000613260) ----------------------------------------------------
void __fastcall kn::trap_friend_get_player_attacker(BD_VALUE_22 *args)
{
  int v2; // r30
  YS::OBJ_28 *v3; // r3

  v2 = *(_DWORD *)args;
  v3 = (YS::OBJ_28 *)kn::Friend::getPlayerAttacker(-1);
  *(_DWORD *)args = (_DWORD)v3;
  if ( v2 )
    kn::Friend::removePlayerAttacker(v3, 1);
}

//COMPLICATED kn::Friend::getPlayerAttacker kn::Friend::removePlayerAttacker