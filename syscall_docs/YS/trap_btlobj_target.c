---
---
---
name: trap_btlobj_target
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
syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::TARGET::is_exist(const YS::TARGET_108 *const this)
void __fastcall YS::TARGET::search(YS::TARGET_108 *const this, YS::TARGET::TYPE type, YS::OBJ_168 *obj)
/----- (00000000004F27B4) ----------------------------------------------------
void __fastcall YS::trap_btlobj_target(BD_VALUE_19 *args)
{
  __int64 v2; // r27
  unsigned __int64 v3; // r30
  __int64 v4; // r27
  YS::TARGET_108 *v5; // r28
  int v6; // r3
  __int64 v7; // r29
  __int64 v8; // r29
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
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  v5 = (YS::TARGET_108 *)(unsigned int)(v4 + 2548);
  v6 = YS::TARGET::is_exist(v5);
  v7 = *(unsigned int *)args;
  if ( !v6 && (*(_DWORD *)(v4 + 1416) & 0x10) != 0 && *(_DWORD *)((unsigned int)(v4 + 2548) + 0xCLL) != 3 )
  {
    if ( !(_DWORD)v7 )
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
    if ( (v7 & 3) != 0 )
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
    v8 = *(unsigned int *)(v7 + 4);
    if ( (*(_DWORD *)(v8 + 1416) & 2) == 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "TOOBJ(obj)->is_btlobj()",
        "common",
        "../../yasui/libys/btlobj.h",
        178LL,
        "TOBTLOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
    }
    YS::TARGET::search(v5, TYPE_PLAYER_0, (YS::OBJ_168 *)v8);
  }
  *(_DWORD *)args = (_DWORD)v5;
}
// 4F27D8: variable 'back_chain' is possibly undefined

//COMPLICATED YS::TARGET::is_exist YS::TARGET::search
->
/----- (00000000004A86B8) ----------------------------------------------------
__int64 __fastcall YS::TARGET::is_exist(const YS::TARGET_108 *const this)
{
  __int64 v2; // r30
  unsigned int v3; // r3

  v2 = 0LL;
  if ( *(_DWORD *)&(*this)[8] )
    goto LABEL_7;
  if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*this)[0])
    && YS::OBJ::is_enable_collision((YS::OBJ_128 *const)(*this)[0], *(int *)&(*this)[4]) )
  {
    v3 = (unsigned int)YS::OBJ::get_collision((YS::OBJ_125 *const)(*this)[0], 3, *(_DWORD *)&(*this)[4]);
    if ( !v3 )
      v3 = (unsigned int)YS::OBJ::each_collision((YS::OBJ_125 *const)(*this)[0], 3, 0LL);
    if ( v3 )
LABEL_7:
      v2 = 1LL;
  }
  return v2;
}


->
/----- (00000000004A99C8) ----------------------------------------------------
void __fastcall YS::TARGET::search(YS::TARGET_108 *const this, YS::TARGET::TYPE type, YS::OBJ_168 *obj)
{
  unsigned int v6; // r3
  void *__ptr32 v7; // r3
  __int64 v8; // r28
  double v9; // fp1
  __int64 back_chain; // [sp+0h] [-90h]

  switch ( type )
  {
    case TYPE_AUTO_LOCKON:
      if ( (*(_DWORD *)&(*obj)[1416] & 0x80) == 0 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "((OBJ *)obj)->is_player()",
          "common",
          "../yasui/libys/player.h",
          204LL,
          "TOPLAYER",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("../yasui/libys/player.h", 204);
      }
      v8 = *(unsigned int *)&(*obj)[304];
      if ( (_DWORD)v8 )
      {
        v9 = YS::STATUS::GetLockOnRatio();
        YS::TARGET::search_auto_lockon(this, (YS::PLAYER_65 *)obj, (float)(*(float *)(v8 + 92) * (float)v9));
      }
      break;
    case TYPE_BOSS:
      YS::TARGET::search_btlnpc(this, obj, 10000.0);
      break;
    case TYPE_LOCKON:
      if ( (*(_DWORD *)&(*obj)[1416] & 0x80) == 0 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "((OBJ *)obj)->is_player()",
          "common",
          "../yasui/libys/player.h",
          204LL,
          "TOPLAYER",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("../yasui/libys/player.h", 204);
      }
      YS::TARGET::search_lockon(this, (YS::PLAYER_65 *)obj);
      break;
    case TYPE_BTLNPC:
      YS::TARGET::search_btlnpc(this, obj, 0.0);
      break;
    case TYPE_PLAYER_0:
      v7 = YS::PLAYER::Player;
      *(_DWORD *)&(*this)[8] = 0;
      *(_DWORD *)this = v7;
      *(_DWORD *)&(*this)[4] = 0;
      break;
    case TYPE_REVENGE:
      YS::TARGET::search_revenge(this, obj);
      break;
    default:
      if ( type )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "0",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp",
          321LL,
          "search",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp", 321);
      }
      else
      {
        if ( (*(_DWORD *)&(*obj)[264] & 0x800) != 0
          || (v6 = (unsigned int)YS::PRIORITYTARGET::search((YS::PRIORITYTARGET_0 *const)&YS::BeforePlayer)) == 0 )
        {
          v6 = (unsigned int)YS::PLAYER::Player;
        }
        *(_DWORD *)&(*this)[8] = 0;
        *(_DWORD *)this = v6;
        *(_DWORD *)&(*this)[4] = 0;
      }
      break;
  }
  *(_DWORD *)&(*this)[12] = type;
}
// 4A9AE0: variable 'back_chain' is possibly undefined
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:

---
---
---
example usage from NA

