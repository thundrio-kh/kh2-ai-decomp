/----- (00000000005071E0) ----------------------------------------------------
void __fastcall YS::trap_obj_jump_height_to_uptime(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::MATH::JumpHeightToUpTime(*(float *)&(*args)[0]);
}

