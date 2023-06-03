---
---
---
name: trap_light_set_flag
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
push light_object ; (YS::LIGHT_0 *) (a light object)
push flag_number ; (int)  (which flag to set, only a value of 1 is used in game)
syscall 1, 182 ; trap_light_set_flag (2 in, 0 out)
---
---
---
description: flag to set.
---
---
---
decompiled code:

/----- (0000000000509AD8) ----------------------------------------------------
void __fastcall YS::trap_light_set_flag(BD_VALUE_21 *args)
{
  unsigned __int64 v1; // r31
  int v2; // r30
  _DWORD *v3; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)&(*args)[4];
  v2 = *(_DWORD *)args;
  if ( (v1 & 0x80000000) != 0LL || (unsigned int)v1 >= 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../../yasui/flag.h",
      44LL,
      "set",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../../yasui/flag.h", 44);
  }
  v3 = (_DWORD *)(v2 + ((unsigned int)(v1 >> 3) & 0x1FFFFFFC) + 16);
  *v3 |= 1 << (v1 & 0x1F);
}
// 509AFC: variable 'back_chain' is possibly undefined

//BASIC
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
