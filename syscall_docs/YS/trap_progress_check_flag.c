---
---
---
name: trap_progress_check_flag
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
push flag_num ; (int)  (Flag number)
syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
pop value ; (bool) 
---
---
---
description: Checks value of a progress flag
---
---
---
decompiled code:
bool __fastcall YS::PROGRESS::CheckFlag(unsigned __int64 num)
/----- (00000000004B7CC4) ----------------------------------------------------
void __fastcall YS::trap_progress_check_flag(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::PROGRESS::CheckFlag(*(int *)args);
}
->
/----- (000000000048F4FC) ----------------------------------------------------
bool __fastcall YS::PROGRESS::CheckFlag(unsigned __int64 num)
{
  int v3; // r30
  unsigned __int64 v4; // r29
  __int64 v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  if ( (_DWORD)num == 0xFFFF )
    return 0LL;
  v3 = (int)num >> 10;
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (int)num >> 10 < 0 || v3 >= 19 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "world >= 0 && world < WORLD_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp",
      249LL,
      "CheckFlag",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\progress.cpp", 249);
  }
  v5 = (unsigned int)(32 * v3 + 9398752);
  if ( (num & 0x3FF) >= 0x100 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  return (*(_DWORD *)(v5 + ((num >> 3) & 0x7C)) & (1 << (num & 0x1F))) != 0;
}
// 48F544: variable 'back_chain' is possibly undefined


---
---
---
appears in:
00common
ard\eh18\full.bdscript
ard\he03\he_t.bdscript
ard\tt10\tt_m.bdscript
ard\wi00\wi00.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\HB24_CONFINE_2\hb24.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\TT04_MS00\tt04.bdscript
msn\TT04_MS01\tt04.bdscript
msn\TT04_MS02\tt04.bdscript
msn\TT06_BAGGAGE_01\tt06.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_PERFORM_01\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT06_WORK_BAGGAGE\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
msn\TT06_WORK_PERFORM\tt06.bdscript
msn\TT07_CLEAN_01\tt07.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_POSTER_01\tt07.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_WORK_CLEAN\tt07.bdscript
msn\TT07_WORK_POSTER\tt07.bdscript
msn\TT07_WORK_WORM\tt07.bdscript
msn\TT07_WORM_01\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
obj\F_HB130\f_hb.bdscript ((F) ??? (HB))
obj\F_TR010\f_tr.bdscript ((F) A Terminal from Space Paranoids (TR))
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
00common
---
---
---
example usage from 00common
L68:
 pushImm 13325
 syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
 eqz 
 jz L83
 pushImm 13325
 syscall 0, 14 ; trap_progress_set_flag (1 in, 0 out)
 jmp L118
