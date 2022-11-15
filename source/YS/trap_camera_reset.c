/----- (0000000000509CC0) ----------------------------------------------------
void __fastcall YS::trap_camera_reset(BD_VALUE_21 *args)
{
  dk::ObjCamera *v1; // r3

  v1 = dk::ObjCamera::getInstance();
  dk::ObjCamera::setHome(v1);
}

