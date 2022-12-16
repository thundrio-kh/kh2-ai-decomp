---
---
---
name: trap_limit_time
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
push unk1 ; (unknown)  (fetchValue: 0) (pushFromFSpVal: 0)
syscall 2, 60 ; trap_limit_time (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F56AC) ----------------------------------------------------
void __fastcall YS::trap_limit_time(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = *(float *)(*(unsigned int *)args + 0xD4LL);
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
L5110:
 pushFromFSpVal 44
 dup 
 jz L5127
 pushFromFSp 0
 fetchValue 0
 syscall 2, 60 ; trap_limit_time (1 in, 1 out)
 pushImmf 0
 subf 
 supzf 
 eqzv 
