---
---
---
name: trap_enemy_stop_all_start
---
---
---
category: enemy
---
---
---
documentation level: untested
---
---
---
push id ; (int)  (ID of an enemy)
syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)
---
---
---
description: Stops all instances of an object from doing anything, until trap_enemy_stop_all_end is run
---
---
---
decompiled code:
void __fastcall YS::ENEMY::StopStartAll(int id)
/----- (00000000006232C0) ----------------------------------------------------
void __fastcall Ts::trap_enemy_stop_all_start(BD_VALUE_24 *args)
{
  YS::ENEMY::StopStartAll(*(_DWORD *)args);
}
->
/----- (0000000000425A48) ----------------------------------------------------
void __fastcall YS::ENEMY::StopStartAll(int id)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_132 *v3; // r3

  v2 = 0LL;
  while ( 1 )
  {
    do
    {
      v3 = YS::OBJ::Each(v2);
      v2 = v3;
    }
    while ( (_DWORD)v3 && (*(_DWORD *)&(*v3)[1416] & 0x10) == 0 );
    if ( !(_DWORD)v3 )
      break;
    YS::OBJ::stop(v3, id, 0.0);
  }
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\tron\limi.bdscript
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_AL010\p_al.bdscript ((P) Genie)
---
---
---
example usage from limit\aladdin\limi.bdscript
L3400:
 pushImm 17
 syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)
 ret 
