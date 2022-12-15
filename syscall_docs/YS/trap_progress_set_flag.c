---
---
---
name: trap_progress_set_flag
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
syscall 0, 14 ; trap_progress_set_flag (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PROGRESS::SetFlag(unsigned __int64 _num, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B7C98) ----------------------------------------------------
void __fastcall YS::trap_progress_set_flag(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::PROGRESS::SetFlag(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (000000000048F874) ----------------------------------------------------
void __fastcall YS::PROGRESS::SetFlag(unsigned __int64 _num, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // r31
  unsigned int v10; // r30
  unsigned __int64 v11; // r29
  __int64 v12; // r28
  __int64 v13; // r27
  __int64 v14; // r23
  int v15; // r26
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r7
  __int64 v20; // r6
  __int64 v21; // r5
  __int64 v22; // r4
  const char *v23; // r3
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r7
  __int64 v28; // r6
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r7
  __int64 v33; // r6
  __int64 v34; // r5
  __int64 v35; // r4
  unsigned int v36; // r3
  __int64 v37; // r27
  int v38; // r4
  unsigned __int64 i; // r28
  unsigned int v40; // r4
  unsigned __int64 v41; // r30
  __int64 j; // r24
  __int64 v43; // r26
  __int64 v44; // r27
  __int64 v45; // r26
  __int64 v46; // r27
  __int64 v47; // r26
  __int64 v48; // r27
  __int64 v49; // r27
  int v50; // r24
  int v51; // r31
  __int64 v52; // r10
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r7
  __int64 v56; // r6
  __int64 v57; // r5
  __int64 v58; // r4
  __int64 back_chain; // [sp+0h] [-C0h]

  v9 = (int)_num >> 10;
  v10 = _num & 0x3FF;
  v11 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (int)_num >> 10 < 0 || v9 >= 19 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "world >= 0 && world < WORLD_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp",
      152LL,
      "SetFlag",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp", 152);
  }
  v12 = (unsigned int)YS::PROGRESS::Table[v9];
  if ( v10 >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v11);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  v13 = (_num >> 3) & 0x7C;
  v14 = 0LL;
  v15 = 1 << (_num & 0x1F);
  if ( (*(_DWORD *)((unsigned int)(32 * v9 + 9398752) + v13) & v15) != 0 )
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp",
      158LL,
      a4,
      a5,
      a6,
      a7,
      a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v22, v21, v20, v19, v18, v17, v16);
    v23 = WORLD::GetName((int)_num >> 10);
    printf(
      (unsigned int)"duplicate set ProgressFlag, world = %s, num = %d",
      (__int64)v23,
      _num,
      v28,
      v27,
      v26,
      v25,
      v24);
    printf((unsigned int)" **\x1B[00m\n", v35, v34, v33, v32, v31, v30, v29);
  }
  if ( v10 >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      44LL,
      "set",
      (const void *)v11);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 44);
  }
  v36 = 32 * v9 + 9398752 + v13;
  v37 = (2 * _num) & 0x7FE;
  v38 = *(unsigned __int16 *)(v12 + v37);
  *(_DWORD *)v36 |= v15;
  if ( !v38 )
  {
    ErrorPrintf("*ERROR! ");
    ErrorPrintf(_LNst__ZN2YS8PROGRESS7SetFlagEi_5, _num);
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp", 173);
    v38 = *(unsigned __int16 *)(v12 + v37);
  }
  for ( i = (unsigned int)(v12 + v38); *(_BYTE *)(i + 1); i = (unsigned int)i + 2 * *(unsigned __int8 *)i + 2 )
  {
    v40 = *(unsigned __int8 *)(i + 1);
    v41 = (unsigned int)(i + 2);
    if ( v40 > 6 )
    {
      if ( v40 != 13 )
      {
        switch ( v40 )
        {
          case 0xCu:
            v49 = 0LL;
            if ( *(_BYTE *)i )
            {
              v50 = 0;
              do
              {
                if ( !YS::PROGRESS::CheckFlag(*(unsigned __int16 *)(v41 + v50)) )
                  YS::PROGRESS::SetFlag(*(unsigned __int16 *)(v41 + v50));
                ++v49;
                v50 += 2;
              }
              while ( (int)v49 < *(unsigned __int8 *)i );
            }
            continue;
          case 9u:
            v47 = 0LL;
            if ( *(_BYTE *)i )
            {
              v48 = 0LL;
              do
              {
                YS::MENUFLAG::Reset(*(unsigned __int16 *)(v41 + (int)v48));
                ++v47;
                v48 += 2LL;
              }
              while ( (int)v47 < *(unsigned __int8 *)i );
            }
            continue;
          case 8u:
            v45 = 0LL;
            if ( *(_BYTE *)i )
            {
              v46 = 0LL;
              do
              {
                YS::MENUFLAG::Set(*(unsigned __int16 *)(v41 + (int)v46));
                ++v45;
                v46 += 2LL;
              }
              while ( (int)v45 < *(unsigned __int8 *)i );
            }
            continue;
          case 7u:
            v43 = 0LL;
            if ( *(_BYTE *)i )
            {
              v44 = 0LL;
              do
              {
                YS::PROGRESS::ResetFlag(*(unsigned __int16 *)(v41 + (int)v44));
                ++v43;
                v44 += 2LL;
              }
              while ( (int)v43 < *(unsigned __int8 *)i );
            }
            continue;
        }
LABEL_54:
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "0",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp",
          210LL,
          "SetFlag",
          (const void *)v11);
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp", 210);
        continue;
      }
      *(_WORD *)&YS::WORLDSTATE::Get((int)_num >> 10)->Scenario = *(_WORD *)v41;
    }
    else
    {
      switch ( v40 )
      {
        case 6u:
          YS::BGMSET::Change((int)_num >> 10, *(unsigned __int16 *)v41);
          break;
        case 5u:
          YS::DISAREA::Reset(*(unsigned __int16 *)v41);
          break;
        case 4u:
          YS::DISAREA::Lost(*(unsigned __int16 *)v41);
          break;
        case 3u:
          YS::DISAREA::Enable(*(unsigned __int16 *)v41);
          break;
        case 2u:
          YS::DISAREA::Disable(
            *(unsigned __int16 *)v41,
            *(unsigned __int16 *)((unsigned int)(i + 2) + 2LL),
            *(unsigned __int16 *)((unsigned int)(i + 2) + 4LL));
          break;
        case 1u:
          for ( j = 0LL; (int)j < (int)*(unsigned __int8 *)i >> 2; v41 = (unsigned int)(v41 + 8) )
          {
            AREA::SET::change(
              (AREA::SET *const)(6 * (unsigned int)*(unsigned __int16 *)v41 + 9391456 + 384 * v9),
              (const AREA::SET *)(unsigned int)(v41 + 2));
            ++j;
          }
          continue;
        default:
          goto LABEL_54;
      }
    }
  }
  YS::PROGRESS::CheckPooh(_num);
  YS::PROGRESS::CheckLM();
  v51 = 0;
  do
  {
    if ( LS_42_table[v51] == (_DWORD)_num )
      YS::VISITAREA::Visit(LS_42_table[v51 + 1], LS_42_table[v51 + 2]);
    ++v14;
    v51 += 3;
  }
  while ( (int)v14 < 14 );
  if ( YS::PROGRESS::CheckFlag(0x102BuLL)
    && !YS::PROGRESS::CheckFlag(0x1807uLL)
    && !YS::PROGRESS::CheckFlag(0x1809uLL)
    && YS::PROGRESS::CheckFlag(0x1822uLL) )
  {
    if ( YS::PROGRESS::CheckFlag(0x1865uLL) )
      YS::PROGRESS::SetFlag(6153);
    else
      YS::PROGRESS::SetFlag(6151);
  }
  YS::LINK_FLAG::Check();
  YS::CA_SHIP::ProgressCallback(_num);
  YS::WORLDFLAG::ProgressCallback(_num, v58, v57, v56, v55, v54, v53, v52);
  YS::BATTLELEVEL::ProgressCallback(_num);
  YS::HE_COLOSSEUM::Check();
  if ( (_DWORD)_num == 2256 )
    YS::VISITAREA::Reset();
  YS::WORLDPOINT::ProgressCallback(_num);
}
// 48F950: conditional instruction was optimized away because of 'r30.4<400u'
// 48FA40: conditional instruction was optimized away because of 'r30.4<400u'
// 48F8A8: variable 'back_chain' is possibly undefined
// 48F9EC: variable 'a4' is possibly undefined
// 48F9EC: variable 'a5' is possibly undefined
// 48F9EC: variable 'a6' is possibly undefined
// 48F9EC: variable 'a7' is possibly undefined
// 48F9EC: variable 'a8' is possibly undefined
// 48F9FC: variable 'v22' is possibly undefined
// 48F9FC: variable 'v21' is possibly undefined
// 48F9FC: variable 'v20' is possibly undefined
// 48F9FC: variable 'v19' is possibly undefined
// 48F9FC: variable 'v18' is possibly undefined
// 48F9FC: variable 'v17' is possibly undefined
// 48F9FC: variable 'v16' is possibly undefined
// 48FA24: variable 'v28' is possibly undefined
// 48FA24: variable 'v27' is possibly undefined
// 48FA24: variable 'v26' is possibly undefined
// 48FA24: variable 'v25' is possibly undefined
// 48FA24: variable 'v24' is possibly undefined
// 48FA34: variable 'v35' is possibly undefined
// 48FA34: variable 'v34' is possibly undefined
// 48FA34: variable 'v33' is possibly undefined
// 48FA34: variable 'v32' is possibly undefined
// 48FA34: variable 'v31' is possibly undefined
// 48FA34: variable 'v30' is possibly undefined
// 48FA34: variable 'v29' is possibly undefined
// 48FED0: variable 'v58' is possibly undefined
// 48FED0: variable 'v57' is possibly undefined
// 48FED0: variable 'v56' is possibly undefined
// 48FED0: variable 'v55' is possibly undefined
// 48FED0: variable 'v54' is possibly undefined
// 48FED0: variable 'v53' is possibly undefined
// 48FED0: variable 'v52' is possibly undefined
// 727B4C: using guessed type int LS_42_table[];


---
---
---
appears in:

---
---
---
example usage from NA

