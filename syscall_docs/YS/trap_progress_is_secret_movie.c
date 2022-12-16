---
---
---
name: trap_progress_is_secret_movie
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
syscall 0, 101 ; trap_progress_is_secret_movie (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::BATTLE_REPORT::IsSecretMovie()
/----- (00000000004B7D34) ----------------------------------------------------
void __fastcall YS::trap_progress_is_secret_movie(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::BATTLE_REPORT::IsSecretMovie();
}
->
/----- (000000000040CD58) ----------------------------------------------------
bool __cdecl YS::BATTLE_REPORT::IsSecretMovie()
{
  bool v0; // r31

  v0 = 0;
  if ( YS::PROGRESS::CheckFlag(0x1077uLL) && YS::PROGRESS::CheckFlag(0x2449uLL) && YS::PROGRESS::CheckFlag(0x2C3DuLL) )
    v0 = 1;
  return v0;
}


---
---
---
appears in:
ard\es00\es_s.bdscript
---
---
---
example usage from ard\es00\es_s.bdscript
TR3:
 gosub 4, L39
 syscall 0, 101 ; trap_progress_is_secret_movie (0 in, 1 out)
 jz L30
 pushImm 7
 pushImm 0
 syscall 1, 41 ; trap_signal_call (2 in, 0 out)
 jmp L38
