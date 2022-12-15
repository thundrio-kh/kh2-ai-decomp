---
---
---
name: trap_score_update
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
syscall 4, 37 ; trap_score_update (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
// local variable allocation has failed, the output may be wrong!
/----- (00000000004F69F0) ----------------------------------------------------
void __fastcall YS::trap_score_update(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::SCORE::update((YS::SCORE *const)(*args)[0], *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
->
/----- (000000000050DFEC) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
bool __fastcall YS::SCORE::update(YS::SCORE *const this, int type, u_int score)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v8; // r30
  __int64 v9; // r31
  __int64 v10; // r9
  int v11; // r3
  bool result; // r3
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 back_chain; // [sp+0h] [-90h]

  v8 = *(_QWORD *)&type;
  v9 = *(_QWORD *)&score;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( type <= 0 || type >= 7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "type > TYPE_NULL && type < TYPE_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\score.cpp",
      14LL,
      "update",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\score.cpp", 14);
  }
  v11 = this->Type;
  if ( (int)v8 < v11 )
    return 0;
  if ( (int)v8 > 4 )
  {
    if ( (_DWORD)v8 == 6 )
    {
LABEL_10:
      if ( (_DWORD)v8 == v11 && (unsigned int)v9 >= this->Score )
        return 0;
      goto _noname_;
    }
  }
  else if ( (int)v8 > 3 )
  {
    goto LABEL_10;
  }
  if ( (_DWORD)v8 == v11 && (unsigned int)v9 <= this->Score )
    return 0;
_noname_:
  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\score.cpp", 31LL, v6, v5, v4, v10, v3);
  printf((unsigned int)"SCORE#update(%d -> %d, %d -> %d)\n", this->Type, v8, this->Score, v9, v15, v14, v13);
  this->Type = v8;
  result = 1;
  this->Score = v9;
  return result;
}
// 50DFEC: variables would overlap: r5.4 and r5.8
// 50DFEC: variables would overlap: r4.4 and r4.8


---
---
---
appears in:

---
---
---
example usage from NA

