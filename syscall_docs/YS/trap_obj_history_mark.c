---
---
---
name: trap_obj_history_mark
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
syscall 1, 189 ; trap_obj_history_mark (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::FIELDOBJ::mark_history(YS::FIELDOBJ *const this)
/----- (00000000004FD564) ----------------------------------------------------
void __fastcall YS::trap_obj_history_mark(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 0x100) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_fieldobj()",
      "common",
      "../yasui/libys/fieldobj.h",
      30LL,
      "TOFIELDOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/fieldobj.h", 30);
  }
  YS::FIELDOBJ::mark_history((YS::FIELDOBJ *const)v3);
}
// 4FD584: variable 'back_chain' is possibly undefined
->
/----- (00000000004E7D5C) ----------------------------------------------------
void __fastcall YS::FIELDOBJ::mark_history(YS::FIELDOBJ *const this)
{
  int v1; // r3

  v1 = YS::OBJ::get_serial((YS::OBJ_125 *const)this);
  YS::HISTORY::set((YS::HISTORY_0 *const)&YS::HISTORY::Gimmick, v1);
}
// 2A97948: using guessed type int YS::HISTORY::Gimmick;


---
---
---
appears in:

---
---
---
example usage from NA

