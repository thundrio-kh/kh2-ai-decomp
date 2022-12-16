---
---
---
name: trap_treasure_get
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
push unk1 ; (unknown)  (pushImm: 588,589)
syscall 1, 362 ; trap_treasure_get (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
const YS::TREASURE::TABLE *__fastcall YS::TREASURE::TABLE::GetEvent(int id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
void __fastcall YS::TREASURE::TABLE::get_treasurebox(const YS::TREASURE::TABLE *const this)
int __cdecl YS::TREASURE::GetInfoNum()
void __fastcall dk::TREASURE_INFO::openEventInfo(int articles)
/----- (000000000050B938) ----------------------------------------------------
void __fastcall YS::trap_treasure_get(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  const YS::TREASURE::TABLE *v8; // r3
  int v9; // r3

  v8 = YS::TREASURE::TABLE::GetEvent(*(_DWORD *)args, a2, a3, a4, a5, a6, a7, a8);
  YS::TREASURE::TABLE::get_treasurebox(v8);
  v9 = YS::TREASURE::GetInfoNum();
  dk::TREASURE_INFO::openEventInfo(v9);
}

//COMPLICATED YS::TREASURE::TABLE::GetEvent YS::TREASURE::TABLE::get_treasurebox YS::TREASURE::GetInfoNum dk::TREASURE_INFO::openEventInfo
->
/----- (00000000004AB52C) ----------------------------------------------------
const YS::TREASURE::TABLE *__fastcall YS::TREASURE::TABLE::GetEvent(int id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r5
  __int64 v9; // r6
  const YS::TREASURE::TABLE *result; // r3
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 v17; // r4
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r7
  __int64 v22; // r6
  __int64 v23; // r5
  __int64 v24; // r4
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r4

  v8 = 0LL;
  v9 = (unsigned int)(YS::TreasureTable + 4);
  if ( *(_WORD *)((unsigned int)YS::TreasureTable + 2LL) )
  {
    while ( 1 )
    {
      a5 = *(unsigned __int8 *)(v9 + 4);
      if ( (_DWORD)a5 == 1 )
      {
        a5 = *(unsigned __int16 *)v9;
        if ( (_DWORD)a5 == id )
          break;
      }
      ++v8;
      v9 = (unsigned int)(v9 + 12);
      if ( (int)v8 >= *(unsigned __int16 *)((unsigned int)YS::TreasureTable + 2LL) )
        goto LABEL_6;
    }
    result = (const YS::TREASURE::TABLE *)v9;
  }
  else
  {
LABEL_6:
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\treasure.cpp", 77LL, v9, a5, a6, a7, a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v17, v16, v15, v14, v13, v12, v11);
    printf((unsigned int)"no such treasure", v24, v23, v22, v21, v20, v19, v18);
    printf((unsigned int)" **\x1B[00m\n", v31, v30, v29, v28, v27, v26, v25);
    result = 0LL;
  }
  return result;
}
// 4AB5B8: variable 'v17' is possibly undefined
// 4AB5B8: variable 'v16' is possibly undefined
// 4AB5B8: variable 'v15' is possibly undefined
// 4AB5B8: variable 'v14' is possibly undefined
// 4AB5B8: variable 'v13' is possibly undefined
// 4AB5B8: variable 'v12' is possibly undefined
// 4AB5B8: variable 'v11' is possibly undefined
// 4AB5C8: variable 'v24' is possibly undefined
// 4AB5C8: variable 'v23' is possibly undefined
// 4AB5C8: variable 'v22' is possibly undefined
// 4AB5C8: variable 'v21' is possibly undefined
// 4AB5C8: variable 'v20' is possibly undefined
// 4AB5C8: variable 'v19' is possibly undefined
// 4AB5C8: variable 'v18' is possibly undefined
// 4AB5D8: variable 'v31' is possibly undefined
// 4AB5D8: variable 'v30' is possibly undefined
// 4AB5D8: variable 'v29' is possibly undefined
// 4AB5D8: variable 'v28' is possibly undefined
// 4AB5D8: variable 'v27' is possibly undefined
// 4AB5D8: variable 'v26' is possibly undefined
// 4AB5D8: variable 'v25' is possibly undefined
// 2AAEB00: using guessed type int YS::TreasureTable;


->
/----- (00000000004AB64C) ----------------------------------------------------
void __fastcall YS::TREASURE::TABLE::get_treasurebox(const YS::TREASURE::TABLE *const this)
{
  int v1; // r3

  v1 = YS::TREASURE::TABLE::_get(this);
  YS::ITEMPIC::ReadImage(v1);
}


->
/----- (00000000004AB15C) ----------------------------------------------------
int __cdecl YS::TREASURE::GetInfoNum()
{
  return (YS::InfoQueue - dword_2AAEB0C + 8) % 8;
}
// 2AAEB08: using guessed type int YS::InfoQueue;
// 2AAEB0C: using guessed type int dword_2AAEB0C;


->
/----- (00000000000810A8) ----------------------------------------------------
void __fastcall dk::TREASURE_INFO::openEventInfo(int articles)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( articles <= 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "articles > 0",
      "common",
      "C:\\hd25\\kingdom2\\harata\\libdk\\treasure_info.cpp",
      371LL,
      "openEventInfo",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\harata\\libdk\\treasure_info.cpp", 371);
  }
  dk::s_eventArticles = articles;
  Tz::CampMenu::Start(7, -1LL);
}
// 810C4: variable 'back_chain' is possibly undefined
// 7EA668: using guessed type int dk::s_eventArticles;


---
---
---
appears in:
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
---
---
---
example usage from obj\M_EX350_13\m_ex.bdscript
L7928:
 popToSp 0
 pushImm 588
 syscall 1, 362 ; trap_treasure_get (1 in, 0 out)
 pushImm 589
 syscall 1, 362 ; trap_treasure_get (1 in, 0 out)
 pushImm 7
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L9397 ; ___ai 'light_return_wait' (L9397)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 gosub 4, L2575
 ret 
