/----- (0000000000509C94) ----------------------------------------------------
void __fastcall YS::trap_camera_warp(BD_VALUE_21 *args)
{
  dk::ObjCamera *v1; // r3

  v1 = dk::ObjCamera::getInstance();
  dk::ObjCamera::setWarp(v1);
}

