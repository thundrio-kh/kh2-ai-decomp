---
---
---
name: trap_vector_inter
---
---
---
category: math
---
---
---
documentation level: untested
---
---
---
push vec1 ; (kn::FVector *)  (A vector)
push vec2 ; (kn::FVector *)  (A vector)
push r ; (float)  (A rotation value?)
syscall 0, 78 ; trap_vector_inter (3 in, 1 out)
pop result ;  (kn::FVector *)
---
---
---
description: Calculates the intersection point between two vectors
---
---
---
decompiled code:
void __fastcall Axa::InterVector(Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0, const Axa::FVECTOR4 *v2_0, double r)
/----- (00000000004B76CC) ----------------------------------------------------
void __fastcall YS::trap_vector_inter(BD_VALUE_16 *args)
{
  Axa::InterVector(
    (Axa::FVECTOR4 *)&YS::ResultVector,
    (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4],
    (const Axa::FVECTOR4 *)(*args)[0],
    *(float *)&(*args)[8]);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (000000000001BD70) ----------------------------------------------------
void __fastcall Axa::InterVector(Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0, const Axa::FVECTOR4 *v2_0, double r)
{
  float *v6; // r3
  double v7; // fp30
  double v8; // fp29
  double v9; // fp28
  double v10; // fp27
  FLOAT *v11; // r3
  double v12; // fp2
  double v13; // fp3
  double v14; // fp4
  Axa::FVECTOR4 *v15; // r3
  double v16; // fp2
  double v17; // fp3
  double v18; // fp4
  Axa::FVECTOR4 v19; // [sp+70h] [-80h] BYREF
  float v20[4]; // [sp+80h] [-70h] BYREF
  float v21[4]; // [sp+90h] [-60h] BYREF
  Axa::FVECTOR4 v22; // [sp+A0h] [-50h] BYREF

  v21[0] = v1_0->x;
  v21[1] = v1_0->y;
  v21[2] = v1_0->z;
  v21[3] = v1_0->w;
  v6 = (float *)Axa::FVECTOR4::operator*=((__int64)v21);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v10 = v6[3];
  v20[0] = v2_0->x;
  v20[1] = v2_0->y;
  v20[2] = v2_0->z;
  v20[3] = v2_0->w;
  v11 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v20);
  v12 = v11[1];
  v13 = v11[2];
  v14 = v11[3];
  v19.x = *v11;
  v19.y = v12;
  v19.z = v13;
  v19.w = v14;
  v22.x = v7;
  v22.y = v8;
  v22.z = v9;
  v22.w = v10;
  v15 = Axa::FVECTOR4::operator+=(&v22, &v19);
  v16 = v15->y;
  v17 = v15->z;
  v18 = v15->w;
  v0_0->x = v15->x;
  v0_0->y = v16;
  v0_0->z = v17;
  v0_0->w = v18;
}


---
---
---
appears in:
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\G_EX220\g_ex.bdscript ()
obj\G_EX220_G\g_ex.bdscript ()
obj\G_EX220_R\g_ex.bdscript ()
obj\G_EX240\g_ex.bdscript ()
obj\G_EX240_G\g_ex.bdscript ()
obj\G_EX240_R\g_ex.bdscript ()
obj\G_EX250_0\g_ex.bdscript ()
obj\G_EX250_0_G\g_ex.bdscript ()
obj\G_EX250_0_R\g_ex.bdscript ()
obj\G_EX250_1\g_ex.bdscript ()
obj\G_EX250_1_G\g_ex.bdscript ()
obj\G_EX250_1_R\g_ex.bdscript ()
obj\G_EX260\g_ex.bdscript ()
obj\G_EX260_G\g_ex.bdscript ()
obj\G_EX260_R\g_ex.bdscript ()
obj\G_EX270\g_ex.bdscript ()
obj\G_EX270_G\g_ex.bdscript ()
obj\G_EX270_R\g_ex.bdscript ()
obj\G_EX900_COMBAT\g_ex.bdscript ()
obj\G_EX900_COMBAT_HARD\g_ex.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\G_EX900_FLIGHT\g_ex.bdscript ()
obj\G_EX900_FLIGHT_HARD\g_ex.bdscript ()
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
---
---
---
example usage from obj\B_AL100_2ND\b_al.bdscript
L2480:
 dup 
 pushFromFSp 60
 sub 
 info 
 jnz L2640
 pushFromPSpVal 160
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 fetchValue 0
 jz L2630
 pushImm 0
 popToSp 64
 pushFromPSp 4
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 fetchValue 0
 jz L2628
 pushFromPSp 28
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 fetchValue 0
 popToSp 96
 pushFromFSp 96
 pushImmf 0.04
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 addf 
 popToSp 96
 pushFromPSp 28
 pushFromFSp 60
 pushImm 4
 mul 
 add 
 pushFromFSp 96
 memcpy 0
 pushFromPSpVal 64
 pushFromFSp 60
 pushImm 16
 mul 
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 80
 pushFromPSp 80
 gosub 28, L149
 memcpyToSp 16, 112
 pushFromPSp 112
 gosub 36, L667
 memcpyToSp 16, 128
 pushFromPSp 128
 pushFromFSp 96
 syscall 0, 78 ; trap_vector_inter (3 in, 1 out)
 memcpyToSp 16, 144
 pushFromPSp 144
 memcpyToSp 16, 80
 pushFromFSp 0
 pushFromFSp 60
 pushFromPSp 80
 gosub 28, L2232
 pushImmf 1
 pushFromFSp 96
 subf 
 infoezf 
 jz L2626
 pushFromFSp 0
 pushFromFSp 60
 gosub 28, L2657
 jmp L2626
