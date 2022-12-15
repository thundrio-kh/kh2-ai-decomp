---
---
---
name: trap_obj_camera_start
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
push unk2 ; (unknown) 
push unk3 ; (unknown) 
syscall 1, 219 ; trap_obj_camera_start (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::start_camera(YS::STDOBJ_112 *const this, const char *label, YS::OBJ_164 *target)
/----- (00000000005021BC) ----------------------------------------------------
void __fastcall YS::trap_obj_camera_start(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  const char *v5; // r28
  __int64 v6; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v5 = (const char *)*(unsigned int *)&(*args)[4];
  v6 = *(unsigned int *)&(*args)[8];
  if ( !(_DWORD)v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v6 & 3) != 0 )
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
  YS::STDOBJ::start_camera((YS::STDOBJ_112 *const)v4, v5, (YS::OBJ_164 *)*(unsigned int *)(v6 + 4));
}
// 5021E0: variable 'back_chain' is possibly undefined
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

---
---
---
example usage from NA

