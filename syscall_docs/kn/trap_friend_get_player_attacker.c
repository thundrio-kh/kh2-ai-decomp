---
---
---
name: trap_friend_get_player_attacker
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
push unk1 ; (unknown)  (pushImm: 0)
syscall 10, 33 ; trap_friend_get_player_attacker (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int64 __fastcall kn::Friend::getPlayerAttacker(int n)
void __fastcall kn::Friend::removePlayerAttacker(YS::OBJ_28 *obj, bool remove_old)
/----- (0000000000613260) ----------------------------------------------------
void __fastcall kn::trap_friend_get_player_attacker(BD_VALUE_22 *args)
{
  int v2; // r30
  YS::OBJ_28 *v3; // r3

  v2 = *(_DWORD *)args;
  v3 = (YS::OBJ_28 *)kn::Friend::getPlayerAttacker(-1);
  *(_DWORD *)args = (_DWORD)v3;
  if ( v2 )
    kn::Friend::removePlayerAttacker(v3, 1);
}

//COMPLICATED kn::Friend::getPlayerAttacker kn::Friend::removePlayerAttacker
->
/----- (00000000000E5AE0) ----------------------------------------------------
unsigned __int64 __fastcall kn::Friend::getPlayerAttacker(int n)
{
  unsigned __int64 result; // r3

  if ( !kn::Friend::playerAttackerNum )
    return 0LL;
  if ( n >= 0 )
  {
    if ( kn::Friend::playerAttackerNum > n )
      result = (unsigned int)kn::Friend::playerAttacker[n];
    else
      result = 0LL;
  }
  else if ( kn::Friend::playerAttackerNum + n >= 0 )
  {
    result = (unsigned int)kn::Friend::playerAttacker[kn::Friend::playerAttackerNum + n];
  }
  else
  {
    result = 0LL;
  }
  return result;
}
// A1CAE0: using guessed type int kn::Friend::playerAttacker[];
// A1CB00: using guessed type int kn::Friend::playerAttackerNum;


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
L8205:
 popToSp 4
 popToSp 0
 pushImm 0
 syscall 10, 33 ; trap_friend_get_player_attacker (1 in, 1 out)
 pushImm 0
 sub 
 neqz 
 jz L8232
 pushFromFSp 4
 pushImm 4
 gosub 4, L7732
 popToSp 4
 jmp L8232
