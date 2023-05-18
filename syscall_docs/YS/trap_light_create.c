---
---
---
name: trap_light_create
---
---
---
category: light
---
---
---
documentation level: untested
---
---
---
push type ; (int)  (type or index of light to create. Valid values are 0 and 1)
syscall 1, 181 ; trap_light_create (1 in, 1 out)
pop light object ; (YS::LIGHT_0 *) 
---
---
---
description: Initializes a light object.
---
---
---
decompiled code:
YS::LIGHT_0 *__fastcall YS::LIGHT::Create(YS::LIGHT::TYPE type)
/----- (0000000000509A9C) ----------------------------------------------------
void __fastcall YS::trap_light_create(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::LIGHT::Create((YS::LIGHT::TYPE)(*args)[0]);
}
->
/----- (000000000043E980) ----------------------------------------------------
YS::LIGHT_0 *__fastcall YS::LIGHT::Create(YS::LIGHT::TYPE type)
{
  YS::LIGHT_0 *v2; // r30
  int v3; // r4
  __int64 v4; // r29
  dk::Fog *v5; // r3
  YS::LIGHT_0 *result; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0LL;
  v3 = dword_2A9D5F8;
  if ( !dword_2A9D5F8 )
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
    v3 = dword_2A9D5F8;
  }
  dword_2A9D5F8 = v3 - 1;
  v4 = (unsigned int)&YS::LightBlock + 40 * dword_2A9D5B8[v3 - 1];
  if ( (_DWORD)v4 )
  {
    *(_DWORD *)v4 = type;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(unsigned int)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 8) = 1065353216;
    *(_BYTE *)(v4 + 20) = 0x80;
    *(_BYTE *)(v4 + 21) = 0x80;
    *(_BYTE *)(v4 + 22) = 0x80;
    *(_BYTE *)(v4 + 23) = 0x80;
    if ( *(_DWORD *)v4 == 1 )
    {
      v5 = dk::MapColor::getFogDefault();
      *(float *)(v4 + 24) = v5->m_near;
      *(float *)(v4 + 28) = v5->m_far;
      *(float *)(v4 + 32) = v5->m_min;
      *(float *)(v4 + 36) = v5->m_max;
    }
    v2 = (YS::LIGHT_0 *)v4;
  }
  if ( dword_2A9D334 )
    *(_DWORD *)(unsigned int)(dword_2A9D334 + 4) = (_DWORD)v2;
  else
    YS::LightList = (int)v2;
  *(_DWORD *)(unsigned int)((_DWORD)v2 + 4) = 0;
  result = v2;
  dword_2A9D334 = (int)v2;
  return result;
}
// 43E9B8: variable 'back_chain' is possibly undefined
// 2A9D330: using guessed type int YS::LightList;
// 2A9D334: using guessed type int dword_2A9D334;
// 2A9D5F8: using guessed type int dword_2A9D5F8;


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from limit\trinity\limi.bdscript
L1419:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 popToSp 0
 pushFromFSpVal 100
 pushImm 0
 sub 
 eqz 
 jz L1454
 pushImm 0
 syscall 1, 181 ; trap_light_create (1 in, 1 out)
 popToSpVal 100
 pushFromFSpVal 100
 pushImm 1
 syscall 1, 182 ; trap_light_set_flag (2 in, 0 out)
 jmp L1454
