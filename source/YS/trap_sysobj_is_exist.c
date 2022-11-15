/----- (00000000004F7168) ----------------------------------------------------
void __fastcall YS::trap_sysobj_is_exist(BD_VALUE_21 *args)
{
  int v2; // r30
  YS::OBJ_128 *v3; // r3

  v2 = 0;
  v3 = (YS::OBJ_128 *)(*args)[0];
  if ( (_DWORD)v3 && (unsigned int)YS::OBJ::is_exist(v3) )
    v2 = 1;
  *(_DWORD *)args = v2;
}

