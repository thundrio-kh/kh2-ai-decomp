/----- (00000000004F422C) ----------------------------------------------------
void __fastcall YS::trap_damage_get_reaction_type(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::DAMAGE::GetReactionType(*(int *)args);
}

