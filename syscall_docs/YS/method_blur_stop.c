---
---
---
name: method_blur_stop
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
push blur ; (YS::BLUR *) (initialized and started blur object)
syscall 0, 30 ; method_blur_stop (1 in, 0 out)
---
---
---
description: Stops an active blur. Unused in the vanilla game
---
---
---
decompiled code:
void __fastcall YS::BLUR::stop(YS::BLUR *const this)
/----- (00000000004B802C) ----------------------------------------------------
void __fastcall YS::method_blur_stop(BD_VALUE_16 *args)
{
  YS::BLUR::stop((YS::BLUR *const)(*args)[0]);
}
->
/----- (00000000004DC9A0) ----------------------------------------------------
void __fastcall YS::BLUR::stop(YS::BLUR *const this)
{
  *(_DWORD *)&this->Flag &= 0xFFFFFFFE;
  dk::Blur::setBlurFlag(0);
}


---
---
---
appears in:

---
---
---
example usage from NA

