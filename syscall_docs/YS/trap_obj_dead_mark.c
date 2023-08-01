---
---
---
name: trap_obj_dead_mark
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::BTLOBJ)  (An object)
syscall 1, 328 ; trap_obj_dead_mark (1 in, 0 out)
---
---
---
description: Marks an object as dead
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::sys_dead(YS::BTLOBJ *const this)
/----- (0000000000501C6C) ----------------------------------------------------
void __fastcall YS::trap_obj_dead_mark(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
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
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 2) == 0 )
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
  YS::BTLOBJ::sys_dead((YS::BTLOBJ *const)v3);
}
// 501C8C: variable 'back_chain' is possibly undefined
->
/----- (0000000000412438) ----------------------------------------------------
void __fastcall YS::BTLOBJ::sys_dead(YS::BTLOBJ *const this)
{
  YS::UNIT_GROUP_8 *v2; // r3

  if ( (*(_DWORD *)&this->baseclass_0[2040] & 4) == 0 )
  {
    v2 = (YS::UNIT_GROUP_8 *)*(unsigned int *)&this->baseclass_0[2072];
    if ( (_DWORD)v2 )
      YS::UNIT_GROUP::dead_enemy(v2, (YS::BTLOBJ_88 *)this);
    *(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 4u;
    YS::STOP::end_all((YS::STOP *const)(unsigned int)((_DWORD)this + 1304));
  }
}


---
---
---
appears in:
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX870\m_ex.bdscript ((M) Sorcerer v2 - Cubes?)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
---
---
---
example usage from obj\M_EX350_01\m_ex.bdscript
L2510:
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 8
 gosub 8, L2552
 pushFromFSp 0
 fetchValue 4
 pushImmf 30
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushImmf 30
 gosub 8, L2552
 pushFromFSp 4
 jz L2545
 pushFromFSp 0
 syscall 1, 328 ; trap_obj_dead_mark (1 in, 0 out)
 jmp L2545
