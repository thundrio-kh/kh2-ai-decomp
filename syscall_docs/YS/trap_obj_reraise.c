---
---
---
name: trap_obj_reraise
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
syscall 1, 277 ; trap_obj_reraise (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PLAYER::reraise(YS::PLAYER_44 *const this)
/----- (0000000000502CB0) ----------------------------------------------------
void __fastcall YS::trap_obj_reraise(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v3 + 1416) & 0x80) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_player()",
      "common",
      "../yasui/libys/player.h",
      204LL,
      "TOPLAYER",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/player.h", 204);
  }
  YS::PLAYER::reraise((YS::PLAYER_44 *const)v3);
}
// 502CD0: variable 'back_chain' is possibly undefined
->
/----- (000000000047F138) ----------------------------------------------------
void __fastcall YS::PLAYER::reraise(YS::PLAYER_44 *const this)
{
  *(_DWORD *)(unsigned int)((_DWORD)this + 2040) &= 0xFFFFFFFB;
  YS::OBJ::set_ground_pos((YS::OBJ_133 *const)this);
  YS::OBJ::change_action((YS::OBJ_125 *const)this, IDLE);
  *(_DWORD *)(*(unsigned int *)&(*this)[2884] + 0x9E0LL) = (_DWORD)this;
  YS::INDICATION::enable((YS::INDICATION_3 *const)*(unsigned int *)&(*this)[2876]);
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)(*this)[0] + 0x78LL))();
}


---
---
---
appears in:

---
---
---
example usage from NA

