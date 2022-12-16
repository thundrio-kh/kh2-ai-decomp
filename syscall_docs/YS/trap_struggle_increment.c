---
---
---
name: trap_struggle_increment
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
push unk1 ; (unknown)  (pushFromFSpVal: 8)
push unk2 ; (unknown)  (pushImm: 0,1)
syscall 4, 42 ; trap_struggle_increment (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::STRUGGLE::Increment(int stage, int result)
/----- (00000000004F6A70) ----------------------------------------------------
void __fastcall YS::trap_struggle_increment(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::STRUGGLE::Increment(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004A38F4) ----------------------------------------------------
__int64 __fastcall YS::STRUGGLE::Increment(int stage, int result)
{
  return YS::STRUGGLE::increment((YS::STRUGGLE *const)((unsigned int)SaveRam + 16324), stage, result);
}


---
---
---
appears in:
msn\TT04_MS00\tt04.bdscript
msn\TT04_MS01\tt04.bdscript
msn\TT04_MS02\tt04.bdscript
---
---
---
example usage from msn\TT04_MS00\tt04.bdscript
L172:
 popToSp 0
 pushFromFSpVal 8
 pushImm 0
 syscall 4, 42 ; trap_struggle_increment (2 in, 1 out)
 popToSp 4
 pushFromFSpVal 12
 pushImm 0
 sub 
 msbi 
 dup 
 jz L199
 pushFromFSpVal 12
 syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
 eqz 
 eqzv 
