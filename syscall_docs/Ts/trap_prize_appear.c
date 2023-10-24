---
---
---
name: trap_prize_appear
---
---
---
category: prize
---
---
---
documentation level: untested
---
---
---
push pos ; (kn::FVector *)  (A position vector)
push prize_id ; (int)  (ID of the prize to appear)
syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
---
---
---
description: Make a prize appear
---
---
---
decompiled code:
void __fastcall YS::PRIZE::Appear(const kn::FVector *pos, int id)
/----- (0000000000624DB8) ----------------------------------------------------
void __fastcall Ts::trap_prize_appear(BD_VALUE_25 *args)
{
  YS::PRIZE::Appear((const kn::FVector *)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000483478) ----------------------------------------------------
void __fastcall YS::PRIZE::Appear(const kn::FVector *pos, int id)
{
  double v4; // fp31
  BOOL v5; // r31
  const YS::PRIZETABLE *v6; // r30
  __int64 v7; // r23
  int v8; // r29
  double v9; // fp30
  double v10; // fp29
  unsigned __int64 v11; // r28
  __int64 v12; // r29
  __int64 v13; // r28
  int v14; // r27
  int v15; // r26
  __int64 v16; // r25
  const YS::PRIZEEFFECT::PARAM *v17; // r22
  __int64 v18; // r26
  const YS::PRIZEEFFECT::PARAM *v19; // r28
  int i; // r29
  unsigned __int64 v21; // r28
  int v22; // r29
  __int64 v23; // fp1
  __int64 back_chain; // [sp+0h] [-E0h]

  v4 = YS::STATUS::GetPrizeRatio();
  v5 = YS::MICKEY::IsExist();
  if ( YS::Prize )
  {
    v6 = YS::PRIZETABLE::Get(id);
    v7 = 0LL;
    if ( (YS::STATUS::Flag & 0x200) == 0 || v5 )
    {
      v8 = 0;
      v9 = 1.0;
      v10 = 1.0;
      do
      {
        v11 = YS::PARTY::Get(v8);
        if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)v11) && *(_DWORD *)(v11 + 1164) )
          v9 = (float)((float)v9 * *(float *)&(*YS::PARTY::get_ability((YS::PARTY_63 *const)v11))[112]);
        ++v8;
      }
      while ( v8 < 3 );
      v12 = 0LL;
      do
      {
        v13 = v12;
        if ( v5 )
        {
          if ( (int)v12 < 0 || (int)v12 >= 9 )
          {
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "type >= 0 && type < TYPE_MAX",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\prize.cpp",
              364LL,
              "ConvertDrive",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\prize.cpp", 364);
          }
          v13 = (unsigned __int8)LS_184_table[v12];
        }
        v14 = YS::PRIZETABLE::get_num(v6, v12, v4);
        if ( (int)v13 >= 2 && (int)v13 <= 4 )
        {
          v15 = v14 - (int)(float)((float)v14 * (float)v9);
          if ( (int)v13 < 0 || (int)v13 >= 9 )
          {
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "type >= 0 && type < TYPE_MAX",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\prize.cpp",
              364LL,
              "ConvertDrive",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\prize.cpp", 364);
          }
          v16 = 0LL;
          if ( v15 > 0 )
          {
            v17 = (const YS::PRIZEEFFECT::PARAM *)(16 * (unsigned __int8)LS_184_table[v13]
                                                 + (unsigned int)&YS::ParamTable);
            do
            {
              YS::PRIZE::appear((YS::PRIZE *const)(unsigned int)YS::Prize, v17, pos);
              ++v16;
            }
            while ( (int)v16 < v15 );
          }
          v14 = (int)(float)((float)v14 * (float)v9);
        }
        v18 = 0LL;
        if ( v14 > 0 )
        {
          v19 = (const YS::PRIZEEFFECT::PARAM *)((unsigned int)&YS::ParamTable + 16 * (_DWORD)v13);
          do
          {
            YS::PRIZE::appear((YS::PRIZE *const)(unsigned int)YS::Prize, v19, pos);
            ++v18;
          }
          while ( (int)v18 < v14 );
        }
        v12 = (int)v12 + 1;
      }
      while ( (int)v12 < 9 );
      if ( (YS::STATUS::Flag & 0x400) == 0 )
      {
        if ( v5 )
          return;
        for ( i = 0; i < 3; ++i )
        {
          v21 = YS::PARTY::Get(i);
          if ( (unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)v21) && *(_DWORD *)(v21 + 1164) )
            v10 = (float)((float)v10 + *(float *)&(*YS::PARTY::get_ability((YS::PARTY_63 *const)v21))[104]);
        }
        v22 = (int)v6;
        do
        {
          v23 = *(unsigned __int16 *)(unsigned int)(v22 + 14);
          Random *= 69069;
          if ( (float)((float)v23 * (float)v10) > (double)(float)((float)(unsigned int)Random * (float)0.000000023283064) )
            YS::PRIZEBOX::Appear(*(unsigned __int16 *)(unsigned int)(v22 + 12), pos);
          ++v7;
          v22 += 4;
        }
        while ( (int)v7 < 3 );
      }
    }
    if ( !v5 )
    {
      YS::PRIZE_MU::AppearTable(pos, v6);
      YS::PRIZE_HE::AppearTable(pos, v6);
      YS::PRIZE_COLOSSEUM::AppearTable(pos, v6);
    }
  }
}
// 483598: variable 'back_chain' is possibly undefined
// 7FE818: using guessed type void *__ptr32 YS::Prize;
// 2AAD548: using guessed type int YS::STATUS::Flag;
// 2BB1CA0: using guessed type int Random;


---
---
---
appears in:
limit\aladdin\limi.bdscript
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\F_CA030_DARK\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA030_LIGHT\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA040\f_ca.bdscript ((F) Anchor (CA))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\aladdin\limi.bdscript
L45:
 pushFromFSp 0
 syscall 7, 2 ; trap_attack_hit_mark_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 97
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L158
