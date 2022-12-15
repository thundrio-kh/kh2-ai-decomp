/----- (00000000005035F4) ----------------------------------------------------
void __fastcall YS::trap_bg_set_uvscroll_speed_task(TASK_158 *task)
{
  unsigned __int64 v2; // r3
  int v3; // r4
  kn::ModelObj_0 *v4; // r3

  v2 = (unsigned int)((_DWORD)task + 16);
  v3 = (*(_DWORD *)v2)--;
  if ( v3 <= 0 )
  {
    v4 = dk::Map::getModelObj();
    kn::ModelObj::setAnimationSpeedRatio(v4, 2LL, 0LL, 0LL, *(float *)&(*task)[20]);
    TASK::suicide(task);
  }
}

//COMPLICATED dk::Map::getModelObj kn::ModelObj::setAnimationSpeedRatio TASK::suicide