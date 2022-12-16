---
---
---
name: trap_obj_star
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
push unk1 ; (unknown)  (pushFromFSp: 0,20,4) (pushFromPSp: 32) (pushFromPSpVal: 0) (pushImm: -1)
push unk2 ; (unknown)  (pushImmf: 0,30,60) (syscall: 0, 3 ; trap_frametime (0 in, 1 out),1, 67 ; trap_obj_motion_get_length (2 in, 1 out))
syscall 1, 91 ; trap_obj_star (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::PARTY::star(__int64 result, double a2)
/----- (0000000000506828) ----------------------------------------------------
void __fastcall YS::trap_obj_star(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r29
  __int64 v5; // r29
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
  if ( (*(_DWORD *)(*(unsigned int *)(v2 + 4) + 0x588LL) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ToOBJ(args[0].p)->is_party()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      563LL,
      "trap_obj_star",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 563);
  }
  v4 = *(unsigned int *)args;
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v4 & 3) != 0 )
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
  v5 = *(unsigned int *)(v4 + 4);
  if ( (*(_DWORD *)(v5 + 1416) & 4) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_party()",
      "common",
      "../yasui/libys/party.h",
      177LL,
      "TOPARTY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/party.h", 177);
  }
  YS::PARTY::star(v5, *(float *)&(*args)[4]);
}
// 50684C: variable 'back_chain' is possibly undefined
->
/----- (0000000000476390) ----------------------------------------------------
__int64 __fastcall YS::PARTY::star(__int64 result, double a2)
{
  *(float *)(result + 2816) = a2;
  return result;
}


---
---
---
appears in:
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from magic\CURE_1\cure.bdscript
L506:
 jz L528
 pushFromFSp 20
 pushImmf 60
 syscall 1, 91 ; trap_obj_star (2 in, 0 out)
 pushImm 64
 pushImm L563
 pushFromFSp 20
 gosub 8, L696
 drop 
 jmp L528
