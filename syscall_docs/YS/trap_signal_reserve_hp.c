---
---
---
name: trap_signal_reserve_hp
---
---
---
category: system
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push rate ; (float) (Rate value) 
push signal ; (int) (Signal to call)
push arg ; (int) (Argument to call signal with)
syscall 1, 106 ; trap_signal_reserve_hp (4 in, 0 out)
---
---
---
description: Signal an object to reserve an HP value
---
---
---
decompiled code:
void __fastcall YS::SIGNAL::ReserveHp(YS::OBJ_159 *obj, double rate, int signal, int arg)
/----- (000000000050744C) ----------------------------------------------------
void __fastcall YS::trap_signal_reserve_hp(BD_VALUE_21 *args)
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
  YS::SIGNAL::ReserveHp(
    (YS::OBJ_159 *)*(unsigned int *)(v2 + 4),
    *(float *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12]);
}
// 507470: variable 'back_chain' is possibly undefined
->
/----- (000000000049BA48) ----------------------------------------------------
void __fastcall YS::SIGNAL::ReserveHp(YS::OBJ_159 *obj, double rate, int signal, int arg)
{
  int v7; // r28
  int v8; // r4
  __int64 v9; // r31
  int v10; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v7 = (int)obj;
  v8 = dword_2AACAD8;
  if ( !dword_2AACAD8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_full()",
      "common",
      "../yasui/classblock.h",
      40LL,
      "alloc",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 40);
    v8 = dword_2AACAD8;
  }
  dword_2AACAD8 = v8 - 1;
  v9 = (unsigned int)&YS::Reserve + 24 * dword_2AACAC8[v8 - 1];
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = signal;
  *(_DWORD *)(v9 + 8) = arg;
  *(_DWORD *)(v9 + 0xC) = v7;
  *(float *)(v9 + 0x10) = rate;
  v10 = YS::ReserveList;
  if ( !YS::ReserveList )
  {
    v10 = 0;
    dword_2AACAE4 = v9;
  }
  *(_DWORD *)(unsigned int)(v9 + 20) = v10;
  YS::ReserveList = v9;
}
// 49BA88: variable 'back_chain' is possibly undefined
// 2AACAC8: using guessed type int dword_2AACAC8[];
// 2AACAD8: using guessed type int dword_2AACAD8;
// 2AACAE0: using guessed type int YS::ReserveList;
// 2AACAE4: using guessed type int dword_2AACAE4;


---
---
---
appears in:

---
---
---
example usage from NA

