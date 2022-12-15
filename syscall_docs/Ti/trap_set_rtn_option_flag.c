---
---
---
name: trap_set_rtn_option_flag
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
syscall 5, 27 ; trap_set_rtn_option_flag (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::NPC::set_option_flag(YS::NPC_0 *const this, unsigned __int64 n)
/----- (000000000065AE88) ----------------------------------------------------
void __fastcall Ti::trap_set_rtn_option_flag(BD_VALUE_26 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 8) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "npc->is_npc()",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      266LL,
      "trap_set_rtn_option_flag",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 266);
  }
  YS::NPC::set_option_flag((YS::NPC_0 *const)v4, *(unsigned int *)&(*args)[4]);
}
// 65AEAC: variable 'back_chain' is possibly undefined
->
/----- (00000000004EFD90) ----------------------------------------------------
void __fastcall YS::NPC::set_option_flag(YS::NPC_0 *const this, unsigned __int64 n)
{
  int v2; // r30
  _DWORD *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  if ( (n & 0x80000000) != 0LL || (unsigned int)n >= 7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      44LL,
      "set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 44);
  }
  v4 = (_DWORD *)(v2 + ((unsigned int)(n >> 3) & 0x1FFFFFFC) + 2820);
  *v4 |= 1 << (n & 0x1F);
}
// 4EFDB4: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

