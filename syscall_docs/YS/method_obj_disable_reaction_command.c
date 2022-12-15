---
---
---
name: method_obj_disable_reaction_command
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
syscall 1, 50 ; method_obj_disable_reaction_command (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::RECOM_FLAG::disable(YS::RECOM_FLAG *const this, int command, int group)
/----- (0000000000503A4C) ----------------------------------------------------
void __fastcall YS::method_obj_disable_reaction_command(BD_VALUE_21 *args)
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
  YS::RECOM_FLAG::disable(
    (YS::RECOM_FLAG *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 1044),
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}
// 503A70: variable 'back_chain' is possibly undefined
->
/----- (0000000000493438) ----------------------------------------------------
void __fastcall YS::RECOM_FLAG::disable(YS::RECOM_FLAG *const this, int command, int group)
{
  int v3; // r6
  int v4; // r7
  int v7; // r8
  __int64 v8; // r6
  int v9; // r6
  int v10; // r7
  __int64 v11; // r3

  v3 = 0;
  v4 = (int)this;
  v7 = 0;
  do
  {
    if ( this->Work[v7].Command == command && *(_DWORD *)(unsigned int)(v4 + 4) == group )
    {
      v8 = (unsigned int)((_DWORD)this + 12 * v3);
      goto LABEL_7;
    }
    ++v3;
    v4 += 12;
    ++v7;
  }
  while ( v3 < 8 );
  v8 = 0LL;
LABEL_7:
  if ( !(_DWORD)v8 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( !this->Work[v10].Command )
      {
        v11 = (unsigned int)((_DWORD)this + 12 * v9);
        goto LABEL_13;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < 8 );
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("reaction flag over");
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\recomflag.cpp", 34);
    v11 = 0LL;
LABEL_13:
    v8 = v11;
  }
  *(_DWORD *)v8 = command;
  *(_DWORD *)(v8 + 4) = group;
  *(_BYTE *)(v8 + 8) = 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

