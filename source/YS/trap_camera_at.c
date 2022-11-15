/----- (000000000050A190) ----------------------------------------------------
void __fastcall YS::trap_camera_at(BD_VALUE_21 *args)
{
  const kn::Camera *v2; // r3

  v2 = kn::getCamera(1);
  kn::Camera::getReference(v2, (kn::FVector *)&ResultVector);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;

