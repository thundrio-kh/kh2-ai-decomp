---
---
---
name: trap_partram_add_ability
---
---
---
category: save
---
---
---
documentation level: untested
---
---
---
push partram ; (YS::PARTRAM *)  (Partram object)
push id ; (int)  (ID of an ability)
push equip ; (bool)  (Whether or not to start the ability equipped)
syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
---
---
---
description: Gives the player/party an ability.
---
---
---
decompiled code:
void __fastcall YS::PARTRAM::add_ability(YS::PARTRAM *const this, __int64 item, __int64 is_equip)
/----- (00000000004B8FB0) ----------------------------------------------------
void __fastcall YS::trap_partram_add_ability(BD_VALUE_16 *args)
{
  YS::PARTRAM::add_ability(
    (YS::PARTRAM *const)(*args)[0],
    *(int *)&(*args)[4],
    (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
}
->
/----- (0000000000496118) ----------------------------------------------------
void __fastcall YS::PARTRAM::add_ability(YS::PARTRAM *const this, __int64 item, __int64 is_equip)
{
  int v3; // r7
  YS::PARTRAM *v4; // r6

  v3 = 0;
  v4 = this;
  do
  {
    if ( (*(_WORD *)(unsigned int)((_DWORD)v4 + 84) & 0x7FFF) == 0 )
    {
      *(_WORD *)(unsigned int)((_DWORD)this + 2 * v3 + 84) = (((_cntlzw((unsigned __int8)is_equip) & 0x20) == 0) << 15) | (*(_WORD *)(unsigned int)((_DWORD)this + 2 * v3 + 84) & 0x8000 | item & 0x7FFF) & 0x7FFF;
      return;
    }
    ++v3;
    v4 = (YS::PARTRAM *)((char *)v4 + 2);
  }
  while ( v3 < 80 );
  ErrorPrintf("*ERROR! ", item, is_equip, v4);
  ErrorPrintf("ability over");
  ErrorPrintf(" *\n");
  ErrorRaise();
  Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\saveram.cpp", 144);
}


---
---
---
appears in:
ard\mu07\mu_g.bdscript
ard\tr03\tr_g.bdscript
ard\tr05\tr_g.bdscript
---
---
---
example usage from ard\mu07\mu_g.bdscript
TR2:
 pushImm 6
 syscall 0, 61 ; trap_saveram_get_partram (1 in, 1 out)
 popToSp 0
 pushFromFSp 0
 pushImm 8
 syscall 0, 96 ; trap_partram_add_ap (2 in, 0 out)
 pushFromFSp 0
 pushImm 207
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 434
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 435
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 417
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 408
 pushImm 0
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 ret 
