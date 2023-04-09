---
---
---
name: trap_attack_is_strike
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push attack ; (YS::ATTACK_MAGIC *)  (An attack object)
push btlobj ; (YS::BTLOBJ *)  (An battle object)
syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
pop result ; (bool) 
---
---
---
description: Checks if an attack is striking an object
---
---
---
decompiled code:
bool __fastcall YS::ATTACK::is_strike(YS::ATTACK_10 *const this, YS::BTLOBJ *obj)
/----- (00000000004F4CFC) ----------------------------------------------------
void __fastcall YS::trap_attack_is_strike(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  YS::ATTACK_10 *v3; // r28
  unsigned __int64 v4; // r29
  __int64 v5; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)&(*args)[4];
  v3 = (YS::ATTACK_10 *)(*args)[0];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v5 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v5 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = YS::ATTACK::is_strike(v3, (YS::BTLOBJ *)v5);
}
// 4F4D28: variable 'back_chain' is possibly undefined
->
/----- (0000000000406F6C) ----------------------------------------------------
bool __fastcall YS::ATTACK::is_strike(YS::ATTACK_10 *const this, YS::BTLOBJ *obj)
{
  int v5; // r3
  YS::OBJ_128 *v6; // r3

  if ( YS::GAMEOVER::IsExec() )
    return 0LL;
  if ( !(unsigned int)YS::ATTACK_CHECK::is_strike((YS::ATTACK_CHECK_39 *const)(unsigned int)((_DWORD)obj + 2640), this) )
    return 0LL;
  v5 = *(unsigned __int8 *)(*(unsigned int *)&(*this)[40] + 4LL);
  if ( v5 == 5 || v5 == 6 )
    return 1LL;
  if ( !(unsigned int)YS::OBJ::is_hit_attack((YS::OBJ_128 *const)obj) )
    return 0LL;
  v6 = (YS::OBJ_128 *)*(unsigned int *)&(*this)[12];
  if ( (_DWORD)v6 == (_DWORD)obj || *(_DWORD *)&(*this)[16] == (_DWORD)obj )
    return 0LL;
  if ( ((unsigned __int8)(*this)[45] & (1 << *(_DWORD *)&obj->baseclass_0[944])) == 0 )
    return 0LL;
  return !(unsigned int)YS::OBJ::is_exist(v6)
      || !(unsigned int)YS::OBJ::is_stop((YS::OBJ_128 *const)*(unsigned int *)&(*this)[12]);
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
---
---
---
example usage from limit\aladdin\limi.bdscript
L4188:
 jz L4406
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
 jz L4398
 pushImmf 1000
 pushImmf 1000
 gosub 12, L4480
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf -2000
 pushImmf 2000
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 68
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 pushFromPSp 16
 syscall 6, 9 ; trap_target_dist (2 in, 1 out)
 popToSp 36
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushFromFSp 36
 subf 
 pushImmf 0
 pushImmf 80
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 popToSp 36
 pushFromPSp 16
 pushFromFSp 36
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushImm 5
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushFromPSp 16
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromPSp 16
 pushImm 99
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L4398
