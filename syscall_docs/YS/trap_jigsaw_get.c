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
push unk1 ; (unknown)  (pushImm: 0)
push unk2 ; (unknown)  (pushImm: 4)
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
ard\tt28\jigs.bdscript
---
---
---
example usage from ard\tt28\jigs.bdscript
TR2:
 pushImm 0
 pushImm 4
 syscall 1, 364 ; trap_jigsaw_get (2 in, 0 out)
 ret 
