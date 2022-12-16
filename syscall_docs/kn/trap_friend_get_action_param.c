---
---
---
name: trap_friend_get_action_param
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPSpVal: 0)
push unk2 ; (unknown)  (pushImm: 111,113,120,121,40,41)
syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
unsigned __int64 __fastcall kn::FriendPersonality::getActionParam(kn::FriendPersonality_0 *const this, int id)
/----- (00000000006132F0) ----------------------------------------------------
void __fastcall kn::trap_friend_get_action_param(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::FriendPersonality_0 *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  *(_DWORD *)args = kn::FriendPersonality::getActionParam(v4, *(_DWORD *)&(*args)[4]);
}
// 613314: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::FriendPersonality::getActionParam
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (00000000000E7B90) ----------------------------------------------------
unsigned __int64 __fastcall kn::FriendPersonality::getActionParam(kn::FriendPersonality_0 *const this, int id)
{
  unsigned __int64 result; // r3
  __int64 v4; // r5
  int v5; // r6
  unsigned int v6; // r7
  int v7; // r5
  int i; // r8

  result = 0LL;
  v4 = *(unsigned int *)&(*this)[8];
  if ( (_DWORD)v4 )
  {
    v5 = 0;
    v6 = v4 + *(_DWORD *)(v4 + 164);
    v7 = *(_DWORD *)(v4 + 160);
    if ( v7 > 0 )
    {
      for ( i = 0; *(_DWORD *)(v6 + (__int64)i) != id; i += 128 )
      {
        if ( ++v5 >= v7 )
          return result;
      }
      result = v6 + (v5 << 7);
    }
  }
  return result;
}


---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_TR000\p_tr.bdscript ((P) Tron)
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L803:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 8, L1460
 pushFromPWp W36
 syscall 1, 5 ; trap_act_table_init (1 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7661 ; ___ai 'appear' (L7661)
 pushImm 100
 pushImm L1485
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7706 ; ___ai 'leave' (L7706)
 pushImm 196908
 pushImm L1747
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7709 ; ___ai 'dead' (L7709)
 pushImm 196908
 pushImm L1807
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7613 ; ___ai 'freeze' (L7613)
 pushImm 100
 pushImm L1901
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7748 ; ___ai 'event' (L7748)
 pushImm 196908
 pushImm L1918
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L1923
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7729 ; ___ai 'idle' (L7729)
 pushImm 100
 pushImm L1938
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7571 ; ___ai 'idle_time' (L7571)
 pushImm 100
 pushImm L2212
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7576 ; ___ai 'footwork' (L7576)
 pushImm 100
 pushImm L2268
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7598 ; ___ai 'mode_battle' (L7598)
 pushImm 100
 pushImm L2284
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7591 ; ___ai 'mode_revenge' (L7591)
 pushImm 100
 pushImm L2547
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7604 ; ___ai 'mode_battle_boss' (L7604)
 pushImm 100
 pushImm L2589
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7617 ; ___ai 'mode_revenge_boss' (L7617)
 pushImm 100
 pushImm L2655
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7632 ; ___ai 'revenge' (L7632)
 pushImm 65836
 pushImm L2721
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7641 ; ___ai 'darkshield' (L7641)
 pushImm 65836
 pushImm L2780
 pushImm L3920
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L4060
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7655 ; ___ai 'darkcircle' (L7655)
 pushImm 65836
 pushImm L4442
 pushImm L7447
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L7459
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W36
 pushFromPAi L7703 ; ___ai 'cure' (L7703)
 pushImm 100
 pushImm L7511
 pushImm L7542
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L7554
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromFSp 0
 pushFromPWp W36
 syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
 pushImmf 0
 popToSpVal 20
 pushImm 0
 popToSpVal 24
 pushFromFSp 0
 pushImm 111
 syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)
 popToSp 8
 pushFromFSp 8
 fetchValue 8
 popToSpVal 28
 pushFromFSp 0
 pushImm 113
 syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)
 popToSp 8
 pushFromFSp 8
 fetchValue 8
 popToSpVal 32
 pushFromFSp 0
 syscall 1, 222 ; trap_obj_get_entry_id (1 in, 1 out)
 pushImm 2257
 sub 
 eqz 
 jz L1459
 pushFromFSp 0
 pushImm 9
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 jmp L1459
