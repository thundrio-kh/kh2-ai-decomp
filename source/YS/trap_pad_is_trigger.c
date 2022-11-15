/----- (00000000004B7BD8) ----------------------------------------------------
void __fastcall YS::trap_pad_is_trigger(BD_VALUE_16 *args)
{
  *(_DWORD *)args = (YS::SOFTPAD::Get(0)->Trigger & (1LL << *(_DWORD *)args)) != 0;
}

