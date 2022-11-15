/----- (0000000000501F9C) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_serial(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchBySerial(*(_DWORD *)&(*args)[4]);
}

