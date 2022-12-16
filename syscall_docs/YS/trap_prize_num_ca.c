---
---
---
name: trap_prize_num_ca
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
syscall 1, 341 ; trap_prize_num_ca (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __cdecl YS::PRIZE_CA::GetAppearNum()
/----- (000000000050B6A4) ----------------------------------------------------
void __fastcall YS::trap_prize_num_ca(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::PRIZE_CA::GetAppearNum();
}
->
/----- (000000000048508C) ----------------------------------------------------
int __cdecl YS::PRIZE_CA::GetAppearNum()
{
  int result; // r3

  if ( YS::PrizeCa )
    result = *(_DWORD *)(*((unsigned int *)YS::PrizeCa + 637) + 0x34LL);
  else
    result = 0;
  return result;
}
// 7FE81C: using guessed type void *__ptr32 YS::PrizeCa;


---
---
---
appears in:
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
---
---
---
example usage from obj\B_CA050\b_ca.bdscript
L6551:
 popToSp 0
 syscall 1, 341 ; trap_prize_num_ca (0 in, 1 out)
 pushImm 200
 sub 
 msbi 
 jz L6570
 pushFromFSp 0
 pushFromPAi L11290 ; ___ai 'atk_collect' (L11290)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L6570
