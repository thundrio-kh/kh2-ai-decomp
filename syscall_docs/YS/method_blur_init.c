---
---
---
name: method_blur_init
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
push blur ; (YS::BLUR *) (Variable to store the blur object in?) 
syscall 0, 28 ; method_blur_init (1 in, 0 out)
---
---
---
description: Initialize a blur object. Unused in the vanilla game
---
---
---
decompiled code:
void __cdecl YS::BLUR::Init()
/----- (00000000004B7FC8) ----------------------------------------------------
void __fastcall YS::method_blur_init(BD_VALUE_16 *args)
{
  YS::BLUR::init((YS::BLUR *const)(*args)[0]);
}
->
/----- (00000000004DCC04) ----------------------------------------------------
void __cdecl YS::BLUR::Init()
{
  dword_2AB3654 = 0;
  dword_2AB3658 = 112;
  dword_2AB365C = 1;
  dword_2AB3660 = 1;
  dword_2AB3668 = 1;
  dword_2AB3664 = 0;
  YS::BLUR::Blur = 0;
  dk::Blur::setBlurFlag(0);
  FIELD::CreateTask(1, 42000, (TASK_FUNC)&YS::BLUR::Exec);
}
// 79C350: using guessed type __int64 (__fastcall *__ptr32 YS::BLUR::Exec)(YS::BLUR *__hidden this, TASK *);
// 2AB3650: using guessed type int YS::BLUR::Blur;
// 2AB3654: using guessed type int dword_2AB3654;
// 2AB3658: using guessed type int dword_2AB3658;
// 2AB365C: using guessed type int dword_2AB365C;
// 2AB3660: using guessed type int dword_2AB3660;
// 2AB3664: using guessed type int dword_2AB3664;
// 2AB3668: using guessed type int dword_2AB3668;


---
---
---
appears in:

---
---
---
example usage from NA

