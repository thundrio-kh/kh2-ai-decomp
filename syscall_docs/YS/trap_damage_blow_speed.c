---
---
---
name: trap_damage_blow_speed
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
push unk1 ; (unknown)  (pushFromFSp: 4)
syscall 2, 33 ; trap_damage_blow_speed (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4100) ----------------------------------------------------
void __fastcall YS::trap_damage_blow_speed(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = (float)*(__int16 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 0xELL);
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
L305:
 pushFromPSpVal 112
 pushImm 12
 add 
 pushFromFSp 4
 syscall 2, 33 ; trap_damage_blow_speed (1 in, 1 out)
 pushImmf 1
 addf 
 pushImmf 5
 addf 
 memcpy 0
 pushFromPSpVal 112
 pushImm 4
 add 
 pushFromFSp 8
 pushImmf 7
 mulf 
 memcpy 0
 pushFromFSp 0
 pushFromPSpVal 112
 pushFromPSpVal 112
 fetchValue 4
 pushFromPSpVal 112
 fetchValue 12
 syscall 6, 25 ; trap_obj_tt_ball_blow (4 in, 0 out)
 jmp L474
