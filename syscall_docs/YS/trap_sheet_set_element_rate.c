---
---
---
name: trap_sheet_set_element_rate
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
syscall 1, 311 ; trap_sheet_set_element_rate (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SHEET::set_element_rate(YS::SHEET_44 *const this, int elem, int rate)
/----- (000000000050A9F8) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_element_rate(BD_VALUE_21 *args)
{
  YS::SHEET::set_element_rate((YS::SHEET_44 *const)(*args)[0], *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
->
/----- (0000000000499938) ----------------------------------------------------
void __fastcall YS::SHEET::set_element_rate(YS::SHEET_44 *const this, int elem, int rate)
{
  int v6; // r6
  __int64 back_chain; // [sp+0h] [-90h]

  v6 = *(_DWORD *)&(*this)[612];
  if ( !v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "EnemyParam != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\sheet.cpp",
      750LL,
      "set_element_rate",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\sheet.cpp", 750);
    v6 = *(_DWORD *)&(*this)[612];
  }
  *(_BYTE *)((unsigned int)((_DWORD)this + elem) + 0x1A8LL) = ((int)((unsigned __int64)(1374389535LL
                                                                                      * (*(unsigned __int16 *)(unsigned int)(v6 + 2 * elem + 72)
                                                                                       * rate
                                                                                       + 99)) >> 32) >> 5)
                                                            + ((((unsigned __int64)(1374389535LL
                                                                                  * (*(unsigned __int16 *)(unsigned int)(v6 + 2 * elem + 72)
                                                                                   * rate
                                                                                   + 99)) >> 32) & 0x80000000) != 0LL);
}
// 499964: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

