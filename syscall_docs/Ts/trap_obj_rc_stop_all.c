---
---
---
name: trap_obj_rc_stop_all
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
push obj ; (YS::OBJ_125) (An object)
push id ; (int)  (unknown)
push time ; (float)  (Time that object should remain stopped)
push force ; (bool)  (If the stop should be forced?)
syscall 6, 46 ; trap_obj_rc_stop_all (4 in, 0 out)
---
---
---
description: Stop the object from doing anything else due to an RC
---
---
---
decompiled code:
YS::OBJ_132 *__fastcall YS::OBJ::Each(YS::OBJ_132 *obj)
__int64 __fastcall YS::OBJ::is_stop(YS::OBJ_128 *const this)
void __fastcall YS::OBJ::stop(YS::OBJ_125 *const this, int id, double time)
/----- (00000000006272A0) ----------------------------------------------------
void __fastcall Ts::trap_obj_rc_stop_all(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r30
  int v5; // r29
  YS::OBJ_132 *v6; // r28
  int v7; // r30
  YS::OBJ_132 *v8; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v4 = *(unsigned int *)&(*args)[12];
  v5 = *(_DWORD *)(v2 + 4);
  if ( !(_DWORD)v4 )
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
  if ( (v4 & 3) != 0 )
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
  v6 = 0LL;
  v7 = *(_DWORD *)(v4 + 4);
  while ( 1 )
  {
    v8 = YS::OBJ::Each(v6);
    v6 = v8;
    if ( !(_DWORD)v8 )
      break;
    if ( (_DWORD)v8 != v5
      && (_DWORD)v8 != v7
      && ((*(_DWORD *)&(*v8)[1416] & 0x40) == 0
       || (unsigned int)YS::OBJ::is_stop((YS::OBJ_128 *const)*(unsigned int *)&(*v8)[2548])) )
    {
      YS::OBJ::stop(v6, *(_DWORD *)&(*args)[4], *(float *)&(*args)[8]);
    }
  }
}
// 6272C4: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::Each YS::OBJ::is_stop YS::OBJ::stop
->
/----- (000000000046DAC0) ----------------------------------------------------
YS::OBJ_132 *__fastcall YS::OBJ::Each(YS::OBJ_132 *obj)
{
  unsigned __int64 v1; // r31

  LODWORD(v1) = (_DWORD)obj;
  do
  {
    if ( (_DWORD)v1 )
      v1 = *(unsigned int *)(unsigned int)(v1 + 2228);
    else
      v1 = (unsigned int)YS::ObjList;
  }
  while ( (_DWORD)v1 && YS::OBJ::is_leave((YS::OBJ_128 *const)v1) );
  return (YS::OBJ_132 *)v1;
}
// 2A9FC18: using guessed type int YS::ObjList;


->
/----- (0000000000464944) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_stop(YS::OBJ_128 *const this)
{
  __int64 v2; // r30
  int v3; // r4

  v2 = 0LL;
  if ( (unsigned int)YS::STOP::is_stop((YS::STOP *const)(unsigned int)((_DWORD)this + 1304))
    || (v3 = *(_DWORD *)&(*this)[1416], (v3 & 4) == 0) && (v3 & 0x40) == 0 && YS::SUMMON::GetMode() == 1
    || (*(_DWORD *)&(*this)[264] & 0x400) != 0
    || worldmap::Libretto::IsExistObj() )
  {
    v2 = 1LL;
  }
  return v2;
}


->
/----- (0000000000462404) ----------------------------------------------------
void __fastcall YS::OBJ::stop(YS::OBJ_125 *const this, int id, double time)
{
  if ( (*(_DWORD *)&(*this)[2040] & 4) == 0 )
    YS::STOP::start((YS::STOP *const)(unsigned int)((_DWORD)this + 1304), id, time);
}


---
---
---
appears in:
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\B_EX120\b_ex.bdscript
L9190:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushImm 14
 pushImmf 0
 pushFromPSpVal 0
 syscall 6, 46 ; trap_obj_rc_stop_all (4 in, 0 out)
 pushFromFSp 0
 pushFromPAi L18270 ; ___ai '10' (L18270)
 pushFromPSpVal 0
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 pushFromPSpVal 0
 pushImmf 300
 pushImm 0
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromFSp 4
 pushFromPSpVal 0
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 gosub 4, L9304
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 253
 pushImmf 0
 gosub 12, L9316
 drop 
 pushFromPSpVal 0
 gosub 4, L9347
 pushFromFSp 4
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 4
 pushImm L9443
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromPSpVal 0
 pushFromPAi L18279 ; ___ai 'rc_dance_counter' (L18279)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromPAi L18296 ; ___ai 'set star' (L18296)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPSpVal 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 ret 
