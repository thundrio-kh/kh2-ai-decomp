/----- (0000000000503524) ----------------------------------------------------
void __fastcall YS::trap_bg_set_belt_conveyor_task(TASK_158 *task)
{
  unsigned __int64 v1; // r4
  int v2; // r5
  double v3; // fp2
  double v4; // fp3

  v1 = (unsigned int)((_DWORD)task + 16);
  v2 = (*(_DWORD *)v1)--;
  if ( v2 <= 0 )
  {
    v3 = *(float *)&(*task)[24];
    v4 = *(float *)&(*task)[28];
    YS::BG::BeltConveyor = *(int *)&(*task)[20];
    *(float *)&dword_C78964 = v3;
    *(float *)&dword_C78968 = v4;
    dword_C7896C = 0;
    TASK::suicide(task);
  }
}
// C78960: using guessed type int YS::BG::BeltConveyor;
// C78964: using guessed type int dword_C78964;
// C78968: using guessed type int dword_C78968;
// C7896C: using guessed type int dword_C7896C;

