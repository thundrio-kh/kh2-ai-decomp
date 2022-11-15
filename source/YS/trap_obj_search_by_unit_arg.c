/----- (0000000000502014) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_unit_arg(BD_VALUE_21 *args)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_125 *v3; // r3

  v2 = 0LL;
  do
  {
    v3 = YS::OBJ::Each(v2);
    v2 = v3;
  }
  while ( (_DWORD)v3 && (unsigned int)YS::OBJ::get_unit_arg(v3, *(_DWORD *)&(*args)[4]) != *(_DWORD *)&(*args)[8] );
  *(_DWORD *)(*(unsigned int *)args + 4LL) = (_DWORD)v2;
}

