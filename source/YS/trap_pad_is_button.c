/----- (00000000004B7B74) ----------------------------------------------------
void __fastcall YS::trap_pad_is_button(BD_VALUE_16 *args)
{
  *(_DWORD *)args = (YS::SOFTPAD::Get(0)->Button & (1LL << *(_DWORD *)args)) != 0;
}

