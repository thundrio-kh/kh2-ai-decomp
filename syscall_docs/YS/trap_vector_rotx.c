---
---
---
name: trap_vector_rotx
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
push vec ; (kn::FVector *) (A vector)
push rad ; (float) (Amount to rotate)
syscall 0, 68 ; trap_vector_rotx (2 in, 1 out)
pop res ; (kn::FVector *) 
---
---
---
description: Rotates a vector along the X axis
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorRotX(const kn::FVector *v, const Axa::FVECTOR4 *a2, double rad)
/----- (00000000004B73BC) ----------------------------------------------------
void __fastcall YS::trap_vector_rotx(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorRotX(&v2, (const Axa::FVECTOR4 *)(*args)[0], *(float *)&(*args)[4]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (00000000004C1824) ----------------------------------------------------
void __fastcall YS::MATH::VectorRotX(const kn::FVector *v, const Axa::FVECTOR4 *a2, double rad)
{
  double v6; // fp1
  const kn::FMatrix *v7; // r3
  double v8; // fp2
  double v9; // fp3
  double v10; // fp4
  Axa::FVECTOR4 v11; // [sp+70h] [-70h] BYREF
  Axa::FMATRIX44 v12; // [sp+80h] [-60h] BYREF

  Axa::FMATRIX44::unit(&v12);
  Axa::FMATRIX44::unit(&v12);
  v6 = YS::MATH::FixRadian(rad);
  v7 = kn::FMatrix::rotateX((kn::FMatrix *const)&v12, v6);
  kn::FMatrix::operator=((kn::FMatrix *const)&v12, v7);
  Axa::FMATRIX44::operator*(&v11, &v12, a2);
  v8 = v11.y;
  v9 = v11.z;
  v10 = v11.w;
  v->x = v11.x;
  v->y = v8;
  v->z = v9;
  v->w = v10;
}


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\G_EX904\g_ex.bdscript ()
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
---
---
---
example usage from limit\trinity\limi.bdscript
L7618:
 pushFromFSp 36
 pushImm 0
 sub 
 ipos 
 jz L7792
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 1
 pushImmf 1
 gosub 12, L435
 pushFromPSp 16
 pushImmf -0.261799
 pushImmf 0.349066
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 syscall 0, 68 ; trap_vector_rotx (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 12
 pushImmf -0.872665
 pushImmf 0.872665
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSpVal 0
 gosub 12, L397
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 20
 addf 
 memcpy 0
 pushFromPSpVal 0
 gosub 12, L7793
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 191 ; trap_obj_lockon_target (1 in, 1 out)
 pushFromFSp 0
 pushImm 32
 add 
 pushFromPSp 16
 syscall 7, 29 ; trap_trinity_shot_start (4 in, 1 out)
 popToSp 32
 pushFromFSp 32
 pushImm 44
 add 
 pushImmf 60
 memcpy 0
 pushFromFSp 32
 pushImm 40
 add 
 pushImmf 14
 memcpy 0
 pushFromFSp 36
 pushImm 1
 sub 
 popToSp 36
 jmp L7618
