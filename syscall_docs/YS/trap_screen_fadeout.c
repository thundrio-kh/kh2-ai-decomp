---
---
---
name: trap_screen_fadeout
---
---
---
category: visual
---
---
---
documentation level: untested
---
---
---
push frame ; (float)  (Number of frames)
syscall 0, 87 ; trap_screen_fadeout (1 in, 0 out)
---
---
---
description: Performs a fadeout on the screen
---
---
---
decompiled code:
void __fastcall dk::Fade::fadeOut(dk::Fade *const this, u_int frame, const bool colorType)
/----- (00000000004B81C0) ----------------------------------------------------
void __fastcall YS::trap_screen_fadeout(BD_VALUE_16 *args)
{
  dk::Fade *v2; // r3

  v2 = dk::getAllFade();
  dk::Fade::fadeOut(v2, (int)(float)(*(float *)&(*args)[0] / (float)((float)1.0 * 2.0)), 0);
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

---
---
---
example usage from NA

