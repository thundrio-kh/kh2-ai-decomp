---
---
---
name: func_screen_whiteout
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
syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

