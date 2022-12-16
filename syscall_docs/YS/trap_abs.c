---
---
---
name: trap_abs
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
push unk1 ; (unknown)  (sub: )
syscall 0, 22 ; trap_abs (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B6EE8) ----------------------------------------------------
void __fastcall YS::trap_abs(BD_VALUE_16 *args)
{
  *(_DWORD *)args += (*(int *)args >> 31) & (-*(_DWORD *)args - *(_DWORD *)args);
}

//BASIC
---
---
---
appears in:
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
---
---
---
example usage from obj\F_TR150\f_tr.bdscript
L2016:
 jz L2056
 pushFromFSpVal 136
 gosub 8, L1576
 fetchValue 4
 sub 
 pushImm 24
 add 
 pushImm 12
 add 
 pushImm 24
 mod 
 popToSp 8
 pushFromFSp 8
 pushImm 12
 sub 
 syscall 0, 22 ; trap_abs (1 in, 1 out)
 pushImm 3
 sub 
 msb 
 popToSp 4
 jmp L2056
