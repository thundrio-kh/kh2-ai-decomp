---
---
---
name: trap_limit_aladdin_prize_drain
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
syscall 6, 31 ; trap_limit_aladdin_prize_drain (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::PRIZE::AladdinDrain()
void __cdecl YS::PRIZEBOX::AladdinDrain()
/----- (0000000000626230) ----------------------------------------------------
void __fastcall Ts::trap_limit_aladdin_prize_drain(BD_VALUE_25 *args)
{
  YS::PRIZE::AladdinDrain();
  YS::PRIZEBOX::AladdinDrain();
}

//COMPLICATED YS::PRIZE::AladdinDrain YS::PRIZEBOX::AladdinDrain
->
/----- (0000000000483BB0) ----------------------------------------------------
void __cdecl YS::PRIZE::AladdinDrain()
{
  YS::MASSEFFECT_8 *v0; // r29
  YS::MASSEFFECT_8 *v1; // r3
  YS::PRIZE *v2; // r30
  YS::BTLOBJ_68 *v3; // r31

  v0 = 0LL;
  while ( 1 )
  {
    v1 = YS::MASSEFFECT::MANAGER::each((YS::MASSEFFECT::MANAGER_2 *const)*((unsigned int *)YS::Prize + 637), v0);
    v2 = (YS::PRIZE *)(unsigned int)YS::Prize;
    v0 = v1;
    v3 = (YS::BTLOBJ_68 *)(unsigned int)YS::PLAYER::Player;
    if ( !(_DWORD)v1 )
      break;
    if ( (*(_DWORD *)&(*v1)[40] & 1) != 0 )
    {
      YS::PRIZEEFFECT::get((YS::PRIZEEFFECT_13 *const)v1, (YS::BTLOBJ_77 *)(unsigned int)YS::PLAYER::Player, 1);
      YS::PRIZE::get_common(v2, v3, (YS::PRIZEEFFECT_3 *)v0);
    }
  }
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
// 7FE818: using guessed type void *__ptr32 YS::Prize;


->
/----- (000000000048BDAC) ----------------------------------------------------
void __cdecl YS::PRIZEBOX::AladdinDrain()
{
  YS::OBJ_132 *v0; // r31
  YS::BTLOBJ_76 *v1; // r30
  YS::OBJ_132 *v2; // r3

  v0 = 0LL;
  v1 = (YS::BTLOBJ_76 *)(unsigned int)YS::PLAYER::Player;
  while ( 1 )
  {
    v2 = YS::OBJ::Each(v0);
    v0 = v2;
    if ( !(_DWORD)v2 )
      break;
    if ( (*(_DWORD *)&(*v2)[1416] & 0x40000) != 0 )
      YS::PRIZEBOX::get((YS::PRIZEBOX *const)v2, v1);
  }
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:
limit\aladdin\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L5053:
 popToSp 0
 pushImmf 14
 gosub 4, L3378
 syscall 6, 31 ; trap_limit_aladdin_prize_drain (0 in, 0 out)
 ret 
