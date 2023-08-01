---
---
---
name: trap_obj_hook_command_image
---
---
---
category: command
---
---
---
documentation level: untested
---
---
---
push stdobj ; (YS::STDOBJ_112)  (An std object)
syscall 1, 359 ; trap_obj_hook_command_image (1 in, 0 out)
---
---
---
description: hooks the command image
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::hook_command_image(YS::STDOBJ_112 *const this)
/----- (00000000004FB3DC) ----------------------------------------------------
void __fastcall YS::trap_obj_hook_command_image(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  YS::STDOBJ::hook_command_image((YS::STDOBJ_112 *const)v3);
}
// 4FB3FC: variable 'back_chain' is possibly undefined
->
/----- (00000000004A279C) ----------------------------------------------------
void __fastcall YS::STDOBJ::hook_command_image(YS::STDOBJ_112 *const this)
{
  unsigned __int64 v2; // r3
  unsigned __int64 v3; // r28
  unsigned __int64 v4; // r30
  unsigned int *v5; // r31
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r7
  __int64 v10; // r6
  __int64 v11; // r5
  unsigned __int64 v12; // r3
  unsigned __int64 v13; // r29
  unsigned int *v14; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = YS::BINARC::get_info_by_tag((const YS::BINARC_47 *const)*(unsigned int *)&(*this)[1968], 0x18u, 0x646D6F63u, 0LL);
  v3 = v2;
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 || (v5 = (unsigned int *)*(unsigned int *)(v2 + 8), !(_DWORD)v5) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "info->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      263LL,
      "hook_command_image",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 263);
    v5 = (unsigned int *)*(unsigned int *)(v3 + 8);
  }
  v12 = YS::BINARC::get_info_by_tag(
          (const YS::BINARC_47 *const)*(unsigned int *)&(*this)[1968],
          0x19u,
          0x646D6F63u,
          0LL);
  v13 = v12;
  if ( !(_DWORD)v12 || (v14 = (unsigned int *)*(unsigned int *)(v12 + 8), !(_DWORD)v14) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "info->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      267LL,
      "hook_command_image",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 267);
    v14 = (unsigned int *)*(unsigned int *)(v13 + 8);
  }
  dk::COMMAND_DRAW::setCommandImage(v5, v14, v11, v10, v9, v8, v7, v6);
}
// 4A27E4: variable 'back_chain' is possibly undefined
// 4A28E4: variable 'v11' is possibly undefined
// 4A28E4: variable 'v10' is possibly undefined
// 4A28E4: variable 'v9' is possibly undefined
// 4A28E4: variable 'v8' is possibly undefined
// 4A28E4: variable 'v7' is possibly undefined
// 4A28E4: variable 'v6' is possibly undefined


---
---
---
appears in:
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
---
---
---
example usage from obj\B_EX370\b_ex.bdscript
L2290:
 popToSp 0
 pushImmf 30
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushFromFSp 0
 pushImm 144
 add 
 pushImm 1
 memcpy 0
 pushFromPSpVal 0
 syscall 1, 359 ; trap_obj_hook_command_image (1 in, 0 out)
 pushImm L2328
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 pushImm L2511
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 ret 
