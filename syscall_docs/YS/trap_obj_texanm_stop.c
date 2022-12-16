---
---
---
name: trap_obj_texanm_stop
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
push unk1 ; (unknown)  (pushFromFSp: 0)
push unk2 ; (unknown)  (pushImm: 33)
syscall 1, 86 ; trap_obj_texanm_stop (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::texanm_stop(YS::OBJ_130 *const this, int id)
/----- (000000000050637C) ----------------------------------------------------
void __fastcall YS::trap_obj_texanm_stop(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  YS::OBJ::texanm_stop((YS::OBJ_130 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 5063A0: variable 'back_chain' is possibly undefined
->
/----- (000000000046963C) ----------------------------------------------------
void __fastcall YS::OBJ::texanm_stop(YS::OBJ_130 *const this, int id)
{
  __int64 back_chain; // [sp+0h] [-90h]

  if ( (*(_DWORD *)&(*this)[2040] & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "SysFlag.check(SYSFLAG_EXIST_TEXTURE)",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objdraw.cpp",
      351LL,
      "texanm_stop",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objdraw.cpp", 351);
  }
  kn::ModelObj::resetDefaultTexanm((kn::ModelObj_9 *const)*(unsigned int *)&(*this)[1648], (unsigned int)id);
}
// 469660: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
---
---
---
example usage from obj\B_EX110\b_ex.bdscript
L11734:
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L5869
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L11854
 pushImmf 72
 gosub 4, L328
 pushFromFSp 0
 pushImm 28
 pushImm 0
 syscall 1, 262 ; trap_obj_voice (3 in, 0 out)
 pushFromFSp 0
 pushImm 33
 syscall 1, 85 ; trap_obj_texanm_start (2 in, 0 out)
 pushImmf 96
 gosub 4, L328
 pushFromFSp 0
 pushImm 33
 syscall 1, 86 ; trap_obj_texanm_stop (2 in, 0 out)
 pushImmf 74
 gosub 4, L328
 pushFromFSp 0
 fetchValue 4
 pushImm 207
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushImmf 60
 gosub 4, L328
 pushImmf 40
 gosub 4, L328
 pushFromFSp 0
 gosub 4, L9049
 pushFromFSp 0
 fetchValue 4
 gosub 4, L6904
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L11939
