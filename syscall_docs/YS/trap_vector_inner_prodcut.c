---
---
---
name: trap_vector_inner_prodcut
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
push a ; (Axa::FVECTOR4)  (A vector)
push b ; (Axa::FVECTOR4)  (A vector)
syscall 0, 91 ; trap_vector_inner_prodcut (2 in, 1 out)
pop result ; (float) 
---
---
---
description: Calculates the inner product of two vectors
---
---
---
decompiled code:
FLOAT __fastcall Axa::InnerProductXYZ(const Axa::FVECTOR4 *a, const Axa::FVECTOR4 *b)
/----- (00000000004B7940) ----------------------------------------------------
void __fastcall YS::trap_vector_inner_prodcut(BD_VALUE_16 *args)
{
  FLOAT *v2; // r4
  FLOAT *v3; // r4
  Axa::FVECTOR4 v4; // [sp+70h] [-40h] BYREF
  Axa::FVECTOR4 v5; // [sp+80h] [-30h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v4.x = *v2;
  v4.y = v2[1];
  v4.z = v2[2];
  v4.w = v2[3];
  Axa::FVECTOR4::normalize(&v4);
  v3 = (FLOAT *)*(unsigned int *)&(*args)[4];
  v5.x = *v3;
  v5.y = v3[1];
  v5.z = v3[2];
  v5.w = v3[3];
  Axa::FVECTOR4::normalize(&v5);
  *(FLOAT *)&(*args)[0] = Axa::InnerProductXYZ(&v4, &v5);
}
->
/----- (00000000000208F4) ----------------------------------------------------
FLOAT __fastcall Axa::InnerProductXYZ(const Axa::FVECTOR4 *a, const Axa::FVECTOR4 *b)
{
  float back_chain; // [sp+0h] [-10h]

  __asm
  {
    vspltisw  v2, 0
    lvx       v3, 0, a
    lvx       v4, 0, b
    vsldoi    v5, v3, v3, v4
    vmaddfp   v2, v3, v2, v4
    vsldoi    v6, v4, v4, v4
    vsldoi    v3, v3, v3, v8
  }
  _R0 = -16;
  __asm
  {
    vsldoi    v4, v4, v4, v8
    vmaddfp   v2, v5, v2, v6
    vmaddfp   v2, v3, v2, v4
    vspltw    v2, v2, 0
    stvx      v2, r1, r0
  }
  return back_chain;
}
// 20928: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
---
---
---
example usage from obj\B_CA050\b_ca.bdscript
L331:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 16, L613
 memcpyToSp 16, 48
 pushFromPSp 48
 gosub 20, L535
 pushFromFSp 8
 pushFromPWp W48
 gosub 16, L577
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 217 ; trap_obj_set_pos_trans (2 in, 0 out)
 pushFromPSp 32
 pushImmf 0
 pushImmf 0
 pushImmf 1
 pushImmf 1
 gosub 16, L550
 pushFromFSp 4
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPWp W48
 gosub 20, L577
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 91 ; trap_vector_inner_prodcut (2 in, 1 out)
 pushImmf 0
 subf 
 supzf 
 jz L448
 pushFromFSp 8
 pushFromPSp 32
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 jmp L454
