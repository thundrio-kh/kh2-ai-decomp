---
---
---
name: trap_friend_link_magic
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
syscall 10, 58 ; trap_friend_link_magic (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::linkMagic(kn::Friend_0 *const this, YS::MAGIC_7 *magic, unsigned int *buffer)
/----- (0000000000614890) ----------------------------------------------------
void __fastcall kn::trap_friend_link_magic(BD_VALUE_22 *args)
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
  kn::Friend::linkMagic(
    (kn::Friend_0 *const)*(unsigned int *)(v2 + 4),
    (YS::MAGIC_7 *)*(unsigned int *)&(*args)[4],
    (unsigned int *)*(unsigned int *)&(*args)[8]);
}
// 6148B4: variable 'back_chain' is possibly undefined
->
/----- (00000000000E61A4) ----------------------------------------------------
void __fastcall kn::Friend::linkMagic(kn::Friend_0 *const this, YS::MAGIC_7 *magic, unsigned int *buffer)
{
  int v5; // r31
  unsigned __int64 v6; // r28
  int v7; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

  v5 = (int)buffer;
  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( *(_DWORD *)&(*this)[2900] )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!magic_",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\friend.cpp",
      3076LL,
      "linkMagic",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\friend.cpp", 3076);
  }
  *(_DWORD *)(unsigned int)(*(_DWORD *)magic + 28) |= 4u;
  v7 = *(_DWORD *)&(*this)[2904];
  *(_DWORD *)&(*this)[2900] = (_DWORD)magic;
  if ( v7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!magicBuffer_",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\friend.cpp",
      3079LL,
      "linkMagic",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\friend.cpp", 3079);
  }
  *(_DWORD *)&(*this)[2904] = v5;
}
// E61D4: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

