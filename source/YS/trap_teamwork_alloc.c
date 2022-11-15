/----- (00000000004F5190) ----------------------------------------------------
void __fastcall YS::trap_teamwork_alloc(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::TEAMWORK::Alloc(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

