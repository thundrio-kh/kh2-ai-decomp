---
---
---
name: trap_attack_set_pos
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
push unk2 ; (unknown) 
syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_pos(YS::ATTACK_MAGIC_3 *const this, const kn::FVector *pos)
/----- (00000000004F4550) ----------------------------------------------------
void __fastcall YS::trap_attack_set_pos(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC::set_pos((YS::ATTACK_MAGIC_3 *const)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
->
/----- (000000000050C718) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_pos(YS::ATTACK_MAGIC_3 *const this, const kn::FVector *pos)
{
  int v2; // r30
  Axa::FVECTOR4 *v4; // r3
  kn::FVector v5; // [sp+70h] [-50h] BYREF
  kn::FVector v6; // [sp+80h] [-40h] BYREF
  Axa::FVECTOR4 v7; // [sp+90h] [-30h] BYREF

  v2 = (int)this;
  v5.z = 0.0;
  v5.y = 0.0;
  v5.x = 0.0;
  v5.w = 1.0;
  if ( (*(_DWORD *)&(*this)[4] & 1) != 0 )
  {
    kn::FVector::operator=(
      (kn::FVector *const)(unsigned int)((_DWORD)this + 240),
      (const kn::FVector *)(unsigned int)((_DWORD)this + 224));
    v7.x = pos->x;
    v7.y = pos->y;
    v7.z = pos->z;
    v7.w = pos->w;
    v4 = Axa::FVECTOR4::operator-=(&v7, (const Axa::FVECTOR4 *)(unsigned int)(v2 + 224));
    v6.x = v4->x;
    v6.y = v4->y;
    v6.z = v4->z;
    v6.w = v4->w;
    kn::FVector::operator=(&v5, &v6);
    if ( Axa::FVECTOR4::getLength(&v5) <= (double)(float)(dk::Vsync::s_frameTime * (float)2.0) )
      *(_DWORD *)(unsigned int)(v2 + 4) &= 0xFFFFFFFB;
    else
      *(_DWORD *)(unsigned int)(v2 + 4) |= 4u;
  }
  else
  {
    kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 240), pos);
  }
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v2 + 224), pos);
  *(_DWORD *)(unsigned int)(v2 + 4) = (*(_DWORD *)(unsigned int)(v2 + 4) | 1) & 0xFFFFFFDF;
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;


---
---
---
appears in:

---
---
---
example usage from NA

