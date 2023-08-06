---
---
---
name: trap_player_lockon
---
---
---
category: player
---
---
---
documentation level: untested
---
---
---
push player ; (YS::PLAYER_44 *)  (Player object)
push mode ; (int)  (lock on mode)
push target ; (YS::OBJ_168 *)  (Target object)
syscall 1, 321 ; trap_player_lockon (3 in, 0 out)
---
---
---
description: Locks the player onto an object
---
---
---
decompiled code:
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
void __cdecl YS::INDICATION::Enable()
void __fastcall YS::LOCKON::start(YS::LOCKON_6 *const this, __int64 mode, YS::TARGET_72 *target, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000005081C0) ----------------------------------------------------
void __fastcall YS::trap_player_lockon(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  YS::OBJ_168 *v4; // r30
  __int64 v5; // r30
  _DWORD *v6; // r30
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r7
  __int64 v11; // r6
  __int64 back_chain; // [sp+0h] [-B0h]
  YS::TARGET_108 v13; // [sp+70h] [-40h] BYREF

  v2 = *(unsigned int *)&(*args)[8];
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
  v5 = *(unsigned int *)args;
  if ( !(_DWORD)v5 )
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
  if ( (v5 & 3) != 0 )
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
  v6 = (_DWORD *)*(unsigned int *)(v5 + 4);
  if ( (v6[354] & 0x80) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_player()",
      "common",
      "../yasui/libys/player.h",
      204LL,
      "TOPLAYER",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/player.h", 204);
  }
  YS::INDICATION::enable((YS::INDICATION_3 *const)(unsigned int)v6[719]);
  YS::LOCKON::start(
    (YS::LOCKON_6 *const)(unsigned int)v6[720],
    *(int *)&(*args)[4],
    (YS::TARGET_72 *)v13,
    v11,
    v10,
    v9,
    v8,
    v7);
}
// 5081E4: variable 'back_chain' is possibly undefined
// 508418: variable 'v11' is possibly undefined
// 508418: variable 'v10' is possibly undefined
// 508418: variable 'v9' is possibly undefined
// 508418: variable 'v8' is possibly undefined
// 508418: variable 'v7' is possibly undefined

//COMPLICATED YS::TARGET::clear YS::TARGET::set_obj YS::INDICATION::enable YS::LOCKON::start
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
/----- (00000000004EA14C) ----------------------------------------------------
void __cdecl YS::INDICATION::Enable()
{
  if ( YS::Current )
    YS::INDICATION::enable((YS::INDICATION_3 *const)(unsigned int)YS::Current);
}
// 7FED74: using guessed type int YS::Current;


->
/----- (00000000004439D0) ----------------------------------------------------
void __fastcall YS::LOCKON::start(YS::LOCKON_6 *const this, __int64 mode, YS::TARGET_72 *target, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v10; // r29
  __int64 v11; // r3
  int v12; // r6
  int v13; // r6
  int v14; // r7
  int v15; // r6
  int v16; // r3
  int v17[10]; // [sp+70h] [-40h] BYREF

  v10 = mode;
  if ( *(_DWORD *)this )
    YS::LOCKON::release(this);
  *(_DWORD *)this = v10;
  if ( (_DWORD)target && (unsigned int)YS::TARGET::is_exist(target) )
  {
    v11 = (unsigned int)((_DWORD)this + 4);
    v17[3] = 0;
    v12 = *(_DWORD *)target;
    v17[6] = 0;
    *(_DWORD *)v11 = v12;
    v17[5] = 0;
    v13 = *(_DWORD *)&(*target)[4];
    v17[4] = 0;
    v14 = *(_DWORD *)&(*target)[8];
    v17[7] = 1065353216;
    *(_DWORD *)(v11 + 4) = v13;
    *(_DWORD *)(v11 + 8) = v14;
    v15 = *(_DWORD *)&(*target)[16];
    *(_DWORD *)(v11 + 0xC) = *(_DWORD *)&(*target)[12];
    *(_DWORD *)(v11 + 0x10) = v15;
    YS::TARGET::make_collision((const YS::TARGET_108 *const)v11, (YS::COLLISION_52 *)v17);
    *(_DWORD *)&(*this)[36] = *(unsigned __int8 *)((unsigned int)v17[3] + 1LL);
  }
  if ( v10 > 1 )
  {
    if ( v10 <= 2 )
    {
      SOUND::systemSePlay(7LL, 0LL);
      if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)*(unsigned int *)&(*this)[40])
        && (*(_DWORD *)(*(unsigned int *)&(*this)[40] + 0x588LL) & 0x20000000) != 0 )
      {
        worldmap::LockOnCamera::start(
          (YS::PLAYER_116 *)*(unsigned int *)&(*this)[40],
          (YS::TARGET_183 *)(unsigned int)((_DWORD)this + 4));
      }
      else
      {
        dk::TargetCamera::create((YS::TARGET_5 *)(unsigned int)((_DWORD)this + 4));
      }
      v16 = YS::OBJ::get_serial((YS::OBJ_125 *const)(*target)[0]);
      YS::SIGNAL::Call(158, v16);
    }
  }
  else if ( v10 > 0 )
  {
    *(_DWORD *)&(*this)[28] = 0;
  }
  YS::LOCKON::libra(this, mode, (__int64)target, a4, a5, a6, a7, a8);
  YS::LOCKON::update_mark(this);
}
// 443B30: variable 'mode' is possibly undefined
// 443B30: variable 'target' is possibly undefined
// 443B30: variable 'a4' is possibly undefined
// 443B30: variable 'a5' is possibly undefined
// 443B30: variable 'a6' is possibly undefined
// 443B30: variable 'a7' is possibly undefined
// 443B30: variable 'a8' is possibly undefined


---
---
---
appears in:
msn\TT04_MS107\tt04.bdscript
---
---
---
example usage from msn\TT04_MS107\tt04.bdscript
L63:
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 8
 pushFromPSp 8
 pushImm 1
 pushFromPWp W16
 syscall 1, 321 ; trap_player_lockon (3 in, 0 out)
 jmp L79
