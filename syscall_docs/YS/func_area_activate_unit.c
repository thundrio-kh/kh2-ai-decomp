---
---
---
name: func_area_activate_unit
---
---
---
category: spawn
---
---
---
documentation level: untested
---
---
---
push unit ; (string)  (name of spawn file to be activated (ie 'f01_'))
syscall 1, 45 ; func_area_activate_unit (1 in, 0 out)
---
---
---
description: Activates the spawn file with the passed in name.  
---
---
---
decompiled code:
void __fastcall YS::UNIT::Activate(const char *unit)
/----- (00000000005038AC) ----------------------------------------------------
void __fastcall YS::func_area_activate_unit(BD_VALUE_21 *args)
{
  YS::UNIT::Activate((const char *)(*args)[0]);
}
->
/----- (00000000004AEB90) ----------------------------------------------------
void __fastcall YS::UNIT::Activate(const char *unit)
{
  int v1; // r5
  char v2; // r6
  int v3; // r8
  int v4; // r7
  int v5; // r3
  __int64 v6; // r21
  int v7; // r22
  int v8; // r24
  unsigned int v9; // r30
  int *v10; // r31
  __int64 back_chain; // [sp+0h] [-D0h]

  v1 = unit[1];
  v2 = *unit;
  v3 = unit[3];
  v4 = unit[2];
  v5 = YS::UnitPt;
  v6 = 0LL;
  if ( YS::UnitPt > 0 )
  {
    v7 = 0;
    v8 = v2 | (v1 << 8) | (v4 << 16) | (v3 << 24);
    v9 = 44757076;
    v10 = YS::Unit;
    do
    {
      if ( YS::Unit[v7] == v8 )
      {
        if ( (*(_DWORD *)v9 & 2) == 0 )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "Unit[i].Flag.check(FLAG_DISABLE)",
            "common",
            "C:\\hd25\\kingdom2\\yasui\\libys\\unit.cpp",
            187LL,
            "Activate",
            (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\unit.cpp", 187);
        }
        YS::UNIT::activate((YS::UNIT_2 *const)(unsigned int)v10);
        v5 = YS::UnitPt;
      }
      ++v6;
      LODWORD(v10) = (_DWORD)v10 + 12;
      v9 += 12;
      v7 += 3;
    }
    while ( (int)v6 < v5 );
  }
}
// 4AEC70: variable 'back_chain' is possibly undefined
// 7FE850: using guessed type int YS::UnitPt;
// 2AAF050: using guessed type int YS::Unit[];


---
---
---
appears in:
ard\wi00\wi00.bdscript
---
---
---
example usage from ard\wi00\wi00.bdscript
TR3:
 pushImm 13318
 syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
 jz L27
 pushFromPAi L180 ; ___ai 'c02_' (L180)
 syscall 1, 45 ; func_area_activate_unit (1 in, 0 out)
 jmp L31
