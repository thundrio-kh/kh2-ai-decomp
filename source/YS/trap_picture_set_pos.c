/----- (000000000050B8D0) ----------------------------------------------------
void __fastcall YS::trap_picture_set_pos(BD_VALUE_21 *args)
{
  dk::Layout::setPos((dk::Layout *const)(*args)[0], *(float *)&(*args)[4], *(float *)&(*args)[8]);
}

