---
---
---
name: trap_bg_cross_pos
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
push unk2 ; (unknown)  (pushFromPSp: 16,32,48)
push unk3 ; (unknown)  (pushFromPSp: 16) (pushFromPSpVal: 112)
push unk4 ; (unknown)  (pushImm: 1,4)
syscall 1, 135 ; trap_bg_cross_pos (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __fastcall YS::BG::GetCrossPos(const kn::FVector *from, const kn::FVector *to, kn::FVector *cross, int type)
/----- (0000000000503310) ----------------------------------------------------
void __fastcall YS::trap_bg_cross_pos(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::BG::GetCrossPos(
                      (const kn::FVector *)(*args)[0],
                      (const kn::FVector *)*(unsigned int *)&(*args)[4],
                      (kn::FVector *)*(unsigned int *)&(*args)[8],
                      *(_DWORD *)&(*args)[12]);
}
->
/----- (000000000040D720) ----------------------------------------------------
int __fastcall YS::BG::GetCrossPos(const kn::FVector *from, const kn::FVector *to, kn::FVector *cross, int type)
{
  kn::FVector v6[2]; // [sp+70h] [-30h] BYREF

  v6[0].z = 0.0;
  v6[0].y = 0.0;
  v6[0].x = 0.0;
  v6[0].w = 1.0;
  if ( YS::BGHIT::check_line((YS::BGHIT_0 *const)v6, from, to, type) )
    kn::FVector::operator=(cross, v6);
  return LODWORD(v6[1].y);
}


---
---
---
appears in:
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
---
---
---
example usage from obj\B_CA040_PUB\b_ca.bdscript
L5052:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 gosub 20, L4946
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 4
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromPSp 48
 pushFromPSp 32
 pushFromPSp 16
 pushImm 1
 syscall 1, 135 ; trap_bg_cross_pos (4 in, 1 out)
 pushImm 0
 sub 
 msbi 
 ret 
