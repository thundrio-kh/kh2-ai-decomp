---
---
---
name: trap_obj_scatter_prize_mu
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
push unk1 ; (unknown)  (pushFromFSp: 4) (pushImmf: 0.5)
push unk2 ; (unknown)  (pushFromFSp: 8) (mulf: )
syscall 1, 226 ; trap_obj_scatter_prize_mu (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
void __fastcall YS::PRIZE_MU::AppearGauge(const kn::FVector *pos, double gauge)
/----- (00000000004FCFBC) ----------------------------------------------------
void __fastcall YS::trap_obj_scatter_prize_mu(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v5; // [sp+70h] [-30h] BYREF

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
  YS::OBJ::get_target_pos((YS::OBJ_125 *const)&v5, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4));
  YS::PRIZE_MU::AppearGauge(&v5, *(float *)&(*args)[4]);
}
// 4FCFE0: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_target_pos YS::PRIZE_MU::AppearGauge
->
/----- (0000000000461984) ----------------------------------------------------
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
{
  YS::TARGET_108 v4; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v4);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v4, a2, 0);
  YS::TARGET::get_pos((const YS::TARGET_108 *const)this, (const YS::TARGET_108 *)v4);
}


->
/----- (0000000000486D8C) ----------------------------------------------------
void __fastcall YS::PRIZE_MU::AppearGauge(const kn::FVector *pos, double gauge)
{
  __int64 v4; // r21
  int v5; // r26
  void *v6; // r31
  __int64 v7; // r23
  double v8; // fp2
  double v9; // fp31
  int v10; // fp3
  __int64 v11; // fp31
  float v12; // r22

  if ( YS::PrizeMu )
  {
    v4 = 0LL;
    v5 = 0;
    v6 = &YS::ParamTable;
    do
    {
      v7 = 0LL;
      v8 = YS::GaugeTable[v5];
      v9 = (float)((float)((float)gauge * LS_122_rate_table[v5]) / YS::GaugeTable[v5]);
      v10 = (int)v9;
      v11 = (__int64)v9;
      v12 = *(float *)&v10;
      if ( v10 > 0 )
      {
        do
        {
          YS::PRIZE::appear(
            (YS::PRIZE *const)(unsigned int)YS::PrizeMu,
            (const YS::PRIZEEFFECT::PARAM *)(unsigned int)v6,
            pos);
          ++v7;
        }
        while ( (int)v7 < SLODWORD(v12) );
        v8 = YS::GaugeTable[v5];
      }
      ++v4;
      LODWORD(v6) = (_DWORD)v6 + 16;
      ++v5;
      gauge = (float)-(float)((float)((float)v8 * (float)v11) - (float)gauge);
    }
    while ( (int)v4 < 3 );
  }
}
// 727444: using guessed type float YS::GaugeTable[];
// 7FE828: using guessed type void *__ptr32 YS::PrizeMu;


---
---
---
appears in:
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\MU09_MS108\mu09.bdscript
---
---
---
example usage from msn\MU01_MS102\mu01.bdscript
L118:
 jz L139
 pushFromFSp 8
 pushImmf -1
 mulf 
 pushImm 0
 syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)
 pushFromFSp 4
 pushFromFSp 8
 syscall 1, 226 ; trap_obj_scatter_prize_mu (2 in, 0 out)
 jmp L139
