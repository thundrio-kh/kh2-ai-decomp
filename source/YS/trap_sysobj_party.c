/----- (0000000000506AD4) ----------------------------------------------------
void __fastcall YS::trap_sysobj_party(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::PARTY::Get(*(_DWORD *)args);
}

