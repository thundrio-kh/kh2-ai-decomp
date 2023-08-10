---
---
---
name: trap_unit_get_enemy_num
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
syscall 1, 320 ; trap_unit_get_enemy_num (0 in, 1 out)
pop num_enemies ; (int) 
---
---
---
description: Get the number of enemies currently spawned
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
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
---
---
---
example usage from obj\F_MU080\f_mu.bdscript
L103:
 popToSp 0
 pushFromFSp 0
 gosub 4, L128
 syscall 1, 320 ; trap_unit_get_enemy_num (0 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L124
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 jmp L124
