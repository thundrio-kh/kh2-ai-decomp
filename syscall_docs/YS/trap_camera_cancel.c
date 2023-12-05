---
---
---
name: trap_camera_cancel
---
---
---
category: camera
---
---
---
documentation level: untested
---
---
---
push should_interpolate ; (bool)  (Flag for if the screen should be interpolated as the camera is canceled)
syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)
---
---
---
description: Cancel the currecnt camera event
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
limit\jack\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\trinity_zz\limi.bdscript
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
---
---
---
example usage from limit\jack\limi.bdscript
L710:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L738
 pushFromFSp 0
 gosub 4, L2706
 pushFromPSpVal 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L2799
 pushImm 1
 syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)
 ret 
