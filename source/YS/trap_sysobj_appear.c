/----- (00000000004F71C8) ----------------------------------------------------
void __fastcall YS::trap_sysobj_appear(BD_VALUE_21 *args)
{
  __int64 v2; // r3

  v2 = *(unsigned int *)args;
  if ( !LS_262_LV_29 )
  {
    LS_262_pos.x = 0.0;
    LS_262_LV_29 = 1;
    LS_262_pos.y = 0.0;
    LS_262_pos.z = 0.0;
    LS_262_pos.w = 1.0;
  }
  *(_DWORD *)args = (unsigned int)YS::OBJENTRY::Appear(v2, &LS_262_pos, 3.1415927);
}
// 2B75E78: using guessed type char LS_262_LV_29;

