/----- (00000000004F370C) ----------------------------------------------------
void __fastcall YS::trap_enemy_each(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::ENEMY::Each((YS::ENEMY_0 *)(*args)[0]);
}

