---
---
---
name: trap_bonuslevel_up
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
syscall 2, 73 ; trap_bonuslevel_up (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BONUSLEVEL::Up(unsigned __int64 id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F571C) ----------------------------------------------------
void __fastcall YS::trap_bonuslevel_up(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::BONUSLEVEL::Up(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (00000000004DD4F8) ----------------------------------------------------
void __fastcall YS::BONUSLEVEL::Up(unsigned __int64 id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r6
  unsigned __int64 v10; // r29
  int v11; // r5
  unsigned __int64 v12; // r30
  __int64 v13; // r27
  int v14; // r28
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r7
  __int64 v32; // r6
  __int64 v33; // r5
  __int64 v34; // r4
  YS::SHEET_44 *v35; // r23
  __int64 back_chain; // [sp+0h] [-C0h]

  v8 = 0LL;
  v10 = (unsigned int)(YS::BonusLevel + 8);
  v11 = *(_DWORD *)((unsigned int)YS::BonusLevel + 4LL);
  if ( v11 <= 0 )
  {
LABEL_4:
    v10 = 0LL;
  }
  else
  {
    while ( *(unsigned __int8 *)v10 != (_DWORD)id )
    {
      ++v8;
      v10 = (unsigned int)(v10 + 16);
      if ( (int)v8 >= v11 )
        goto LABEL_4;
    }
  }
  v12 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v10 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "table != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\bonuslevel.cpp",
      103LL,
      "Up",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\bonuslevel.cpp", 103);
  }
  if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v12);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  v13 = (id >> 3) & 0x1FFFFFFC;
  v14 = 1 << (id & 0x1F);
  if ( (*(int *)((char *)&dword_8F8454 + v13) & v14) != 0 )
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\bonuslevel.cpp",
      105LL,
      v8,
      a5,
      a6,
      a7,
      a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v21, v20, v19, v18, v17, v16, v15);
    printf((unsigned int)"already up bonuslevel, id = %d", id, v27, v26, v25, v24, v23, v22);
    printf((unsigned int)" **\x1B[00m\n", v34, v33, v32, v31, v30, v29, v28);
  }
  else
  {
    ++byte_8F8450;
    if ( (id & 0x80000000) != 0LL || (unsigned int)id >= 0x100 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "(int)n >= 0 && (int)n < bitmax",
        "common",
        "../yasui/flag.h",
        44LL,
        "set",
        (const void *)v12);
      ErrorRaise();
      Axa::AxaAssert("../yasui/flag.h", 44);
    }
    *(_DWORD *)((unsigned int)&dword_8F8454 + (unsigned int)v13) |= v14;
    while ( (unsigned int)v10 < YS::BonusLevel + 16 * *(_DWORD *)((unsigned int)YS::BonusLevel + 4LL) + 8
         && *(unsigned __int8 *)v10 == (_DWORD)id )
    {
      v35 = YS::SHEET::AllocPart(*(unsigned __int8 *)(v10 + 1), -1);
      if ( !(_DWORD)v35 )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "sheet != NULL",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\bonuslevel.cpp",
          113LL,
          "Up",
          (const void *)v12);
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\bonuslevel.cpp", 113);
      }
      YS::BONUSLEVEL::up((const YS::BONUSLEVEL *const)v10, v35);
      YS::SHEET::Free(v35);
      v10 = (unsigned int)(v10 + 16);
    }
    YS::PROGRESS::CheckLM();
  }
}
// 4DD580: variable 'back_chain' is possibly undefined
// 4DD680: variable 'v8' is possibly undefined
// 4DD680: variable 'a5' is possibly undefined
// 4DD680: variable 'a6' is possibly undefined
// 4DD680: variable 'a7' is possibly undefined
// 4DD680: variable 'a8' is possibly undefined
// 4DD690: variable 'v21' is possibly undefined
// 4DD690: variable 'v20' is possibly undefined
// 4DD690: variable 'v19' is possibly undefined
// 4DD690: variable 'v18' is possibly undefined
// 4DD690: variable 'v17' is possibly undefined
// 4DD690: variable 'v16' is possibly undefined
// 4DD690: variable 'v15' is possibly undefined
// 4DD6A4: variable 'v27' is possibly undefined
// 4DD6A4: variable 'v26' is possibly undefined
// 4DD6A4: variable 'v25' is possibly undefined
// 4DD6A4: variable 'v24' is possibly undefined
// 4DD6A4: variable 'v23' is possibly undefined
// 4DD6A4: variable 'v22' is possibly undefined
// 4DD6B4: variable 'v34' is possibly undefined
// 4DD6B4: variable 'v33' is possibly undefined
// 4DD6B4: variable 'v32' is possibly undefined
// 4DD6B4: variable 'v31' is possibly undefined
// 4DD6B4: variable 'v30' is possibly undefined
// 4DD6B4: variable 'v29' is possibly undefined
// 4DD6B4: variable 'v28' is possibly undefined
// 8F8450: using guessed type char byte_8F8450;
// 8F8454: using guessed type int dword_8F8454;
// 2AB3710: using guessed type int YS::BonusLevel;


---
---
---
appears in:

---
---
---
example usage from NA

