---
---
---
name: trap_attack_set_line
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
push unk3 ; (unknown) 
syscall 2, 19 ; trap_attack_set_line (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_line(YS::ATTACK_MAGIC_3 *const this, const kn::FVector *p1, const kn::FVector *p2)
/----- (00000000004F4E90) ----------------------------------------------------
void __fastcall YS::trap_attack_set_line(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC::set_line(
    (YS::ATTACK_MAGIC_3 *const)(*args)[0],
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    (const kn::FVector *)*(unsigned int *)&(*args)[8]);
}
->
/----- (000000000050CCA4) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_line(YS::ATTACK_MAGIC_3 *const this, const kn::FVector *p1, const kn::FVector *p2)
{
  int v3; // r31

  v3 = (int)this;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 224), p1);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v3 + 240), p2);
  *(_DWORD *)(unsigned int)(v3 + 4) |= 0x20u;
}


---
---
---
appears in:

---
---
---
example usage from NA

