/----- (0000000000503668) ----------------------------------------------------
void __fastcall YS::trap_bg_set_uvscroll_speed(BD_VALUE_21 *args)
{
  TASK_0 *v2; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  if ( *(float *)&(*args)[0] < 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].f >= 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      266LL,
      "trap_bg_set_uvscroll_speed",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 266);
  }
  v2 = FIELD::CreateTask(1, 14002, (TASK_FUNC)&YS::trap_bg_set_uvscroll_speed_task);
  *(_DWORD *)&(*v2)[16] = 0;
  *(float *)&(*v2)[20] = *(float *)&(*args)[0];
}
// 503690: variable 'back_chain' is possibly undefined
// 79DD88: using guessed type __int64 (__fastcall *__ptr32 YS::trap_bg_set_uvscroll_speed_task)(TASK_5 *this, TASK *);

