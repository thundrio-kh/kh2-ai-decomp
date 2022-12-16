---
---
---
name: trap_obj_stop_end_all
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
push unk1 ; (unknown)  (pushImm: 14,16,17,5)
syscall 6, 47 ; trap_obj_stop_end_all (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::StopEndAll(int id)
/----- (00000000006274E8) ----------------------------------------------------
void __fastcall Ts::trap_obj_stop_end_all(BD_VALUE_25 *args)
{
  YS::OBJ::StopEndAll(*(_DWORD *)args);
}
->
/----- (0000000000462544) ----------------------------------------------------
void __fastcall YS::OBJ::StopEndAll(int id)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_132 *v3; // r3

  v2 = 0LL;
  while ( 1 )
  {
    v3 = YS::OBJ::Each(v2);
    v2 = v3;
    if ( !(_DWORD)v3 )
      break;
    YS::STOP::end((YS::STOP *const)(unsigned int)((_DWORD)v3 + 1304), id);
  }
}


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
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
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
L3414:
 pushImm 17
 syscall 6, 47 ; trap_obj_stop_end_all (1 in, 0 out)
 ret 
