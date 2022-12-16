---
---
---
name: trap_flare_set_effect
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
push unk1 ; (unknown)  (pushFromFSpVal: 80)
push unk2 ; (unknown)  (pushFromFSpVal: 64)
syscall 7, 8 ; trap_flare_set_effect (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623480) ----------------------------------------------------
void __fastcall Ts::trap_flare_set_effect(BD_VALUE_24 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x3CLL) = *(_DWORD *)&(*args)[4];
}

//BASIC
---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
---
---
---
example usage from limit\donald2\limi.bdscript
L1717:
 pushImm 0
 popToSp 160
 pushFromPSp 32
 pushImmf 4
 pushImmf 0.01
 pushImmf 8
 pushImmf 0
 gosub 44, L2470
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf -200
 addf 
 memcpy 0
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 pushImmf 50
 pushImmf 150
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 memcpyToSp 16, 16
 pushFromPSpVal 32
 pushFromPSp 16
 pushImmf -60
 pushImmf 60
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 degr 
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSpVal 16, 32
 pushFromFSpVal 72
 pushFromFSpVal 88
 gosub 52, L2355
 popToSpVal 64
 pushFromPSp 16
 pushImmf 1
 gosub 44, L2293
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf -1
 memcpy 0
 pushFromFSpVal 64
 pushFromPSp 16
 syscall 0, 41 ; trap_effect_set_dir (2 in, 0 out)
 pushFromFSpVal 80
 pushFromFSpVal 64
 syscall 7, 8 ; trap_flare_set_effect (2 in, 0 out)
 pushFromFSp 0
 pushFromPSpVal 32
 gosub 44, L3056
 pushFromPSp 48
 pushImm 32
 add 
 pushFromFSp 0
 gosub 44, L2409
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpy 16
