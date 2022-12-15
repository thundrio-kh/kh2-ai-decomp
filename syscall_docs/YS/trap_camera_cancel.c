---
---
---
name: trap_camera_cancel
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
syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall sa::EVENT::event_cancel(bool interpolate)
/----- (0000000000509E20) ----------------------------------------------------
void __fastcall YS::trap_camera_cancel(BD_VALUE_21 *args)
{
  sa::EVENT::event_cancel((_cntlzw(*(_DWORD *)args) & 0x20) == 0);
}
->
/----- (00000000002BE008) ----------------------------------------------------
void __fastcall sa::EVENT::event_cancel(bool interpolate)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r7
  __int64 v11; // r6
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r7
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r7
  __int64 v20; // r6
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r7
  __int64 v25; // r6
  int v26; // r4

  if ( YS::EVENT::IsExec() )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\sasa\\event.cpp", 863LL, v6, v5, v4, v3, v2);
    printf(
      (unsigned int)"<<<<<<<<<< event cancel %d frame %d>>>>>>>>>\n",
      (unsigned int)MainCounter,
      sa::EVENT::m_frame,
      v11,
      v10,
      v9,
      v8,
      v7);
    sa::EVENT::m_interpolate = interpolate;
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\sasa\\event.cpp",
      834LL,
      (__int64)&kn::SHADOW_S_FRAME,
      v15,
      v14,
      v13,
      v12);
    printf(
      (unsigned int)"<<<<<<<<<< event end %d frame %d>>>>>>>>>\n",
      (unsigned int)MainCounter,
      sa::EVENT::m_frame,
      v20,
      v19,
      v18,
      v17,
      v16);
    if ( sa::EVENT::m_event_mode != 4 )
    {
      sa::EVENT::m_event_mode = 4;
      dk::SoftReset::disable();
      dk::Pause::disable(0);
      sa::EVENT::audio_free();
      SOUND::destroyEventSe();
      if ( YS::EVENT::IsExec() && SOUND::isEventMode() )
      {
        YI::VIBRATION::Stop();
        v26 = 15000;
        if ( !sa::EVENT::m_event_buffer_size )
          v26 = 25000;
        FIELD::CreateThread(1, v26, (TASK_FUNC)&sa::EVENT::event_endThread, 4096);
      }
      else
      {
        sa::EVENT::m_event_task_kill = 1;
        sa::EVENT::event_endThread(0LL, (__int64)&kn::SHADOW_S_FRAME, 1LL, v25, v24, v23, v22, v21);
      }
      eventCameraHosei(1, sa::project_name);
    }
  }
}
// 2BE058: variable 'v6' is possibly undefined
// 2BE058: variable 'v5' is possibly undefined
// 2BE058: variable 'v4' is possibly undefined
// 2BE058: variable 'v3' is possibly undefined
// 2BE058: variable 'v2' is possibly undefined
// 2BE07C: variable 'v11' is possibly undefined
// 2BE07C: variable 'v10' is possibly undefined
// 2BE07C: variable 'v9' is possibly undefined
// 2BE07C: variable 'v8' is possibly undefined
// 2BE07C: variable 'v7' is possibly undefined
// 2BE098: variable 'v15' is possibly undefined
// 2BE098: variable 'v14' is possibly undefined
// 2BE098: variable 'v13' is possibly undefined
// 2BE098: variable 'v12' is possibly undefined
// 2BE0B4: variable 'v20' is possibly undefined
// 2BE0B4: variable 'v19' is possibly undefined
// 2BE0B4: variable 'v18' is possibly undefined
// 2BE0B4: variable 'v17' is possibly undefined
// 2BE0B4: variable 'v16' is possibly undefined
// 2BE168: variable 'v25' is possibly undefined
// 2BE168: variable 'v24' is possibly undefined
// 2BE168: variable 'v23' is possibly undefined
// 2BE168: variable 'v22' is possibly undefined
// 2BE168: variable 'v21' is possibly undefined
// 796F28: using guessed type __int64 (__fastcall *__ptr32 sa::EVENT::event_endThread)(TASK_90 *task, TASK *);
// 817590: using guessed type int MainCounter;
// ACFA8C: using guessed type int sa::EVENT::m_event_buffer_size;
// ACFA94: using guessed type int sa::EVENT::m_frame;
// ACFA9C: using guessed type char sa::EVENT::m_interpolate;
// ACFA9D: using guessed type char sa::EVENT::m_event_task_kill;
// ACFBEC: using guessed type int sa::EVENT::m_event_mode;
// AD0000: using guessed type __int64 kn::SHADOW_S_FRAME;


---
---
---
appears in:

---
---
---
example usage from NA

