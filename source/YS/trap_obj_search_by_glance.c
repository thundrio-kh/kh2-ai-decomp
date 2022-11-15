/----- (0000000000502088) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_glance(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  OBJENTRY_ID v2; // r3

  v1 = *(unsigned int *)args;
  v2 = *(_DWORD *)&(*args)[4];
  if ( !LS_412_LV_47 )
  {
    LS_412_offset.x = 0.0;
    LS_412_offset.y = 0.0;
    LS_412_offset.w = 1.0;
    LS_412_LV_47 = 1;
    LS_412_offset.z = 10000.0;
  }
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchByCamera(v2, &LS_412_offset, 0);
}
// 2B75E90: using guessed type char LS_412_LV_47;

