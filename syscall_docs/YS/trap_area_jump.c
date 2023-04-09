---
---
---
name: trap_area_jump
---
---
---
category: mapinfo
---
---
---
documentation level: untested
---
---
---
push area ; (int) (which room to jump to)
push entrance ; (int) (which entrance to use) 
push fadetype ; (what fade type to use) 
syscall 1, 30 ; trap_area_jump (3 in, 0 out)
---
---
---
description: Jumps to a new room, using no battle/event/map programs
---
---
---
decompiled code:
void __fastcall AREA::MapJump(AREA *area, __int64 effectType, __int64 delay, __int64 is_continue, __int64 recov, __int64 a6, __int64 a7, __int64 a8)
/----- (0000000000502F3C) ----------------------------------------------------
void __fastcall YS::trap_area_jump(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  AREA v8; // [sp+70h] [-10h] BYREF

  v8.World = -1;
  v8.Set.Map = -1;
  v8.Set.Battle = -1;
  v8.Set.Event = -1;
  v8.Area = *(_DWORD *)args;
  v8.Entrance = *(_DWORD *)&(*args)[4];
  AREA::MapJump(&v8, *(unsigned int *)&(*args)[8], 0LL, 0LL, 0LL, (__int64)&v8, a7, a8);
}
->
/----- (0000000000041444) ----------------------------------------------------
void __fastcall AREA::MapJump(AREA *area, __int64 effectType, __int64 delay, __int64 is_continue, __int64 recov, __int64 a6, __int64 a7, __int64 a8)
{
  void *v8; // r8
  int v11; // r31
  __int64 v13; // r26
  unsigned __int64 v14; // r27
  __int64 v15; // r4
  char *v16; // r3
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r7
  __int64 v24; // r6
  __int64 v25; // r5
  TASK_5 *v26; // r3
  __int64 v27; // r4
  __int64 back_chain; // [sp+0h] [-B0h]

  v8 = &unk_7F0000;
  v11 = recov;
  v13 = (unsigned __int8)is_continue;
  v14 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( TaskMapJump )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TaskMapJump == NULL",
      "common",
      "C:\\hd25\\kingdom2\\common\\area.cpp",
      317LL,
      "MapJump",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\common\\area.cpp", 317);
  }
  v15 = area->World;
  if ( AREA::Current.World != (_DWORD)v15 && !(_DWORD)effectType )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Current.World == area.World || effectType != dk::JumpEffect::TYPE_KEYHOLE",
      "common",
      "C:\\hd25\\kingdom2\\common\\area.cpp",
      318LL,
      "MapJump",
      (const void *)v14);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\common\\area.cpp", 318);
  }
  if ( IsSkipping )
  {
    dk::JumpEffect::out((unsigned int)effectType | 0x80000000, v15, delay, is_continue, recov, (__int64)v8, a7, a8);
    SkipArea = area->World;
    byte_9060F9 = area->Area;
    byte_9060FA = area->Entrance;
    word_9060FC = area->Set.Map;
    word_9060FE = area->Set.Battle;
    word_906100 = area->Set.Event;
    if ( v11 )
      YS::RECOV::Exec(v11);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\common\\area.cpp",
      329LL,
      is_continue,
      recov,
      (__int64)v8,
      a7,
      a8);
    v16 = AREA::to_s(area);
    printf((unsigned int)"AREA::MapJump(%s, %x, %d, %d)\n", (__int64)v16, effectType, delay, v13, v19, v18, v17);
    YS::SOFTPAD::Disable();
    v26 = TASK_MANAGER::create_task(
            (TASK_MANAGER_11 *const)*(unsigned int *)&FIELD::Mode[4],
            0,
            300000,
            (TASK_FUNC)&AREA::MapJumpTask);
    *(_DWORD *)&(*v26)[16] = delay;
    TaskMapJump = (void *__ptr32)v26;
    *(_BYTE *)((unsigned int)v26 + 0x14LL) = v13;
    *((_DWORD *)TaskMapJump + 6) = effectType;
    if ( (_DWORD)delay )
    {
      YS::RECOV::Exec(v11);
      *((_DWORD *)TaskMapJump + 7) = 0;
    }
    else
    {
      v27 = (unsigned int)TaskMapJump;
      *((_DWORD *)TaskMapJump + 7) = v11;
      dk::JumpEffect::out(effectType, v27, v25, v24, v23, v22, v21, v20);
    }
    YS::MUTEX::lock((YS::MUTEX *const)&YS::MUTEX::Mission, 2);
    AREA::JumpArea.World = area->World;
    AREA::JumpArea.Area = area->Area;
    AREA::JumpArea.Entrance = area->Entrance;
    AREA::JumpArea.Set = area->Set;
  }
}
// 41488: variable 'back_chain' is possibly undefined
// 4157C: variable 'v15' is possibly undefined
// 4157C: variable 'delay' is possibly undefined
// 4157C: variable 'is_continue' is possibly undefined
// 4157C: variable 'recov' is possibly undefined
// 4157C: variable 'v8' is possibly undefined
// 4157C: variable 'a7' is possibly undefined
// 4157C: variable 'a8' is possibly undefined
// 41614: variable 'v19' is possibly undefined
// 41614: variable 'v18' is possibly undefined
// 41614: variable 'v17' is possibly undefined
// 41680: variable 'v25' is possibly undefined
// 41680: variable 'v24' is possibly undefined
// 41680: variable 'v23' is possibly undefined
// 41680: variable 'v22' is possibly undefined
// 41680: variable 'v21' is possibly undefined
// 41680: variable 'v20' is possibly undefined
// 7922B0: using guessed type __int64 (__fastcall *__ptr32 AREA::MapJumpTask)(TASK_5 *this, TASK *);
// 7E95D4: using guessed type void *__ptr32 TaskMapJump;
// 9060F0: using guessed type char IsSkipping;
// 9060F8: using guessed type char SkipArea;
// 9060F9: using guessed type char byte_9060F9;
// 9060FA: using guessed type char byte_9060FA;
// 9060FC: using guessed type __int16 word_9060FC;
// 9060FE: using guessed type __int16 word_9060FE;
// 906100: using guessed type __int16 word_906100;
// 2A9F320: using guessed type int YS::MUTEX::Mission;


---
---
---
appears in:

---
---
---
example usage from NA

