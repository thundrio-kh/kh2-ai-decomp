---
---
---
name: trap_lockon_show
---
---
---
category: visual
---
---
---
documentation level: untested
---
---
---
syscall 6, 17 ; trap_lockon_show (0 in, 0 out)
---
---
---
description: Show the lockon reticle
---
---
---
decompiled code:
void __cdecl dk::LockOn::show()
/----- (00000000006261BC) ----------------------------------------------------
void __fastcall Ts::trap_lockon_show(BD_VALUE_25 *args)
{
  dk::LockOn::show();
}
->
/----- (000000000005EF0C) ----------------------------------------------------
void __cdecl dk::LockOn::show()
{
  dk::Obj2D::showGroup(17);
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\sparrow\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L3641:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3420
 syscall 6, 17 ; trap_lockon_show (0 in, 0 out)
 ret 
