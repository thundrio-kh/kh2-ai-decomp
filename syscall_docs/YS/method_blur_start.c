---
---
---
name: method_blur_start
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
push blur ; (YS::BLUR *) (blur object that has been initialized?)
syscall 0, 29 ; method_blur_start (1 in, 0 out)
---
---
---
description: Starts the blur effect. Unused in the vanilla game
---
---
---
decompiled code:
void __fastcall YS::BLUR::start(YS::BLUR *const this, double time)
/----- (00000000004B7FF8) ----------------------------------------------------
void __fastcall YS::method_blur_start(BD_VALUE_16 *args)
{
  YS::BLUR::start((YS::BLUR *const)(*args)[0], 0.0);
}
->
/----- (00000000004DCAE8) ----------------------------------------------------
void __fastcall YS::BLUR::start(YS::BLUR *const this, double time)
{
  bool v4; // r4

  v4 = this->Type == 0;
  *(_DWORD *)&this->Flag |= 1u;
  dk::Blur::setBlurType(!v4);
  dk::Blur::setBlurAlpha(this->Alpha);
  dk::Blur::setBlurXYSize((unsigned __int16)(this->XSize + 256), (unsigned __int16)(this->YSize + 208));
  dk::Blur::setBlurRot(this->Rot, this->RotFrame);
  dk::Blur::setBlurFlag(1);
  YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 28), 0.0, 1.0, time);
}


---
---
---
appears in:

---
---
---
example usage from NA

