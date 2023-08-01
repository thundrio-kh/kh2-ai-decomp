---
---
---
name: trap_obj_get_move_to_space_pos
---
---
---
category: movement
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_133 *)  (An object)
push radius ; (float)  (Radius to look for the move)
push is_air ; (bool)  (should the position be in the air)
syscall 1, 367 ; trap_obj_get_move_to_space_pos (3 in, 1 out)
pop pos ; (kn::FVector) 
---
---
---
description: Return a position within a space that the object can move to
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_move_to_space_pos(YS::OBJ_133 *const this, kn::FVector *pos, double radius, bool is_air)
/----- (00000000004F90CC) ----------------------------------------------------
void __fastcall YS::trap_obj_get_move_to_space_pos(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  YS::OBJ::get_move_to_space_pos(
    (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
    (kn::FVector *)&ResultVector,
    *(float *)&(*args)[4],
    (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 4F90F0: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;
->
/----- (0000000000471C98) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_move_to_space_pos(YS::OBJ_133 *const this, kn::FVector *pos, double radius, bool is_air)
{
  BOOL v14; // r30
  const kn::FVector *v26; // r3
  unsigned int v27; // r29
  __int64 v28; // r29
  kn::FVector v32[9]; // [sp+70h] [-D0h] BYREF

  _R7 = 16;
  _R5 = (_DWORD)this + 1424;
  _R10 = 32;
  _R8 = 48;
  _R9 = 112;
  _R11 = 128;
  __asm { lvx       v2, 0, r5 }
  _R29 = 144;
  __asm
  {
    lvx       v3, r7, r5
    lvx       v4, r10, r5
  }
  _R4 = 160;
  __asm { lvx       v5, r8, r5 }
  v14 = is_air;
  __asm { stvx      v2, r9, r1 }
  _R6 = 64;
  __asm { stvx      v3, r11, r1 }
  _R7 = 80;
  __asm { stvx      v4, r29, r1 }
  _R8 = 96;
  _R9 = 112;
  __asm { stvx      v5, r4, r1 }
  _R4 = 176;
  __asm { lvx       v2, r6, r5 }
  _R6 = 192;
  __asm { lvx       v3, r7, r5 }
  _R7 = 208;
  __asm { lvx       v4, r8, r5 }
  _R8 = 224;
  __asm { lvx       v5, r9, r5 }
  _R9 = 128;
  __asm { stvx      v2, r4, r1 }
  _R4 = 240;
  __asm
  {
    stvx      v3, r6, r1
    stvx      v4, r7, r1
    stvx      v5, r8, r1
    lvx       v2, r9, r5
    stvx      v2, r4, r1
  }
  v26 = (const kn::FVector *)YS::OBJ::get_pos(this);
  kn::FVector::operator=(v32, v26);
  v32[1].z = 0.0;
  v32[1].y = 0.0;
  v32[1].x = 0.0;
  v32[1].w = 1.0;
  v27 = (LODWORD(v32[7].x) & 0x9FFFFFFF | 0x40000000) & 0x7FFFFFFF;
  if ( v14 )
    v27 = LODWORD(v32[7].x) & 0x9FFFFFFF | 0xC0000000;
  LODWORD(v32[7].x) = v27;
  v28 = 0LL;
  if ( radius > 0.0 )
  {
    _FP29 = 0.0;
    v28 = 0LL;
    do
    {
      _FP1 = radius - (float)((float)_FP29 + (float)100.0);
      __asm { fsel      f29, f1, f29, f30 }
      v32[2].z = _FP29;
      v32[2].x = _FP29;
      dk::Octree::collisionToMap((dk::CollisionParam_5 *)v32);
      if ( !v14 && v32[7].y < 0.0 )
        break;
      kn::FVector::operator=(v32, &v32[3]);
      kn::FVector::operator=(pos, &v32[3]);
      v28 = 1LL;
    }
    while ( _FP29 < radius );
  }
  return v28;
}


---
---
---
appears in:
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
---
---
---
example usage from obj\B_EX420\b_ex.bdscript
L15264:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub32 8, L15539
 eqz 
 jz L15538
 pushFromFSp 0
 pushImmf 1200
 pushImm 0
 syscall 1, 367 ; trap_obj_get_move_to_space_pos (3 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromFSp 0
 fetchValue 4
 pushImm 210
 pushImmf 8
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 50
 subf 
 supzf 
 jz L15401
 pushFromPSp 16
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushImmf 100
 subf 
 supzf 
 jz L15372
 pushFromFSp 0
 pushImmf 6
 gosub32 16, L15068
 pushImmf 6
 gosub32 16, L1748
 jmp L15372
