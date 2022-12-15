---
---
---
name: trap_unit_enable
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
syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::UNIT_GROUP::Enable(int id)
/----- (000000000050A430) ----------------------------------------------------
void __fastcall YS::trap_unit_enable(BD_VALUE_21 *args)
{
  YS::UNIT_GROUP::Enable(*(_DWORD *)args);
}
->
/----- (00000000004B25C8) ----------------------------------------------------
void __fastcall YS::UNIT_GROUP::Enable(int id)
{
  __int64 v1; // r5
  void *v2; // r6
  char *v3; // r31
  __int64 back_chain; // [sp+0h] [-80h]

  v1 = 0LL;
  if ( YS::GroupPt <= 0 )
  {
LABEL_6:
    LODWORD(v3) = 0;
  }
  else
  {
    v2 = &YS::Group;
    while ( *(unsigned __int16 *)(*(unsigned int *)((unsigned int)v2 + 8LL) + 2LL) != id )
    {
      ++v1;
      LODWORD(v2) = (_DWORD)v2 + 56;
      if ( YS::GroupPt <= (int)v1 )
        goto LABEL_6;
    }
    v3 = (char *)&YS::Group + 56 * v1;
  }
  if ( !(_DWORD)v3 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\unitgroup.cpp",
      1020LL,
      "Enable",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\unitgroup.cpp", 1020);
  }
  *(_DWORD *)(unsigned int)((_DWORD)v3 + 4) &= 0xFFFFFFFE;
}
// 4B2644: variable 'back_chain' is possibly undefined
// 7FE858: using guessed type int YS::GroupPt;


---
---
---
appears in:

---
---
---
example usage from NA

