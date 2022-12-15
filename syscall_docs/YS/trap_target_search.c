---
---
---
name: trap_target_search
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
syscall 1, 121 ; trap_target_search (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::search(YS::TARGET_108 *const this, YS::TARGET::TYPE type, YS::OBJ_168 *obj)
/----- (0000000000508BE4) ----------------------------------------------------
void __fastcall YS::trap_target_search(BD_VALUE_21 *args)
{
  YS::TARGET_108 *v1; // r28
  __int64 v2; // r30
  YS::TARGET::TYPE v3; // r29
  unsigned __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

  v1 = (YS::TARGET_108 *)(*args)[0];
  v2 = *(unsigned int *)&(*args)[4];
  v3 = *(_DWORD *)&(*args)[8];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::TARGET::search(v1, v3, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4));
}
// 508C14: variable 'back_chain' is possibly undefined
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

