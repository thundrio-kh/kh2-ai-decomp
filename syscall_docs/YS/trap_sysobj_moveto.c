---
---
---
name: trap_sysobj_moveto
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
push obj ; (YS::OBJ_125) (An object)
push pos ; (kn::FVector *)  (A position vector)
push speed ; (float)  (Speed value)
syscall 1, 2 ; trap_sysobj_moveto (3 in, 1 out)
pop unk ; (float) 
---
---
---
description: Moves an object to a position
---
---
---
decompiled code:
float __fastcall YS::OBJ::moveto(YS::OBJ_133 *const this, const kn::FVector *pos, double speed)
/----- (00000000004F724C) ----------------------------------------------------
void __fastcall YS::trap_sysobj_moveto(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::OBJ::moveto(
                            (YS::OBJ_133 *const)(*args)[0],
                            (const kn::FVector *)*(unsigned int *)&(*args)[4],
                            *(float *)&(*args)[8]);
}
->
/----- (0000000000470B80) ----------------------------------------------------
float __fastcall YS::OBJ::moveto(YS::OBJ_133 *const this, const kn::FVector *pos, double speed)
{
  Axa::FVECTOR4 *v5; // r3
  double v6; // fp30
  Axa::FVECTOR4 v9; // [sp+70h] [-40h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-30h] BYREF

  v10.x = pos->x;
  v10.y = pos->y;
  v10.z = pos->z;
  v10.w = pos->w;
  v5 = Axa::FVECTOR4::operator-=(&v10, (const Axa::FVECTOR4 *)(unsigned int)((_DWORD)this + 1344));
  v9.x = v5->x;
  v9.y = v5->y;
  v9.z = v5->z;
  v9.w = v5->w;
  v9.y = 0.0;
  v6 = Axa::FVECTOR4::normalize(&v9);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 16), (const kn::FVector *)&v9);
  *(float *)&(*this)[28] = speed;
  return v6;
}


---
---
---
appears in:
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
---
---
---
example usage from obj\M_EX420\m_ex.bdscript
L3495:
 pushFromFSp 16
 pushImmf 0
 subf 
 supzf 
 jz L3713
 pushFromFSp 0
 fetchValue 4
 pushImm 48
 add 
 pushImm 4
 add 
 pushImmf 0.1
 memcpy 0
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFWp W148
 degr 
 sin 
 pushImmf 60
 mulf 
 degr 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 32
 pushFromFSp 0
 pushFromPSp 32
 pushImmf 0
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 32
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromFWp W148
 pushImmf 2
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 3
 addf 
 addf 
 popToWp W148
 pushFromFSp 0
 fetchValue 4
 pushFromPSp 32
 pushImmf 20
 syscall 1, 2 ; trap_sysobj_moveto (3 in, 1 out)
 drop 
 pushFromFSp 16
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 16
 halt 
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 popToSp 12
 pushFromFSp 12
 pushFromFSp 4
 subf 
 infzf 
 dup 
 jnz L3705
 pushFromFSp 0
 syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 64 ; trap_obj_get_wish_movement (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 pushImmf 0.3
 mulf 
 subf 
 infzf 
 neqzv 
