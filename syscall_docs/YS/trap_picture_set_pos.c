---
---
---
name: trap_picture_set_pos
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
syscall 1, 315 ; trap_picture_set_pos (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Layout::setPos(dk::Layout *const this, double x, double y)
/----- (000000000050B8D0) ----------------------------------------------------
void __fastcall YS::trap_picture_set_pos(BD_VALUE_21 *args)
{
  dk::Layout::setPos((dk::Layout *const)(*args)[0], *(float *)&(*args)[4], *(float *)&(*args)[8]);
}
->
/----- (000000000005BB34) ----------------------------------------------------
void __fastcall dk::Layout::setPos(dk::Layout *const this, double x, double y)
{
  YI::LAYOUT_2 *v5; // r3

  v5 = Tz::Layout::getLayout((Tz::Layout_36 *const)this);
  YI::LAYOUT::SetOffset(v5, (int)x, (int)y);
}


---
---
---
appears in:

---
---
---
example usage from NA

