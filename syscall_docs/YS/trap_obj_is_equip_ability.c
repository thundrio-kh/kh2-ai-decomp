---
---
---
name: trap_obj_is_equip_ability
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
push unk1 ; (unknown)  (pushFromFSp: 20)
push unk2 ; (unknown)  (pushImm: 114)
syscall 1, 343 ; trap_obj_is_equip_ability (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
const YS::ABILITY_106 *__fastcall YS::PARTY::get_ability(YS::PARTY_63 *const this)
/----- (00000000004FAFBC) ----------------------------------------------------
void __fastcall YS::trap_obj_is_equip_ability(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r29
  const YS::ABILITY_106 *v5; // r3
  unsigned __int64 v6; // r30
  const YS::ABILITY_106 *v7; // r29
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
  if ( (*(_DWORD *)(v4 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  v5 = YS::PARTY::get_ability((YS::PARTY_63 *const)v4);
  v6 = *(unsigned int *)&(*args)[4];
  v7 = v5;
  if ( (v6 & 0x80000000) != 0LL || (unsigned int)v6 >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  *(_DWORD *)args = (*(_DWORD *)&(*v7)[(v6 >> 3) & 0x1FFFFFFC] & (1 << (v6 & 0x1F))) != 0;
}
// 4FAFE0: variable 'back_chain' is possibly undefined

//CHEAT YS::PARTY::get_ability
->
/----- (000000000047586C) ----------------------------------------------------
const YS::ABILITY_106 *__fastcall YS::PARTY::get_ability(YS::PARTY_63 *const this)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*this)[1164];
  if ( !v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Sheet != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\party.cpp",
      972LL,
      "get_ability",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\party.cpp", 972);
    v2 = *(_DWORD *)&(*this)[1164];
  }
  return (const YS::ABILITY_106 *)(unsigned int)(v2 + 460);
}
// 475888: variable 'back_chain' is possibly undefined


---
---
---
appears in:
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
---
---
---
example usage from magic\CURE_1\cure.bdscript
L488:
 pushFromFSp 20
 pushImm 114
 syscall 1, 343 ; trap_obj_is_equip_ability (2 in, 1 out)
 dup 
 jz L506
 pushFromFSp 20
 pushFromPSpVal 44
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 eqzv 
