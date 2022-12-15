---
---
---
name: trap_screen_cross_fade
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
push unk1 ; (unknown) 
syscall 0, 77 ; trap_screen_cross_fade (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Camera::singleCrossFadeStart(double frame)
/----- (00000000004B8178) ----------------------------------------------------
void __fastcall YS::trap_screen_cross_fade(BD_VALUE_16 *args)
{
  dk::Camera::singleCrossFadeStart((float)(*(float *)&(*args)[0] / (float)((float)1.0 * (float)2.0)));
}
->
/----- (0000000000048798) ----------------------------------------------------
void __fastcall dk::Camera::singleCrossFadeStart(double frame)
{
  TASK_0 *v2; // r3
  GAME_MODE_0 *v3; // r3
  void *v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  TASK_0 *v8; // r3

  v2 = FIELD::CreateTask(1, 100000, (TASK_FUNC)&dk::Camera::crossFadeStartTask);
  *(_DWORD *)&(*v2)[28] = 1;
  BYTE5(WORLD::table[15]) = 1;
  *(float *)&(*v2)[16] = (float)frame + (float)frame;
  FIELD::CreateTask(1, 90000, (TASK_FUNC)&dk::Camera::storeImageTask);
  if ( LODWORD(WORLD::table[16]) )
  {
    v3 = getFieldMode();
    TASK_MANAGER::unlink(
      (TASK_MANAGER_11 *const)*(unsigned int *)&(*v3)[4],
      (TASK_5 *)LODWORD(WORLD::table[16]),
      v7,
      v6,
      v5,
      v4);
  }
  v8 = FIELD::CreateTask(1, 90120, (TASK_FUNC)&dk::Camera::singleAfter2CameraTask);
  LODWORD(WORLD::table[16]) = (_DWORD)v8;
  *(_DWORD *)&(*v8)[60] = (unsigned int)&dk::Camera::singleAfter2CameraTaskFinalizer;
}
// 48820: variable 'v7' is possibly undefined
// 48820: variable 'v6' is possibly undefined
// 48820: variable 'v5' is possibly undefined
// 48820: variable 'v4' is possibly undefined
// 7923C0: using guessed type __int64 (__fastcall *__ptr32 dk::Camera::singleAfter2CameraTask)(TASK_5 *this, TASK *);
// 7923E8: using guessed type __int64 (__fastcall *__ptr32 dk::Camera::crossFadeStartTask)(TASK_5 *this, TASK *);
// 7923F0: using guessed type __int64 (__fastcall *__ptr32 dk::Camera::storeImageTask)(TASK_5 *this, TASK *);
// 7923F8: using guessed type __int64 (__fastcall *__ptr32 dk::Camera::singleAfter2CameraTaskFinalizer)(dk::Camera *__hidden this, TASK *);


---
---
---
appears in:

---
---
---
example usage from NA

