/----- (000000000050A1E4) ----------------------------------------------------
void __fastcall YS::trap_camera_set_scope_zoom(BD_VALUE_21 *args)
{
  dk::ScopeCamera::setZoom(*(float *)&(*args)[0]);
}

