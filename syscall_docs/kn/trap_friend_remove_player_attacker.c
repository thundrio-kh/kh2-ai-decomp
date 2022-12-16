---
---
---
name: trap_friend_remove_player_attacker
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
push unk1 ; (unknown)  (fetchValue: 4)
push unk2 ; (unknown)  (pushImm: 1)
syscall 10, 34 ; trap_friend_remove_player_attacker (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::removePlayerAttacker(YS::OBJ_28 *obj, bool remove_old)
/----- (00000000006132B8) ----------------------------------------------------
void __fastcall kn::trap_friend_remove_player_attacker(BD_VALUE_22 *args)
{
  kn::Friend::removePlayerAttacker((YS::OBJ_28 *)(*args)[0], (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0);
}
->
/----- (00000000000E224C) ----------------------------------------------------
void __fastcall kn::Friend::removePlayerAttacker(YS::OBJ_28 *obj, bool remove_old)
{
  __int64 v2; // r7
  int v3; // r5
  int v4; // r9
  __int64 v5; // r7
  __int64 v6; // r4
  __int64 v7; // ctr
  __int64 v8; // r7
  __int64 v9; // r3
  __int64 v10; // r8
  __int64 v11; // r4
  __int64 v12; // ctr
  __int64 v13; // r9
  char *v14; // r10

  v2 = 0LL;
  v3 = kn::Friend::playerAttackerNum;
  if ( kn::Friend::playerAttackerNum > 0 )
  {
    v4 = 0;
    do
    {
      if ( kn::Friend::playerAttacker[v4] == (_DWORD)obj )
        break;
      ++v2;
      ++v4;
    }
    while ( kn::Friend::playerAttackerNum > (int)v2 );
  }
  if ( kn::Friend::playerAttackerNum > (int)v2 )
  {
    if ( remove_old )
    {
      v9 = v2 + 1;
      if ( kn::Friend::playerAttackerNum > (int)v2 + 1 )
      {
        v10 = 4 * v9;
        v11 = 4LL;
        v12 = (unsigned int)(kn::Friend::playerAttackerNum - v9);
        do
        {
          v13 = (int)v10;
          v10 += 4LL;
          v14 = (char *)kn::Friend::playerAttacker + (int)v11;
          v11 += 4LL;
          *((_DWORD *)v14 - 1) = *(int *)((char *)kn::Friend::playerAttacker + v13);
          --v12;
        }
        while ( v12 );
      }
      kn::Friend::playerAttackerNum = v3 - v2 - 1;
    }
    else
    {
      v5 = v2 + 1;
      if ( kn::Friend::playerAttackerNum > (int)v5 )
      {
        v6 = 4 * v5;
        v7 = (unsigned int)(kn::Friend::playerAttackerNum - v5);
        do
        {
          v8 = (int)v6;
          v6 += 4LL;
          *(int *)((char *)&kn::Friend::playerAttacker[-1] + v8) = *(int *)((char *)kn::Friend::playerAttacker + v8);
          --v7;
        }
        while ( v7 );
      }
      kn::Friend::playerAttackerNum = v3 - 1;
    }
  }
}
// A1CAE0: using guessed type int kn::Friend::playerAttacker[];
// A1CB00: using guessed type int kn::Friend::playerAttackerNum;


---
---
---
appears in:
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EX350\p_ex.bdscript
L8674:
 popToSp 0
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L8704
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L7603
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 1
 syscall 10, 34 ; trap_friend_remove_player_attacker (2 in, 0 out)
 jmp L8704
