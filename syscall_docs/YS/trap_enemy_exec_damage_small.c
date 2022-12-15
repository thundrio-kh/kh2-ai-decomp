---
---
---
name: trap_enemy_exec_damage_small
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
syscall 2, 2 ; trap_enemy_exec_damage_small (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::exec_damage_small(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, double power)
/----- (00000000004F33FC) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_damage_small(BD_VALUE_19 *args)
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
  YS::BTLOBJ::exec_damage_small(
    (YS::BTLOBJ *const)v4,
    (YS::DAMAGE_4 *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4F3420: variable 'back_chain' is possibly undefined
->
/----- (0000000000412BF8) ----------------------------------------------------
void __fastcall YS::BTLOBJ::exec_damage_small(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, double power)
{
  int v6; // r5

  if ( (*(_DWORD *)(*(unsigned int *)&this->baseclass_0[12] + 8LL) & 0x10) != 0 )
  {
    YS::BTLOBJ::exec_damage_small_tornado(this, damage, power);
  }
  else if ( (unsigned int)YS::OBJ::is_jump((YS::OBJ_128 *const)this) )
  {
    YS::BTLOBJ::_exec_damage_small_air(this, damage, power, 4);
    if ( (unsigned int)YS::OBJ::can_hitback((YS::OBJ_128 *const)this) )
      ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&this->baseclass_0[12]
                                                        + 0x10LL))();
  }
  else
  {
    v6 = *(_DWORD *)(*(unsigned int *)&this->baseclass_0[12] + 8LL);
    if ( (v6 & 2) != 0 && (v6 & 0x40) != 0 )
      YS::ACTION_FLYBLOW::Break((YS::OBJ_188 *)this);
    YS::BTLOBJ::exec_damage_small_land(this, damage, power);
  }
}
// 2AA1548: using guessed type int YS::PREF::System;


---
---
---
appears in:

---
---
---
example usage from NA

