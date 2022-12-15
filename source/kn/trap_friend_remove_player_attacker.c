/----- (00000000006132B8) ----------------------------------------------------
void __fastcall kn::trap_friend_remove_player_attacker(BD_VALUE_22 *args)
{
  kn::Friend::removePlayerAttacker((YS::OBJ_28 *)(*args)[0], (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0);
}

