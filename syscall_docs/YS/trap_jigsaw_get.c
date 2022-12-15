---
---
---
name: trap_jigsaw_get
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
syscall 1, 364 ; trap_jigsaw_get (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::JIGSAW::get(const YS::JIGSAW *const this)
/----- (000000000050B97C) ----------------------------------------------------
void __fastcall YS::trap_jigsaw_get(BD_VALUE_21 *args)
{
  YS::JIGSAW::Get(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000439E3C) ----------------------------------------------------
void __fastcall YS::JIGSAW::get(const YS::JIGSAW *const this)
{
  YS::JIGSAW::Get(this->Picture, this->Piece);
}


---
---
---
appears in:

---
---
---
example usage from NA

