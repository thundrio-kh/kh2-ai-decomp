---
---
---
name: trap_attack_set_hitmark_pos
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
push unk1 ; (unknown)  (pushFromPSp: 32,48)
push unk2 ; (unknown)  (pushFromPSp: 16,32)
syscall 2, 71 ; trap_attack_set_hitmark_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK::SetHitmarkPos(const kn::FVector *pos, const kn::FVector *dir)
/----- (00000000004F5060) ----------------------------------------------------
void __fastcall YS::trap_attack_set_hitmark_pos(BD_VALUE_19 *args)
{
  YS::ATTACK::SetHitmarkPos((const kn::FVector *)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
->
/----- (0000000000406AEC) ----------------------------------------------------
void __fastcall YS::ATTACK::SetHitmarkPos(const kn::FVector *pos, const kn::FVector *dir)
{
  kn::FVector::operator=((kn::FVector *const)&YS::ATTACK::HitmarkPos, pos);
  kn::FVector::operator=((kn::FVector *const)&YS::ATTACK::HitmarkDir, dir);
}
// C78350: using guessed type float YS::ATTACK::HitmarkPos;
// C78360: using guessed type int YS::ATTACK::HitmarkDir;


---
---
---
appears in:
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
---
---
---
example usage from obj\B_MU120\b_mu.bdscript
L11772:
 pushFromFSp 4
 jz L11891
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 20, L797
 pushImm 44
 popToSp 8
 pushFromFSp 0
 pushFromFSp 8
 pushFromPSp 16
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 48
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 48
 pushImmf 1.5
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 gosub 20, L3803
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImm 600
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 64
 pushFromFSp 64
 pushFromFSp 0
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromPSp 48
 pushFromPSp 32
 syscall 2, 71 ; trap_attack_set_hitmark_pos (2 in, 0 out)
 pushFromFSp 64
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 jmp L11891
