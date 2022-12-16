---
---
---
name: trap_special_last_xemnus_laser_optimize_end
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
syscall 8, 7 ; trap_special_last_xemnus_laser_optimize_end (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::OptimizeEnd()
/----- (00000000006175F4) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_optimize_end(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::OptimizeEnd();
}
->
/----- (0000000000619A74) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::OptimizeEnd()
{
  dk::Map::setVisibleGroup(0);
  dk::Map::showSky();
  dk::Glow::on();
}


---
---
---
appears in:
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L15101:
 popToSp 0
 pushFromFSp 0
 gosub 4, L15124
 pushFromFSp 0
 gosub 4, L10262
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 syscall 8, 7 ; trap_special_last_xemnus_laser_optimize_end (0 in, 0 out)
 ret 
