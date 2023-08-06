---
---
---
name: trap_score_score
---
---
---
category: score
---
---
---
documentation level: untested
---
---
---
push id ; (int)  (ID of the score to get)
syscall 4, 36 ; trap_score_score (1 in, 1 out)
pop score ; (int) 
---
---
---
description: Returns the high score?
---
---
---
decompiled code:

/----- (00000000004F69E0) ----------------------------------------------------
void __fastcall YS::trap_score_score(BD_VALUE_20 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 4LL);
}

//BASIC
---
---
---
appears in:
msn\AL00_SKATE_01\al00.bdscript
msn\AL10_KINOKO_LEX\kino.bdscript
msn\AL14_MS202_FREE\al14.bdscript
msn\BB13_KINOKO_XAL\kino.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\CA13_KINOKO_LUX\kino.bdscript
msn\EH03_KINOKO_XEM\kino.bdscript
msn\HB04_KINOKO_DEM\kino.bdscript
msn\HB09_SKATE_01\hb09.bdscript
msn\HE02_MS104D\he02.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\HE_COLOSSEUM\he_c.bdscript
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_3\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_7\he_c.bdscript
msn\HE_COLOSSEUM_8\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COLOSSEUM_8_ONLY\he_c.bdscript
msn\HE_COLOSSEUM_8_PP\he_c.bdscript
msn\HE_COLOSSEUM_8_TIT\he_c.bdscript
msn\HE_COL_1_10\he_c.bdscript
msn\HE_COL_1_8\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_4_1\he_c.bdscript
msn\HE_COL_4_10\he_c.bdscript
msn\HE_COL_4_2\he_c.bdscript
msn\HE_COL_4_3\he_c.bdscript
msn\HE_COL_4_4\he_c.bdscript
msn\HE_COL_4_5\he_c.bdscript
msn\HE_COL_4_6\he_c.bdscript
msn\HE_COL_4_7\he_c.bdscript
msn\HE_COL_4_8\he_c.bdscript
msn\HE_COL_4_9\he_c.bdscript
msn\HE_COL_5\he_c.bdscript
msn\HE_COL_5_10\he_c.bdscript
msn\HE_COL_5_8\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8PP_BOSS\he_c.bdscript
msn\HE_COL_8TI_BOSS\he_c.bdscript
msn\HE_COL_8_10\he_c.bdscript
msn\HE_COL_8_25\he_c.bdscript
msn\HE_COL_8_30\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
msn\HE_COL_8_45\he_c.bdscript
msn\HE_COL_8_49\he_c.bdscript
msn\HE_COL_8_5\he_c.bdscript
msn\HE_COL_8_50\he_c.bdscript
msn\HE_COL_8_6\he_c.bdscript
msn\MU09_KINOKO_VEX\kino.bdscript
msn\NM07_KINOKO_XIG\kino.bdscript
msn\NM09_SKATE_01\nm09.bdscript
msn\NM10_MS203_FREE\nm10.bdscript
msn\PO01_MS501_FREE\po01.bdscript
msn\PO06_MS101_FREE\po06.bdscript
msn\PO07_MS201_FREE\po07.bdscript
msn\PO08_MS301_FREE\po08.bdscript
msn\PO09_MS401_FREE\po09.bdscript
msn\TR02_MS102_FREE\tr02.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_SKATE_01\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
msn\TT14_KINOKO_LAR\kino.bdscript
msn\TT25_KINOKO_AXE\kino.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
---
---
---
example usage from msn\AL00_SKATE_01\al00.bdscript
L237:
 pushFromFSpVal 0
 syscall 4, 35 ; trap_score_type (1 in, 1 out)
 pushImm 6
 sub 
 neqz 
 jz L268
 pushImm 0
 pushImm 0
 pushFromFSpVal 0
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushImm 1
 add 
 pushFromFSpVal 4
 syscall 4, 18 ; trap_mission_set_count_param (4 in, 0 out)
 jmp L268
