/----- (0000000000617618) ----------------------------------------------------
void __fastcall ryj::trap_camera_apply_inverse_pos(BD_VALUE_23 *args)
{
  double v12; // fp2
  double v13; // fp3
  kn::FVector v14; // [sp+70h] [-80h] BYREF
  Axa::FVECTOR4 v15; // [sp+80h] [-70h] BYREF
  Axa::FVECTOR4 v16; // [sp+90h] [-60h] BYREF
  Axa::FMATRIX44 v17; // [sp+A0h] [-50h] BYREF

  _R4 = &unk_2AA0000;
  _R5 = -1072;
  _R6 = 32;
  _R7 = (unsigned int)&unk_2AA0000 - 1072;
  _R3 = 16;
  __asm { lvx       v2, r5, r4 }
  LODWORD(_R4) = 48;
  _R8 = 160;
  __asm { lvx       v3, r6, r7 }
  _R5 = 176;
  _R6 = 192;
  __asm { lvx       v4, r3, r7 }
  _R9 = 208;
  __asm
  {
    lvx       v5, r4, r7
    stvx      v2, r8, r1
    stvx      v4, r5, r1
    stvx      v3, r6, r1
    stvx      v5, r9, r1
  }
  v12 = *(float *)(*(unsigned int *)args + 4LL);
  v13 = *(float *)(*(unsigned int *)args + 8LL);
  v15.x = *(float *)(*args)[0];
  v15.y = v12;
  v15.z = v13;
  v15.w = 1.0;
  Axa::FMATRIX44::operator*(&v16, &v17, &v15);
  v14.x = v16.x;
  v14.y = v16.y;
  v14.z = v16.z;
  v14.w = v16.w;
  kn::FVector::operator=((kn::FVector *const)&ryj::ResultVector, &v14);
  *(_DWORD *)args = (unsigned int)&ryj::ResultVector;
}
// 3EAC880: using guessed type int ryj::ResultVector;

//BASIC