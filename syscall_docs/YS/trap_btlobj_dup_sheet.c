---
---
---
name: trap_btlobj_dup_sheet
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
syscall 2, 95 ; trap_btlobj_dup_sheet (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PIERROT::dup_sheet(YS::PIERROT_6 *const this, __int64 param)
/----- (00000000004F2C30) ----------------------------------------------------
void __fastcall YS::trap_btlobj_dup_sheet(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1420) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_pierrot()",
      "common",
      "../yasui/libys/pierrot.h",
      47LL,
      "TOPIERROT",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/pierrot.h", 47);
  }
  YS::PIERROT::dup_sheet((YS::PIERROT_6 *const)v4, *(int *)&(*args)[4]);
}
// 4F2C54: variable 'back_chain' is possibly undefined
->
/----- (000000000047B8A0) ----------------------------------------------------
void __fastcall YS::PIERROT::dup_sheet(YS::PIERROT_6 *const this, __int64 param)
{
  YS::SHEET_44 *v4; // r3
  YS::SHEET_44 *v5; // r3

  v4 = (YS::SHEET_44 *)*(unsigned int *)&(*this)[1164];
  if ( (_DWORD)v4 )
    YS::SHEET::Free(v4);
  v5 = YS::SHEET::DupEnemy(param);
  *(_DWORD *)&(*this)[1164] = (_DWORD)v5;
  if ( (_DWORD)v5 )
    *(_DWORD *)&(*v5)[604] = (_DWORD)this;
}


---
---
---
appears in:

---
---
---
example usage from NA

