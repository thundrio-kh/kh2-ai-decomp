/----- (00000000004B7C3C) ----------------------------------------------------
void __fastcall YS::trap_file_is_reading(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::FILE::IsReading();
}

