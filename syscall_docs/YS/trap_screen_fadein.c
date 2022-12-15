---
---
---
name: trap_screen_fadein
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
push unk1 ; (unknown) 
syscall 0, 88 ; trap_screen_fadein (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Fade::fadeIn(dk::Fade *const this, u_int frame, const bool colorType)
/----- (00000000004B8238) ----------------------------------------------------
void __fastcall YS::trap_screen_fadein(BD_VALUE_16 *args)
{
  dk::Fade *v2; // r3

  v2 = dk::getAllFade();
  dk::Fade::fadeIn(v2, (int)(float)(*(float *)&(*args)[0] / (float)((float)1.0 * 2.0)), 0);
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

---
---
---
example usage from NA

