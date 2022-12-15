---
---
---
name: func_history_clear_enemy
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
syscall 1, 44 ; func_history_clear_enemy (0 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

