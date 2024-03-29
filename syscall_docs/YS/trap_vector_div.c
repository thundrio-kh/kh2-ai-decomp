---
---
---
name: trap_vector_div
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
syscall 0, 37 ; trap_vector_div (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: Divides the values of two vectors
---
---
---
decompiled code:
void __fastcall YS::trap_vector_div(BD_VALUE_16 *args)
/----- (00000000004B71B0) ----------------------------------------------------
void __fastcall YS::trap_vector_div(BD_VALUE_16 *args)
{
  FLOAT *v2; // r5
  kn::FVector v3; // [sp+70h] [-30h] BYREF
  FLOAT v4; // [sp+80h] [-20h] BYREF
  FLOAT v5; // [sp+84h] [-1Ch]
  FLOAT v6; // [sp+88h] [-18h]
  FLOAT v7; // [sp+8Ch] [-14h]

  v2 = (FLOAT *)(*args)[0];
  if ( !LS_68_LV_13 )
  {
    LS_68_LV_13 = 1;
    LS_68_result.z = 0.0;
    LS_68_result.y = 0.0;
    LS_68_result.x = 0.0;
    LS_68_result.w = 1.0;
  }
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  Axa::FVECTOR4::operator*=((__int64)&v4);
  v3.x = v4;
  v3.y = v5;
  v3.z = v6;
  v3.w = v7;
  kn::FVector::operator=(&LS_68_result, &v3);
  *(_DWORD *)args = (unsigned int)&LS_68_result;
}
// 2AB0840: using guessed type char LS_68_LV_13;
->
/----- (00000000004B71B0) ----------------------------------------------------
void __fastcall YS::trap_vector_div(BD_VALUE_16 *args)
{
  FLOAT *v2; // r5
  kn::FVector v3; // [sp+70h] [-30h] BYREF
  FLOAT v4; // [sp+80h] [-20h] BYREF
  FLOAT v5; // [sp+84h] [-1Ch]
  FLOAT v6; // [sp+88h] [-18h]
  FLOAT v7; // [sp+8Ch] [-14h]

  v2 = (FLOAT *)(*args)[0];
  if ( !LS_68_LV_13 )
  {
    LS_68_LV_13 = 1;
    LS_68_result.z = 0.0;
    LS_68_result.y = 0.0;
    LS_68_result.x = 0.0;
    LS_68_result.w = 1.0;
  }
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  Axa::FVECTOR4::operator*=((__int64)&v4);
  v3.x = v4;
  v3.y = v5;
  v3.z = v6;
  v3.w = v7;
  kn::FVector::operator=(&LS_68_result, &v3);
  *(_DWORD *)args = (unsigned int)&LS_68_result;
}
// 2AB0840: using guessed type char LS_68_LV_13;


---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L7250:
 pushFromFSp 0
 gosub 48, L7443
 eqz 
 jz L7332
 pushFromPSp 16
 pushFromFSp 12
 pushFromPSpVal 32
 pushFromPSpVal 32
 fetchValue 12
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 pushFromFSp 8
 pushFromPSp 160
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 pushFromFSpVal 12
 gosub 56, L7453
 pushFromPSp 16
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 gosub 48, L7747
 memcpyToSp 16, 176
 pushFromPSp 176
 pushFromFSp 12
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 syscall 0, 37 ; trap_vector_div (2 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 memcpyToSp 16, 160
 pushFromFSpVal 12
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSpVal 12
 jmp L7348
