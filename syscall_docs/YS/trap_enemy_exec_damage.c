---
---
---
name: trap_enemy_exec_damage
---
---
---
category: enemy
---
---
---
documentation level: untested
---
---
---
push enemy_obj ; (YS::BTLOBJ *)  (A battle object)
push damage ; (YS::DAMAGE_4 *)  (A damage object)
syscall 2, 0 ; trap_enemy_exec_damage (2 in, 0 out)
---
---
---
description: executes damage
---
---
---
decompiled code:

/----- (00000000004F2F38) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_damage(BD_VALUE_19 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r29
  unsigned int *v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = (unsigned int *)*(unsigned int *)(v1 + 4);
  if ( (v3[354] & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*v3 + 0x68LL))();
}
// 4F2F5C: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\F_MU030\f_mu.bdscript ((F) ??? (MU))
---
---
---
example usage from obj\F_MU030\f_mu.bdscript
L31:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 syscall 2, 0 ; trap_enemy_exec_damage (2 in, 0 out)
 ret 
