---
---
---
name: trap_obj_use_mp
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
push obj ; (YS::OBJ_125) (An object)
syscall 1, 276 ; trap_obj_use_mp (1 in, 0 out)
---
---
---
description: Use up the mp for a party member
---
---
---
decompiled code:
void __fastcall YS::PARTY::use_mp(YS::PARTY_63 *const this)
/----- (00000000004F9CD8) ----------------------------------------------------
void __fastcall YS::trap_obj_use_mp(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r31
  __int64 v4; // r29
  __int64 v5; // r30
  __int64 v6; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
    goto LABEL_5;
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4)) )
  {
LABEL_5:
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && ToOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      230LL,
      "trap_obj_use_mp",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 230);
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
  if ( (*(_DWORD *)(*(unsigned int *)(v4 + 4) + 0x588LL) & 4) != 0 )
  {
    v5 = *(unsigned int *)args;
    if ( !(_DWORD)v5 )
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
    if ( (v5 & 3) != 0 )
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
    v6 = *(unsigned int *)(v5 + 4);
    if ( (*(_DWORD *)(v6 + 1416) & 4) == 0 )
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
    YS::PARTY::use_mp((YS::PARTY_63 *const)v6);
  }
}
// 4F9CFC: variable 'back_chain' is possibly undefined
->
/----- (0000000000478BB8) ----------------------------------------------------
void __fastcall YS::PARTY::use_mp(YS::PARTY_63 *const this)
{
  YS::BTLOBJ::add_mp((YS::BTLOBJ *const)this, -(unsigned __int8)(*this)[2804], 0);
  (*this)[2804] = 0;
}


---
---
---
appears in:
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_BB000\p_bb.bdscript ((P) Beast)
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from obj\P_AL000\p_al.bdscript
L2717:
 popToSp 4
 popToSp 8
 popToSp 0
 pushImm 0
 popToSpVal 20
 pushFromFSp 8
 memcpyToSpVal 20, 0
 pushImm 0
 popToSpVal 24
 pushImm 0
 popToSpVal 28
 pushFromPSpVal 0
 fetchValue 4
 syscall 10, 31 ; trap_sysobj_is_summon (1 in, 1 out)
 eqz 
 jz L2771
 pushFromPSpVal 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 4
 jz L2769
 pushFromPSpVal 0
 syscall 1, 276 ; trap_obj_use_mp (1 in, 0 out)
 jmp L2769
