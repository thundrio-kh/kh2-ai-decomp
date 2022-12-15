/----- (0000000000625CC0) ----------------------------------------------------
void __fastcall Ts::trap_target_dist(BD_VALUE_25 *args)
{
  *(float *)&(*args)[0] = YS::TARGET::get_dist(
                            (YS::TARGET_108 *const)(*args)[0],
                            (RCFVector)*(unsigned int *)&(*args)[4]);
}

