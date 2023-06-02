---
---
---
name: trap_damage_is_cure
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
syscall 2, 72 ; trap_damage_is_cure (1 in, 1 out)
pop isheal ; (bool) 
---
---
---
description: Returns if the type of damage is healing (if the value is 5 or 6)
---
---
---
decompiled code:

/----- (00000000004F41B4) ----------------------------------------------------
void __fastcall YS::trap_damage_is_cure(BD_VALUE_19 *args)
{
  int v1; // r4
  int v2; // r5

  v1 = 0;
  v2 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 4LL);
  if ( v2 == 5 || v2 == 6 )
    v1 = 1;
  *(_DWORD *)args = v1;
}

//BASIC
---
---
---
appears in:
msn\EH14_MS103\ms_l.bdscript
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\MU09_MS108\mu09.bdscript
---
---
---
example usage from msn\EH14_MS103\ms_l.bdscript
TR6:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 syscall 2, 72 ; trap_damage_is_cure (1 in, 1 out)
 eqz 
 jz L88
 pushFromFSp 4
 fetchValue 4
 syscall 1, 309 ; trap_sysobj_is_player (1 in, 1 out)
 jz L58
 pushImm 0
 pushFromFSp 0
 syscall 2, 46 ; trap_damage_damage (1 in, 1 out)
 gosub 4, L89
 negf 
 pushImm 0
 syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)
 jmp L86
