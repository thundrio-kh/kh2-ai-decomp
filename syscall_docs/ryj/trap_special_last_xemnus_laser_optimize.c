---
---
---
name: trap_special_last_xemnus_laser_optimize
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
syscall 8, 6 ; trap_special_last_xemnus_laser_optimize (0 in, 0 out)
---
---
---
description: Adds the dome effect (dark globe) during the final xemnas laser attack
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::Optimize()
/----- (00000000006175D0) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_optimize(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::Optimize();
}
->
/----- (0000000000619A3C) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::Optimize()
{
  dk::Map::setHideGroup(0);
  dk::Map::hideSky();
  dk::Glow::off();
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
L15024:
 pushFromFSp 0
 pushImm 226
 gosub 12, L13716
 eqz 
 jz L15062
 pushFromFSp 0
 pushImm 1
 syscall 1, 151 ; trap_obj_motion_check_trigger (2 in, 1 out)
 jz L15047
 syscall 8, 6 ; trap_special_last_xemnus_laser_optimize (0 in, 0 out)
 jmp L15047
