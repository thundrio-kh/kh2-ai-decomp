---
---
---
name: trap_obj_dump
---
---
---
category: unused
---
---
---
documentation level: complete
---
---
---
push obj ; (YS::OBJ_125 *)  (An object)
syscall 1, 122 ; trap_obj_dump (1 in, 0 out)
---
---
---
description: likely printed the name of an object, but does nothing in the production versions of the game
---
---
---
decompiled code:
const char *__fastcall YS::OBJ::get_entry_name(YS::OBJ_125 *const this)
/----- (00000000005090F0) ----------------------------------------------------
void __fastcall YS::trap_obj_dump(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  __int64 v2; // r29
  unsigned __int64 v3; // r31
  const char *v4; // r3
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 back_chain; // [sp+0h] [-A0h]

  v1 = *(unsigned int *)args;
  v2 = *(unsigned int *)(unsigned int)YS::VM::Current;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)(v1 + 4));
  printf((unsigned int)"[%s] OBJ#dump : %s\n", v2, (__int64)v4, v9, v8, v7, v6, v5);
}
// 50912C: variable 'back_chain' is possibly undefined
// 509208: variable 'v9' is possibly undefined
// 509208: variable 'v8' is possibly undefined
// 509208: variable 'v7' is possibly undefined
// 509208: variable 'v6' is possibly undefined
// 509208: variable 'v5' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

//CHEAT YS::OBJ::get_entry_name
->
/----- (000000000045DC70) ----------------------------------------------------
const char *__fastcall YS::OBJ::get_entry_name(YS::OBJ_125 *const this)
{
  return (const char *)(unsigned int)(*(_DWORD *)&(*this)[8] + 8);
}


---
---
---
appears in:
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\riku\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
---
---
---
example usage from limit\goofy2\limi.bdscript
L400:
 pushFromFSp 20
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L419
 pushFromFSp 20
 gosub 12, L655
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 122 ; trap_obj_dump (1 in, 0 out)
 jmp L419
