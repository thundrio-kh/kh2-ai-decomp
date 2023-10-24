---
---
---
name: trap_lockon_hide
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
syscall 6, 18 ; trap_lockon_hide (0 in, 0 out)
---
---
---
description: Hide the lockon reticle
---
---
---
decompiled code:
void __cdecl dk::LockOn::hide()
/----- (00000000006261E0) ----------------------------------------------------
void __fastcall Ts::trap_lockon_hide(BD_VALUE_25 *args)
{
  dk::LockOn::hide();
}
->
/----- (000000000005F41C) ----------------------------------------------------
void __cdecl dk::LockOn::hide()
{
  dk::Obj2D::hideGroup(17);
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
L3650:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3241
 syscall 6, 18 ; trap_lockon_hide (0 in, 0 out)
 ret 
