---
---
---
name: trap_unit_get_enemy_num
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
syscall 1, 320 ; trap_unit_get_enemy_num (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
int __cdecl YS::UNIT_GROUP::GetEnemyNum()
/----- (000000000050A45C) ----------------------------------------------------
void __fastcall YS::trap_unit_get_enemy_num(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::UNIT_GROUP::GetEnemyNum();
}
->
/----- (00000000004B1C7C) ----------------------------------------------------
int __cdecl YS::UNIT_GROUP::GetEnemyNum()
{
  int result; // r3
  __int64 v1; // r5
  __int64 v2; // ctr
  __int64 v3; // r6

  result = 0;
  if ( YS::GroupPt > 0 )
  {
    v1 = 0LL;
    v2 = (unsigned int)YS::GroupPt;
    do
    {
      v3 = (int)v1;
      v1 += 56LL;
      result += *(int *)((char *)&dword_2AAF408 + v3);
      --v2;
    }
    while ( v2 );
  }
  return result;
}
// 7FE858: using guessed type int YS::GroupPt;
// 2AAF408: using guessed type int dword_2AAF408;


---
---
---
appears in:

---
---
---
example usage from NA

