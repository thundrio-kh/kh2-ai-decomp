---
---
---
name: trap_check_rtn_option_flag
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
syscall 5, 17 ; trap_check_rtn_option_flag (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::NPC::check_option_flag(YS::NPC_0 *const this, unsigned __int64 n)
/----- (000000000065AD00) ----------------------------------------------------
void __fastcall Ti::trap_check_rtn_option_flag(BD_VALUE_26 *args)
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
      260LL,
      "trap_check_rtn_option_flag",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 260);
  }
  *(_DWORD *)args = YS::NPC::check_option_flag((YS::NPC_0 *const)v4, *(unsigned int *)&(*args)[4]);
}
// 65AD24: variable 'back_chain' is possibly undefined
->
/----- (00000000004EFE60) ----------------------------------------------------
bool __fastcall YS::NPC::check_option_flag(YS::NPC_0 *const this, unsigned __int64 n)
{
  int v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  if ( (n & 0x80000000) != 0LL || (unsigned int)n >= 7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../../yasui/flag.h",
      75LL,
      "check",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../../yasui/flag.h", 75);
  }
  return (*(_DWORD *)(v2 + ((unsigned int)(n >> 3) & 0x1FFFFFFC) + 2820) & (1 << (n & 0x1F))) != 0;
}
// 4EFE84: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

