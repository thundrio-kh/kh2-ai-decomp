---
---
---
name: trap_obj_search_by_camera
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push data ; (memory) (variable/stack location where the object will be stored)
push offset ; (kn::FVector *) (A position vector?)
syscall 1, 307 ; trap_obj_search_by_camera (2 in, 0 out)
---
---
---
description: Looks up an object by ID and then returns the object that is closest to the camera? This is unused and might not actually work
---
---
---
decompiled code:
YS::OBJ_125 *__fastcall YS::OBJ::SearchByCamera(OBJENTRY_ID entry_id, const kn::FVector *offset, bool is_debug_draw)
/----- (000000000050210C) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_camera(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchByCamera(
                                        *(_DWORD *)&(*args)[4],
                                        (const kn::FVector *)*(unsigned int *)&(*args)[4],
                                        0);
}
->
/----- (0000000000460838) ----------------------------------------------------
YS::OBJ_125 *__fastcall YS::OBJ::SearchByCamera(OBJENTRY_ID entry_id, const kn::FVector *offset, bool is_debug_draw)
{
  BOOL v5; // r30
  YS::OBJ_86 *v6; // r29
  double v8; // fp30
  unsigned int v9; // r3
  YS::OBJ_132 *v18; // r21
  YS::OBJ_132 *v19; // r3
  BOOL v20; // r3
  unsigned int v21; // r5
  Axa::FVECTOR4 *v22; // r3
  double v23; // fp1
  YS::OBJ_132 *v24; // r5
  Axa::FVECTOR4 v26; // [sp+70h] [-180h] BYREF
  Axa::FVECTOR4 v27; // [sp+80h] [-170h] BYREF
  Axa::FVECTOR4 v28; // [sp+90h] [-160h] BYREF
  Axa::FVECTOR4 v29; // [sp+A0h] [-150h] BYREF
  kn::FMatrix v30; // [sp+B0h] [-140h] BYREF
  kn::FMatrix v31; // [sp+F0h] [-100h] BYREF
  Axa::FMATRIX44 v32; // [sp+130h] [-C0h] BYREF

  v5 = is_debug_draw;
  if ( !LS_254_LV_45 )
  {
    LS_254_draw_scale.x = 200.0;
    LS_254_LV_45 = 1;
    LS_254_draw_scale.y = 200.0;
    LS_254_draw_scale.z = 200.0;
    LS_254_draw_scale.w = 0.0;
  }
  v6 = 0LL;
  _R28 = 0;
  v8 = 0.0;
  v9 = (unsigned int)kn::getCamera(1);
  if ( v9 )
    _R28 = v9 + 16;
  _R3 = 16;
  __asm { lvx       v2, 0, r28 }
  _R5 = 32;
  _R7 = 48;
  _R4 = 176;
  _R6 = 192;
  __asm { lvx       v3, r3, r28 }
  _R8 = 208;
  __asm { lvx       v4, r5, r28 }
  _R5 = 224;
  __asm
  {
    lvx       v5, r7, r28
    stvx      v2, r4, r1
    stvx      v3, r6, r1
    stvx      v4, r8, r1
    stvx      v5, r5, r1
  }
  Axa::FMATRIX44::operator!(&v32, &v30);
  v31.v0.x = v32.v0.x;
  v31.v0.y = v32.v0.y;
  v31.v0.z = v32.v0.z;
  v31.v0.w = v32.v0.w;
  v31.v1.x = v32.v1.x;
  v31.v1.y = v32.v1.y;
  v31.v1.z = v32.v1.z;
  v31.v1.w = v32.v1.w;
  v31.v2.x = v32.v2.x;
  v31.v2.y = v32.v2.y;
  v31.v2.z = v32.v2.z;
  v31.v2.w = v32.v2.w;
  v31.v3.x = v32.v3.x;
  v31.v3.y = v32.v3.y;
  v31.v3.z = v32.v3.z;
  v31.v3.w = v32.v3.w;
  kn::FMatrix::operator=(&v30, &v31);
  Axa::FMATRIX44::operator*(&v27, &v30, offset);
  v26.x = v27.x;
  v26.y = v27.y;
  v26.z = v27.z;
  v26.w = v27.w;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = YS::OBJ::Each(v18);
    v18 = v19;
    if ( !(_DWORD)v19 )
      break;
    if ( *(_DWORD *)*(unsigned int *)&(*v19)[8] == entry_id && (*(_DWORD *)&(*v19)[268] & 0x2000) == 0 )
    {
      v20 = YS::OBJ::is_attach(v19);
      v21 = (_DWORD)v18 + 1344;
      if ( v20 )
        v21 = (_DWORD)v18 + 112;
      v29.x = *(float *)v21;
      v29.y = *(float *)(v21 + 4LL);
      v29.z = *(float *)(v21 + 8LL);
      v29.w = *(float *)(v21 + 0xCLL);
      v22 = Axa::FVECTOR4::operator-=(&v29, &v26);
      v28.x = v22->x;
      v28.y = v22->y;
      v28.z = v22->z;
      v28.w = v22->w;
      v23 = Axa::FVECTOR4::normalize(&v28);
      if ( (_DWORD)v6 && v23 >= v8 )
      {
        v24 = v18;
      }
      else
      {
        v24 = v6;
        v8 = v23;
        v6 = v18;
      }
      if ( (_DWORD)v24 && (*(_DWORD *)&(*v24)[268] & 0x1000) != 0 )
        *(_DWORD *)(unsigned int)((_DWORD)v24 + 268) |= 0x2000u;
      if ( v5 )
        YS::OBJ::draw_sphere(v18, &LS_254_draw_scale, 0x80008000, 0.0);
    }
  }
  if ( (_DWORD)v6 )
    *(_DWORD *)(unsigned int)((_DWORD)v6 + 268) |= 0x1000u;
  if ( v5 && (_DWORD)v6 != 0 )
    YS::OBJ::draw_sphere(v6, &LS_254_draw_scale, 0x80000080, 0.0);
  return v6;
}
// 460A98: conditional instruction was optimized away because of 'r3.4!=0'
// 2A9F458: using guessed type char LS_254_LV_45;


---
---
---
appears in:

---
---
---
example usage from NA

