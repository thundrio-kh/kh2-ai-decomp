---
---
---
name: trap_attack_strike
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
push unk4 ; (unknown) 
syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::ATTACK::Strike(YS::BTLOBJ *owner, __int64 param_id, YS::BTLOBJ *target, const kn::FVector *dir, bool is_force)
void __fastcall YS::DAMAGE::Free(YS::DAMAGE_5 *damage)
/----- (00000000004F49FC) ----------------------------------------------------
void __fastcall YS::trap_attack_strike(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  YS::BTLOBJ *v5; // r30
  YS::DAMAGE_5 *v6; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)&(*args)[4];
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
  if ( !(unsigned int)YS::OBJ::is_valid((YS::OBJ_132 *const)*(unsigned int *)(v2 + 4)) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ToOBJ(args[1].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      492LL,
      "trap_attack_strike",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp", 492);
  }
  v4 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v4 )
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
  if ( (v4 & 3) != 0 )
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
  v5 = (YS::BTLOBJ *)*(unsigned int *)(v4 + 4);
  if ( (*(_DWORD *)&v5->baseclass_0[1416] & 2) == 0 )
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
  v6 = YS::ATTACK::strike((YS::ATTACK_10 *const)(*args)[0], v5, *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
  if ( (_DWORD)v6 )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)v5->baseclass_0 + 0x64LL))();
    YS::DAMAGE::Free(v6);
  }
}
// 4F4A20: variable 'back_chain' is possibly undefined

//COMPLICATED YS::ATTACK::strike YS::DAMAGE::Free
->
/----- (00000000004088CC) ----------------------------------------------------
__int64 __fastcall YS::ATTACK::Strike(YS::BTLOBJ *owner, __int64 param_id, YS::BTLOBJ *target, const kn::FVector *dir, bool is_force)
{
  __int64 v6; // r28
  YS::ATTACK_10 *v11; // r29
  YS::ATTACK_10 *v12; // r3
  YS::ATTACK_10 *v13; // r24
  YS::DAMAGE_3 *v14; // r27

  v6 = 0LL;
  v11 = 0LL;
  v12 = (YS::ATTACK_10 *)AREA::Alloc(0xD0u);
  v13 = v12;
  if ( (_DWORD)v12 )
  {
    YS::ATTACK::ATTACK(v12, owner, 0LL, param_id, 0LL, -1, -1);
    v11 = v13;
  }
  if ( is_force )
    v14 = YS::ATTACK::force_strike(v11, target, (const YS::ATTACKPARAM_0 *)*(unsigned int *)&(*v11)[40], 0);
  else
    v14 = YS::ATTACK::strike(v11, target, 0, 0);
  if ( (_DWORD)v14 )
  {
    if ( (*(_DWORD *)&(*v14)[24] & 1) == 0 )
      v6 = 1LL;
    kn::FVector::operator=((kn::FVector *const)v14, dir);
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)target->baseclass_0 + 0x64LL))();
    YS::DAMAGE::Free(v14);
  }
  YS::ATTACK::destroy(v11);
  return v6;
}


->
/----- (0000000000421F20) ----------------------------------------------------
void __fastcall YS::DAMAGE::Free(YS::DAMAGE_5 *damage)
{
  int v1; // r30
  unsigned __int64 v2; // r29
  int v3; // r30
  char *v4; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = (int)damage;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( dword_2A93E20 == 4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_empty()",
      "common",
      "../yasui/classblock.h",
      44LL,
      "free",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 44);
  }
  v3 = (int)(v1 - (unsigned int)&YS::DamageBuff) / 64;
  if ( v3 < 0 || v3 >= 4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "idx >= 0 && idx < size",
      "common",
      "../yasui/classblock.h",
      46LL,
      "free",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 46);
  }
  v4 = (char *)&YS::DamageBuff + 4 * dword_2A93E20++;
  *((_DWORD *)v4 + 64) = v3;
}
// 421F4C: variable 'back_chain' is possibly undefined
// 2A93E20: using guessed type int dword_2A93E20;


---
---
---
appears in:

---
---
---
example usage from NA

