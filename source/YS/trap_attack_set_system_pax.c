/----- (00000000004F4648) ----------------------------------------------------
void __fastcall YS::trap_attack_set_system_pax(BD_VALUE_19 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x24LL) = (unsigned int)YS::EFFECT::GetSystemPax();
}

