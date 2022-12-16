---
---
---
name: trap_obj_search_by_serial
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
push unk1 ; (unknown)  (pushFromPSp: 0,16,32,4) (pushFromPSpVal: 192,208,224) (pushFromFWp: W0,W152,W288) (gosub: 16, L1314)
push unk2 ; (unknown)  (pushFromFSp: 0,36) (pushImm: 161,162,163,19,20,31,32,34,39,94,95) (fetchValue: 32,48) (pushFromFSpVal: 108,112)
syscall 1, 143 ; trap_obj_search_by_serial (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::OBJ_125 *__fastcall YS::OBJ::SearchBySerial(int serial)
/----- (0000000000501F9C) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_serial(BD_VALUE_21 *args)
{
  __int64 v1; // r31

  v1 = *(unsigned int *)args;
  *(_DWORD *)(v1 + 4) = (unsigned int)YS::OBJ::SearchBySerial(*(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000460704) ----------------------------------------------------
YS::OBJ_125 *__fastcall YS::OBJ::SearchBySerial(int serial)
{
  YS::OBJ_125 *result; // r3
  int v3; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !serial )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "serial != 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      971LL,
      "SearchBySerial",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 971);
  }
  result = 0LL;
  do
  {
    result = YS::OBJ::Each(result);
    if ( !(_DWORD)result )
      break;
    v3 = 0;
    if ( *(_DWORD *)&(*result)[2076] )
      v3 = *(unsigned __int16 *)(*(unsigned int *)&(*result)[2076] + 0x1ELL);
  }
  while ( v3 != serial );
  return result;
}
// 460720: variable 'back_chain' is possibly undefined


---
---
---
appears in:
ard\he03\he_t.bdscript
ard\tt10\tt_m.bdscript
msn\AL14_MS_O\al14.bdscript
msn\AL14_MS_S\al14.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
---
---
---
example usage from ard\he03\he_t.bdscript
L134:
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 143 ; trap_obj_search_by_serial (2 in, 0 out)
 pushFromPSp 32
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L154
 pushFromPSp 32
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 jmp L154
