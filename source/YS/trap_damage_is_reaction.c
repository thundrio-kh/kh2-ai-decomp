/----- (00000000004F407C) ----------------------------------------------------
void __fastcall YS::trap_damage_is_reaction(BD_VALUE_19 *args)
{
  int v2; // r3
  BOOL v3; // r4

  v2 = YS::DAMAGE::GetReactionType(*(unsigned __int8 *)(*(unsigned int *)args + 0x26LL));
  v3 = v2 <= -1 || v2 > 1;
  *(_DWORD *)args = v3;
}

