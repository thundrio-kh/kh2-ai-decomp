---
---
---
name: trap_partram_set_item_max
---
---
---
category: save
---
---
---
documentation level: untested
---
---
---
push partram ; (YS::PARTRAM *)  (Partram object)
push num ; (int) (number of consumables to allow)
syscall 0, 62 ; trap_partram_set_item_max (2 in, 0 out)
---
---
---
description: Sets the maximum number of consumables the player can equip
---
---
---
decompiled code:
void __fastcall YS::PARTRAM::set_item_max(YS::PARTRAM *const this, __int64 max)
/----- (00000000004B8E98) ----------------------------------------------------
void __fastcall YS::trap_partram_set_item_max(BD_VALUE_16 *args)
{
  YS::PARTRAM::set_item_max((YS::PARTRAM *const)(*args)[0], *(int *)&(*args)[4]);
}
->
/----- (0000000000495E64) ----------------------------------------------------
void __fastcall YS::PARTRAM::set_item_max(YS::PARTRAM *const this, __int64 max)
{
  __int64 v4; // r5
  __int64 v5; // r29
  char *v6; // r5
  unsigned __int64 v7; // r3
  unsigned __int64 v8; // r4
  __int64 v9; // r29
  int v10; // r23
  unsigned __int64 v11; // r22
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r7
  __int64 v16; // r6
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r7
  __int64 v21; // r6
  __int64 v22; // r5
  __int64 v23; // r4
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r7
  __int64 v28; // r6
  __int64 v29; // r5
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r7
  __int64 v34; // r6
  __int64 v35; // r5
  __int64 v36; // r4
  __int64 back_chain; // [sp+0h] [-C0h]

  if ( (int)max < 0 || (int)max > 8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "max >= 0 && max <= ITEM_EQUIP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp",
      58LL,
      "set_item_max",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp", 58);
  }
  v4 = this->ItemMax;
  if ( (int)max <= (int)v4 )
  {
    v9 = max;
    if ( (int)max < (int)v4 )
    {
      v10 = (_DWORD)this + 2 * max;
      do
      {
        v11 = (unsigned int)(v10 + 52);
        if ( *(_WORD *)v11 )
        {
          if ( !(unsigned int)YS::ITEM::Get(*(unsigned __int16 *)v11, 100LL, 0) )
          {
            printf(
              (unsigned int)"[%s:%d]",
              (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp",
              76LL,
              v16,
              v15,
              v14,
              v13,
              v12);
            printf((unsigned int)"\x1B[31m** WARNING! ", v23, v22, v21, v20, v19, v18, v17);
            printf((unsigned int)"can't store backyard, %d", *(unsigned __int16 *)v11, v29, v28, v27, v26, v25, v24);
            printf((unsigned int)" **\x1B[00m\n", v36, v35, v34, v33, v32, v31, v30);
          }
          *(_WORD *)v11 = 0;
          LODWORD(v4) = this->ItemMax;
        }
        ++v9;
        v10 += 2;
      }
      while ( (int)v9 < (int)v4 );
    }
  }
  else
  {
    v5 = this->ItemMax;
    if ( (int)v4 < (int)max )
    {
      LODWORD(v4) = 2 * v4;
      v6 = (char *)this + v4;
      do
      {
        v7 = (unsigned int)((_DWORD)v6 + 52);
        v8 = (unsigned int)((_DWORD)v6 + 68);
        ++v5;
        v6 += 2;
        *(_WORD *)v7 = 0;
        *(_WORD *)v8 = 0;
      }
      while ( (int)v5 < (int)max );
    }
  }
  this->ItemMax = max;
}
// 495E8C: variable 'back_chain' is possibly undefined
// 495FD0: variable 'v16' is possibly undefined
// 495FD0: variable 'v15' is possibly undefined
// 495FD0: variable 'v14' is possibly undefined
// 495FD0: variable 'v13' is possibly undefined
// 495FD0: variable 'v12' is possibly undefined
// 495FDC: variable 'v23' is possibly undefined
// 495FDC: variable 'v22' is possibly undefined
// 495FDC: variable 'v21' is possibly undefined
// 495FDC: variable 'v20' is possibly undefined
// 495FDC: variable 'v19' is possibly undefined
// 495FDC: variable 'v18' is possibly undefined
// 495FDC: variable 'v17' is possibly undefined
// 495FEC: variable 'v29' is possibly undefined
// 495FEC: variable 'v28' is possibly undefined
// 495FEC: variable 'v27' is possibly undefined
// 495FEC: variable 'v26' is possibly undefined
// 495FEC: variable 'v25' is possibly undefined
// 495FEC: variable 'v24' is possibly undefined
// 495FF8: variable 'v36' is possibly undefined
// 495FF8: variable 'v35' is possibly undefined
// 495FF8: variable 'v34' is possibly undefined
// 495FF8: variable 'v33' is possibly undefined
// 495FF8: variable 'v32' is possibly undefined
// 495FF8: variable 'v31' is possibly undefined
// 495FF8: variable 'v30' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

