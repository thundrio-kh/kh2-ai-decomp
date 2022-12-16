---
---
---
name: trap_camera_apply_pos
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
push unk1 ; (unknown)  (pushFromPSp: 16,32,48) (pushFromPSpVal: 112)
syscall 1, 252 ; trap_camera_apply_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000509E54) ----------------------------------------------------
void __fastcall YS::trap_camera_apply_pos(BD_VALUE_21 *args)
{
  double v13; // fp2
  double v14; // fp3
  kn::FVector v15; // [sp+70h] [-120h] BYREF
  Axa::FVECTOR4 v16; // [sp+80h] [-110h] BYREF
  Axa::FVECTOR4 v17; // [sp+90h] [-100h] BYREF
  kn::FMatrix v18; // [sp+A0h] [-F0h] BYREF
  kn::FMatrix v19; // [sp+E0h] [-B0h] BYREF
  Axa::FMATRIX44 v20; // [sp+120h] [-70h] BYREF

  _R4 = &unk_2AA0000;
  _R5 = -1072;
  _R6 = 32;
  _R7 = &YS::OBJ::LastCameraMatrix;
  _R9 = 16;
  _R3 = 48;
  _R8 = 160;
  __asm
  {
    lvx       v2, r5, r4
    lvx       v3, r6, r7
  }
  _R5 = 176;
  _R6 = 192;
  __asm { lvx       v4, r9, r7 }
  _R9 = 208;
  __asm
  {
    lvx       v5, r3, r7
    stvx      v2, r8, r1
    stvx      v4, r5, r1
    stvx      v3, r6, r1
    stvx      v5, r9, r1
  }
  Axa::FMATRIX44::operator!(&v20, &v18);
  v19.v0.x = v20.v0.x;
  v19.v0.y = v20.v0.y;
  v19.v0.z = v20.v0.z;
  v19.v0.w = v20.v0.w;
  v19.v1.x = v20.v1.x;
  v19.v1.y = v20.v1.y;
  v19.v1.z = v20.v1.z;
  v19.v1.w = v20.v1.w;
  v19.v2.x = v20.v2.x;
  v19.v2.y = v20.v2.y;
  v19.v2.z = v20.v2.z;
  v19.v2.w = v20.v2.w;
  v19.v3.x = v20.v3.x;
  v19.v3.y = v20.v3.y;
  v19.v3.z = v20.v3.z;
  v19.v3.w = v20.v3.w;
  kn::FMatrix::operator=(&v18, &v19);
  v13 = *(float *)(*(unsigned int *)args + 4LL);
  v14 = *(float *)(*(unsigned int *)args + 8LL);
  v16.x = *(float *)(*args)[0];
  v16.y = v13;
  v16.z = v14;
  v16.w = 1.0;
  Axa::FMATRIX44::operator*(&v17, &v18, &v16);
  v15.x = v17.x;
  v15.y = v17.y;
  v15.z = v17.z;
  v15.w = v17.w;
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v15);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;

//BASIC
---
---
---
appears in:
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL090_01\f_al.bdscript ((F) Falling pillar 1 (AL))
obj\F_AL090_02\f_al.bdscript ((F) Falling pillar 2 (AL))
obj\F_AL090_03\f_al.bdscript ((F) Falling pillar 3 (AL))
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
obj\M_EX620_AL\m_ex.bdscript ((M) Fortuneteller (AL))
obj\M_EX660_AL\m_ex.bdscript ((M) Rapid Thruster (AL))
---
---
---
example usage from obj\B_EX330\b_ex.bdscript
L5355:
 pushFromFSpVal 64
 eqz 
 jz L5496
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 1
 memcpy 0
 pushFromPSp 32
 syscall 8, 8 ; trap_camera_apply_inverse_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 8
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 pushImmf -800
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 8
 add 
 pushImmf 2000
 memcpy 0
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 1
 memcpy 0
 pushFromPSp 32
 syscall 1, 252 ; trap_camera_apply_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSpVal 0
 pushFromPSp 32
 pushFromFSp 4
 gosub 16, L5497
 drop 
 pushImmf 30
 gosub 16, L193
 jmp L5355
