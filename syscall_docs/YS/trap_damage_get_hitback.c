---
---
---
name: trap_damage_get_hitback
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
push unk1 ; (unknown)  (pushFromFSp: 4)
syscall 2, 86 ; trap_damage_get_hitback (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::DAMAGE::get_hitback(YS::DAMAGE_5 *const this)
/----- (00000000004F41F4) ----------------------------------------------------
void __fastcall YS::trap_damage_get_hitback(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = YS::DAMAGE::get_hitback((YS::DAMAGE_5 *const)(*args)[0]);
}
->
/----- (00000000004223F0) ----------------------------------------------------
float __fastcall YS::DAMAGE::get_hitback(YS::DAMAGE_5 *const this)
{
  __int64 v2; // r3
  double v3; // fp31
  int v4; // r3
  const Axa::FVECTOR4 *v5; // r3
  Axa::FVECTOR4 *v6; // r3
  __int64 v7; // r4
  __int64 v8; // fp1
  __int64 v9; // fp2
  double v10; // fp31
  int v11; // r4
  kn::FVector v14; // [sp+70h] [-60h] BYREF
  kn::FVector v15; // [sp+80h] [-50h] BYREF
  float v16[4]; // [sp+90h] [-40h] BYREF
  Axa::FVECTOR4 v17; // [sp+A0h] [-30h] BYREF

  v2 = (unsigned __int8)(*this)[39];
  v3 = *(float *)((unsigned int)YS::PREF::System + 0x30LL);
  v14.z = 0.0;
  v14.y = 0.0;
  v14.x = 0.0;
  v14.w = 1.0;
  v4 = YS::DAMAGE::GetReactionType(v2);
  if ( v4 > 3 )
  {
    if ( v4 <= 4 )
    {
      YS::DAMAGE::get_blow(this, &v14.y, &v14.z);
      v14.x = 0.0;
      v3 = (float)(Axa::FVECTOR4::getLength(&v14) * *(float *)((unsigned int)YS::PREF::System + 0x2CLL));
      goto _noname_;
    }
    if ( v4 <= 5 )
    {
      ((void (__fastcall *)(float *))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[28]
                                                                      + 8LL))(v16);
      v5 = (const Axa::FVECTOR4 *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)&(*this)[20]);
      v17.x = v16[0];
      v17.y = v16[1];
      v17.z = v16[2];
      v17.w = v16[3];
      v6 = Axa::FVECTOR4::operator-=(&v17, v5);
      v15.x = v6->x;
      v15.y = v6->y;
      v15.z = v6->z;
      v15.w = v6->w;
      kn::FVector::operator=(&v14, &v15);
      v7 = *(unsigned int *)&(*this)[32];
      v14.y = 0.0;
      v8 = *(__int16 *)(v7 + 12);
      v9 = *(__int16 *)(v7 + 14);
      Random *= 69069;
      v10 = (float)((float)((float)((float)(unsigned int)Random * (float)2.3283064e-10) * (float)((float)v9 - (float)v8))
                  + (float)v8);
      v3 = (float)((float)v10 - Axa::FVECTOR4::getLength(&v14));
      goto _noname_;
    }
  }
  else if ( v4 > 2 )
  {
    v3 = *(float *)((unsigned int)YS::PREF::System + 0x34LL);
  }
  if ( *(_DWORD *)&(*this)[32] )
  {
    v11 = *(unsigned __int16 *)(*(unsigned int *)&(*this)[32] + 0xCLL);
    if ( v11 != 0x7FFF )
      v3 = (float)(__int16)v11;
  }
_noname_:
  if ( !(((unsigned __int8)(*this)[38] > 0xDu) | (unsigned __int8)~((unsigned __int8)(*this)[38] > 0xBu)) )
    v3 = (float)((float)v3 * (float)0.5);
  return v3;
}
// 2AA1548: using guessed type int YS::PREF::System;
// 2BB1CA0: using guessed type int Random;


---
---
---
appears in:
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
---
---
---
example usage from obj\B_CA010\b_ca.bdscript
L1729:
 jz L1743
 pushFromFSp 0
 pushFromFSp 4
 pushFromFSp 4
 syscall 2, 86 ; trap_damage_get_hitback (1 in, 1 out)
 syscall 2, 3 ; trap_enemy_exec_damage_hitback (3 in, 0 out)
 jmp L1784
