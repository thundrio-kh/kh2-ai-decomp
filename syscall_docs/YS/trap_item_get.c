---
---
---
name: trap_item_get
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
syscall 0, 63 ; trap_item_get (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::ITEM::Get(__int64 item, __int64 part, bool is_equip)
/----- (00000000004B9118) ----------------------------------------------------
void __fastcall YS::trap_item_get(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::ITEM::Get(*(int *)args, *(int *)&(*args)[4], 0);
}
->
/----- (00000000004371D4) ----------------------------------------------------
__int64 __fastcall YS::ITEM::Get(__int64 item, __int64 part, bool is_equip)
{
  __int64 v5; // r27
  const YS::ITEM_TABLE *v6; // r30
  __int64 v7; // r28
  YS::PARTRAM *v9; // r3
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v5 = is_equip;
  v6 = YS::ITEM_TABLE::Get(item);
  v7 = YS::ITEM::WhereGet(item, part, 1);
  if ( !(_DWORD)v7 )
    return 0LL;
  if ( (v6->Flag & 1) != 0 || (_DWORD)v7 == 100 )
  {
    YS::ITEM::GetBackyard(item, 1);
  }
  else
  {
    v9 = (YS::PARTRAM *)YS::SAVERAM_BATTLE::get_partram((YS::SAVERAM_BATTLE *const)((unsigned int)&SaveRam + 9456), v7);
    if ( v6->Type )
    {
      if ( v6->Type == 19 )
      {
        YS::PARTRAM::add_ability(v9, item, v5);
      }
      else
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "0",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\item.cpp",
          257LL,
          "Get",
          (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\item.cpp", 257);
      }
    }
    else
    {
      YS::PARTRAM::add_item(v9, item);
      if ( (_DWORD)v7 == 1 || (_DWORD)v7 == 14 )
        YS::ITEM::KnowBattleItem(item);
    }
  }
  if ( (v6->Flag & 1) == 0 )
  {
    v10 = v6->_anon_1.BackyardId;
    if ( (unsigned int)v10 >= 0x140 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(int)n >= 0 && (int)n < bitmax",
        "common",
        "../yasui/flag.h",
        44LL,
        "set",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("../yasui/flag.h", 44);
    }
    *(_DWORD *)((unsigned int)&SaveRam + 9456 + ((v10 >> 3) & 0x1FFFFFFC) + 6296) |= 1 << (v10 & 0x1F);
  }
  return 1LL;
}
// 437288: conditional instruction was optimized away because of 'r4.4<100u'
// 437354: conditional instruction was optimized away because of 'r30.4<10000u'
// 4372EC: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

