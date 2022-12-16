---
---
---
name: trap_prize_vacuum_ca
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
push unk2 ; (unknown)  (pushFromPSpVal: 288) (pushFromFSp: 0)
push unk3 ; (unknown)  (pushImm: 1,30)
syscall 1, 339 ; trap_prize_vacuum_ca (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::PRIZE_CA::Vacuum(YS::BTLOBJ_69 *obj, YS::BTLOBJ_69 *target, int num)
/----- (000000000050B260) ----------------------------------------------------
void __fastcall YS::trap_prize_vacuum_ca(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r28
  __int64 v6; // r28
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
  v5 = *(unsigned int *)&(*args)[4];
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
  v6 = *(unsigned int *)(v5 + 4);
  if ( (*(_DWORD *)(v6 + 1416) & 2) == 0 )
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
  *(_DWORD *)args = YS::PRIZE_CA::Vacuum((YS::BTLOBJ_69 *)v4, (YS::BTLOBJ_69 *)v6, *(_DWORD *)&(*args)[8]);
}
// 50B284: variable 'back_chain' is possibly undefined
->
/----- (0000000000484E74) ----------------------------------------------------
__int64 __fastcall YS::PRIZE_CA::Vacuum(YS::BTLOBJ_69 *obj, YS::BTLOBJ_69 *target, int num)
{
  __int64 v6; // r26
  int v7; // r6
  YS::PRIZEEFFECT_4 *v9; // r3
  kn::FVector v10; // [sp+70h] [-40h] BYREF

  YS::OBJ::get_target_pos((YS::OBJ_125 *const)&v10, (YS::OBJ_168 *)target);
  v6 = 0LL;
  if ( num <= 0 )
    return 0LL;
  v7 = target->CaMedal;
  while ( 1 )
  {
    if ( !v7 )
      return 1LL;
    v9 = YS::PRIZE::appear(
           (YS::PRIZE *const)(unsigned int)YS::PrizeCa,
           (const YS::PRIZEEFFECT::PARAM *)&YS::ParamTable,
           &v10);
    if ( (_DWORD)v9 )
      *(_DWORD *)(unsigned int)((_DWORD)v9 + 40) |= 4u;
    if ( !(_DWORD)v9 )
      break;
    YS::PRIZEEFFECT::vacuum_ca(v9, obj);
    ++v6;
    v7 = target->CaMedal - 1;
    target->CaMedal = v7;
    if ( (int)v6 >= num )
      return 0LL;
  }
  return 1LL;
}
// 7FE81C: using guessed type void *__ptr32 YS::PrizeCa;


---
---
---
appears in:
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
---
---
---
example usage from obj\B_CA050\b_ca.bdscript
L6690:
 jz L6758
 pushFromFSp 36
 pushImm 1
 add 
 popToSp 36
 pushFromFSp 36
 pushImm 3
 mod 
 pushImm 0
 sub 
 eqz 
 jz L6725
 pushFromFSp 0
 pushFromPSpVal 288
 pushImm 1
 syscall 1, 339 ; trap_prize_vacuum_ca (3 in, 1 out)
 drop 
 jmp L6725
