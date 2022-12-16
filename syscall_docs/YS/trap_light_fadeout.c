---
---
---
name: trap_light_fadeout
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
push unk1 ; (unknown)  (pushFromFSpVal: 100,112,168,20,200,...) (pushFromFWp: W0,W12,W140,W144,W16,...) (pushFromFSp: 32,36,4) (fetchValue: 160)
push unk2 ; (unknown)  (pushFromFSp: 4) (pushImmf: 0,10,16,20,30,40,60)
syscall 1, 184 ; trap_light_fadeout (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LIGHT::fadeout(YS::LIGHT_0 *const this, double time)
/----- (0000000000509BF4) ----------------------------------------------------
void __fastcall YS::trap_light_fadeout(BD_VALUE_21 *args)
{
  YS::LIGHT::fadeout((YS::LIGHT_0 *const)(*args)[0], *(float *)&(*args)[4]);
}
->
/----- (000000000043E740) ----------------------------------------------------
void __fastcall YS::LIGHT::fadeout(YS::LIGHT_0 *const this, double time)
{
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 8), this->Fade.Ratio, 0.0, time);
}


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
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
L2462:
 popToSp 4
 popToSp 0
 pushFromFSpVal 100
 pushImm 0
 sub 
 neqz 
 jz L2488
 pushFromFSpVal 100
 pushFromFSp 4
 syscall 1, 184 ; trap_light_fadeout (2 in, 0 out)
 pushImm 0
 popToSpVal 100
 jmp L2488
