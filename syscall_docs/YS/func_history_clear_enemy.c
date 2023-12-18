---
---
---
name: func_history_clear_enemy
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
syscall 1, 44 ; func_history_clear_enemy (0 in, 0 out)
---
---
---
description: Appears to clear out the history (cache?) of enemies in the current room.
---
---
---
decompiled code:
void __cdecl YS::UNIT_GROUP::ResetEnemy()
/----- (0000000000503888) ----------------------------------------------------
void __fastcall YS::func_history_clear_enemy(BD_VALUE_21 *args)
{
  YS::UNIT_GROUP::ResetEnemy();
}
->
/----- (00000000004B26CC) ----------------------------------------------------
void __cdecl YS::UNIT_GROUP::ResetEnemy()
{
  __int64 v0; // ctr
  __int64 v1; // r5
  __int64 v2; // r6

  if ( YS::GroupPt > 0 )
  {
    v0 = (unsigned int)YS::GroupPt;
    v1 = 0LL;
    do
    {
      v2 = (int)v1;
      v1 += 56LL;
      *(int *)((char *)&dword_2AAF408 + v2) = *(int *)((char *)&dword_2AAF40C + v2);
      --v0;
    }
    while ( v0 );
  }
  YS::HISTORY::clear((YS::HISTORY_0 *const)&YS::HISTORY::Enemy);
}
// 7FE858: using guessed type int YS::GroupPt;
// 2A97120: using guessed type int YS::HISTORY::Enemy;
// 2AAF408: using guessed type int dword_2AAF408;
// 2AAF40C: using guessed type int dword_2AAF40C;


---
---
---
appears in:
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
---
---
---
example usage from obj\B_EX240\b_ex.bdscript
L4498:
 syscall 1, 44 ; func_history_clear_enemy (0 in, 0 out)
 pushImm 152
 syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L204
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L204
 ret 
