---
---
---
name: trap_special_last_xemnus_laser_start
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
syscall 8, 3 ; trap_special_last_xemnus_laser_start (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::LAST_XEMNUS_LASER::Start(YS::BTLOBJ *caster)
/----- (0000000000617414) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_start(BD_VALUE_23 *args)
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
  if ( (*(_DWORD *)(v3 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  ryj::LAST_XEMNUS_LASER::Start((YS::BTLOBJ *)v3);
}
// 617434: variable 'back_chain' is possibly undefined
->
/----- (000000000061997C) ----------------------------------------------------
void __fastcall ryj::LAST_XEMNUS_LASER::Start(YS::BTLOBJ *caster)
{
  int v1; // r31
  GAME_MODE_0 *v2; // r3
  ryj::LAST_XEMNUS_LASER *v3; // r29
  ryj::LAST_XEMNUS_LASER *v4; // r3
  ryj::LAST_XEMNUS_LASER *v5; // r30

  v1 = (int)caster;
  v2 = getFieldMode();
  *(_DWORD *)&(*TASK_MANAGER::create_task(
                  (TASK_MANAGER_11 *const)*(unsigned int *)&(*v2)[4],
                  1,
                  20500,
                  (TASK_FUNC)&ryj::LAST_XEMNUS_LASER::ExecTask))[60] = (unsigned int)&ryj::LAST_XEMNUS_LASER::ExecTaskFinalizer;
  if ( ryj::LastXemnusLaser )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\last_xemnus_laser.cpp", 835);
  v3 = 0LL;
  v4 = (ryj::LAST_XEMNUS_LASER *)AREA::Alloc(0xE10u);
  v5 = v4;
  if ( (_DWORD)v4 )
  {
    ryj::LAST_XEMNUS_LASER::LAST_XEMNUS_LASER(v4);
    v3 = v5;
  }
  ryj::LastXemnusLaser = (void *__ptr32)v3;
  *(_DWORD *)&(*v3)[3536] = v1;
}
// 7A2420: using guessed type __int64 (__fastcall *__ptr32 ryj::LAST_XEMNUS_LASER::ExecTask)(ryj::LAST_XEMNUS_LASER *__hidden this, TASK *);
// 7A2428: using guessed type __int64 (__fastcall *__ptr32 ryj::LAST_XEMNUS_LASER::ExecTaskFinalizer)(ryj::LAST_XEMNUS_LASER *__hidden this, TASK *);
// 807488: using guessed type void *__ptr32 ryj::LastXemnusLaser;


---
---
---
appears in:

---
---
---
example usage from NA

