---
---
---
name: trap_obj_enable_occ_bone
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
syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJOCC::enable(YS::OBJOCC_133 *const this, int bone)
/----- (00000000004FBB38) ----------------------------------------------------
void __fastcall YS::trap_obj_enable_occ_bone(BD_VALUE_21 *args)
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
  YS::OBJOCC::enable((YS::OBJOCC_133 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 2048), *(_DWORD *)&(*args)[4]);
}
// 4FBB5C: variable 'back_chain' is possibly undefined
->
/----- (0000000000472B34) ----------------------------------------------------
void __fastcall YS::OBJOCC::enable(YS::OBJOCC_133 *const this, int bone)
{
  __int64 v4; // r5
  __int64 v5; // r9
  int v6; // r8
  int v7; // r7
  unsigned __int64 v8; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = *(unsigned int *)this;
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objocc.cpp",
      100LL,
      "enable",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objocc.cpp", 100);
    v4 = *(unsigned int *)this;
  }
  v5 = 0LL;
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 > 0 )
  {
    v7 = 0;
    do
    {
      v4 += 8LL;
      if ( *(_DWORD *)(unsigned int)v4 == bone )
      {
        v8 = (unsigned int)(*(_DWORD *)(unsigned int)(*(_DWORD *)&(*this)[4] + v7 + 128) + 8);
        *(_DWORD *)v8 &= 0xFFFFFFFD;
      }
      ++v5;
      v7 += 144;
    }
    while ( (int)v5 < v6 );
  }
}
// 472B58: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

