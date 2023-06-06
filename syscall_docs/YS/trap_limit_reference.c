---
---
---
name: trap_limit_reference
---
---
---
category: limit
---
---
---
documentation level: incomplete
---
---
---
push limit_obj ; (YS::LIMIT_1 *)  (A limit object) 
syscall 2, 63 ; trap_limit_reference (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: Return some reference associated with the limit
---
---
---
decompiled code:

/----- (00000000004F56BC) ----------------------------------------------------
void __fastcall YS::trap_limit_reference(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x3CLL);
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
L6698:
 pushFromFSp 0
 fetchValue 0
 syscall 2, 63 ; trap_limit_reference (1 in, 1 out)
 pushImm 0
 sub 
 ipos 
 jz L6714
 halt 
 jmp L6698
