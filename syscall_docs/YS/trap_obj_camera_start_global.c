---
---
---
name: trap_obj_camera_start_global
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPWp: W176) (pushFromPSpVal: 0) (pushFromPSp: 16,32,48)
push unk2 ; (unknown)  (pushFromPAi: L13847 ; ___ai '00' (L13847),L13898 ; ___ai '10' (L13898),L14425 ; ___ai '00' (L14425),L14476 ; ___ai '10' (L14476),L18490 ; ___ai '20' (L18490),...)
syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::start_camera(YS::STDOBJ_112 *const this, const char *label, YS::OBJ_164 *target)
/----- (0000000000502410) ----------------------------------------------------
void __fastcall YS::trap_obj_camera_start_global(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  YS::STDOBJ::start_camera((YS::STDOBJ_112 *const)v4, (const char *)*(unsigned int *)&(*args)[4], 0LL);
}
// 502434: variable 'back_chain' is possibly undefined
->
/----- (00000000004A2284) ----------------------------------------------------
void __fastcall YS::STDOBJ::start_camera(YS::STDOBJ_112 *const this, const char *label, YS::OBJ_164 *target)
{
  int v3; // r30
  const YS::BINARC_47 *v5; // r3
  unsigned __int64 v6; // r3
  unsigned int *v7; // r29
  YS::EVENT_10 *v8; // r27
  YS::EVENT_10 *v9; // r3
  YS::EVENT_10 *v10; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v3 = (int)this;
  v5 = (const YS::BINARC_47 *)*(unsigned int *)&(*this)[1968];
  if ( (_DWORD)v5
    && (v6 = YS::BINARC::get_info_by_tag(
               v5,
               0x16u,
               *label | (label[1] << 8) | (label[2] << 16) | (unsigned int)(label[3] << 24),
               0LL),
        (_DWORD)v6) )
  {
    v7 = (unsigned int *)*(unsigned int *)(v6 + 8);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !(_DWORD)v7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      206LL,
      "start_camera",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 206);
  }
  v8 = 0LL;
  v9 = (YS::EVENT_10 *)AREA::Alloc(0xB0u);
  v10 = v9;
  if ( (_DWORD)v9 )
  {
    YS::EVENT::EVENT(v9, 11, v7);
    v8 = v10;
  }
  *(_DWORD *)&(*v8)[8] = v3 + 128;
  if ( (_DWORD)target )
    YS::EVENT::set_camera_target(v8, target);
  YS::EVENT::start(v8);
}
// 4A2324: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
---
---
---
example usage from obj\B_EX110\b_ex.bdscript
L140:
 popToSp 4
 popToSp 0
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf -1
 pushImmf 1
 gosub 12, L225
 pushFromFSp 4
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L252
 pushFromFSp 4
 pushFromPSp 16
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L13898 ; ___ai '10' (L13898)
 syscall 1, 164 ; trap_obj_camera_start_global (2 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 pushImm 255
 pushImmf 0
 gosub 12, L272
 drop 
 pushFromFSp 4
 fetchValue 4
 pushImm 4
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 0
 pushFromPAi L13913 ; ___ai 'rc_clear_light' (L13913)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushImm L303
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 ret 
