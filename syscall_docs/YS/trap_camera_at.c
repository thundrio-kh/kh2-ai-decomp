---
---
---
name: trap_camera_at
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
syscall 1, 306 ; trap_camera_at (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Camera::getReference(const kn::Camera *const this, kn::FVector *ref)
/----- (000000000050A190) ----------------------------------------------------
void __fastcall YS::trap_camera_at(BD_VALUE_21 *args)
{
  const kn::Camera *v2; // r3

  v2 = kn::getCamera(1);
  kn::Camera::getReference(v2, (kn::FVector *)&ResultVector);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
->
/----- (00000000000D9E54) ----------------------------------------------------
void __fastcall kn::Camera::getReference(const kn::Camera *const this, kn::FVector *ref)
{
  kn::FVector::operator=(ref, (const kn::FVector *)(unsigned int)((_DWORD)this + 96));
}


---
---
---
appears in:

---
---
---
example usage from NA

