---
---
---
name: trap_limit_start_thread
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
push unk1 ; (unknown)  (pushFromFSp: 0,4) (pushImm: L3357,L3951,L663,L96)
push unk2 ; (unknown)  (pushFromFSp: 0,12,4) (fetchValue: 4)
syscall 2, 54 ; trap_limit_start_thread (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::VM_309 *__fastcall YS::LIMIT::StartThread(int pc, BD_VALUE_7 *args, int argc)
/----- (00000000004F544C) ----------------------------------------------------
void __fastcall YS::trap_limit_start_thread(BD_VALUE_19 *args)
{
  YS::LIMIT::StartThread(*(_DWORD *)args, (BD_VALUE_7 *)(unsigned int)((_DWORD)args + 4), 1);
}
->
/----- (0000000000440BD0) ----------------------------------------------------
YS::VM_309 *__fastcall YS::LIMIT::StartThread(int pc, BD_VALUE_7 *args, int argc)
{
  __int64 v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v6 = (unsigned int)YS::Limit;
  if ( !YS::Limit )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Limit != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\limit.cpp",
      555LL,
      "StartThread",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\limit.cpp", 555);
    v6 = (unsigned int)YS::Limit;
  }
  return YS::VM::start((YS::VM_377 *const)*(unsigned int *)(v6 + 52), 0, pc, (BD_VALUE_0 *)args, argc);
}
// 440C00: variable 'back_chain' is possibly undefined
// 2A9D718: using guessed type int YS::Limit;


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\trinity_zz\limi.bdscript
limit\tron\limi.bdscript
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from limit\aladdin\limi.bdscript
L3431:
 popToSp 0
 popToSp 4
 popToSp 8
 pushFromFSp 8
 pushFromFSp 4
 pushFromFSp 0
 gosub 8, L3456
 popToSp 12
 pushFromFSp 4
 pushFromFSp 12
 syscall 2, 54 ; trap_limit_start_thread (2 in, 0 out)
 pushFromFSp 12
 ret 
