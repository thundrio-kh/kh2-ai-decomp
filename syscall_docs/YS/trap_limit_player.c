---
---
---
name: trap_limit_player
---
---
---
category: limit
---
---
---
documentation level: untested
---
---
---
push limit_obj ; (YS::LIMIT_1 *)  (A limit object) 
syscall 2, 48 ; trap_limit_player (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: Return a player reference associated with a limit
---
---
---
decompiled code:

/----- (00000000004F53D4) ----------------------------------------------------
void __fastcall YS::trap_limit_player(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0xCLL);
}

//BASIC
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
L5230:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 popToSpVal 0
 pushFromPSpVal 4
 pushFromFSp 4
 syscall 2, 48 ; trap_limit_player (1 in, 1 out)
 gosub 4, L361
 pushFromPSpVal 20
 pushFromFSp 4
 pushImm 0
 syscall 2, 49 ; trap_limit_friend (2 in, 1 out)
 gosub 4, L361
 pushImm 1
 popToSpVal 44
 pushFromPSpVal 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 131 ; trap_target_dup (1 in, 1 out)
 popToSpVal 36
 pushFromPSpVal 20
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L5288
 pushFromPSpVal 20
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 131 ; trap_target_dup (1 in, 1 out)
 popToSpVal 40
 jmp L5293
