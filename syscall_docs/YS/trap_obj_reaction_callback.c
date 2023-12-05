---
---
---
name: trap_obj_reaction_callback
---
---
---
category: reaction
---
---
---
documentation level: incomplete
---
---
---
push obj ; (YS::OBJ_125 *)  (An object)
push obj2 ; (YS::OBJ_125 *)  (A second object to receive the RC?)
push command ; (int)  (pushImm: 327)
push target_obj ; (YS::OBJ_125 *)  (Object for the reaction to target)
syscall 1, 325 ; trap_obj_reaction_callback (4 in, 0 out)
---
---
---
description: Set a reaction callback for an object
---
---
---
decompiled code:
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
void __fastcall YS::OBJ::reaction_callback(YS::OBJ_125 *const this, YS::OBJ_125 *obj, __int64 command, YS::TARGET_78 *target, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FAABC) ----------------------------------------------------
void __fastcall YS::trap_obj_reaction_callback(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r25
  YS::OBJ_168 *v4; // r30
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r30
  YS::OBJ_125 *v10; // r24
  __int64 v11; // r30
  __int64 back_chain; // [sp+0h] [-D0h]
  YS::TARGET_108 v13; // [sp+70h] [-60h] BYREF

  v2 = *(unsigned int *)&(*args)[12]; // arg 4
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
  v4 = (YS::OBJ_168 *)*(unsigned int *)(v2 + 4);
  YS::TARGET::clear((YS::TARGET_108 *const)v13);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v13, v4, 0);
  v9 = *(unsigned int *)args;
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
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
  v10 = (YS::OBJ_125 *)*(unsigned int *)(v9 + 4);
  v11 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v11 )
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
  if ( (v11 & 3) != 0 )
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
  YS::OBJ::reaction_callback(
    v10,
    (YS::OBJ_125 *)*(unsigned int *)(v11 + 4),
    *(int *)&(*args)[8], // arg 3
    (YS::TARGET_78 *)v13,
    v8,
    v7,
    v6,
    v5);
}
// 4FAB00: variable 'back_chain' is possibly undefined
// 4FAD20: variable 'v8' is possibly undefined
// 4FAD20: variable 'v7' is possibly undefined
// 4FAD20: variable 'v6' is possibly undefined
// 4FAD20: variable 'v5' is possibly undefined

//COMPLICATED YS::TARGET::clear YS::TARGET::set_obj YS::OBJ::reaction_callback
->
/----- (00000000004A8118) ----------------------------------------------------
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
}


->
/----- (00000000004A8134) ----------------------------------------------------
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
{
  int v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v5 = (int)obj;
  if ( group < 0 || group >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group >= 0 && group < COLLISION::GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp",
      264LL,
      "set_obj",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp", 264);
  }
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
  *(_DWORD *)this = v5;
  *(_DWORD *)&(*this)[4] = group;
}
// 4A8164: variable 'back_chain' is possibly undefined


->
/----- (00000000004617A4) ----------------------------------------------------
void __fastcall YS::OBJ::reaction_callback(YS::OBJ_125 *const this, YS::OBJ_125 *obj, __int64 command, YS::TARGET_78 *target, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  BD_VALUE_0 v8; // r29
  BD_VALUE_0 v10; // r31
  __int64 v12; // r9
  YS::VM_377 *v13; // r3
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r7
  __int64 v18; // r6
  __int64 v19; // r5
  __int64 v20; // r4
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r7
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r4
  __int64 back_chain; // [sp+0h] [-B0h]
  BD_VALUE_0 v33[6]; // [sp+70h] [-40h] BYREF

  v8 = (BD_VALUE_0)obj;
  v10 = (BD_VALUE_0)target;
  v12 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (*(_DWORD *)&(*obj)[1416] & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj->is_stdobj()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1095LL,
      "reaction_callback",
      (const void *)v12);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1095);
  }
  v13 = (YS::VM_377 *)*(unsigned int *)&(*this)[1156];
  if ( (_DWORD)v13 )
  {
    v33[0] = v8;
    v33[1] = (BD_VALUE_0)command;
    v33[2] = v10;
    YS::VM::callback(v13, 11, v33, 3, 0LL);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1098LL,
      (__int64)target,
      a5,
      a6,
      v12,
      a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v20, v19, v18, v17, v16, v15, v14);
    printf(
      (unsigned int)"cannot receive rc, '%s <= %d'",
      (unsigned int)(*(_DWORD *)&(*this)[8] + 8),
      command,
      *(unsigned int *)&(*this)[8] + 8LL,
      v24,
      v23,
      v22,
      v21);
    printf((unsigned int)" **\x1B[00m\n", v31, v30, v29, v28, v27, v26, v25);
  }
}
// 4617DC: variable 'back_chain' is possibly undefined
// 461860: variable 'target' is possibly undefined
// 461860: variable 'a5' is possibly undefined
// 461860: variable 'a6' is possibly undefined
// 461860: variable 'v12' is possibly undefined
// 461860: variable 'a8' is possibly undefined
// 461870: variable 'v20' is possibly undefined
// 461870: variable 'v19' is possibly undefined
// 461870: variable 'v18' is possibly undefined
// 461870: variable 'v17' is possibly undefined
// 461870: variable 'v16' is possibly undefined
// 461870: variable 'v15' is possibly undefined
// 461870: variable 'v14' is possibly undefined
// 461890: variable 'v24' is possibly undefined
// 461890: variable 'v23' is possibly undefined
// 461890: variable 'v22' is possibly undefined
// 461890: variable 'v21' is possibly undefined
// 4618A0: variable 'v31' is possibly undefined
// 4618A0: variable 'v30' is possibly undefined
// 4618A0: variable 'v29' is possibly undefined
// 4618A0: variable 'v28' is possibly undefined
// 4618A0: variable 'v27' is possibly undefined
// 4618A0: variable 'v26' is possibly undefined
// 4618A0: variable 'v25' is possibly undefined


---
---
---
appears in:
msn\AL00_SKATE_01\al00.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\HB09_SKATE_01\hb09.bdscript
msn\NM09_SKATE_01\nm09.bdscript
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
msn\TT07_SKATE_01\tt07.bdscript
---
---
---
example usage from msn\AL00_SKATE_01\al00.bdscript
L145:
 pushFromPSp 0
 pushImm 5067
 syscall 1, 210 ; trap_obj_search_by_part (2 in, 0 out)
 pushFromPSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L178
 pushFromPSp 0
 gosub 8, L179
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 327
 pushFromPSp 0
 syscall 1, 325 ; trap_obj_reaction_callback (4 in, 0 out)
 jmp L178
