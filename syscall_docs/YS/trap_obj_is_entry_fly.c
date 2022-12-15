---
---
---
name: trap_obj_is_entry_fly
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
syscall 1, 124 ; trap_obj_is_entry_fly (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::OBJ::is_entry_fly(YS::OBJ_128 *const this)
/----- (000000000050936C) ----------------------------------------------------
void __fastcall YS::trap_obj_is_entry_fly(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  *(_DWORD *)args = YS::OBJ::is_entry_fly((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4));
}
// 509390: variable 'back_chain' is possibly undefined
->
/----- (00000000004653B4) ----------------------------------------------------
bool __fastcall YS::OBJ::is_entry_fly(YS::OBJ_128 *const this)
{
  return (_cntlzw(*(_WORD *)(*(unsigned int *)&(*this)[8] + 0x48LL) & 8) & 0x20) == 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

