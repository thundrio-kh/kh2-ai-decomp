---
---
---
name: trap_signal_reserve_min_hp
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
push unk1 ; (unknown)  (pushFromPSp: 0,16)
push unk2 ; (unknown)  (pushImm: 20,82)
push unk3 ; (unknown)  (pushImm: 0)
syscall 1, 142 ; trap_signal_reserve_min_hp (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SIGNAL::ReserveMinHp(YS::OBJ_159 *obj, int signal, int arg)
/----- (0000000000507578) ----------------------------------------------------
void __fastcall YS::trap_signal_reserve_min_hp(BD_VALUE_21 *args)
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
  YS::SIGNAL::ReserveMinHp((YS::OBJ_159 *)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
// 50759C: variable 'back_chain' is possibly undefined
->
/----- (000000000049BB8C) ----------------------------------------------------
void __fastcall YS::SIGNAL::ReserveMinHp(YS::OBJ_159 *obj, int signal, int arg)
{
  int v3; // r28
  int v6; // r6
  _DWORD *v7; // r31
  int v8; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v3 = (int)obj;
  v6 = dword_2AACAD8;
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
    v6 = dword_2AACAD8;
  }
  dword_2AACAD8 = v6 - 1;
  v7 = (_DWORD *)((unsigned int)&YS::Reserve + 24 * dword_2AACAC8[v6 - 1]);
  v7[3] = v3;
  v8 = YS::ReserveList;
  *v7 = 1;
  v7[1] = signal;
  v7[2] = arg;
  if ( !v8 )
  {
    v8 = 0;
    dword_2AACAE4 = (int)v7;
  }
  *(_DWORD *)(unsigned int)((_DWORD)v7 + 20) = v8;
  YS::ReserveList = (int)v7;
}
// 49BBC4: variable 'back_chain' is possibly undefined
// 2AACAC8: using guessed type int dword_2AACAC8[];
// 2AACAD8: using guessed type int dword_2AACAD8;
// 2AACAE0: using guessed type int YS::ReserveList;
// 2AACAE4: using guessed type int dword_2AACAE4;


---
---
---
appears in:
msn\AL00_MS101\ms_a.bdscript
msn\BB01_MS101\ms_a.bdscript
msn\CA01_MS101\ms_a.bdscript
msn\CA01_MS102\ms_d.bdscript
msn\HB09_MS101\ms_d.bdscript
msn\HB09_MS501\ms_d.bdscript
msn\HB09_MS901\ms_d.bdscript
msn\HE06_MS101\ms_a.bdscript
msn\HE19_MS204\ms_a.bdscript
msn\MU07_MS201\mu07.bdscript
msn\NM00_MS101\ms_d.bdscript
msn\TT03_MS601\ms_d.bdscript
msn\TT04_MS301\tt04.bdscript
msn\TT08_MS701\ms_a.bdscript
msn\TT14_MS109\tt_d.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT25_MS801\ms_d.bdscript
msn\TT32_MS302\tt32.bdscript
---
---
---
example usage from msn\AL00_MS101\ms_a.bdscript
L228:
 pushFromFSp 36
 pushFromPAi L374 ; ___ai 'INT' (L374)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 32
 pushFromFSp 36
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushFromPSp 16
 pushImm 20
 pushImm 0
 syscall 1, 142 ; trap_signal_reserve_min_hp (3 in, 0 out)
 ret 
