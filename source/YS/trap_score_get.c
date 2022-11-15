/----- (00000000004F6A34) ----------------------------------------------------
void __fastcall YS::trap_score_get(BD_VALUE_20 *args)
{
  *(_DWORD *)args = (unsigned int)YS::MINIGAME::GetScore(*(_DWORD *)args);
}

