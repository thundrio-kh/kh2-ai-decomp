---
---
---
name: trap_vector_outer_product
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
syscall 0, 82 ; trap_vector_outer_product (2 in, 1 out)
pop res ; (float) 
---
---
---
description: Calulates the outer product of two vectors
---
---
---
decompiled code:
Axa::FVECTOR4 *__fastcall Axa::outerProductXYZ(Axa::FVECTOR4 *retstr, const Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0)
/----- (00000000004B7720) ----------------------------------------------------
void __fastcall YS::trap_vector_outer_product(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF
  Axa::FVECTOR4 v3; // [sp+80h] [-20h] BYREF

  Axa::outerProductXYZ(&v3, (const Axa::FVECTOR4 *)(*args)[0], (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4]);
  v2.x = v3.x;
  v2.y = v3.y;
  v2.z = v3.z;
  v2.w = v3.w;
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (0000000000020950) ----------------------------------------------------
Axa::FVECTOR4 *__fastcall Axa::outerProductXYZ(Axa::FVECTOR4 *retstr, const Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0)
{
  __asm { lvx       v3, 0, r4 }
  _R7 = 16;
  __asm { lvx       v4, 0, r5 }
  _R6 = (unsigned int)&loc_20000 + 2352;
  __asm { vspltisw  v2, 0 }
  _R4 = 4;
  _R5 = 8;
  __asm
  {
    lvx       v5, 0, r6
    lvx       v6, r7, r6
    vperm     v7, v3, v3, v5
    vperm     v8, v4, v4, v6
    vperm     v4, v4, v4, v5
  }
  _R6 = 12;
  __asm
  {
    vperm     v3, v3, v3, v6
    vmaddfp   v5, v7, v2, v8
    vnmsubfp  v3, v3, v5, v4
    vspltw    v4, v3, 0
    vspltw    v5, v3, 1
    vspltw    v3, v3, 2
    stvewx    v4, 0, r3
    stvewx    v5, r4, r3
    stvewx    v3, r5, r3
    stvewx    v2, r6, r3
  }
  return retstr;
}


---
---
---
appears in:
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\G_EX240\g_ex.bdscript ()
obj\G_EX240_G\g_ex.bdscript ()
obj\G_EX240_R\g_ex.bdscript ()
obj\G_EX250_1\g_ex.bdscript ()
obj\G_EX250_1_G\g_ex.bdscript ()
obj\G_EX250_1_R\g_ex.bdscript ()
obj\G_EX260\g_ex.bdscript ()
obj\G_EX260_G\g_ex.bdscript ()
obj\G_EX260_R\g_ex.bdscript ()
obj\G_EX900_COMBAT\g_ex.bdscript ()
obj\G_EX900_COMBAT_HARD\g_ex.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\G_EX900_FLIGHT\g_ex.bdscript ()
obj\G_EX900_FLIGHT_HARD\g_ex.bdscript ()
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
---
---
---
example usage from obj\B_CA000\b_ca.bdscript
L2000:
 popToSp 0
 pushImmf 30
 popToSp 48
 pushFromFSp 0
 pushImm 0
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromPWp W4224
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPWp W4448
 pushFromPWp W4224
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 82 ; trap_vector_outer_product (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromFSp 0
 gosub 16, L2197
 pushFromPSp 32
 fetchValue 4
 pushImmf 0
 subf 
 infzf 
 jz L2126
 pushFromFSp 0
 fetchValue 4
 pushImm 153
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L2138
