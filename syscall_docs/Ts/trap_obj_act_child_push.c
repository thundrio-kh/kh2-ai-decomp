---
---
---
name: trap_obj_act_child_push
---
---
---
category: action
---
---
---
documentation level: untested
---
---
---
push act ; (YS::ACT_86 *)  (An action object)
push act ; (label)  (Label of action to push)
syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
---
---
---
description: Push the action of a child object to the action table
---
---
---
decompiled code:
void __fastcall YS::ACT::child_push(YS::ACT_86 *const this, const char *label)
/----- (0000000000627544) ----------------------------------------------------
void __fastcall Ts::trap_obj_act_child_push(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  YS::ACT::child_push(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4]);
}
// 627568: variable 'back_chain' is possibly undefined
->
/----- (0000000000400ABC) ----------------------------------------------------
void __fastcall YS::ACT::child_push(YS::ACT_86 *const this, const char *label)
{
  int v3; // r4
  unsigned __int64 v4; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  YS::ACT::push(this, label);
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)&(*this)[4] == *(_DWORD *)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_empty()",
      "common",
      "../yasui/queue.h",
      74LL,
      "look_last",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/queue.h", 74);
    v3 = *(_DWORD *)this;
  }
  v4 = (unsigned int)((_DWORD)this + 8 * ((v3 + 15) % 16) + 12);
  *(_DWORD *)v4 |= 1u;
}
// 400AE8: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L24594: ;___label for action pushFromPAi L28172 ; ___ai atk_dance_l
 popToSp 0
 pushFromFSp 0
 gosub 4, L9952
 eqz 
 jz L24708
 pushFromFSp 0
 pushFromPAi L28239 ; ___ai atk_dance_start (L28239)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28253 ; ___ai atk_dance5 (L28253)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28259 ; ___ai atk_dance2 (L28259)
 syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28265 ; ___ai atk_dance_wait (L28265)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27679 ; ___ai atk_dance9 (L27679)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27696 ; ___ai atk_dance1 (L27696)
 syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28265 ; ___ai atk_dance_wait (L28265)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27702 ; ___ai atk_dance7 (L27702)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27720 ; ___ai atk_dance8 (L27720)
 syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L28265 ; ___ai atk_dance_wait (L28265)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27751 ; ___ai atk_dance6 (L27751)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L27751 ; ___ai atk_dance6 (L27751)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 fetchValue 16
 pushImm -1
 sub 
 eqz 
 jz L24694
 pushFromFSp 0
 pushFromPAi L27770 ; ___ai atk_air_fight (L27770)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L24706
