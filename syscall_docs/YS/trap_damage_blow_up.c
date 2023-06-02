---
---
---
name: trap_damage_blow_up
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push damage ; (YS::DAMAGE_5 *)  (An object representing damage)
syscall 2, 32 ; trap_damage_blow_up (1 in, 1 out)
pop blow_up ; (int) 
---
---
---
description: Returns the blow up value for the attack, documented in openkh as Knockback Strength 2
---
---
---
decompiled code:

/----- (00000000004F40D4) ----------------------------------------------------
void __fastcall YS::trap_damage_blow_up(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = (float)*(__int16 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 0xCLL);
}

//BASIC
---
---
---
appears in:
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
---
---
---
example usage from obj\F_TT020\f_tt.bdscript
L116:
 pushFromFSp 4
 syscall 2, 32 ; trap_damage_blow_up (1 in, 1 out)
 pushImmf 0.1
 mulf 
 pushImmf 3
 addf 
 popToSp 8
 jmp L165
