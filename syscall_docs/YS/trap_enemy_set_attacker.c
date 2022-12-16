---
---
---
name: trap_enemy_set_attacker
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
push unk1 ; (unknown)  (memcpyToSp: 16, 16)
push unk2 ; (unknown)  (pushFromPSp: 16)
syscall 2, 97 ; trap_enemy_set_attacker (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PIERROT::set_attacker(YS::PIERROT_6 *const this, YS::OBJ_138 *obj)
/----- (00000000004F3E18) ----------------------------------------------------
void __fastcall YS::trap_enemy_set_attacker(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r31
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 0x10) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_enemy()",
      "common",
      "../yasui/libys/enemy.h",
      45LL,
      "TOENEMY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/enemy.h", 45);
  }
  v5 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v5 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v5 & 3) != 0 )
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
  YS::PIERROT::set_attacker((YS::PIERROT_6 *const)v4, (YS::OBJ_138 *)*(unsigned int *)(v5 + 4));
}
// 4F3E3C: variable 'back_chain' is possibly undefined
->
/----- (000000000047B160) ----------------------------------------------------
void __fastcall YS::PIERROT::set_attacker(YS::PIERROT_6 *const this, YS::OBJ_138 *obj)
{
  *(_DWORD *)&(*this)[2788] = (_DWORD)obj;
  if ( (unsigned int)YS::OBJ::is_exist(obj) )
  {
    if ( *(_DWORD *)&(*obj)[944] == 1 )
      *(_DWORD *)&(*this)[2796] = (_DWORD)obj;
  }
}


---
---
---
appears in:
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
---
---
---
example usage from obj\M_EX590\m_ex.bdscript
L5246:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 gosub 4, L2390
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 16384
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L3331
 pushFromFSp 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L414
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 fetchValue 28
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 pushFromFSp 0
 pushImm 28
 add 
 pushImm 142
 memcpy 0
 pushFromFSp 0
 gosub 4, L2390
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 2, 97 ; trap_enemy_set_attacker (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 209 ; trap_obj_dead (1 in, 0 out)
 ret 
