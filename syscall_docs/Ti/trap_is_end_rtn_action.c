---
---
---
name: trap_is_end_rtn_action
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
syscall 5, 11 ; trap_is_end_rtn_action (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::NPC::is_end_rtn_action(YS::NPC_0 *const this)
/----- (000000000065A2CC) ----------------------------------------------------
void __fastcall Ti::trap_is_end_rtn_action(BD_VALUE_26 *args)
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
  *(_DWORD *)args = YS::NPC::is_end_rtn_action((YS::NPC_0 *const)*(unsigned int *)(v2 + 4));
}
// 65A2F0: variable 'back_chain' is possibly undefined
->
/----- (00000000004F063C) ----------------------------------------------------
bool __fastcall YS::NPC::is_end_rtn_action(YS::NPC_0 *const this)
{
  return YS::NPC::RTN_ACTION::is_end((YS::NPC::RTN_ACTION_0 *const)(unsigned int)((_DWORD)this + 2624), this);
}


---
---
---
appears in:

---
---
---
example usage from NA

