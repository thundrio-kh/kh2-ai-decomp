---
---
---
name: trap_bg_cross_pos
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
push unk4 ; (unknown) 
syscall 1, 135 ; trap_bg_cross_pos (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __fastcall YS::BG::GetCrossPos(const kn::FVector *from, const kn::FVector *to, kn::FVector *cross, int type)
/----- (0000000000503310) ----------------------------------------------------
void __fastcall YS::trap_bg_cross_pos(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::BG::GetCrossPos(
                      (const kn::FVector *)(*args)[0],
                      (const kn::FVector *)*(unsigned int *)&(*args)[4],
                      (kn::FVector *)*(unsigned int *)&(*args)[8],
                      *(_DWORD *)&(*args)[12]);
}
->
/----- (000000000040D720) ----------------------------------------------------
int __fastcall YS::BG::GetCrossPos(const kn::FVector *from, const kn::FVector *to, kn::FVector *cross, int type)
{
  kn::FVector v6[2]; // [sp+70h] [-30h] BYREF

  v6[0].z = 0.0;
  v6[0].y = 0.0;
  v6[0].x = 0.0;
  v6[0].w = 1.0;
  if ( YS::BGHIT::check_line((YS::BGHIT_0 *const)v6, from, to, type) )
    kn::FVector::operator=(cross, v6);
  return LODWORD(v6[1].y);
}


---
---
---
appears in:

---
---
---
example usage from NA

