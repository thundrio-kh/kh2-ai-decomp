---
---
---
name: trap_bg_ground_pos
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
syscall 1, 141 ; trap_bg_ground_pos (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::BG::GetGroundPos(const kn::FVector *pos, kn::FVector *result, double height, double range, int type)
/----- (00000000005034D0) ----------------------------------------------------
void __fastcall YS::trap_bg_ground_pos(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::BG::GetGroundPos(
                      (const kn::FVector *)(*args)[0],
                      (kn::FVector *)*(unsigned int *)&(*args)[4],
                      *(float *)&(*args)[8],
                      0.0,
                      4);
}
->
/----- (000000000040D7E8) ----------------------------------------------------
__int64 __fastcall YS::BG::GetGroundPos(const kn::FVector *pos, kn::FVector *result, double height, double range, int type)
{
  __int64 v10; // r3
  kn::FVector v11; // [sp+70h] [-80h] BYREF
  kn::FVector v12; // [sp+80h] [-70h] BYREF
  kn::FVector v13[2]; // [sp+90h] [-60h] BYREF

  v11.z = 0.0;
  v11.y = 0.0;
  v11.x = 0.0;
  v11.w = 1.0;
  v12.z = 0.0;
  v12.y = 0.0;
  v12.x = 0.0;
  v12.w = 1.0;
  v13[0].z = 0.0;
  v13[0].y = 0.0;
  v13[0].x = 0.0;
  v13[0].w = 1.0;
  kn::FVector::operator=(&v11, pos);
  v11.y = v11.y - (float)range;
  kn::FVector::operator=(&v12, pos);
  v12.y = (float)((float)height + (float)range) + v12.y;
  if ( YS::BGHIT::check_line((YS::BGHIT_0 *const)v13, &v11, &v12, type) )
  {
    kn::FVector::operator=(result, v13);
    v10 = 1LL;
  }
  else
  {
    kn::FVector::operator=(result, pos);
    v10 = 0LL;
  }
  return v10;
}


---
---
---
appears in:

---
---
---
example usage from NA

