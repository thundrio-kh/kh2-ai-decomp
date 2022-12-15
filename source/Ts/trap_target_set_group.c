/----- (0000000000625E88) ----------------------------------------------------
void __fastcall Ts::trap_target_set_group(BD_VALUE_25 *args)
{
  YS::TARGET::set_obj(
    (YS::TARGET_108 *const)(*args)[0],
    (YS::OBJ_168 *)*(unsigned int *)(*args)[0],
    *(_DWORD *)&(*args)[4]);
}

