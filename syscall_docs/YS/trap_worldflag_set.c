---
---
---
name: trap_worldflag_set
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
push unk1 ; (unknown)  (pushImm: 212,213,214,215,216,217,218,219)
syscall 0, 19 ; trap_worldflag_set (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::WORLDFLAG::Set(unsigned __int64 id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B7F38) ----------------------------------------------------
void __fastcall YS::trap_worldflag_set(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::WORLDFLAG::Set(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (00000000004BEAE0) ----------------------------------------------------
void __fastcall YS::WORLDFLAG::Set(unsigned __int64 id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r30
  unsigned __int64 v10; // r29
  unsigned __int64 v11; // r25
  __int64 v12; // r26
  int v13; // r27
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r7
  __int64 v18; // r6
  __int64 v19; // r5
  __int64 v20; // r8
  __int64 v21; // r4
  __int64 v22; // r27
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r7
  __int64 v27; // r6
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r7
  __int64 v32; // r6
  __int64 v33; // r5
  __int64 v34; // r4
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r7
  __int64 v39; // r6
  __int64 v40; // r5
  __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r7
  __int64 v45; // r6
  __int64 v46; // r5
  __int64 v47; // r4
  _BYTE *v48; // r3
  int v49; // r4
  __int64 back_chain; // [sp+0h] [-B0h]

  v9 = (unsigned int)&SaveRam + 16440;
  if ( (_DWORD)id == 139 )
  {
    v10 = 0LL;
    do
    {
      YS::WORLDPOINT::Visit(v10);
      v10 = (int)v10 + 1;
    }
    while ( (int)v10 < 54 );
  }
  switch ( (_DWORD)id )
  {
    case '.':
      if ( (dword_8F8D94 & 0x40000) != 0 )
        return;
      break;
    case '-':
      if ( (dword_8F8D90 & 0x100000) != 0 )
        return;
      break;
    case '*':
      if ( (dword_8F8D90 & 0x400000) != 0 )
        return;
      break;
    default:
      if ( (_DWORD)id == 37 && (dword_8F8D94 & 0x80000) != 0 )
        return;
      break;
  }
  v11 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  v12 = (id >> 3) & 0x1FFFFFFC;
  v13 = 1 << (id & 0x1F);
  if ( (*(_DWORD *)(v9 + v12) & v13) == 0 )
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\worldflag.cpp",
      132LL,
      a4,
      a5,
      a6,
      a7,
      a8);
    printf((unsigned int)"set world flag = %d\n", id, v19, v18, v17, v16, v15, v14);
    if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x100 )
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
    v20 = (unsigned int)YS::WorldFlag;
    v21 = (unsigned int)(YS::WorldFlag + 8);
    *(_DWORD *)(unsigned int)(v9 + v12) |= v13;
    v22 = bsearch(id, v21, *(unsigned int *)(v20 + 4), 16LL, (unsigned int)&YS::ELEMDATA<YS::WORLDFLAG>::Compare);
    if ( !(_DWORD)v22 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "flag != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\worldflag.cpp",
        88LL,
        "Get",
        (const void *)v11);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\worldflag.cpp", 88);
    }
    if ( *(_BYTE *)(v22 + 1) == 1 && YS::PROGRESS::IsSecond() )
    {
      printf(
        (unsigned int)"[%s:%d]",
        (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\worldflag.cpp",
        136LL,
        v27,
        v26,
        v25,
        v24,
        v23);
      printf((unsigned int)"\x1B[31m** WARNING! ", v34, v33, v32, v31, v30, v29, v28);
      printf((unsigned int)"already second, ignore worldflag = %d", id, v40, v39, v38, v37, v36, v35);
      printf((unsigned int)" **\x1B[00m\n", v47, v46, v45, v44, v43, v42, v41);
    }
    else
    {
      if ( *(unsigned __int8 *)((unsigned int)&SaveRam + 16440 + 0x11FLL) == 255 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "sram.UpdateNum < UPDATE_MAX",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\worldflag.cpp",
          139LL,
          "Set",
          (const void *)v11);
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\worldflag.cpp", 139);
      }
      v48 = (_BYTE *)((unsigned int)&SaveRam + 16727);
      v49 = (unsigned __int8)*v48;
      *v48 = v49 + 1;
      *(_BYTE *)((unsigned int)(v9 + v49) + 0x20LL) = id;
    }
  }
}
// 4BEBC0: variable 'back_chain' is possibly undefined
// 4BEC64: variable 'a4' is possibly undefined
// 4BEC64: variable 'a5' is possibly undefined
// 4BEC64: variable 'a6' is possibly undefined
// 4BEC64: variable 'a7' is possibly undefined
// 4BEC64: variable 'a8' is possibly undefined
// 4BEC78: variable 'v19' is possibly undefined
// 4BEC78: variable 'v18' is possibly undefined
// 4BEC78: variable 'v17' is possibly undefined
// 4BEC78: variable 'v16' is possibly undefined
// 4BEC78: variable 'v15' is possibly undefined
// 4BEC78: variable 'v14' is possibly undefined
// 4BEDA4: variable 'v27' is possibly undefined
// 4BEDA4: variable 'v26' is possibly undefined
// 4BEDA4: variable 'v25' is possibly undefined
// 4BEDA4: variable 'v24' is possibly undefined
// 4BEDA4: variable 'v23' is possibly undefined
// 4BEDB4: variable 'v34' is possibly undefined
// 4BEDB4: variable 'v33' is possibly undefined
// 4BEDB4: variable 'v32' is possibly undefined
// 4BEDB4: variable 'v31' is possibly undefined
// 4BEDB4: variable 'v30' is possibly undefined
// 4BEDB4: variable 'v29' is possibly undefined
// 4BEDB4: variable 'v28' is possibly undefined
// 4BEDC8: variable 'v40' is possibly undefined
// 4BEDC8: variable 'v39' is possibly undefined
// 4BEDC8: variable 'v38' is possibly undefined
// 4BEDC8: variable 'v37' is possibly undefined
// 4BEDC8: variable 'v36' is possibly undefined
// 4BEDC8: variable 'v35' is possibly undefined
// 4BEDD8: variable 'v47' is possibly undefined
// 4BEDD8: variable 'v46' is possibly undefined
// 4BEDD8: variable 'v45' is possibly undefined
// 4BEDD8: variable 'v44' is possibly undefined
// 4BEDD8: variable 'v43' is possibly undefined
// 4BEDD8: variable 'v42' is possibly undefined
// 4BEDD8: variable 'v41' is possibly undefined
// 79BA58: using guessed type __int64 (__fastcall *__ptr32 YS::ELEMDATA<YS::WORLDFLAG>::Compare)();
// 8F8D90: using guessed type int dword_8F8D90;
// 8F8D94: using guessed type int dword_8F8D94;
// 2AB0C08: using guessed type int YS::WorldFlag;


---
---
---
appears in:
msn\HE_COLOSSEUM\he_c.bdscript
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COLOSSEUM_8_ONLY\he_c.bdscript
msn\HE_COLOSSEUM_8_PP\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_1_10\he_c.bdscript
msn\HE_COL_1_8\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_1\he_c.bdscript
msn\HE_COL_4_10\he_c.bdscript
msn\HE_COL_4_2\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_4\he_c.bdscript
msn\HE_COL_4_5\he_c.bdscript
msn\HE_COL_4_6\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_4_8\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_5\he_c.bdscript
msn\HE_COL_5_10\he_c.bdscript
msn\HE_COL_5_8\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8PP_BOSS\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\HE_COL_8_10\he_c.bdscript
msn\HE_COL_8_25\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
msn\HE_COL_8_45\he_c.bdscript
msn\HE_COL_8_49\he_c.bdscript
msn\HE_COL_8_5\he_c.bdscript
msn\HE_COL_8_50\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
---
---
---
example usage from msn\HE_COLOSSEUM\he_c.bdscript
L358:
 pushFromPSpVal 12
 pushImm 0
 pushImm 0
 pushImm 1
 gosub 4, L593
 pushImm 212
 syscall 0, 19 ; trap_worldflag_set (1 in, 0 out)
 jmp L591
