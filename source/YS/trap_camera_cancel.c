/----- (0000000000509E20) ----------------------------------------------------
void __fastcall YS::trap_camera_cancel(BD_VALUE_21 *args)
{
  sa::EVENT::event_cancel((_cntlzw(*(_DWORD *)args) & 0x20) == 0);
}

