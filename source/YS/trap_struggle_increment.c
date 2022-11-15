/----- (00000000004F6A70) ----------------------------------------------------
void __fastcall YS::trap_struggle_increment(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::STRUGGLE::Increment(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

