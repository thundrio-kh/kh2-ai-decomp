---
---
---
name: trap_obj_show_picture
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push num ; (int)  (Number picture)
syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: Show a numbered picture associated with an object
---
---
---
decompiled code:
dk::Layout_0 *__fastcall YS::STDOBJ::show_picture(YS::STDOBJ_112 *const this, int num)
/----- (00000000004FA000) ----------------------------------------------------
void __fastcall YS::trap_obj_show_picture(BD_VALUE_21 *args)
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
  *(_DWORD *)args = (unsigned int)YS::STDOBJ::show_picture((YS::STDOBJ_112 *const)v4, *(_DWORD *)&(*args)[4]);
}
// 4FA024: variable 'back_chain' is possibly undefined
->
/----- (00000000004A2404) ----------------------------------------------------
dk::Layout_0 *__fastcall YS::STDOBJ::show_picture(YS::STDOBJ_112 *const this, int num)
{
  const YS::BINARC_47 *v4; // r3
  unsigned __int64 v5; // r30
  unsigned __int64 v6; // r3
  unsigned __int64 v7; // r29
  unsigned int *v8; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (const YS::BINARC_47 *)*(unsigned int *)&(*this)[1968];
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ObjData.get_apdx() != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      218LL,
      "show_picture",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 218);
    v4 = (const YS::BINARC_47 *)*(unsigned int *)&(*this)[1968];
  }
  v6 = YS::BINARC::get_info(v4, 0x2Eu, 0LL);
  v7 = v6;
  if ( !(_DWORD)v6 || (v8 = (unsigned int *)*(unsigned int *)(v6 + 8), !(_DWORD)v8) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "info->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      220LL,
      "show_picture",
      (const void *)v5);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 220);
    v8 = (unsigned int *)*(unsigned int *)(v7 + 8);
  }
  return dk::Layout::create(v8, num);
}
// 4A242C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L16883:
 pushFromFSp 100
 jz L18181
 pushFromFSp 0
 pushImm 1447
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 96
 pushFromFSp 96
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 96
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 halt 
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 1
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 1
 popToWp W784
 pushFromFSp 0
 gosub 28, L13248
 pushFromPSp 16
 pushImmf 1
 gosub 28, L2297
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromPSp 16
 gosub 36, L8039
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushFromPSp 16
 pushImmf 0.95
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 pushImmf 10
 gosub 28, L4550
 pushFromFSp 0
 pushImm 50
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 pushImm 1
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop 
 gosub 28, L608
 memcpyToSp 16, 112
 pushFromPSp 112
 fetchValue 4
 pushImmf 10
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushFromFSp 0
 gosub 28, L18182
 drop 
 pushFromFSp 0
 pushImm 4
 syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)
 popToSpVal 160
 pushFromFSp 8
 eqz 
 jz L17121
 pushFromFSp 0
 gosub 28, L14186
 pushImmf 0.5
 subf 
 infzf 
 jz L17109
 pushFromFSp 0
 pushImm 40
 pushImm 1
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 jmp L17119
