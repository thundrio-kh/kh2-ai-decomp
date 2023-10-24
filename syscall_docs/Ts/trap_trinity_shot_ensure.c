---
---
---
name: trap_trinity_shot_ensure
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
syscall 7, 30 ; trap_trinity_shot_ensure (0 in, 0 out)
---
---
---
description: Ensure a trinity limit shot
---
---
---
decompiled code:
void __cdecl Ts::TRINITY_SHOT_OBJ::Ensure()
/----- (0000000000624044) ----------------------------------------------------
void __fastcall Ts::trap_trinity_shot_ensure(BD_VALUE_24 *args)
{
  Ts::TRINITY_SHOT_OBJ::Ensure();
}
->
/----- (0000000000629480) ----------------------------------------------------
void __cdecl Ts::TRINITY_SHOT_OBJ::Ensure()
{
  if ( Ts::ShotObj )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)(unsigned int)Ts::ShotObj
                                                      + 0x1CLL))();
    Ts::ShotObj = 0;
  }
}
// 807830: using guessed type void *__ptr32 Ts::ShotObj;


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
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
