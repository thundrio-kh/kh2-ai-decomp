---
---
---
name: trap_sysobj_moveto
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
syscall 1, 2 ; trap_sysobj_moveto (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::OBJ::moveto(YS::OBJ_133 *const this, const kn::FVector *pos, double speed)
/----- (00000000004F724C) ----------------------------------------------------
void __fastcall YS::trap_sysobj_moveto(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::OBJ::moveto(
                            (YS::OBJ_133 *const)(*args)[0],
                            (const kn::FVector *)*(unsigned int *)&(*args)[4],
                            *(float *)&(*args)[8]);
}
->
/----- (0000000000470B80) ----------------------------------------------------
float __fastcall YS::OBJ::moveto(YS::OBJ_133 *const this, const kn::FVector *pos, double speed)
{
  Axa::FVECTOR4 *v5; // r3
  double v6; // fp30
  Axa::FVECTOR4 v9; // [sp+70h] [-40h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-30h] BYREF

  v10.x = pos->x;
  v10.y = pos->y;
  v10.z = pos->z;
  v10.w = pos->w;
  v5 = Axa::FVECTOR4::operator-=(&v10, (const Axa::FVECTOR4 *)(unsigned int)((_DWORD)this + 1344));
  v9.x = v5->x;
  v9.y = v5->y;
  v9.z = v5->z;
  v9.w = v5->w;
  v9.y = 0.0;
  v6 = Axa::FVECTOR4::normalize(&v9);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 16), (const kn::FVector *)&v9);
  *(float *)&(*this)[28] = speed;
  return v6;
}


---
---
---
appears in:

---
---
---
example usage from NA

