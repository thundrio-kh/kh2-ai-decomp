---
---
---
name: trap_create_active_path
---
---
---
category: path
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push target_obj ; (YS::OBJ_125) (An target object to path to)
syscall 5, 8 ; trap_create_active_path (2 in, 0 out)
---
---
---
description: Creates an active path from one object to another
---
---
---
decompiled code:
void __fastcall YS::OBJ::create_active_path(YS::OBJ_133 *const this, YS::OBJ_133 *target_obj)
/----- (0000000000659974) ----------------------------------------------------
void __fastcall Ti::trap_create_active_path(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r31
  YS::OBJ_133 *v5; // r30
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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = (YS::OBJ_133 *)*(unsigned int *)(v2 + 4);
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
  YS::OBJ::create_active_path(v5, (YS::OBJ_133 *)*(unsigned int *)(v4 + 4));
}
// 659998: variable 'back_chain' is possibly undefined
->
/----- (0000000000471B7C) ----------------------------------------------------
void __fastcall YS::OBJ::create_active_path(YS::OBJ_133 *const this, YS::OBJ_133 *target_obj)
{
  Ti::Path_3 *v3; // r3

  v3 = (Ti::Path_3 *)*(unsigned int *)&(*this)[1288];
  if ( (_DWORD)v3 )
    Ti::Path::reset_active_path(v3, this, target_obj);
  else
    *(_DWORD *)&(*this)[1288] = (unsigned int)Ti::Path::CreateActivePath(this, target_obj);
}


---
---
---
appears in:
obj\M_EX900\m_ex.bdscript ((M) Assassin)
---
---
---
example usage from obj\M_EX900\m_ex.bdscript
L5933:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 pushFromFSp 12
 syscall 5, 8 ; trap_create_active_path (2 in, 0 out)
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 0
 memcpy 0
 pushFromFSp 0
 pushImmf 10
 syscall 5, 3 ; trap_get_path_dir (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromFSp 12
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 popToSp 64
 pushImm 1
 popToSp 16
 pushFromPSp 32
 fetchValue 12
 pushImmf 0
 subf 
 supzf 
 jz L6245
 pushFromFSp 0
 pushFromPSp 32
 pushFromFSp 8
 fetchValue 8
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 100
 memcpy 0
 pushFromFSp 0
 pushFromPSp 32
 pushFromFSp 8
 fetchValue 0
 pushFromFSp 8
 fetchValue 4
 syscall 1, 119 ; trap_obj_check_step (4 in, 1 out)
 popToSp 20
 pushFromFSp 20
 dup 
 pushImm 1
 sub 
 jz L6077
 dup 
 pushImm 2
 sub 
 jz L6077
 jmp L6198
