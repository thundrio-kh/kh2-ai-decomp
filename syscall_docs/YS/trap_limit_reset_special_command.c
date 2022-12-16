---
---
---
name: trap_limit_reset_special_command
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
push unk1 ; (unknown)  (fetchValue: 0)
syscall 2, 89 ; trap_limit_reset_special_command (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LIMIT::reset_special_command(YS::LIMIT_1 *const this)
/----- (00000000004F56CC) ----------------------------------------------------
void __fastcall YS::trap_limit_reset_special_command(BD_VALUE_19 *args)
{
  YS::LIMIT::reset_special_command((YS::LIMIT_1 *const)(*args)[0]);
}
->
/----- (000000000043FDDC) ----------------------------------------------------
void __fastcall YS::LIMIT::reset_special_command(YS::LIMIT_1 *const this)
{
  if ( (*(_DWORD *)&(*this)[64] & 8) != 0 )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)(*(unsigned int *)&(*this)[12]
                                                                                         + 0xB44LL)
                                                      + 0x18LL))();
    --*(_DWORD *)&(*this)[60];
    *(_DWORD *)(unsigned int)((_DWORD)this + 64) &= 0xFFFFFFF7;
  }
}


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\trinity_zz\limi.bdscript
---
---
---
example usage from limit\trinity\limi.bdscript
L8991:
 pushFromFSp 0
 fetchValue 0
 syscall 2, 89 ; trap_limit_reset_special_command (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L9379
 pushFromFSp 0
 pushImmf 30
 gosub 4, L2462
 syscall 7, 30 ; trap_trinity_shot_ensure (0 in, 0 out)
 pushFromFSpVal 96
 pushImm 0
 sub 
 neqz 
 jz L9025
 pushFromFSpVal 96
 syscall 1, 132 ; trap_target_free (1 in, 0 out)
 jmp L9025
