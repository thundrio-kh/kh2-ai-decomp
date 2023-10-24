---
---
---
name: func_screen_whiteout
---
---
---
category: visual
---
---
---
documentation level: complete
---
---
---
push frame ; (int)  (Number of frames to take for fade out)
syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
---
---
---
description: Fades the screen to white. On HD versions of the game, the spinning KH logo is present in the bottom right
---
---
---
decompiled code:
void __fastcall dk::Fade::fadeOut(dk::Fade *const this, u_int frame, const bool colorType)
/----- (00000000004B8058) ----------------------------------------------------
void __fastcall YS::func_screen_whiteout(BD_VALUE_16 *args)
{
  dk::Fade *v2; // r3

  v2 = dk::getAllFade();
  dk::Fade::fadeOut(v2, (int)(float)(*(float *)&(*args)[0] / (float)((float)1.0 * 2.0)), 1);
}
->
/----- (000000000004F91C) ----------------------------------------------------
void __fastcall dk::Fade::fadeOut(dk::Fade *const this, u_int frame, const bool colorType)
{
  this->m_colorType = colorType;
  this->m_status = FADE_OUT;
  dk::Fade::fadeSetup(this, frame);
}


---
---
---
appears in:
gumimenu\event\gumi.bdscript
limit\riku\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
---
---
---
example usage from gumimenu\event\gumi.bdscript
L246:
 jz L265
 pushImmf 150
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushFromFSp 0
 pushImm 4
 add 
 pushImm 1
 memcpy 0
 jmp L265
