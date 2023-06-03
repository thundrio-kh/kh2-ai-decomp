---
---
---
name: trap_item_reduce
---
---
---
category: inventory
---
---
---
documentation level: untested
---
---
---
push item ; (int)  (Item number)
push part ; (int)  (Unknown, game only uses value of 100)
syscall 0, 97 ; trap_item_reduce (2 in, 0 out)
---
---
---
description: Removes/reduces an item from inventory.
---
---
---
decompiled code:
__int64 __fastcall YS::ITEM::Reduce(__int64 item, __int64 part)
/----- (00000000004B9160) ----------------------------------------------------
void __fastcall YS::trap_item_reduce(BD_VALUE_16 *args)
{
  YS::ITEM::Reduce(*(int *)args, *(int *)&(*args)[4]);
}
->
/----- (0000000000437400) ----------------------------------------------------
__int64 __fastcall YS::ITEM::Reduce(__int64 item, __int64 part)
{
  int v2; // r31
  __int64 result; // r3
  unsigned __int64 v4; // r30
  int v5; // r5
  int v6; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = item;
  if ( (_DWORD)part == 100 )
  {
    YS::ITEM::ReduceBackyard(item, 1);
    result = 1LL;
  }
  else
  {
    v4 = YS::SAVERAM_BATTLE::get_partram((YS::SAVERAM_BATTLE *const)((unsigned int)&SaveRam + 9456), part);
    if ( !(_DWORD)v4 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "partram != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\item.cpp",
        328LL,
        "Reduce",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\item.cpp", 328);
    }
    v5 = *(unsigned __int8 *)(v4 + 18) - 1;
    if ( v5 < 0 )
    {
LABEL_10:
      result = 0LL;
    }
    else
    {
      v6 = 2 * v5 + v4;
      while ( *(unsigned __int16 *)(unsigned int)(v6 + 52) != v2 )
      {
        --v5;
        v6 -= 2;
        if ( v5 < 0 )
          goto LABEL_10;
      }
      result = 1LL;
      *(_WORD *)(unsigned int)(v4 + 2 * v5 + 52) = 0;
    }
  }
  return result;
}
// 43745C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
ard\ca01\ca_d.bdscript
ard\he13\he_d.bdscript
ard\he18\he_d.bdscript
ard\nm07\nm_d.bdscript
ard\nm08\nm_d.bdscript
ard\tt02\tt_d.bdscript
ard\tt02\tt_n.bdscript
ard\tt08\tt_d_0.bdscript
ard\tt08\tt_d_1.bdscript
ard\tt17\tt_d.bdscript
---
---
---
example usage from ard\ca01\ca_d.bdscript
TR2:
 pushImm 372
 pushImm 100
 syscall 0, 97 ; trap_item_reduce (2 in, 0 out)
 ret 
