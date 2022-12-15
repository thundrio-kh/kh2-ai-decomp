---
---
---
name: trap_camera_eye
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
syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Camera::getPosition(const kn::Camera *const this, kn::FVector *pos)
/----- (000000000050A13C) ----------------------------------------------------
void __fastcall YS::trap_camera_eye(BD_VALUE_21 *args)
{
  const kn::Camera *v2; // r3

  v2 = kn::getCamera(1);
  kn::Camera::getPosition(v2, (kn::FVector *)&ResultVector);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
->
/----- (00000000000D9C38) ----------------------------------------------------
void __fastcall kn::Camera::getPosition(const kn::Camera *const this, kn::FVector *pos)
{
  kn::FVector::operator=(pos, (const kn::FVector *)(unsigned int)((_DWORD)this + 80));
}


---
---
---
appears in:

---
---
---
example usage from NA

