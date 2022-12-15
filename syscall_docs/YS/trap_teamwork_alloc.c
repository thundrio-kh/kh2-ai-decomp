---
---
---
name: trap_teamwork_alloc
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
syscall 2, 21 ; trap_teamwork_alloc (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int8 *__fastcall YS::TEAMWORK::Alloc(int id, int size)
/----- (00000000004F5190) ----------------------------------------------------
void __fastcall YS::trap_teamwork_alloc(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::TEAMWORK::Alloc(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004AAE08) ----------------------------------------------------
unsigned __int8 *__fastcall YS::TEAMWORK::Alloc(int id, int size)
{
  int v4; // r8
  int v5; // r6
  int *v6; // r3
  unsigned __int8 *result; // r3
  __int64 v8; // r31
  unsigned __int8 *v9; // r29
  int *v10; // r8
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = 0;
  if ( YS::TeamWorkPt <= 0 )
  {
LABEL_6:
    if ( YS::TeamWorkPt >= 8 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "TeamWorkPt < TEAMWORK_MAX",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\teamwork.cpp",
        35LL,
        "Alloc",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\teamwork.cpp", 35);
    }
    v8 = (unsigned int)(size + 1);
    v9 = (unsigned __int8 *)AREA::Alloc(v8);
    memset_cs(v9, 0, v8);
    result = v9;
    v10 = &YS::TeamWork[2 * YS::TeamWorkPt++];
    *v10 = id;
    v10[1] = (int)v9;
  }
  else
  {
    v5 = 0;
    while ( YS::TeamWork[v5] != id )
    {
      ++v4;
      v5 += 2;
      if ( YS::TeamWorkPt <= v4 )
        goto LABEL_6;
    }
    v6 = &YS::TeamWork[2 * v4];
    *(_BYTE *)(unsigned int)v6[1] = 1;
    result = (unsigned __int8 *)(unsigned int)v6[1];
  }
  return result;
}
// 4AAE90: variable 'back_chain' is possibly undefined
// 2AAEAB8: using guessed type int YS::TeamWork[];
// 2AAEAF8: using guessed type int YS::TeamWorkPt;


---
---
---
appears in:

---
---
---
example usage from NA

