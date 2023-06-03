---
---
---
name: trap_light_set_fog_far
---
---
---
category: light
---
---
---
documentation level: untested
---
---
---
push light_object ; (YS::LIGHT_0 *) (a light object)
push distance ; (int)  (far distance for the fog, only value of 1000 is used in game scripts)
syscall 1, 258 ; trap_light_set_fog_far (2 in, 0 out)
---
---
---
description: Sets the distance that the fog becomes fully opaque
---
---
---
decompiled code:

/----- (0000000000509C34) ----------------------------------------------------
void __fastcall YS::trap_light_set_fog_far(BD_VALUE_21 *args)
{
  *(float *)(*(unsigned int *)args + 0x1CLL) = *(float *)&(*args)[4];
}

//BASIC
---
---
---
appears in:
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
L415:
 pushImm 1
 syscall 1, 181 ; trap_light_create (1 in, 1 out)
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 182 ; trap_light_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImmf 40
 syscall 1, 183 ; trap_light_set_color (5 in, 0 out)
 pushImmf 30
 gosub 4, L503
 pushImm 1
 syscall 1, 181 ; trap_light_create (1 in, 1 out)
 popToSp 4
 pushFromFSp 4
 pushImmf 20
 syscall 1, 259 ; trap_light_set_fog_min (2 in, 0 out)
 pushFromFSp 4
 pushImmf 255
 syscall 1, 260 ; trap_light_set_fog_max (2 in, 0 out)
 pushFromFSp 4
 pushImmf 200
 syscall 1, 257 ; trap_light_set_fog_near (2 in, 0 out)
 pushFromFSp 4
 pushImmf 1000
 syscall 1, 258 ; trap_light_set_fog_far (2 in, 0 out)
 pushFromFSp 4
 pushImmf 40
 syscall 1, 251 ; trap_light_fadein (2 in, 0 out)
 pushImm 19393
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushImmf 30
 gosub 4, L503
 ret 
