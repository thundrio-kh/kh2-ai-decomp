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