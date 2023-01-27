---
---
---
name: method_obj_reset_reaction_command
---
---
---
category: unused
---
---
---
documentation level: untested
---
---
---
push obj ; (struct *) (Object with a reaction command flag)
push command ; (int) (The command to be enabled)
push group ; (int) (Unknown) 
syscall 1, 51 ; method_obj_reset_reaction_command (3 in, 0 out)
---
---
---
description: Resets the reaction command state to starting state
---
---
---
decompiled code:
void __fastcall YS::RECOM_FLAG::reset(YS::RECOM_FLAG *const this, int command, int group)
/----- (0000000000503B7C) ----------------------------------------------------
void __fastcall YS::method_obj_reset_reaction_command(BD_VALUE_21 *args)
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
  YS::RECOM_FLAG::reset(
    (YS::RECOM_FLAG *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 1044),
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}
// 503BA0: variable 'back_chain' is possibly undefined
->
/----- (0000000000493580) ----------------------------------------------------
void __fastcall YS::RECOM_FLAG::reset(YS::RECOM_FLAG *const this, int command, int group)
{
  int v3; // r7
  int v4; // r8
  int i; // r9
  unsigned __int64 v6; // r7

  v3 = 0;
  v4 = (int)this;
  for ( i = 0; this->Work[i].Command != command || *(_DWORD *)(unsigned int)(v4 + 4) != group; ++i )
  {
    ++v3;
    v4 += 12;
    if ( v3 >= 8 )
      return;
  }
  v6 = (unsigned int)((_DWORD)this + 12 * v3);
  if ( (_DWORD)v6 )
    *(_DWORD *)v6 = 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

