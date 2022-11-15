/----- (00000000004F728C) ----------------------------------------------------
void __fastcall YS::trap_sysobj_player(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::OBJ::GetPlayer();
}

