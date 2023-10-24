---
---
---
name: trap_bg_is_floor
---
---
---
category: camera
---
---
---
documentation level: untested
---
---
---
push camera ; (int)  (Value designating the camera)
syscall 1, 136 ; trap_bg_is_floor (1 in, 1 out)
pop is_floor ; (bool) 
---
---
---
description: Returns if the background the camera is looking at is the floor
---
---
---
decompiled code:
__int64 __fastcall dk::Octree::getAttrKind(const u_short polyid, bool camera)
/----- (0000000000503358) ----------------------------------------------------
void __fastcall YS::trap_bg_is_floor(BD_VALUE_21 *args)
{
  int v2; // r30

  v2 = 0;
  if ( *(int *)args >= 0 && (unsigned int)dk::Octree::getAttrKind(*(_DWORD *)args, 0) == 1 )
    v2 = 1;
  *(_DWORD *)args = v2;
}
->
/----- (000000000006E590) ----------------------------------------------------
__int64 __fastcall dk::Octree::getAttrKind(const u_short polyid, bool camera)
{
  return dk::Octree::getAttr(polyid, camera)->m_attr.attrInt & 0xFLL;
}


---
---
---
appears in:

---
---
---
example usage from NA

