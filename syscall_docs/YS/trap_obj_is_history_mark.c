---
---
---
name: trap_obj_is_history_mark
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
syscall 1, 190 ; trap_obj_is_history_mark (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::FIELDOBJ::is_mark_history(YS::FIELDOBJ *const this)
/----- (00000000004FD6D8) ----------------------------------------------------
void __fastcall YS::trap_obj_is_history_mark(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 0x100) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_fieldobj()",
      "common",
      "../yasui/libys/fieldobj.h",
      30LL,
      "TOFIELDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/fieldobj.h", 30);
  }
  *(_DWORD *)args = YS::FIELDOBJ::is_mark_history((YS::FIELDOBJ *const)v4);
}
// 4FD6FC: variable 'back_chain' is possibly undefined
->
/----- (00000000004E7DA0) ----------------------------------------------------
__int64 __fastcall YS::FIELDOBJ::is_mark_history(YS::FIELDOBJ *const this)
{
  int v1; // r3

  v1 = YS::OBJ::get_serial((YS::OBJ_125 *const)this);
  return YS::HISTORY::is_set((YS::HISTORY_0 *const)&YS::HISTORY::Gimmick, v1);
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

