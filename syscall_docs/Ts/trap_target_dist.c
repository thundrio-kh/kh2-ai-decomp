---
---
---
name: trap_target_dist
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
syscall 6, 9 ; trap_target_dist (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::TARGET::get_dist(YS::TARGET_108 *const this, RCFVector pos)
/----- (0000000000625CC0) ----------------------------------------------------
void __fastcall Ts::trap_target_dist(BD_VALUE_25 *args)
{
  *(float *)&(*args)[0] = YS::TARGET::get_dist(
                            (YS::TARGET_108 *const)(*args)[0],
                            (RCFVector)*(unsigned int *)&(*args)[4]);
}
->
/----- (00000000004AA1E8) ----------------------------------------------------
float __fastcall YS::TARGET::get_dist(YS::TARGET_108 *const this, RCFVector pos)
{
  int v5[8]; // [sp+70h] [-30h] BYREF

  v5[3] = 0;
  v5[6] = 0;
  v5[5] = 0;
  v5[4] = 0;
  v5[7] = 1065353216;
  YS::TARGET::make_collision(this, (YS::COLLISION_52 *)v5);
  return YS::COLLISION::get_dist((YS::COLLISION_33 *const)v5, pos);
}


---
---
---
appears in:

---
---
---
example usage from NA

