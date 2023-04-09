---
---
---
name: method_obj_enable_reaction_command
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
push obj ; (YS::OBJ *) (Object with a reaction command flag)
push command ; (int) (The command to be enabled)
push group ; (int) (Unknown) 
syscall 1, 49 ; method_obj_enable_reaction_command (3 in, 0 out)
---
---
---
description: Enables a reaction command so it can be activated by the player. Unused in the vanilla game.
---
---
---
decompiled code:
void __fastcall YS::RECOM_FLAG::enable(YS::RECOM_FLAG *const this, int command, int group)
/----- (000000000050391C) ----------------------------------------------------
void __fastcall YS::method_obj_enable_reaction_command(BD_VALUE_21 *args)
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
  YS::RECOM_FLAG::enable(
    (YS::RECOM_FLAG *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 1044),
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}
// 503940: variable 'back_chain' is possibly undefined
->
/----- (00000000004932F0) ----------------------------------------------------
void __fastcall YS::RECOM_FLAG::enable(YS::RECOM_FLAG *const this, int command, int group)
{
  int v3; // r6
  int v4; // r7
  __int64 v5; // r31
  int v8; // r8
  __int64 v9; // r6
  int v10; // r6
  int v11; // r7

  v3 = 0;
  v4 = (int)this;
  v5 = 0LL;
  v8 = 0;
  do
  {
    if ( this->Work[v8].Command == command && *(_DWORD *)(unsigned int)(v4 + 4) == group )
    {
      v9 = (unsigned int)((_DWORD)this + 12 * v3);
      goto LABEL_7;
    }
    ++v3;
    v4 += 12;
    ++v8;
  }
  while ( v3 < 8 );
  v9 = 0LL;
LABEL_7:
  if ( !(_DWORD)v9 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( !this->Work[v11].Command )
      {
        v5 = (unsigned int)((_DWORD)this + 12 * v10);
        goto LABEL_13;
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 8 );
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("reaction flag over");
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\recomflag.cpp", 34);
LABEL_13:
    v9 = v5;
  }
  *(_DWORD *)v9 = command;
  *(_DWORD *)(v9 + 4) = group;
  *(_BYTE *)(v9 + 8) = 1;
}


---
---
---
appears in:

---
---
---
example usage from NA

