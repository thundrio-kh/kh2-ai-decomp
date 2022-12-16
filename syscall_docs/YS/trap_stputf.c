---
---
---
name: trap_stputf
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
push unk1 ; (unknown)  (fetchValue: 152,4) (gosub: 4, L118)
push unk2 ; (unknown)  (pushFromPAi: L2384 ; ___ai 'pos y' (L2384),L2665 ; ___ai 'dist' (L2665),L8472 ; ___ai 'rc rush guard time' (L8472))
syscall 0, 25 ; trap_stputf (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6DEC) ----------------------------------------------------
void __fastcall YS::trap_stputf(BD_VALUE_16 *args)
{
  if ( YS::DBGWIN::IsActiveSubMenu(3) || YS::DBGWIN::IsActiveSubMenu(7) )
    YS::DBGWIN::StatusPrintf(
      "[%s]%s = %f\n",
      (const char *)*(unsigned int *)(unsigned int)YS::VM::Current,
      (const char *)*(unsigned int *)&(*args)[4],
      *(float *)&(*args)[0]);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//BASIC
---
---
---
appears in:
gumimenu\event\gumi.bdscript
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\N_HB590_BTL\n_hb.bdscript ((N) Sephiroth (BTL) (HB))
---
---
---
example usage from gumimenu\event\gumi.bdscript
L879:
 popToSp 0
 pushFromFSp 0
 fetchValue 0
 syscall 9, 33 ; ?
 pushFromPSp 16
 pushImmf 1
 gosub 12, L504
 pushFromFSp 0
 fetchValue 0
 pushImm 2
 pushFromPSp 16
 syscall 9, 31 ; ?
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushFromPSp 16
 syscall 9, 23 ; ?
 pushFromPSp 16
 pushImmf 1
 gosub 12, L504
 pushFromFSp 0
 fetchValue 0
 pushImm 4
 pushFromPSp 16
 syscall 9, 31 ; ?
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushFromPSp 16
 syscall 9, 22 ; ?
 pushFromPSp 16
 fetchValue 4
 pushFromPAi L2384 ; ___ai 'pos y' (L2384)
 syscall 0, 25 ; trap_stputf (2 in, 0 out)
 pushFromPWp W0
 fetchValue 0
 syscall 9, 24 ; ?
 ret 
