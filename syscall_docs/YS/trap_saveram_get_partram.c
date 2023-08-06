---
---
---
name: trap_saveram_get_partram
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
push part ; (int)  (Part to get)
syscall 0, 61 ; trap_saveram_get_partram (1 in, 1 out)
push partram ; (YS::PARTRAM *)
---
---
---
description: Gets a specific part of the saveram
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_partram(YS::SAVERAM_BATTLE *const this, __int64 part)
/----- (00000000004B82AC) ----------------------------------------------------
void __fastcall YS::trap_saveram_get_partram(BD_VALUE_16 *args)
{
  int v2; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = YS::SAVERAM_BATTLE::get_partram((YS::SAVERAM_BATTLE *const)&unk_8F7240, *(int *)args);
  *(_DWORD *)args = v2;
  if ( !v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      407LL,
      "trap_saveram_get_partram",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 407);
  }
}
// 4B82E4: variable 'back_chain' is possibly undefined

//CHEAT YS::SAVERAM_BATTLE::get_partram
->
/----- (0000000000496AB0) ----------------------------------------------------
unsigned __int64 __fastcall YS::SAVERAM_BATTLE::get_partram(YS::SAVERAM_BATTLE *const this, __int64 part)
{
  int v2; // r31
  int v3; // r3
  unsigned __int64 result; // r3

  v2 = (int)this;
  v3 = YS::OBJPART::GetSaveRamPart(part);
  if ( v3 )
    result = (unsigned int)(v2 + 276 * v3 - 276);
  else
    result = 0LL;
  return result;
}


---
---
---
appears in:
ard\mu07\mu_g.bdscript
ard\tr03\tr_g.bdscript
ard\tr05\tr_g.bdscript
ard\tt04\tt04.bdscript
ard\tt06\tt_a.bdscript
ard\tt08\tt_a_0.bdscript
ard\tt08\tt_a_1.bdscript
ard\tt32\tt_l.bdscript
---
---
---
example usage from ard\mu07\mu_g.bdscript
TR2:
 pushImm 6
 syscall 0, 61 ; trap_saveram_get_partram (1 in, 1 out)
 popToSp 0
 pushFromFSp 0
 pushImm 8
 syscall 0, 96 ; trap_partram_add_ap (2 in, 0 out)
 pushFromFSp 0
 pushImm 207
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 434
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 435
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 417
 pushImm 1
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 pushFromFSp 0
 pushImm 408
 pushImm 0
 syscall 0, 99 ; trap_partram_add_ability (3 in, 0 out)
 ret 
