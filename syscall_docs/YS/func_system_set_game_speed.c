---
---
---
name: func_system_set_game_speed
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push scale ; (float) Set new game speed
syscall 0, 27 ; func_system_set_game_speed (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 *__fastcall dk::Vsync::setGameSpeed(double a1)
/----- (00000000004B7FA0) ----------------------------------------------------
void __fastcall YS::func_system_set_game_speed(BD_VALUE_16 *args)
{
  dk::Vsync::setGameSpeed(*(float *)&(*args)[0]);
}
->
/----- (0000000000081C58) ----------------------------------------------------
__int64 *__fastcall dk::Vsync::setGameSpeed(double a1)
{
  __int64 *result; // r3

  result = &dk::GS_DEF_ALPHA;
  dk::Vsync::s_gameSpeed = a1;
  return result;
}
// A0AD70: using guessed type float dk::Vsync::s_gameSpeed;
// A10000: using guessed type __int64 dk::GS_DEF_ALPHA;


/----- (00000000000821D4) ----------------------------------------------------
void __fastcall dk::Vsync::setGameSpeed(double from, double to, double time)
{
  dk::Linear::start((dk::Linear *const)&dk::s_gameSpeedFade, from, to, time);
  TASK_MANAGER::create_task(
    (TASK_MANAGER_11 *const)(unsigned int)SystemTask,
    0,
    800000,
    (TASK_FUNC)&dk::Vsync::gameSpeedTask);
}
// 792AB8: using guessed type __int64 (__fastcall *__ptr32 dk::Vsync::gameSpeedTask)(TASK_5 *this, TASK *);
// 84CAC0: using guessed type int SystemTask;
// A0AE98: using guessed type float dk::s_gameSpeedFade;


---
---
---
appears in:

---
---
---
example usage from NA

