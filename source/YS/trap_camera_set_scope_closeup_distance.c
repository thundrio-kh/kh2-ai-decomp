/----- (000000000050A20C) ----------------------------------------------------
void __fastcall YS::trap_camera_set_scope_closeup_distance(BD_VALUE_21 *args)
{
  dk::ScopeCamera::setCloseupDistance(*(float *)&(*args)[0]);
}

