---
---
---
name: trap_picture_set_pos
---
---
---
category: layout
---
---
---
documentation level: untested
---
---
---
push layout ; (dk::Layout *)  (A layout object)
push x ; (float)  (X coordinate)
push y ; (float)  (Y coordinate)
syscall 1, 315 ; trap_picture_set_pos (3 in, 0 out)
---
---
---
description: Set the position of a picture for a layout object
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
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L21874:
 popToSp 0
 pushFromFSpVal 212
 cfti 
 pushImmf 3
 divf 
 popToSp 4
 pushImmf 0
 pushImmf 2
 pushFromFSp 4
 gosub 8, L21962
 popToSp 12
 pushImmf 32
 pushImmf 40
 pushFromFSp 4
 gosub 8, L21962
 popToSp 8
 pushFromPSpVal 92
 pushFromFSp 12
 pushFromFSp 8
 gosub 8, L21053
 pushImmf 4
 pushImmf 12
 pushFromFSp 4
 gosub 8, L21962
 popToSp 12
 pushImmf 182
 pushImmf 104
 pushFromFSp 4
 gosub 8, L21962
 popToSp 8
 pushFromPSpVal 104
 pushFromFSp 12
 pushFromFSp 8
 gosub 8, L21053
 pushFromFSpVal 88
 pushFromPSpVal 92
 gosub 8, L21980
 pushFromPSpVal 104
 gosub 8, L21980
 syscall 1, 315 ; trap_picture_set_pos (3 in, 0 out)
 ret 
