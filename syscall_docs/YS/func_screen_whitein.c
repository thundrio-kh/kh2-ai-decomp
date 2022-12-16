---
---
---
name: func_screen_whitein
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
push unk1 ; (unknown)  (pushImmf: 0,1,10,12,120,14,2,20,24,30,60,8,90)
syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Fade::fadeIn(dk::Fade *const this, u_int frame, const bool colorType)
/----- (00000000004B80D0) ----------------------------------------------------
void __fastcall YS::func_screen_whitein(BD_VALUE_16 *args)
{
  dk::Fade *v2; // r3

  v2 = dk::getAllFade();
  dk::Fade::fadeIn(v2, (int)(float)(*(float *)&(*args)[0] / (float)((float)1.0 * 2.0)), 1);
}
->
/----- (000000000004F948) ----------------------------------------------------
void __fastcall dk::Fade::fadeIn(dk::Fade *const this, u_int frame, const bool colorType)
{
  this->m_colorType = colorType;
  this->m_status = FADE_IN_WAIT;
  this->m_inWaitCount = 1;
  dk::Fade::fadeSetup(this, frame);
}


---
---
---
appears in:
limit\riku\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\riku\limi.bdscript
L8679:
 popToSp 0
 pushImmf 360
 gosub 4, L2060
 pushImmf 60
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 82
 gosub 4, L2060
 pushImmf 0
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 ret 
