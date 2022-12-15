---
---
---
name: tarp_friend_is_equiped_ability
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
syscall 10, 24 ; tarp_friend_is_equiped_ability (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall kn::Friend::equipedAbility(kn::Friend_0 *const this, int abilityID, __int64 abilityItemID)
/----- (00000000006127E0) ----------------------------------------------------
void __fastcall kn::tarp_friend_is_equiped_ability(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  *(_DWORD *)args = kn::Friend::equipedAbility(
                      (kn::Friend_0 *const)*(unsigned int *)(v2 + 4),
                      *(_DWORD *)&(*args)[4],
                      -1LL);
}
// 612804: variable 'back_chain' is possibly undefined
->
/----- (00000000000E47A8) ----------------------------------------------------
__int64 __fastcall kn::Friend::equipedAbility(kn::Friend_0 *const this, int abilityID, __int64 abilityItemID)
{
  __int64 v3; // r31
  __int64 v6; // r3
  unsigned int v7; // r4
  YS::OBJ_125 *v8; // r3
  YS::SAVERAM_BATTLE *v9; // r30
  __int64 v10; // r3
  int v11; // r3
  __int64 v12; // r5
  unsigned __int64 v13; // r6

  v3 = abilityItemID;
  if ( (int)abilityItemID < 0 )
    v3 = kn::AbilityInfo::ability2item(abilityID);
  if ( !(_DWORD)v3 )
    return 0LL;
  v6 = YS::OBJ::get_part_num((YS::OBJ_125 *const)this);
  if ( (int)YS::ITEM::GetNum(v3, v6) <= 0 )
    return 0LL;
  v7 = (unsigned int)getSaveRam() + 9456;
  v8 = (YS::OBJ_125 *)this;
  v9 = (YS::SAVERAM_BATTLE *)v7;
  v10 = YS::OBJ::get_part_num(v8);
  v11 = YS::SAVERAM_BATTLE::get_partram(v9, v10);
  v12 = 0LL;
  do
  {
    v13 = *(unsigned __int16 *)(unsigned int)(v11 + 84);
    if ( (v13 & 0x7FFF) == (unsigned __int16)v3 && ((v13 >> 15) & 1) != 0 )
      return 1LL;
    ++v12;
    v11 += 2;
  }
  while ( (int)v12 < 80 );
  return 0LL;
}


---
---
---
appears in:

---
---
---
example usage from NA

