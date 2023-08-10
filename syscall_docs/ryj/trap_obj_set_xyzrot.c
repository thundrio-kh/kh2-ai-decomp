---
---
---
name: trap_obj_set_xyzrot
---
---
---
category: position
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push rot ; (kn::FVector *)  (A rotation vector)
syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)
---
---
---
description: Set the xyz rotation of an object
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_xyzrot(YS::OBJ_125 *const this, const kn::FVector *rot)
/----- (0000000000617174) ----------------------------------------------------
void __fastcall ryj::trap_obj_set_xyzrot(BD_VALUE_23 *args)
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
  YS::OBJ::set_xyzrot((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 617198: variable 'back_chain' is possibly undefined
->
/----- (0000000000461160) ----------------------------------------------------
void __fastcall YS::OBJ::set_xyzrot(YS::OBJ_125 *const this, const kn::FVector *rot)
{
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1360), rot);
  *(float *)&(*this)[1372] = rot->y;
  *(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 8u;
}


---
---
---
appears in:
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\W_EX010_ROXAS_DARK\w_ex.bdscript ((W) Roxas’s Oblivion)
obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript ((W) Roxas’s Oathkeeper)
---
---
---
example usage from obj\B_EX390\b_ex.bdscript
L36929:
 pushFromPSp 16
 pushImmf 0
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 fetchValue 4
 pushFromFSp 32
 addf 
 pushImmf 0
 pushImmf 1
 gosub32 24, L6357
 pushFromFSp 0
 pushFromPSp 16
 syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)
 jmp L36965
