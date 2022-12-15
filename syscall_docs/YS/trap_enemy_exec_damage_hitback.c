---
---
---
name: trap_enemy_exec_damage_hitback
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
syscall 2, 3 ; trap_enemy_exec_damage_hitback (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::exec_damage_hitback(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, double power)
/----- (00000000004F3584) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_damage_hitback(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::exec_damage_hitback(
    (YS::BTLOBJ *const)v4,
    (YS::DAMAGE_4 *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4F35A8: variable 'back_chain' is possibly undefined
->
/----- (0000000000412D40) ----------------------------------------------------
void __fastcall YS::BTLOBJ::exec_damage_hitback(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, double power)
{
  FLOAT *v6; // r3
  double v7; // fp2
  double v8; // fp3
  double v9; // fp4
  kn::FVector v10; // [sp+70h] [-40h] BYREF
  float v11[4]; // [sp+80h] [-30h] BYREF

  if ( (unsigned int)YS::OBJ::can_hitback((YS::OBJ_128 *const)this) )
  {
    if ( power >= 0.0 )
    {
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), (const kn::FVector *)damage);
    }
    else
    {
      power = -power;
      v11[0] = *(float *)&(*damage)[0];
      v11[1] = *(float *)&(*damage)[4];
      v11[2] = *(float *)&(*damage)[8];
      v11[3] = *(float *)&(*damage)[12];
      v6 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v11);
      v7 = v6[1];
      v8 = v6[2];
      v9 = v6[3];
      v10.x = *v6;
      v10.y = v7;
      v10.z = v8;
      v10.w = v9;
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 2768), &v10);
    }
    if ( *(_DWORD *)&this->baseclass_0[1164] )
      power = (float)((float)power + *(float *)(*(unsigned int *)&this->baseclass_0[1164] + 0x1C8LL));
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)((_DWORD)this + 2768));
    this->HitBack.w = (float)power * (float)0.1;
  }
  *(_DWORD *)(unsigned int)((_DWORD)damage + 24) |= 1u;
}


---
---
---
appears in:

---
---
---
example usage from NA

